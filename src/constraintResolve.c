/*
*
** constraintResolve.c
*/

//#define DEBUGPRINT 1

# include <ctype.h> /* for isdigit */
# include "lclintMacros.nf"
# include "basic.h"
# include "cgrammar.h"
# include "cgrammar_tokens.h"

# include "exprChecks.h"
# include "aliasChecks.h"
# include "exprNodeSList.h"
//# include "exprData.i"


/*@access constraint, exprNode @*/

static bool rangeCheck (arithType ar1, /*@observer@*/ constraintExpr expr1, arithType ar2, /*@observer@*/ constraintExpr expr2);

static constraint  inequalitySubstituteUnsound  (/*@returned@*/ constraint c, constraintList p);

static constraint constraint_searchandreplace (/*@returned@*/ constraint c, constraintExpr old, constraintExpr new);


static constraint constraint_addOr (/*@returned@*/ constraint orig, /*@observer@*/ constraint or);

static bool resolveOr (/*@observer@*/ constraint c, /*@observer@*/ constraintList list);

static /*@only@*/ constraintList reflectChangesEnsuresFree1 (/*@only@*/ constraintList pre2, constraintList post1);

/*********************************************/




/*@only@*/ constraintList constraintList_mergeEnsuresFreeFirst (constraintList list1, constraintList list2)
{
  constraintList ret;

  ret = constraintList_mergeEnsures (list1, list2);

  constraintList_free(list1);
  return ret;
}
					    
/*@only@*/ constraintList constraintList_mergeEnsures (constraintList list1, constraintList list2)
{
  constraintList ret;
  constraintList temp;

  //ret = constraintList_makeNew();

  llassert(constraintList_isDefined(list1) );
  llassert(constraintList_isDefined(list2) );

  DPRINTF(( message ("constraintList_mergeEnsures: list1 %s list2 %s",
		     constraintList_print(list1), constraintList_print(list2)
		     )));
  
  ret = constraintList_fixConflicts (list1, list2);
  ret = reflectChangesEnsuresFree1 (ret, list2);
  temp = constraintList_subsumeEnsures (ret, list2);
  constraintList_free(ret);
  ret = temp;

  temp = constraintList_subsumeEnsures (list2, ret);

  temp = constraintList_addList (temp, ret);
  constraintList_free(ret);
  
  DPRINTF(( message ("constraintList_mergeEnsures: returning %s ",
		     constraintList_print(temp) )
		     ));
  

  return temp;
  //ret = constraintList_addList (ret, list2);
  //return ret;
}


/*@only@*/ constraintList constraintList_mergeRequiresFreeFirst (/*@only@*/ constraintList list1, constraintList list2)
{
  constraintList ret;

  ret = constraintList_mergeRequires(list1, list2);

  constraintList_free(list1);

  return ret;
}

/*@only@*/ constraintList constraintList_mergeRequires (constraintList list1, constraintList list2)
{
  constraintList ret;
  constraintList temp;

  DPRINTF((message ("constraintList_mergeRequires: merging  %s and %s ", constraintList_print (list1), constraintList_print(list2) ) ) );

  /* get constraints in list1 not satified by list2 */
  temp = reflectChanges (list1, list2);
  DPRINTF((message ("constraintList_mergeRequires: temp = %s", constraintList_print(temp) ) ) );

/*get constraints in list2 not satified by temp*/
  ret = reflectChanges (list2, temp);
 
  DPRINTF((message ("constraintList_mergeRequires: ret =  %s", constraintList_print(ret) ) ) );
  
  ret = constraintList_addListFree (ret, temp);
  
  DPRINTF((message ("constraintList_mergeRequires: returning  %s", constraintList_print(ret) ) ) );

  return ret;
}

void checkArgumentList (/*@out@*/ exprNode temp, exprNodeList arglist, fileloc sequencePoint)
{
  temp->requiresConstraints = constraintList_makeNew();
  temp->ensuresConstraints = constraintList_makeNew();
  temp->trueEnsuresConstraints = constraintList_makeNew();
  temp->falseEnsuresConstraints = constraintList_makeNew();
  
  exprNodeList_elements (arglist, el)
    {
      constraintList temp2;
      exprNode_exprTraverse (el, FALSE, FALSE, sequencePoint);
      temp2 = el->requiresConstraints;
      el->requiresConstraints = exprNode_traversRequiresConstraints(el);
      constraintList_free(temp2);

      temp2 = el->ensuresConstraints;
      el->ensuresConstraints  = exprNode_traversEnsuresConstraints(el);
      constraintList_free(temp2);

      temp->requiresConstraints = constraintList_addList(temp->requiresConstraints,
							    el->requiresConstraints);
      
      temp->ensuresConstraints = constraintList_addList(temp->ensuresConstraints,
							   el->ensuresConstraints);
    }
  end_exprNodeList_elements;
  
}

