#ifndef __constraintTerm_h__

#define __constraintTerm_h__

typedef union
{
  /*@exposed@*/ exprNode expr;
  /*@exposed@*/  sRef     sref;
  int      intlit;
} constraintTermValue;

void constraintTermValue_copy (/*@out@*/ constraintTermValue src, constraintTermValue dst);

/*@-macroassign*/

#define constraintTermValue_copy(dst, src)     ((dst) = (src))

/*@=macroassign*/

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
};


abst_typedef struct _constraintTerm * constraintTerm;



extern /*@falsenull@*/ bool constraintTerm_isDefined (constraintTerm p_e) /*@*/;
extern /*@unused@*/ /*@truenull@*/ bool constraintTerm_isUndefined (constraintTerm p_e) /*@*/ ;
extern /*@unused@*/ /*@truenull@*/ bool constraintTerm_isError (constraintTerm p_e) /*@*/ ;

/*@constant null constraintTerm constraintTerm_undefined; @*/

# define constraintTerm_undefined ((constraintTerm)NULL)

# define constraintTerm_isDefined(e)        ((e) != constraintTerm_undefined)
# define constraintTerm_isUndefined(e)      ((e) == constraintTerm_undefined)
# define constraintTerm_isError(e)          ((e) == constraintTerm_undefined)



void constraintTerm_free (/*@only@*/ constraintTerm term);

constraintTerm constraintTerm_simplify (/*@returned@*/ constraintTerm term) /*@modifies term@*/ ;

/*@only@*/ constraintTerm constraintTerm_makeExprNode (/*@exposed@*/ exprNode e) /*@*/;

constraintTerm constraintTerm_copy (constraintTerm term) /*@*/;

//constraintTerm exprNode_makeConstraintTerm ( exprNode e) /*@*/;

//bool constraintTerm_same (constraintTerm term1, constraintTerm term2) /*@*/;

bool constraintTerm_similar (constraintTerm term1, constraintTerm term2) /*@*/;

bool constraintTerm_canGetValue (constraintTerm term)/*@*/;
int constraintTerm_getValue (constraintTerm term) /*@*/;

fileloc constraintTerm_getFileloc (constraintTerm t) /*@*/;

//constraintTerm constraintTerm_makeMaxSetexpr (exprNode e) /*@*/;

//constraintTerm constraintTerm_makeMinSetexpr (exprNode e) /*@*/;

//constraintTerm constraintTerm_makeMaxReadexpr (exprNode e) /*@*/;

//constraintTerm constraintTerm_makeMinReadexpr (exprNode e) /*@*/;

//constraintTerm constraintTerm_makeValueexpr (exprNode e) /*@*/;

//constraintTerm intLit_makeConstraintTerm (int i) /*@*/;

//constraintTerm constraintTerm_makeIntLitValue (int i) /*@*/;

bool constraintTerm_isIntLiteral (constraintTerm term) /*@*/;

cstring constraintTerm_print (constraintTerm term) /*@*/;

constraintTerm constraintTerm_makesRef  (/*@exposed@*/ sRef s) /*@*/;

/*@unused@*/ bool constraintTerm_probSame (constraintTerm term1, constraintTerm term2) /*@*/;

constraintTerm constraintTerm_setFileloc (/*@returned@*/ constraintTerm term, fileloc loc) /*@modifies term@*/;

constraintTerm constraintTerm_makeIntLiteral (int i) /*@*/;

bool constraintTerm_isStringLiteral (constraintTerm c) /*@*/;
cstring constraintTerm_getStringLiteral (constraintTerm c) /*@*/;


constraintTerm constraintTerm_doSRefFixBaseParam (/*@returned@*/ constraintTerm term, exprNodeList arglist) /*@modifies term@*/;

#else

#error Multiple Include

#endif
