/*
** constraintExpr.c
*/

//#define DEBUGPRINT 1

# include "lclintMacros.nf"
# include "basic.h"
# include "cgrammar.h"
# include "cgrammar_tokens.h"

# include "exprChecks.h"
# include "aliasChecks.h"
# include "exprNodeSList.h"


# include "exprData.i"
# include "exprDataQuite.i"


/*@-czechfcns@*/

#include "constraintExpr.h"



constraintExpr constraintExpr_makeMaxSetConstraintExpr (constraintExpr c);

bool constraintExpr_isLit (constraintExpr expr)
{
  llassert (expr != NULL);
  
  if (expr->kind == term)
    {
      constraintTerm term = constraintExprData_termGetTerm (expr->data);
      if (constraintTerm_isIntLiteral (term) )
	{
	  return TRUE;
	}

    }
  return FALSE;
}


constraintExpr constraintExpr_propagateConstants (constraintExpr expr,
						/*@out@*/ bool * propagate,
						  /*@out@*/ int *literal)
{
  constraintExpr expr1;
  constraintExpr expr2;
  bool propagate1, propagate2;
  int literal1, literal2;
  
  propagate1 = FALSE;
  propagate2 = FALSE;
 
  literal1 = 0;
  literal2 = 0;
  
  *propagate = FALSE;
  *literal = 0;

  llassert (expr != NULL);
  
  // we simplify unaryExpr else where
  if (expr->kind == unaryExpr)
    return expr;

  if (expr->kind == term)
    return expr;
  
  if (constraintExpr_isLit (expr) )
    return expr;

  BPRINTF( (message("constraintExpr_propagateConstants: binaryexpr: %s", constraintExpr_unparse(expr) ) ) );
  
  expr1 = constraintExprData_binaryExprGetExpr1(expr->data);
  expr2 = constraintExprData_binaryExprGetExpr2(expr->data);

  expr1 = constraintExpr_propagateConstants (expr1, &propagate1, &literal1);
  expr2 = constraintExpr_propagateConstants (expr2, &propagate2, &literal2);

  expr->data = constraintExprData_binaryExprSetExpr1 (expr->data, expr1);
  expr->data = constraintExprData_binaryExprSetExpr2 (expr->data, expr2);
  
  *propagate = propagate1 || propagate2;
  *literal    = literal1 +  literal2;
  
  if ( constraintExpr_isLit (expr1) && constraintExpr_isLit (expr2) )
    {
      int t1, t2;
      t1 = constraintExpr_getValue (expr1);
      t2 = constraintExpr_getValue (expr2);
      *propagate = FALSE;
      if (constraintExprData_binaryExprGetOp (expr->data) == PLUS )
	return (constraintExpr_makeIntLiteral ( (t1+t2) ));
      else if (constraintExprData_binaryExprGetOp (expr->data) ==  MINUS)
	return (constraintExpr_makeIntLiteral ( (t1-t2) ));
      else
	llassert(FALSE);
    }
  
  if (constraintExpr_isLit (expr1) )
    {
      /*@i334*/
      /*handle MINUS case right */
      *propagate = TRUE;
      *literal += constraintExpr_getValue (expr1);
      return expr2;
    }
  

  if (constraintExpr_isLit (expr2) )
    {
      *propagate = TRUE;
      
      if (constraintExprData_binaryExprGetOp (expr->data) == PLUS )
	*literal += constraintExpr_getValue (expr2);
      else
	*literal -= constraintExpr_getValue (expr2);
      return expr1;
    }

  
  
  BPRINTF( (message("constraintExpr_propagateConstants returning: %s", constraintExpr_unparse(expr) ) ) );

  return expr;
}

constraintExpr constraintExpr_combineConstants (constraintExpr expr )
{
  bool propagate;
  int literal;

  BPRINTF ( (message ("Before combine %s", constraintExpr_unparse(expr) ) ) );
  expr = constraintExpr_propagateConstants (expr, &propagate, &literal);
 

  if (propagate)
    {
      constraintExpr ret;

      if (literal != 0)
	{
	  ret = constraintExpr_makeBinaryOpConstraintExprIntLiteral (expr, literal);
	  expr = ret;
	}
    }
   BPRINTF ( (message ("After combine %s", constraintExpr_unparse(expr) ) ) );
  return expr;
}
/*@special@*/
constraintExpr constraintExpr_alloc (void) /*@post:isnull result->data@*/
{
  constraintExpr ret;
  ret = dmalloc (sizeof (*ret) );
  ret->kind = term;
  ret->data = NULL;
  return ret;
}


constraintExpr constraintExpr_copy (constraintExpr expr)
{
  constraintExpr ret;
  ret = constraintExpr_alloc();
  ret->kind = expr->kind;
  ret->data = constraintExprData_copy (expr->data, expr->kind);
  return ret;
}


