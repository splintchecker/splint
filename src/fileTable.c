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
** fileTable.c
**
** replaces filenamemap.c
** based (loosely) on typeTable.c
**
** entries in the fileTable are:
**
**        name - name of the file
**        type - kind of file (a temp file to be deleted?)
**        link - derived from this file
**
*/
/*
 * Herbert 04/1997:
 * - Added conditional stuff (macros OS2 and MSDOS) to make names of temporary 
 *   files under Windows or OS/2 not larger than 8+3 characters to avoid 
 *   trouble with FAT file systems or Novell Netware volumes.
 * - Added include of new header file portab.h containing OS dependent stuff.
 * - Changed occurance of '/' as path delimiter to a macro.
 * - Added conditional stuff (#define and #include) for IBM's compiler.
 */

# include "lclintMacros.nf"
# include "llbasic.h"
# include "osd.h"
# include "llmain.h"
# include "portab.h"
# if defined(__IBMC__) && defined(OS2)
# include <process.h>
# define getpid _getpid
# endif

/*@access fileId*/

static bool fileTable_inRange (fileTable ft, fileId fid) /*@*/ 
{
  return (fileTable_isDefined (ft) && (fid >= 0) && (fid < ft->nentries));
}

static fileId fileTable_internAddEntry (fileTable p_ft, /*@only@*/ ftentry p_e) 
   /*@modifies p_ft@*/ ;
static /*@only@*/ cstring makeTempName (cstring p_dir, cstring p_pre, cstring p_suf);

static /*@only@*/ cstring
fileType_unparse (fileType ft)
{
  switch (ft)
    {
    case FILE_NORMAL:  return cstring_makeLiteral ("normal");
    case FILE_NODELETE:  return cstring_makeLiteral ("normal");
    case FILE_LSLTEMP: return cstring_makeLiteral ("ltemp");
    case FILE_HEADER:  return cstring_makeLiteral ("header");
    case FILE_XH:  return cstring_makeLiteral ("xh");
    case FILE_MACROS:  return cstring_makeLiteral ("macros");
    case FILE_METASTATE:  return cstring_makeLiteral ("metastate");
    }

  BADEXIT;
}

static int
fileTable_getIndex (fileTable ft, cstring s)
{
  if (ft == NULL) return NOT_FOUND;
  return (cstringTable_lookup (ft->htable, s));
}

/*@only@*/ cstring
fileTable_unparse (fileTable ft)
{
  cstring s = cstring_undefined;
  int i;

  if (fileTable_isUndefined (ft))
    {
      return (cstring_makeLiteral ("<fileTable undefined>"));
    }

  for (i = 0; i < ft->nentries; i++)
    {
      if (fileId_isValid (ft->elements[i]->fder))
	{
	  s = message ("%s\n[%d] %s %q %d (%s)", 
		       s, i, 
		       ft->elements[i]->fname, 
		       fileType_unparse (ft->elements[i]->ftype),
		       ft->elements[i]->fder,
		       ft->elements[ft->elements[i]->fder]->fname);
	}
      else
	{
	  s = message ("%s\n[%d] %s %q", s, i, ft->elements[i]->fname,
		       fileType_unparse (ft->elements[i]->ftype));
	}
          }

  return s;
}

void fileTable_printTemps (fileTable ft)
{
  if (fileTable_isDefined (ft))
    {
      int i;

      for (i = 0; i < ft->nentries; i++)
	{
	  if (ft->elements[i]->ftemp)
	    {
	      if (fileId_isValid (ft->elements[i]->fder))
		{
		  fprintf (stderr, "  %s:1\n\t%s:1\n", 
			   cstring_toCharsSafe (ft->elements[ft->elements[i]->fder]->fname),
			   cstring_toCharsSafe (ft->elements[i]->fname));
		}
	      else
		{
		  fprintf (stderr, "[no file]\n\t%s:1\n",
			   cstring_toCharsSafe (ft->elements[i]->fname));
		}
	    }
	}
    }
}

/*
** loads in fileTable from fileTable_dump
*/

static /*@notnull@*/ ftentry
ftentry_create (/*@keep@*/ cstring tn, bool temp, fileType typ, fileId der)
{
  ftentry t = (ftentry) dmalloc (sizeof (*t));
  
  if (cstring_isUndefined (tn))
    {
      llbug (cstring_makeLiteral ("Undefined filename!"));
    }
  
  t->fname = tn;
  
  t->basename = cstring_undefined;
  t->ftemp = temp;
  t->ftype = typ;
  t->fder  = der;

  /* Don't set these until the basename is needed. */
  t->fsystem = FALSE;
  t->fspecial = FALSE;

  return t;
}

