/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
typedef struct _signNode {
  ltoken tok;
  sortList domain; 
  sort range;
  unsigned int key;
} *signNode;

extern /*@only@*/ cstring signNode_unparse (signNode p_sn) /*@*/ ;
extern void signNode_free (/*@only@*/ signNode p_sn);
