
extern /*@only@*/ constraintList reflectChanges (/*@observer@*/ constraintList pre2, /*@observer@*/ constraintList post1);


/* tries to resolve constraints in list pre2 using post1 */
/*@only@*/ extern constraintList reflectChangesFreePre (/*@only@*/ constraintList pre2, /*@observer@*/ constraintList post1);

extern /*@only@*/ constraint substitute (/*@observer@*/ constraint c, constraintList p);

//extern constraint constraint_searchandreplace (constraint c, constraintExpr old, constraintExpr new);

static bool rangeCheck (arithType ar1, /*@observer@*/ constraintExpr expr1, arithType ar2, /*@observer@*/ constraintExpr expr2);
static bool satifies (/*@observer@*/ constraint pre, /*@observer@*/ constraint post);

extern bool resolve ( /*@observer@*/ constraint c,  /*@observer@*/ constraintList p);

static /*@only@*/ constraintList reflectChangesEnsures (/*@observer@*/ constraintList pre2, constraintList post1);

extern constraint constraint_simplify ( /*@returned@*/ constraint c);

extern /*@only@*/ constraintList constraintList_fixConflicts (constraintList list1, constraintList list2);

extern constraintList constraintList_subsumeEnsures (constraintList list1, constraintList list2);

extern constraintList constraintList_mergeEnsures (/*observer@*/ constraintList list1, /*@observer@*/ constraintList list2);

/*@only@*/ constraintList constraintList_mergeEnsuresFreeFirst (/*@only@*/ constraintList list1, /*@observer@*/ constraintList list2);


bool constraint_isAlwaysTrue (/*@observer@*/ constraint c);

/*@only@*/ constraintList constraintList_mergeRequires (/*@observer@*/ constraintList list1,/*@observer@*/ constraintList list2);

/*@only@*/ constraintList constraintList_mergeRequiresFreeFirst (/*@only@*/constraintList list1,/*@observer@*/ constraintList list2);



constraintList reflectChangesOr (constraintList pre2, constraintList post1);

/*@only@*/ constraintList constraintList_substitute (constraintList target, /*2observer@*/ constraintList subList);

/*@only@*/ constraintList constraintList_substituteFreeTarget (/*@only@*/ constraintList target, /*@observer@*/ constraintList subList);

extern void mergeResolve (exprNode parent, exprNode child1, exprNode child2);
extern constraintList checkCall (exprNode fcn, exprNodeList arglist);

void checkArgumentList (/*@out@*/ exprNode temp, exprNodeList arglist, fileloc sequencePoint) /*@modifies temp @*/;

constraint  inequalitySubstitute  (/*@returned@*/ constraint c, constraintList p);
