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
** lslparse.c
**
** Module for calling LSL checker.
**
**  AUTHOR:
**	Yang Meng Tan,
**         Massachusetts Institute of Technology
*/

# include "lclintMacros.nf"
# include "llbasic.h"
# include "lclscan.h"
# include "signature.h"
# include "signature2.h"
# include "scan.h"
# include "scanline.h"
# include "syntable.h"
# include "tokentable.h"
# include "lslinit.h"
# include "lslparse.h"
# include "llmain.h"

/*@+ignorequals@*/

/*@dependent@*/ /*@null@*/ lslOp g_importedlslOp = NULL;
bool g_lslParsingTraits = FALSE;

static void invokeLSL (char *p_infile, char *p_outfile, bool p_deletep);

int
parseSignatures (cstring infile)
{
  char *cinfile = cstring_toCharsSafe (infile);
  tsource *sourceFile;
  ltoken *id = (ltoken *) dmalloc (sizeof (*id));
  int status = 0;

  /* parse traits */
  *id = LSLInsertToken (LST_SIMPLEID, lsymbol_fromChars (cinfile), 0, FALSE);
  ltoken_setFileName (*id, cinfile);
  ltoken_setLine (*id, 0);
  ltoken_setCol (*id, 0);

  sourceFile = tsource_create (cinfile, "", FALSE);

  if (!tsource_getPath (cstring_toCharsSafe (context_getLarchPath ()), sourceFile))
    {
      lclplainerror 
	(message ("LSL signature parsing: can't find file %s containing trait",
		  cstring_fromChars (tsource_fileName (sourceFile))));
      status = 1;

      sfree (id);
      tsource_free (sourceFile);
      return status;
    }

  if (!tsource_open (sourceFile))
    {
      lclplainerror 
	(cstring_makeLiteral ("LSL parsing: can't open file containing trait"));
      status = 2;
      sfree (id);
      tsource_free (sourceFile);

      return status;
    }

  lsldebug = 0;
  g_lslParsingTraits = TRUE;
  LSLScanReset (sourceFile);
  LSLReportEolTokens (FALSE);

  status = lslparse ();

  /* symtable_dump (symtab, stdout, TRUE); */
  g_lslParsingTraits = FALSE;

  (void) tsource_close (sourceFile);
  tsource_free (sourceFile);

  sfree (id);

  
  return status;
}

/*@only@*/ lslOp
parseOpLine (char *fname, char *line)
{
  tsource *sourceFile;
  bool status;

  sourceFile = tsource_fromString (fname, line);
  
  if (check (tsource_open (sourceFile)))
    {
      LSLScanReset (sourceFile);
      LSLReportEolTokens (FALSE); /* 0 by default, lslParsingTraits = 0; */
      
      /*
      ** lsl parsing and importing .lcs files are expected to be mutually
      ** exclusive. 
      **
      ** lslparse sets importedlslOp
      */
      
      status = (lslparse () != 0);
      
      if (status)
	{
	  lclplainfatalerror (message ("Error in parsing line: %s", 
				       cstring_fromChars (line)));
	}
      
      (void) tsource_close (sourceFile);
    }

  tsource_free (sourceFile);
  
  llassert (g_importedlslOp != NULL);
  return (lslOp_copy (g_importedlslOp));
}

lsymbol
processTraitSortId (lsymbol sortid)
{
  lsymbol out = lsymbol_sortFromType (g_symtab, sortid);
  if (out == sortid)
    { /* may be a new sort */
      (void) sort_fromLsymbol (sortid);
    }
  return out;
}

/* formerly from check.c module */