constraintList checkCall (exprNode fcn, exprNodeList arglist)
{
  constraintList preconditions;
  uentry temp;
  DPRINTF ( (message ("Got call that %s ( %s) ",  exprNode_unparse(fcn),   exprNodeList_unparse (arglist ) ) ) );

  temp = exprNode_getUentry (fcn);

  preconditions = uentry_getFcnPreconditions (temp);

  if (preconditions != constraintList_undefined)
    {
      preconditions = constraintList_togglePost (preconditions);
      preconditions = constraintList_preserveCallInfo(preconditions, fcn);
      preconditions = constraintList_doSRefFixConstraintParam (preconditions, arglist);
    }
  else
    {
      if (preconditions == NULL)
	preconditions = constraintList_makeNew();
    }
  DPRINTF (( message("Done checkCall\n") ));
  DPRINTF (( message("Returning list %q ", constraintList_printDetailed(preconditions) ) ));
  return preconditions;
}

constraintList getPostConditions (exprNode fcn, exprNodeList arglist, exprNode fcnCall)
{
  constraintList postconditions;
  uentry temp;
  DPRINTF ( (message ("Got call that %s ( %s) ",  exprNode_unparse(fcn),   exprNodeList_unparse (arglist ) ) ) );

  temp = exprNode_getUentry (fcn);

  postconditions = uentry_getFcnPostconditions (temp);

  if (postconditions != constraintList_undefined)
    {
      postconditions = constraintList_doFixResult (postconditions, fcnCall);
      postconditions = constraintList_doSRefFixConstraintParam (postconditions, arglist);
    }
  else
    {
      postconditions = constraintList_makeNew();
    }
  
  return postconditions;
}

void mergeResolve (exprNode parent, exprNode child1, exprNode child2)
{
  constraintList temp, temp2;

  DPRINTF( (message ("magically merging constraint into parent:%s for", exprNode_unparse (parent) )) );

  DPRINTF( (message (" children:  %s and %s", exprNode_unparse (child1), exprNode_unparse(child2) ) ) );

  if (exprNode_isError (child1)  || exprNode_isError(child2) )
    {
      if (exprNode_isError (child1) && !exprNode_isError(child2) )
	 {
	   constraintList_free(parent->requiresConstraints);

	   parent->requiresConstraints = constraintList_copy (child2->requiresConstraints);
	   constraintList_free(parent->ensuresConstraints);

	   parent->ensuresConstraints = constraintList_copy (child2->ensuresConstraints);
	   DPRINTF((message ("Copied child constraints: pre: %s and post: %s",
			     constraintList_print( child2->requiresConstraints),
			     constraintList_print (child2->ensuresConstraints)
			     )
		    ));
	   return;
	 }
       else
	 {
	   llassert(exprNode_isError(child2) );
	   //parent->requiresConstraints = constraintList_makeNew();
	   //parent->ensuresConstraints = constraintList_makeNew();
	   return;
	 }
     }

   llassert(!exprNode_isError (child1)  && ! exprNode_isError(child2) );
   
   DPRINTF( (message ("Child constraints are %s %s and %s %s",
		     constraintList_print (child1->requiresConstraints),
		     constraintList_print (child1->ensuresConstraints),
		     constraintList_print (child2->requiresConstraints),
		     constraintList_print (child2->ensuresConstraints)
		     ) ) );
 
 
   constraintList_free(parent->requiresConstraints);

  parent->requiresConstraints = constraintList_copy (child1->requiresConstraints);

  if ( context_getFlag (FLG_ORCONSTRAINT) )
    temp = reflectChangesOr (child2->requiresConstraints, child1->ensuresConstraints);
  else
    temp = reflectChanges (child2->requiresConstraints, child1->ensuresConstraints);

  temp2 = constraintList_mergeRequires (parent->requiresConstraints, temp);
  constraintList_free(parent->requiresConstraints);
  constraintList_free(temp);
  
  parent->requiresConstraints = temp2;

  DPRINTF( (message ("Parent requires constraints are %s  ",
		     constraintList_print (parent->requiresConstraints)
		     ) ) );

   constraintList_free(parent->ensuresConstraints);

  parent->ensuresConstraints = constraintList_mergeEnsures(child1->ensuresConstraints,
							   child2->ensuresConstraints);

  
  DPRINTF( (message ("Parent constraints are %s and %s ",
		     constraintList_print (parent->requiresConstraints),
		     constraintList_print (parent->ensuresConstraints)
		     ) ) );
 
}


  
  
