/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/

typedef struct _letDeclNode {
  ltoken varid;
  /*@null@*/ lclTypeSpecNode sortspec;
  struct _termNode *term;
  sort sort;
} *letDeclNode;

extern void letDeclNode_free (/*@only@*/ /*@null@*/ letDeclNode p_x);
