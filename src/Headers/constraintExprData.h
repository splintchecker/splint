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
 VALUE, 
 MAXSET, MINSET, MAXREAD, MINREAD,
 NULLTERMINATED
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


typedef union _constraintExprData
{
  constraintExprBinaryOp binaryOp;
  constraintExprUnaryOp unaryOp;
  constraintTerm term;
}  * constraintExprData;

/*@constant null constraintExprData constraintExprData_undefined; @*/
# define constraintExprData_undefined ((constraintExprData)NULL)

extern /*@falsenull@*/ bool constraintExprData_isDefined (/*@observer@*/ /*@reldef@*/constraintExprData p_e) /*@*/ ;
extern /*@unused@*/ /*@truenull@*/ bool constraintExprData_isUndefined (constraintExprData p_e) /*@*/ ;
extern/*@unused@*/ /*@truenull@*/ bool constraintExprData_isError (constraintExprData p_e) /*@*/ ;

# define constraintExprData_isDefined(e)      ((e) != constraintExprData_undefined)
# define constraintExprData_isUndefined(e)    ((e) == constraintExprData_undefined)
# define constraintExprData_isError(e)        ((e) == constraintExprData_undefined)

void constraintExprData_free (/*@only@*/ constraintExprData data);

/*@reldef@*/ constraintExprData constraintExprData_termSetTerm (/*@reldef@*/ /*@returned@*/ constraintExprData data, /*@only@*/ constraintTerm term);

/*@observer@*/ constraintTerm constraintExprData_termGetTerm (/*@observer@*/ constraintExprData data) /*@*/;

constraintExprUnaryOpKind constraintExprData_unaryExprGetOp (/*@reldef@*/constraintExprData data) /*@*/;

/*@observer@*/ constraintExpr  constraintExprData_unaryExprGetExpr (/*@reldef@*/constraintExprData data) /*@*/;


//  /*@special@*/ constraintExprData  constraintExprData_unaryExprSetOp ( /*@out@*/ /*@special@*/ /*@returned@*/ constraintExprData data, constraintExprUnaryOpKind op) /*@sets result->unaryOp.unaryOp@*/;


constraintExprData  constraintExprData_unaryExprSetOp (/*@reldef@*/ /*@returned@*/ constraintExprData data, constraintExprUnaryOpKind op);

constraintExprData  constraintExprData_unaryExprSetExpr (/*@reldef@*/ /*@returned@*/ constraintExprData data,  /*@only@*/ constraintExpr expr);


constraintExprBinaryOpKind  constraintExprData_binaryExprGetOp (/*@reldef@*/constraintExprData data) /*@*/;

/*@observer@*/ constraintExpr  constraintExprData_binaryExprGetExpr1 (/*@reldef@*/constraintExprData data)/*@*/;

/*@observer@*/ constraintExpr  constraintExprData_binaryExprGetExpr2 (/*@reldef@*/constraintExprData data)/*@*/;

constraintExprData  constraintExprData_binaryExprSetExpr1 (/*@reldef@*/ /*@returned@*/ constraintExprData data, /*@only@*/ constraintExpr expr) ;

constraintExprData  constraintExprData_binaryExprSetExpr2  (/*@reldef@*/ /*@returned@*/  constraintExprData data, /*@only@*/ constraintExpr expr);

     constraintExprData  constraintExprData_binaryExprSetOp (/*@reldef@*/ /*@returned@*/ /*@out@*/constraintExprData data, constraintExprBinaryOpKind op);

/*@only@*/ constraintExprData constraintExprData_copyBinaryExpr(constraintExprData data);

/*@only@*/ constraintExprData constraintExprData_copyUnaryExpr(constraintExprData data);

/*@only@*/ constraintExprData constraintExprData_copyTerm (constraintExprData data);

#else

#error "Multiple Include"

#endif
