#/*
** constraintExpr.c
*/

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

constraintExprData constraintExprData_copy (constraintExprData data, constraintExprKind kind)
{
  constraintExprData ret;
  llassert(data);
  ret = dmalloc (sizeof (*ret) );
  switch (kind)
    {
    case binaryexpr:
      ret->binaryOp.binaryOp = data->binaryOp.binaryOp;
      ret->binaryOp.expr1 = constraintExpr_copy (data->binaryOp.expr1);
      ret->binaryOp.expr2 = constraintExpr_copy (data->binaryOp.expr2);
      break;
    case unaryExpr:
      ret->unaryOp.unaryOp = data->unaryOp.unaryOp;
      ret->unaryOp.expr = constraintExpr_copy (data->unaryOp.expr);
      break;
    case term:
      ret->term = constraintTerm_copy (data->term);
    }
  
  return ret;
}

constraintExprData constraintExprData_termSetTerm (/*@out@*/ constraintExprData data, constraintTerm term)
{
  llassert (data);
  data->term = constraintTerm_copy(term);
  return data;
}



constraintTerm constraintExprData_termGetTerm (constraintExprData data)
{
  llassert (data);
  return data->term;
}


constraintExprUnaryOpKind constraintExprData_unaryExprGetOp (constraintExprData data)
{
  llassert (data);
  return (data->unaryOp.unaryOp);
}


constraintExpr  constraintExprData_unaryExprGetExpr (constraintExprData data)
{
  llassert (data);
  return (data->unaryOp.expr);
}



constraintExprData  constraintExprData_unaryExprSetOp (constraintExprData data, constraintExprUnaryOpKind op)
{
  llassert (data);
  data->unaryOp.unaryOp = op;
  return data;
}

constraintExprData  constraintExprData_unaryExprSetExpr (constraintExprData data, constraintExpr expr)
{
  llassert (data);
  data->unaryOp.expr = constraintExpr_copy(expr);
  return data;
}

// binaryExpr stuff


constraintExprBinaryOpKind  constraintExprData_binaryExprGetOp (constraintExprData data)
{
  llassert (data);
  return (data->binaryOp.binaryOp);
}


constraintExpr  constraintExprData_binaryExprGetExpr1 (constraintExprData data)
{
  llassert (data);
  return (data->binaryOp.expr1);
}


constraintExpr  constraintExprData_binaryExprGetExpr2 (constraintExprData data)
{
  llassert (data);
  return (data->binaryOp.expr2);
}


constraintExprData  constraintExprData_binaryExprSetExpr1 (constraintExprData data, constraintExpr expr)
{
  llassert (data);
  data->binaryOp.expr1 = constraintExpr_copy(expr);
  return data;
}

constraintExprData  constraintExprData_binaryExprSetExpr2 (constraintExprData data, constraintExpr expr)
{
  llassert (data);
  data->binaryOp.expr2 = constraintExpr_copy(expr);
  return data;
}


constraintExprData  constraintExprData_binaryExprSetOp (/*@returned@*/ constraintExprData data, constraintExprBinaryOpKind op)
{
  llassert (data);
  data->binaryOp.binaryOp = op;
  return data;
}
