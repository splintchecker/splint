/*
** LCLint - annotation-assisted static program checker
** Copyright (C) 1994-2001 University of Virginia,
**         Massachusetts Institute of Technology
**
** This program is free software; you can redistribute it and/or modify it
** under the terms of the GNU General Public License as published by the
** Free Software Foundation; either version 2 of the License, or (at your
** option) any later version.
** 
** This program is distributed in the hope that it will be useful, but
** WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** General Public License for more details.
** 
** The GNU General Public License is available from http://www.gnu.org/ or
** the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
** MA 02111-1307, USA.
**
** For information on lclint: lclint-request@cs.virginia.edu
** To report a bug: lclint-bug@cs.virginia.edu
** For more information: http://lclint.cs.virginia.edu
*/
/*
** globals.c
*/

# include "lclintMacros.nf"
# include "basic.h"

fileloc g_currentloc;

# ifndef NOLCL
symtable g_symtab;
/*@only@*/ lsymbolSet g_currentImports = lsymbolSet_undefined;
# endif

cstring g_codeFile = cstring_undefined;
int g_codeLine = 0;

cstring g_prevCodeFile = cstring_undefined;
int g_prevCodeLine = 0;
/*@open@*/ FILE *g_msgstream;

/*
** These were in llmain.c.  Most should not be globals...
*/

/*@observer@*/ char *g_localSpecPath = ".";

# ifndef NOLCL
/*@only@*/ cstring g_currentSpec;
/*@only@*/ char *g_currentSpecName;
# endif

void printCodePoint (void)
{
  static bool incode = FALSE;

  if (incode) {
    fprintf (stderr, "[[[ in code! ]]]\n");
  }

  incode = TRUE;

  if (cstring_isDefined (g_codeFile))
    {
      cstring temps = fileloc_unparseRaw (g_codeFile, g_codeLine);

      fprintf (stderr, "*** Last code point: %s\n", 
	       cstring_toCharsSafe (temps));

      cstring_free (temps);

      if (cstring_isDefined (g_prevCodeFile))
	{
	  temps = fileloc_unparseRaw (g_prevCodeFile, g_prevCodeLine);
	  fprintf (stderr, "*** Previous code point: %s\n", 
		   cstring_toCharsSafe (temps));

	  cstring_free (temps);
	}
    }

  incode = FALSE;
}

# ifdef WIN32
int yywrap (void)
{
  return 1;
}
# endif



