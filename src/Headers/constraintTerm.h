#ifndef __constraintTerm_h__

#define __constraintTerm_h__

typedef union
{
  exprNode expr;
  sRef     sref;
  int      intlit;
} constraintTermValue;

void constraintTermValue_copy (/*@out@*/ constraintTermValue src, constraintTermValue dst);

#define constraintTermValue_copy(dst, src)     ((dst) = (src))

typedef enum
{
  ERRORBADCONSTRAINTTERMTYPE,
 EXPRNODE, SREF,
 INTLITERAL
} constraintTermType;

struct _constraintTerm {
  fileloc loc;
  constraintTermValue value;
  constraintTermType kind;
};


abst_typedef struct _constraintTerm * constraintTerm;



constraintTerm constraintTerm_simplify (/*@returned@*/ constraintTerm term) /*@modifies term@*/ ;

constraintTerm constraintTerm_makeExprNode (/*@only@*/ exprNode e) /*@*/;

constraintTerm constraintTerm_copy (constraintTerm term) /*@*/;

constraintTerm exprNode_makeConstraintTerm ( exprNode e) /*@*/;

bool constraintTerm_same (constraintTerm term1, constraintTerm term2) /*@*/;

bool constraintTerm_similar (constraintTerm term1, constraintTerm term2) /*@*/;

bool constraintTerm_canGetValue (constraintTerm term)/*@*/;
int constraintTerm_getValue (constraintTerm term) /*@*/;

fileloc constraintTerm_getFileloc (constraintTerm t) /*@*/;

constraintTerm constraintTerm_makeMaxSetexpr (exprNode e) /*@*/;

constraintTerm constraintTerm_makeMinSetexpr (exprNode e) /*@*/;

constraintTerm constraintTerm_makeMaxReadexpr (exprNode e) /*@*/;

constraintTerm constraintTerm_makeMinReadexpr (exprNode e) /*@*/;

constraintTerm constraintTerm_makeValueexpr (exprNode e) /*@*/;

constraintTerm intLit_makeConstraintTerm (int i) /*@*/;

constraintTerm constraintTerm_makeIntLitValue (int i) /*@*/;

bool constraintTerm_isIntLiteral (constraintTerm term) /*@*/;

cstring constraintTerm_print (constraintTerm term) /*@*/;

constraintTerm constraintTerm_makesRef  (/*@only@*/ sRef s) /*@*/;

bool constraintTerm_probSame (constraintTerm term1, constraintTerm term2) /*@*/;

constraintTerm constraintTerm_setFileloc (/*@returned@*/ constraintTerm term, fileloc loc) /*@modifies term@*/;

constraintTerm constraintTerm_makeIntLiteral (int i) /*@*/;

bool constraintTerm_isStringLiteral (constraintTerm c) /*@*/;
cstring constraintTerm_getStringLiteral (constraintTerm c) /*@*/;

constraintExpr 
constraintExpr_doFixResult (constraintExpr e, exprNode fcnCall) /*@modifies e @*/;

#else

#error Multiple Include

#endif
