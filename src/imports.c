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
** imports.c
**
** module for importing LCL specs.
**
**  AUTHOR:
**	Yang Meng Tan,
**         Massachusetts Institute of Technology
*/

# include "lclintMacros.nf"
# include "llbasic.h" 
# include "osd.h"
# include "llgrammar.h" /* need simpleOp, MULOP and logicalOp in makeInfixTermNode */
# include "lclscan.h"
# include "checking.h"
# include "imports.h"
# include "lslparse.h"
# include "lh.h"
# include "llmain.h"
# include "portab.h"
# include "herald.h"

void
outputLCSFile (char *path, char *msg, char *specname)
{
  static bool haserror = FALSE;
  char *sfile = mstring_concat (specname, ".lcs");
  char *outfile = mstring_concat (path, sfile);
  char *s;
  FILE *outfptr = fopen (outfile, "w");
  sfree (sfile);

  DPRINTF (("Output lcl file: %s / %s / %s", path, specname, outfile));
  
  /* check write permission */
  
  if (outfptr == 0)
    {				/* fopen fails */
      if (!haserror)
	{
	  lclplainerror (message ("Cannot write to output file: %s", 
				  cstring_fromChars (outfile)));
	  haserror = TRUE;
	}
      sfree (outfile);
      return;
    }

  fprintf (outfptr, msg);
  fprintf (outfptr, "%s\n", LCL_PARSE_VERSION);
  
  /* output line %LCLimports foo bar ... */
  fprintf (outfptr, "%%LCLimports ");

  lsymbolSet_elements (g_currentImports, sym)
    {
      s = lsymbol_toChars (sym);

      if (s != NULL && !mstring_equal (s, specname))
	{
	  fprintf (outfptr, "%s ", s);
	}
    } end_lsymbolSet_elements;
  
  fprintf (outfptr, "\n");
  
  sort_dump (outfptr, TRUE);
  symtable_dump (g_symtab, outfptr, TRUE);

  check (fclose (outfptr) == 0);  
  sfree (outfile);  
}

void
importCTrait (void)
{
  char **infile = (char **) dmalloc (sizeof (*infile));
  filestatus status = osd_findOnLarchPath (CTRAITSYMSNAME, infile);

  
  switch (status)
    {
    case OSD_FILEFOUND:
      /*
      ** This line was missing before version 2.3f.  Bug fix by Mike Smith.
      **    This looks like a bug - infile is already fully qualified path  
      **    parseSignatures() adds another path to the front and fails to   
      **    open the file.                                                  
      */
	   
      (void) parseSignatures (cstring_fromChars (CTRAITSYMSNAME));
      (void) parseSignatures (cstring_fromChars (*infile));
      break;
    case OSD_FILENOTFOUND:
      /* try spec name */
      status = osd_findOnLarchPath (CTRAITSPECNAME, infile);

      if (status == OSD_FILEFOUND)
	{
	  callLSL (CTRAITSPECNAME,
		   cstring_toCharsSafe
		   (message ("includes %s (%s for String)",
			     cstring_fromChars (CTRAITFILENAMEN), 
			     cstring_fromChars (sort_getName (sort_cstring)))));
	  break;
	}
      else
	{
	  lldiagmsg 
	    (message ("Unable to find %s or %s.  Check LARCH_PATH environment variable.",
		      cstring_fromChars (CTRAITSYMSNAME), 
		      cstring_fromChars (CTRAITSPECNAME)));
	  llexit (LLFAILURE);
	}
    case OSD_PATHTOOLONG:
      lclbug (message ("importCTrait: the concatenated directory and file "
		       "name are too long: %s: "
		       "continuing without it", 
		       cstring_fromChars (CTRAITSPECNAME)));
      break;
    }

  sfree (*infile);
  sfree (infile);
}

/*
** processImport --- load imports from file
**
**    impkind: IMPPLAIN  file on SPEC_PATH
**                       # include "./file.h" if it exists,
**			 # include "<directory where spec was found>/file.h" if not.
**			   (warn if neither exists)
**            IMPBRACKET file in default LCL imports directory
**                       # include <file.h>
**            IMPQUOTE   file directly
**                       # include "file.h"
*/