static /*@only@*/ cstring
printTypeName2 (typeNameNode n)
{
  cstring s = cstring_undefined;
  sortNode sn;
  lsymbol lclSort;
  ltoken err;

  if (n != (typeNameNode) 0)
    {
      if (n->isTypeName)
	{
	  /* does not process opForm renaming, pass on to LSL
	     and hope that it works for now. */
	  typeNamePack p = n->typename;

	  llassert (p != NULL);

	  /* get the LCL type, assume LCL type has already been mentioned. */
	  lclSort = lclTypeSpecNode2sort (p->type);
	  lclSort = sort_getUnderlying (lclSort);
	  /* lclsource = LCLSLScanSource (); */
	  if (!sort_isValidSort (lclSort))
	    {
	      err = lclTypeSpecNode_errorToken (p->type);
	      /* errorShowPoint (tsource_thisLine (lclsource), ltoken_getCol (err)); */
	      lclerror (err, message ("Unrecognized type in uses: %q", 
				      typeNameNode_unparse (n)));
	    }
	  else
	    {
	      /* 
              ** Below is necessary because this is one place where an LCL mutable
	      ** type name is mapped directly into its value sort, not obj sort.
	      ** Allows us to support only one qualifying "obj", rather
	      ** than "val" as well. 
	      */
	      
	      lclSort = typeExpr2ptrSort (lclSort, p->abst);
	      lclSort = sort_makeVal (lclSort);
	      
	      /*
	      ** Check that lclSort is not a HOFSort ...
	      ** Propagation of HOFSort should stop here.  
	      */

	      if (sort_isHOFSortKind (lclSort))
		{
		  err = lclTypeSpecNode_errorToken (p->type);
		  
		  lclfatalerror
		    (err, 
		     cstring_makeLiteral 
		     ("LCL uses cannot handle higher-order types"));
		}
	      if (p->isObj)
		lclSort = sort_makeObj (lclSort);
	      
	      /*	if (!p->isObj) {
			lclSort = sort_makeVal (lclSort);
			} */
	      
	      sn = sort_lookup (lclSort);
	      s = cstring_copy (cstring_fromChars (lsymbol_toChars (sn.name)));
	      /* s = string_paste (s, AbstDeclaratorNode_unparse (p->abst)); */
	    }
	}
      else
	{
	  /* s = OpFormNode_unparse (n->opform); */
	  if (n->opform != 0)
	    {
	      lclfatalerror 
		(n->opform->tok,
		 cstring_makeLiteral ("Attempt to rename operator with uses: "
				     "use LSL includes renaming facility"));
	    }
	  else
	    {		
	      BADEXIT;
	    }
	}
    }
  return s;
}

static /*@only@*/ cstring
replaceNode_unparseAlt (replaceNode x)
{
  cstring s = cstring_undefined;

  if (x != (replaceNode) 0)
    {
      s = printTypeName2 (x->typename);
      s = cstring_concatChars (s, " for ");

      if (x->isCType)
	{
	  s = cstring_concatFree1 (s, ltoken_unparse (x->content.ctype));
	}
      else
	{
	  s = cstring_concatFree (s, nameNode_unparse (x->content.renamesortname.name));
	  s = cstring_concatFree (s, 
				  sigNode_unparse (x->content.renamesortname.signature));
	}
    }

  return s;
}

static /*@only@*/ cstring
replaceNodeList_unparseAlt (replaceNodeList x)
{
  cstring s = cstring_undefined;
  bool first = TRUE;

  replaceNodeList_elements (x, i)
    {
      if (first)
	{
	  s = replaceNode_unparseAlt (i);
	  first = FALSE;
	}
      else
	{
	  s = message ("%q, %q", s, replaceNode_unparseAlt (i));
	}
    } end_replaceNodeList_elements;

  return s;
}

static /*@only@*/ cstring
printNameList2 (typeNameNodeList x)
{
  /* printing a list of typeNameNode's, not nameNode's */
  bool first = TRUE;
  cstring s = cstring_undefined;

  typeNameNodeList_elements (x, i)
  {
    if (first)
      {
	s = printTypeName2 (i);
	first = FALSE;
      }
    else
      {
	s = message ("%q, %q", s, printTypeName2 (i));
      }
    } end_typeNameNodeList_elements; 

  return s;
}

static /*@only@*/ cstring
printRenamingNode2 (renamingNode x)
{
  cstring s = cstring_undefined;

  if (x != (renamingNode) 0)
    {
      if (x->is_replace)
	{
	  replaceNodeList r = x->content.replace;
	  s = replaceNodeList_unparseAlt (r);
	}
      else
	{
	  nameAndReplaceNode n = x->content.name;
	  bool printComma = TRUE;
	  if (typeNameNodeList_size (n->namelist) == 0)
	    {
	      printComma = FALSE;
	    }
	  s = printNameList2 (n->namelist);
	  if (printComma)
	    if (replaceNodeList_isDefined (n->replacelist) &&
		replaceNodeList_size (n->replacelist) != 0)
	      {
		s = cstring_appendChar (s, ',');
		s = cstring_appendChar (s, ' ');
	      }
	  s = cstring_concatFree (s, replaceNodeList_unparseAlt (n->replacelist));
	}
    }
  return s;
}

static /*@only@*/ cstring
printTraitRefList2 (traitRefNodeList x)
{
  cstring s = cstring_undefined;

  traitRefNodeList_elements (x, i)
  {
    s = message ("%qincludes (%q)", s, printRawLeaves2 (i->traitid));

    if (i->rename != 0)
      {
	s = message ("%q(%q)", s, printRenamingNode2 (i->rename));
      }
    s = message ("%q\n", s);
  } end_traitRefNodeList_elements;

  return s;
}

