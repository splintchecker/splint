/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
*/
/*
** metaStateExpression.h
*/

# ifndef METASTATEEXPRESSION_H
# define METASTATEEXPRESSION_H

struct s_metaStateExpression {
  metaStateSpecifier spec;
  /*@null@*/ metaStateExpression rest;
} ;

extern /*@notnull@*/ metaStateExpression
metaStateExpression_create (/*@only@*/ metaStateSpecifier) ;

extern /*@notnull@*/ metaStateExpression
metaStateExpression_createMerge (/*@only@*/ metaStateSpecifier, /*@only@*/ metaStateExpression) ;

extern /*@observer@*/ metaStateSpecifier
metaStateExpression_getSpecifier (metaStateExpression) /*@*/ ;

extern metaStateExpression metaStateExpression_copy (metaStateExpression) ;

extern cstring metaStateExpression_unparse (metaStateExpression) /*@*/ ;

extern void metaStateExpression_free (/*@only@*/ metaStateExpression) ;

# else
# error "Multiple include"
# endif 




