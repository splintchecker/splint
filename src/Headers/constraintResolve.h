
extern constraintList reflectChanges (constraintList pre2, constraintList post1);
extern constraint substitute (constraint c, constraintList p);
//extern constraint constraint_searchandreplace (constraint c, constraintExpr old, constraintExpr new);
extern bool rangeCheck (arithType ar1, /*@observer@*/ constraintExpr expr1, arithType ar2, /*@observer@*/ constraintExpr expr2);
extern bool satifies (/*@observer@*/ constraint pre, /*@observer@*/ constraint post);

extern bool resolve ( /*@observer@*/ constraint c,  /*@observer@*/ constraintList p);
/*@only@*/ constraintList reflectChangesEnsures (/*@only@*/ constraintList pre2, constraintList post1);

extern constraint constraint_simplify ( /*@returned@*/ constraint c);

extern /*@only@*/ constraintList constraintList_fixConflicts (constraintList list1, constraintList list2);

extern constraintList constraintList_subsumeEnsures (constraintList list1, constraintList list2);

extern constraintList constraintList_mergeEnsures (constraintList list1, constraintList list2);

bool constraint_isAlwaysTrue (constraint c);
constraintList constraintList_mergeRequires (constraintList list1, constraintList list2);
constraintList reflectChangesOr (constraintList pre2, constraintList post1);

constraintList constraintList_substitute (constraintList target, constraintList subList);

extern void mergeResolve (exprNode parent, exprNode child1, exprNode child2);
extern constraintList checkCall (exprNode fcn, exprNodeList arglist);

void checkArgumentList (/*@out@*/ exprNode temp, exprNodeList arglist, fileloc sequencePoint) /*@modifies temp @*/;
