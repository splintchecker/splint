
extern constraintList reflectChanges (constraintList pre2, constraintList post1);
extern constraint substitute (constraint c, constraintList p);
extern constraint constraint_searchandreplace (constraint c, constraintExpr old, constraintExpr new);
extern bool rangeCheck (arithType ar1, constraintExpr expr1, arithType ar2, constraintExpr expr2);
extern bool satifies (constraint pre, constraint post);

extern bool resolve (constraint c, constraintList p);
extern constraintList reflectChangesEnsures (constraintList pre2, constraintList post1);
extern constraint constraint_simplify (constraint c);

extern constraintList constraintList_fixConflicts (constraintList list1, constraintList list2);

extern constraintList constraintList_subsumeEnsures (constraintList list1, constraintList list2);

extern constraintList constraintList_mergeEnsures (constraintList list1, constraintList list2);

bool constraint_isAlwaysTrue (constraint c);
constraintList constraintList_mergeRequires (constraintList list1, constraintList list2);
constraintList reflectChangesOr (constraintList pre2, constraintList post1);