constraintExpr oldconstraintExpr_makeTermExprNode (exprNode e)
{
  constraintExpr ret;
  constraintTerm t;
  ret = constraintExpr_alloc();
  ret->kind = term;
  ret->data = dmalloc (sizeof *(ret->data) );
  t = constraintTerm_makeExprNode (e);
  ret->data = constraintExprData_termSetTerm (ret->data, t);
  return ret;
}

constraintExpr constraintExpr_makeExprNode (exprNode e)
{
 sRef s;
 constraintExpr ret, ce1, ce2;
 exprData data;
 exprNode t, t1, t2;
 lltok tok;
 
 
 llassert (e != NULL);
 
 data = e->edata;

 switch (e->kind)
   {
   case XPR_SIZEOF:
     t = exprData_getSingle (data);
     s = exprNode_getSref (t);
     if (sRef_isFixedArray(s) )
      {
	int size;

	size = (int) sRef_getArraySize(s);
	ret = constraintExpr_makeIntLiteral (size);
      }
     else
       {
	 BPRINTF ((message ("could not determine the size of %s", exprNode_unparse (e) ) ) );
	 ret = oldconstraintExpr_makeTermExprNode (e);
       }
     break;
     
   case XPR_OP:
      BPRINTF ((message ("Examining operation %s", exprNode_unparse (e) ) ) );
     t1 = exprData_getOpA (data);
     t2 = exprData_getOpB (data);
     tok = exprData_getOpTok (data);
     
     if (lltok_isPlus_Op (tok) || lltok_isMinus_Op (tok) )
       {
	 ce1 = constraintExpr_makeExprNode (t1);
	 ce2 = constraintExpr_makeExprNode (t2);
	 ret = constraintExpr_parseMakeBinaryOp (ce1, tok, ce2);	 
       }
     else
       {
        ret = oldconstraintExpr_makeTermExprNode (e);
       }
     break;
   case XPR_PARENS: 
     t = exprData_getUopNode (data);
     ret = constraintExpr_makeExprNode (t);
     break;
     
   case XPR_PREOP:
      t = exprData_getUopNode (data);
      tok =  exprData_getUopTok (data);
      if (lltok_isInc_Op (tok) )
	{
	  constraintExpr temp;
	  temp = constraintExpr_makeExprNode(t);
	  ret = constraintExpr_makeIncConstraintExpr(temp);
	}
      else if (lltok_isDec_Op (tok) )
	{
	  constraintExpr temp;
	  temp = constraintExpr_makeExprNode(t);
	  ret = constraintExpr_makeDecConstraintExpr(temp);
	}
      else
	ret =  oldconstraintExpr_makeTermExprNode (e);
      break;
      
   case XPR_POSTOP:
     t = exprData_getUopNode (data);
          ret = constraintExpr_makeExprNode (t);
     break;
   case XPR_CAST:
     t = exprData_getCastNode (data);
     ret = constraintExpr_makeExprNode (t);
     break;
   case XPR_COMMA:
     t = exprData_getPairA(data);
     ret = constraintExpr_makeExprNode(t); 
   default:
     ret = oldconstraintExpr_makeTermExprNode (e);
     
   }
  return ret;
}


constraintExpr constraintExpr_makeTermExprNode (exprNode e)
{
  return  oldconstraintExpr_makeTermExprNode(e); //constraintExpr_makeExprNode (e);
}


constraintExpr constraintExpr_makeTermsRef (sRef s)
{
  constraintExpr ret;
  constraintTerm t;
  ret = constraintExpr_alloc();
  ret->kind = term;
  ret->data = dmalloc (sizeof *(ret->data) );
  t = constraintTerm_makesRef (s);
  ret->data = constraintExprData_termSetTerm (ret->data, t);
  return ret;
}

constraintExpr constraintExpr_makeUnaryOp (void) /*@allocates result->data@*/
{
  constraintExpr ret;
  ret = constraintExpr_alloc();
  ret->kind = unaryExpr;
  ret->data = dmalloc ( sizeof *(ret->data) );
  return ret;
}

constraintExpr constraintExpr_makeUnaryOpConstraintExpr (constraintExpr cexpr)
{
  constraintExpr ret;
  ret = constraintExpr_makeUnaryOp();
  ret->data = constraintExprData_unaryExprSetExpr (ret->data, cexpr);
  return ret;
}

constraintExpr constraintExpr_makeMaxSetConstraintExpr (constraintExpr c)
{
  constraintExpr ret;
  ret = constraintExpr_makeUnaryOpConstraintExpr (c);
  ret->data = constraintExprData_unaryExprSetOp (ret->data, MAXSET);
  return ret;
}

constraintExpr constraintExpr_makeUnaryOpExprNode (exprNode expr)
{
  constraintExpr ret;
  constraintExpr sub;
  sub = constraintExpr_makeExprNode (expr);
  ret = constraintExpr_makeUnaryOpConstraintExpr(sub);
  return ret;
}



