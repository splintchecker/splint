/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
**
*/
/*
** cscanner.h
*/

/*@-declundef@*/ /* Don't always check cscanner.c */
extern /*@observer@*/ cstring cscanner_observeLastIdentifier (void) ;
extern void cscanner_expectingMetaStateName (void) /*@modifies internalState@*/ ;
extern void cscanner_clearExpectingMetaStateName (void) /*@modifies internalState@*/ ;
extern void cscanner_swallowMacro (void) /*@modifies internalState, fileSystem@*/ ;

/*
** These are all exported by bison, but not declared:
*/

# ifdef S_SPLINT_S

/*@-namechecks@*/
typedef struct yy_buffer_state *YY_BUFFER_STATE;

extern /*@unused@*/ void yy_switch_to_buffer (YY_BUFFER_STATE);
extern /*@unused@*/ void yy_load_buffer_state (void);
extern /*@unused@*/ YY_BUFFER_STATE yy_create_buffer (FILE *, int);
extern /*@unused@*/ void yy_delete_buffer (YY_BUFFER_STATE);
extern /*@unused@*/ void yy_init_buffer (YY_BUFFER_STATE, FILE *);
extern /*@unused@*/ void yy_flush_buffer (YY_BUFFER_STATE);

extern /*@unused@*/ YY_BUFFER_STATE yy_scan_buffer (char *, size_t);
extern /*@unused@*/ YY_BUFFER_STATE yy_scan_string (const char *);
extern /*@unused@*/ YY_BUFFER_STATE yy_scan_bytes (const char *, int);

extern /*@unused@*/ char *yytext;
extern /*@unused@*/ void yyerror (char *);
extern /*@unused@*/ int	yychar;	
extern /*@unused@*/ int yynerrs;
/*@=namechecks@*/
/*@=declundef@*/

# endif
