#ifndef __constraint_h__

#define __constraint_h__

typedef enum
{
  LT, LTE, GT, GTE, EQ, NONNEGATIVE, POSITIVE
}
arithType;

struct _constraint {
  constraint     orig;
  constraint     or;
  constraintExpr lexpr;
  arithType       ar;
  constraintExpr  expr;
  bool post;
  exprNode generatingExpr;
} ;

/*@constant null constraint constraint_undefined; @*/

# define constraint_undefined ((constraint)NULL)

extern /*@falsenull@*/ bool constraint_isDefined (constraint p_e) /*@*/ ;
extern /*@unused@*/ /*@truenull@*/ bool constraint_isUndefined (constraint p_e) /*@*/ ;
extern /*@truenull@*/ bool constraint_isError (constraint p_e) /*@*/ ;

# define constraint_isDefined(e)        ((e) != constraint_undefined)
# define constraint_isUndefined(e)      ((e) == constraint_undefined)
# define constraint_isError(e)          ((e) == constraint_undefined)

constraint makeConstraintParse (sRef x, lltok relOp, exprNode cconstant);

constraint constraint_createReadSafe (exprNode p_e1, exprNode p_e2);

constraint constraint_makeInc_Op (exprNode p_e1);

/*@i22*/
/*@-czechfcns*/
bool constraint_resolve (/*@unused@*/ constraint c);
     

///*@special@*/ constraintExpr makeConstraintExpr (/*@only@*/ /*@notnull@*/ constraintTerm term)
// /*@post:isnull result->expr@*/
//     /*@post:notnull result->t1@*/
//     /*@defines result->expr, result->t1, result->c1@, result->op*/;
     
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


cstring arithType_print (arithType ar) /*@*/;


fileloc constraint_getFileloc (constraint c);
cstring constraint_print (constraint c) /*@*/;
constraint constraint_makeWriteSafeInt (exprNode po, int ind);

exprNode exprNode_copyConstraints (/*@returned@*/ exprNode dst, exprNode src);

constraint constraint_makeEnsureEqual (exprNode e1, exprNode e2, fileloc sequencePoint);

constraint constraint_makeMaxSetSideEffectPostIncrement (exprNode e, fileloc sequencePoint);

/*@only@*/ constraint constraint_preserveOrig (/*@returned@*/ /*@only@*/ constraint c) /*@modifies c @*/;
/*@only@*/ constraint constraint_doSRefFixBaseParam (/*@returned@*/ /*@only@*/ constraint precondition,
						   exprNodeList arglist);

cstring  constraint_printDetailed (constraint c);

constraint constraint_makeEnsureLessThan (exprNode e1, exprNode e2, fileloc sequencePoint);

constraint constraint_makeEnsureLessThanEqual (exprNode e1, exprNode e2, fileloc sequencePoint);
constraint constraint_makeEnsureGreaterThan (exprNode e1, exprNode e2, fileloc sequencePoint);
constraint constraint_makeEnsureGreaterThanEqual (exprNode e1, exprNode e2, fileloc sequencePoint);

/*drl add 11/28/2000 */
constraint constraint_makeSRefWriteSafeInt (sRef s, int ind);
constraint constraint_makeSRefReadSafeInt (sRef s, int ind);
/*drl add 11/26/2000 */
void constraint_printError (constraint c, fileloc loc);
constraint constraint_doSRefFixConstraintParam (constraint precondition,
						exprNodeList arglist);

constraint constraint_makeSRefSetBufferSize (sRef s, int size);

constraint constraint_doFixResult (constraint postcondition, exprNode fcnCall);

constraint constraint_makeEnsureLteMaxRead(exprNode index, exprNode buffer);

constraint constraint_makeMaxSetSideEffectPostDecrement (exprNode e, fileloc sequencePoint);
bool constraint_search (constraint c, constraintExpr old);

constraint makeConstraintParse3 (constraintExpr l, lltok relOp, constraintExpr r);

constraint constraint_addGeneratingExpr (/*@returned@*/ constraint c, exprNode e);

bool constraint_hasMaxSet(constraint c);

/*from constraintGenreation.c*/
bool exprNode_exprTraverse (exprNode e, bool definatelv, bool definaterv,  fileloc sequencePoint);

constraintList exprNode_traversRequiresConstraints (exprNode e);
constraintList exprNode_traversEnsuresConstraints (exprNode e);

/*@notnull@*/ constraint constraint_makeNew (void) /*@*/;


/*@=czechfcns*/
//#warning take this out

#include "constraintResolve.h"
#include "constraintOutput.h"

#else

#error Multiple include

#endif

