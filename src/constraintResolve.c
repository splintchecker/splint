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

#include "constraintExpr.h"



constraintList reflectChanges (constraintList pre2, constraintList post1);
constraint substitute (constraint c, constraintList p);
constraint constraint_searchandreplace (constraint c, constraintExpr old, constraintExpr new);
bool rangeCheck (arithType ar1, constraintExpr expr1, arithType ar2, constraintExpr expr2);
bool satifies (constraint pre, constraint post);
bool resolve (constraint c, constraintList p);
constraintList reflectChangesEnsures (constraintList pre2, constraintList post1);
constraint constraint_simplify (constraint c);

constraintList constraintList_fixConflicts (constraintList list1, constraintList list2);

constraintList constraintList_subsumeEnsures (constraintList list1, constraintList list2);

constraintList constraintList_mergeEnsures (constraintList list1, constraintList list2);
constraint  inequalitySubstitute  (constraint c, constraintList p);

/*********************************************/

					    
constraintList constraintList_mergeEnsures (constraintList list1, constraintList list2)
{
  constraintList ret;
  constraintList temp;
  ret = constraintList_new();
  
  ret = reflectChangesEnsures (list1, list2);
  ret = constraintList_fixConflicts (ret, list2);
  ret = constraintList_subsumeEnsures (ret, list2);
  list2 = constraintList_subsumeEnsures (list2, ret);
  temp = constraintList_copy(list2);

  temp = constraintList_addList (temp, ret);
  return temp;
  //ret = constraintList_addList (ret, list2);
  //return ret;
}

					    
/* constraintList constraintList_resolveRequires (constraintList requires, constraintList ensures) */
/* { */
  
/*   constraintList ret; */
/*   constraintList temp; */
/*   ret = constraintList_new(); */
  
/*   ret = reflectChangesEnsures (list1, list2); */
/*   ret = constraintList_fixConflicts (ret, list2); */
/*   ret = constraintList_subsumeEnsures (ret, list2); */
/*   list2 = constraintList_subsumeEnsures (list2, ret); */
/*   temp = constraintList_copy(list2); */

/*   temp = constraintList_addList (temp, ret); */
/*   return temp; */
/*   //ret = constraintList_addList (ret, list2); */
/*   //return ret; */
/* } */


constraintList checkCall (exprNode fcn, exprNodeList arglist)
{
  constraintList preconditions;
  uentry temp;
  DPRINTF ( (message ("Got call that %s ( %s) ",  exprNode_unparse(fcn),   exprNodeList_unparse (arglist ) ) ) );

  temp = exprNode_getUentry (fcn);

  preconditions = uentry_getFcnPreconditions (temp);

  if (preconditions)
    {
      preconditions = constraintList_copy(preconditions);
      preconditions = constraintList_doSRefFixBaseParam (preconditions, arglist);
    }
  else
    {
      preconditions = constraintList_new();
    }
  
  return preconditions;
}

