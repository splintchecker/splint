/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** environmentTable.h
*/

# ifndef environmentTable_H
# define environmentTable_H

//typedef /*@only@*/ sRefSet o_sRefSet;
//typedef /*@exposed@*/ sRef e_sRef;

typedef struct environmentAt_ {
  int max;
  int min;
} * environmentAt;


typedef struct rangeAt_ {
  int max;
  int min;
  bool isRelative;
  bool unknown;
  bool isReferenced;
}  rangeAt;


struct _environmentTable
{
  int nelements;
  int nspace;
  /*@reldef@*/ /*@only@*/ e_sRef * keys;
  /*@reldef@*/ /*@only@*/ o_sRefSet * values;
  /*@reldef@*/ /*@only@*/ rangeAt *  rangeValues;
};



/* extern rangeAt getEnvironment (key); */
/* extern boolean inRange (int, range); */

/* extern void setMinium (key, min); */
/* extern void setMaximum (key, min); */

environmentTable
environmentTable_addExactValue (/*@returned@*/ environmentTable s, /*@exposed@*/ sRef sr, int val);

extern /*@unused@*/ /*@truenull@*/ bool environmentTable_isUndefined (environmentTable p_s);
extern /*@unused@*/ /*@truenull@*/ bool 
  environmentTable_isEmpty (/*@sef@*/ environmentTable p_s);
extern /*@falsenull@*/ bool environmentTable_isDefined (environmentTable p_s);

/*@constant null environmentTable environmentTable_undefined; @*/
# define environmentTable_undefined      ((environmentTable) NULL)
# define environmentTable_isDefined(s)   ((s) != environmentTable_undefined)
# define environmentTable_isUndefined(s) ((s) == environmentTable_undefined)
# define environmentTable_isEmpty(s)     (environmentTable_size(s) == 0)

extern int environmentTable_size (/*@sef@*/ environmentTable p_s);
# define environmentTable_size(s)  (environmentTable_isDefined (s) ? (s)->nelements : 0)

/*@iter environmentTable_elements (sef environmentTable t, yield exposed sRef key, yield exposed sRefSet values); @*/
# define environmentTable_elements(t, m_key, m_value) \
   { if (environmentTable_isDefined (t)) \
     { int m_ind; sRef *m_keys = &((t)->keys[0]); \
       sRefSet *m_values = &((t)->values[0]); \
       for (m_ind = 0 ; m_ind < (t)->nelements; m_ind++) \
         { sRef m_key = *(m_keys++); sRefSet m_value = *(m_values++);

# define end_environmentTable_elements }}}

extern environmentTable environmentTable_new (void) /*@*/ ;

extern void environmentTable_clearEnvironmentes (environmentTable p_s, sRef p_sr) 
   /*@modifies p_s, p_sr@*/ ;

extern /*@only@*/ sRefSet environmentTable_canEnvironment (environmentTable p_s, sRef p_sr) /*@*/ ;
extern environmentTable environmentTable_copy (environmentTable p_s) /*@*/ ;
 
extern /*@only@*/ cstring environmentTable_unparse (environmentTable p_s) /*@*/ ;
extern void environmentTable_free (/*@only@*/ environmentTable p_s) ;

extern environmentTable 
  environmentTable_addMustEnvironment (/*@returned@*/ environmentTable p_s, /*@exposed@*/ sRef p_sr, sRef p_al)
  /*@modifies p_s@*/ ;

extern environmentTable
  environmentTable_levelUnion (/*@returned@*/ environmentTable p_t1, environmentTable p_t2, int p_level) 
  /*@modifies p_t1@*/ ;

extern environmentTable 
  environmentTable_levelUnionNew (environmentTable p_t1, environmentTable p_t2, int p_level) 
  /*@modifies nothing*/ ;

extern void environmentTable_checkGlobs (environmentTable p_t) /*@modifies g_msgstream@*/ ;
extern /*@only@*/ sRefSet environmentTable_environmentedBy (environmentTable p_s, sRef p_sr) /*@*/ ;
extern void environmentTable_fixSrefs (environmentTable p_s);
extern environmentTable environmentTable_levelUnionSeq (/*@returned@*/ environmentTable p_t1, 
					    /*@only@*/ environmentTable p_t2, int p_level);

/*@constant int environmentTableBASESIZE; @*/
# define environmentTableBASESIZE MIDBASESIZE

# else
# error "Multiple include"
# endif




