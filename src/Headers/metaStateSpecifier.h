/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
*/
/*
** metaStateSpecifier.h
*/

# ifndef METASTATESPECIFIER_H
# define METASTATESPECIFIER_H

struct s_metaStateSpecifier {
  sRef sr;
  /*@observer@*/ metaStateInfo msinfo;
} ;

extern metaStateSpecifier
metaStateSpecifier_create (/*@only@*/ sRef, /*@observer@*/ metaStateInfo) ;

extern cstring metaStateSpecifier_unparse (metaStateSpecifier) /*@*/ ;
extern void metaStateSpecifier_free (/*@only@*/ metaStateSpecifier) ;

# else
# error "Multiple include"
# endif 