/*@only@*/ constraintList constraintList_subsumeEnsures (constraintList list1, constraintList list2)
{
  constraintList ret;
  ret = constraintList_makeNew();
  constraintList_elements (list1, el)
    {
      
      DPRINTF ((message ("Examining %s", constraint_print (el) ) ) );
      if (!resolve (el, list2) )
	{
	  constraint temp;
	  temp = constraint_copy(el);
	  ret = constraintList_add (ret, temp);
	}
      else
	{
	  DPRINTF ( (message ("Subsuming %s", constraint_print (el) ) ) );
	}
    } end_constraintList_elements;

    return ret;
}



/* tries to resolve constraints in list pre2 using post1 */
/*@only@*/ constraintList reflectChangesFreePre (/*@only@*/ constraintList pre2, /*@observer@*/ constraintList post1)
{
  constraintList ret;
  
  ret = reflectChanges (pre2, post1);

  constraintList_free (pre2);
  
  return ret;
}


/* tries to resolve constraints in list pre2 using post1 */
/*@only@*/ constraintList reflectChanges (/*@observer@*/ constraintList pre2, /*@observer@*/ constraintList post1)
{
  
  constraintList ret;
  constraint temp;
  constraint temp2;

  ret = constraintList_makeNew();
  DPRINTF((message ("reflectChanges: lists %s and %s", constraintList_print(pre2), constraintList_print(post1) )));
  
  constraintList_elements (pre2, el)
    {
      if (!resolve (el, post1) )
	{
	  temp = substitute (el, post1);
	  if (!resolve (temp, post1) )
	    {
	      // try inequality substitution
	      //constraint temp2;
	      
	      // the inequality substitution may cause us to lose information
	      //so we don't want to store the result but we do it anyway
	      temp2 = constraint_copy (temp);
	      //	          if (context_getFlag (FLG_ORCONSTRAINT) )
	         temp2 = inequalitySubstitute (temp2, post1); 
		      if (!resolve (temp2, post1) )
			{
			  temp2 = inequalitySubstituteUnsound (temp2, post1); 
			  if (!resolve (temp2, post1) )
			      ret = constraintList_add (ret, temp2);
			}
	    }
	  constraint_free(temp);
	}
    } end_constraintList_elements;

    DPRINTF((message ("reflectChanges: returning %s", constraintList_print(ret) ) ) );
    return ret;
}


static constraint constraint_addOr (/*@returned@*/ constraint orig, /*@observer@*/ constraint or)
{
  constraint c;
  c = orig;

  DPRINTF((message("constraint_addor: oring %s onto %s", constraint_printOr(or), constraint_printOr(orig) ) ));
  
  while (c->or != NULL)
    {
      c = c->or;
    }
  c->or = constraint_copy(or);

  DPRINTF((message("constraint_addor: returning %s",constraint_printOr(orig) ) ));
  
  return orig;
}


static bool resolveOr (/*@observer@*/ constraint c, /*@observer@*/ constraintList list)
{
  constraint temp;

  DPRINTF(( message("resolveOr: constraint %s and list %s", constraint_printOr(c), constraintList_print(list) ) ));
  temp = c;

  do
    {
      if (resolve (temp, list) )
	return TRUE;
      temp = temp->or;
    }
  while (constraint_isDefined(temp));

  return FALSE;
}

/*This is a "helper" function for doResolveOr */

