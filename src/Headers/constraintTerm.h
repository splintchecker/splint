
constraintTerm constraintTerm_copy (constraintTerm term);

constraintTerm exprNode_makeConstraintTerm (/*@only@*/ exprNode e);

constraintTerm constraintTerm_makeMaxSetexpr (exprNode e);

constraintTerm constraintTerm_makeMinSetexpr (exprNode e);

constraintTerm constraintTerm_makeMaxReadexpr (exprNode e);

constraintTerm constraintTerm_makeMinReadexpr (exprNode e);

constraintTerm constraintTerm_makeValueexpr (exprNode e);

constraintTerm intLit_makeConstraintTerm (int i);

constraintTerm constraintTerm_makeIntLitValue (int i);

cstring  constraintType_print (constraintType constrType);

cstring constraintTerm_print (constraintTerm term);


