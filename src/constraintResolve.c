/*
/*
** constraintResolve.c
*/

# include <ctype.h> /* for isdigit */
# include "lclintMacros.nf"
# include "basic.h"
# include "cgrammar.h"
# include "cgrammar_tokens.h"

# include "exprChecks.h"
# include "aliasChecks.h"
# include "exprNodeSList.h"
# include "exprData.i"

#include "constraintExpr.h"

constraintList reflectChanges (constraintList pre2, constraintList post1);
constraint substitute (constraint c, constraintList p);
constraint constraint_searchandreplace (constraint c, constraintExpr old, constraintExpr new);
bool rangeCheck (arithType ar1, constraintExpr expr1, arithType ar2, constraintExpr expr2);
bool satifies (constraint pre, constraint post);
bool resolve (constraint c, constraintList p);
constraintList reflectChangesEnsures (constraintList pre2, constraintList post1);
constraint constraint_simplify (constraint c);

void mergeResolve (exprNode parent, exprNode child1, exprNode child2)
{
  constraintList temp;
  TPRINTF( (message ("magically merging constraint into parent:%s for children:  %s and %s", exprNode_unparse (parent), exprNode_unparse (child1), exprNode_unparse(child2) )
	    ) );
   if (exprNode_isError (child1)  || exprNode_isError(child2) )
     {
       if (exprNode_isError (child1) && !exprNode_isError(child2) )
	 {
	   parent->requiresConstraints = constraintList_copy (child2->requiresConstraints);
	   parent->ensuresConstraints = constraintList_copy (child2->ensuresConstraints);
	   TPRINTF((message ("Copied child constraints: pre: %s and post: %s",
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
   
  TPRINTF( (message ("Child constraints are %s %s and %s %s",
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

  
  temp = reflectChangesEnsures (child1->ensuresConstraints, child2->ensuresConstraints);
  // temp = constraintList_copy (child1->ensuresConstraints);

  temp = constraintList_fixConflicts (temp, child2->ensuresConstraints);
  
  parent->ensuresConstraints = constraintList_copy (child2->ensuresConstraints);
  parent->ensuresConstraints = constraintList_addList (parent->ensuresConstraints, temp);
  
  TPRINTF( (message ("Parent constraints are %s and %s ",
		     constraintList_print (parent->requiresConstraints),
		     constraintList_print (parent->ensuresConstraints)
		     ) ) );
 
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
	  ret = constraintList_add (ret, temp);
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
	  if (temp != NULL)
	    ret = constraintList_add (ret, temp);
	}
    } end_constraintList_elements;

    return ret;
}


bool constraint_conflict (constraint c1, constraint c2)
{
  
  if (constraintExpr_similar(c1->lexpr, c2->lexpr) )
    {
      if (c1->ar == c2->ar)
	{
	  TPRINTF ( (message ("%s conflicts with %s ", constraint_print (c1), constraint_print(c2) ) ) );
	  return TRUE;
	}
    }  

  TPRINTF ( (message ("%s conflicts with %s ", constraint_print (c1), constraint_print(c2) ) ) );

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
	  TPRINTF ( (message ("\n%s Satifies %s\n ", constraint_print(el), constraint_print(c) ) ) );
	  return TRUE;
	}
    }
  end_constraintList_elements;
  TPRINTF ( (message ("no constraints satify %s", constraint_print(c) ) ));
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


bool rangeCheck (arithType ar1, constraintExpr expr1, arithType ar2, constraintExpr expr2)

{
  TPRINTF ((message ("Doing Range CHECK %s and %s", constraintExpr_unparse(expr1), constraintExpr_unparse(expr2) ) ));
  switch (ar1)
 {
 case GTE:
 case GT:
      /*irst constraint is > only > => or == cosntraint can satify it */
      if ( (ar2 == GT) || (ar2 == GTE) || (ar2 == EQ) )
	{
	  if (! constraintExpr_canGetValue (expr1) )
	    {
	      TPRINTF( ("Can't Get value"));
	      return FALSE;
	    }
	  if (! constraintExpr_canGetValue (expr2) )
	    {
	      TPRINTF( ("Can't Get value"));
	      return FALSE;
	    }
	  
	  if (constraintExpr_compare (expr2, expr1) >= 0)
	    return TRUE;
	  
	}
      
      return FALSE;
 default:
   TPRINTF(("case not handled"));
 }
  return FALSE;
}

constraint constraint_searchandreplace (constraint c, constraintExpr old, constraintExpr new)
{
  TPRINTF (("Doing replace for lexpr") );
  c->lexpr = constraintExpr_searchandreplace (c->lexpr, old, new);
  TPRINTF (("Doing replace for expr") );
  c->expr = constraintExpr_searchandreplace (c->expr, old, new);
  return c;
}


constraint constraint_adjust (constraint substitute, constraint old)
{
  fileloc loc1, loc2, loc3;

  loc1 = constraint_getFileloc (old);

  loc2 = constraintExpr_getFileloc (substitute->lexpr);

  loc3 = constraintExpr_getFileloc (substitute->expr);

  if (fileloc_closer (loc1, loc3, loc2))
      {
	constraintExpr temp;
	temp = substitute->lexpr;
	substitute->lexpr = substitute->expr;
	substitute->expr  = temp;
	substitute = constraint_simplify(substitute);
      }

  return substitute;
  
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
	  
	     c = constraint_searchandreplace (c, el->lexpr, el->expr);
	   }
    }
  end_constraintList_elements;

  c = constraint_simplify(c);
  return c;
}


constraint constraint_solve (constraint c)
{
  TPRINTF( (message ("Solving %s\n", constraint_print(c) ) ) );
  c->expr = constraintExpr_solveBinaryExpr (c->lexpr, c->expr);
  TPRINTF( (message ("Solved and got %s\n", constraint_print(c) ) ) );

  return c;
}


constraint constraint_simplify (constraint c)
{
  c->lexpr = constraintExpr_simplify (c->lexpr);
  c->expr  = constraintExpr_simplify (c->expr);
  
  c = constraint_solve (c);
  /*
  c->lexpr = constraintExpr_simplify (c->lexpr);
  c->expr  = constraintExpr_simplify (c->expr);
  */
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