void
callLSL (/*@unused@*/ char *specfile, /*@only@*/ char *text)
{
  /* specfile is the name of the LCL file that contains "uses"
     Create an intermediate file named
     specfile_<TEMP_LSL_SUFFIX>.<TEMP_LSL_IN_SUFFIX>.
     put text in the file, run lsl on it and direct
     output to specfile_<TEMP_LSL_SUFFIX>.<TEMP_LSL_OUT_SUFFIX>.
     specfile can be a full pathname.
     Note: LSL does not support traitnames that are pathnames, only
     symbols. 
     */

  char *infile, *outfile;
  char *tmp1, *tmp2;
  FILE *inptr;

  infile = cstring_toCharsSafe (fileName (fileTable_addltemp (context_fileTable ())));
  
  inptr = fopen (infile, "w");
  
  if (inptr == NULL)
    {
      /* fopen fails */
      llfatalerror (message ("Unable to write intermediate file: %s", 
			     cstring_fromChars (infile)));
    }
  
  tmp1 = removePath (infile);
  tmp2 = removeAnyExtension (tmp1);

  fprintf (inptr, "%s : trait\n", tmp2);
  sfree (tmp1);
  sfree (tmp2);

  fprintf (inptr, "%s", text);
  check (fclose (inptr) == 0);

  /* the default is to delete the input file */

  outfile = cstring_toCharsSafe (fileName (fileTable_addltemp (context_fileTable ())));
  invokeLSL (infile, outfile, context_getFlag (FLG_KEEP));
  sfree (text);
}

static void invokeLSL (char *infile, char *outfile, bool deletep)
{
  /* run lsl on infile and leave result in outfile */
  FILE *outptr;
  filestatus status;
  int callstatus;
  cstring call;
  char *returnPath = NULL;
  
  /*
  ** Ensures that outfile can be written into, should find a better
  ** way to do this. 
  */
  
  outptr = fopen (outfile, "w");

  if (outptr == NULL)
    {			
      /* fopen fails */
      llfatalerror (message ("Unable to write intermediate file: %s", 
			     cstring_fromChars (outfile)));
    }
  
  check (fclose (outptr) == 0);

  /* set call to the right command */
  status = osd_getExePath ("PATH", "lsl", &returnPath);
    

  if (status == OSD_FILEFOUND)
    {
      call = message ("%s -syms %s > %s", cstring_fromChars (returnPath), 
		      cstring_fromChars (infile), cstring_fromChars (outfile));
      
      /* before calling, make sure old file is removed */
      (void) osd_unlink (outfile);

      callstatus = osd_system (cstring_toCharsSafe (call));
      
      cstring_free (call);

      if (callstatus != CALL_SUCCESS)
	{
	  /*
	  ** lsl errors: call lsl again without -syms, sending output to stdout
          */
	  cstring syscal = message ("%s %s", cstring_fromChars (returnPath), 
				    cstring_fromChars (infile));

	  (void) osd_system (cstring_toCharsSafe (syscal));
	  cstring_free (syscal);

	  llfatalerror (cstring_makeLiteral ("LSL trait used contains errors.")); 
	}
      else
	{			/* ok, go ahead */
	 /* Now parse the LSL output and store info in symbol table */
	  callstatus = parseSignatures (cstring_fromChars (outfile));

	  if (callstatus == 0)
	    {	
	      /* all went well */
	      if (!context_getFlag (FLG_KEEP))
		{
		  /* delete temporary files */
		  if (deletep)
		    {
		      (void) osd_unlink (infile);
		    }
		  
		  (void) osd_unlink (outfile);
		}
	    }
	}
    }
  else if (status == OSD_FILENOTFOUND)
    {
      llfatalerror 
	(cstring_makeLiteral ("Cannot find LSL checker: check your command search path."));
    }
  else				/* must be (status == OSD_PATHTOOLONG) */
    {
      lclfatalbug ("invokeLSL: lsl plus directory from search path is too long");
    }
}

/* callLSL ("MySet", "includes Set (CC for C, EE for E)");  */

void
readlsignatures (interfaceNode n)
{
  /* assume n->kind = usesKIND */
  char *content;
  
  content = cstring_toCharsSafe (printTraitRefList2 (n->content.uses));
  callLSL (cstring_toCharsSafe (g_currentSpec), content);
}
