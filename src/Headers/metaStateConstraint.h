/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
*/
/*
** metaStateConstraint.h
*/

# ifndef METASTATECONSTRAINT_H
# define METASTATECONSTRAINT_H

struct s_metaStateConstraint {
  /*@only@*/ metaStateSpecifier lspec;
  /*@only@*/ metaStateExpression rspec;
} ;

extern metaStateConstraint
metaStateConstraint_create (/*@only@*/ metaStateSpecifier, /*@only@*/ metaStateExpression) ;

extern cstring metaStateConstraint_unparse (metaStateConstraint) /*@*/ ;
extern /*@only@*/ metaStateConstraint metaStateConstraint_copy (metaStateConstraint) /*@*/ ;
extern void metaStateConstraint_free (/*@only@*/ metaStateConstraint) ;

# else
# error "Multiple include"
# endif 




