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
** lcllib.c
**
** routines for loading and creating library files
**
** this is a brute-force implementation, a more efficient
** representation should be designed.
**
*/

# include "lclintMacros.nf"
# include "llbasic.h"

# include "osd.h"

# ifndef NOLCL
# include "gram.h"

# include "lclscan.h"
# endif


# include "herald.h"
# include "lcllib.h"
# include "llmain.h"
# include "portab.h"

/*@-incondefs@*/ /*@-redecl@*/
extern /*@open@*/ /*@dependent@*/ FILE *yyin;
/*@=incondefs@*/ /*@=redecl@*/

/*@constant int NUMLIBS; @*/
# define NUMLIBS 17

/*@constant int NUMPOSIXLIBS; @*/
# define NUMPOSIXLIBS 18

static ob_mstring posixlibs[NUMPOSIXLIBS] = 
{
  "dirent",
  "fcntl",
  "grp",
  "pwd",
  "regex",
  "sys/stat",
  "sys/times",
  "sys/types", 
  "netdb", /* unix */
  "netinet/in", /* unix */
  "sys/resource", /* unix */
  "sys/socket", /* not posix */
  "sys/syslog", /* not posix */
  "sys/utsname",
  "sys/wait",
  "termios",
  "unistd",
  "utime"
} ;

static ob_mstring stdlibs[NUMLIBS] =
{
  "assert", 
  "ctype",
  "errno",
  "float", 
  "limits",
  "locale",
  "math", 
  "setjmp",
  "signal",
  "stdarg",
  "stddef",
  "stdio",
  "stdlib",
  "strings", 
  "string",
  "time",
  "wchar"
} ;

static bool loadLCDFile (FILE * p_f, cstring p_name);

bool
lcllib_isSkipHeader (cstring sname)
{
  int i;
  bool posixlib = FALSE;
  char *libname;
  char *matchname;
  cstring xname;

  llassert (cstring_isDefined (sname));
  xname = fileLib_withoutExtension (sname, cstring_makeLiteralTemp (".h"));

  DPRINTF (("Include? %s", sname));

  /*@access cstring@*/
  llassert (cstring_isDefined (xname));
  libname = strrchr (xname, CONNECTCHAR);
  matchname = libname;

  if (libname == NULL) 
    {
      libname = xname;
    }
  else
    {
      libname++;
      /*@-branchstate@*/
    }
  /*@=branchstate@*/

  if (mstring_equal (libname, "varargs"))
    {
      fileloc tmp = fileloc_makePreprocPrevious (g_currentloc);
      
      voptgenerror 
	(FLG_USEVARARGS,
	 message ("Include file <%s> is inconsistent with "
		  "ANSI library (should use <stdarg.h>)",
		  cstring_fromChars (libname)),
	 tmp);
      
      fileloc_free (tmp);
      sfree (xname);
      return TRUE;
    }

  if (context_getFlag (FLG_SKIPANSIHEADERS)
      && context_usingAnsiLibrary ())
    {
      
      for (i = 0; i < NUMLIBS; i++)
	{
	  if (mstring_equal (libname, stdlibs[i]))
	    {
	      sfree (xname);
	      return TRUE;
	    }
	}
    }

  for (i = 0; i < NUMPOSIXLIBS; i++)
    {
      if (strchr (posixlibs[i], CONNECTCHAR) != NULL)
	{
	  char *ptr;
	  
	  if ((ptr = strstr (xname, posixlibs[i])) != NULL) 
	    {
	      if (ptr[strlen (posixlibs[i])] == '\0')
		{
		  posixlib = TRUE;
		  matchname = ptr;
		  DPRINTF (("Found match: %s", matchname));
		  break;
		}
	      else
		{
		  ; /* no match */
		}
	    }
	}
      else
	{
	  if (mstring_equal (libname, posixlibs[i]))
	    {
	      posixlib = TRUE;
	      matchname = libname;
	      break;
	    }
	  /*@-branchstate@*/ 
	}
    } /*@=branchstate@*/
  
  if (posixlib)
    {
      if (context_usingPosixLibrary ())
	{
	  if (context_getFlag (FLG_SKIPPOSIXHEADERS))
	    {
	      DPRINTF (("Skipping: %s", xname));
	      sfree (xname);
	      return TRUE;
	    }
	}
      else
	{	
	  fileloc tmp = fileloc_makePreprocPrevious (g_currentloc);	      
	  
	  voptgenerror 
	    (FLG_WARNPOSIX,
	     message ("Include file <%s> matches the name of a "
		      "POSIX library, but the POSIX library is "
		      "not being used.  Consider using +posixlib "
		      "or +posixstrictlib to select the POSIX "
		      "library, or -warnposix "
		      "to suppress this message.",
		      cstring_fromChars (matchname)),
	     tmp);
	  
	  fileloc_free (tmp);
	}
    }

  cstring_free (xname);
  /*@noaccess cstring@*/
  return FALSE;
}

