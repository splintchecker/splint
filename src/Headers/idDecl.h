/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** idDecl.h
*/

# ifndef idDecl_H
# define idDecl_H

struct _idDecl
{
  cstring id;
  qtype   typ;
} ; 

/*@constant null idDecl idDecl_undefined; @*/
# define idDecl_undefined ((idDecl) NULL)

extern /*@falsenull@*/ bool idDecl_isDefined (idDecl p_t) /*@*/ ;
# define idDecl_isDefined(t) ((t) != idDecl_undefined)

extern void idDecl_free (/*@only@*/ idDecl p_t);
extern /*@only@*/ idDecl 
  idDecl_create (/*@only@*/ cstring p_s, /*@only@*/ qtype p_t);
extern /*@only@*/ cstring idDecl_unparse (idDecl p_d);
extern /*@exposed@*/ qtype idDecl_getTyp (idDecl p_d);
extern void idDecl_setTyp (idDecl p_d, /*@only@*/ qtype p_c);
extern idDecl idDecl_expectFunction (/*@returned@*/ idDecl p_d);
extern idDecl idDecl_replaceCtype (/*@returned@*/ idDecl p_d, ctype p_c);
extern idDecl idDecl_fixBase (/*@returned@*/ idDecl p_t, qtype p_b);
extern idDecl idDecl_fixParamBase (/*@returned@*/ idDecl p_t, qtype p_b);
extern ctype idDecl_getCtype (idDecl p_d) /*@*/ ;
extern /*@exposed@*/ qualList idDecl_getQuals (idDecl p_d) /*@*/ ; 

extern /*@dependent@*/ /*@observer@*/ cstring idDecl_getName (idDecl p_t) /*@*/ ;
extern /*@observer@*/ cstring idDecl_observeId (idDecl p_d) /*@*/ ;
extern void idDecl_addQual (idDecl p_d, qual p_q);

# define idDecl_getName(t) idDecl_observeId(t)

# else
# error "Multiple include"
# endif