constraintExpr constraintExpr_makeSRefUnaryOp (sRef s,  constraintExprUnaryOpKind op)
{
  constraintExpr ret;
  constraintExpr t;

  t = constraintExpr_makeTermsRef (s);
  ret = constraintExpr_makeUnaryOpConstraintExpr (t);
  ret->data = constraintExprData_unaryExprSetOp (ret->data, op);
  return ret;
}

constraintExpr constraintExpr_makeSRefMaxRead(sRef s)
{
  return (constraintExpr_makeSRefUnaryOp (s, MAXREAD) );
}     

constraintExpr constraintExpr_makeSRefMaxset (sRef s)
{
  return (constraintExpr_makeSRefUnaryOp (s, MAXSET) );
}

constraintExpr constraintExpr_parseMakeUnaryOp (lltok op, constraintExpr cexpr)
{
  constraintExpr ret;
  ret = constraintExpr_makeUnaryOpConstraintExpr ( cexpr);

  switch (op.tok)
    {
    case QMAXSET:
      ret->data = constraintExprData_unaryExprSetOp (ret->data, MAXSET);
      break;
    case QMAXREAD:
      ret->data = constraintExprData_unaryExprSetOp (ret->data, MAXREAD);
      break;
    default:
      llfatalbug(message("Unhandled Operation in Constraint") );
    }
  return ret;
}

constraintExpr constraintExpr_makeMaxSetExpr (exprNode expr)
{
  constraintExpr ret;
  ret = constraintExpr_makeExprNode (expr);

  ret = constraintExpr_makeMaxSetConstraintExpr (ret);

  llassert (ret != NULL);
  return ret;
}

constraintExpr  constraintExpr_makeMaxReadExpr (exprNode expr)
{
  constraintExpr ret;
  ret = constraintExpr_makeUnaryOpExprNode(expr);
  ret->data      = constraintExprData_unaryExprSetOp (ret->data, MAXREAD);
  return ret; 
}

constraintExpr  constraintExpr_makeMinSetExpr (exprNode expr)
{
  constraintExpr ret;
  ret = constraintExpr_makeUnaryOpExprNode(expr);
  ret->data      = constraintExprData_unaryExprSetOp (ret->data, MINSET);
  return ret;
}

constraintExpr  constraintExpr_makeMinReadExpr (exprNode expr)
{
  constraintExpr ret;
  ret = constraintExpr_makeUnaryOpExprNode(expr);
  ret->data      = constraintExprData_unaryExprSetOp (ret->data, MINREAD);
  return ret;
}


constraintExpr constraintExpr_makeValueExpr (exprNode expr)
{
  constraintExpr ret;
  ret = constraintExpr_makeExprNode (expr);
  return ret;
}

constraintExpr constraintExpr_makeIntLiteral (int i)
{
  constraintExpr ret;
  constraintTerm t;
  ret = constraintExpr_alloc();
  ret->kind = term;
  ret->data = dmalloc (sizeof *(ret->data) );
  t = constraintTerm_makeIntLiteral (i);
  ret->data = constraintExprData_termSetTerm (ret->data, t);
  return ret;
}


constraintExpr constraintExpr_makeValueInt (int i)
{
  return constraintExpr_makeIntLiteral (i);
}

static constraintExpr constraintExpr_makeBinaryOp (void)
{
  constraintExpr ret;
  ret = constraintExpr_alloc();
  ret->kind = binaryexpr;
  ret->data = dmalloc ( sizeof *(ret->data) );
  ret->data = constraintExprData_binaryExprSetOp (ret->data, PLUS);
  return ret;
}


constraintExpr constraintExpr_makeBinaryOpConstraintExpr (constraintExpr expr1,constraintExpr expr2)
     
{
  constraintExpr ret;
  ret = constraintExpr_makeBinaryOp();
  ret->data = constraintExprData_binaryExprSetExpr1 (ret->data, expr1);
  ret->data = constraintExprData_binaryExprSetExpr2 (ret->data, expr2);
  return ret;
}

constraintExpr constraintExpr_parseMakeBinaryOp (constraintExpr expr1, lltok op, constraintExpr expr2)
{
  constraintExpr ret;
  ret = constraintExpr_makeBinaryOpConstraintExpr (expr1, expr2);
  if (op.tok == TPLUS)
    ret->data = constraintExprData_binaryExprSetOp(ret->data, PLUS);
  else if (op.tok == TMINUS)
    ret->data = constraintExprData_binaryExprSetOp(ret->data, MINUS);
    else
      {
	llassert(FALSE);
      }
  return ret;
}