static /*@only@*/ constraint doResolve (/*@only@*/ constraint c, constraintList post1, bool * resolved)
{
  constraint temp;
  
 if (!resolveOr (c, post1) )
	{

	  temp = substitute (c, post1);
	  
	  if (!resolveOr (temp, post1) )
	    {
	      // try inequality substitution
	      constraint temp2;
	      
	      // the inequality substitution may cause us to lose information
	      //so we don't want to store the result but we do it anyway
	      temp2 = constraint_copy (c);
	      //	          if (context_getFlag (FLG_ORCONSTRAINT) )
	      temp2 = inequalitySubstitute (temp2, post1); 
	      if (!resolveOr (temp2, post1) )
		{
		  temp2 = inequalitySubstituteUnsound (temp2, post1); 
		  if (!resolveOr (temp2, post1) )
		    {
		      if (!constraint_same (temp, temp2) )
			temp = constraint_addOr (temp, temp2);
		      *resolved = FALSE;

		      constraint_free(temp2);
		      constraint_free(c);
	  
		      return temp;
		    }
		}
	      
	      constraint_free(temp2);
	    }
	  constraint_free(temp);
	}
 
 constraint_free(c);
 
 *resolved = TRUE;
 return NULL;



}

static /*@only@*/ constraint doResolveOr (constraint c, constraintList post1, /*@out@*/bool * resolved)
{
  constraint ret;
  constraint next;
  constraint curr;
  
  *resolved = FALSE;
  ret = constraint_copy(c);
  next = ret->or;
  ret->or = NULL;

  ret = doResolve (ret, post1, resolved);

  if (*resolved)
    {
      if (next)
	constraint_free(next);

      /*we don't need to free ret is resolved is false*/
      //      constraint_free(ret);
      return NULL;
    }

  while (next != NULL)
    {
      curr = next;
      next = curr->or;
      curr->or = NULL;

      curr = doResolve (curr, post1, resolved);
      if (*resolved)
	{
	  /* curr is null so we don't try to free it*/
	  //constraint_free(curr);
	  
	  if (next)
	    constraint_free(next);
	  constraint_free(ret);
	  return NULL;
	}
      ret = constraint_addOr (ret, curr);
      constraint_free(curr);
    }

  return ret;
}





/* tries to resolve constraints in list pr2 using post1 */
/*@only@*/ constraintList reflectChangesOr (constraintList pre2, constraintList post1)
{
  bool resolved;
  constraintList ret;
  constraint temp;
  ret = constraintList_makeNew();
  DPRINTF((message ("reflectChangesOr: lists %s and %s", constraintList_print(pre2), constraintList_print(post1) )));
  
  constraintList_elements (pre2, el)
    {
      temp = doResolveOr (el, post1, &resolved);

      if (!resolved)
	{
	  ret = constraintList_add(ret, temp);
	}
    } end_constraintList_elements;

    DPRINTF((message ("reflectChangesOr: returning %s", constraintList_print(ret) ) ) );
    return ret;
}
static /*@only@*/ constraintList reflectChangesEnsures (/*@observer@*/ constraintList pre2, constraintList post1)
{  
  constraintList ret;
  constraint temp;
  ret = constraintList_makeNew();
  constraintList_elements (pre2, el)
    {
      if (!resolve (el, post1) )
	{
	  temp = substitute (el, post1);
	  llassert (temp != NULL);

	  if (!resolve (temp, post1) )
	    ret = constraintList_add (ret, temp);
	}
      else
	{
	  DPRINTF ( (message ("Resolved away %s ", constraint_print(el) ) ) );
	}
    } end_constraintList_elements;

    return ret;
}


static /*@only@*/ constraintList reflectChangesEnsuresFree1 (/*@only@*/ constraintList pre2, constraintList post1)
{
  constraintList ret;

  ret = reflectChangesEnsures (pre2, post1);
  
  constraintList_free(pre2);

  return ret;
}


static bool constraint_conflict (constraint c1, constraint c2)
{
  
  if (constraintExpr_similar(c1->lexpr, c2->lexpr) )
    {
      if (c1->ar == EQ)
	if (c1->ar == c2->ar)
	  {
	    DPRINTF ( (message ("%s conflicts with %s ", constraint_print (c1), constraint_print(c2) ) ) );
	    return TRUE;
	  }
    }  

  DPRINTF ( (message ("%s doesn't conflict with %s ", constraint_print (c1), constraint_print(c2) ) ) );

  return FALSE; 

}

static void constraint_fixConflict ( constraint good, /*@observer@*/ constraint conflicting) /*@modifies good@*/
{
  if (conflicting->ar ==EQ )
    {
      good->expr = constraintExpr_searchandreplace (good->expr, conflicting->lexpr, conflicting->expr);
      good = constraint_simplify (good);
    }


}

