/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/

typedef struct _quantifiedTermNode {
  quantifierNodeList quantifiers;
  ltoken open; /* for ease of debugging */
  struct _termNode *body;
  ltoken close; /* for ease of debugging */
} *quantifiedTermNode;