constraintExpr constraintExpr_makeBinaryOpExprNode (exprNode expr1, exprNode expr2)
{
  constraintExpr ret;
  constraintExpr sub1, sub2;
  sub1 = constraintExpr_makeTermExprNode (expr1);
  sub2 = constraintExpr_makeTermExprNode (expr2);
  ret = constraintExpr_makeBinaryOpConstraintExpr(sub1, sub2);
  return ret;
}

constraintExpr constraintExpr_makeBinaryOpConstraintExprIntLiteral (constraintExpr expr, int literal)
{
  constraintExpr ret;
  constraintExpr constExpr;

  constExpr = constraintExpr_makeIntLiteral (literal);
  ret = constraintExpr_makeBinaryOpConstraintExpr (expr, constExpr);
  ret->data = constraintExprData_binaryExprSetOp(ret->data, PLUS);
  return ret;
}

constraintExpr constraintExpr_makeDecConstraintExpr (constraintExpr expr)
{
  constraintExpr ret;
  constraintExpr inc;

  inc = constraintExpr_makeIntLiteral (1);
  ret = constraintExpr_makeBinaryOpConstraintExpr (expr, inc);
  ret->data = constraintExprData_binaryExprSetOp(ret->data, MINUS);
  return ret;
}

constraintExpr constraintExpr_makeAddConstraintExpr (constraintExpr expr, constraintExpr add)
{
  constraintExpr ret;

  ret = constraintExpr_makeBinaryOpConstraintExpr (expr, add);
  
  ret->data = constraintExprData_binaryExprSetOp(ret->data, PLUS);

  return ret;
}

constraintExpr constraintExpr_makeIncConstraintExpr (constraintExpr expr)
{
  constraintExpr ret;
  constraintExpr inc;

  inc = constraintExpr_makeIntLiteral (1);
  ret = constraintExpr_makeBinaryOpConstraintExpr (expr, inc);
  ret->data = constraintExprData_binaryExprSetOp(ret->data, PLUS);
  return ret;
}

cstring constraintExprUnaryOpKind_print (constraintExprUnaryOpKind op)
{
  switch (op)
    {
    case MAXSET:
      return message("MAXSET");
    case MINSET:
      return message("MINSET");
    case MAXREAD:
      return message("MAXREAD");
    case MINREAD:
      return message("MINREAD");
    default:
      llassert(FALSE);
      return message ("<(Unary OP OTHER>");
    }
}


cstring constraintExprBinaryOpKind_print (constraintExprBinaryOpKind op)
{
  
  switch (op)
    {
    case PLUS:
      return message("+");
    case MINUS:
      return message("-");

    default:
      llassert(FALSE);
      return message ("<binary OP Unknown>");
    }
}

bool constraintExpr_similar (constraintExpr expr1, constraintExpr expr2)
{
  constraintExprKind kind;
  
  llassert (expr1 != NULL);
  llassert (expr2 != NULL);
  if (expr1->kind != expr2->kind)
    return FALSE;
  
  kind = expr1->kind;
  
  switch (kind)
    {
    case term:
      return constraintTerm_similar (constraintExprData_termGetTerm(expr1->data),
				  constraintExprData_termGetTerm(expr2->data) );
      /*@noreached@*/ break;
      
    case unaryExpr:
      if (constraintExprData_unaryExprGetOp (expr1->data) != constraintExprData_unaryExprGetOp (expr2->data) )
	return FALSE;
      
      return (constraintExpr_similar (
	      constraintExprData_unaryExprGetExpr (expr1->data),
	      constraintExprData_unaryExprGetExpr (expr2->data)
	      ));
      
    case binaryexpr:
      if (constraintExprData_binaryExprGetOp (expr1->data) != constraintExprData_binaryExprGetOp (expr2->data) )
	return FALSE;
      
      if (! constraintExpr_similar (constraintExprData_binaryExprGetExpr1 (expr1->data),
				 constraintExprData_binaryExprGetExpr1 (expr2->data)) )
	return FALSE;
      
      if (! constraintExpr_similar (constraintExprData_binaryExprGetExpr2 (expr1->data),
				 constraintExprData_binaryExprGetExpr2 (expr2->data)) )
	return FALSE;
      else
	return TRUE;
      /*@notreached@*/
      break;
      
    default:
      llassert(FALSE);
      return FALSE;
    }
  /*@notreached@*/
  return FALSE;
}

