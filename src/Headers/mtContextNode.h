/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
**
*/
/*
** mtContextNode.h
*/

# ifndef MTCONTEXTNODE_H
# define MTCONTEXTNODE_H

typedef enum
{
  MTC_ANY, MTC_PARAM, MTC_REFERENCE, MTC_CLAUSE
} mtContextKind ;

struct s_mtContextNode {
  mtContextKind context;
  ctype type; /* This state only applies to types matching. */
} ;

/*@constant null mtContextNode mtContextNode_undefined@*/
# define mtContextNode_undefined ((mtContextNode) 0)

extern /*@falsenull@*/ bool mtContextNode_isDefined (mtContextNode p_s) /*@*/ ;
# define mtContextNode_isDefined(s) ((s) != mtContextNode_undefined)

extern cstring mtContextNode_unparse (mtContextNode) /*@*/ ;

extern mtContextNode mtContextNode_createAny (void) /*@*/ ;
extern mtContextNode mtContextNode_createParameter (ctype) /*@*/ ;
extern mtContextNode mtContextNode_createReference (ctype) /*@*/ ;
extern mtContextNode mtContextNode_createClause (ctype) /*@*/ ;

extern void mtContextNode_free (/*@only@*/ mtContextNode) ;

extern bool mtContextNode_isRef (mtContextNode) /*@*/;
extern bool mtContextNode_isParameter (mtContextNode) /*@*/;
extern bool mtContextNode_isClause (mtContextNode) /*@*/;

extern bool mtContextNode_matchesEntry (mtContextNode, uentry) /*@*/ ;
extern bool mtContextNode_matchesRef (mtContextNode, sRef) /*@*/ ;

extern bool mtContextNode_matchesRefStrict (mtContextNode, sRef) /*@*/ ;
   /* Doesn't allow matches with unknown type. */

# else
# error "Multiple include"
# endif
