#ifndef __constraintTerm_h__

#define __constraintTerm_h__

typedef union
{
  /*@exposed@*/ /*@dependent@*/ exprNode expr;
  /*@only@*/  sRef     sref;
  int      intlit;
} constraintTermValue;

/*@-namechecks@*/

typedef enum
{
  ERRORBADCONSTRAINTTERMTYPE,
 EXPRNODE, SREF,
 INTLITERAL
} constraintTermType;

struct _constraintTerm {
  /*@only@*/ fileloc loc;
  constraintTermValue value;
  constraintTermType kind;
} ;

abst_typedef struct _constraintTerm *constraintTerm;

/*@i311 shouldn't need this...never null */
extern bool constraintTerm_isDefined (constraintTerm t) /*@*/ ;

extern constraintTermType constraintTerm_getKind (constraintTerm) ;
extern /*@exposed@*/ sRef constraintTerm_getSRef (constraintTerm) ;

void constraintTerm_free (/*@only@*/ constraintTerm term);

constraintTerm constraintTerm_simplify (/*@returned@*/ constraintTerm term) /*@modifies term@*/ ;

/*@only@*/ constraintTerm constraintTerm_makeExprNode (/*@dependent@*/ exprNode e) /*@*/;

constraintTerm constraintTerm_copy (constraintTerm term) /*@*/;

bool constraintTerm_similar (constraintTerm term1, constraintTerm term2) /*@*/;

bool constraintTerm_canGetValue (constraintTerm term)/*@*/;
int constraintTerm_getValue (constraintTerm term) /*@*/;

fileloc constraintTerm_getFileloc (constraintTerm t) /*@*/;


bool constraintTerm_isIntLiteral (constraintTerm term) /*@*/;

cstring constraintTerm_print (constraintTerm term) /*@*/;

constraintTerm constraintTerm_makesRef  (/*@temp@*/ /*@observer@*/ sRef s) /*@*/;

/*@unused@*/ bool constraintTerm_probSame (constraintTerm term1, constraintTerm term2) /*@*/;

constraintTerm constraintTerm_setFileloc (/*@returned@*/ constraintTerm term, fileloc loc) /*@modifies term@*/;

constraintTerm constraintTerm_makeIntLiteral (int i) /*@*/;

bool constraintTerm_isStringLiteral (constraintTerm c) /*@*/;
cstring constraintTerm_getStringLiteral (constraintTerm c) /*@*/;


constraintTerm constraintTerm_doSRefFixBaseParam (/*@returned@*/ constraintTerm term, exprNodeList arglist) /*@modifies term@*/;

void constraintTerm_dump ( /*@observer@*/ constraintTerm t,  FILE *f);

/*@only@*/ constraintTerm constraintTerm_undump ( FILE *f);

/*@=namechecks@*/

#else

#error Multiple Include

#endif