bool constraintExpr_same (constraintExpr expr1, constraintExpr expr2)
{
  constraintExprKind kind;
  
  llassert (expr1 != NULL);
  llassert (expr2 != NULL);
  if (expr1->kind != expr2->kind)
    return FALSE;
  
  kind = expr1->kind;
  
  switch (kind)
    {
    case term:
      return constraintTerm_similar (constraintExprData_termGetTerm(expr1->data),
				  constraintExprData_termGetTerm(expr2->data) );
      /*@notreached@*/ break;
      
    case unaryExpr:
      if (constraintExprData_unaryExprGetOp (expr1->data) != constraintExprData_unaryExprGetOp (expr2->data) )
	return FALSE;

      return (constraintExpr_same (
	      constraintExprData_unaryExprGetExpr (expr1->data),
	      constraintExprData_unaryExprGetExpr (expr2->data)
	      ));
      
            
    case binaryexpr:
      if (constraintExprData_binaryExprGetOp (expr1->data) != constraintExprData_binaryExprGetOp (expr2->data) )
	return FALSE;
      
      if (! constraintExpr_same (constraintExprData_binaryExprGetExpr1 (expr1->data),
				 constraintExprData_binaryExprGetExpr1 (expr2->data)) )
	return FALSE;
      
      if (! constraintExpr_same (constraintExprData_binaryExprGetExpr2 (expr1->data),
				 constraintExprData_binaryExprGetExpr2 (expr2->data)) )
	return FALSE;
      else
	return TRUE;
      /*@notreached@*/ break;
      
    default:
      llassert(FALSE);
      return FALSE;
    }

  /*@notreached@*/
  BADEXIT;
}

bool constraintExpr_search (constraintExpr c, constraintExpr old)
{
  bool ret = FALSE;
  constraintExprKind kind;
  constraintExpr temp;
  
  if ( constraintExpr_similar (c, old) )
    {
      #warning mem leak
      DPRINTF((message ("Found  %s",
			constraintExpr_unparse(old)
			)));
      return TRUE;
    }

  kind = c->kind;
  
  switch (kind)
    {
    case term:
      break;      
    case unaryExpr:
      temp = constraintExprData_unaryExprGetExpr (c->data);
      ret = ret || constraintExpr_search (temp, old);
      break;           
    case binaryexpr:
      
      temp = constraintExprData_binaryExprGetExpr1 (c->data);
      ret = ret || constraintExpr_search(temp, old);
           
      temp = constraintExprData_binaryExprGetExpr2 (c->data);
      ret = ret || constraintExpr_search(temp, old);
      break;
    default:
      llassert(FALSE);
    }
  return ret;
  
}


constraintExpr constraintExpr_searchandreplace (constraintExpr c, constraintExpr old, constraintExpr new )
{
  constraintExprKind kind;
  constraintExpr temp;
  
  if ( constraintExpr_similar (c, old) )
    {
      #warning mem leak
      DPRINTF((message ("Replacing %s with %s",
			constraintExpr_unparse(old), constraintExpr_unparse(new)
			)));
      return constraintExpr_copy (new);
    }

  kind = c->kind;
  
  switch (kind)
    {
    case term:
      break;      
    case unaryExpr:
      temp = constraintExprData_unaryExprGetExpr (c->data);
      temp = constraintExpr_searchandreplace (temp, old, new);
      c->data = constraintExprData_unaryExprSetExpr (c->data, temp);
      break;           
    case binaryexpr:
      
      temp = constraintExprData_binaryExprGetExpr1 (c->data);
      temp = constraintExpr_searchandreplace (temp, old, new);
      c->data = constraintExprData_binaryExprSetExpr1 (c->data, temp);
       
      temp = constraintExprData_binaryExprGetExpr2 (c->data);
      temp = constraintExpr_searchandreplace (temp, old, new);
      c->data = constraintExprData_binaryExprSetExpr2 (c->data, temp);
      break;
    default:
      llassert(FALSE);
    }
  return c;
  
}

constraintExpr constraintExpr_simplifyChildren (constraintExpr c)
{
  constraintExprKind kind;
  constraintExpr temp;

  kind = c->kind;
  
  switch (kind)
    {
    case term:
      break;      
    case unaryExpr:
      temp = constraintExprData_unaryExprGetExpr (c->data);
      temp = constraintExpr_simplify (temp);
      c->data = constraintExprData_unaryExprSetExpr (c->data, temp);
      break;           
    case binaryexpr:
      BPRINTF((message("constraintExpr_simplfiyChildren: simplify binary expression: %s",constraintExpr_unparse(c) ) ) );
      temp = constraintExprData_binaryExprGetExpr1 (c->data);
      temp = constraintExpr_simplify (temp);

      c->data = constraintExprData_binaryExprSetExpr1 (c->data, temp);
       
      temp = constraintExprData_binaryExprGetExpr2 (c->data);
      temp = constraintExpr_simplify (temp);

      c->data = constraintExprData_binaryExprSetExpr2 (c->data, temp);
      break;
    default:
      llassert(FALSE);
    }
  return c;
  
}


