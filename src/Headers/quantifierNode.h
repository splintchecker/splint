/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/

typedef struct _quantifierNode {
  ltoken quant;
  varNodeList vars;
  bool isForall;
} *quantifierNode;

extern quantifierNode quantifierNode_copy (quantifierNode p_x);
extern void quantifierNode_free (/*@null@*/ /*@only@*/ quantifierNode p_x);
