/* ;-*-C-*-; */

/*
** freeShallow: free exprData created from exprNode_effect calls.
**    All but the innermost storage is free'd.
*/

/*@only@*/ exprData exprData_makeLiteral (/*@only@*/ cstring p_s);

/*@only@*/ exprData exprData_makeId (/*@temp@*/ uentry p_id);

/*@only@*/ exprData exprData_makePair (/*@keep@*/ exprNode p_a, /*@keep@*/ exprNode p_b);

/*@-declundef*/
/*static*/ void exprData_freeShallow (/*@only@*/ exprData data, exprKind kind);

/*static*/ void exprData_free (/*@only@*/ exprData data, exprKind kind);

/*static*/ /*@exposed@*/ exprNode exprData_getInitNode (exprData data) /*@*/;

/*static*/ /*@exposed@*/ idDecl exprData_getInitId (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getOpA (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getOpB (exprData data) /*@*/;

/*static*/ /*@observer@*/ lltok exprData_getOpTok (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getPairA (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getPairB (exprData data) /*@*/;

/*static*/ /*@exposed@*/ uentry exprData_getIterSname (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNodeList exprData_getIterAlist (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getIterBody (exprData data) /*@*/;

/*static*/ /*@exposed@*/ uentry exprData_getIterEname (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getFcn (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNodeList exprData_getArgs (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getTriplePred (exprData data) /*@*/;

/*static*/ /*@exposed@*/ uentry exprData_getIterCallIter (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNodeList
exprData_getIterCallArgs (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getTripleInit (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getTripleTrue (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getTripleTest (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getTripleFalse (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getTripleInc (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getFieldNode (exprData data) /*@*/;

/*static*/ /*@exposed@*/ cstring exprData_getFieldName (exprData data) /*@*/;

/*static*/ /*@observer@*/ lltok exprData_getUopTok (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getUopNode (exprData data) /*@*/;

/*static*/ /*@exposed@*/ exprNode exprData_getCastNode (exprData data) /*@*/;

/*static*/ /*@observer@*/ lltok exprData_getCastTok (exprData data) /*@*/;

/*static*/ /*@exposed@*/ qtype exprData_getCastType (exprData data) /*@*/;

/*static*/ /*@exposed@*/ cstring exprData_getLiteral (exprData data) /*@*/;

/*static*/ /*@exposed@*/ cstring exprData_getId (exprData data) /*@*/;

/*static*/ /*@observer@*/ lltok exprData_getTok (exprData data) /*@*/;

/*static*/ /*@exposed@*/ qtype exprData_getType (exprData data) /*@*/ ;

/*static*/ /*@exposed@*/ qtype exprData_getOffsetType (exprData data) /*@*/ ;

/*static*/ /*@exposed@*/ cstringList exprData_getOffsetName (exprData data) /*@*/ ;

/*static*/ /*@exposed@*/ exprNode exprData_getSingle (exprData data);

/*static*/ /*@only@*/ exprData 
exprData_makeOp (/*@keep@*/ exprNode a, /*@keep@*/ exprNode b, /*@keep@*/ lltok op);

/*static*/ /*@only@*/ exprData exprData_makeUop (/*@keep@*/ exprNode a, /*@keep@*/ lltok op);

/*static*/ /*@only@*/ exprData exprData_makeSingle (/*@only@*/ exprNode a);

/*static*/ /*@only@*/ exprData exprData_makeTok (/*@only@*/ lltok op);

/*static*/ /*@only@*/ exprData 
exprData_makeIter (/*@exposed@*/ uentry sname, /*@keep@*/ exprNodeList args,
		   /*@keep@*/ exprNode body, /*@exposed@*/ uentry ename);

/*static*/ /*@only@*/ exprData exprData_makeTriple (/*@keep@*/ exprNode pred, 
						/*@keep@*/ exprNode tbranch, 
						/*@keep@*/ exprNode fbranch);

/*static*/ /*@only@*/ exprData exprData_makeCall (/*@keep@*/ exprNode fcn,
					      /*@keep@*/ exprNodeList args);


/*static*/ /*@only@*/ exprData exprData_makeIterCall (/*@dependent@*/ uentry iter,
						  /*@keep@*/ exprNodeList args);

/*static*/ /*@only@*/ exprData exprData_makeField (/*@keep@*/ exprNode rec, 
					       /*@keep@*/ cstring field);

/*static*/ /*@only@*/ exprData exprData_makeOffsetof (/*@only@*/ qtype q,
						  /*@keep@*/ cstringList s);


/*static*/ /*@only@*/ exprData exprData_makeSizeofType (/*@only@*/ qtype q);

/*static*/ /*@only@*/ exprData 
  exprData_makeCast (/*@keep@*/ lltok tok, /*@keep@*/ exprNode e, /*@only@*/ qtype q);

/*static*/ /*@only@*/ exprData 
  exprData_makeInit (/*@keep@*/ idDecl t, /*@keep@*/ exprNode e);


/*static*/ /*@only@*/ exprData exprData_makeCond (/*@keep@*/ exprNode pred, 
					      /*@keep@*/ exprNode ifclause, 
					      /*@keep@*/ exprNode elseclause);

/*static*/ /*@only@*/ exprData exprData_makeFor (/*@keep@*/ exprNode init, 
					     /*@keep@*/ exprNode pred, 
					     /*@keep@*/ exprNode inc);


/*@=declundef*/








