#ifndef __constraintExpr_h__

#define __constraintExpr_h__

typedef enum
{
  binaryexpr,
  unaryExpr,
  term
}
constraintExprKind;

struct s_constraintExpr {
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


void constraintExpr_free ( /*@only@*/ constraintExpr p_expr);

int constraintExpr_getValue (constraintExpr p_expr) /*@*/;

constraintExpr constraintExpr_setFileloc (/*@returned@*/ constraintExpr p_c, fileloc p_loc) /*@modifies p_c@*/;

constraintExpr constraintExpr_copy (constraintExpr p_expr) /*@*/;

/*@only@*/ cstring constraintExpr_unparse (/*@temp@*/ /*@observer@*/ constraintExpr p_ex) /*@*/;
extern cstring constraintExpr_print (constraintExpr p_expr) /*@*/;


bool constraintExpr_similar (constraintExpr p_expr1, constraintExpr p_expr2) /*@*/;
bool constraintExpr_same (constraintExpr p_expr1, constraintExpr p_expr2) /*@*/;
/*@only@*/ constraintExpr constraintExpr_searchandreplace (/*@only@*/ /*@unique@*/ constraintExpr p_c, /*@temp@*/ /*@observer@*/ constraintExpr p_old, /*@temp@*/ /*@observer@*/ constraintExpr p_newExpr ) /*@modifies p_c@*/;
bool constraintExpr_canGetValue (constraintExpr p_expr) /*@*/;

int constraintExpr_compare (constraintExpr p_expr1, constraintExpr p_expr2) /*@*/;

//constraintExpr constraintExpr_makeValueInt (int i);

/*@only@*/ constraintExpr constraintExpr_makeIntLiteral (int p_i);

/*@only@*/ constraintExpr constraintExpr_makeValueExpr (/*@exposed@*/ exprNode p_expr);

/*@only@*/ constraintExpr constraintExpr_makeMaxSetExpr (/*@exposed@*/ exprNode p_expr);

/*@only@*/ constraintExpr  constraintExpr_makeMaxReadExpr (/*@exposed@*/ exprNode p_expr);

/*@only@*/ constraintExpr constraintExpr_makeIncConstraintExpr (/*@only@*/ constraintExpr p_expr);

/*@only@*/ constraintExpr constraintExpr_makeDecConstraintExpr (/*@only@*/ constraintExpr p_expr);

/*@only@*/ constraintExpr constraintExpr_simplify (/*@only@*/ constraintExpr p_c);

/*@only@*/ constraintExpr constraintExpr_solveBinaryExpr (constraintExpr p_lexpr, /*@only@*/ constraintExpr p_expr) /*@modifies p_lexpr, p_expr @*/;

bool constraintExpr_search (/*@observer@*/ /*@temp@*/ constraintExpr p_c, /*@observer@*/ /*@temp@*/ constraintExpr p_old);

/*@only@*/ fileloc constraintExpr_getFileloc (constraintExpr p_expr);


/*@only@*/ constraintExpr constraintExpr_makeSRefMaxset ( /*@temp@*/ /*@oberver@*/ sRef p_s);

/*@only@*/ constraintExpr constraintExpr_makeSRefMaxRead(/*@temp@*/ /*@observer@*/ sRef p_s);

/*@only@*/ constraintExpr constraintExpr_makeTermsRef (/*@temp@*/ sRef  p_s);

constraintExpr constraintExpr_doSRefFixBaseParam ( /*@returned@*/ constraintExpr p_expr, exprNodeList p_arglist);

/*@only@*/ constraintExpr constraintExpr_makeExprNode (/*@dependent@*/  exprNode p_e);

/*@only@*/ constraintExpr constraintExpr_doFixResult (/*@only@*/  constraintExpr p_expr, /*@observer@*/ exprNode p_fcnCall);

bool constraintExpr_isLit (constraintExpr p_expr);

/*@only@*/ constraintExpr constraintExpr_makeAddExpr (/*@only@*/ constraintExpr p_expr, /*@only@*/ constraintExpr p_addent);

/*@only@*/  constraintExpr constraintExpr_makeSubtractExpr (/*@only@*/ constraintExpr p_expr, /*@only@*/ constraintExpr p_addent);

/*@only@*/ constraintExpr constraintExpr_parseMakeUnaryOp (lltok p_op,/*@only@*/ constraintExpr p_cexpr);

constraintExpr constraintExpr_parseMakeBinaryOp (/*@only@*/ constraintExpr p_expr1, lltok p_op, /*@only@*/ constraintExpr p_expr2);

bool constraintExpr_hasMaxSet (/*@observer@*/ /*@temp@*/ constraintExpr p_expr);



/*@only@*/ constraintExpr constraintExpr_doSRefFixConstraintParam (/*@returned@*/ /*@only@*/ constraintExpr p_expr, exprNodeList p_arglist) /*@modifies p_expr@*/;

/*@only@*/
constraintExpr constraintExpr_propagateConstants (/*@only@*/ constraintExpr p_expr,
						/*@out@*/ bool * p_propagate,
						  /*@out@*/ int *p_literal);

bool constraintExpr_isBinaryExpr (/*@observer@*/ /*@temp@*/ constraintExpr p_c);

extern void  constraintExpr_dump (/*@observer@*/ /*@temp@*/ constraintExpr p_expr,  FILE *p_f);

extern /*@only@*/ constraintExpr  constraintExpr_undump (FILE *p_f);

#else


# error "Multiple include"

#endif
