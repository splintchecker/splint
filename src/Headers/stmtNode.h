/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
*/

typedef struct _stmtNode {
  ltoken lhs;
  ltoken operator;
  termNodeList args;
} *stmtNode;

extern /*@unused@*/ /*@notnull@*/ /*@only@*/ cstring stmtNode_unparse (stmtNode p_x);
