/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
*/
# ifndef UENTRY_H
# define UENTRY_H
# define CENTRY_H

/*
** universal symbol table entry
** (combines old llentry, centry, and ttentry)
*/

/*
** vkind --- need to fix value for consistency in dump files
*/

typedef struct _ucinfo
{
  /*@only@*/ multiVal val;
	     typeIdSet access;
} *ucinfo;

typedef enum 
{ 
  VKSPEC = 0, VKNORMAL, 
  VKPARAM, VKYIELDPARAM, VKREFYIELDPARAM,
  VKRETPARAM, VKREFPARAM, 
  VKSEFPARAM, VKREFSEFPARAM,
  VKSEFRETPARAM, VKREFSEFRETPARAM,
  VKEXPMACRO
} vkind;

/*@constant vkind VKFIRST;@*/
# define VKFIRST VKSPEC

/*@constant vkind VKLAST;@*/
# define VKLAST  VKEXPMACRO

typedef enum
{
  CH_UNKNOWN,
  CH_UNCHECKED,
  CH_CHECKED,
  CH_CHECKMOD,
  CH_CHECKEDSTRICT
} chkind;

typedef struct _uvinfo
{
  vkind   kind;      /* kind (parameter, specified) */
  chkind  checked;   /* how is it checked */
  sstate  defstate;
  nstate  nullstate;
} *uvinfo ;

typedef struct _udinfo
{
  ynm   abs;
  ynm   mut;
  ctype type;
} *udinfo ;

/* information for specified functions */

typedef enum
{
  SPC_NONE,
  SPC_PRINTFLIKE,
  SPC_SCANFLIKE,
  SPC_MESSAGELIKE,
  SPC_LAST
} specCode;

typedef struct _ufinfo
{
  qual nullPred;
  specCode specialCode;
  exitkind exitCode;
  typeIdSet access;     /* access types */

  /*@owned@*/ globSet globs;      /* globals list */
  /*@owned@*/ sRefSet mods;       /* modifies */

  specialClauses specclauses;

  /*@dependent@*/ uentryList defparams; 
  bool hasGlobs BOOLBITS;
  bool hasMods  BOOLBITS;
} *ufinfo ;

typedef struct _uiinfo
{
                  typeIdSet  access;
  /*@owned@*/     globSet     globs;      /* globals list */
  /*@owned@*/     sRefSet     mods;       /* modifies */
} *uiinfo ;

typedef struct _ueinfo
{
  typeIdSet   access;
} *ueinfo ;

typedef union _uinfo
{
  ucinfo uconst;
  uvinfo var;
  udinfo datatype;
  ufinfo fcn;
  uiinfo iter;
  ueinfo enditer;
} *uinfo ;

struct _uentry 
{
  ekind ukind;
  cstring uname;
  ctype utype;

  fileloc whereSpecified;
  fileloc whereDefined;
  fileloc whereDeclared;

  /* meaning of sref is different for:
  **        variables  current state
  **        functions  state of return value
  **        types      state of datatype
  */
  /*@exposed@*/ /*@null@*/ sRef sref;  

  /* Location list is complete only if showalluses is set. */
  filelocList uses; 

  bool                  used BOOLBITS;       
  bool                  lset BOOLBITS;      /* set in local table */
  bool                  isPrivate BOOLBITS; /* specification only */
  bool                  hasNameError BOOLBITS;

  storageClassCode      storageclass;
  /*@relnull@*/ uinfo   info; /* null for KELIPSMARKER, KINVALID */
} ;

/*
** There is no uentry_isDefined to avoid confusion with
** uentry_isCodeDefined (which was previously called 
** uentry_isDefined.
*/

extern /*@truenull@*/ bool uentry_isUndefined (/*@special@*/ uentry p_e) 
   /*@*/ ;
extern /*@truenull@*/ bool uentry_isInvalid (/*@special@*/ uentry p_e) 
   /*@*/ ;
extern /*@falsenull@*/ bool uentry_isValid (/*@special@*/ uentry p_e) 
   /*@*/ ;

/*@constant null uentry uentry_undefined; @*/
# define uentry_undefined ((uentry) NULL)

# define uentry_isUndefined(e) ((e) == uentry_undefined)
# define uentry_isValid(e)     ((e) != uentry_undefined)
# define uentry_isInvalid(e)   ((e) == uentry_undefined)

extern int uentry_compareStrict (uentry p_v1, uentry p_v2);

