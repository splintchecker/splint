/*
** constraintList.c
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

/*@i33*/
/*@-fcnuse*/
/*@-assignexpose*/

/*@notnull@*/ 
/*@special@*/ constraint constraint_makeNew (void)
     /*@post:isnull result->term, result->expr, result->constrType@*/
     /*@defines result->ar, result->post@*/;

constraint constraint_copy (constraint c)
{
  constraint ret;
  ret = constraint_makeNew();
  ret->lexpr = c->lexpr;
  ret->ar = c->ar;
  ret->expr = c->expr;
  ret->post = c->post;
  return ret;
}

bool constraint_resolve (/*@unused@*/ constraint c)
{
  return FALSE;
}

/*@notnull@*/ 
/*@special@*/ constraint constraint_makeNew (void)
     /*@post:isnull result->term, result->expr, result->constrType@*/
     /*@defines result->ar, result->post@*/
{
  constraint ret;
  ret = dmalloc(sizeof (*ret) );
  ret->lexpr = NULL;
  ret->expr = NULL;
  ret->ar = LT;
  ret->post = FALSE;
  /*@i23*/return ret;
}
/*@-czechfcns@*/
constraintExpr constraintExpr_alloc ()
{
  constraintExpr ret;
  ret = dmalloc (sizeof (*ret) );
  ret->term = NULL;
  ret->expr = NULL;
  ret->op = PLUS;
  return ret;
}

constraintExpr constraintExpr_copy (constraintExpr expr)
{
  constraintExpr ret;
  ret = constraintExpr_alloc();
  ret->term = constraintTerm_copy(expr->term);
  ret->op   = expr->op;
  if (expr->expr != NULL)
    {
      ret->expr = constraintExpr_copy (expr->expr);
    }
  else
    {
      ret->expr = NULL;
    }
  
}

constraintExpr constraintExpr_makeMaxSetExpr (exprNode expr)
{
  constraintExpr ret;
  ret = constraintExpr_alloc();
  ret->term = constraintTerm_makeMaxSetexpr(expr);
  return ret;
}

constraintExpr  constraintExpr_makeMaxReadExpr (exprNode expr)
{
  constraintExpr ret;
  ret = constraintExpr_alloc();
  ret->term = constraintTerm_makeMaxReadexpr(expr);
  return ret;
}

constraintExpr  constraintExpr_makeMinSetExpr (exprNode expr)
{
  constraintExpr ret;
  ret = constraintExpr_alloc();
  ret->term = constraintTerm_makeMinSetexpr(expr);
  return ret;
}

constraintExpr  constraintExpr_makeMinReadExpr (exprNode expr)
{
  constraintExpr ret;
  ret = constraintExpr_alloc();
  ret->term = constraintTerm_makeMinReadexpr(expr);
  return ret;
}

constraintExpr constraintExpr_makeValueExpr (exprNode expr)
{
  constraintExpr ret;
  ret = constraintExpr_alloc();
  ret->term = constraintTerm_makeValueexpr(expr);
  return ret;
}


constraintExpr makeConstraintExprIntlit (int i)
{
  constraintExpr ret;
  ret = dmalloc (sizeof (*ret) );
  ret->term = constraintTerm_makeIntLitValue(i);
  ret->expr = NULL;
  ret->op = PLUS;
  /*@i1*/ return ret;
}


constraintExpr constraintExpr_makeValueInt (int i)
{
  return makeConstraintExprIntlit(i);
}

constraint constraint_makeWriteSafeExprNode (exprNode po, exprNode ind)
{
  constraint ret = constraint_makeNew();
  constraintTerm term;
 
  ret->lexpr =constraintExpr_makeMaxSetExpr(po);
  ret->ar = GTE;
  ret->expr =  constraintExpr_makeValueExpr (ind);
  /*@i1*/return ret;
}
				       
constraint constraint_makeReadSafeExprNode ( exprNode po, exprNode ind)
{
  constraint ret = constraint_makeNew();
  //  constraintTerm term;
  po = exprNode_fakeCopy(po);
  ind = exprNode_fakeCopy(ind);
  ret->lexpr = constraintExpr_makeMaxReadExpr(po);
  ret->ar    = GTE;
  ret->expr  = constraintExpr_makeValueExpr (ind);
  return ret;
}

constraint constraint_makeWriteSafeInt (exprNode po, int ind)
{
  constraint ret = constraint_makeNew();
  constraintTerm term;
 
  ret->lexpr =constraintExpr_makeMaxSetExpr(po);
  ret->ar = GTE;
  ret->expr =  constraintExpr_makeValueInt (ind);
  /*@i1*/return ret;
}
				       
constraint constraint_makeReadSafeInt ( exprNode po, int ind)
{
  constraint ret = constraint_makeNew();

  po = exprNode_fakeCopy(po);
  
  ret->lexpr = constraintExpr_makeMaxReadExpr(po);
  ret->ar    = GTE;
  ret->expr  = constraintExpr_makeValueInt (ind);
  return ret;
}

