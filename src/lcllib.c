/*
** LCLint - annotation-assisted static program checker
** Copyright (C) 1994-2000 University of Virginia,
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
extern /*@dependent@*/ FILE *yyin;
/*@=incondefs@*/ /*@=redecl@*/

/*@constant int NUMLIBS; @*/
# define NUMLIBS 17

/*@constant int NUMPOSIXLIBS; @*/
# define NUMPOSIXLIBS 12

static ob_mstring posixlibs[NUMPOSIXLIBS] = 
{
  "sys/stat",
  "sys/types",
  "dirent",
  "fcntl",
  "grp",
  "pwd",
  "sys/times",
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

static bool loadStateFile (FILE * p_f, cstring p_name);

bool
lcllib_isSkipHeader (cstring sname)
{
  int i;
  bool posixlib = FALSE;
  char *libname;
  char *name = cstring_toCharsSafe (sname);
  char *matchname;

  llassert (cstring_isDefined (sname));
  name = removeExtension (name, ".h");

  libname = strrchr (name, CONNECTCHAR);
  matchname = libname;

  if (libname == NULL) 
    {
      libname = name;
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
      sfree (name);
      return TRUE;
    }

  if (context_getFlag (FLG_SKIPANSIHEADERS)
      && context_usingAnsiLibrary ())
    {
      
      for (i = 0; i < NUMLIBS; i++)
	{
	  if (mstring_equal (libname, stdlibs[i]))
	    {
	      sfree (name);
	      return TRUE;
	    }
	}
    }

  for (i = 0; i < NUMPOSIXLIBS; i++)
    {
      if (strchr (posixlibs[i], CONNECTCHAR) != NULL)
	{
	  char *ptr;
	  
	  if ((ptr = strstr (name, posixlibs[i])) != NULL) 
	    {
	      if (ptr[strlen (posixlibs[i])] == '\0')
		{
		  posixlib = TRUE;
		  matchname = ptr;
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
	      sfree (name);
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

  sfree (name);
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
  char *fname = cstring_toCharsSafe (cfname);
  
  fname = addExtension (fname, DUMP_SUFFIX);
  
  f = fopen (fname, "w");

  if (context_getFlag (FLG_SHOWSCAN))
    {
      fprintf (stderr, "< Dumping to %s ", fname); 
    }
  
  if (f == NULL)
    {
      llgloberror (message ("Cannot open dump file for writing: %s", cfname));
    }
  else
    {
      /*
      ** sequence is convulted --- must call usymtab_prepareDump before
      **    dumping ctype table to convert type uid's
      */

      printDot ();

      usymtab_prepareDump ();

      /*
      ** Be careful, these lines must match loadStateFile checking.
      */

      fprintf (f, ";;LCLint Dump: %s\n", fname);
      fprintf (f, ";;%s\n", LCL_VERSION);
      fprintf (f, ";;lib:%d\n", (int) context_getLibrary ());
      fprintf (f, ";;ctTable\n");

      printDot ();
            ctype_dumpTable (f);
      printDot ();

      fprintf (f, ";;tistable\n");
      typeIdSet_dumpTable (f);
      printDot ();

            fprintf (f, ";;symTable\n");
      usymtab_dump (f);
      printDot ();

      fprintf (f, ";; Modules access\n");
      context_dumpModuleAccess (f);
      fprintf (f, ";;End\n");
      check (fclose (f) == 0);
    }

  if (context_getFlag (FLG_SHOWSCAN))
    {
      fprintf (g_msgstream, " >\n");
    }

  sfree (fname);
}

bool
loadStandardState ()
{
  char *fpath;
  FILE *stdlib;
  bool result;
  char *libname = addExtension (context_selectedLibrary (), DUMP_SUFFIX);
  
  
  if (osd_findOnLarchPath (libname, &fpath) != OSD_FILEFOUND)
    {
      lldiagmsg (message ("Cannot find %sstandard library: %s", 
			  cstring_makeLiteralTemp 
			  (context_getFlag (FLG_STRICTLIB) ? "strict " 
			   : (context_getFlag (FLG_UNIXLIB) ? "unix " : "")),
			  cstring_makeLiteralTemp (libname)));
      lldiagmsg (cstring_makeLiteral ("     Check LARCH_PATH environment variable."));
      result = FALSE;
    }
  else
    {
      stdlib = fopen (fpath, "r");

      if (stdlib == NULL)
	{
	  lldiagmsg (message ("Cannot read standard library: %s",
			  cstring_fromChars (fpath)));
	  lldiagmsg (cstring_makeLiteral ("     Check LARCH_PATH environment variable."));

	  result = FALSE;
	}
      else
	{
	  if (context_getFlag (FLG_WHICHLIB))
	    {
	      char *t = mstring_create (MAX_NAME_LENGTH);
	      char *ot = t;

	      if (fgets (t, MAX_NAME_LENGTH, stdlib) == NULL)
		{
		  llfatalerror (cstring_makeLiteral ("Standard library format invalid"));
		}

	      if (fgets (t, MAX_NAME_LENGTH, stdlib) != NULL)
		{
		  if (*t == ';' && *(t + 1) == ';') 
		    {
		      t += 2;
		    }
		}

	      if (t == NULL)
		{
		  lldiagmsg (message ("Standard library: %s <cannot read creation information>", 
				  cstring_fromChars (fpath)));
		}
	      else
		{
		  char *tt;

		  tt = strrchr (t, '\n');
		  if (tt != NULL)
		    *tt = '\0';

		  lldiagmsg (message ("Standard library: %s", cstring_fromChars (fpath)));
		  lldiagmsg (message ("   (created using %s)", cstring_fromChars (t)));
		}

	      sfree (ot);
	      
	      check (fclose (stdlib) == 0);
	      stdlib = fopen (fpath, "r");
	    }

	  llassert (stdlib != NULL);

	  fileloc_reallyFree (g_currentloc);
	  g_currentloc = fileloc_createLib (cstring_makeLiteralTemp (libname));

	  if (context_getDebug (FLG_SHOWSCAN))
	    {
	      context_hideShowscan ();
	      result = loadStateFile (stdlib, cstring_fromChars (fpath));
	      context_unhideShowscan ();
	    }
	  else
	    {
	      result = loadStateFile (stdlib, cstring_fromChars (fpath));
	    }

	  check (fclose (stdlib) == 0);
	}
    }

  sfree (libname);
  return result;
}

/*@constant int BUFLEN;@*/
# define BUFLEN 128

static bool
loadStateFile (FILE *f, cstring name)
{
  char buf[BUFLEN];
  
  /*
  ** Check version.  Should be >= LCL_MIN_VERSION
  */

  if ((fgets (buf, BUFLEN, f) == NULL)
      || !mstring_equalPrefix (buf, ";;LCLint Dump:"))
    {
      loadllmsg (message ("Load library %s is not in LCLint library format.  Attempting "
		      "to continue without library.", name));
      return FALSE;
    }
  
  if (fgets (buf, BUFLEN, f) != NULL)
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
	      if ((LCL_MIN_VERSION - version) >= FLT_EPSILON)
		{
		  cstring vname;
		  char *nl = strchr (buf, '\n');

		  /*drl7x this is evans is code I think
		    I'll need is find out if code is safe or if I
		    broke it somehow... */
		  /*@i223*/	  *nl = '\0';

		  vname = cstring_fromChars (buf + 9);

		  loadllmsg (message ("Load library %s is in obsolete LCLint library "
				      "format (version %s).  Attempting "
				      "to continue anyway, but results may be incorrect.  Rebuild "
				      "the library with this version of lclint.", 
				      name, vname));
		}
	      else
		{
		  if ((fgets (buf, BUFLEN, f) == NULL))
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
			      loadllmsg (message ("Load library %s has invalid library code.  "
						  "Attempting to continue without library.",
						  name));
			      
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
  char *fname = cstring_toCharsSafe (cfname);
  cstring ofname = cstring_copy (cfname);

  fname = addExtension (fname, DUMP_SUFFIX);

  f = fopen (fname, "r");

  if (f == NULL)
    {
      if (context_getDebug (FLG_SHOWSCAN))
	fprintf (g_msgstream, " >\n");

      llfatalerror (message ("Cannot open dump file for loading: %s", cfname));
    }
  else
    {
      fileloc_reallyFree (g_currentloc);
      g_currentloc = fileloc_createLib (ofname);

      if (!loadStateFile (f, ofname)) 
	{
	  if (!loadStandardState ()) 
	    {
	      ctype_initTable ();
	    }
	}
      
      check (fclose (f) == 0);
    }

  cstring_free (ofname);
  sfree (fname);
}

