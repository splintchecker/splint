#ifndef __constraint_h__

#define __constraint_h__

typedef enum
{
  LT, LTE, GT, GTE, EQ, NONNEGATIVE, POSITIVE
}
arithType;

struct s_constraint {
  constraint     orig;
  constraint     or;
  bool           fcnPre;
  constraintExpr lexpr;
  arithType       ar;
  constraintExpr  expr;
  bool post;
  /*@observer@*/ /*@exposed@*/ /*@dependent@*/ exprNode generatingExpr;
} ;

/*@constant null constraint constraint_undefined; @*/

# define constraint_undefined ((constraint)NULL)

extern /*@falsenull@*/ bool constraint_isDefined (constraint p_e) /*@*/ ;
extern /*@unused@*/ /*@truenull@*/ bool constraint_isUndefined (constraint p_e) /*@*/ ;
extern /*@truenull@*/ /*@unused@*/ bool constraint_isError (constraint p_e) /*@*/ ;

# define constraint_isDefined(e)        ((e) != constraint_undefined)
# define constraint_isUndefined(e)      ((e) == constraint_undefined)
# define constraint_isError(e)          ((e) == constraint_undefined)

extern void constraint_free (/*@only@*/  constraint p_c);

//constraint makeConstraintParse (sRef x, lltok relOp, exprNode cconstant);

/*@i22*/
/*@-czechfcns*/

extern constraint constraint_makeReadSafeExprNode ( /*@dependent@*/ /*@oberserver@*/ exprNode p_po, /*@dependent@*/ /*@oberserver@*/ exprNode p_ind);

extern /*@only@*/ constraint constraint_makeWriteSafeExprNode (/*@dependent@*/ /*@oberserver@*/ exprNode p_po, /*@dependent@*/ /*@oberserver@*/ exprNode p_ind);

extern /*@only@*/ constraint constraint_makeReadSafeInt (/*@dependent@*/ /*@oberserver@*/ exprNode p_t1, int p_index);

extern /*@only@*/ constraint constraint_makeEnsureMaxReadAtLeast (/*@dependent@*/ /*@oberserver@*/ exprNode p_t1, /*@dependent@*/ /*@oberserver@*/ exprNode p_t2, fileloc p_sequencePoint);

extern void constraint_overWrite (constraint p_c1, /*@observer@*/ constraint p_c2) /*@modifies p_c1 @*/;

extern /*@only@*/ constraint constraint_copy (/*@temp@*/ /*@observer@*/ constraint p_c);

extern bool fileloc_closer (/*@observer@*/ fileloc  p_loc1, /*@observer@*/ fileloc  p_loc2, /*@observer@*/ fileloc  p_loc3) /*@*/;

extern /*@only@*/ cstring arithType_print (arithType p_ar) /*@*/;

extern /*@only@*/ fileloc constraint_getFileloc (constraint p_c);
extern /*@only@*/ cstring constraint_print (/*@temp@*/ /*@observer@*/ constraint p_c) /*@*/;

extern /*@only@*/ constraint constraint_makeWriteSafeInt (/*@dependent@*/ /*@oberserver@*/ exprNode p_po, int p_ind);

extern exprNode exprNode_copyConstraints (/*@returned@*/ exprNode p_dst, exprNode p_src) /*@modifies p_dst @*/;

extern /*@only@*/ constraint constraint_makeEnsureEqual (/*@dependent@*/ /*@oberserver@*/ exprNode p_e1, /*@dependent@*/ /*@oberserver@*/ exprNode p_e2, fileloc p_sequencePoint);

extern /*@only@*/ constraint constraint_makeMaxSetSideEffectPostIncrement (/*@dependent@*/ /*@oberserver@*/ exprNode p_e, fileloc p_sequencePoint);

extern constraint constraint_preserveOrig (/*@returned@*/ constraint p_c) /*@modifies p_c @*/;
extern /*@only@*/ constraint constraint_doSRefFixBaseParam (/*@returned@*/ /*@only@*/ constraint p_precondition,
							    exprNodeList p_arglist);
extern /*@only@*/ cstring  constraint_printDetailed (constraint p_c);

extern /*@only@*/ constraint constraint_makeEnsureLessThan (/*@dependent@*/ /*@oberserver@*/ exprNode p_e1, /*@dependent@*/ /*@oberserver@*/ exprNode p_e2, fileloc p_sequencePoint);
extern /*@only@*/ constraint constraint_makeEnsureLessThanEqual (/*@dependent@*/ /*@oberserver@*/ exprNode p_e1, /*@dependent@*/ /*@observer@*/ exprNode p_e2, fileloc p_sequencePoint);