/*@constant int PARAMUNKNOWN; @*/
# define PARAMUNKNOWN -1

extern bool uentry_isMaybeAbstract (uentry p_e) /*@*/ ;
extern void uentry_setAbstract (uentry p_e) /*@modifies p_e@*/ ;
extern void uentry_setConcrete (uentry p_e) /*@modifies p_e@*/ ;
extern void uentry_setHasNameError (uentry p_ue) /*@modifies p_ue@*/ ;

extern /*@falsenull@*/ bool uentry_isLset (/*@sef@*/ uentry p_e);
# define uentry_isLset(e) \
  (uentry_isValid(e) && (e)->lset)

extern /*@falsenull@*/ bool uentry_isUsed (/*@sef@*/ uentry p_e);
# define uentry_isUsed(e)         (uentry_isValid(e) && (e)->used)

extern /*@unused@*/ /*@falsenull@*/ bool 
  uentry_isAbstractType (uentry p_e) /*@*/ ;
# define uentry_isAbstractType(e) (uentry_isAbstractDatatype(e))

extern /*@falsenull@*/ bool uentry_isConstant (/*@sef@*/ uentry p_e) /*@*/ ;
# define uentry_isConstant(e) \
  (uentry_isValid(e) && ekind_isConst ((e)->ukind))

extern /*@falsenull@*/ bool uentry_isEitherConstant (/*@sef@*/ uentry p_e) /*@*/ ;
# define uentry_isEitherConstant(e) \
  (uentry_isValid(e) && (ekind_isConst ((e)->ukind) || ekind_isEnumConst ((e)->ukind)))

extern /*@falsenull@*/ bool uentry_isEnumConstant (/*@sef@*/ uentry p_e) /*@*/ ;
# define uentry_isEnumConstant(e) \
  (uentry_isValid(e) && ekind_isEnumConst ((e)->ukind))

extern /*@falsenull@*/ bool uentry_isExternal (/*@sef@*/ uentry p_e) /*@*/ ;
# define uentry_isExternal(c) \
  (uentry_isValid(c) && fileloc_isExternal (uentry_whereDefined (c)))

extern /*@falsenull@*/ bool uentry_isExtern (/*@sef@*/ uentry p_e) /*@*/ ;
# define uentry_isExtern(c) \
  (uentry_isValid(c) && (c)->storageclass == SCEXTERN)

extern bool uentry_isForward (uentry p_e) /*@*/ ;

extern /*@falsenull@*/ bool uentry_isFunction (/*@sef@*/ uentry p_e) /*@*/ ;
# define uentry_isFunction(e) \
  (uentry_isValid(e) && ekind_isFunction ((e)->ukind))

extern /*@falsenull@*/ bool uentry_isPriv (/*@sef@*/ uentry p_e) /*@*/ ;
# define uentry_isPriv(e) \
  (uentry_isValid(e) && (e)->isPrivate)

extern /*@falsenull@*/ bool uentry_isFileStatic (uentry p_ue) /*@*/ ;
extern /*@falsenull@*/ bool uentry_isExported (uentry p_ue) /*@*/ ;

extern /*@falsenull@*/ bool uentry_isStatic (/*@sef@*/ uentry p_e) /*@*/ ;
# define uentry_isStatic(c) \
  (uentry_isValid(c) && (c)->storageclass == SCSTATIC)

extern void uentry_setLset (/*@sef@*/ uentry p_e);
# define uentry_setLset(e) \
  (uentry_isValid(e) ? (e)->lset = TRUE : TRUE)

extern bool uentry_isSpecialFunction (uentry p_ue) /*@*/ ;
extern bool uentry_isMessageLike (uentry p_ue) /*@*/ ;
extern bool uentry_isScanfLike (uentry p_ue) /*@*/ ;
extern bool uentry_isPrintfLike (uentry p_ue) /*@*/ ;

extern void uentry_setMessageLike (uentry p_ue) /*@modifies p_ue@*/ ;
extern void uentry_setScanfLike (uentry p_ue) /*@modifies p_ue@*/ ;
extern void uentry_setPrintfLike (uentry p_ue) /*@modifies p_ue@*/ ;

extern void uentry_checkName (uentry p_ue) /*@modifies g_msgstream, p_ue@*/ ;

extern bool uentry_sameObject (uentry p_e1, uentry p_e2);
# define uentry_sameObject(e1,e2) ((e1) == (e2))

