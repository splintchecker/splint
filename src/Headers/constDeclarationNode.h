/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/

typedef struct _constDeclarationNode {
  lclTypeSpecNode type;
  initDeclNodeList decls;
} *constDeclarationNode;

extern /*@unused@*/ /*@only@*/ cstring 
  constDeclarationNode_unparse (/*@null@*/ constDeclarationNode p_x);
