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
  if (post->expr->expr == NULL)
    return FALSE;
  return rangeCheck (pre->ar, pre->expr, post->ar, post->expr);
  
  return TRUE;
}

constraintExpr constraintExpr_simplify (constraintExpr expr)
{
  
  expr->term = constraintTerm_simplify (expr->term);
  if (expr->expr == NULL)
    return expr;
  
    expr->expr = constraintExpr_simplify (expr->expr);
  if ( (expr->term->constrType == INTLITERAL) && (expr->expr->term->constrType == INTLITERAL)  )
    {
      TPRINTF( ("EVENTUAL IMPLEMENTATION OF LITERAL MERGE " ));

      TPRINTF ( (message ("Expression is %s ", constraintExpr_print (expr) ) ) );
      
      if (expr->op == PLUS )
	{
	  TPRINTF( (message ("Adding %d and %d ", expr->term->value.intlit,
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
	TPRINTF( (message("Moving %s", constraintExpr_print (c->expr) ) ) );
	c->expr = termMove(c->expr, p);
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
	  TPRINTF ( (message ("\n%s Satifies %s\n ", constraint_print(el), constraint_print(c) ) ) );
	  return TRUE;
	}
    }
  end_constraintList_elements;
  TPRINTF ( (message ("no constraints satify %s", constraint_print(c) ) ));
  return FALSE;
}

constraint substitute (constraint c, constraintList p)
{
  constraintList_elements (p, el)
    {
      if (constraintTerm_same(c->lexpr->term, el->lexpr->term) )
	{
	  if ( el->ar == EQ)
	    {
	      c->lexpr = constraintExpr_copy (el->expr);
	      c = constraint_simplify(c);
	      return c;
	    }
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
  TPRINTF((
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
  TPRINTF(("\ndoing solveEq\n"));
  if (! constraintTerm_same (c->expr->term, t) )
    {
      TPRINTF ( (message ("\n\nconstraintTerms: %s %s not same ", constraintTerm_print(c->expr->term),
			  constraintTerm_print(t) )
		 ) );
      return NULL;
    }

  p = c->expr;
  while (p->expr != NULL)
    {
      TPRINTF( (message("\n\nMoving %s", constraintExpr_print (c->expr) ) ) );
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
	      	  TPRINTF((""));

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
  
  TPRINTF(("end updateConstraints"));
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
	  temp = updateConstraint (el, post1);
	  if (temp != NULL)
	    ret = constraintList_add (ret, temp);
	}
    } end_constraintList_elements;

    return ret;
}

void mergeResolve (exprNode parent, exprNode child1, exprNode child2)
{
  constraintList temp;
  TPRINTF( (message ("magically merging constraint into parent:%s for children:  %s and %s", exprNode_unparse (parent), exprNode_unparse (child1), exprNode_unparse(child2) )
	    ) );
  llassert (!exprNode_isError (child1)  || !exprNode_isError(child2) );
  if (exprNode_isError (child1) )
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

  llassert(!exprNode_isError(child2) );
  
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

  
  parent->ensuresConstraints = constraintList_copy (child2->ensuresConstraints);
  parent->ensuresConstraints = constraintList_addList (parent->ensuresConstraints, temp);
  
  TPRINTF( (message ("Parent constraints are %s and %s ",
		     constraintList_print (parent->requiresConstraints),
		     constraintList_print (parent->ensuresConstraints)
		     ) ) );
 
}

