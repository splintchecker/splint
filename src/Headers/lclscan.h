/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/* 
** lclscan.h
*/

# ifndef LCLSCAN_H
# define LCLSCAN_H

extern ltokenCode yllex (void) /*@modifies internalState@*/ ;

extern bool g_inTypeDef;

extern /*@dependent@*/ /*@exposed@*/ ltoken LCLScanNextToken(void) 
   /*@modifies internalState@*/ ;
extern void LCLScanFreshToken(/*@only@*/ ltoken p_tok) 
   /*@modifies internalState@*/ ;

extern /*@exposed@*/ tsource *LCLScanSource(void) /*@*/ ;
extern void LCLScanInit(void) /*@modifies internalState@*/ ;
extern void LCLScanReset(tsource *p_s) /*@modifies internalState@*/ ;
extern void LCLScanCleanup(void) /*@modifies internalState@*/ ;

# else
# error "Multiple include"
# endif