static void
ftentry_free (/*@only@*/ ftentry t)
{
  cstring_free (t->fname);
  cstring_free (t->basename);
  sfree (t);
}

/*@only@*/ /*@notnull@*/ fileTable
fileTable_create ()
{
  fileTable ft = (fileTable) dmalloc (sizeof (*ft));
  
  ft->nentries = 0;
  ft->nspace = FTBASESIZE;
  ft->elements = (ftentry *) dmalloc (FTBASESIZE * sizeof (*ft->elements));
  ft->htable = cstringTable_create (FTHASHSIZE);
  
  return (ft);
}

static void
fileTable_grow (fileTable ft)
{
  int i;
  ftentry *newent;

  llassert (fileTable_isDefined (ft));

  ft->nspace = FTBASESIZE;

  newent = (ftentry *) dmalloc ((ft->nentries + ft->nspace) * sizeof (*newent));

  for (i = 0; i < ft->nentries; i++)
    {
      newent[i] = ft->elements[i];
    }

  sfree (ft->elements);
  ft->elements = newent;
}

static fileId
fileTable_internAddEntry (fileTable ft, /*@only@*/ ftentry e)
{
  llassert (fileTable_isDefined (ft));

  if (ft->nspace <= 0)
    fileTable_grow (ft);

  ft->nspace--;

  cstringTable_insert (ft->htable, e->fname, ft->nentries);
  ft->elements[ft->nentries] = e;

  ft->nentries++;
  return (ft->nentries - 1);
}

void fileTable_noDelete (fileTable ft, cstring name)
{
  fileId fid = fileTable_lookup (ft, name);

  if (fileId_isValid (fid)) {
    llassert (fileTable_isDefined (ft));

    ft->elements[fid]->ftype = FILE_NODELETE;
  }
}

static fileId
fileTable_addFilePrim (fileTable ft, /*@only@*/ cstring name, 
		       bool temp, fileType typ, fileId der)
   /*@modifies ft@*/
{
  int tindex = fileTable_getIndex (ft, name);

  llassert (ft != fileTable_undefined);

  if (tindex != NOT_FOUND)
    {
      llcontbug (message ("fileTable_addFilePrim: duplicate entry: %q", name));

      return tindex;
    }
  else
    {
      ftentry e = ftentry_create (name, temp, typ, der);

      if (der == fileId_invalid)
	{
	  llassert (cstring_isUndefined (e->basename));

	  e->basename = fileLib_removePathFree (fileLib_removeAnyExtension (name));
	  e->fsystem = context_isSystemDir (name);
	  e->fspecial = context_isSpecialFile (name);

	  if (e->fspecial)
	    {
	      cstring srcname = cstring_concatFree1 (fileLib_removeAnyExtension (name), 
						     C_EXTENSION);
	      fileId fid = fileTable_lookup (ft, srcname);

	      cstring_free (srcname);

	      if (fileId_isValid (fid))
		{
		  fileId derid = ft->elements[fid]->fder;

		  ft->elements[fid]->fspecial = TRUE;

		  if (fileId_isValid (derid))
		    {
		      ft->elements[derid]->fspecial = TRUE;
		    }
		}
	    }
	}
      else
	{
	  ftentry de = ft->elements[der];

	  llassert (cstring_isUndefined (e->basename));
	  e->basename = cstring_copy (de->basename);
	  e->fsystem = de->fsystem;
	  e->fspecial = de->fspecial;
	}

      return (fileTable_internAddEntry (ft, e));
    }
}

fileId
fileTable_addFile (fileTable ft, cstring name)
{
  /* while (*name == '.' && *(name + 1) == '/') name += 2; */

  return (fileTable_addFilePrim (ft, cstring_copy (name), 
				 FALSE, FILE_NORMAL, fileId_invalid));
}

fileId
fileTable_addFileOnly (fileTable ft, /*@only@*/ cstring name)
{
  return (fileTable_addFilePrim (ft, name, FALSE, FILE_NORMAL, fileId_invalid));
}

fileId
fileTable_addHeaderFile (fileTable ft, cstring name)
{
  fileId res;

  res = fileTable_addFilePrim (ft, cstring_copy (name), FALSE, 
			       FILE_HEADER, fileId_invalid);
  return res;

}