extern void uentry_addAccessType (uentry p_ue, typeId p_tid) /*@modifies p_ue@*/ ;

extern void uentry_showWhereAny (uentry p_spec)
     /*@modifies g_msgstream@*/ ;

extern void uentry_checkParams (uentry p_ue);
extern void uentry_mergeUses (uentry p_res, uentry p_other);
extern void uentry_setExtern (uentry p_c);
extern void uentry_setUsed (uentry p_e, fileloc p_loc);
extern void uentry_setDefState (uentry p_ue, sstate p_defstate);

extern void uentry_setNotUsed (/*@sef@*/ uentry p_e);
# define uentry_setNotUsed(e) \
  (uentry_isValid (e) ? (e)->used = FALSE : FALSE)

extern bool uentry_wasUsed (/*@sef@*/ uentry p_e);
# define uentry_wasUsed(e) \
  (uentry_isValid (e) ? (e)->used : TRUE)

extern void uentry_mergeConstantValue (uentry p_ue, /*@only@*/ multiVal p_m);

extern /*@observer@*/ fileloc uentry_whereEarliest (uentry p_e) /*@*/ ;
extern /*@observer@*/ cstring uentry_rawName (uentry p_e) /*@*/ ;
extern /*@observer@*/ fileloc uentry_whereDeclared (uentry p_e) /*@*/ ;
extern bool uentry_equiv (uentry p_p1, uentry p_p2) /*@*/ ;
extern /*@falsenull@*/ bool uentry_hasName (uentry p_e) /*@*/ ;
extern /*@falsenull@*/ bool uentry_hasRealName (uentry p_e) /*@*/ ;
extern /*@falsenull@*/ bool uentry_isAbstractDatatype (uentry p_e) /*@*/ ;
extern /*@falsenull@*/ bool uentry_isAnyTag (/*@special@*/ uentry p_ue)
   /*@uses p_ue->ukind@*/
   /*@*/ ;
extern /*@falsenull@*/ bool uentry_isDatatype (uentry p_e) /*@*/ ;

extern /*@falsenull@*/ bool uentry_isCodeDefined (uentry p_e) /*@*/ ;

extern /*@falsenull@*/ bool uentry_isDeclared (/*@special@*/ uentry p_e) 
   /*@uses p_e->whereDeclared@*/ /*@*/ ;

extern /*@observer@*/ cstring uentry_ekindName (uentry p_ue) /*@*/ ;
extern void uentry_showWhereDefined (uentry p_spec);
extern /*@falsenull@*/ bool uentry_isEndIter (uentry p_e) /*@*/ ;
extern /*@falsenull@*/ bool uentry_isEnumTag (/*@special@*/ uentry p_ue)
   /*@uses p_ue->ukind@*/ /*@*/ ;
extern /*@falsenull@*/ bool uentry_isFakeTag (uentry p_e) /*@*/ ;
extern /*@falsenull@*/ bool uentry_isIter (uentry p_e) /*@*/ ;
extern /*@falsenull@*/ bool uentry_isMutableDatatype (uentry p_e) /*@*/ ;
extern /*@falsenull@*/ bool uentry_isParam (uentry p_u) /*@*/ ;
extern /*@falsenull@*/ bool uentry_isExpandedMacro (uentry p_u) /*@*/ ;
extern /*@falsenull@*/ bool uentry_isSefParam (uentry p_u) /*@*/ ;
extern /*@falsenull@*/ bool uentry_isAnyParam (/*@special@*/ uentry p_u) 
   /*@uses p_u->ukind, p_u->info@*/ 
   /*@*/ ;

extern /*@falsenull@*/ bool uentry_isRealFunction (uentry p_e) /*@*/ ;
extern /*@falsenull@*/ bool uentry_isSpecified (uentry p_e) /*@*/ ;

extern /*@falsenull@*/ bool uentry_isStructTag (/*@special@*/ uentry p_ue) 
   /*@uses p_ue->ukind@*/ /*@*/ ;
extern /*@falsenull@*/ bool uentry_isUnionTag (/*@special@*/ uentry p_ue)
   /*@uses p_ue->ukind@*/ /*@*/ ;

extern /*@falsenull@*/ bool uentry_isVar (/*@special@*/ uentry p_e) 
   /*@uses p_e->ukind@*/
   /*@*/ ;