constraintExpr constraintExpr_setFileloc (constraintExpr c, fileloc loc)
{
  constraintTerm t;
  constraintExpr temp;

  llassert(c != NULL);
  
  switch (c->kind)
    {
    case term:
      t = constraintExprData_termGetTerm (c->data);
      t = constraintTerm_setFileloc (t, loc);
      c->data = constraintExprData_termSetTerm (c->data, t);
      break;
    case binaryexpr:
      
      temp = constraintExprData_binaryExprGetExpr1 (c->data);
      temp = constraintExpr_setFileloc (temp, loc);
      c->data = constraintExprData_binaryExprSetExpr1 (c->data, temp);
      
      temp = constraintExprData_binaryExprGetExpr2 (c->data);
      temp = constraintExpr_setFileloc (temp, loc);
      c->data = constraintExprData_binaryExprSetExpr2 (c->data, temp);
      break;
    case unaryExpr:
      temp = constraintExprData_unaryExprGetExpr (c->data);
      temp = constraintExpr_setFileloc (temp, loc);
      c->data = constraintExprData_unaryExprSetExpr (c->data, temp);
      break;
    }
  return c;
}

constraintExpr constraintExpr_simplifybinaryExpr (constraintExpr c)
{
  constraintExpr e1, e2;

  e1 = constraintExprData_binaryExprGetExpr1 (c->data);
  e2 = constraintExprData_binaryExprGetExpr2 (c->data);

  if (constraintExpr_canGetValue (e1) && constraintExpr_canGetValue(e2) )
    {
      int i;

      i = constraintExpr_getValue(e1) + constraintExpr_getValue (e2);

      c = constraintExpr_makeIntLiteral (i);

    }
  return c;
}


constraintExpr constraintExpr_subtractExpr (constraintExpr expr, constraintExpr addent)
{
  constraintExpr  new;
  
  BPRINTF ( (message ("Doing subtraceTerm simplification") ) );

  new = constraintExpr_makeBinaryOpConstraintExpr (expr, addent);
  new->data = constraintExprData_binaryExprSetOp (new->data, MINUS);
  return new;
}

constraintExpr constraintExpr_addExpr (constraintExpr expr, constraintExpr addent)
{
  constraintExpr  new;
  
 BPRINTF ( (message ("Doing addTerm simplification") ) );

  new = constraintExpr_makeBinaryOpConstraintExpr (expr, addent);
  new->data = constraintExprData_binaryExprSetOp (new->data, PLUS);
  return new;
}

constraintExpr constraintExpr_solveBinaryExpr (constraintExpr lexpr, constraintExpr expr)
{
  constraintExpr expr1, expr2;
  constraintExprBinaryOpKind op;
  
  if (lexpr->kind != binaryexpr)
    return expr;

  expr2 = constraintExprData_binaryExprGetExpr2 (lexpr->data);
  expr1 = constraintExprData_binaryExprGetExpr1 (lexpr->data);
  op    = constraintExprData_binaryExprGetOp (lexpr->data);

      
  //  if (constraintExpr_canGetValue (expr2) )
    {
      #warning make sure this works

      lexpr->kind = expr1->kind;
      lexpr->data = constraintExprData_copy (expr1->data, expr1->kind);

      
      if (op == PLUS)
	expr = constraintExpr_subtractExpr (expr, expr2);
      else
	expr = constraintExpr_addExpr (expr, expr2);
	
      return expr;
    }  
  expr = constraintExpr_solveBinaryExpr (expr1, expr);

  expr = constraintExpr_solveBinaryExpr (expr2, expr);
  return expr;
}

constraintExpr constraintExpr_simplifyunaryExpr (constraintExpr c)
{
  constraintExpr exp;
  
  llassert (c->kind == unaryExpr);

  BPRINTF ( (message ("Doing constraintExpr_simplifyunaryExpr:%s", constraintExpr_unparse (c) ) ) );
  
  if ( (constraintExprData_unaryExprGetOp (c->data) != MAXSET) &&
       (constraintExprData_unaryExprGetOp (c->data) != MAXREAD) )
    {
      return c;
    }
  // pattern mxr ( var + const) = mxr(var) - const
  
  exp = constraintExprData_unaryExprGetExpr (c->data);

  if (exp->kind == term)
    {
      constraintTerm cterm;

      cterm = constraintExprData_termGetTerm (exp->data);
      
      if (constraintTerm_isStringLiteral(cterm) )
	{
	  cstring val;
	  val = constraintTerm_getStringLiteral (cterm);
	  if (constraintExprData_unaryExprGetOp (c->data) == MAXSET)
	    {
	      return constraintExpr_makeIntLiteral (strlen (val) );
	    }
	  if (constraintExprData_unaryExprGetOp (c->data) == MAXREAD)
	    {
	      return constraintExpr_makeIntLiteral (strlen (val) );
	    }
	  BADEXIT;
	}
      return c;
    }
  
  if (exp->kind != binaryexpr)
    return c;

  if (constraintExprData_binaryExprGetOp (exp->data) == PLUS  )
    {
 
      //      if (constraintExpr_canGetValue (constraintExprData_binaryExprGetExpr2 (exp->data) ) )
	{
	
	  constraintExpr  temp, temp2, new;

	  DPRINTF ( (message ("Doing fancy simplification") ) );

	  temp = constraintExprData_binaryExprGetExpr2 (exp->data);

	  temp2 = constraintExprData_binaryExprGetExpr1 (exp->data);
	  c->data = constraintExprData_unaryExprSetExpr (c->data, temp2);
	  
	  
	  
	  new = constraintExpr_subtractExpr (c, temp);

	  DPRINTF ( (message ("Done fancy simplification:%s", constraintExpr_unparse (new) ) ) );

	  c = new;
	}
    }
  
  DPRINTF ( (message ("Done simplification:%s", constraintExpr_unparse (c) ) ) );
  return c;
}