extern /*@only@*/ constraint constraint_makeEnsureGreaterThan (/*@dependent@*/ /*@oberserver@*/ exprNode p_e1, /*@dependent@*/ /*@oberserver@*/ exprNode p_e2, fileloc p_sequencePoint);
extern /*@only@*/ constraint constraint_makeEnsureGreaterThanEqual (/*@dependent@*/ /*@oberserver@*/ exprNode p_e1, /*@dependent@*/ /*@oberserver@*/ exprNode p_e2, fileloc p_sequencePoint);

/*drl add 11/28/2000 */
extern /*@only@*/ constraint constraint_makeSRefWriteSafeInt (sRef p_s, int p_ind);
extern /*@unused@*/ /*@only@*/ constraint constraint_makeSRefReadSafeInt (sRef p_s, int p_ind);
/*drl add 11/26/2000 */
extern void constraint_printError (/*@observer@*/ /*@temp@*/ constraint p_c, /*@temp@*/ /*@observer@*/ fileloc p_loc);

extern /*@only@*/ constraint constraint_doSRefFixConstraintParam (constraint p_precondition,
	/*@temp@*/ /*@observer@*/ exprNodeList p_arglist);

extern /*@only@*/ constraint constraint_makeSRefSetBufferSize (sRef p_s, long int p_size);

extern /*@only@*/ constraint constraint_doFixResult (constraint p_postcondition, /*@dependent@*/ /*@observer@*/ exprNode p_fcnCall);

extern /*@only@*/ constraint constraint_makeEnsureLteMaxRead(/*@dependent@*/ /*@oberserver@*/ exprNode p_index, /*@dependent@*/ /*@oberserver@*/ exprNode p_buffer);

extern /*@only@*/ constraint constraint_makeMaxSetSideEffectPostDecrement (/*@dependent@*/ /*@oberserver@*/ exprNode p_e, fileloc p_sequencePoint);

extern bool constraint_search (constraint p_c, constraintExpr p_old);

extern /*@only@*/ constraint makeConstraintParse3 (constraintExpr p_l, lltok p_relOp, constraintExpr p_r);

extern constraint constraint_addGeneratingExpr (/*@returned@*/ constraint p_c, /*@dependent@*/ /*@oberserver@*/ exprNode p_e);

extern bool constraint_hasMaxSet(constraint p_c);

/*from constraintGenreation.c*/
extern void exprNode_exprTraverse (/*@dependent@*/  exprNode p_e, bool p_definatelv, bool p_definaterv, /*@temp@*/ /*@observer@*/ fileloc p_sequencePoint);

extern /*@only@*/ constraintList exprNode_traversRequiresConstraints (/*@dependent@*/ exprNode p_e);
extern /*@only@*/ constraintList exprNode_traversEnsuresConstraints (/*@dependent@*/ exprNode p_e);

extern constraint constraint_togglePost (/*@returned@*/ constraint p_c);
extern bool constraint_same (constraint p_c1, constraint p_c2) ;

/*@only@*/ cstring  constraint_printOr (constraint p_c) /*@*/;
extern void constraint_printErrorPostCondition (constraint p_c, fileloc p_loc) ;
extern constraint constraint_setFcnPre (/*@returned@*/ constraint p_c) ;
extern constraint constraint_origAddGeneratingExpr (/*@returned@*/ constraint p_c, /*@dependent@*/ /*@oberserver@*/ exprNode p_e) ;

extern bool /*@alt void@*/ exprNode_generateConstraints (/*@dependent@*/ exprNode p_e) ;
constraint constraint_togglePostOrig (/*@returned@*/ constraint p_c);

bool constraint_hasOrig( /*@observer@*/ /*@temp@*/ constraint p_c);

constraint constraint_makeAddAssign (/*@dependent@*/ /*@observer@*/ exprNode p_e, /*@dependent@*/ /*@observer@*/ exprNode p_f, fileloc p_sequencePoint);

constraint constraint_makeSubtractAssign (/*@dependent@*/ /*@observer@*/ exprNode p_e, /*@dependent@*/ /*@observer@*/ exprNode p_f, fileloc p_sequencePoint);

/*@only@*/ constraint constraint_undump (FILE * p_f);

void constraint_dump (/*@observer@*/ constraint p_c,  FILE * p_f);

extern void exprNode_forLoopHeuristics( /*@dependent@*/ exprNode p_e, /*@dependent@*/ exprNode p_forPred, /*@dependent@*/ exprNode p_forBody);

/*@=czechfcns*/
////drl possible problem : warning take this out

#include "constraintResolve.h"
#include "constraintOutput.h"

#else

#error Multiple include

#endif

