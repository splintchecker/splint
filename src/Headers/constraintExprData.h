#ifndef __constraintExprData_h__

#define __constraintExprData_h__


typedef enum
{
  PLUS,
  MINUS
}
constraintExprBinaryOpKind;

typedef enum
{
  UNARYOP_UNDEFINED,
 VALUE, CALLSAFE,
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
extern /*@truenull@*/ bool constraintExprData_isError (constraintExprData p_e) /*@*/ ;

# define constraintExprData_isDefined(e)      ((e) != constraintExprData_undefined)
# define constraintExprData_isUndefined(e)    ((e) == constraintExprData_undefined)
# define constraintExprData_isError(e)        ((e) == constraintExprData_undefined)

constraintExprData constraintExprData_termSetTerm (/*@out@*/ constraintExprData data, constraintTerm term);

//constraintExprData constraintExprData_copy (constraintExprData data, constraintExprKind kind) /*@*/;

constraintTerm constraintExprData_termGetTerm (/*@observer@*/ constraintExprData data) /*@*/;

constraintExprUnaryOpKind constraintExprData_unaryExprGetOp (constraintExprData data) /*@*/;

constraintExpr  constraintExprData_unaryExprGetExpr (constraintExprData data) /*@*/;


//  /*@special@*/ constraintExprData  constraintExprData_unaryExprSetOp ( /*@out@*/ /*@special@*/ /*@returned@*/ constraintExprData data, constraintExprUnaryOpKind op) /*@sets result->unaryOp.unaryOp@*/;


constraintExprData  constraintExprData_unaryExprSetOp ( /*@out@*/ /*@returned@*/ constraintExprData data, constraintExprUnaryOpKind op);

 constraintExprData  constraintExprData_unaryExprSetExpr (/*@out@*/ /*@returns@*/ constraintExprData data, constraintExpr expr);


constraintExprBinaryOpKind  constraintExprData_binaryExprGetOp (constraintExprData data) /*@*/;

constraintExpr  constraintExprData_binaryExprGetExpr1 (constraintExprData data)/*@*/;

constraintExpr  constraintExprData_binaryExprGetExpr2 (constraintExprData data)/*@*/;

/*@special@*/ constraintExprData  constraintExprData_binaryExprSetExpr1 (/*@returned@*/ /*@special@*/constraintExprData data, constraintExpr expr) /*@defines result->binaryOp.expr1 @*/;

/*@special@*/ constraintExprData  constraintExprData_binaryExprSetExpr2  (/*@returned@*/  /*@special@*/constraintExprData data, constraintExpr expr) /*@defines result->binaryOp.expr2 @*/;

/*@special@*/ constraintExprData  constraintExprData_binaryExprSetOp (/*@returned@*/ /*@out@*/constraintExprData data, constraintExprBinaryOpKind op) /*@defines result->binaryOp.binaryOp@*/;

constraintExprData constraintExprData_copyBinaryExpr(constraintExprData data);

constraintExprData constraintExprData_copyUnaryExpr(constraintExprData data);

constraintExprData constraintExprData_copyTerm (constraintExprData data);

#else

#error "Multiple Include"

#endif
