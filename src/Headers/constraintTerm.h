#ifndef __constraintTerm_h__

#define __constraintTerm_h__

typedef union
{
  /*@exposed@*/ /*@dependent@*/ exprNode expr;
  /*@only@*/  sRef     sref;
  long intlit;
} constraintTermValue;

typedef enum
{
  CTT_ERRORBADCONSTRAINTTERMTYPE,
  CTT_EXPR, 
  CTT_SREF,
  CTT_INTLITERAL
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
long constraintTerm_getValue (constraintTerm term) /*@*/;

fileloc constraintTerm_getFileloc (constraintTerm t) /*@*/;


bool constraintTerm_isIntLiteral (constraintTerm term) /*@*/;

constraintTerm constraintTerm_makesRef  (/*@temp@*/ /*@observer@*/ sRef s) /*@*/;

/*@unused@*/ bool constraintTerm_probSame (constraintTerm term1, constraintTerm term2) /*@*/;

constraintTerm constraintTerm_setFileloc (/*@returned@*/ constraintTerm term, fileloc loc) /*@modifies term@*/;

constraintTerm constraintTerm_makeIntLiteral (long i) /*@*/;

bool constraintTerm_isStringLiteral (constraintTerm c) /*@*/;
cstring constraintTerm_getStringLiteral (constraintTerm c) /*@*/;


constraintTerm constraintTerm_doSRefFixBaseParam (/*@returned@*/ constraintTerm term, exprNodeList arglist) /*@modifies term@*/;

extern cstring constraintTerm_unparse (constraintTerm)  /*@*/ ;

extern void constraintTerm_dump ( /*@observer@*/ constraintTerm t,  FILE *f);
extern /*@only@*/ constraintTerm constraintTerm_undump ( FILE *f);
extern bool constraintTerm_isInitBlock (/*@observer@*/ /*@temp@*/ constraintTerm p_c) /*@*/;
extern int constraintTerm_getInitBlockLength (/*@observer@*/ /*@temp@*/ constraintTerm p_c) /*@*/;
extern bool constraintTerm_isExprNode (/*@observer@*/ /*@temp@*/ constraintTerm c) /*@*/;
extern ctype constraintTerm_getCType (constraintTerm term);

extern /*@exposed@*/ exprNode constraintTerm_getExprNode (constraintTerm t);
extern /*@exposed@*/ sRef constraintTerm_getsRef (constraintTerm t);

/*drl added 12/19/2002*/
extern bool constraintTerm_isConstantOnly (constraintTerm p_term);
     
#else
#error "Multiple Include!"
#endif