bool
fileTable_isHeader (fileTable ft, fileId fid)
{
  if (fileId_isInvalid (fid))
    {
      return FALSE;
    }

  llassert (fileTable_isDefined (ft) && fileTable_inRange (ft, fid));
  return (ft->elements[fid]->ftype == FILE_HEADER);
}

bool
fileTable_isSystemFile (fileTable ft, fileId fid)
{
  if (fileId_isInvalid (fid))
    {
      return FALSE;
    }

  llassert (fileTable_isDefined (ft) && fileTable_inRange (ft, fid));
  return (ft->elements[fid]->fsystem);
}

bool
fileTable_isXHFile (fileTable ft, fileId fid)
{
  if (fileId_isInvalid (fid))
    {
      return FALSE;
    }

  if (!(fileTable_isDefined (ft) && fileTable_inRange (ft, fid)))
    {
      llcontbug (message ("Bad file table or id: %s %d", bool_unparse (fileTable_isDefined (ft)), fid));
      return FALSE;
    }
  else
    {
      return (ft->elements[fid]->ftype == FILE_XH);
    }
}

bool
fileTable_isSpecialFile (fileTable ft, fileId fid)
{
  if (fileId_isInvalid (fid))
    {
      return FALSE;
    }
  
  llassert (fileTable_isDefined (ft) && fileTable_inRange (ft, fid));
  return (ft->elements[fid]->fspecial);
}

fileId
fileTable_addLibraryFile (fileTable ft, cstring name)
{
  return (fileTable_addFilePrim (ft, cstring_copy (name),
				 FALSE, FILE_HEADER, fileId_invalid));
}

fileId
fileTable_addXHFile (fileTable ft, cstring name)
{
  return (fileTable_addFilePrim (ft, cstring_copy (name),
				 FALSE, FILE_XH, fileId_invalid));
}

# ifndef NOLCL
fileId
fileTable_addImportFile (fileTable ft, cstring name)
{
  return (fileTable_addFilePrim (ft, cstring_copy (name), 
				 FALSE, FILE_HEADER, fileId_invalid));
}

fileId
fileTable_addLCLFile (fileTable ft, cstring name)
{
  return (fileTable_addFilePrim (ft, cstring_copy (name), 
				 FALSE, FILE_HEADER, fileId_invalid));
}
# endif

# ifndef NOLCL
static int tmpcounter = 0;
# endif

fileId
fileTable_addMacrosFile (fileTable ft)
{
  cstring newname =
    makeTempName (context_tmpdir (), cstring_makeLiteralTemp ("lmx"),
		  cstring_makeLiteralTemp (".llm"));

  return (fileTable_addFilePrim (ft, newname, TRUE, FILE_MACROS, fileId_invalid));
}

fileId
fileTable_addMetastateFile (fileTable ft, cstring name)
{
  return (fileTable_addFilePrim (ft, cstring_copy (name), 
				 FALSE, FILE_METASTATE, fileId_invalid));
}

fileId
fileTable_addCTempFile (fileTable ft, fileId fid)
{
# if FALSE
  /* Can't control output file name for cl preprocessor */
  cstring newname = cstring_concatChars (fileLib_removeAnyExtension (fileName (fid)), ".i");
# else
  cstring newname =
    makeTempName (context_tmpdir (), cstring_makeLiteralTemp ("cl"), 
		  C_EXTENSION);
# endif

  llassert (fileTable_isDefined (ft));

  if (!fileId_isValid (ft->elements[fid]->fder))
    {
      if (fileTable_isXHFile (ft, fid))
	{
	  return (fileTable_addFilePrim (ft, newname, TRUE, FILE_XH, fid));
	}
      else
	{
	  return (fileTable_addFilePrim (ft, newname, TRUE, FILE_NORMAL, fid));
	}
    }
  else 
    {
      if (fileTable_isXHFile (ft, fid))
	{
	  return (fileTable_addFilePrim (ft, newname, TRUE, FILE_XH,
					 ft->elements[fid]->fder));
	}
      else
	{
	  return (fileTable_addFilePrim (ft, newname, TRUE, FILE_NORMAL,
					 ft->elements[fid]->fder));
	}
    }
}

