/*
** Splint - annotation-assisted static program checker
** Copyright (C) 1994-2002 University of Virginia,
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
** For information on splint: info@splint.org
** To report a bug: splint-bug@splint.org
** For more information: http://www.splint.org
*/
/*
** cpperror.c
*/
/* Default error handlers for CPP Library.
   Copyright (C) 1986, 87, 89, 92, 93, 94, 1995 Free Software Foundation, Inc.
   Written by Per Bothner, 1994.
   Based on CCCP program by by Paul Rubin, June 1986
   Adapted to ANSI C, Richard Stallman, Jan 1987

This program is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

 In other words, you are welcome to use, share and improve this program.
 You are forbidden to forbid anyone else to use, share and improve
 what you give them.   Help stamp out software-hoarding!  */

/*@-macroconstdecl@*/ 
/*@-macrofcndecl@*/
/*@-evalorderuncon@*/
/*@+ptrnegate@*/
/*@-memchecks@*/
/*@+charintliteral@*/
/*@-infloopsuncon@*/
/*@-loopswitchbreak@*/
/*@-switchloopbreak@*/
/*@-whileblock@*/
/*@-forblock@*/
/*@-elseifcomplete@*/
/*@-abstract@*/
/*@-usedef@*/
/*@-retvalint@*/
/*@-macroparams@*/
/*@-readonlytrans@*/
/*@-boolops@*/
/*@-sizeoftype@*/
/*@-predboolint@*/
/*@-predboolptr@*/
/*@+boolint@*/
/*@+charint@*/
/*@+ignorequals@*/
/*@+ignoresigns@*/
/*@+matchanyintegral@*/
/*@-onlyunqglobaltrans@*/
/*@-macroconstdecl@*/

# include <stdlib.h>
# include <errno.h>
# include <stdio.h>

# define FATAL_EXIT_CODE EXIT_FAILURE

# include "splintMacros.nf"
# include "llbasic.h"
# include "cpplib.h"
# include "cpperror.h"

static void cppReader_printFileAndLine (cppReader *p_pfile);
static void cppReader_warningWithLine (cppReader *p_pfile, 
				       int p_line, int p_column, 
				       /*@only@*/ cstring p_msg);

/* Print the file names and line numbers of the #include
   commands which led to the current file.  */

void cppReader_printContainingFiles (cppReader *pfile)
{
  cppBuffer *ip;
  int first = 1;

  if (pfile == NULL) {
    /* Error processing command line. */
    return;
  }

  /* If stack of files hasn't changed since we last printed
     this info, don't repeat it.  */
  if (pfile->input_stack_listing_current)
    {
      return;
    }

  ip = cppReader_fileBuffer (pfile);

  /* Give up if we don't find a source file.  */
  if (ip == NULL)
    {
      return;
    }

  /* Find the other, outer source files.  */
  while ((ip = cppBuffer_prevBuffer (ip)), 
	 ip != cppReader_nullBuffer (pfile))
    {
      int line, col;
      cstring temps; 
      
      cppBuffer_lineAndColumn (ip, &line, &col);
      if (ip->fname != NULL)
	{
	  if (first)
	    {
	      first = 0;
	      fprintf (g_msgstream, "   In file included");
	    }
	  else
	    fprintf (g_msgstream, ",\n                ");
	}

      fprintf (g_msgstream, " from %s", 
	       cstring_toCharsSafe (temps = fileloc_unparseRaw (ip->nominal_fname, line)));
      
      cstring_free (temps);
    }
  
  if (!first)
    {
      fprintf (g_msgstream, "\n");
    }

  /* Record we have printed the status as of this time.  */
  pfile->input_stack_listing_current = 1;
}

static void
cppReader_fileLineForMessage (cstring filename, long line, long column)
{
  if (column > 0)
    {
      cstring temps;

      if (filename != NULL)
	{
	  fprintf (stderr, "%s: ",
		   cstring_toCharsSafe (temps = fileloc_unparseRawCol (filename, (int) line, (int) column)));
	}
      else 
	{
	  fprintf (stderr, "%s: ",
		   cstring_toCharsSafe (temps = fileloc_unparseRawCol (cstring_makeLiteralTemp ("<no file>"),
								       (int) line, (int) column)));
	}

      cstring_free (temps);
    }
  else
    {
      cstring temps;

      if (filename != NULL) 
	{
	  fprintf (stderr, "%s: ", 
		   cstring_toCharsSafe (temps = fileloc_unparseRaw (filename, (int) line)));
	  
	}
      else
	{
	  fprintf (stderr, "%s: ",
		   cstring_toCharsSafe (temps = fileloc_unparseRaw (cstring_makeLiteralTemp ("<no file>"),
								    (int) line)));
	}

      cstring_free (temps);
    }
}

/* IS_ERROR is 2 for "fatal" error, 1 for error, 0 for warning */

static void
cppReader_message (cppReader *pfile, int is_error, /*@only@*/ cstring msg)
{
  if (!is_error)
    {
      /* fprintf (stderr, "warning: "); */
    }
  else if (is_error == 2)
    {
      pfile->errors = cppReader_fatalErrorLimit;
    }
  else if (pfile->errors < cppReader_fatalErrorLimit)
    {
      pfile->errors++;
    }
  else
    {
      ;
    }

  fprintf (stderr, "%s", cstring_toCharsSafe (msg));
  fprintf (stderr, "\n");
}

