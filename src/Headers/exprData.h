/* ;-*-C-*-; */

/*
** freeShallow: free exprData created from exprNode_effect calls.
**    All but the innermost storage is free'd.
*/

/*@only@*/ exprData exprData_makeLiteral (/*@only@*/ cstring s);

/*@only@*/ exprData exprData_makeId (/*@temp@*/ uentry id);

/*@only@*/ exprData exprData_makePair (/*@keep@*/ exprNode a, /*@keep@*/ exprNode b);


