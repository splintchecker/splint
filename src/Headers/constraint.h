#ifndef __constraint_h__

#define __constraint_h__

typedef enum
{
  LT, LTE, GT, GTE, EQ, NONNEGATIVE, POSITIVE
}
arithType;

//abst_typedef struct constr_ * constr;


struct _constraint {
  constraint     orig;
  constraintExpr lexpr;
  arithType       ar;
  constraintExpr  expr;
  bool post;
} ;

abst_typedef struct _constraintTerm * constraintTerm;

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
void constraint_overWrite (constraint c1, constraint c2);
constraint constraint_copy (constraint c);

constraintExpr makePostOpInc (exprNode t1);


bool fileloc_closer (fileloc  loc1, fileloc  loc2, fileloc  loc3);
cstring constraintTerm_print (constraintTerm term);

cstring arithType_print (arithType ar);

cstring constraintExpr_print (constraintExpr ex);
fileloc constraint_getFileloc (constraint c);
cstring constraint_print (constraint c);
constraint constraint_makeWriteSafeInt (exprNode po, int ind);

exprNode exprNode_copyConstraints (exprNode dst, exprNode src);

constraint constraint_makeEnsureEqual (exprNode e1, exprNode e2, fileloc sequencePoint);

constraint constraint_makeMaxSetSideEffectPostIncrement (exprNode e, fileloc sequencePoint);

/*@=czechfcns*/
#warning take this out
#include "constraintList.h"

#include "constraintExpr.h"
#include "constraintTerm.h"
#include "constraintResolve.h"
#endif