/* Same as cppReader_error, except we consider the error to be "fatal",
   such as inconsistent options.  I.e. there is little point in continuing.
   (We do not exit, to support use of cpplib as a library.
   Instead, it is the caller's responsibility to check
   cpplib_fatalErrors.  */

void
cppReader_fatalError (cppReader *pfile, /*@only@*/ cstring str)
{
  fprintf (stderr, "preprocessor: ");
  cppReader_message (pfile, 2, str);
}

void
cppReader_pfatalWithName (cppReader *pfile, cstring name)
{
  cppReader_perrorWithName (pfile, name);
  exit (FATAL_EXIT_CODE);
}

/*@only@*/ fileloc
cppReader_getLoc (cppReader *pfile)
{
  cppBuffer *ip = cppReader_fileBuffer (pfile);

  if (ip != NULL)
    {
      int line, col;
      cstring fname = ip->nominal_fname;
      fileId fid = fileTable_lookup (context_fileTable (), fname);

      if (!fileId_isValid (fid))
	{
	  /* evans 2002-02-09
	  ** filename used in #line comment is new
	  */

	  fid = fileTable_addFile (context_fileTable (), fname);
	}

      cppBuffer_lineAndColumn (ip, &line, &col);
      
      return fileloc_create (fid, line, col);
    }
  else
    {
      return fileloc_createBuiltin ();
    }
}

void
cppReader_printFileAndLine (cppReader *pfile)
{
  cppBuffer *ip = cppReader_fileBuffer (pfile);

  if (ip != NULL)
    {
      int line, col;

      cppBuffer_lineAndColumn (ip, &line, &col);
      cppReader_fileLineForMessage (ip->nominal_fname,
				    line, pfile->show_column ? col : -1);
    }
  else
    {
      fprintf (stderr, "Command Line: ");
    }
}

void
cppReader_errorLit (cppReader *pfile, /*@observer@*/ cstring msg)
{
  cppReader_error (pfile, cstring_copy (msg));
}

void
cppReader_error (cppReader *pfile, /*@only@*/ cstring msg)
{
  prepareMessage ();
  cppReader_printContainingFiles (pfile);
  cppReader_printFileAndLine (pfile);
  cppReader_message (pfile, 1, msg);
  closeMessage ();
}

/* Print error message but don't count it.  */

void
cppReader_warningLit (cppReader *pfile, cstring msg)
{
  cppReader_warning (pfile, cstring_copy (msg));
}

void
cppReader_warning (cppReader *pfile, /*@only@*/ cstring msg)
{
  if (CPPOPTIONS (pfile)->warnings_are_errors)
    pfile->errors++;
  
  prepareMessage ();
  cppReader_printContainingFiles (pfile);
  cppReader_printFileAndLine (pfile);
  cppReader_message (pfile, 0, msg);
  closeMessage ();
}

/* Print an error message and maybe count it.  */

extern void
cppReader_pedwarnLit (cppReader *pfile, /*@observer@*/ cstring msg)
{
  cppReader_pedwarn (pfile, cstring_copy (msg));
}

extern void
cppReader_pedwarn (cppReader *pfile, /*@only@*/ cstring msg)
{
  if (CPPOPTIONS (pfile)->pedantic_errors)
    {
      cppReader_error (pfile, msg);
    }
  else
    {
      cppReader_warning (pfile, msg);
    }
}

void
cppReader_errorWithLine (cppReader *pfile, long line, long column, 
		     /*@only@*/ cstring msg)
{
  cppBuffer *ip = cppReader_fileBuffer (pfile);

  prepareMessage ();
  cppReader_printContainingFiles (pfile);

  if (ip != NULL)
    cppReader_fileLineForMessage (ip->nominal_fname, line, column);

  cppReader_message (pfile, 1, msg);
  closeMessage ();
}

void
cppReader_warningWithLine (cppReader *pfile, 
		       int line, int column, 
		       /*@only@*/ cstring msg)
{
  cppBuffer *ip;

  if (CPPOPTIONS (pfile)->warnings_are_errors)
    pfile->errors++;

  prepareMessage ();

  cppReader_printContainingFiles (pfile);

  ip = cppReader_fileBuffer (pfile);

  if (ip != NULL)
    {
      cppReader_fileLineForMessage (ip->nominal_fname, line, column);
    }

  cppReader_message (pfile, 0, msg);
  closeMessage ();
}

void
cppReader_pedwarnWithLine (cppReader *pfile, int line, int column,
		       /*@only@*/ cstring msg)
{
  if (CPPOPTIONS (pfile)->pedantic_errors)
    {
      cppReader_errorWithLine (pfile, column, line, msg);
    }
  else
    {
      cppReader_warningWithLine (pfile, line, column, msg);
    }
}

void cppReader_perrorWithName (cppReader *pfile, cstring name)
{
  cppReader_message (pfile, 1, 
		     message ("Preprocessing error for %s: %s",
			      name, lldecodeerror (errno)));
}








