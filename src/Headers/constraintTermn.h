
#ifndef __constraintTerm_h__

#define __constraintTerm_h__

constraintTerm constraintTerm_simplify (constraintTerm term);

constraintTerm constraintTerm_makeExprNode (/*@only@*/ exprNode e);

constraintTerm constraintTerm_copy (constraintTerm term);

constraintTerm exprNode_makeConstraintTerm ( exprNode e);


bool constraintTerm_same (constraintTerm term1, constraintTerm term2);

bool constraintTerm_similar (constraintTerm term1, constraintTerm term2);

bool constraintTerm_canGetValue (constraintTerm term);
int constraintTerm_getValue (constraintTerm term);

fileloc constraintTerm_getFileloc (constraintTerm t);

constraintTerm constraintTerm_makeMaxSetexpr (exprNode e);

constraintTerm constraintTerm_makeMinSetexpr (exprNode e);

constraintTerm constraintTerm_makeMaxReadexpr (exprNode e);

constraintTerm constraintTerm_makeMinReadexpr (exprNode e);

constraintTerm constraintTerm_makeValueexpr (exprNode e);

constraintTerm intLit_makeConstraintTerm (int i);

constraintTerm constraintTerm_makeIntLitValue (int i);

bool constraintTerm_isIntLiteral (constraintTerm term);

cstring constraintTerm_print (constraintTerm term);

#endif






