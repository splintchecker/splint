/*
** aliasChecks.h
*/

extern alkind alkind_resolve (alkind p_a1, alkind p_a2) /*@*/ ;
extern bool checkGlobalDestroyed (sRef p_fref, fileloc p_loc) 
   /*@modifies g_msgstream@*/ ;
extern void checkLocalDestroyed (sRef p_fref, fileloc p_loc) 
   /*@modifies g_msgstream@*/ ;

extern void checkAssignTransfer (exprNode p_lhs, exprNode p_rhs);
extern void checkPassTransfer (exprNode p_fexp, uentry p_arg, bool p_isSpec,
			       /*@dependent@*/ exprNode p_fcn, int p_argno, int p_totargs);
extern void checkReturnTransfer (exprNode p_fexp, uentry p_rval);
extern void checkGlobReturn (uentry p_glob);
extern void checkParamReturn (uentry p_actual);
extern void checkLoseRef (uentry p_actual);
extern bool canLoseReference (sRef p_sr, fileloc p_loc);
extern void checkInitTransfer (exprNode p_lhs, exprNode p_rhs);
extern void checkStructDestroyed (sRef p_fref, fileloc p_loc);

/* transfer types: */

typedef enum
{
  TT_FCNRETURN,
  TT_DOASSIGN,
  TT_FIELDASSIGN,
  TT_FCNPASS,
  TT_GLOBPASS,
  TT_GLOBRETURN,
  TT_PARAMRETURN,
  TT_LEAVETRANS,
  TT_GLOBINIT
} transferKind;
