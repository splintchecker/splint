/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
**
*/
# ifndef LLMAIN_H
# define LLMAIN_H

extern int main (int p_argc, char *p_argv[])
# ifdef NOLCL
  /*@globals killed undef g_currentloc,
	     killed undef yyin,
                    undef g_msgstream,
   @*/
  /*@modifies g_currentloc, fileSystem, internalState, yyin; 
  @*/
# else
  /*@globals killed undef g_currentloc,
	     killed       g_localSpecPath,  
	     killed undef g_currentSpec,
	     killed undef g_currentSpecName,
	     killed undef g_currentloc,
	     killed undef yyin,
                    undef g_msgstream;
   @*/
  /*@modifies g_currentloc,
              g_localSpecPath, g_currentSpec, g_currentSpecName,
	      yyin, internalState, fileSystem; 
  @*/ 
# endif
  ;

extern /*@exits@*/ void llexit (int p_status);      
extern void showHerald (void);

/*@-redecl@*/ /*@-incondefs@*/
extern int yyparse (void);
extern void yyrestart (/*@dependent@*/ FILE *);

# ifndef NOLCL
extern int ylparse (void);
extern int lslparse (void);
# endif

extern /*:open:*/ /*@dependent@*/ FILE *yyin;
/*@=incondefs@*/ /*@=redecl@*/


# endif