extern /*@falsenull@*/ bool uentry_isVariable (/*@special@*/ uentry p_e) 
   /*@uses p_e->ukind@*/
   /*@*/ ;

extern cstring uentry_dump (uentry p_v) ; 
extern cstring uentry_dumpParam (uentry p_v);
extern cstring uentry_getName (/*@special@*/ uentry p_e) 
   /*@uses p_e->ukind, p_e->info, p_e->uname@*/
   /*@*/ ;

extern cstring uentry_unparse (uentry p_v) /*@*/ ;
extern cstring uentry_unparseAbbrev (uentry p_v) /*@*/ ;
extern cstring uentry_unparseFull (uentry p_v) /*@*/ ;
extern void uentry_setMutable (uentry p_e) /*@modifies p_e@*/ ;
extern ctype uentry_getAbstractType (uentry p_e) /*@*/ ;
extern ctype uentry_getRealType (uentry p_e) /*@globals internalState@*/ ;
extern ctype uentry_getType (uentry p_e) /*@*/ ;
extern ekind uentry_getKind (uentry p_e) /*@*/ ;
extern /*@observer@*/ fileloc uentry_whereDefined (uentry p_e) /*@*/ ;
extern /*@observer@*/ fileloc uentry_whereSpecified (uentry p_e) /*@*/ ;
extern int uentry_compare (uentry p_u1, uentry p_u2);
extern /*@exposed@*/ sRef uentry_getSref (/*@temp@*/ uentry p_e) /*@*/ ;
extern /*@observer@*/ sRefSet uentry_getMods (uentry p_l) /*@*/ ;
extern typeIdSet uentry_accessType (uentry p_e) /*@*/ ;
extern /*@observer@*/ fileloc uentry_whereEither (uentry p_e) /*@*/ ;
extern /*@notnull@*/ uentry uentry_makeExpandedMacro (cstring p_s, 
						      /*@temp@*/ fileloc p_f)
  /*@*/ ;

extern void uentry_checkMatchParam (uentry p_u1, uentry p_u2, int p_paramno, exprNode p_e) /*@modifies g_msgstream@*/ ;

extern /*@observer@*/ specialClauses uentry_getSpecialClauses (uentry p_ue) /*@*/ ;

extern void uentry_showWhereLastExtra (uentry p_spec, /*@only@*/ cstring p_extra) 
   /*@modifies g_msgstream@*/ ;

# ifndef NOLCL
extern void uentry_setRefCounted (uentry p_e);

extern /*@notnull@*/ /*@only@*/ uentry uentry_makeUnnamedVariable (ctype p_t);

extern /*@notnull@*/ uentry 
  uentry_makeUnspecFunction (cstring p_n, ctype p_t, typeIdSet p_access, 
			     /*@keep@*/ fileloc p_f);

extern /*@notnull@*/ uentry
  uentry_makePrivFunction2 (cstring p_n, ctype p_t, 
			    typeIdSet p_access, 
			    /*@only@*/ globSet p_globs, 
			    /*@only@*/ sRefSet p_mods, /*@keep@*/ fileloc p_f);

extern /*@notnull@*/ uentry
  uentry_makeSpecEnumConstant (cstring p_n, ctype p_t, /*@keep@*/ fileloc p_loc) /*@*/ ;

extern /*@notnull@*/ uentry 
  uentry_makeEnumTag (cstring p_n, ctype p_t, /*@only@*/ fileloc p_loc) /*@*/ ;

extern /*@notnull@*/ uentry 
  uentry_makeTypeListFunction (cstring p_n, typeIdSet p_access, /*@only@*/ fileloc p_f) 
  /*@*/ ;

extern /*@notnull@*/ uentry 
  uentry_makeSpecFunction (cstring p_n, ctype p_t,
			   typeIdSet p_access, /*@only@*/ globSet p_globs, 
			   /*@only@*/ sRefSet p_mods, /*@keep@*/ fileloc p_f);
# endif

extern /*@notnull@*/ uentry
  uentry_makeEnumConstant (cstring p_n, ctype p_t) /*@*/ ;

extern /*@notnull@*/ uentry
  uentry_makeEnumInitializedConstant (cstring p_n, ctype p_t, exprNode p_expr) /*@*/ ;

extern /*@notnull@*/ /*@only@*/ uentry 
  uentry_makeConstant (/*@temp@*/ cstring p_n, ctype p_t, /*@keep@*/ fileloc p_f) 
  /*@*/ ;
