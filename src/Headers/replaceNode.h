/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
typedef struct _replaceNode {
  ltoken tok;
  typeNameNode typename; 
  bool isCType; /* TRUE means it is a CType */
  union {
    struct { 
      /*@null@*/ nameNode name; 
      /*@null@*/ sigNode signature;
    } renamesortname;
    ltoken ctype; 
  } content;
} *replaceNode; 

extern void replaceNode_free (/*@only@*/ /*@null@*/ replaceNode p_x);
extern /*@only@*/ cstring replaceNode_unparse (/*@null@*/ replaceNode p_x);

