/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
*/

typedef struct _taggedUnionNode {
  stDeclNodeList structdecls;
  declaratorNode declarator; 
} *taggedUnionNode;

extern /*@unused@*/ /*@only@*/ cstring 
  taggedUnionNode_unparse (taggedUnionNode p_n) /*@*/ ;
