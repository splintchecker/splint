/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** rangeTable.h
*/

# ifndef rangeTable_H
# define rangeTable_H

typedef /*@only@*/ sRefSet o_sRefSet;
typedef /*@exposed@*/ sRef e_sRef;
typedef struct rangeAt_ {
  int max;
  int min;
} * rangeAt;

struct _environmentTable
{
  int nelements
  int nspace;
  /*@reldef@*/ /*@only@*/ e_sRef * keys;
  /*@reldef@*/ /*@only@*/ o_sRefSet * values;
  /*@reldef@*/ /*@only@*/ rangeAt * rangeValues;

}

extern rangeAt_ getRange (key);
extern boolean inRange (int, range);

extern void setMinium (key, min);
extern void setMaximum (key, min);

struct _rangeTable
{
  int nelements;
  int nspace;
  /*@reldef@*/ /*@only@*/ e_sRef *keys;
  /*@reldef@*/ /*@only@*/ o_sRefSet *values;
/*@reldef@*/ /*@only@*/ rangeAt *ranges;
    
} ; 

extern /*@unused@*/ /*@truenull@*/ bool rangeTable_isUndefined (rangeTable p_s);
extern /*@unused@*/ /*@truenull@*/ bool 
  rangeTable_isEmpty (/*@sef@*/ rangeTable p_s);
extern /*@falsenull@*/ bool rangeTable_isDefined (rangeTable p_s);

/*@constant null rangeTable rangeTable_undefined; @*/
# define rangeTable_undefined      ((rangeTable) NULL)
# define rangeTable_isDefined(s)   ((s) != rangeTable_undefined)
# define rangeTable_isUndefined(s) ((s) == rangeTable_undefined)
# define rangeTable_isEmpty(s)     (rangeTable_size(s) == 0)

extern int rangeTable_size (/*@sef@*/ rangeTable p_s);
# define rangeTable_size(s)  (rangeTable_isDefined (s) ? (s)->nelements : 0)

/*@iter rangeTable_elements (sef rangeTable t, yield exposed sRef key, yield exposed sRefSet values); @*/
# define rangeTable_elements(t, m_key, m_value) \
   { if (rangeTable_isDefined (t)) \
     { int m_ind; sRef *m_keys = &((t)->keys[0]); \
       sRefSet *m_values = &((t)->values[0]); \
       for (m_ind = 0 ; m_ind < (t)->nelements; m_ind++) \
         { sRef m_key = *(m_keys++); sRefSet m_value = *(m_values++);

# define end_rangeTable_elements }}}

extern rangeTable rangeTable_new (void) /*@*/ ;

extern void rangeTable_clearRangees (rangeTable p_s, sRef p_sr) 
   /*@modifies p_s, p_sr@*/ ;

extern /*@only@*/ sRefSet rangeTable_canRange (rangeTable p_s, sRef p_sr) /*@*/ ;
extern rangeTable rangeTable_copy (rangeTable p_s) /*@*/ ;
 
extern /*@only@*/ cstring rangeTable_unparse (rangeTable p_s) /*@*/ ;
extern void rangeTable_free (/*@only@*/ rangeTable p_s) ;

extern rangeTable 
  rangeTable_addMustRange (/*@returned@*/ rangeTable p_s, /*@exposed@*/ sRef p_sr, sRef p_al)
  /*@modifies p_s@*/ ;

extern rangeTable
  rangeTable_levelUnion (/*@returned@*/ rangeTable p_t1, rangeTable p_t2, int p_level) 
  /*@modifies p_t1@*/ ;

extern rangeTable 
  rangeTable_levelUnionNew (rangeTable p_t1, rangeTable p_t2, int p_level) 
  /*@modifies nothing*/ ;

extern void rangeTable_checkGlobs (rangeTable p_t) /*@modifies g_msgstream@*/ ;
extern /*@only@*/ sRefSet rangeTable_rangeedBy (rangeTable p_s, sRef p_sr) /*@*/ ;
extern void rangeTable_fixSrefs (rangeTable p_s);
extern rangeTable rangeTable_levelUnionSeq (/*@returned@*/ rangeTable p_t1, 
					    /*@only@*/ rangeTable p_t2, int p_level);

/*@constant int rangeTableBASESIZE; @*/
# define rangeTableBASESIZE MIDBASESIZE

# else
# error "Multiple include"
# endif




