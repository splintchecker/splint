/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** clabstract.h
*/

# ifndef CLABSTRACT_H
# define CLABSTRACT_H

extern void setArgsUsed (void) /*@modifies internalState@*/ ;
extern void setSpecialFunction (qual p_qu) /*@modifies internalState@*/ ;
extern bool isFlipOldStyle(void) /*@*/ ;
extern bool isNewStyle(void) /*@*/ ;  
extern bool processingIterVars(void) /*@*/ ;

extern ctype declareEnum (/*@only@*/ cstring p_ename, /*@only@*/ enumNameList p_el);
extern ctype declareStruct (/*@temp@*/ cstring p_id, /*@only@*/ uentryList p_f);
extern ctype declareUnnamedStruct (/*@only@*/ uentryList p_f);

extern ctype declareUnion (/*@temp@*/ cstring p_id, /*@only@*/ uentryList p_f);
extern ctype declareUnnamedUnion (/*@only@*/ uentryList p_f);

extern void 
  setFunctionSpecialClause (lltok p_stok, /*@only@*/ sRefSet p_s, lltok p_etok);
extern void
  setFunctionStateSpecialClause (lltok p_stok, specialClauseKind p_kind, 
				 /*@only@*/ sRefSet p_s, lltok p_etok);

extern ctype declareUnnamedEnum (/*@only@*/ enumNameList p_el);
extern ctype handleEnum (/*@only@*/ cstring p_id);
extern ctype handleStruct (/*@only@*/ cstring p_id);
extern ctype handleUnion (/*@only@*/ cstring p_id);

extern uentryList handleParamIdList (/*@returned@*/ /*@dependent@*/ uentryList p_params);
extern uentryList handleParamTypeList (/*@dependent@*/ /*@returned@*/ uentryList p_params);

extern uentryList fixUentryList (/*@only@*/ idDeclList p_tl, qtype p_q);
extern uentryList fixUnnamedDecl (qtype p_q) /*@*/ ;

extern /*@exposed@*/ uentry getCurrentIter(void);

extern void processNamedDecl (idDecl p_t);
extern void declareFunction (/*@only@*/ idDecl p_tid) 
   /*@globals internalState@*/ ;
extern void doVaDcl (void);
extern void doneParams (void);

extern void setCurrentParams (/*@dependent@*/ uentryList p_ue);
extern void clearCurrentParams (void);

extern /*@exposed@*/ sRef fixModifiesId (cstring p_s);
extern /*@exposed@*/ sRef fixSpecClausesId (cstring p_s);

extern void setFlipOldStyle(void);
extern void setNewStyle(void);
extern void unsetProcessingGlobals (void);
extern void setProcessingIterVars (uentry p_iter);
extern void setProcessingTypedef (/*@only@*/ qtype p_q);
extern void setProcessingVars (/*@only@*/ qtype p_q);
extern void setStorageClass (storageClassCode p_sc);
extern void storeLoc (void);
extern void unsetProcessingTypedef (void);
extern void unsetProcessingVars (void);

extern /*@only@*/ uentry makeCurrentParam (idDecl p_t);
extern void setProcessingGlobalsList (void);

extern /*@exposed@*/ sRef modListArrayFetch (sRef p_s, sRef p_mexp);
extern /*@exposed@*/ sRef modListPointer (sRef p_s);
extern /*@exposed@*/ sRef modListFieldAccess (sRef p_s, /*@only@*/ cstring p_f);
extern /*@exposed@*/ sRef modListArrowAccess (sRef p_s, /*@only@*/ cstring p_f);

extern sRef globListUnrecognized (cstring p_s);
extern void globListAdd (sRef p_sr, qualList p_quals);

extern void setFunctionModifies (/*@only@*/ sRefSet p_s);

extern void checkDoneParams (void);

extern void exitParamsTemp (void);
extern void enterParamsTemp (void);

extern void clearProcessingGlobMods (void);
extern bool isProcessingGlobMods (void);
extern void setProcessingGlobMods (void);

extern void setFunctionNoGlobals (void);
extern int iterParamNo (void);
extern void nextIterParam (void);
extern void declareCIter (cstring p_name, /*@owned@*/ uentryList p_params);
extern void checkModifiesId (uentry p_ue);
extern /*@exposed@*/ sRef checkSpecClausesId (uentry p_ue);

extern void checkConstant (qtype p_t, idDecl p_id) ;
extern void checkValueConstant (qtype p_t, idDecl p_id, exprNode p_e) ;

extern void declareStaticFunction (/*@only@*/ idDecl p_tid) 
   /*@globals internalState@*/ ;

# else
# error "Multiple include"
# endif