void
processImport (lsymbol importSymbol, ltoken tok, impkind kind)
{
  bool readableP, oldexporting;
  bool oldFormat = FALSE;
  tsource *imported, *imported2, *lclsource;
  char *bufptr, *tmpbufptr, *cptr;
  char *name;
  lsymbol sym;
  char importName[MAX_NAME_LENGTH + 1], *importFileName, *realfname;
  char *path;
  char *fpath, *fpath2;
  mapping *map;
  filestatus ret;

  importFileName = lsymbol_toCharsSafe (importSymbol);
  name = mstring_concat (importFileName, IO_SUFFIX);
  realfname = name;

  /*
  ** find .lcs file
  */
  
  switch (kind)
    {
    case IMPPLAIN:
      path = cstring_toCharsSafe 
	(message ("%s%c%s", cstring_fromChars (g_localSpecPath), SEPCHAR, context_getLarchPath ()));
      
      break;
    case IMPBRACKET:
      path = mstring_copy (cstring_toCharsSafe (context_getLCLImportDir ()));
      break;
    case IMPQUOTE:
      path = mstring_copy (g_localSpecPath);
      break;
    default:
      path = mstring_createEmpty (); /* suppress gcc error message */
      llbuglit ("bad imports case\n");
    }

  if ((ret = osd_getPath (path, realfname, &fpath)) != OSD_FILEFOUND)
    {
      char *fname2;
      
      if (ret == OSD_PATHTOOLONG)
	{
	  llfatalerrorLoc (cstring_makeLiteral ("Path too long"));
	}
      
      imported2 = tsource_create (importFileName, LCL_SUFFIX, FALSE);
      fname2 = tsource_fileName (imported2);
      
      

      if (osd_getPath (path, fname2, &fpath2) == OSD_FILEFOUND)
	{
	  llfatalerrorLoc
	    (message ("Specs must be processed before it can be imported: %s", 
		      cstring_fromChars (fpath2)));
	}
      else
	{
	  if (kind == IMPPLAIN || kind == IMPQUOTE)
	    llfatalerrorLoc (message ("Cannot find file to import: %s", 
				       cstring_fromChars (realfname)));
	  else
	    llfatalerrorLoc (message ("Cannot find standard import file: %s",
				       cstring_fromChars (realfname)));
	}
    }

  
  imported = tsource_create (fpath, IO_SUFFIX, FALSE);
  
  
  readableP = tsource_open (imported);
    
  if (!readableP)
    {			/* can't read ? */
      llfatalerrorLoc (message ("Cannot open import file for reading: %s",
				 cstring_fromChars (tsource_fileName (imported))));
    }

  bufptr = tsource_nextLine (imported);

  if (bufptr == 0)
    {
      llerror (FLG_SYNTAX, message ("Import file is empty: %s", 
				    cstring_fromChars (tsource_fileName (imported))));
      sfree (name);
      (void) tsource_close (imported);
      tsource_free (imported);

      sfree (path);
      return;
    }

  /* was it processed successfully ? */
  if (firstWord (bufptr, "%FAILED"))
    {
      llfatalerrorLoc
	(message ("Imported file was not checked successfully: %s.", 
		  cstring_fromChars (name)));
    }
  
  /** is it generated by the right version of the checker? 
   **
   ** old .lcs files start with %PASSED
   ** new (compressed) files start with %LCS 
   */
  
  if (firstWord (bufptr, "%PASSED"))
    {
      /* %PASSED Output from LCP Version 2.* and 3.* */
      /*                     1234567890123*/
      /*                                 +*/

      cptr = strstr (bufptr, "LCP Version");
      
      if (cptr != NULL)
	{
	  cptr += 12;
	  if (*cptr != '2' && *cptr != '3')
	    {
	      llfatalerrorLoc (message ("Imported file is obsolete: %s.",
					 cstring_fromChars (bufptr)));
	    }
	}
      oldFormat = TRUE;
    }
  else 
    {
      if (!firstWord (bufptr, "%LCS"))
	{
	  llfatalerrorLoc (message ("Imported file is not in correct format: %s.",
				    cstring_fromChars (bufptr)));
	}
    }
  
  /* push the imported LCL spec onto g_currentImports */

  context_enterImport ();
  
  bufptr = tsource_nextLine (imported);
  llassert (bufptr != NULL);

  tmpbufptr = bufptr;

    /* expect %LCLimports foo bar ... */
  if (firstWord (bufptr, "%LCLimports "))
    {
      bufptr = bufptr + strlen ("%LCLimports ");
      while (sscanf (bufptr, "%s", importName) == 1)
	{
	  bufptr = bufptr + strlen (importName) + 1;	/* 1 for space */
	  sym = lsymbol_fromChars (importName);
	  if (sym == importSymbol || 
	      lsymbolSet_member (g_currentImports, sym))
	    {
	      /* ensure that the import list does not contain itself: an
		 invariant useful for checking imports cycles. */
	      lclsource = LCLScanSource ();
	      lclfatalerror (tok, 
			     message ("Imports cycle: %s.lcl imports %s",
				      cstring_fromChars (importFileName),
				      cstring_fromChars (importName)));
	    }	  
	  /* push them onto g_currentImports */
	  /* evs - 94 Apr 3:  I don't think it should do this! */
	  /* (void) lsymbolSet_insert (g_currentImports, sym); */
	}
    }
  else
    {
      lclsource = LCLScanSource ();
      lclfatalerror (tok, message ("Unexpected line in imported file %s: %s", 
				   cstring_fromChars (name), 
				   cstring_fromChars (bufptr)));
    }
	  
  /* read in the imported info */
  oldexporting = sort_setExporting (TRUE);

  map = mapping_create ();

  /* tok for error line numbering */

  if (oldFormat)
    {
            sort_import (imported, tok, map);	
    }

  (void) sort_setExporting (oldexporting);

  /* sort_import updates a mapping of old anonymous sorts to new
     anonymous sort that is needed in symtable_import */
  /* mapping_print (map); */
  
  if (oldFormat)
    {
      symtable_import (imported, tok, map);
    }
  else
    {
      /* symtable_loadImport (imported, tok, map); */
    }
  
  check (tsource_close (imported));
  tsource_free (imported);

  sfree (map);
  sfree (name);
  sfree (path);

  context_leaveImport ();  
}



