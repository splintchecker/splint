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


constraintExprData constraintExprData_copyBinaryExpr(constraintExprData data)
{
 constraintExprData ret;
  llassert(constraintExprData_isDefined(data));
  ret = dmalloc (sizeof (*ret) );
  ret->binaryOp.binaryOp = data->binaryOp.binaryOp;
  ret->binaryOp.expr1 = constraintExpr_copy (data->binaryOp.expr1);
  ret->binaryOp.expr2 = constraintExpr_copy (data->binaryOp.expr2);
  return ret;
}

constraintExprData constraintExprData_copyUnaryExpr(constraintExprData data)
{
 constraintExprData ret;
  llassert(constraintExprData_isDefined(data));
  ret = dmalloc (sizeof (*ret) );
  
  ret->unaryOp.unaryOp = data->unaryOp.unaryOp;
  ret->unaryOp.expr = constraintExpr_copy (data->unaryOp.expr);
  
  return ret;
}

constraintExprData constraintExprData_copyTerm (constraintExprData data)
{
 constraintExprData ret;
  llassert(constraintExprData_isDefined(data));
  ret = dmalloc (sizeof (*ret) );
  ret->term = constraintTerm_copy (data->term);
  return ret;
}

// constraintExprData constraintExprData_copy (constraintExprData data, constraintExprKind kind)
// {
//   constraintExprData ret;
//   llassert(constraintExprData_isDefined(data));
//   ret = dmalloc (sizeof (*ret) );
//   switch (kind)
//     {
//     case binaryexpr:
//       ret->binaryOp.binaryOp = data->binaryOp.binaryOp;
//       ret->binaryOp.expr1 = constraintExpr_copy (data->binaryOp.expr1);
//       ret->binaryOp.expr2 = constraintExpr_copy (data->binaryOp.expr2);
//       break;
//     case unaryExpr:
//       ret->unaryOp.unaryOp = data->unaryOp.unaryOp;
//       ret->unaryOp.expr = constraintExpr_copy (data->unaryOp.expr);
//       break;
//     case term:
//       ret->term = constraintTerm_copy (data->term);
//     }
  
//   return ret;
// }

constraintExprData constraintExprData_termSetTerm (/*@out@*/ constraintExprData data, constraintTerm term)
{
  llassert (constraintExprData_isDefined(data));
  data->term = constraintTerm_copy(term);
  return data;
}



constraintTerm constraintExprData_termGetTerm (constraintExprData data)
{
  llassert (constraintExprData_isDefined(data));
  return data->term;
}


constraintExprUnaryOpKind constraintExprData_unaryExprGetOp (constraintExprData data)
{
  llassert (constraintExprData_isDefined(data));
  return (data->unaryOp.unaryOp);
}


constraintExpr  constraintExprData_unaryExprGetExpr (constraintExprData data)
{
  llassert (constraintExprData_isDefined(data));
  return (data->unaryOp.expr);
}



constraintExprData  constraintExprData_unaryExprSetOp (/*@out@*/ constraintExprData data, constraintExprUnaryOpKind op)
{
  llassert (constraintExprData_isDefined(data));
  data->unaryOp.unaryOp = op;
  return data;
}

constraintExprData  constraintExprData_unaryExprSetExpr (/*@out@*/ constraintExprData data, constraintExpr expr)
{
  llassert (constraintExprData_isDefined(data));
  data->unaryOp.expr = constraintExpr_copy(expr);
  return data;
}

// binaryExpr stuff


constraintExprBinaryOpKind  constraintExprData_binaryExprGetOp (constraintExprData data)
{
  llassert (constraintExprData_isDefined(data));
  return (data->binaryOp.binaryOp);
}


constraintExpr  constraintExprData_binaryExprGetExpr1 (constraintExprData data)
{
  llassert (constraintExprData_isDefined(data));
  return (data->binaryOp.expr1);
}


constraintExpr  constraintExprData_binaryExprGetExpr2 (constraintExprData data)
{
  llassert (constraintExprData_isDefined(data));
  return (data->binaryOp.expr2);
}


constraintExprData  constraintExprData_binaryExprSetExpr1 (constraintExprData data, constraintExpr expr)
{
  llassert (constraintExprData_isDefined(data));
  data->binaryOp.expr1 = constraintExpr_copy(expr);
  return data;
}

constraintExprData  constraintExprData_binaryExprSetExpr2 (constraintExprData data, constraintExpr expr)
{
  llassert (constraintExprData_isDefined(data));
  data->binaryOp.expr2 = constraintExpr_copy(expr);
  return data;
}


/*@special@*/ constraintExprData  constraintExprData_binaryExprSetOp (/*@returned@*/ /*@out@*/constraintExprData data, constraintExprBinaryOpKind op) /*@defines result->binaryOp.binaryOp@*/
{
  llassert (constraintExprData_isDefined(data));
  data->binaryOp.binaryOp = op;
  return data;
}