extern /*@notnull@*/ /*@only@*/ uentry 
  uentry_makeConstantAux (/*@temp@*/ cstring p_n, ctype p_t,
			  /*@keep@*/ fileloc p_f, bool p_priv,
			  /*@only@*/ multiVal p_m) /*@*/ ;
extern /*@notnull@*/ /*@only@*/ uentry 
  uentry_makeDatatype (/*@temp@*/ cstring p_n, ctype p_t, ynm p_mut, ynm p_abs, 
		       /*@only@*/ fileloc p_f) /*@*/ ;
extern /*@notnull@*/ /*@only@*/ uentry 
  uentry_makeDatatypeAux (/*@temp@*/ cstring p_n, ctype p_t, ynm p_mut, 
			  ynm p_abs, /*@keep@*/ fileloc p_f, bool p_priv) /*@*/ ;
extern /*@notnull@*/ uentry uentry_makeElipsisMarker (void) /*@*/ ;

extern void uentry_makeVarFunction (/*@temp@*/ uentry p_ue) /*@modifies p_ue@*/ ;

extern bool uentry_isElipsisMarker (/*@sef@*/ uentry p_u) /*@*/ ;
# define uentry_isElipsisMarker(u) \
  (uentry_isValid(u) && ekind_isElipsis ((u)->ukind))

extern /*@notnull@*/ uentry 
  uentry_makeEndIter (cstring p_n, /*@only@*/ fileloc p_f) /*@*/ ;
extern /*@notnull@*/ uentry 
  uentry_makeEnumTagLoc (cstring p_n, ctype p_t) /*@*/ ;
extern /*@notnull@*/ uentry 
  uentry_makeForwardFunction (cstring p_n, typeId p_access, /*@temp@*/ fileloc p_f) /*@*/ ;

extern /*@notnull@*/ uentry 
  uentry_makeFunction (cstring p_n, ctype p_t, 
		       typeId p_access, 
		       /*@only@*/ globSet p_globs, /*@only@*/ sRefSet p_mods, 
		       /*@only@*/ fileloc p_f);

extern /*@notnull@*/ uentry
  uentry_makeIter (cstring p_n, ctype p_ct, /*@only@*/ fileloc p_f) /*@*/ ;
extern /*@notnull@*/ uentry 
  uentry_makeParam (idDecl p_t, int p_i) /*@*/ ;

extern /*@notnull@*/ uentry 
  uentry_makeStructTag (cstring p_n, ctype p_t, /*@only@*/ fileloc p_loc);
extern /*@notnull@*/ uentry 
  uentry_makeStructTagLoc (cstring p_n, ctype p_t);
extern /*@notnull@*/ uentry 
  uentry_makeUnionTag (cstring p_n, ctype p_t, /*@only@*/ fileloc p_loc);
extern /*@notnull@*/ uentry 
  uentry_makeUnionTagLoc (cstring p_n, ctype p_t);
extern /*@notnull@*/ uentry 
  uentry_makeVariable (cstring p_n, ctype p_t, /*@keep@*/ fileloc p_f, bool p_isPriv);
extern /*@notnull@*/ /*@only@*/ uentry 
  uentry_makeVariableLoc (cstring p_n, ctype p_t);

# ifndef NOLCL
extern /*@notnull@*/ /*@only@*/ 
  uentry uentry_makeVariableParam (cstring p_n, ctype p_t);
# endif

extern /*@notnull@*/ /*@only@*/ 
  uentry uentry_makeVariableSrefParam (cstring p_n, ctype p_t, 
				       sRef p_s);
extern /*@notnull@*/ /*@only@*/ 
  uentry uentry_makeIdFunction (idDecl p_id);
extern /*@notnull@*/ /*@only@*/ 
  uentry uentry_makeIdDatatype (idDecl p_id);
extern /*@notnull@*/ /*@only@*/ 
  uentry uentry_makeBoolDatatype (ynm p_abs);
extern void uentry_mergeDefinition (uentry p_old, /*@only@*/ uentry p_unew);
extern void uentry_mergeEntries (uentry p_spec, /*@only@*/ uentry p_def);
extern uentry uentry_nameCopy (/*@only@*/ cstring p_name, uentry p_e);
extern uentry uentry_undump (ekind p_kind, fileloc p_loc, char **p_s);
extern /*@observer@*/ uentryList uentry_getParams (uentry p_l) /*@*/ ;
extern void uentry_resetParams (uentry p_ue, /*@only@*/ uentryList p_pn)
               /*@modifies p_ue@*/ ;
