/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/

typedef struct _abstBodyNode {
  ltoken tok; /* check for NULLTOKEN before using it */
  /*@null@*/ struct _lclPredicateNode *typeinv;
  fcnNodeList fcns; /* only for abstBody, not for optExposedBody */
} *abstBodyNode;

extern /*@unused@*/ /*@only@*/ cstring abstBodyNode_unparse (abstBodyNode p_n);

