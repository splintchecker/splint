
/*this is a fake function so that compilers will not generate warning about
functions that are defined but not used

I should probablymake an exprData api instead but this a simpler and it
restricts access to exprData
*/

/*@ignore@*/

static void fakeQuite1 (int x)
{
void *f;

x = 1;

x = x +6;

llfatalbug ("fake function fakeQuite1 called");
f = fakeQuite1;

f = exprData_freeShallow;
f = exprData_free;
f =  exprData_getInitNode;
f =  exprData_getInitId;
f =  exprData_getIterSname;
f =  exprData_getIterAlist;
f =  exprData_getIterBody;
f =  exprData_getIterEname;
f =  exprData_getIterCallIter;
f =  exprData_getIterCallArgs;
f =  exprData_getCastNode;
f =  exprData_getCastTok;
f =  exprData_getCastType;
f =  exprData_getId;
f =  exprData_getTok;
f =  exprData_getOffsetType;
f =  exprData_getOffsetName;
f =  exprData_makeOp;
f =  exprData_makeUop;
f =  exprData_makeSingle;
f =  exprData_makeTok;
f =  exprData_makeIter;
f =  exprData_makeCall;
f =  exprData_makeIterCall;
f =  exprData_makeField;
f =  exprData_makeOffsetof;
f =  exprData_makeSizeofType;
f =  exprData_makeCast;
f =  exprData_makeInit;
f =  exprData_makeCond;
f =  exprData_makeFor;
f =  exprData_getPairA;
f =  exprData_getPairB;
f =  exprData_getFcn;
f =  exprData_getArgs;
f =  exprData_getTriplePred;
f =  exprData_getTripleInit;
f =  exprData_getTripleTrue;
f =  exprData_getTripleTest;
f =  exprData_getTripleFalse;
f =  exprData_getTripleInc;
f =  exprData_getFieldNode;
f =  exprData_getFieldName;
f =  exprData_getUopTok;
f =  exprData_getLiteral;
f =  exprData_getType;
}
/*@end@*/
