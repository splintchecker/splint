#ifndef __constraintExprData_h__

#define __constraintExprData_h__


typedef enum
{
  BINARYOP_UNDEFINED,
  PLUS,
  MINUS
}
constraintExprBinaryOpKind;

typedef enum
{
  UNARYOP_UNDEFINED,
 MAXSET, MINSET, MAXREAD, MINREAD
 }
constraintExprUnaryOpKind;


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


typedef union constraintExprData
{
  constraintExprBinaryOp binaryOp;
  constraintExprUnaryOp unaryOp;
  constraintTerm term;
} *constraintExprData;

extern /*@falsenull@*/ bool constraintExprData_isDefined (/*@temp@*/ /*@observer@*/ /*@reldef@*/ constraintExprData p_e) /*@*/ ;
# define constraintExprData_isDefined(e)      ((e) != NULL)

extern/*@unused@*/ /*@truenull@*/ bool constraintExprData_isError (/*@observer@*/ constraintExprData p_e) /*@*/ ;

extern void constraintExprData_freeBinaryExpr (/*@only@*/ constraintExprData) ;
extern void constraintExprData_freeUnaryExpr (/*@only@*/ constraintExprData) ;
extern void constraintExprData_freeTerm (/*@only@*/ constraintExprData) ;

constraintExprData constraintExprData_termSetTerm ( /*@returned@*/ /*@partial@*/ constraintExprData p_data, /*@only@*/ constraintTerm p_term);

/*@observer@*/ constraintTerm constraintExprData_termGetTerm (/*@observer@*/ constraintExprData p_data) /*@*/;

constraintExprUnaryOpKind constraintExprData_unaryExprGetOp (/*@observer@*//*@reldef@*/constraintExprData p_data) /*@*/;

/*@observer@*/ constraintExpr  constraintExprData_unaryExprGetExpr (/*@observer@*/ /*@reldef@*/constraintExprData p_data) /*@*/;


//  special constraintExprData  constraintExprData_unaryExprSetOp ( /out special@*/ @returned@ constraintExprData p_data, constraintExprUnaryOpKind op) /sets result->unaryOp.unaryOp;


constraintExprData  constraintExprData_unaryExprSetOp (/*@partial@*/ /*@returned@*/ constraintExprData p_data, constraintExprUnaryOpKind p_op);

constraintExprData  constraintExprData_unaryExprSetExpr (/*@partial@*/ /*@returned@*/ constraintExprData p_data,  /*@only@*/ constraintExpr p_expr);


constraintExprBinaryOpKind  constraintExprData_binaryExprGetOp (/*@partial@*/constraintExprData p_data) /*@*/;

/*@observer@*/ constraintExpr  constraintExprData_binaryExprGetExpr1 (/*@observer@*/ /*@reldef@*/constraintExprData p_data)/*@*/;

/*@observer@*/ constraintExpr  constraintExprData_binaryExprGetExpr2 (/*@observer@*/ /*@reldef@*/constraintExprData p_data)/*@*/;

constraintExprData  constraintExprData_binaryExprSetExpr1 (/*@partial@*/ /*@returned@*/ constraintExprData p_data, /*@only@*/ constraintExpr p_expr) ;

constraintExprData  constraintExprData_binaryExprSetExpr2  (/*@partial@*/ /*@returned@*/  constraintExprData p_data, /*@only@*/ constraintExpr p_expr);

constraintExprData  constraintExprData_binaryExprSetOp (/*@partial@*/ /*@returned@*/ /*@out@*/constraintExprData p_data, constraintExprBinaryOpKind p_op);

/*@only@*/ constraintExprData constraintExprData_copyBinaryExpr(/*@observer@*/ constraintExprData p_data);

/*@only@*/ constraintExprData constraintExprData_copyUnaryExpr(/*@observer@*/ constraintExprData p_data);

/*@only@*/ constraintExprData constraintExprData_copyTerm (/*@observer@*/ constraintExprData p_data);

#else

#error "Multiple Include"

#endif
