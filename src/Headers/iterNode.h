/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/

typedef struct _iterNode {
  ltoken name;
  paramNodeList params;
} *iterNode;

extern /*@unused@*/ /*@only@*/ cstring 
  iterNode_unparse (/*@null@*/ iterNode p_i) /*@*/ ;
