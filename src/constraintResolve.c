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


int constraintExpr_getValue (constraintExpr expr)
{
  if (expr->expr != NULL)
    {
      TPRINTF( ( "Not Implemented" ));
      llassert(FALSE);
    }
  return (constraintTerm_getValue (expr->term) );
}

// returns 1 0 -1 like strcopy
int constraintExpr_compare (constraintExpr expr1, constraintExpr expr2)
{
  int value1, value2;

  value1 = constraintExpr_getValue(expr1);
  value2 = constraintExpr_getValue(expr2);

  if (value1 > value2)
    return 1;

  if (value1 == value2)
    return 0;

  else
    return -1;
}

bool constraintExpr_canCompare (constraintExpr expr1, constraintExpr expr2)
{
  if (expr1->expr != NULL)
    {
      return FALSE;
    }

  if (expr2->expr  != NULL)
    {
      return FALSE;
    }

  return TRUE;
}

bool rangeCheck (arithType ar1, constraintExpr expr1, arithType ar2, constraintExpr expr2)

{
  switch (ar1)
 {
 case GTE:
 case GT:
      /*irst constraint is > only > => or == cosntraint can satify it */
      if ( (ar2 == GT) || (ar2 == GTE) || (ar2 == EQ) )
	{
	  if (! constraintExpr_canCompare (expr1, expr2) )
	    return FALSE;
	  
	  if (constraintExpr_compare (expr2, expr1) >= 0)
	    return TRUE;
	  
	}
  return FALSE;
 default:
   TPRINTF(("case not handled"));
 }
  return FALSE;
}

/*returns true if cosntraint post satifies cosntriant pre */
bool satifies (constraint pre, constraint post)
{
  if (!constraintTerm_same(pre->lexpr->term, post->lexpr->term) )
    {
      return FALSE;
    }
  if (post->expr == NULL)
    return FALSE;

  return rangeCheck (pre->ar, pre->expr, post->ar, post->expr);
}

constraintExpr constraintExpr_simplify (constraintExpr expr)
{
  
  expr->term = constraintTerm_simplify (expr->term);
  if (expr->expr == NULL)
    {
      if ( (expr->term->kind == CONSTRAINTEXPR) &&  (expr->term->constrType == VALUE) )
	{
	  expr->op =  expr->term->value.constrExpr->op;
	  expr->expr = expr->term->value.constrExpr->expr;
	  expr->term = expr->term->value.constrExpr->term;
	}
	  
      return expr;
    }
  
    expr->expr = constraintExpr_simplify (expr->expr);

    
    
  if ( (expr->term->kind == INTLITERAL) && (expr->expr->term->kind == INTLITERAL)  )
    {
      DPRINTF( ("INTLITERAL MERGE " ));

      DPRINTF ( (message ("Expression is %s ", constraintExpr_print (expr) ) ) );
      
      if (expr->op == PLUS )
	{
	  DPRINTF( (message ("Adding %d and %d ", expr->term->value.intlit,
			     expr->expr->term->value.intlit) ) );
    	  expr->term->value.intlit += expr->expr->term->value.intlit;
	}
      else if (expr->op == MINUS )
	{
	  expr->term->value.intlit -= expr->expr->term->value.intlit;
	}
      expr->op = expr->expr->op;

      expr->expr = expr->expr->expr;
    }
  
  return expr;
  
}

constraintExpr constraintExpr_add (constraintExpr e, constraintTerm term,  constraintExprOp op)
{
  constraintExpr p;

  p = e;
  while (p->expr != NULL)
    {
      p = p->expr;
    }

  p->op = op;
  p->expr = constraintExpr_alloc();
  p->expr->term = term;

  return e;
}

constraintExpr termMove (constraintExpr dst, constraintExpr src)
{
  constraintTerm term;
  llassert (src->expr != NULL);
  term = src->expr->term;
  if (src->op == PLUS)
    dst = constraintExpr_add (dst, term, MINUS);
  else
    if (src->op == MINUS)
      dst = constraintExpr_add (dst, term, PLUS);
  
  return dst;
}