static bool conflict (constraint c, constraintList list)
{

  constraintList_elements (list, el)
    {
      if ( constraint_conflict(el, c) )
	{
	  constraint_fixConflict (el, c);
	  return TRUE;
	}
    } end_constraintList_elements;

    return FALSE;

}

//check if constraint in list1 conflicts with constraints in List2.  If so we
//remove form list1 and change list2.
constraintList constraintList_fixConflicts (constraintList list1, constraintList list2)
{
  constraintList ret;
  ret = constraintList_makeNew();
  llassert(constraintList_isDefined(list1) );
  constraintList_elements (list1, el)
    {
      if (! conflict (el, list2) )
	{
	  constraint temp;
	  temp = constraint_copy(el);
	  ret = constraintList_add (ret, temp);
	}
    } end_constraintList_elements;

    return ret;
}

/*returns true if constraint post satifies cosntriant pre */
static bool satifies (constraint pre, constraint post)
{
  if (constraint_isAlwaysTrue (pre)  )
    return TRUE;
  
  if (!constraintExpr_similar (pre->lexpr, post->lexpr) )
    {
      return FALSE;
    }
  if (post->expr == NULL)
    {
      llassert(FALSE);
      return FALSE;
    }

  return rangeCheck (pre->ar, pre->expr, post->ar, post->expr);
}


bool resolve (/*@observer@*/ constraint c, /*@observer@*/ constraintList p)
{
  constraintList_elements (p, el)
    {
      if ( satifies (c, el) )
	{
	  DPRINTF ( (message ("\n%s Satifies %s\n ", constraint_print(el), constraint_print(c) ) ) );
	  return TRUE;
	}
        DPRINTF ( (message ("\n%s does not satify %s\n ", constraint_print(el), constraint_print(c) ) ) );
    }
  end_constraintList_elements;
  DPRINTF ( (message ("no constraints satify %s", constraint_print(c) ) ));
  return FALSE;
}

static bool arithType_canResolve (arithType ar1, arithType ar2)
{
  switch (ar1)
    {
    case GTE:
    case GT:
      if ( (ar2 == GT) || (ar2 == GTE) || (ar2 == EQ) )
	{
	  return TRUE;
	}
      break;

    case EQ:
      if (ar2 == EQ)
	return TRUE;
      break;

    case LT:
    case LTE:
      //      llassert(FALSE); 
      if ( (ar2 == LT) || (ar2 == LTE) || (ar2 == EQ) )
	return TRUE;
      break;
    default:
      return FALSE;
    }
  return FALSE;	  
}

/* We look for constraint which are tautologies */

bool constraint_isAlwaysTrue (/*@observer@*/ constraint c)
{
  constraintExpr l, r;
  bool /*@unused@*/ lHasConstant, rHasConstant;
  int /*@unused@*/ lConstant, rConstant;
  
  l = c->lexpr;
  r = c->expr;

  DPRINTF(( message("constraint_IsAlwaysTrue:examining %s", constraint_print(c) ) ));
    
  if (constraintExpr_canGetValue(l) && constraintExpr_canGetValue(r) )
    {
      int cmp;
      cmp = constraintExpr_compare (l, r);
      switch (c->ar)
	{
	case EQ:
	  return (cmp == 0);
	case GT:
	  return (cmp > 0);
	case GTE:
	  return (cmp >= 0);
	case LTE:
	  return (cmp <= 0);
	case LT:
	  return (cmp < 0);

	default:
	  BADEXIT;
	  /*@notreached@*/
	  break;
	}
    }

  if (constraintExpr_similar (l,r) )
    {
      switch (c->ar)
	{
	case EQ:
	case GTE:
	case LTE:
	  return TRUE;
	  
	case GT:
	case LT:
	  break;
	default:
	  BADEXIT;
	  /*@notreached@*/
	  break;
	}
    }

  l = constraintExpr_copy (c->lexpr);
  r = constraintExpr_copy (c->expr);

  //  l = constraintExpr_propagateConstants (l, &lHasConstant, &lConstant);
  r = constraintExpr_propagateConstants (r, &rHasConstant, &rConstant);

  if (constraintExpr_similar (l,r) && (rHasConstant ) )
    {
      DPRINTF(( message("constraint_IsAlwaysTrue: after removing constants  %s and %s are similar", constraintExpr_unparse(l), constraintExpr_unparse(r) ) ));
      DPRINTF(( message("constraint_IsAlwaysTrue: rconstant is  %d", rConstant ) ));
      
      constraintExpr_free(l);
      constraintExpr_free(r);
      
      switch (c->ar)
	{
	case EQ:
	  return (rConstant == 0);
	case LT:
	  return (rConstant > 0);
	case LTE:
	  return (rConstant >= 0);
	case GTE:
	  return (rConstant <= 0);
	case GT:
	  return (rConstant < 0);
	  
	default:
	  BADEXIT;
	  /*@notreached@*/
	  break;
	}
    }  
      else
      {
	constraintExpr_free(l);
	constraintExpr_free(r);
	DPRINTF(( message("Constraint %s is not always true", constraint_print(c) ) ));
	return FALSE;
      }
  
  BADEXIT;
}