constraintExpr constraintExpr_simplify (constraintExpr c)
{
  constraintExprKind kind;
  constraintTerm t;

  
  BPRINTF ( (message ("Doing constraintExpr_simplify:%s", constraintExpr_unparse (c) ) ) );  

  c = constraintExpr_simplifyChildren (c);
  c = constraintExpr_combineConstants (c);
  c = constraintExpr_simplifyChildren (c);
  
  kind = c->kind;
  
  switch (kind)
    {
    case term:
      t = constraintExprData_termGetTerm (c->data);
      t = constraintTerm_simplify (t);
      c->data = constraintExprData_termSetTerm (c->data, t);
      break;      
    case unaryExpr:
      c = constraintExpr_simplifyunaryExpr (c);
      break;           
    case binaryexpr:
      c = constraintExpr_simplifybinaryExpr (c);      
      break;
    default:
      llassert(FALSE);
    }
  return c;
  
}

cstring constraintExpr_unparse (constraintExpr ex)
{
  cstring st;
  constraintExprKind kind;

  llassert (ex != NULL);

  kind = ex->kind;
  
  switch (kind)
    {
    case term:
      st = message ("(%s) ", constraintTerm_print (constraintExprData_termGetTerm(ex->data) ) );
      break;
    case unaryExpr:
      st = message ("%s (%s)",
		    constraintExprUnaryOpKind_print (constraintExprData_unaryExprGetOp (ex->data)
						     ),
		    constraintExpr_unparse (constraintExprData_unaryExprGetExpr (ex->data) )
   		    );
      break;
    case binaryexpr:
      st = message ("(%s) %s (%s)",
		    constraintExpr_unparse (constraintExprData_binaryExprGetExpr1 (ex->data) ),
		    constraintExprBinaryOpKind_print (constraintExprData_binaryExprGetOp (ex->data)
						     ),
		    constraintExpr_unparse (constraintExprData_binaryExprGetExpr2 (ex->data) )
		    );
      break;
    default:
      llassert(FALSE);
      st = message ("error");
      
    }

  DPRINTF((message ("constraintExpr_unparse: '%s'",st) ) );
  return st;
}

constraintExpr constraintExpr_doSRefFixBaseParam (/*@returned@*/  constraintExpr expr, exprNodeList arglist)
{
  constraintTerm Term;
  constraintExprKind kind;
  constraintExpr expr1, expr2;
  constraintExprData data;
  llassert (expr != NULL);

  data = expr->data;
  
  kind = expr->kind;
  
  switch (kind)
    {
    case term:
      Term = constraintExprData_termGetTerm(data);
      Term = constraintTerm_doSRefFixBaseParam (Term, arglist);
      data = constraintExprData_termSetTerm(data, Term);
      break;
    case unaryExpr:
      expr1 = constraintExprData_unaryExprGetExpr (data);
      expr1 = constraintExpr_doSRefFixBaseParam (expr1, arglist);
      data = constraintExprData_unaryExprSetExpr (data, expr1);
      break;
    case binaryexpr:
      expr1 = constraintExprData_binaryExprGetExpr1 (data);
      expr2 = constraintExprData_binaryExprGetExpr2 (data);
      
      expr1 = constraintExpr_doSRefFixBaseParam (expr1, arglist);
      data = constraintExprData_binaryExprSetExpr1 (data, expr1);
      expr2 = constraintExpr_doSRefFixBaseParam (expr2, arglist);
      data = constraintExprData_binaryExprSetExpr2 (data, expr2);
      
      break;
    default:
      llassert(FALSE);
      data = NULL;
    }
  return expr;
}

