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
  /*@kept@*/ exprNode generatingExpr;
} ;

/*@constant null constraint constraint_undefined; @*/

# define constraint_undefined ((constraint)NULL)

extern /*@falsenull@*/ bool constraint_isDefined (constraint p_e) /*@*/ ;
extern /*@unused@*/ /*@truenull@*/ bool constraint_isUndefined (constraint p_e) /*@*/ ;
extern /*@truenull@*/ /*@unused@*/ bool constraint_isError (constraint p_e) /*@*/ ;

# define constraint_isDefined(e)        ((e) != constraint_undefined)
# define constraint_isUndefined(e)      ((e) == constraint_undefined)
# define constraint_isError(e)          ((e) == constraint_undefined)

void constraint_free (/*@only@*/ /*@notnull@*/ constraint c);

constraint makeConstraintParse (sRef x, lltok relOp, exprNode cconstant);

/*@i22*/
/*@-czechfcns*/

///*@special@*/ constraintExpr makeConstraintExpr (/*@only@*/ /*@notnull@*/ constraintTerm term)
// /*@post:isnull result->expr@*/
//     /*@post:notnull result->t1@*/
//     /*@defines result->expr, result->t1, result->c1@, result->op*/;
     
//constraintExpr makeConstraintExprIntlit (int p_i);

/*@relnull@*/ constraint constraint_makeReadSafeExprNode ( exprNode p_po, exprNode p_ind);

/*@only@*/ constraint constraint_makeWriteSafeExprNode (exprNode p_po, exprNode p_ind);

/*@only@*/ constraint constraint_makeReadSafeInt (exprNode p_t1, int p_index);

/*@only@*/ constraint constraint_makeEnsureMaxReadAtLeast (exprNode p_t1, exprNode p_t2, fileloc p_sequencePoint);

void constraint_overWrite (constraint c1, /*@observer@*/ constraint c2) /*@modifies c1 @*/;

/*@only@*/ constraint constraint_copy (/*@observer@*/ constraint c);

//constraintExpr makePostOpInc (exprNode t1);


bool fileloc_closer (/*@observer@*/ fileloc  loc1,/*@observer@*/ fileloc  loc2,/*@observer@*/ fileloc  loc3) /*@*/;


/*@only@*/ cstring arithType_print (arithType ar) /*@*/;


/*@only@*/fileloc constraint_getFileloc (constraint c);
/*@only@*/ cstring constraint_print (constraint c) /*@*/;

/*@only@*/constraint constraint_makeWriteSafeInt (exprNode po, int ind);

exprNode exprNode_copyConstraints (/*@returned@*/ exprNode dst, exprNode src) /*@modifies dst @*/;

/*@only@*/ constraint constraint_makeEnsureEqual (exprNode e1, exprNode e2, fileloc sequencePoint);

/*@only@*/ constraint constraint_makeMaxSetSideEffectPostIncrement (exprNode e, fileloc sequencePoint);

constraint constraint_preserveOrig (/*@returned@*/ constraint c) /*@modifies c @*/;
/*@only@*/ constraint constraint_doSRefFixBaseParam (/*@returned@*/ /*@only@*/ constraint precondition,
						     exprNodeList arglist);

/*@only@*/ cstring  constraint_printDetailed (constraint c);

/*@only@*/ constraint constraint_makeEnsureLessThan (exprNode e1, exprNode e2, fileloc sequencePoint);

/*@only@*/ constraint constraint_makeEnsureLessThanEqual (exprNode e1, exprNode e2, fileloc sequencePoint);

/*@only@*/ constraint constraint_makeEnsureGreaterThan (exprNode e1, exprNode e2, fileloc sequencePoint);
/*@only@*/ constraint constraint_makeEnsureGreaterThanEqual (exprNode e1, exprNode e2, fileloc sequencePoint);

/*drl add 11/28/2000 */
/*@only@*/ constraint constraint_makeSRefWriteSafeInt (sRef s, int ind);
/*@unused@*/ /*@only@*/ constraint constraint_makeSRefReadSafeInt (sRef s, int ind);
/*drl add 11/26/2000 */
void constraint_printError (/*@observer@*/ constraint c, /*@observer@*/ fileloc loc);

/*@only@*/ constraint constraint_doSRefFixConstraintParam (constraint precondition,
						exprNodeList arglist);

/*@only@*/ constraint constraint_makeSRefSetBufferSize (sRef s, long int size);

/*@only@*/ constraint constraint_doFixResult (constraint postcondition, exprNode fcnCall);

/*@only@*/ constraint constraint_makeEnsureLteMaxRead(exprNode index, exprNode buffer);

/*@only@*/ constraint constraint_makeMaxSetSideEffectPostDecrement (exprNode e, fileloc sequencePoint);

bool constraint_search (constraint c, constraintExpr old);

/*@only@*/ constraint makeConstraintParse3 (constraintExpr l, lltok relOp, constraintExpr r);

constraint constraint_addGeneratingExpr (/*@returned@*/ constraint c, exprNode e);

bool constraint_hasMaxSet(constraint c);

/*from constraintGenreation.c*/
void exprNode_exprTraverse (exprNode e, bool definatelv, bool definaterv,  fileloc sequencePoint);

/*@only@*/ constraintList exprNode_traversRequiresConstraints (exprNode e);
/*@only@*/ constraintList exprNode_traversEnsuresConstraints (exprNode e);

constraint constraint_togglePost (/*@returned@*/ constraint c);

/*@only@*/ cstring  constraint_printOr (constraint c) /*@*/;

/*@=czechfcns*/
//#warning take this out

#include "constraintResolve.h"
#include "constraintOutput.h"

#else

#error Multiple include

#endif