# ifndef NOLCL
fileId
fileTable_addltemp (fileTable ft)
{
  cstring newname = makeTempName (context_tmpdir (),
				  cstring_makeLiteralTemp ("ls"), 
				  cstring_makeLiteralTemp (".lsl"));
  fileId ret;
  
  if (cstring_hasNonAlphaNumBar (newname))
    {
      char *lastpath = (char *)NULL;

      if (tmpcounter == 0)
	{
	  lldiagmsg
	    (message
	     ("Operating system generates tmp filename containing invalid charater: %s",
	      newname));
	  lldiagmsg (cstring_makeLiteral 
		     ("Try cleaning up the tmp directory.  Attempting to continue."));
	}
      
      /*@access cstring@*/
      llassert (cstring_isDefined (newname));
      lastpath = strrchr (newname, CONNECTCHAR); /* get the directory */
      llassert (lastpath != NULL);
      *lastpath = '\0';

      newname = message ("%q%hlsl%d.lsl", 
			 newname,
			 CONNECTCHAR,
			 tmpcounter);
      /*@noaccess cstring@*/
      tmpcounter++;
    }
  
  /*
  ** this is kind of yucky...need to make the result of cstring_fromChars
  ** refer to the same storage as its argument.  Of course, this loses,
  ** since cstring is abstract.  Should make it an only?
  */

  ret = fileTable_addFilePrim (ft, cstring_copy (newname),
			       TRUE, FILE_LSLTEMP, fileId_invalid);
  cstring_free (newname);
  return (ret);
}
# endif

bool
fileTable_exists (fileTable ft, cstring s)
{
  int tindex = fileTable_getIndex (ft, s);

  if (tindex == NOT_FOUND)
    return FALSE;
  else
    return TRUE;
}

fileId
fileTable_lookup (fileTable ft, cstring s)
{
  int tindex = fileTable_getIndex (ft, s);

  if (tindex == NOT_FOUND)
    {
      return fileId_invalid;
    }
  else
    {
      return tindex;
    }
}

/*
** This is pretty awkward --- when we find the real path of 
** a .xh file, we may need to change the recorded name.  [Sigh]
*/

void
fileTable_setFilePath (fileTable ft, fileId fid, cstring path)
{
  llassert (fileId_isValid (fid));
  llassert (fileTable_isDefined (ft));
  /* Need to put new string in hash table */
  cstringTable_insert (ft->htable, cstring_copy (path), fid);
  ft->elements[fid]->fname = cstring_copy (path);
}

fileId
fileTable_lookupBase (fileTable ft, cstring base)
{
  int tindex = fileTable_getIndex (ft, base);

  if (tindex == NOT_FOUND)
    {
      return fileId_invalid;
    }
  else
    {
      fileId der;

      llassert (fileTable_isDefined (ft));

      der = ft->elements[tindex]->fder;
      
      if (!fileId_isValid (der))
	{
	  der = tindex;
	}

      return der; 
    }
}

cstring
fileTable_getName (fileTable ft, fileId fid)
{
  if (!fileId_isValid (fid))
    {
      llcontbug 
	(message ("fileTable_getName: called with invalid type id: %d", fid));
      return cstring_makeLiteralTemp ("<invalid>");
    }

  llassert (fileTable_isDefined (ft));
  return (ft->elements[fid]->fname);
}

cstring
fileTable_getRootName (fileTable ft, fileId fid)
{
  fileId fder;

  if (!fileId_isValid (fid))
    {
      llcontbug (message ("fileTable_getName: called with invalid id: %d", fid));
      return cstring_makeLiteralTemp ("<invalid>");
    }

  if (!fileTable_isDefined (ft))
    {
      return cstring_makeLiteralTemp ("<no file table>");
    }

  fder = ft->elements[fid]->fder;

  if (fileId_isValid (fder))
    {
      return (ft->elements[fder]->fname);
    }
  else
    {
      return (ft->elements[fid]->fname);
    }
}

cstring
fileTable_getNameBase (fileTable ft, fileId fid)
{
  if (!fileId_isValid (fid))
    {
      llcontbug (message ("fileTable_getName: called with invalid id: %d", fid));
      return cstring_makeLiteralTemp ("<invalid>");
    }
  
  if (!fileTable_isDefined (ft))
    {
      return cstring_makeLiteralTemp ("<no file table>");
    }
  
  return (ft->elements[fid]->basename);
}

bool
fileTable_sameBase (fileTable ft, fileId f1, fileId f2)
{
  fileId fd1, fd2;

  if (!fileId_isValid (f1))
    {
      return FALSE;
    }

  if (!fileId_isValid (f2))
    {
      return FALSE;
    }

  llassert (fileTable_isDefined (ft));

  if (f1 == f2) 
    {
      return TRUE;
    }

  fd1 = ft->elements[f1]->fder;

  if (!fileId_isValid (fd1))
    {
      fd1 = f1;
    }

  fd2 = ft->elements[f2]->fder;


  if (!fileId_isValid (fd2))
    {
      fd2 = f2;
    }

  return (fd1 == fd2);
}