constraint constraint_makeEnsureMaxReadAtLeast (exprNode e1, exprNode t2, fileloc sequencePoint)
{
  constraint ret = constraint_makeNew();
  constraintTerm term;

  e1 = exprNode_fakeCopy (e1);
  t2 = exprNode_fakeCopy (t2);
  
  ret = constraint_makeReadSafeExprNode(e1, t2);
  if (ret->lexpr->term->loc != NULL) 
    fileloc_free(ret->lexpr->term->loc);
  
  ret->lexpr->term->loc = fileloc_copy (sequencePoint);
  ret->post = TRUE;  

  fileloc_incColumn (ret->lexpr->term->loc);
  return ret;
}


constraint constraint_makeEnsureMinReadAtMost (exprNode po, exprNode ind, fileloc sequencePoint)
{
  constraint ret = constraint_makeNew();
  constraintTerm term;
  po = exprNode_fakeCopy(po);
  ind = exprNode_fakeCopy(ind);

  ret->lexpr = constraintExpr_makeMinReadExpr(po);
  ret->ar = LTE;
  ret->expr = constraintExpr_makeValueExpr (ind);
  ret->post = TRUE;

  if (ret->lexpr->term->loc != NULL)
    fileloc_free(ret->lexpr->term->loc);
  
  ret->lexpr->term->loc = fileloc_copy (sequencePoint);
  /*make this refer to element after preconditions */
  fileloc_incColumn (ret->lexpr->term->loc);
  /*@i1*/ return ret;
}

constraintExpr makeMaxSetPostOpInc (exprNode e)
{
  constraintExpr ret;
  ret = constraintExpr_makeValueExpr (e);
  ret->term  = constraintTerm_makeMaxSetexpr (e);
  ret->op = MINUS;
  ret->expr =  makeConstraintExprIntlit (1);
  return ret;
}

constraint constraint_makeMaxSetSideEffectPostIncrement (exprNode e, fileloc sequencePoint)
{
  constraint ret = constraint_makeNew();
  //constraintTerm term;
  exprNode t2;
  e = exprNode_fakeCopy(e);
  ret->lexpr = constraintExpr_makeMaxSetExpr(e);
  ret->ar = EQ;
  ret->post = TRUE;
  ret->expr = makeMaxSetPostOpInc(e);

  fileloc_incColumn (  ret->lexpr->term->loc);
  fileloc_incColumn (  ret->lexpr->term->loc);
  return ret;
}

constraintExpr makeMaxReadPostOpInc (exprNode e)
{
  constraintExpr ret;
  ret = constraintExpr_makeValueExpr (e);
  ret->term  = constraintTerm_makeMaxReadexpr (e);
  ret->op = MINUS;
  ret->expr =  makeConstraintExprIntlit (1);
  return ret;
}

constraint constraint_makeMaxReadSideEffectPostIncrement (exprNode e, fileloc sequencePoint)
{
  constraint ret = constraint_makeNew();
  //constraintTerm term;
  exprNode t2;
  e = exprNode_fakeCopy(e);
  ret->lexpr = constraintExpr_makeMaxReadExpr(e);
  ret->ar = EQ;
  ret->post = TRUE;
  ret->expr = makeMaxReadPostOpInc(e);

  fileloc_incColumn (  ret->lexpr->term->loc);
  fileloc_incColumn (  ret->lexpr->term->loc);
  return ret;
}


cstring arithType_print (arithType ar)
{
  cstring st = cstring_undefined;
  switch (ar)
    {
    case LT:
      st = cstring_makeLiteral (" < ");
      break;
    case	LTE:
      st = cstring_makeLiteral (" <= ");
      break;
    case 	GT:
      st = cstring_makeLiteral (" > ");
      break;
    case 	GTE:
      st = cstring_makeLiteral (" >= ");
      break;
    case	EQ:
      st = cstring_makeLiteral (" == ");
      break;
    case	NONNEGATIVE:
      st = cstring_makeLiteral (" NONNEGATIVE ");
      break;
    case	POSITIVE:
      st = cstring_makeLiteral (" POSITIVE ");
      break;
    default:
      llassert(FALSE);
      break;
    }
  return st;
}

cstring constraintExpr_print (constraintExpr ex)
{
  cstring st;
  cstring opStr;
  llassert (ex != NULL);

  st = message ("%s",
		constraintTerm_print (ex->term));
  
    if (ex->expr != NULL)
    {
      if (ex->op == PLUS)
	{
	 opStr = cstring_makeLiteral (" + ");
	}
      else
	{
	  opStr = cstring_makeLiteral (" - ");
	}
    st = message ("%s %s %s", st, opStr, constraintExpr_print (ex->expr) );
    }
  return st;
}


cstring  constraint_print (constraint c)
{
  cstring st = cstring_undefined;
  cstring type = cstring_undefined;
  llassert (c);
  if (c->post)
    {
      type = cstring_makeLiteral ("Ensures: ");
    }
  else
    {
      type = cstring_makeLiteral ("Requires: ");
    }
  st = message ("%s: %s %s %s",
		type,
		constraintExpr_print (c->lexpr),
		arithType_print(c->ar),
		constraintExpr_print(c->expr)
		);
  return st;
}

/*@=fcnuse*/
/*@=assignexpose*/
/*@=czechfcns@*/
