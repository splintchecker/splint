/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/

typedef struct _initDeclNode {
  declaratorNode declarator;
  /*@null@*/ struct _termNode *value;
} *initDeclNode;

extern bool initDeclNode_isRedeclaration (initDeclNode p_d);

extern void initDeclNode_free (/*@only@*/ /*@null@*/ initDeclNode p_x);
