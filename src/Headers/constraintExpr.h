#ifndef __constraintExpr_h__

#define __constraintExpr_h__

typedef enum
{
  binaryexpr,
  unaryExpr,
  term
}
constraintExprKind;

struct _constraintExpr {
  constraintExprKind kind;
  constraintExprData data;
};


/*@constant null constraintExpr constraintExpr_undefined; @*/
# define constraintExpr_undefined ((constraintExpr)NULL)

extern /*@falsenull@*/ bool constraintExpr_isDefined (constraintExpr p_e) /*@*/ ;
extern /*@unused@*/ /*@truenull@*/ bool constraintExpr_isUndefined (constraintExpr p_e) /*@*/ ;
extern /*@unused@*/ /*@truenull@*/ bool constraintExpr_isError (constraintExpr p_e) /*@*/ ;

# define constraintExpr_isDefined(e)        ((e) != constraintExpr_undefined)
# define constraintExpr_isUndefined(e)      ((e) == constraintExpr_undefined)
# define constraintExpr_isError(e)          ((e) == constraintExpr_undefined)



int constraintExpr_getValue (constraintExpr expr) /*@*/;

constraintExpr constraintExpr_setFileloc (constraintExpr expr, fileloc loc) /*@modifies expr@*/;

constraintExpr constraintExpr_copy (constraintExpr expr) /*@*/;

cstring constraintExpr_unparse (constraintExpr ex) /*@*/;
extern cstring constraintExpr_print (constraintExpr expr) /*@*/;


bool constraintExpr_similar (constraintExpr expr1, constraintExpr expr2) /*@*/;
bool constraintExpr_same (constraintExpr expr1, constraintExpr expr2) /*@*/;
constraintExpr constraintExpr_searchandreplace (constraintExpr c, constraintExpr old, constraintExpr new ) /*@modifies c@*/;
bool constraintExpr_canGetValue (constraintExpr expr) /*@*/;

int constraintExpr_compare (constraintExpr expr1, constraintExpr expr2) /*@*/;

//constraintExpr constraintExpr_makeValueInt (int i);

constraintExpr constraintExpr_makeIntLiteral (int i);

constraintExpr constraintExpr_makeValueExpr (exprNode expr);

constraintExpr constraintExpr_makeMaxSetExpr (exprNode expr);

constraintExpr  constraintExpr_makeMaxReadExpr (exprNode expr);

constraintExpr constraintExpr_makeIncConstraintExpr (constraintExpr expr);

constraintExpr constraintExpr_makeDecConstraintExpr (constraintExpr expr);

constraintExpr constraintExpr_simplify (constraintExpr c) /*@modifies c@*/;

constraintExpr constraintExpr_solveBinaryExpr (constraintExpr lexpr, constraintExpr expr) /*@modifies lexpr@*/;

bool constraintExpr_search (constraintExpr c, constraintExpr old) /*@*/;

fileloc constraintExpr_getFileloc (constraintExpr expr);

constraintExpr constraintExpr_makeBinaryOpConstraintExprIntLiteral (constraintExpr expr, int literal);

constraintExpr constraintExpr_makeSRefMaxset (sRef s);

constraintExpr constraintExpr_makeTermsRef (sRef s);
constraintExpr constraintExpr_doSRefFixBaseParam ( /*@returned@*/ constraintExpr expr, exprNodeList arglist);
constraintExpr constraintExpr_makeExprNode (exprNode e);

constraintExpr constraintExpr_doFixResult (/*@returned@*/  constraintExpr expr, exprNode fcnCall);
bool constraintExpr_isLit (constraintExpr expr);
constraintExpr constraintExpr_makeAddConstraintExpr (constraintExpr expr, constraintExpr add);

constraintExpr constraintExpr_parseMakeUnaryOp (lltok op, constraintExpr cexpr);

constraintExpr constraintExpr_parseMakeBinaryOp (constraintExpr expr1, lltok op, constraintExpr expr2);

bool constraintExpr_hasMaxSet (constraintExpr expr);

//static constraintExpr constraintExpr_propagateConstants (constraintExpr expr,
//						/*@out@*/ bool * propagate,
//						  /*@out@*/ int *literal);

constraintExpr constraintExpr_makeSRefMaxRead(sRef s);

constraintTerm constraintTerm_doSRefFixBaseParam (constraintTerm term, exprNodeList arglist) /*@modifies term@*/;

constraintExpr 
constraintExpr_doSRefFixConstraintParam (/*@returned@*/ constraintExpr e, exprNodeList arglist) /*@modifies e@*/;


#else

# error "Multiple include"

#endif
