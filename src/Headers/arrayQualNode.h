/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
typedef struct _arrayQualNode {
  ltoken tok;
  /*@null@*/ struct _termNode *term;
} *arrayQualNode;
