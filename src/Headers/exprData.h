/* ;-*-C-*-; */

/*
** freeShallow: free exprData created from exprNode_effect calls.
**    All but the innermost storage is free'd.
*/

/*@only@*/ exprData exprData_makeLiteral (/*@only@*/ cstring p_s);

/*@only@*/ exprData exprData_makeId (/*@temp@*/ uentry p_id);

/*@only@*/ exprData exprData_makePair (/*@keep@*/ exprNode p_a, /*@keep@*/ exprNode p_b);


