typedef union constraintTermValue_
{
  exprNode expr;
  sRef     sref;
  int      intlit;
} constraintTermValue;

typedef enum
{
  LT, LTE, GT, GTE, EQ, NONNEGATIVE, POSITIVE
}
arithType;

typedef enum
{
 BUFFSIZE, STRINGLEN, VALUE, CALLSAFE,
 MAXSET, MINSET, MAXREAD, MINREAD,
 NULLTERMINATED,
 INCOP,
 UNDEFINED
}
constraintType;

typedef enum
{
  PLUS,
  MINUS
}
constraintExprOp;


typedef enum
{
EXPRNODE, SREF,
INTLITERAL
} constraintTermType;


struct _constraintTerm {
  constraintType constrType;
  fileloc loc;
  constraintTermValue value;
  constraintTermType kind;
};

abst_typedef struct _constraintTerm * constraintTerm;

struct constraintExpr_ {

  constraintTerm term;
  constraintExprOp op;
  struct constraintExpr_ * expr;
};
# define constraintExpr_undefined ((constraintExpr)NULL)

typedef struct constraintExpr_ * constraintExpr;
abst_typedef struct constr_ * constr;


struct _constraint {
  constraintExpr lexpr;
  arithType       ar;
  constraintExpr  expr;
  bool post;
} ;

#define max_constraints 100

//constraint constraint_create (exprNode e1, exprNode e2,  arithType restriction, constraintType kind);

constraint constraint_createReadSafe (exprNode p_e1, exprNode p_e2);

constraint constraint_makeInc_Op (exprNode p_e1);

/*@i22*/
/*@-czechfcns*/
bool constraint_resolve (/*@unused@*/ constraint c);
     
/*@out@*/ constraintTerm new_constraintTermExpr (void);
constraintTerm exprNode_makeConstraintTerm (/*@only@*/ exprNode e);

constraintTerm intLit_makeConstraintTerm (int p_i);

/*@special@*/ constraintExpr makeConstraintExpr (/*@only@*/ /*@notnull@*/ constraintTerm term)
 /*@post:isnull result->expr@*/
     /*@post:notnull result->t1@*/
     /*@defines result->expr, result->t1, result->c1@, result->op*/;
     
constraintExpr makeConstraintExprIntlit (int p_i);

/*@relnull@*/ constraint constraint_makeReadSafeExprNode ( exprNode p_po, exprNode p_ind);

constraint constraint_makeWriteSafeExprNode (exprNode p_po, exprNode p_ind);

constraint constraint_makeReadSafeInt (exprNode p_t1, int p_index);

constraint constraint_makeEnsureMaxReadAtLeast (exprNode p_t1, exprNode p_t2, fileloc p_sequencePoint);

constraint constraint_makeEnsureMinReadAtMost (exprNode po, exprNode ind, fileloc sequencePoint);

constraint constraint_makeSideEffectPostIncrement (exprNode t1,  fileloc p_sequencePoint);
cstring constraintType_print (constraintType c1);

constraint constraint_copy (constraint c);

constraintExpr makePostOpInc (exprNode t1);



cstring constraintTerm_print (constraintTerm term);

cstring arithType_print (arithType ar);

cstring constraintExpr_print (constraintExpr ex);

cstring constraint_print (constraint c);
/*@=czechfcns*/
#warning take this out
#include "constraintList.h"

#include "constraintTerm.h"



