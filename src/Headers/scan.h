/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** scan.h
*/

/*@-redecl@*/ /*@-type@*/ /*@-incondefs@*/
extern unsigned int lsllex (YYSTYPE *p_lval);
/*@=redecl@*/ /*@=type@*/ /*@=incondefs@*/

extern ltoken LSLScanNextToken(void) /*@modifies internalState@*/ ;	       
extern void LSLScanFreshToken(ltoken p_tok) /*@modifies internalState@*/ ;
extern /*@exposed@*/ tsource *LSLScanSource (void) /*@*/ ;	   
extern void LSLScanInit (void) /*@modifies internalState@*/ ;
extern void LSLScanReset (tsource *p_s) /*@modifies internalState@*/ ;
extern void LSLScanCleanup (void) /*@modifies internalState@*/ ;






