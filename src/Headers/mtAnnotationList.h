/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
**
*/
# ifndef MTANNOTATIONLIST_H
# define MTANNOTATIONLIST_H

struct s_mtAnnotationList
{
  int      nelements;
  int      nspace;
  /*@reldef@*/ /*@relnull@*/ mtAnnotationDecl *elements;
} ;

/*@constant null mtAnnotationList mtAnnotationList_undefined;@*/
# define mtAnnotationList_undefined ((mtAnnotationList) NULL)

extern /*@falsewhennull@*/ bool mtAnnotationList_isDefined (mtAnnotationList p_s) /*@*/ ;
# define mtAnnotationList_isDefined(s)   ((s) != mtAnnotationList_undefined)

extern int mtAnnotationList_size (/*@sef@*/ mtAnnotationList) /*@*/ ;
# define mtAnnotationList_size(s) (mtAnnotationList_isDefined (s) ? (s)->nelements : 0)

extern /*@unused@*/ /*@falsewhennull@*/ bool mtAnnotationList_empty (/*@sef@*/ mtAnnotationList) /*@*/ ;
# define mtAnnotationList_empty(s) (mtAnnotationList_size(s) == 0)

extern cstring mtAnnotationList_unparseSep (mtAnnotationList p_s, cstring p_sep) /*@*/ ;

extern /*@unused@*/ /*@only@*/ mtAnnotationList mtAnnotationList_new (void) /*@*/ ;

extern /*@only@*/ mtAnnotationList mtAnnotationList_single (/*@keep@*/ mtAnnotationDecl p_el) /*@*/ ;

extern mtAnnotationList 
  mtAnnotationList_add (/*@returned@*/ mtAnnotationList p_s, /*@keep@*/ mtAnnotationDecl p_el) 
  /*@modifies p_s@*/ ;

extern mtAnnotationList 
  mtAnnotationList_prepend (/*@returned@*/ mtAnnotationList p_s, /*@keep@*/ mtAnnotationDecl p_el) 
  /*@modifies p_s@*/ ;

extern /*@unused@*/ /*@only@*/ cstring mtAnnotationList_unparse (mtAnnotationList p_s) ;
extern void mtAnnotationList_free (/*@only@*/ mtAnnotationList p_s) ;

/*@constant int mtAnnotationListBASESIZE;@*/
# define mtAnnotationListBASESIZE MIDBASESIZE

/*@iter mtAnnotationList_elements (sef mtAnnotationList x, yield exposed mtAnnotationDecl el); @*/
# define mtAnnotationList_elements(x, m_el) \
   { if (mtAnnotationList_isDefined (x)) { \
       int m_ind; mtAnnotationDecl *m_elements = &((x)->elements[0]); \
	 for (m_ind = 0 ; m_ind < (x)->nelements; m_ind++) \
	   { mtAnnotationDecl m_el = *(m_elements++); 

# define end_mtAnnotationList_elements }}}

# else
# error "Multiple include"
# endif




