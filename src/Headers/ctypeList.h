/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
# ifndef ctypeLIST_H
# define ctypeLIST_H

/*
** there is a special ctypeList used to represent the () argument list
** this has nelements = -1
**
** (that is, not void, so any number of arguments is okay.)
*/

abst_typedef /*@null@*/ struct _ctypeList
{
  int nelements;
  int nspace;
  /*@reldef@*/ /*@relnull@*/ ctype  *elements;
} *ctypeList ;

extern int ctypeList_size (/*@sef@*/ ctypeList p_s) /*@*/ ;
# define ctypeList_size(s)  (ctypeList_isDefined(s) ? (s)->nelements : 0)   

extern /*@only@*/ ctypeList ctypeList_new(void);
extern void ctypeList_addh (ctypeList p_s, ctype p_el) /*@modifies p_s@*/;

extern /*@unused@*/ /*@only@*/ cstring ctypeList_unparse (ctypeList) /*@*/ ;
extern void ctypeList_free (/*@only@*/ /*@only@*/ ctypeList p_s) /*@modifies p_s@*/;

extern /*@falsenull@*/ bool ctypeList_isDefined (/*@null@*/ ctypeList p_ct) /*@*/ ;
extern /*@unused@*/ /*@truenull@*/ bool 
  ctypeList_isUndefined (/*@null@*/ ctypeList p_ct) /*@*/ ;

/*@constant null ctypeList ctypeList_undefined; @*/
# define ctypeList_undefined       ((ctypeList) NULL)

# define ctypeList_isDefined(ct)   ((ct) != ctypeList_undefined)
# define ctypeList_isUndefined(ct) ((ct) == ctypeList_undefined)

/*@constant int ctypeListBASESIZE;@*/
# define ctypeListBASESIZE SMALLBASESIZE

# else
# error "Multiple include"
# endif




