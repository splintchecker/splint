#/*
** constraintExprData.c
*/

# include "lclintMacros.nf"
# include "basic.h"
# include "cgrammar.h"
# include "cgrammar_tokens.h"

# include "exprChecks.h"
# include "aliasChecks.h"
# include "exprNodeSList.h"


void constraintExprData_freeBinaryExpr (/*@only@*/constraintExprData data)
{
  constraintExpr_free (data->binaryOp.expr1);
  constraintExpr_free (data->binaryOp.expr2);
  free(data);  
}

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

 void constraintExprData_freeUnaryExpr (/*@only@*/constraintExprData data)
{
  constraintExpr_free (data->unaryOp.expr);
  free(data);  
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

void constraintExprData_freeTerm (/*@only@*/constraintExprData data)
{
  constraintTerm_free (data->term);
  free(data);  
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

/*@reldef@*/ constraintExprData constraintExprData_termSetTerm (/*@reldef@*/ /*@returned@*/  constraintExprData data,  /*@only@*/constraintTerm term)
{
  /*@-uniondef@*/
  llassert (constraintExprData_isDefined(data));
  /*@=uniondef@*/
  data->term = term;
  return data;
}



/*@observer@*/ constraintTerm constraintExprData_termGetTerm (/*@observer@*/ constraintExprData data)
{
  llassert (constraintExprData_isDefined(data));
  /*@i22*/return data->term;
}


constraintExprUnaryOpKind constraintExprData_unaryExprGetOp (constraintExprData data)
{
  llassert (constraintExprData_isDefined(data));
  return (data->unaryOp.unaryOp);
}


constraintExpr  constraintExprData_unaryExprGetExpr (constraintExprData data)
{
  llassert (constraintExprData_isDefined(data));
  /*@i232*/ return (data->unaryOp.expr);
}



 constraintExprData constraintExprData_unaryExprSetOp (/*@reldef@*/ /*@returned@*/ constraintExprData data, constraintExprUnaryOpKind op)
{
  /*@-uniondef@*/
  llassert (constraintExprData_isDefined(data));
  /*@=uniondef@*/

  data->unaryOp.unaryOp = op;
  return data;
}

constraintExprData  constraintExprData_unaryExprSetExpr (constraintExprData data, /*@only@*/ constraintExpr expr)
{
  llassert (constraintExprData_isDefined(data));
  data->unaryOp.expr = expr;
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
  /*@i23*/ return (data->binaryOp.expr1);
}


constraintExpr  constraintExprData_binaryExprGetExpr2 (constraintExprData data)
{
  llassert (constraintExprData_isDefined(data));
  /*@i22*/ return (data->binaryOp.expr2);
}


constraintExprData  constraintExprData_binaryExprSetExpr1 ( /*@reldef@*/ /*@returned@*/ constraintExprData data, /*@only@*/ constraintExpr expr)
{
  llassert (constraintExprData_isDefined(data));
  data->binaryOp.expr1 = expr;
  return data;
}

constraintExprData  constraintExprData_binaryExprSetExpr2 (/*@returned@*/ /*@reldef@*/ constraintExprData data, constraintExpr expr) 
{
  llassert (constraintExprData_isDefined(data));
  data->binaryOp.expr2 = expr;
  return data;
}


constraintExprData  constraintExprData_binaryExprSetOp (/*@returned@*/ /*@reldef@*/ constraintExprData data, constraintExprBinaryOpKind op)
{
  llassert (constraintExprData_isDefined(data));
  data->binaryOp.binaryOp = op;
  return data;
}
