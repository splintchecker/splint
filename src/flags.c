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
** For information on lclint: lclint-request@cs.virginia.edu
** To report a bug: lclint-bug@cs.virginia.edu
** For more information: http://www.splint.org
*/
/*
** flags.c
*/

# include "lclintMacros.nf"
# include "basic.h"
# include "portab.h"

/*
** from the CC man page:
**
**  -Idir          Search for #include files whose names do not begin with a
**                    slash (/) in the following order: (1) in the directory of
**                    the dir argument, (2) in the directories specified by -I
**                    options, (3) in the standard directory (/usr/include).
*/

/* needed for string literals literals */

typedef struct { 
  flagkind kind;
  /*@null@*/ /*@observer@*/ char *name;
  /*@null@*/ /*@observer@*/ char *describe;
} flagcatinfo;

static flagcatinfo categories[] =
{
  { FK_ABSTRACT, "abstract", "abstraction violations, representation access" } ,
  { FK_ALIAS, "aliasing", "unexpected or dangerous aliasing" } ,
  { FK_USE, "alluse", "all declarations are used" } ,
  { FK_ANSI, "ansi", "violations of constraints imposed by ANSI/ISO standard" } ,
  { FK_ARRAY, "arrays", "special checking involving arrays" } ,
  { FK_BOOL, "booleans", "checking and naming of boolean types" } ,
  { FK_COMMENTS, "comments", "interpretation of semantic comments" } ,
  { FK_COMPLETE, "complete", "completely defined, used, or specified system" } ,
  { FK_CONTROL, "controlflow", "suspicious control structures" } ,
  { FK_DEBUG, "debug", "flags for debugging lclint" } ,
  { FK_DECL, "declarations", "consistency of declarations" } ,
  { FK_DEF, "definition", "undefined storage errors" } ,
  { FK_DIRECT, "directories", "set directores" } ,
  { FK_DISPLAY, "display", "control what is displayed" } ,
  { FK_EFFECT, "effect", "statements with no effects" } ,
  { FK_ERRORS, "errors", "control expected errors, summary reporting" } ,
  { FK_EXPORT, "export", "control what may be exported" } ,
  { FK_EXPOSURE, "exposure", "representation exposure" } ,
  { FK_FILES, "files", "control system files" } ,
  { FK_FORMAT, "format", "control format of warning messages" } ,
  { FK_GLOBALS, "globals", "use of global and file static variables" },
  { FK_HEADERS, "headers", "control inclusion and generation of header files" },
  { FK_HELP, "help", "on-line help" },
  { FK_IMPLICIT, "implicit", "control implicit annotations and interpretations" } ,
  { FK_INIT, "initializations", "initialization files" } ,
  { FK_ITER, "iterators", "checking iterator definitions and uses" } ,
  { FK_LEAK, "leaks", "memory leaks" } ,
  { FK_LIBS, "libraries", "loading and dumping of user and standard libraries" } ,
  { FK_LIMITS, "limits", "violations of set limits" } ,
  { FK_MACROS, "macros", "expansion, definition and use of macros" },
  { FK_MEMORY, "memory", "memory management" } ,
  { FK_MODIFIES, "modification", "modification errors" } ,
  { FK_NAMES, "names", "naming conventions and limits" } ,
  { FK_NULL, "null", "misuses of null pointers" } ,
  { FK_NUMBERS, "numbers", "control type-checking of numeric types" } ,
  { FK_OPS, "operations", "checking of primitive operations" } ,
  { FK_PARAMS, "parameters", "function and macro parameters" } ,
  { FK_SPEED, "performance", "speeding up checking" } ,
  { FK_POINTER, "pointers", "pointers" } ,
  { FK_PRED, "predicates", "condition test expressions" } ,
  { FK_PREFIX, "prefixes", "set naming prefixes and control checking" } ,
  { FK_PREPROC, "preproc", "defines and undefines for the preprocessor" } ,
  { FK_PROTOS, "prototypes", "function prototypes" } ,
  { FK_DEAD, "released", "using storage that has been deallocated" } ,
  { FK_IGNORERET, "returnvals", "ignored return values" },
  { FK_SECURITY, "security", "possible security vulnerability" },
  { FK_SPEC, "specifications", "checks involving .lcl specifications" } ,
  { FK_SUPPRESS, "suppress", "local and global suppression of messages" } ,
  { FK_TYPEEQ, "typeequivalence", "control what types are equivalent" } ,
  { FK_BEHAVIOR, "undefined", "code with undefined or implementation-defined behavior" } ,
  { FK_UNRECOG, "unrecognized", "unrecognized identifiers" } ,
  { FK_UNSPEC, "unconstrained", "checking in the presence of unconstrained functions" } ,
  { FK_WARNUSE, "warnuse", "use of possibly problematic function" } ,
  { FK_SYNTAX, NULL, NULL } ,
  { FK_TYPE, NULL, NULL } ,
  { FK_SECRET, NULL, NULL } ,
  { FK_OBSOLETE, NULL, NULL } ,
  { FK_NONE, NULL, NULL }  /* must be last */
} ; 

