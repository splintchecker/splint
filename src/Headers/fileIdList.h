/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** fileIdList.h
*/

# ifndef FILEIDLIST_H
# define FILEIDLIST_H

/*@access ctype fileId ctypeList@*/
/*@+allmacros@*/

abst_typedef /*@null@*/ ctypeList fileIdList;

extern /*@falsenull@*/ bool fileIdList_isDefined (fileIdList p_f);
# define fileIdList_isDefined(f)  (ctypeList_isDefined (f))

/*@iter fileIdList_elements (sef fileIdList x, yield fileId el); @*/
# define fileIdList_elements(x, m_el) \
   if (fileIdList_isDefined (x)) \
    { int m_ind; fileId *m_elements = &((x)->elements[0]); \
      for (m_ind = 0 ; m_ind < (x)->nelements; m_ind++) \
        { fileId m_el = *(m_elements++); 

# define end_fileIdList_elements }}

extern fileIdList fileIdList_create (void);
# define fileIdList_create()       ctypeList_new()

extern bool fileIdList_isEmpty (/*@sef@*/ fileIdList p_f) /*@*/ ;

extern void fileIdList_add (fileIdList p_f, fileId p_fid) /*@modifies p_f@*/;
# define fileIdList_add(f, el)     ctypeList_addh((ctypeList)(f), (ctype)(el))

extern int fileIdList_size (/*@sef@*/ fileIdList p_f);
# define fileIdList_size(ft)       ctypeList_size((ctypeList)(ft))

extern void fileIdList_free (/*@only@*/ fileIdList p_f) /*@modifies p_f@*/;
# define fileIdList_free(ft)       ctypeList_free((ctypeList)(ft)) 

# define fileIdList_isEmpty(f)     (fileIdList_size (f) == 0)
/*@noaccess ctype fileId ctypeList@*/

# else
# error "Multiple include"
# endif