extern /*@observer@*/ globSet uentry_getGlobs (uentry p_l) /*@*/ ;
extern qual uentry_nullPred (uentry p_u);
extern void uentry_free (/*@only@*/ /*@only@*/ uentry p_e);
extern void uentry_setDatatype (uentry p_e, usymId p_uid);

extern void uentry_setDefined (/*@special@*/ uentry p_e, fileloc p_f)
   /*@uses p_e->whereDefined, p_e->ukind, p_e->uname, p_e->info@*/
   /*@modifies p_e@*/ ;

extern void uentry_checkDecl (void);
extern void uentry_clearDecl (void);
extern void uentry_setDeclared (uentry p_e, fileloc p_f);
extern void uentry_setDeclaredOnly (uentry p_e, /*@only@*/ fileloc p_f);
extern void uentry_setDeclaredForceOnly (uentry p_e, /*@only@*/ fileloc p_f);
extern void uentry_setFunctionDefined (uentry p_e, fileloc p_loc);
extern void uentry_setName (uentry p_e, /*@only@*/ cstring p_n);
extern void uentry_setParam (uentry p_e);
extern void uentry_setSref (uentry p_e, /*@exposed@*/ sRef p_s);
extern void uentry_setStatic (uentry p_c);

extern void uentry_setModifies (uentry p_ue, /*@owned@*/ sRefSet p_sr)
   /*@modifies p_ue, p_sr@*/; 

extern void uentry_setSpecialClauses (uentry p_ue, /*@only@*/ specialClauses p_clauses)
   /*@modifies p_ue@*/ ;

extern void uentry_setType (uentry p_e, ctype p_t);

extern /*@unused@*/ /*@observer@*/ cstring uentry_checkedName (uentry p_ue);
extern void uentry_showWhereLastPlain (uentry p_spec) /*@modifies g_msgstream@*/ ;

extern void 
  uentry_showWhereSpecifiedExtra (uentry p_spec, /*@only@*/ cstring p_s)
  /*@modifies g_msgstream@*/ ;

extern void uentry_showWhereSpecified (uentry p_spec) /*@modifies g_msgstream@*/ ; 
extern void uentry_showWhereLast (uentry p_spec) /*@modifies g_msgstream@*/ ;
extern void uentry_showWhereDeclared (uentry p_spec) /*@modifies g_msgstream@*/ ;

extern /*@notnull@*/ /*@only@*/ uentry uentry_makeIdVariable (idDecl p_t) /*@*/ ;
extern uentry uentry_copy (uentry p_e) /*@*/ ;
extern void uentry_freeComplete (/*@only@*/ uentry p_e) ;
extern void uentry_clearDefined (uentry p_e) /*@modifies p_e@*/;
extern /*@observer@*/ cstring uentry_specDeclName (uentry p_u) /*@*/ ;

extern void 
  uentry_mergeState (uentry p_res, uentry p_other, fileloc p_loc,
		     bool p_mustReturn, bool p_flip, bool p_opt, 
		     clause p_cl) /*@modifies p_res, p_other@*/ ;

extern void uentry_setState (uentry p_res, uentry p_other)
   /*@modifies p_res, p_other@*/ ;

extern void uentry_setRefParam (uentry p_e) /*@modifies p_e@*/ ;

extern void uentry_setDeclaredForce (uentry p_e, fileloc p_f) /*@modifies p_e@*/;
extern bool uentry_isNonLocal (uentry p_ue) /*@*/ ;
extern bool uentry_isGlobal (uentry p_ue) /*@*/; 
extern bool uentry_isRefParam (uentry p_u) /*@*/ ;
extern bool uentry_hasGlobs (uentry p_ue) /*@*/ ;
extern bool uentry_hasMods (uentry p_ue) /*@*/ ;

extern bool uentry_hasSpecialClauses (uentry p_ue) /*@*/ ;
extern exitkind uentry_getExitCode (uentry p_ue) /*@*/ ;