void
fileTable_cleanup (fileTable ft)
{
  int i;
  bool msg;
  int skip;
  
  llassert (fileTable_isDefined (ft));

  msg = ((ft->nentries > 40) && context_getFlag (FLG_SHOWSCAN));
  skip = ft->nentries / 10;

  if (msg)
    {
      (void) fflush (g_msgstream);
      fprintf (stderr, "< cleaning");
    }

  for (i = 0; i < ft->nentries; i++)
    {
      ftentry fe = ft->elements[i];

      if (fe->ftemp)
	{
	  /* let's be real careful now, hon! */
	  
	  /*
          ** Make sure it is really a derived file
	  */
	  
	  if (fe->ftype == FILE_LSLTEMP || fe->ftype == FILE_NODELETE)
	    {
	      ; /* already removed */ 
	    }
	  else if (fileId_isValid (fe->fder)) 
	    {
	      /*@i423 this should use close (fd) also... */
	      (void) osd_unlink (fe->fname);
	    }
	  else if (fe->ftype == FILE_MACROS)
	    {
	      (void) osd_unlink (fe->fname);
	    }
	  else
	    {
	      llbug (message ("Temporary file is not derivative: %s "
			      "(not deleted)", fe->fname));
	    }
	}
      else
	{
	  ;
	}

      if (msg && ((i % skip) == 0))
	{
	  (void) fflush (g_msgstream);

	  if (i == 0) {
	    fprintf (stderr, " ");
	  } else {
	    fprintf (stderr, ".");
	  }

	  (void) fflush (stderr);
	}
    }
  
  if (msg)
    {
      fprintf (stderr, " >\n");
    }
}

void
fileTable_free (/*@only@*/ fileTable f)
{
  int i = 0;
  
  if (f == (fileTable)NULL) 
    {
      return;
    }

  while ( i < f->nentries ) 
    {
      ftentry_free (f->elements[i]);
      i++;
    }
  
  cstringTable_free (f->htable);
  sfree (f->elements);
  sfree (f);
}

/*
** unique temp filename are constructed from <dir><pre><pid><msg>.<suf>
** requires: <dir> must end in '/'
*/

static void nextMsg (char *msg)
{
  /*@+charint@*/
  if (msg[0] < 'Z') 
    {
      msg[0]++; 
    }
  else 
    {
      msg[0] = 'A';
      if (msg[1] < 'Z')
	{ 
	  msg[1]++; 
	}
      else
	{
	  msg[1] = 'A';
	  if (msg[2] < 'Z') 
	    {
	      msg[2]++;
	    }
	  else
	    {
	      msg[2] = 'A';
	      if (msg[3] < 'Z') 
		{
		  msg[3]++; 
		}
	      else
		{
		  llassertprint (FALSE, ("nextMsg: out of unique names!!!"));
		}
	    }
	}
    }
  /*@-charint@*/
}

static /*@only@*/ cstring makeTempName (cstring dir, cstring pre, cstring suf)
{
  static int pid = 0; 
  static /*@owned@*/ char *msg = NULL; 
  static /*@only@*/ cstring pidname = NULL;
  int maxlen;
  cstring smsg;

  llassert (cstring_length (pre) <= 3);

  /*
  ** We limit the temp name to 8 characters:
  **   pre: 3 or less
  **   msg: 3
  **   pid: 2  (% 100)
  */

  if (msg == NULL)
    {
      msg = mstring_copy ("AAA"); /* there are 26^3 temp names */
    }

  if (pid == 0) 
    {
      /*@+matchanyintegral@*/
      pid = osd_getPid ();
      /*@=matchanyintegral@*/
    }

  if (cstring_isUndefined (pidname)) 
    {
      pidname = message ("%d", pid % 100);
    }
  
  maxlen = (cstring_length (dir) + cstring_length (pre) + mstring_length (msg) 
	    + cstring_length (pidname) + cstring_length (suf) + 2);

  smsg = message ("%s%s%s%s%s", dir, pre, pidname, cstring_fromChars (msg), suf);
  nextMsg (msg);

  while (osd_fileExists (smsg))
    {
      cstring_free (smsg);
      smsg = message ("%s%s%s%s%s", dir, pre, pidname, cstring_fromChars (msg), suf);
      nextMsg (msg);
    }
  

  return smsg;
}