static void printDot (void)
{
  if (context_getFlag (FLG_SHOWSCAN)) 
    {
      (void) fflush (g_msgstream);
      fprintf (stderr, "."); 
      (void) fflush (stderr);
    }
}

void
dumpState (cstring cfname)
{
  FILE *f;
  cstring fname = fileLib_addExtension (cfname, cstring_makeLiteralTemp (DUMP_SUFFIX));
  
  f = fopen (cstring_toCharsSafe (fname), "w");

  if (context_getFlag (FLG_SHOWSCAN))
    {
      fprintf (stderr, "< Dumping to %s ", cstring_toCharsSafe (fname)); 
    }
  
  if (f == NULL)
    {
      lldiagmsg (message ("Cannot open dump file for writing: %s", fname));
    }
  else
    {
      /*
      ** sequence is convulted --- must call usymtab_prepareDump before
      **    dumping ctype table to convert type uid's
      */

      printDot ();

      /*
      DPRINTF (("Before prepare dump:"));
      ctype_printTable ();
      DPRINTF (("Preparing dump..."));
      */

      usymtab_prepareDump ();

      /*
      ** Be careful, these lines must match loadLCDFile checking.
      */

      fprintf (f, ";;LCLint Dump: %s\n", cstring_toCharsSafe (fname));
      fprintf (f, ";;%s\n", LCL_VERSION);
      fprintf (f, ";;lib:%d\n", (int) context_getLibrary ());
      fprintf (f, ";;ctTable\n");
      
      DPRINTF (("Dumping types..."));
      printDot ();
      ctype_dumpTable (f);
      printDot ();
      
      DPRINTF (("Dumping type sets..."));
      fprintf (f, ";;tistable\n");
      typeIdSet_dumpTable (f);
      printDot ();
      
      DPRINTF (("Dumping usymtab..."));
      fprintf (f, ";;symTable\n");
      usymtab_dump (f);
      printDot ();

      DPRINTF (("Dumping modules..."));
      fprintf (f, ";; Modules access\n");
      context_dumpModuleAccess (f);
      fprintf (f, ";;End\n");
      check (fclose (f) == 0);
    }

  if (context_getFlag (FLG_SHOWSCAN))
    {
      fprintf (g_msgstream, " >\n");
    }

  cstring_free (fname);
}

bool
loadStandardState ()
{
  cstring fpath;
  FILE *stdlib;
  bool result;
  cstring libname = fileLib_addExtension (context_selectedLibrary (), 
					  cstring_makeLiteralTemp (DUMP_SUFFIX));
  
  if (osd_findOnLarchPath (libname, &fpath) != OSD_FILEFOUND)
    {
      lldiagmsg (message ("Cannot find %sstandard library: %s", 
			  cstring_makeLiteralTemp 
			  (context_getFlag (FLG_STRICTLIB) ? "strict " 
			   : (context_getFlag (FLG_UNIXLIB) ? "unix " : "")),
			  libname));
      lldiagmsg (cstring_makeLiteral ("     Check LARCH_PATH environment variable."));
      result = FALSE;
    }
  else
    {
      stdlib = fopen (cstring_toCharsSafe (fpath), "r");

      if (stdlib == NULL)
	{
	  lldiagmsg (message ("Cannot read standard library: %s",
			      fpath));
	  lldiagmsg (cstring_makeLiteral ("     Check LARCH_PATH environment variable."));

	  result = FALSE;
	}
      else
	{
	  if (context_getFlag (FLG_WHICHLIB))
	    {
	      char *t = mstring_create (MAX_NAME_LENGTH);
	      char *ot = t;

	      if ((t = reader_readLine (stdlib, t, MAX_NAME_LENGTH)) == NULL)
		{
		  llfatalerror (cstring_makeLiteral ("Standard library format invalid"));
		}

	      if ((t = reader_readLine (stdlib, t, MAX_NAME_LENGTH)) != NULL)
		{
		  if (*t == ';' && *(t + 1) == ';') 
		    {
		      t += 2;
		    }
		}

	      if (t == NULL)
		{
		  lldiagmsg (message ("Standard library: %s <cannot read creation information>", 
				      fpath));
		}
	      else
		{
		  char *tt;

		  tt = strrchr (t, '\n');
		  if (tt != NULL)
		    *tt = '\0';

		  lldiagmsg (message ("Standard library: %s", fpath));
		  lldiagmsg (message ("   (created using %s)", cstring_fromChars (t)));
		}

	      sfree (ot);
	      
	      check (fclose (stdlib) == 0);
	      stdlib = fopen (cstring_toCharsSafe (fpath), "r");
	    }

	  llassert (stdlib != NULL);

	  fileloc_reallyFree (g_currentloc);
	  g_currentloc = fileloc_createLib (libname);

	  DPRINTF (("Loading: %s", fpath));

	  if (context_getDebug (FLG_SHOWSCAN))
	    {
	      fprintf (g_msgstream, "< loading standard library %s ", 
		       cstring_toCharsSafe (fpath));
	      result = loadLCDFile (stdlib, fpath);
	      fprintf (g_msgstream, " >\n");
	    }
	  else
	    {
	      result = loadLCDFile (stdlib, fpath);
	    }

	  check (fclose (stdlib) == 0);
	}
    }

  cstring_free (libname);
  return result;
}