constraint solveforterm (constraint c)
{
  constraintExpr p;
    p = c->lexpr;
    while (p->expr != NULL)
      {
	DPRINTF( (message("Moving %s", constraintExpr_print (c->expr) ) ) );
	c->expr = termMove(c->expr, p);
	p->op = p->expr->op;
	#warning memleak

	p->expr = p->expr->expr;
      }
    return c;
}

constraint solveforOther (constraint c)
{
  constraintExpr p;
    p = c->expr;
    while (p->expr != NULL)
      {
	TPRINTF( (message("Moving %s", constraintExpr_print (c->expr) ) ) );
	c->lexpr = termMove(c->lexpr, p);
	p->op = p->expr->op;
	#warning memleak

	p->expr = p->expr->expr;
      }
    return c;
}

constraint constraint_simplify (constraint c)
{
  c =  solveforterm (c);
  c->lexpr = constraintExpr_simplify (c->lexpr);
  c->expr  = constraintExpr_simplify (c->expr);
  return c;
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


constraintTerm  constraintTerm_substituteTerm (constraintTerm term, constraintTerm oldterm, constraintExpr replacement)
{
  if ( constraintTerm_similar (term, oldterm) )
    {
      // do the substitution
      term->kind = CONSTRAINTEXPR;
      term->value.constrExpr = constraintExpr_copy (replacement);
    }
  return term;    
}

constraintExpr constraintExpr_substituteTerm (constraintExpr expr, constraintTerm oldterm, constraintExpr replacement)
{
   expr->term = constraintTerm_substituteTerm (expr->term, oldterm, replacement);
   if (expr->expr != NULL)
     expr->expr = constraintExpr_substituteTerm (expr->expr, oldterm, replacement);

   return expr;
}

/* returns true  if fileloc for term2 is closer to file for term1 than is term3*/

bool fileloc_closer (constraintTerm term1, constraintTerm term2, constraintTerm term3)
{
   if ( fileloc_lessthan (term1->loc, term2->loc) )
     {
       if (fileloc_lessthan (term2->loc, term3->loc) )
	 {
	   llassert (fileloc_lessthan (term1->loc, term3->loc) );
	   return TRUE;
	 }
       else
	 {
	   return FALSE;
	 }
     }

   if ( ! (fileloc_lessthan (term1->loc, term2->loc) ) )
     {
       if (!fileloc_lessthan (term2->loc, term3->loc) )
	 {
	   llassert (fileloc_lessthan (term3->loc, term1->loc) );
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

constraint constraint_substituteTerm (constraint c, constraint subs)
{
  constraintTerm oldterm;
  constraintExpr replacement;
  
    llassert(subs->lexpr->expr == NULL);
    

    oldterm = subs->lexpr->term;
    replacement = subs->expr;       
    
    // Chessy hack assumes that subs always has the form g:1 = g:2 + expr

    /*@i2*/
    
    /*find out which value to substitute*/
    TPRINTF((message ("doing substitute for %s and %s", constraint_print (c), constraint_print(subs) ) ) );
    if ( constraintExpr_containsTerm (subs->expr, subs->lexpr->term) )
      {
	TPRINTF(("doing new stuff"));
	if (fileloc_closer (c->lexpr->term, subs->expr->term, subs->lexpr->term) )
	  {
	    // use the other term
	    constraint new;
	    new = constraint_copy (subs);
	    new = solveforOther(new);
	    oldterm = new->expr->term;
	    replacement = new->lexpr;
	  }
      }

    c->lexpr = constraintExpr_substituteTerm (c->lexpr, oldterm, replacement);
    c->expr   = constraintExpr_substituteTerm (c->expr, oldterm, replacement);
    return c;
}

constraint substitute (constraint c, constraintList p)
{
  constraintList_elements (p, el)
    {
      if ( el->ar == EQ)
	if (constraint_hasTerm (c, el->lexpr->term) )
	  {
	      llassert(el->lexpr->expr == NULL);
	      DPRINTF((message ("doing substitute for %s", constraint_print (c) ) ) );
	      
	      c = constraint_substituteTerm (c, el); 
	      DPRINTF((message ("substituted constraint is now %s", constraint_print (c) ) ) );
	      // c->lexpr = constraintExpr_copy (el->expr);
	      c = constraint_simplify(c);
	      c = constraint_simplify(c);
	      c = constraint_simplify(c);
	      return c;
	  }
    }
  end_constraintList_elements;

  c = constraint_simplify(c);
  return c;
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

bool constraintExpr_containsTerm (constraintExpr p, constraintTerm term)
{
  TPRINTF(("constraintExpr_containsTerm"));
  
  while (p != NULL)
    {
      if (constraintTerm_similar (p->term, term) )
	return TRUE;

      p = p->expr->expr;
    }
  DPRINTF((
	   message ("constraintExpr_hasTerm returned fallse for %s %S",
		    constraint_print(c), constraintTerm_print(term)
		    )
	   ));
  return FALSE;
}


/*check if rvalue side has term*/
bool constraintExpr_hasTerm (constraint c, constraintTerm term)
{
  constraintExpr p;
  p = c->expr;
  while (p != NULL)
    {
      if (constraintTerm_same (p->term, term) )
	return TRUE;

      p = p->expr->expr;
    }
  DPRINTF((
	   message ("constraintExpr_hasTerm returned fallse for %s %S",
		    constraint_print(c), constraintTerm_print(term)
		    )
	   ));
  return FALSE;
}

constraintExpr solveEq (constraint c, constraintTerm t)
{
  constraintExpr p;
  c = constraint_copy (c);
  DPRINTF(("\ndoing solveEq\n"));
  if (! constraintTerm_same (c->expr->term, t) )
    {
      DPRINTF ( (message ("\n\nconstraintTerms: %s %s not same ", constraintTerm_print(c->expr->term),
			  constraintTerm_print(t) )
		 ) );
      return NULL;
    }

  p = c->expr;
  while (p->expr != NULL)
    {
      DPRINTF( (message("\n\nMoving %s", constraintExpr_print (c->expr) ) ) );
      c->lexpr = termMove(c->lexpr, p);
      p->expr = p->expr->expr;
    }
  
  return c->lexpr;
  
}

constraint updateConstraint (constraint c, constraintList p)
{
  TPRINTF(("start updateConstraints"));
  constraintList_elements (p, el)
    {
      
      if (constraintTerm_same(c->lexpr->term, el->lexpr->term) )
	{
	  TPRINTF((""));
	  if ( el->ar == EQ)
	    {
	      	  TPRINTF(("j"));

	      if  (constraintExpr_hasTerm (el, c->lexpr->term) )
		{
		  constraintExpr solve;
		  TPRINTF((""));
		  solve = solveEq (el, c->lexpr->term);
		  if (solve)
		    {		      
		      c->lexpr = constraintExpr_copy (solve);
		      c = constraint_simplify(c);
		      return c;
		    }
		}
	    }
	}
    }
  end_constraintList_elements;
  c = constraint_simplify(c);
  
  DPRINTF(("end updateConstraints"));
  return c;
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

void mergeResolve (exprNode parent, exprNode child1, exprNode child2)
{
  constraintList temp;
  DPRINTF( (message ("magically merging constraint into parent:%s for children:  %s and %s", exprNode_unparse (parent), exprNode_unparse (child1), exprNode_unparse(child2) )
	    ) );
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

  
  temp = reflectChangesEnsures (child1->ensuresConstraints, child2->ensuresConstraints);
  // temp = constraintList_copy (child1->ensuresConstraints);

  
  parent->ensuresConstraints = constraintList_copy (child2->ensuresConstraints);
  parent->ensuresConstraints = constraintList_addList (parent->ensuresConstraints, temp);
  
  DPRINTF( (message ("Parent constraints are %s and %s ",
		     constraintList_print (parent->requiresConstraints),
		     constraintList_print (parent->ensuresConstraints)
		     ) ) );
 
}


