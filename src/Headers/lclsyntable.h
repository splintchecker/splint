/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** syntable.h
*/

extern void	    LCLAddSyn(lsymbol, lsymbol);
extern /*@exposed@*/ ltoken LCLGetTokenForSyn(lsymbol);
extern bool	    LCLIsSyn(lsymbol);

extern void	    LCLSynTableInit(void);
extern void	    LCLSynTableReset(void);
extern void	    LCLSynTableCleanup(void);