static bool rangeCheck (arithType ar1, /*@observer@*/ constraintExpr expr1, arithType ar2, /*@observer@*/ constraintExpr expr2)

{
  DPRINTF ((message ("Doing Range CHECK %s and %s", constraintExpr_unparse(expr1), constraintExpr_unparse(expr2) ) ));

  if (! arithType_canResolve (ar1, ar2) )
    return FALSE;
  
  switch (ar1)
 {
 case GTE:
      if (constraintExpr_similar (expr1, expr2) )
	 return TRUE;
      /*@fallthrough@*/
 case GT:
   if (!  (constraintExpr_canGetValue (expr1) &&
	   constraintExpr_canGetValue (expr2) ) )
     {
       constraintExpr e1, e2;
       bool p1, p2;
       int const1, const2;
       
       e1 = constraintExpr_copy(expr1);
       e2 = constraintExpr_copy(expr2);

       e1 = constraintExpr_propagateConstants (e1, &p1, &const1);

       e2 = constraintExpr_propagateConstants (e2, &p2, &const2);

       if (p1 && p2)
	 if (const1 <= const2)
	   if (constraintExpr_similar (e1, e2) )
	     {
	       constraintExpr_free(e1);
	       constraintExpr_free(e2);
	       return TRUE;
	     }
       
       DPRINTF( ("Can't Get value"));
       
       constraintExpr_free(e1);
       constraintExpr_free(e2);
       return FALSE;
     }
   
   if (constraintExpr_compare (expr2, expr1) >= 0)
     return TRUE;
  
  return FALSE;
 case EQ:
   if (constraintExpr_similar (expr1, expr2) )
	 return TRUE;
   
   return FALSE;
 case LTE:
   if (constraintExpr_similar (expr1, expr2) )
	 return TRUE;
   /*@fallthrough@*/
 case LT:
    if (!  (constraintExpr_canGetValue (expr1) &&
	   constraintExpr_canGetValue (expr2) ) )
     {
      constraintExpr e1, e2;
       bool p1, p2;
       int const1, const2;
       
       e1 = constraintExpr_copy(expr1);
       e2 = constraintExpr_copy(expr2);

       e1 = constraintExpr_propagateConstants (e1, &p1, &const1);

       e2 = constraintExpr_propagateConstants (e2, &p2, &const2);

       if (p1 && p2)
	 if (const1 >= const2)
	   if (constraintExpr_similar (e1, e2) )
	     {
	       constraintExpr_free(e1);
	       constraintExpr_free(e2);
	       return TRUE;
	     }
       constraintExpr_free(e1);
       constraintExpr_free(e2);
       
       DPRINTF( ("Can't Get value"));
       return FALSE;
     }
   
   if (constraintExpr_compare (expr2, expr1) <= 0)
     return TRUE;

   return FALSE;
   
 default:
     llcontbug((message("Unhandled case in switch: %q", arithType_print(ar1) ) ) );
 }
  BADEXIT;
}


static constraint constraint_searchandreplace (/*@returned@*/ constraint c, constraintExpr old, constraintExpr new)
{
  DPRINTF (("Doing replace for lexpr") );
  c->lexpr = constraintExpr_searchandreplace (c->lexpr, old, new);
  DPRINTF (("Doing replace for expr") );
  c->expr = constraintExpr_searchandreplace (c->expr, old, new);
  return c;
}

bool constraint_search (constraint c, constraintExpr old) /*@*/
{
  bool ret;
  ret = FALSE;

  ret  = constraintExpr_search (c->lexpr, old);
  ret = ret || constraintExpr_search (c->expr, old);
  return ret;
}

