/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** pairNode.h
**
** needs sort_type.h, ltoken_type.h
*/

typedef struct _pairNode {
  sort sort;
  ltoken tok;   /* enable error message to pinpoint location */
} *pairNode;

extern void pairNode_free (/*@only@*/ /*@null@*/ pairNode p_x);
