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

/*@only@*/ cstring constraintExpr_unparse (/*@temp@*/ /*@observer@*/ constraintExpr ex) /*@*/;
extern cstring constraintExpr_print (constraintExpr expr) /*@*/;


bool constraintExpr_similar (constraintExpr expr1, constraintExpr expr2) /*@*/;
bool constraintExpr_same (constraintExpr expr1, constraintExpr expr2) /*@*/;
/*@only@*/ constraintExpr constraintExpr_searchandreplace (/*@only@*/ /*@unique@*/ constraintExpr c, /*@observer@*/ constraintExpr old, /*@observer@*/ constraintExpr new ) /*@modifies c@*/;
bool constraintExpr_canGetValue (constraintExpr expr) /*@*/;

int constraintExpr_compare (constraintExpr expr1, constraintExpr expr2) /*@*/;

//constraintExpr constraintExpr_makeValueInt (int i);

/*@only@*/ constraintExpr constraintExpr_makeIntLiteral (int i);

/*@only@*/ constraintExpr constraintExpr_makeValueExpr (/*@exposed@*/ exprNode expr);

/*@only@*/ constraintExpr constraintExpr_makeMaxSetExpr (/*@exposed@*/ exprNode expr);

/*@only@*/ constraintExpr  constraintExpr_makeMaxReadExpr (/*@exposed@*/ exprNode expr);

/*@only@*/ constraintExpr constraintExpr_makeIncConstraintExpr (/*@only@*/ constraintExpr expr);

/*@only@*/ constraintExpr constraintExpr_makeDecConstraintExpr (/*@only@*/ constraintExpr expr);

/*@only@*/ constraintExpr constraintExpr_simplify (/*@only@*/ constraintExpr c);

/*@only@*/ constraintExpr constraintExpr_solveBinaryExpr (constraintExpr lexpr, /*@only@*/ constraintExpr expr) /*@modifies lexpr, expr @*/;

bool constraintExpr_search (/*@observer@*/ constraintExpr c, /*@observer@*/ constraintExpr old);

/*@only@*/ fileloc constraintExpr_getFileloc (constraintExpr expr);


/*@only@*/ constraintExpr constraintExpr_makeSRefMaxset ( /*@exposed@*/ sRef s);

/*@only@*/ constraintExpr constraintExpr_makeTermsRef (/*@exposed@*/ sRef s);

constraintExpr constraintExpr_doSRefFixBaseParam ( /*@returned@*/ constraintExpr expr, exprNodeList arglist);

/*@only@*/ constraintExpr constraintExpr_makeExprNode (/*@exposed@*/ exprNode e);

/*@only@*/ constraintExpr constraintExpr_doFixResult (/*@only@*/  constraintExpr expr, /*@exposed@*/ exprNode fcnCall);

bool constraintExpr_isLit (constraintExpr expr);

/*@only@*/ constraintExpr constraintExpr_makeAddExpr (/*@only@*/ constraintExpr expr, /*@only@*/ constraintExpr addent);

/*@only@*/  constraintExpr constraintExpr_makeSubtractExpr (/*@only@*/ constraintExpr expr, /*@only@*/ constraintExpr addent);

/*@only@*/ constraintExpr constraintExpr_parseMakeUnaryOp (lltok op,/*@only@*/ constraintExpr cexpr);

constraintExpr constraintExpr_parseMakeBinaryOp (/*@only@*/ constraintExpr expr1, lltok op, /*@only@*/ constraintExpr expr2);

bool constraintExpr_hasMaxSet (/*@observer@*/ constraintExpr expr);


/*@only@*/ constraintExpr constraintExpr_makeSRefMaxRead(/*@exposed@*/ sRef s);

/*@only@*/ constraintExpr constraintExpr_doSRefFixConstraintParam (/*@returned@*/ /*@only@*/ constraintExpr expr, exprNodeList arglist) /*@modifies expr@*/;

/*@only@*/
constraintExpr constraintExpr_propagateConstants (/*@only@*/ constraintExpr expr,
						/*@out@*/ bool * propagate,
						  /*@out@*/ int *literal);

bool constraintExpr_isBinaryExpr (/*@observer@*/ constraintExpr c);

extern void  constraintExpr_dump (/*@observer@*/ constraintExpr expr,  FILE *f);

extern /*@only@*/ constraintExpr  constraintExpr_undump (FILE *f);

#else


# error "Multiple include"

#endif
