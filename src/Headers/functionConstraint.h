/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
*/
/*
** functionConstraint.h
*/

# ifndef FCNCONSTRAINT_H
# define FcNCONSTRAINT_H

typedef enum
{
  FCT_BUFFER, FCT_METASTATE
} functionConstraintKind ;

struct s_functionConstraint {
  functionConstraintKind kind;
  union {
    /*@only@*/ constraintList buffer;
    /*@only@*/ metaStateConstraint metastate;
  } constraint;
} ;

/*@constant null functionConstraint functionConstraint_undefined; @*/
# define functionConstraint_undefined    ((functionConstraint) NULL)

extern /*@falsenull@*/ bool functionConstraint_isDefined (functionConstraint) /*@*/ ;
# define functionConstraint_isDefined(p_info) ((p_info) != NULL)

extern /*@truenull@*/ bool functionConstraint_isUndefined (functionConstraint) /*@*/ ;
# define functionConstraint_isUndefined(p_info) ((p_info) == NULL)

extern functionConstraint functionConstraint_copy (functionConstraint) /*@*/ ;

extern functionConstraint
functionConstraint_createBufferConstraint (/*@only@*/ constraintList) ;

extern functionConstraint
functionConstraint_createMetaStateConstraint (/*@only@*/ metaStateConstraint) ;

extern bool functionConstraint_hasBufferConstraint (functionConstraint) /*@*/ ;

extern /*@observer@*/ constraintList functionConstraint_getBufferConstraint (functionConstraint) /*@*/ ;
extern /*@observer@*/ metaStateConstraint functionConstraint_getMetaStateConstraint (functionConstraint) /*@*/ ;

extern cstring functionConstraint_unparse (functionConstraint) /*@*/ ;
extern void functionConstraint_free (/*@only@*/ functionConstraint) ;

# else
# error "Multiple include"
# endif 




