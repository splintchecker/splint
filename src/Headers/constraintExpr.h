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


void constraintExpr_free ( /*@only@*/ constraintExpr expr);

int constraintExpr_getValue (constraintExpr expr) /*@*/;

constraintExpr constraintExpr_setFileloc (/*@returned@*/ constraintExpr c, fileloc loc) /*@modifies c@*/;

constraintExpr constraintExpr_copy (constraintExpr expr) /*@*/;

cstring constraintExpr_unparse (constraintExpr ex) /*@*/;
extern cstring constraintExpr_print (constraintExpr expr) /*@*/;


bool constraintExpr_similar (constraintExpr expr1, constraintExpr expr2) /*@*/;
bool constraintExpr_same (constraintExpr expr1, constraintExpr expr2) /*@*/;
constraintExpr constraintExpr_searchandreplace (/*@returned@*/ constraintExpr c, /*@observer@*/ constraintExpr old, /*@observer@*/ constraintExpr new ) /*@modifies c@*/;
bool constraintExpr_canGetValue (constraintExpr expr) /*@*/;

int constraintExpr_compare (constraintExpr expr1, constraintExpr expr2) /*@*/;

//constraintExpr constraintExpr_makeValueInt (int i);

/*@only@*/ constraintExpr constraintExpr_makeIntLiteral (int i);

/*@only@*/ constraintExpr constraintExpr_makeValueExpr (exprNode expr);

/*@only@*/ constraintExpr constraintExpr_makeMaxSetExpr (exprNode expr);

/*@only@*/ constraintExpr  constraintExpr_makeMaxReadExpr (exprNode expr);

/*@only@*/ constraintExpr constraintExpr_makeIncConstraintExpr (/*@only@*/ constraintExpr expr);

/*@only@*/ constraintExpr constraintExpr_makeDecConstraintExpr (/*@only@*/ constraintExpr expr);

constraintExpr constraintExpr_simplify (/*@returned@*/ constraintExpr c) /*@modifies c@*/;

/*@only@*/ constraintExpr constraintExpr_solveBinaryExpr (constraintExpr lexpr, /*@returned@*/ constraintExpr expr) /*@modifies lexpr, expr @*/;

bool constraintExpr_search (constraintExpr c, constraintExpr old) /*@*/;

fileloc constraintExpr_getFileloc (constraintExpr expr);

/*@only@*/ constraintExpr constraintExpr_makeBinaryOpConstraintExprIntLiteral (/*@only@*/constraintExpr expr, int literal);

/*@only@*/ constraintExpr constraintExpr_makeSRefMaxset ( /*@only@*/ sRef s);

/*@only@*/ constraintExpr constraintExpr_makeTermsRef (/*@only@*/ sRef s);

constraintExpr constraintExpr_doSRefFixBaseParam ( /*@returned@*/ constraintExpr expr, exprNodeList arglist);

/*@only@*/ constraintExpr constraintExpr_makeExprNode (exprNode e);

constraintExpr constraintExpr_doFixResult (/*@returned@*/  constraintExpr expr, exprNode fcnCall);

bool constraintExpr_isLit (constraintExpr expr);

/*@only@*/ constraintExpr constraintExpr_makeAddConstraintExpr (/*@only@*/constraintExpr expr, /*@only@*/ constraintExpr add);

/*@only@*/ constraintExpr constraintExpr_parseMakeUnaryOp (lltok op,/*@only@*/ constraintExpr cexpr);

constraintExpr constraintExpr_parseMakeBinaryOp (/*@only@*/ constraintExpr expr1, lltok op, /*@only@*/ constraintExpr expr2);

bool constraintExpr_hasMaxSet (constraintExpr expr);


/*@only@*/ constraintExpr constraintExpr_makeSRefMaxRead(/*@only@*/ sRef s);

constraintTerm constraintTerm_doSRefFixBaseParam (/*@returned@*/ constraintTerm term, exprNodeList arglist) /*@modifies term@*/;

/*@only@*/ constraintExpr constraintExpr_doSRefFixConstraintParam (/*@returned@*/ /*@only@*/ constraintExpr expr, exprNodeList arglist) /*@modifies expr@*/;

/*@only@*/
constraintExpr constraintExpr_propagateConstants (/*@only@*/ constraintExpr expr,
						/*@out@*/ bool * propagate,
						  /*@out@*/ int *literal);

#else

# error "Multiple include"

#endif