extern void uentry_checkYieldParam (uentry p_old, uentry p_unew);
extern bool uentry_isOnly (uentry p_ue) /*@*/ ;
extern bool uentry_isUnique (uentry p_ue) /*@*/ ;
extern void uentry_reflectQualifiers (uentry p_ue, qualList p_q) /*@modifies p_ue@*/;
extern bool uentry_isOut (uentry p_u) /*@*/ ;
extern bool uentry_isPartial (uentry p_u) /*@*/ ;
extern bool uentry_isStateSpecial (uentry p_u) /*@*/ ;
extern bool uentry_possiblyNull (uentry p_u) /*@*/ ;
extern ctype uentry_getForceRealType (uentry p_e) /*@globals internalState@*/ ;
extern alkind uentry_getAliasKind (uentry p_u) /*@*/ ;
extern exkind uentry_getExpKind (uentry p_u) /*@*/ ;
extern /*@observer@*/ multiVal uentry_getConstantValue (uentry p_e) /*@*/ ;
extern void uentry_fixupSref (uentry p_ue) /*@modifies p_ue@*/ ;
extern void uentry_setGlobals (uentry p_ue, /*@owned@*/ globSet p_globs) /*@modifies p_ue@*/ ;
extern bool uentry_isYield (uentry p_ue) /*@*/ ;
extern /*@notnull@*/ uentry uentry_makeIdConstant (idDecl p_t) /*@*/ ;
extern /*@observer@*/ cstring uentry_getRealName (uentry p_e) /*@*/ ;
extern int uentry_xcomparealpha (uentry *p_p1, uentry *p_p2) /*@*/ ;
extern int uentry_xcompareuses (uentry *p_p1, uentry *p_p2) /*@*/ ;
extern /*@observer@*/ cstring uentry_specOrDefName (uentry p_u) /*@*/ ;
extern void uentry_copyState (uentry p_res, uentry p_other);
extern bool uentry_sameKind (uentry p_u1, uentry p_u2);
extern /*@exposed@*/ sRef uentry_returnedRef (uentry p_u, exprNodeList p_args);
extern bool uentry_isReturned (uentry p_u);
extern bool uentry_isRefCountedDatatype (uentry p_e);
extern sstate uentry_getDefState (uentry p_u);
extern /*@unused@*/ void uentry_markFree (/*@owned@*/ uentry p_u);
extern /*@dependent@*/ sRef uentry_getOrigSref (uentry p_e);
extern void uentry_destroyMod (void) /*@modifies internalState@*/;
extern void uentry_showDefSpecInfo (uentry p_ce, fileloc p_fwhere);
extern void uentry_markOwned (/*@owned@*/ uentry p_u);

extern /*@observer@*/ fileloc uentry_whereLast (uentry p_e) /*@*/ ;
extern void uentry_setParamNo (uentry p_ue, int p_pno) /*@modifies p_ue@*/;

extern /*@observer@*/ filelocList uentry_getUses (/*@sef@*/ uentry p_e) /*@*/ ;
# define uentry_getUses(u) (uentry_isValid (u) ? (u)->uses : filelocList_undefined)

extern bool uentry_isCheckedUnknown (uentry p_ue) /*@*/ ;
extern bool uentry_isCheckedModify (uentry p_ue) /*@*/ ;
extern bool uentry_isUnchecked (uentry p_ue) /*@*/ ;
extern bool uentry_isChecked (uentry p_ue) /*@*/ ;
extern bool uentry_isCheckMod (uentry p_ue) /*@*/ ;
extern bool uentry_isCheckedStrict (uentry p_ue) /*@*/ ;
extern void uentry_setUnchecked (uentry p_ue) /*@modifies p_ue@*/ ;
extern void uentry_setChecked (uentry p_ue) /*@modifies p_ue@*/ ;
extern void uentry_setCheckMod (uentry p_ue) /*@modifies p_ue@*/ ;
extern void uentry_setCheckedStrict (uentry p_ue) /*@modifies p_ue@*/ ;

extern bool uentry_hasAccessType (uentry p_e);

extern /*@exposed@*/ uentry uentry_makeUnrecognized (cstring p_c, /*@keep@*/ fileloc p_loc);

# ifdef DOANNOTS
typedef enum { AN_UNKNOWN, AN_FCNRETURN, AN_FCNPARAM, AN_SUFIELD, AN_TDEFN, AN_GSVAR,
		 AN_CONST, AN_LAST
	       } ancontext;

extern void initAnnots ();
extern void printAnnots (void);
extern void uentry_tallyAnnots (uentry u, ancontext kind);
# endif /* DOANNOTS */

# else
# error "Multiple include"
# endif



