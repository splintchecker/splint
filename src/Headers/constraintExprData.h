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


typedef union _constraintExprData
{
  constraintExprBinaryOp binaryOp;
  constraintExprUnaryOp unaryOp;
  constraintTerm term;
}  * constraintExprData;

/*@constant null constraintExprData constraintExprData_undefined; @*/
# define constraintExprData_undefined ((constraintExprData)NULL)

extern /*@falsenull@*/ bool constraintExprData_isDefined ( /*@temp@*/ /*@observer@*/ /*@reldef@*/constraintExprData p_e) /*@*/ ;
extern /*@unused@*/ /*@truenull@*/ bool constraintExprData_isUndefined (/*2oberserver@*/ constraintExprData p_e) /*@*/ ;
extern/*@unused@*/ /*@truenull@*/ bool constraintExprData_isError (/*@observer@*/ constraintExprData p_e) /*@*/ ;

# define constraintExprData_isDefined(e)      ((e) != constraintExprData_undefined)
# define constraintExprData_isUndefined(e)    ((e) == constraintExprData_undefined)
# define constraintExprData_isError(e)        ((e) == constraintExprData_undefined)

extern void constraintExprData_freeBinaryExpr (/*@only@*/ constraintExprData) ;
extern void constraintExprData_freeUnaryExpr (/*@only@*/ constraintExprData) ;
extern void constraintExprData_freeTerm (/*@only@*/ constraintExprData) ;

/*@reldef@*/ constraintExprData constraintExprData_termSetTerm (/*@reldef@*/ /*@returned@*/ constraintExprData data, /*@only@*/ constraintTerm term);

/*@observer@*/ constraintTerm constraintExprData_termGetTerm (/*@observer@*/ constraintExprData data) /*@*/;

constraintExprUnaryOpKind constraintExprData_unaryExprGetOp (/*@observer@*//*@reldef@*/constraintExprData data) /*@*/;

/*@observer@*/ constraintExpr  constraintExprData_unaryExprGetExpr (/*@observer@*/ /*@reldef@*/constraintExprData data) /*@*/;


//  /*@special@*/ constraintExprData  constraintExprData_unaryExprSetOp ( /*@out@*/ /*@special@*/ /*@returned@*/ constraintExprData data, constraintExprUnaryOpKind op) /*@sets result->unaryOp.unaryOp@*/;


constraintExprData  constraintExprData_unaryExprSetOp (/*@reldef@*/ /*@returned@*/ constraintExprData data, constraintExprUnaryOpKind op);

constraintExprData  constraintExprData_unaryExprSetExpr (/*@reldef@*/ /*@returned@*/ constraintExprData data,  /*@only@*/ constraintExpr expr);


constraintExprBinaryOpKind  constraintExprData_binaryExprGetOp (/*@reldef@*/constraintExprData data) /*@*/;

/*@observer@*/ constraintExpr  constraintExprData_binaryExprGetExpr1 (/*@observer@*/ /*@reldef@*/constraintExprData data)/*@*/;

/*@observer@*/ constraintExpr  constraintExprData_binaryExprGetExpr2 (/*@observer@*/ /*@reldef@*/constraintExprData data)/*@*/;

constraintExprData  constraintExprData_binaryExprSetExpr1 (/*@reldef@*/ /*@returned@*/ constraintExprData data, /*@only@*/ constraintExpr expr) ;

constraintExprData  constraintExprData_binaryExprSetExpr2  (/*@reldef@*/ /*@returned@*/  constraintExprData data, /*@only@*/ constraintExpr expr);

     constraintExprData  constraintExprData_binaryExprSetOp (/*@reldef@*/ /*@returned@*/ /*@out@*/constraintExprData data, constraintExprBinaryOpKind op);

/*@only@*/ constraintExprData constraintExprData_copyBinaryExpr(/*@observer@*/ constraintExprData data);

/*@only@*/ constraintExprData constraintExprData_copyUnaryExpr(/*@observer@*/ constraintExprData data);

/*@only@*/ constraintExprData constraintExprData_copyTerm (/*@observer@*/ constraintExprData data);

#else

#error "Multiple Include"

#endif
