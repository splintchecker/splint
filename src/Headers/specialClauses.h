/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
*/
/*
** specialClauses.h
*/

# ifndef SPECIALCLAUSES_H
# define SPECIALCLAUSES_H

typedef enum
{
  SP_USES,
  SP_DEFINES,
  SP_ALLOCATES,
  SP_RELEASES,
  SP_SETS,
  SP_ISNULL,
  SP_ISNOTNULL,
  SP_ISONLY,
  SP_ISSHARED,
  SP_ISDEPENDENT,
  SP_ISOWNED,
  SP_ISOBSERVER,
  SP_ISEXPOSED
} specialClauseKind ;

typedef enum
{
  TK_BEFORE,
  TK_AFTER,
  TK_BOTH
} stateConstraint;

abst_typedef struct
{
  stateConstraint state;
  specialClauseKind kind;
  sRefSet refs;
} *specialClause ;

typedef /*@only@*/ specialClause o_specialClause;

extern /*@unused@*/ cstring specialClause_unparse (specialClause p_s) /*@*/ ;

extern /*@null@*/ sRefMod 
  specialClause_getEffectFunction (specialClause p_cl) /*@*/ ;

extern /*@null@*/ sRefMod 
  specialClause_getReturnEffectFunction (specialClause p_cl) /*@*/ ;

extern /*@null@*/ sRefMod 
  specialClause_getEntryFunction (specialClause p_cl) /*@*/ ;

extern bool specialClause_isBefore (specialClause p_cl) /*@*/ ;
extern bool specialClause_isAfter (specialClause p_cl) /*@*/ ;

extern /*@observer@*/ sRefSet specialClause_getRefs (specialClause p_cl) /*@*/ ;
# define specialClause_getRefs(cl) ((cl)->refs)

abst_typedef /*@null@*/ struct
{
  int nelements;
  int nspace;
  /*@relnull@*/ /*@reldef@*/ o_specialClause *elements;
} *specialClauses ;

/*@iter specialClauses_elements (sef specialClauses x, yield exposed specialClause el); @*/
# define specialClauses_elements(x, m_el) \
   { if (!specialClauses_isUndefined(x)) \
       { int m_ind; specialClause *m_elements = &((x)->elements[0]); \
          for (m_ind = 0 ; m_ind < (x)->nelements; m_ind++) \
           { specialClause m_el = *(m_elements++); 

# define end_specialClauses_elements }}}

/*@iter specialClauses_preElements (sef specialClauses x, yield exposed specialClause el); @*/
# define specialClauses_preElements(x, m_el) \
   { if (!specialClauses_isUndefined(x)) \
       { int m_ind; specialClause *m_elements = &((x)->elements[0]); \
          for (m_ind = 0 ; m_ind < (x)->nelements; m_ind++) \
           { specialClause m_el = *(m_elements++); if (specialClause_isBefore (m_el)) { \

# define end_specialClauses_preElements }}}}

/*@iter specialClauses_postElements (sef specialClauses x, yield exposed specialClause el); @*/
# define specialClauses_postElements(x, m_el) \
   { if (!specialClauses_isUndefined(x)) \
       { int m_ind; specialClause *m_elements = &((x)->elements[0]); \
          for (m_ind = 0 ; m_ind < (x)->nelements; m_ind++) \
           { specialClause m_el = *(m_elements++); if (specialClause_isAfter (m_el)) { \

# define end_specialClauses_postElements }}}}

extern void specialClauses_checkAll (uentry p_ue) 
   /*@modifies p_ue, g_msgstream@*/ ;

extern flagcode specialClause_preErrorCode (specialClause p_cl) /*@*/ ;
extern /*@observer@*/ cstring 
  specialClause_preErrorString (specialClause p_cl, sRef p_sr) /*@*/ ;

extern flagcode specialClause_postErrorCode (specialClause p_cl) /*@*/ ;
extern /*@observer@*/ cstring 
  specialClause_postErrorString (specialClause p_cl, sRef p_sr) /*@*/ ;

extern sRefTest specialClause_getPreTestFunction (specialClause p_cl) /*@*/ ;

extern sRefTest specialClause_getPostTestFunction (specialClause p_cl) /*@*/ ;
extern sRefShower specialClause_getPostTestShower (specialClause p_cl) /*@*/ ;

extern specialClause 
  specialClause_create (stateConstraint p_st, specialClauseKind p_k, /*@only@*/ sRefSet p_s) 
  /*@*/ ;

extern specialClause specialClause_createDefines (/*@only@*/ sRefSet p_s) /*@*/ ;
extern specialClause specialClause_createUses (/*@only@*/ sRefSet p_s) /*@*/ ;
extern specialClause specialClause_createAllocates (/*@only@*/ sRefSet p_s) /*@*/ ;
extern specialClause specialClause_createReleases (/*@only@*/ sRefSet p_s) /*@*/ ;
extern specialClause specialClause_createSets (/*@only@*/ sRefSet p_s) /*@*/ ;

/*@constant null specialClauses specialClauses_undefined@*/
# define specialClauses_undefined ((specialClauses) 0)

extern /*@falsenull@*/ bool specialClauses_isDefined (specialClauses p_s) /*@*/ ;
# define specialClauses_isDefined(s) ((s) != specialClauses_undefined)

extern /*@truenull@*/ bool specialClauses_isUndefined (specialClauses p_s) /*@*/ ;
# define specialClauses_isUndefined(s) ((s) == specialClauses_undefined)

extern /*@unused@*/ int 
  specialClauses_size (/*@sef@*/ specialClauses p_s) /*@*/ ;
# define specialClauses_size(s) (specialClauses_isDefined (s) ? (s)->nelements : 0)

extern cstring specialClause_unparseKind (specialClause p_s) /*@*/ ;

extern specialClauses
  specialClauses_add (/*@returned@*/ specialClauses p_s, 
		      /*@only@*/ specialClause p_el)  
  /*@modifies p_s@*/ ;

extern /*@unused@*/ cstring specialClauses_unparse (specialClauses p_s) /*@*/ ;
extern void specialClauses_free (/*@only@*/ specialClauses p_s) ;

extern /*@only@*/ specialClauses specialClauses_copy (specialClauses p_s) /*@*/ ;

extern cstring specialClauses_dump (specialClauses p_s) /*@*/ ;
extern specialClauses specialClauses_undump (char **p_s) /*@modifies *p_s@*/ ;

/*@constant int specialClausesBASESIZE;@*/
# define specialClausesBASESIZE MIDBASESIZE

extern void specialClauses_checkEqual (uentry p_old, uentry p_unew) 
  /*@modifies g_msgstream@*/ ;

# else
# error "Multiple include"
# endif


