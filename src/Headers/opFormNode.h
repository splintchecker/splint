/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/

typedef enum {
  OPF_IF, OPF_ANYOP, OPF_MANYOP, OPF_ANYOPM, OPF_MANYOPM, 
  OPF_MIDDLE, OPF_MMIDDLE, OPF_MIDDLEM, OPF_MMIDDLEM,
  OPF_BMIDDLE, OPF_BMMIDDLE, 
  OPF_BMIDDLEM, OPF_BMMIDDLEM, 
  OPF_SELECT, OPF_MAP, 
  OPF_MSELECT, OPF_MMAP
  } opFormKind;

typedef union {
  int middle;
  ltoken anyop;
  ltoken id;
} opFormUnion;

typedef struct _opFormNode {
  ltoken tok;        /* keeps the openSym token */
  opFormKind kind;
  opFormUnion content;
  unsigned int key;
  ltoken close;      /* keeps the closeSym token */
} *opFormNode;

extern /*@unused@*/ /*@only@*/ cstring 
  opFormNode_unparse (/*@null@*/ opFormNode p_n) /*@*/ ;