//adjust file locs and stuff
static constraint constraint_adjust (/*@returned@*/ constraint substitute, /*@observer@*/ constraint old)
{
  fileloc loc1, loc2, loc3;

  DPRINTF ( (message("Start adjust on %s and %s", constraint_print(substitute),
		     constraint_print(old))
		   ));

  loc1 = constraint_getFileloc (old);

  loc2 = constraintExpr_getFileloc (substitute->lexpr);

  loc3 = constraintExpr_getFileloc (substitute->expr);

  
  // special case of an equality that "contains itself"
  if (constraintExpr_search (substitute->expr, substitute->lexpr) )
      if (fileloc_closer (loc1, loc3, loc2))
      {
	constraintExpr temp;
	DPRINTF ( (message("Doing adjust on %s", constraint_print(substitute) )
		   ));
	temp = substitute->lexpr;
	substitute->lexpr = substitute->expr;
	substitute->expr  = temp;
	substitute = constraint_simplify(substitute);
      }

  fileloc_free (loc1);
  fileloc_free (loc2);
  fileloc_free (loc3);

  return substitute;
  
}

/* If function preforms substitutes based on inequality

   It uses the rule x >= y && b < y  ===> x >= b + 1

   Warning this is sound but throws out information
 */
constraint  inequalitySubstitute  (/*@returned@*/ constraint c, constraintList p)
{
  if (c->ar != GTE)
    return c;
  
  constraintList_elements (p, el)
    {
       if ( el->ar == LT)
	 //	 if (!constraint_conflict (c, el) )
	   {
	     //constraint temp;
	     constraintExpr  temp2;
	     
	     /*@i22*/

	     //temp = constraint_copy(el);
	     
	     //	     temp = constraint_adjust(temp, c);

	     if (constraintExpr_same (el->expr, c->expr) )
	       {
		 DPRINTF((message ("inequalitySubstitute Replacing %s in %s with  %s",
				   constraintExpr_print (c->expr),
				   constraint_print (c),
				   constraintExpr_print (el->expr) )
			  ));
		 temp2   = constraintExpr_copy (el->lexpr);
		 constraintExpr_free(c->expr);
		 c->expr =  constraintExpr_makeIncConstraintExpr (temp2);
	       }
	     
	   }
    }
  end_constraintList_elements;

  c = constraint_simplify(c);
  return c;
}

/* This function performs substitutions based on the rule:
   for a constraint of the form expr1 >= expr2;   a < b =>
   a = b -1 for all a in expr1.  This will work in most cases.

   Like inequalitySubstitute we're throwing away some information
*/

static constraint  inequalitySubstituteUnsound  (/*@returned@*/ constraint c, constraintList p)
{
  DPRINTF (( message ("Doing inequalitySubstituteUnsound " ) ));
  
  if (c->ar != GTE)
    return c;
  
  constraintList_elements (p, el)
    {
  DPRINTF (( message ("inequalitySubstituteUnsound examining substituting %s on %s", constraint_print(el), constraint_print(c) ) ));      
       if ( ( el->ar == LTE) || (el->ar == LT) )
	 //	 if (!constraint_conflict (c, el) )
	   {
	     // constraint temp;
	     constraintExpr  temp2;
	     
	     //temp = constraint_copy(el);
	     
	     //	     temp = constraint_adjust(temp, c);
	     temp2   = constraintExpr_copy (el->expr);
	     
	     if (el->ar == LT)
	       temp2  =  constraintExpr_makeDecConstraintExpr (temp2);
	     
	     DPRINTF((message ("Replacing %s in %s with  %s",
			       constraintExpr_print (el->lexpr),
			       constraintExpr_print (c->lexpr),
			       constraintExpr_print (temp2) ) ));
	     
	     c->lexpr = constraintExpr_searchandreplace (c->lexpr, el->lexpr, temp2);
	     constraintExpr_free(temp2);
	   }
    }
  end_constraintList_elements;

  c = constraint_simplify(c);
  return c;
}

