/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/

typedef struct _claimNode {
  ltoken name;
  paramNodeList params;
  /*@null@*/ globalList globals;
  /*@null@*/ letDeclNodeList lets;
  /*@null@*/ lclPredicateNode require;
  /*@null@*/ programNode body;
  /*@null@*/ lclPredicateNode ensures;
} *claimNode;

extern /*@unused@*/ /*@only@*/ cstring claimNode_unparse (claimNode p_c);