constraintExpr constraintExpr_doSRefFixConstraintParam (/*@returned@*/  constraintExpr expr, exprNodeList arglist)
{
  constraintExprKind kind;
  constraintExpr expr1, expr2;
  constraintExprData data;
  llassert (expr != NULL);

  data = expr->data;
  
  kind = expr->kind;
  
  switch (kind)
    {
    case term:
      expr = constraintTerm_doSRefFixConstraintParam (expr, arglist);
      break;
    case unaryExpr:
      expr1 = constraintExprData_unaryExprGetExpr (data);
      expr1 = constraintExpr_doSRefFixConstraintParam (expr1, arglist);
      data = constraintExprData_unaryExprSetExpr (data, expr1);
      break;
    case binaryexpr:
      expr1 = constraintExprData_binaryExprGetExpr1 (data);
      expr2 = constraintExprData_binaryExprGetExpr2 (data);
      
      expr1 = constraintExpr_doSRefFixConstraintParam (expr1, arglist);
      data = constraintExprData_binaryExprSetExpr1 (data, expr1);
      expr2 = constraintExpr_doSRefFixConstraintParam (expr2, arglist);
      data = constraintExprData_binaryExprSetExpr2 (data, expr2);
      
      break;
    default:
      llassert(FALSE);
      data = NULL;
    }
  return expr;
}

constraintExpr constraintExpr_doFixResult (/*@returned@*/  constraintExpr expr, exprNode fcnCall)
{
  constraintExprKind kind;
  constraintExpr expr1, expr2;
  constraintExprData data;
  llassert (expr != NULL);

  data = expr->data;
  
  kind = expr->kind;
  
  switch (kind)
    {
    case term:
      expr = constraintTerm_doFixResult (expr, fcnCall);
      break;
    case unaryExpr:
      expr1 = constraintExprData_unaryExprGetExpr (data);
      expr1 = constraintExpr_doFixResult (expr1, fcnCall);
      data = constraintExprData_unaryExprSetExpr (data, expr1);
      break;
    case binaryexpr:
      expr1 = constraintExprData_binaryExprGetExpr1 (data);
      expr2 = constraintExprData_binaryExprGetExpr2 (data);
      
      expr1 = constraintExpr_doFixResult (expr1, fcnCall);
      data = constraintExprData_binaryExprSetExpr1 (data, expr1);
      expr2 = constraintExpr_doFixResult (expr2, fcnCall);
      data = constraintExprData_binaryExprSetExpr2 (data, expr2);
      
      break;
    default:
      llassert(FALSE);
      data = NULL;
    }
  return expr;
}

cstring constraintExpr_print (constraintExpr expr) /*@*/
{
  return constraintExpr_unparse(expr);
}

bool constraintExpr_hasMaxSet (constraintExpr expr) /*@*/
{
  cstring t;

  t = constraintExpr_unparse(expr);

  return ((bool)strstr (t, "MAXSET") );
}



      /*returns 1 0 -1 like strcmp
	1 => expr1 > expr2
	0 => expr1 == expr2
	-1 => expr1 < expr2
       */
int constraintExpr_compare (constraintExpr expr1, constraintExpr expr2)
{
  int value1, value2;

  if (constraintExpr_similar (expr1, expr2) )
    {
      return 0;
    }
  value1 = constraintExpr_getValue(expr1);
  value2 = constraintExpr_getValue(expr2);

  if (value1 > value2)
    return 1;

  if (value1 == value2)
    return 0;

  else
    return -1;
}

int constraintExpr_getValue (constraintExpr expr)
{
  llassert (expr->kind == term);
  return (constraintTerm_getValue (constraintExprData_termGetTerm (expr->data) ) );
}

bool constraintExpr_canGetValue (constraintExpr expr)
{
  switch (expr->kind)
    {
    case term:
      return constraintTerm_canGetValue (constraintExprData_termGetTerm (expr->data) );
    default:
      return FALSE;
      
    }
        llassert(FALSE);
}

bool constraintExpr_canCompare (constraintExpr expr1, constraintExpr expr2)
{
  
  llassert(expr1 && expr2);
  return (  constraintExpr_canGetValue(expr1) &&
	    constraintExpr_canGetValue(expr2)
	    );
}


fileloc constraintExpr_getFileloc (constraintExpr expr)
{
  constraintExpr e;
constraintTerm t;
  constraintExprKind kind;

 kind = expr->kind;
  
  switch (kind)
    {
    case term:
      t = constraintExprData_termGetTerm (expr->data);
      return (constraintTerm_getFileloc (t) );
      break;      
    case unaryExpr:
      e = constraintExprData_unaryExprGetExpr (expr->data);
      return (constraintExpr_getFileloc (e) );
      break;           
    case binaryexpr:
      e = constraintExprData_binaryExprGetExpr1 (expr->data);
      return (constraintExpr_getFileloc (e) );
    }
  llassert (FALSE);
  //  llfatalbug("Code should be reached");
  return (fileloc_undefined);
}



/* bool constraintExpr_includesTerm (constraintExpr expr, constraintTerm term) */
/* { */
/*   if (constraintTerm_hasTerm (expr->term, term) ) */
/*     return TRUE; */

/*   if ( (expr->expr) != NULL) */
/*     { */
/*       return ( constraintExpr_includesTerm (expr->expr, term) ); */
/*     } */
/*   return FALSE; */

/* } */