/*@only@*/ constraint substitute (/*@observer@*/ constraint c, constraintList p)
{
  constraint ret;

  ret = constraint_copy(c);
  constraintList_elements (p, el)
    {
       if ( el->ar == EQ)
	 if (!constraint_conflict (ret, el) )

	   {
	     constraint temp;
	     
	     temp = constraint_copy(el);
	     
	     temp = constraint_adjust(temp, ret);

	     DPRINTF((message ("Substituting %s in the constraint %s",
			       constraint_print (temp), constraint_print (ret)
			       ) ) );
			       
	  
	     ret = constraint_searchandreplace (ret, temp->lexpr, temp->expr);
	     DPRINTF(( message ("The new constraint is %s", constraint_print (ret) ) ));
	     constraint_free(temp);
	   }
    }
  end_constraintList_elements;
  DPRINTF(( message ("The finial new constraint is %s", constraint_print (ret) ) ));

  ret = constraint_simplify(ret);
  return ret;
}


/*@only@*/ constraintList constraintList_substituteFreeTarget (/*@only@*/ constraintList target, /*@observer@*/ constraintList subList)
{
constraintList ret;

ret = constraintList_substitute (target, subList);

constraintList_free(target);

return ret;
}

/* we try to do substitutions on each constraint in target using the constraint in sublist*/

/*@only@*/ constraintList constraintList_substitute (constraintList target,/*2observer@*/  constraintList subList)
{

  constraintList ret;

  ret = constraintList_makeNew();
  
  constraintList_elements(target, el)
  { 
    constraint temp;
    #warning make sure this side effect is the right things
    #warning make sure that a side effect is not expected

    temp = substitute(el, subList);
    ret = constraintList_add (ret, temp);
  }
  end_constraintList_elements;

  return ret;
}

constraint constraint_solve (/*@returned@*/ constraint c)
{
  DPRINTF( (message ("Solving %s\n", constraint_print(c) ) ) );
  c->expr = constraintExpr_solveBinaryExpr (c->lexpr, c->expr);
  DPRINTF( (message ("Solved and got %s\n", constraint_print(c) ) ) );

  return c;
}

static arithType flipAr (arithType ar)
{
  switch (ar)
    {
    case LT:
      return GT;
    case LTE:
      return GTE;
    case EQ:
      return EQ;
    case GT:
      return LT;
    case GTE:
      return LTE;
    default:
      llcontbug (message("unexpected value: case not handled"));
    }
  BADEXIT;
}

static constraint  constraint_swapLeftRight (/*@returned@*/ constraint c)
{
  constraintExpr temp;
  c->ar = flipAr (c->ar);
  temp = c->lexpr;
  c->lexpr = c->expr;
  c->expr = temp;
  DPRINTF(("Swaped left and right sides of constraint"));
  return c;
}



constraint constraint_simplify ( /*@returned@*/ constraint c)
{
  c->lexpr = constraintExpr_simplify (c->lexpr);
  c->expr  = constraintExpr_simplify (c->expr);

  if (constraintExpr_isBinaryExpr (c->lexpr) )
    {
      c = constraint_solve (c);
      
      c->lexpr = constraintExpr_simplify (c->lexpr);
      c->expr  = constraintExpr_simplify (c->expr);
    }
  
  if (constraintExpr_isLit(c->lexpr) && (!constraintExpr_isLit(c->expr) ) )
    {
      c = constraint_swapLeftRight(c);
      /*I don't think this will be an infinate loop*/
      c = constraint_simplify(c);
    }
  return c;
}




/* returns true  if fileloc for term1 is closer to file for term2 than term3*/

bool fileloc_closer (fileloc  loc1, fileloc  loc2, fileloc  loc3)
{

  if  (!fileloc_isDefined (loc1) )
    return FALSE;

  if  (!fileloc_isDefined (loc2) )
    return FALSE;

  if  (!fileloc_isDefined (loc3) )
    return TRUE;

  
  
  
  if (fileloc_equal (loc2, loc3) )
    return FALSE;

  if (fileloc_equal (loc1, loc2) )
    return TRUE;

    if (fileloc_equal (loc1, loc3) )
    return FALSE;

   if ( fileloc_lessthan (loc1, loc2) )
     {
       if (fileloc_lessthan (loc2, loc3) )
	 {
	   llassert (fileloc_lessthan (loc1, loc3) );
	   return TRUE;
	 }
       else
	 {
	   return FALSE;
	 }
     }

   if ( !fileloc_lessthan (loc1, loc2) )
     {
       if (!fileloc_lessthan (loc2, loc3) )
	 {
	   llassert (!fileloc_lessthan (loc1, loc3) );
	   return TRUE;
	 }
       else
	 {
	   return FALSE;
	 }
     }

   llassert(FALSE);
   return FALSE;
}


