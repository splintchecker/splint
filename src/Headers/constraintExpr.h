#ifndef __constraintExpr_h__

#define __constraintExpr_h__

typedef union constraintTermValue_
{
  exprNode expr;
  sRef     sref;
  int      intlit;
} constraintTermValue;

typedef enum
{
 EXPRNODE, SREF,
 INTLITERAL
} constraintTermType;

struct _constraintTerm {
  fileloc loc;
  constraintTermValue value;
  constraintTermType kind;
};


typedef enum
{
  PLUS,
  MINUS
}
constraintExprBinaryOpKind;

typedef enum
{
 VALUE, CALLSAFE,
 MAXSET, MINSET, MAXREAD, MINREAD,
 NULLTERMINATED,
 UNDEFINED
}
constraintExprUnaryOpKind;

typedef enum
{
  binaryexpr,
  unaryExpr,
  term,
}
constraintExprKind;

typedef struct constraintExprBinaryOp_
{
  constraintExpr expr1;
  constraintExprBinaryOpKind binaryOp;
  constraintExpr expr2;
} constraintExprBinaryOp;


typedef struct constraintExprUnaryOp_
{
  constraintExpr expr;
  constraintExprUnaryOpKind unaryOp;
} constraintExprUnaryOp;


typedef union constraintExprData_
{
  constraintExprBinaryOp binaryOp;
  constraintExprUnaryOp unaryOp;
  constraintTerm term;
} *constraintExprData;


struct constraintExpr_ {
  constraintExprKind kind;
  constraintExprData data;
};

# define constraintExpr_undefined ((constraintExpr)NULL)

//constraintTerm constraintTerm_copy (constraintTerm term);

int constraintExpr_getValue (constraintExpr expr);

constraintExpr constraintExpr_setFileloc (constraintExpr expr, fileloc loc);

constraintExpr constraintExpr_copy (constraintExpr expr);

cstring constraintExpr_unparse (constraintExpr ex);
extern cstring constraintExpr_print (constraintExpr expr);


bool constraintExpr_similar (constraintExpr expr1, constraintExpr expr2);
bool constraintExpr_same (constraintExpr expr1, constraintExpr expr2);
constraintExpr constraintExpr_searchandreplace (constraintExpr c, constraintExpr old, constraintExpr new );
bool constraintExpr_canGetValue (constraintExpr expr);

int constraintExpr_compare (constraintExpr expr1, constraintExpr expr2);

constraintExpr constraintExpr_makeValueInt (int i);

constraintExpr constraintExpr_makeIntLiteral (int i);

constraintExpr constraintExpr_makeValueExpr (exprNode expr);

constraintExpr constraintExpr_makeMaxSetExpr (exprNode expr);

constraintExpr  constraintExpr_makeMaxReadExpr (exprNode expr);

constraintExpr  constraintExpr_makeMinSetExpr (exprNode expr);

constraintExpr  constraintExpr_makeMinReadExpr (exprNode expr);

constraintExpr constraintExpr_makeIncConstraintExpr (constraintExpr expr);

constraintExpr constraintExpr_makeDecConstraintExpr (constraintExpr expr);

constraintExpr constraintExpr_simplify (constraintExpr c);


constraintExpr constraintExpr_solveBinaryExpr (constraintExpr lexpr, constraintExpr expr);

bool constraintExpr_search (constraintExpr c, constraintExpr old);
/*   jjjkkkk   */

constraintExprData constraintExprData_copy (constraintExprData data, constraintExprKind kind);


constraintExprData constraintExprData_termSetTerm (/*@out@*/ constraintExprData data, constraintTerm term);

constraintTerm constraintExprData_termGetTerm (constraintExprData data) /*@*/;

constraintExprUnaryOpKind constraintExprData_unaryExprGetOp (constraintExprData data) /*@*/;

constraintExpr  constraintExprData_unaryExprGetExpr (constraintExprData data) /*@*/;

constraintExprData  constraintExprData_unaryExprSetOp (constraintExprData data, constraintExprUnaryOpKind op);


constraintExprData  constraintExprData_unaryExprSetExpr (constraintExprData data, constraintExpr expr);


constraintExprBinaryOpKind  constraintExprData_binaryExprGetOp (constraintExprData data);

constraintExpr  constraintExprData_binaryExprGetExpr1 (constraintExprData data)/*@*/;

constraintExpr  constraintExprData_binaryExprGetExpr2 (constraintExprData data)/*@*/;

constraintExprData  constraintExprData_binaryExprSetExpr1 (constraintExprData data, constraintExpr expr);

constraintExprData  constraintExprData_binaryExprSetExpr2 (constraintExprData data, constraintExpr expr);

constraintExprData  constraintExprData_binaryExprSetOp (constraintExprData data, constraintExprBinaryOpKind op);
fileloc constraintExpr_getFileloc (constraintExpr expr);

constraintExpr constraintExpr_makeBinaryOpConstraintExprIntLiteral (constraintExpr expr, int literal);

constraintExpr constraintExpr_makeSRefMaxset (sRef s);

constraintExpr constraintExpr_makeTermsRef (sRef s);
constraintExpr constraintExpr_doSRefFixBaseParam ( /*@returned@*/ constraintExpr expr, exprNodeList arglist);
constraintExpr constraintExpr_makeExprNode (exprNode e);
constraintExpr constraintExpr_doSRefFixConstraintParam (/*@returned@*/  constraintExpr expr, exprNodeList arglist);

constraintExpr constraintExpr_doFixResult (/*@returned@*/  constraintExpr expr, exprNode fcnCall);
bool constraintExpr_isLit (constraintExpr expr);
constraintExpr constraintExpr_makeAddConstraintExpr (constraintExpr expr, constraintExpr add);

constraintExpr constraintExpr_parseMakeUnaryOp (lltok op, constraintExpr cexpr);

constraintExpr constraintExpr_parseMakeBinaryOp (constraintExpr expr1, lltok op, constraintExpr expr2);

bool constraintExpr_hasMaxSet (constraintExpr expr);

#endif