typedef enum {
  ARG_NONE,
  ARG_VALUE,
  ARG_STRING,
  ARG_SPECIAL
} argcode;

typedef struct { 
  flagkind main;
  flagkind sub;
  bool isSpecial;  /* setting this flag may set other flags (or values) */
  bool isIdem;     /* idempotent - always sets to TRUE */
  bool isGlobal;   /* cannot be set locally (using control comments) */
  bool isModeFlag; /* set by modes */
  argcode argtype;
  /*@observer@*/ char *flag;
  flagcode code; 
  /*@observer@*/ /*@null@*/ char *desc;
  bn_mstring hint; 
  int nreported; 
  int nsuppressed; 
} fflag;

typedef fflag flaglist[];

# include "flags.def"

/*@iter allFlags (yield observer fflag f); @*/
# define allFlags(m_f) \
  { /*@+enumint@*/ flagcode m_i; for (m_i = 0; m_i < NUMFLAGS; m_i++) { fflag m_f = flags[m_i]; /*@=enumint@*/
# define end_allFlags }}

static bn_mstring mode_names[] =
{ 
  "weak", "standard", "checks", "strict", NULL, 
};

/*@iter allModes (yield bn_mstring modename)@*/
# define allModes(m_m) \
  { int m_ii = 0; while (mstring_isDefined (mode_names[m_ii])) \
      { bn_mstring m_m = mode_names[m_ii]; m_ii++; 

# define end_allModes }}

/*@+enumint@*/

static cstring describeFlagCode (flagcode p_flag) /*@*/ ;
static cstringSList sortedFlags (void) /*@*/ ;
static /*@observer@*/ cstring categoryName (flagkind p_kind) /*@*/ ;

static flagcode flags_identifyFlagAux (cstring p_s, bool p_quiet) /*@modifies g_msgstream@*/ ;

# if 0
static /*@unused@*/ cstring listModes (void) /*@*/ ;
# endif

bool flagcode_isSpecialFlag (flagcode f)
{
  return (flags[f].isSpecial);
}

bool flagcode_isGlobalFlag (flagcode f)
{
  return (flags[f].isGlobal);
}

bool flagcode_isIdemFlag (flagcode f)
{
  return (flags[f].isIdem);
}

bool flagcode_isModeFlag (flagcode f)
{
  return (flags[f].isModeFlag);
}

bool flagcode_isNameChecksFlag (flagcode f)
{
  return (flags[f].main == FK_NAMES);
}

/*
** Internal consistency check on the flags.
*/

void flags_initMod ()
{
  allFlagCodes (code)
    {
      /*@+enumint@*/
      if (flags[code].code != code)
	{
	  fprintf (stderr, 
		   "*** ERROR: inconsistent flag %s / %d / %d", 
		   flags[code].flag,
		   flags[code].code, code);
	  
	  llbug (message ("*** ERROR: inconsistent flag %s / %d / %d", 
			  cstring_fromChars (flags[code].flag),
			  flags[code].code, code));
	}
      /*@=enumint@*/
    } end_allFlagCodes;
}

void
summarizeErrors ()
{
  bool hadOne = FALSE;
  int sumrep = 0;
  int sumsup = 0;

  char *buf = mstring_create (128);

  allFlags (f)
    {
      if (f.nreported > 0 || f.nsuppressed > 0)
	{
	  int nrep = f.nreported;
	  int nsup = f.nsuppressed;
	  cstring fs = cstring_fill (cstring_fromChars (f.flag), 23);

	  if (!hadOne)
	    {
	      llmsgplain (cstring_makeLiteral
			  ("\nError Type                Reported  Suppressed\n"
			   "===================       ========  ========="));
	      hadOne = TRUE;
	    }

	  sprintf (buf, "%s%7d   %9d", cstring_toCharsSafe (fs), nrep, nsup);

	  sumrep += nrep;
	  sumsup += nsup;
	  
	  cstring_free (fs);
	  llmsg (cstring_copy (cstring_fromChars (buf)));
	}
    } end_allFlags;

  if (hadOne)
    {
      cstring ts = cstring_fill (cstring_makeLiteralTemp ("Total"), 23);

      llmsglit ("                          ========  =========");

      sprintf (buf, "%s%7d   %9d", cstring_toCharsSafe (ts), sumrep, sumsup);
      cstring_free (ts);
      llmsgplain (cstring_copy (cstring_fromChars (buf)));
    }

  sfree (buf);
}

/*@+enumindex@*/

void
flagcode_recordError (flagcode f)
{
  if (f != INVALID_FLAG)
    {
      if (f == FLG_WARNFLAGS)
	{
	  ; /* don't count these */
	}
      else
	{
	  flags[f].nreported = flags[f].nreported + 1;
	}
    }
  else
    {
      llcontbug (message ("flagcode_recordError: invalid flag: %d", (int) f));
    }
}

void
flagcode_recordSuppressed (flagcode f)
{
  llassertprint (f != INVALID_FLAG, ("flagcode: %s", flagcode_unparse (f)));

  flags[f].nsuppressed = flags[f].nsuppressed + 1;
}

int
flagcode_numReported (flagcode f)
{
  llassert (f != INVALID_FLAG);

  return (flags[f].nreported);
}

/*@observer@*/ cstring
flagcodeHint (flagcode f)
{
  llassert (f != INVALID_FLAG);

  if (mstring_isDefined (flags[f].hint))
    {
      return (cstring_fromChars (flags[f].hint));
    }
  else
    {
      return (cstring_fromChars (flags[f].desc));
    }
}

static int categorySize (flagkind kind) /*@*/ 
{
  int n = 0;

  
  allFlags (f)
    {
      if (f.main == kind || f.sub == kind)
	{
	  	  n++;
	}
    } end_allFlags;

  return n;
}

flagkind identifyCategory (cstring s)
{
  int i;

  for (i = 0; categories[i].kind != FK_NONE; i++)
    {
      if (mstring_isDefined (categories[i].name))
	{
	  if (cstring_equalLit (s, categories[i].name))
	    {
	      return categories[i].kind;
	    }
	}
    }

  return FK_NONE;
}

static /*@observer@*/ cstring categoryName (flagkind kind)
{
  int i;

  for (i = 0; categories[i].kind != FK_NONE; i++)
    {
      if (categories[i].kind == kind)
	{
	  return (cstring_fromChars (categories[i].name));
	}
    }
  
  return (cstring_makeLiteralTemp ("<No Category>"));
}

static int categoryIndex (flagkind kind)
{
  int i;

  for (i = 0; categories[i].kind != FK_NONE; i++)
    {
      if (categories[i].kind == kind)
	{
	  return i;
	}
    }

  return -1;
}

void printCategory (flagkind kind)
{
  int index = categoryIndex (kind);

  llassert (index >= 0);

  llmsg (message ("%s (%d flags)\n\3%s\n\n", 
		  cstring_fromChars (categories[index].name), 
		  categorySize (kind),
		  cstring_fromChars (categories[index].describe)));

  allFlags (f)
    {
      if (f.main == kind || f.sub == kind)
	{
	  llmsg (message ("   %s\n\6%q", cstring_fromChars (f.flag), 
			  describeFlagCode (f.code)));
	}
    } end_allFlags;
}

void 
listAllCategories (void)
{
  int i;

  for (i = 0; categories[i].kind != FK_NONE; i++)
    {
      flagkind kind = categories[i].kind ;

      if (categories[i].describe != NULL)
	{
	  llmsg (message ("%s (%d flags)\n\3%s", 
			  categoryName (kind), 
			  categorySize (kind),
			  cstring_fromChars (categories[i].describe)));
	}
    }
}

void
printAllFlags (bool desc, bool full)
{
  if (full)
    {
      cstringSList fl = sortedFlags ();

      cstringSList_elements (fl, el)
	{
	  llmsg (message ("%q\n\n", describeFlag (el)));
	} end_cstringSList_elements ;

      cstringSList_free (fl);
    }
  else
    {
      allFlags (f)
	{
	  if (f.code != INVALID_FLAG && f.main != FK_OBSOLETE)
	    {
	      if (mstring_isDefined (f.desc))
		{
		  if (desc)
		    {
		      llmsg (message ("%s --- %s", cstring_fromChars (f.flag),
				      cstring_fromChars (f.desc)));
		    }
		}
	    }
	} end_allFlags;
    }
}

cstring
describeFlagCode (flagcode flag)
{
  cstring ret = cstring_undefined;
  fflag f;

  if (flagcode_isInvalid (flag))
    {
      return (cstring_makeLiteral ("<invalid>"));
    }

  context_resetAllFlags ();
  
  f = flags[flag];
  ret = cstring_copy (cstring_fromChars (f.desc));

  
  if (f.sub != FK_NONE)
    {
      ret = message ("%q\nCategories: %s, %s",
		     ret, 
		     categoryName (f.main),
		     categoryName (f.sub));
    }
  else 
    {
      if (f.main != FK_NONE)
	{
	  cstring cname = categoryName (f.main);
	  
	  if (cstring_isDefined (cname))
	    {
	      ret = message ("%q\nCategory: %s",
			     ret, cname);
	    }
	}
    }

  if (f.isModeFlag)
    {
      bool first = TRUE;

      allModes (mname)
	{
	  context_setMode (cstring_fromChars (mname));

	  if (first)
	    {
	      ret = message ("%q\nMode Settings: %s %s",
			     ret, cstring_fromChars (mname), 
			     cstring_makeLiteralTemp 
			     (context_getFlag (flag) ? "+" : "-"));
	      first = FALSE;
	    }
	  else
	    {
	      ret = message ("%q, %s %s",
			     ret, cstring_fromChars (mname),
			     cstring_makeLiteralTemp 
			     (context_getFlag (flag) ? "+" : "-"));
	    }
	} end_allModes;
    }
  else
    {
      ret = message ("%q\nDefault Setting: %s",
		     ret, 
		     cstring_makeLiteralTemp 
		     (context_getFlag (flag) ? "+" : "-"));
    }

  if (f.isGlobal)
    {
      ret = message("%q\nSet globally only", ret);
    }
  else
    {
      ret = message("%q\nSet locally", ret);
    }

  switch (f.argtype)
    {
    case ARG_NONE:
    case ARG_SPECIAL:
      break;
    case ARG_VALUE:
      if (flag == FLG_COMMENTCHAR)
	{
	  ret = message("%q\nCharacter Argument.  Default: %h",
			ret, (char) context_getValue (flag));
	}
      else
	{
	  ret = message("%q\nNumeric Argument.  Default: %d",
			ret,
			context_getValue (flag));
	}
      break;
    case ARG_STRING:
      if (cstring_isDefined (context_getString (flag)))
	{
	  ret = message("%q\nString Argument.  Default: %s",
			ret,
			context_getString (flag));
	}
      else
	{
	  ret = message("%q\nString Argument.  No default.", ret);
	}
      break;
    }

  if (mstring_isDefined (f.hint))
    {
      ret = message("%q\n\3%s", ret, cstring_fromChars (f.hint));
    }

  return ret;
}

cstring
describeFlag (cstring flagname)
{
  cstring oflagname = cstring_copy (flagname);
  flagcode f = flags_identifyFlag (flagname);

  if (flagcode_isSkip (f))
    {
      cstring_free (oflagname);
      return cstring_undefined;
    }
  else if (flagcode_isValid (f))
    {
      if (cstring_equal (flagname, oflagname))
	{
	  cstring_free (oflagname);
	  return (message ("%s\n\3%q", flagname, describeFlagCode (f)));
	}
      else
	{
	  return (message ("%q (standardized name: %s)\n\3%q",
			   oflagname, flagname, describeFlagCode (f)));
	}
    }
  else
    {
      if (isMode (flagname))
	{
	  cstring_free (oflagname);

	  return
	    (message ("%s: predefined mode (see User's Guide for information)",
		      flagname));
	}
      else
	{
	  return (message ("%q: <invalid flag>", oflagname));
	}
    }
}

static cstringSList
sortedFlags (void)
{
  cstringSList s = cstringSList_new ();

  allFlags (f)
    {
      if (f.desc != NULL)
	{
	  s = cstringSList_add (s, cstring_fromChars (f.flag));
	}
    } end_allFlags;

  cstringSList_alphabetize (s);

  return s;
}

void printAlphaFlags ()
{
  cstringSList fl = sortedFlags ();

  cstringSList_printSpaced (fl, 3, 1, context_getLineLen () - 25); 
  cstringSList_free (fl);
}

/*@observer@*/ cstring
flagcode_unparse (flagcode code)
{
  if (code == INVALID_FLAG)
    {
      return cstring_makeLiteralTemp ("<invalid flag>");
    }

  return cstring_fromChars (flags[code].flag);
}

/*
** Transforms a flag into its cannonical form.
**
** The following transformations are made:
**
**    function      -> fcn
**    variable      -> var
**    constant      -> const
**    iterator      -> iter
**    parameter     -> param
**    unrecognized  -> unrecog
**    qualifier     -> qual         
**    declaration   -> decl
**    globalias     -> (no change)
**    global        -> glob
**    modifies      -> mods
**    modify        -> mod
**    pointer       -> ptr
**    implies       -> imp
**    implicit      -> imp
**    implied       -> imp
**    unconstrained -> unspec       
**    unconst       -> unspec
**    memory        -> mem
**    length        -> len
*/

static void
canonicalizeFlag (cstring s)
{
  int i = 0;
  static bn_mstring transform[] = 
    { 
      "function", "fcn",
      "variable", "var",
      "constant", "const",
      "iterator", "iter",
      "parameter", "param",
      "unrecognized", "unrecog",
      "qualifier", "qual",
      "declaration", "decl",
      "globals", "globs", 
      "modifies", "mods", 
      "modify", "mod",
      "pointer", "ptr",
      "implies", "imp",
      "implicit", "imp",
      "implied", "imp",
      "unconstrained", "uncon",
      "unconst", "uncon",
      "memory", "mem",
      "length", "len",
      "return", "ret",
      "system", "sys",
      NULL
      } ;
  char *current;

  while ((current = transform[i]) != NULL)
    {
      if (cstring_containsLit (s, current))
	{
	  cstring_replaceLit (s, current, transform[i+1]);
	}
      i += 2;
    }

  /* remove whitespace, -'s, and _'s */
  cstring_stripChars (s, " -_");
}

flagcode
flags_identifyFlag (cstring s)
{
  return flags_identifyFlagAux (s, FALSE);
}

flagcode
flags_identifyFlagQuiet (cstring s)
{
  return flags_identifyFlagAux (s, TRUE);
}

static flagcode
flags_identifyFlagAux (cstring s, bool quiet)
{
  if (cstring_length (s) == 0) {
    /* evs 2000-06-25: A malformed flag. */
    return INVALID_FLAG;
  }

  if (cstring_firstChar (s) == 'I')
    {
      return FLG_INCLUDEPATH; /* no space after -I */
    }

  if (cstring_firstChar (s) == 'S') 
    {
      return FLG_SPECPATH;    /* no space after -S */
    }

  if (cstring_firstChar (s) == 'D') 
    {
      return FLG_DEFINE;      /* no space after -D */
    }

  if (cstring_firstChar (s) == 'U') 
    {
      return FLG_UNDEFINE;    /* no space after -D */
    }

  canonicalizeFlag (s);

  allFlags (f)
    {
      if (cstring_equal (cstring_fromChars (f.flag), s))
	{
	  return (f.code);
	}
    } end_allFlags;

  /*
  ** Synonyms
  */

  if (cstring_equalLit (s, "pred"))
    {
      return FLG_PREDBOOL;
    }

  if (cstring_equalLit (s, "modobserverstrict"))
    {
      return FLG_MODOBSERVERUNCON;
    }

  if (cstring_equalLit (s, "czechnames"))
    {
      return FLG_CZECH;
    }

  if (cstring_equalLit (s, "slovaknames"))
    {
      return FLG_SLOVAK;
    }

  if (cstring_equalLit (s, "czechoslovaknames"))
    {
      return FLG_CZECHOSLOVAK;
    }

  if (cstring_equalLit (s, "globunspec")
	   || cstring_equalLit (s, "globuncon"))
    {
      return FLG_GLOBUNSPEC;
    }

  if (cstring_equalLit (s, "modglobsunspec")
	   || cstring_equalLit (s, "modglobsuncon")
	   || cstring_equalLit (s, "modglobsnomods"))
    {
      return FLG_MODGLOBSUNSPEC;
    }

  if (cstring_equalLit (s, "export"))
    {
      return FLG_EXPORTANY;
    }

  if (cstring_equalLit (s, "macrospec"))
    {
      return FLG_MACRODECL;
    }
  
  if (cstring_equalLit (s, "ansireservedlocal"))
    {
      return FLG_ANSIRESERVEDLOCAL;
    }

  if (cstring_equalLit (s, "warnposix"))
    {
      return FLG_WARNPOSIX;
    }

  if (cstring_equalLit (s, "defuse"))
    {
      return FLG_USEDEF;
    }

  if (cstring_equalLit (s, "macroundef"))
    {
      return FLG_MACROUNDEF;
    }

  if (cstring_equalLit (s, "showcol"))
    {
      return FLG_SHOWCOL;
    }

  if (cstring_equalLit (s, "intbool"))
    {
      return FLG_BOOLINT;
    }

  if (cstring_equalLit (s, "intchar"))
    {
      return FLG_CHARINT;
    }

  if (cstring_equalLit (s, "intenum"))
    {
      return FLG_ENUMINT;
    }

  /*
  ** Backwards compatibility for our American friends...
  */

  if (cstring_equalLit (s, "ansilib"))
    {
      return FLG_ANSILIB;
    }

  if (cstring_equalLit (s, "ansistrictlib"))
    {
      return FLG_STRICTLIB;
    }

  if (cstring_equalLit (s, "skipansiheaders"))
    {
      return FLG_SKIPANSIHEADERS;
    }

  if (cstring_equalLit (s, "ansireserved"))
    {
      return FLG_ANSIRESERVED;
    }

  if (cstring_equalLit (s, "ansireservedinternal"))
    {
      return FLG_ANSIRESERVEDLOCAL;
    }

  /*
  ** Obsolete Flags
  */
  
  if (cstring_equalLit (s, "accessunspec"))
    {
      if (!quiet) 
	{
	  llerror_flagWarning 
	    (cstring_makeLiteral
	     ("accessunspec flag is no longer supported.  It has been replaced by accessmodule, accessfile and "
	      "accessfunction to provide more precise control of accessibility "
	      "of representations.  For more information, "
	      "see lclint -help accessmodule"));
	}
      
      return SKIP_FLAG;
    }
  else if (cstring_equalLit (s, "ansilimits"))
    {
	  llerror_flagWarning 
	    (cstring_makeLiteral
	     ("ansilimits flag is no longer supported.  It has been replaced by ansi89limits and "
	      "iso99limits to select either the lower translation limits imposed by the ANSI89 "
	      "standard or the typically higher limits prescribed by ISO C99."));

      return SKIP_FLAG;
    }
  else if (cstring_equalLit (s, "staticmods"))
    {
      if (!quiet) 
	{
	  llerror_flagWarning 
	    (cstring_makeLiteral
	     ("staticmods flag is obsolete.  You probably "
	      "want impcheckmodstatics.  For more information, "
	      "see lclint -help impcheckmodstatics"));
	}

      return SKIP_FLAG;
    }
  else if (cstring_equalLit (s, "bool"))
    {
      if (!quiet) 
	{
	  llerror_flagWarning
	    (cstring_makeLiteral ("bool flag is obsolete.  It never really "
				  "made sense in the first place."));
	}
      
      return SKIP_FLAG;
    }
  else if (cstring_equalLit (s, "shiftsigned"))
    {
      if (!quiet) 
	{
	  llerror_flagWarning
	    (cstring_makeLiteral ("shiftsigned flag is obsolete.  You probably "
				  "want bitwisesigned, shiftnegative or shiftsize."));
	}
      
      return SKIP_FLAG;
    }
  else if (cstring_equalLit (s, "ansi"))
    {
      if (!quiet) 
	{
	  llerror_flagWarning
	    (cstring_makeLiteral ("ansi flag is obsolete.  You probably "
				  "want noparams and/or oldstyle."));
	}
      
      return SKIP_FLAG;
    }
  else if (cstring_equalLit (s, "stdio"))
    {
      if (!quiet) 
	{
	  llerror_flagWarning 
	    (cstring_makeLiteral
	     ("stdio flag is obsolete.  You may "
	      "want strictlib or one of the gloabls "
	      "checking flags.  For more information, "
	      "see lclint -help strictlib or lclint -help flags globals"));
	}
      
      return SKIP_FLAG;
    }
  else
    {
      return INVALID_FLAG;
    }
}

void setValueFlag (flagcode opt, cstring arg)
{
  switch (opt)
    {
    case FLG_EXPECT:
    case FLG_LCLEXPECT:
    case FLG_LIMIT:  
    case FLG_LINELEN:
    case FLG_INDENTSPACES:
    case FLG_BUGSLIMIT:
    case FLG_EXTERNALNAMELEN:
    case FLG_INTERNALNAMELEN:
    case FLG_CONTROLNESTDEPTH:
    case FLG_STRINGLITERALLEN:
    case FLG_NUMSTRUCTFIELDS:
    case FLG_NUMENUMMEMBERS:
    case FLG_INCLUDENEST:
      {
	int val = cstring_toPosInt (arg);

	if (val < 0)
	  {
	    llerror 
	      (FLG_BADFLAG,
	       message 
	       ("Flag %s must be followed by a positive number number.  "
		"Followed by %s",
		flagcode_unparse (opt), arg));
	  }
	else
	  {
	    context_setValueAndFlag (opt, val);
	  }
      }
      break;
    case FLG_COMMENTCHAR:
      {
	if (cstring_length (arg) != 1)
	  {
	    llfatalerrorLoc
	      (message
	       ("Flag %s should be followed by a single character.  Followed by %s",
		flagcode_unparse (opt), arg));
	  }
	else
	  {
	    context_setCommentMarkerChar (cstring_firstChar (arg));
	  }
      }
      break;
    BADDEFAULT;
    }
}

void setStringFlag (flagcode opt, /*@only@*/ cstring arg)
{
  switch (opt)
    {
    case FLG_TMPDIR:
      {
	if (cstring_lastChar (arg) == CONNECTCHAR)
	  {
	    context_setString (opt, arg);
	  }
	else
	  {
	    context_setString (opt, cstring_appendChar (arg, CONNECTCHAR));
	  }
	break;
      }
    default:
      {
	context_setString (opt, arg);
	break;
      }
    }
}

cstring
describeModes ()
{
  cstring s = cstring_makeLiteral ("Flag                    ");
  cstringSList sflags = sortedFlags ();

  allModes (modename)
    {
      s = message ("%q%9s", s, cstring_fromChars (modename));
    } end_allModes;
  
  s = message ("%q\n", s);

  cstringSList_elements (sflags, flagname)
    {
      flagcode code = flags_identifyFlag (flagname);
      fflag currentflag = flags[code];
      
      if (mstring_isDefined (currentflag.desc) && flagcode_isModeFlag (code))
	{
	  s = message ("%q\n%27s", s, 
		       cstring_fromChars (currentflag.flag));
	  
	  allModes (modename)
	    {
	      context_setMode (cstring_fromChars (modename));
	      
	      if (context_getFlag (code))
		{
		  s = message ("%q%9s", s, cstring_makeLiteralTemp ("+"));
		}
	      else
		{
		  s = message ("%q%9s", s, cstring_makeLiteralTemp (" "));
		}

	      context_resetModeFlags ();
	    } end_allModes;
	}
    } end_cstringSList_elements;
  
  cstringSList_free (sflags);

  s = cstring_appendChar (s, '\n');

  return (s);
}

# if 0
static /*@unused@*/ cstring
listModes (void)
{
  cstring s = cstring_makeLiteral ("\t");
  int i = 0;

  allModes (modename)
    {
      if (i != 0 && (i % 4 == 0))
	{
	  s = message ("%q\n\t%15s", s, cstring_fromChars (modename));
	}
      else
	{
	  s = message ("%q%15s", s, cstring_fromChars (modename));
	}
      i++;
    } end_allModes;

  return s;
}
# endif

bool
isMode (cstring s)
{
  allModes (modename)
    {
      if (mstring_isDefined (modename))
	{
	  if (cstring_equalLit (s, modename))
	    {
	      return TRUE;
	    }
	}
     } end_allModes;

  return FALSE;
}

extern bool flagcode_hasArgument (flagcode f)
{
  return (flags[f].argtype != ARG_NONE);
}

extern bool flagcode_hasValue (flagcode f)
{
  return (flags[f].argtype == ARG_VALUE);
}

extern bool flagcode_hasString (flagcode f)
{
  return (flags[f].argtype == ARG_STRING);
}

extern int flagcode_valueIndex (flagcode f)
{
  /*@unchecked@*/ static bool initialized = FALSE;
  int i;
  /*@unchecked@*/ static flagcode valueFlags[NUMVALUEFLAGS];
  
  if (!initialized)
    {
      int nv = 0;

      allFlagCodes (code)
	{
	  if (flagcode_hasValue (code))
	    {
	      llassert (nv < NUMVALUEFLAGS);
	      DPRINTF (("Value flag: %s [%d]", flagcode_unparse (code), (int) code));
	      valueFlags[nv] = code;
	      nv++;
	    }
	} end_allFlagCodes;

      llassertprint (nv == NUMVALUEFLAGS,
		     ("Number of value flags: %d (expected %d)",
		      nv, (int) NUMVALUEFLAGS));
      initialized = TRUE;
    }

  for (i = 0; i < NUMVALUEFLAGS; i++)
    {
      /* static valueFlags must be defined */
      /*@-usedef@*/ if (f == valueFlags[i]) /*@=usedef@*/
	{
	  return i;
	}
    }

  fprintf (stderr, "Cannot find value flag: %d", (int) f);
  exit (EXIT_FAILURE);
  /* Cannot do this...might call recursively...
  llfatalbug (message ("Cannot fine value flag: %d", (int) f));
  BADEXIT;
  */
}

extern int flagcode_stringIndex (flagcode f)
{
  /*@unchecked@*/ static bool initialized = FALSE;
  /*@unchecked@*/ static flagcode stringFlags[NUMSTRINGFLAGS];
  int i;


  if (!initialized)
    {
      int nv = 0;

      allFlagCodes (code)
	{
	  if (flagcode_hasString (code))
	    {
	      llassertprint (nv < NUMSTRINGFLAGS, ("Incorrect number of string flags: %d (need at least %d)", NUMSTRINGFLAGS, nv));
	      stringFlags[nv] = code;
	      nv++;
	    }
	} end_allFlagCodes;

      llassertprint (nv == NUMSTRINGFLAGS,
		     ("number of string flags: %d (expected %d)",
		      nv, NUMSTRINGFLAGS));
      initialized = TRUE;
    }

  for (i = 0; i < NUMSTRINGFLAGS; i++)
    {
      /*@-usedef@*/ if (f == stringFlags[i]) /*@=usedef@*/
	{
	  return i;
	}
    }

  llbug (message ("Bad string flag: %s", flagcode_unparse (f)));
  BADEXIT;
}

bool flagcode_isNamePrefixFlag (flagcode f)
{
  switch (f)
    {
    case FLG_MACROVARPREFIX:
    case FLG_TAGPREFIX:
    case FLG_ENUMPREFIX:
    case FLG_FILESTATICPREFIX:
    case FLG_GLOBPREFIX:
    case FLG_TYPEPREFIX:
    case FLG_EXTERNALPREFIX:
    case FLG_LOCALPREFIX:
    case FLG_UNCHECKEDMACROPREFIX:
    case FLG_CONSTPREFIX:
    case FLG_ITERPREFIX:
    case FLG_DECLPARAMPREFIX:
      return TRUE;
    default:
      return FALSE;
    }
}
	