/*@constant int BUFLEN;@*/
# define BUFLEN 128

static bool
loadLCDFile (FILE *f, cstring name)
{
  char buf[BUFLEN];
  
  /*
  ** Check version.  Should be >= LCLINT_LIBVERSION
  */

  if (reader_readLine (f, buf, BUFLEN) == NULL
      || !mstring_equalPrefix (buf, ";;LCLint Dump:"))
    {
      loadllmsg (message ("Load library %s is not in LCLint library format.  Attempting "
			  "to continue without library.", name));
      return FALSE;
    }
  
  if (reader_readLine (f, buf, BUFLEN) != NULL)
    {
      if (!mstring_equalPrefix (buf, ";;"))
	{
	  loadllmsg (message ("Load library %s is not in LCLint library format.  Attempting "
			      "to continue without library.", name));
	  return FALSE;
	}
      else if (mstring_equalPrefix (buf, ";;ctTable"))
	{
	  loadllmsg (message ("Load library %s is in obsolete LCLint library format.  Attempting "
			      "to continue anyway, but results may be incorrect.  Rebuild "
			      "the library with this version of lclint.", 
			      name));
	}
      else 
	{
	  float version = 0.0;

	  if (sscanf (buf, ";;LCLint %f", &version) != 1)
	    {
	      loadllmsg (message ("Load library %s is not in LCLint library format (missing version "
				  "number).  Attempting "
				  "to continue without library.", name));
	      return FALSE;
	    }
	  else
	    {
	      if ((LCLINT_LIBVERSION - version) >= FLT_EPSILON)
		{
		  cstring vname;
		  char *nl = strchr (buf, '\n');

		  *nl = '\0';

		  vname = cstring_fromChars (buf + 9);

		  loadllmsg (message ("Load library %s is in obsolete LCLint library "
				      "format (version %s).  Attempting "
				      "to continue anyway, but results may be incorrect.  Rebuild "
				      "the library with this version of lclint.", 
				      name, vname));
		}
	      else
		{
		  if (reader_readLine (f, buf, BUFLEN) == NULL)
		    {
		      loadllmsg (message ("Load library %s is not in LCLint library "
					  "format (missing library code). Attempting "
					  "to continue without library.", name));
		      return FALSE;
		    }
		  else 
		    {
		      int lib;
		      
		      if (sscanf (buf, ";;lib:%d", &lib) != 1)
			{
			  loadllmsg (message ("Load library %s is not in LCLint library "
					      "format (missing library code). Attempting "
					      "to continue without library.", name));
			  return FALSE;
			}
		      else
			{
			  flagcode code = (flagcode) lib;

			  if (flagcode_isLibraryFlag (code))
			    {
			      if (context_doMerge ()) 
				{
				  context_setLibrary (code);
				}
			    }
			  else
			    {
			      loadllmsg (message ("Load library %s has invalid library code (%s).  "
						  "Attempting to continue without library.",
						  name,
						  flagcode_unparse (code)));
			      
			      return FALSE;
			    }
			}
		    }
		}
	    }
	}
    }
  else
    {
      loadllmsg (message ("Load library %s is not in LCLint library format (missing lines).  "
			  "Attempting to continue without library.", name));
      return FALSE;
    }
  
  ctype_loadTable (f);
  printDot ();
  
  typeIdSet_loadTable (f);
  printDot ();
  
  usymtab_load (f);
  printDot ();
  
  context_loadModuleAccess (f);
  printDot ();
  
  return TRUE;
}

/*
** load state from file created by dumpState
*/

void
loadState (cstring cfname)
{
  FILE *f;
  cstring fname = fileLib_addExtension (cfname, cstring_makeLiteralTemp (DUMP_SUFFIX));

  f = fopen (cstring_toCharsSafe (fname), "r");

  if (f == NULL)
    {
      if (context_getDebug (FLG_SHOWSCAN))
	fprintf (g_msgstream, " >\n");

      llfatalerror (message ("Cannot open dump file for loading: %s", 
			     fname));
    }
  else
    {
      fileloc_reallyFree (g_currentloc);
      g_currentloc = fileloc_createLib (cfname);

      if (!loadLCDFile (f, cfname)) 
	{
	  if (!loadStandardState ()) 
	    {
	      ctype_initTable ();
	    }
	}
      
      check (fclose (f) == 0);
    }

  /* usymtab_printAll (); */
  cstring_free (fname);
}