void mergeResolve (exprNode parent, exprNode child1, exprNode child2)
{
  constraintList temp;

  DPRINTF( (message ("magically merging constraint into parent:%s for", exprNode_unparse (parent) )));

  DPRINTF( (message (" children:  %s and %s", exprNode_unparse (child1), exprNode_unparse(child2) ) ) );

  if (exprNode_isError (child1)  || exprNode_isError(child2) )
     {
       if (exprNode_isError (child1) && !exprNode_isError(child2) )
	 {
	   parent->requiresConstraints = constraintList_copy (child2->requiresConstraints);
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
	   parent->requiresConstraints = constraintList_new();
	   parent->ensuresConstraints = constraintList_new();
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
 
  parent->requiresConstraints = constraintList_new();
  parent->ensuresConstraints = constraintList_new();

  parent->requiresConstraints = constraintList_copy (child1->requiresConstraints);
  
  temp = reflectChanges (child2->requiresConstraints, child1->ensuresConstraints);
  parent->requiresConstraints = constraintList_addList (parent->requiresConstraints, temp);

  parent->ensuresConstraints = constraintList_mergeEnsures(child1->ensuresConstraints,
							   child2->ensuresConstraints);
  
  DPRINTF( (message ("Parent constraints are %s and %s ",
		     constraintList_print (parent->requiresConstraints),
		     constraintList_print (parent->ensuresConstraints)
		     ) ) );
 
}


  
  
constraintList constraintList_subsumeEnsures (constraintList list1, constraintList list2)
{
  constraintList ret;
  ret = constraintList_new();
  constraintList_elements (list1, el)
    {
      
      DPRINTF ((message ("Examining %s", constraint_print (el) ) ) );
      if (!resolve (el, list2) )
	{
	    ret = constraintList_add (ret, el);
	}
      else
	{
	  DPRINTF ( (message ("Subsuming %s", constraint_print (el) ) ) );
	}
    } end_constraintList_elements;

    return ret;
}


constraintList reflectChanges (constraintList pre2, constraintList post1)
{
  
  constraintList ret;
  constraint temp;
  ret = constraintList_new();
  constraintList_elements (pre2, el)
    {
      if (!resolve (el, post1) )
	{
	  temp = substitute (el, post1);
	  if (!resolve (temp, post1) )
	    {
	      // try inequality substitution
	      constraint temp2;
	      
	      // the inequality substitution may cause us to lose information
	      //so we don't want to store the result but we do it anyway
	      temp2 = constraint_copy (temp);
	      temp2 = inequalitySubstitute (temp, post1);
	      if (!resolve (temp2, post1) )
		  ret = constraintList_add (ret, temp2);
	    }
	}
    } end_constraintList_elements;

    return ret;
}



constraintList reflectChangesEnsures (constraintList pre2, constraintList post1)
{  
  constraintList ret;
  constraint temp;
  ret = constraintList_new();
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


bool constraint_conflict (constraint c1, constraint c2)
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

void constraint_fixConflict (constraint good, constraint conflicting)
{
  constraint temp;
  if (conflicting->ar ==EQ )
    {
      good->expr = constraintExpr_searchandreplace (good->expr, conflicting->lexpr, conflicting->expr);
      temp = constraint_simplify (good);
      constraint_overWrite (good, temp);
    }


}

bool conflict (constraint c, constraintList list)
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

//check if constraint in list1 and conflict with constraints in List2.  If so we
//remove form list1 and (optionally) change list2.
constraintList constraintList_fixConflicts (constraintList list1, constraintList list2)
{
  constraintList ret;
  ret = constraintList_new();
  constraintList_elements (list1, el)
    {
      if (! conflict (el, list2) )
	{
	    ret = constraintList_add (ret, el);
	}
    } end_constraintList_elements;

    return ret;
  
    
}

bool resolve (constraint c, constraintList p)
{
  constraintList_elements (p, el)
    {
      if ( satifies (c, el) )
	{
	  DPRINTF ( (message ("\n%s Satifies %s\n ", constraint_print(el), constraint_print(c) ) ) );
	  return TRUE;
	}
    }
  end_constraintList_elements;
  DPRINTF ( (message ("no constraints satify %s", constraint_print(c) ) ));
  return FALSE;
}


/*returns true if cosntraint post satifies cosntriant pre */
bool satifies (constraint pre, constraint post)
{
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

bool arithType_canResolve (arithType ar1, arithType ar2)
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
    }
  return FALSE;	  
}

bool rangeCheck (arithType ar1, constraintExpr expr1, arithType ar2, constraintExpr expr2)

{
  DPRINTF ((message ("Doing Range CHECK %s and %s", constraintExpr_unparse(expr1), constraintExpr_unparse(expr2) ) ));

  if (! arithType_canResolve (ar1, ar2) )
    return FALSE;
  
  switch (ar1)
 {
 case GTE:
 case GT:
   if (!  (constraintExpr_canGetValue (expr1) &&
	   constraintExpr_canGetValue (expr2) ) )
     {
       DPRINTF( ("Can't Get value"));
       return FALSE;
     }
   
   if (constraintExpr_compare (expr2, expr1) >= 0)
     return TRUE;
  
  return FALSE;
 case EQ:
   if (constraintExpr_similar (expr1, expr2) )
	 return TRUE;
   
   return FALSE;
   
 default:
   DPRINTF(("case not handled"));
 }
  return FALSE;
}


constraint constraint_searchandreplace (constraint c, constraintExpr old, constraintExpr new)
{
  DPRINTF (("Doing replace for lexpr") );
  c->lexpr = constraintExpr_searchandreplace (c->lexpr, old, new);
  DPRINTF (("Doing replace for expr") );
  c->expr = constraintExpr_searchandreplace (c->expr, old, new);
  return c;
}

bool constraint_search (constraint c, constraintExpr old)
{
  bool ret;
  ret = FALSE;

  ret  = constraintExpr_search (c->lexpr, old);
  ret = ret || constraintExpr_search (c->expr, old);
  return ret;
}

//adjust file locs and stuff
constraint constraint_adjust (constraint substitute, constraint old)
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

  return substitute;
  
}

constraint  inequalitySubstitute  (constraint c, constraintList p)
{
  if (c->ar != GTE)
    return c;
  
  constraintList_elements (p, el)
    {
       if ( el->ar == LT)
	 //	 if (!constraint_conflict (c, el) )
	   {
	     constraint temp;
	     temp = constraint_copy(el);
	     
	     //	     temp = constraint_adjust(temp, c);

	     if (constraintExpr_same (el->lexpr, c->expr) )
	       {
		 DPRINTF((message ("Replacing %s in %s with  %s",
				   constraintExpr_print (c->expr),
				   constraint_print (c),
				   constraintExpr_print (el->expr) )
			  ));
		 c->expr = constraintExpr_copy (el->expr);
	       }
	     
	   }
    }
  end_constraintList_elements;

  c = constraint_simplify(c);
  return c;
}

constraint substitute (constraint c, constraintList p)
{
  constraintList_elements (p, el)
    {
       if ( el->ar == EQ)
	 if (!constraint_conflict (c, el) )

	   {
	     constraint temp;
	     temp = constraint_copy(el);
	     
	     temp = constraint_adjust(temp, c);

	     DPRINTF((message ("Substituting %s for %s",
			       constraint_print (temp), constraint_print (c)
			       ) ) );
			       
	  
	     c = constraint_searchandreplace (c, temp->lexpr, temp->expr);
	   }
    }
  end_constraintList_elements;

  c = constraint_simplify(c);
  return c;
}


constraint constraint_solve (constraint c)
{
  DPRINTF( (message ("Solving %s\n", constraint_print(c) ) ) );
  c->expr = constraintExpr_solveBinaryExpr (c->lexpr, c->expr);
  DPRINTF( (message ("Solved and got %s\n", constraint_print(c) ) ) );

  return c;
}


constraint constraint_simplify (constraint c)
{
  c->lexpr = constraintExpr_simplify (c->lexpr);
  c->expr  = constraintExpr_simplify (c->expr);
  
  c = constraint_solve (c);
  
  c->lexpr = constraintExpr_simplify (c->lexpr);
  c->expr  = constraintExpr_simplify (c->expr);
  
  return c;
}




/* returns true  if fileloc for term1 is closer to file for term2 than term3*/

bool fileloc_closer (fileloc  loc1, fileloc  loc2, fileloc  loc3)
{
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


