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
** source.c
**
** Interface to source file abstraction
**
**	NOTE:	    This module is almost identical to the one for LCL.  The
**		    only difference is that a couple of source lines have been
**		    commented out.
**
**		    This module has too many dependencies to be in the common
**		    source area.  Any of the solutions that would allow this
**		    module to be common had its own set of compromises.  It
**		    seemed best and most straightforward to just keep separte
**		    copies for LSL and LCL.  We should examine this again if we
**		    ever reorganize the module structure.
**
**  AUTHORS:
**
**     Steve Garland,
**         Massachusetts Institute of Technology
**     Joe Wild, Technical Languages and Environments, DECspec project
*/

# include "lclintMacros.nf"
# include "llbasic.h"
# include "osd.h"
# include "portab.h"

extern bool
inputStream_close (inputStream s)
{
  if (s->file != NULL)
    {
      check (fclose (s->file) == 0);
      s->file = NULL;
      return TRUE;
    }

  return FALSE;
}

extern void
inputStream_free (/*@null@*/ /*@only@*/ inputStream s)
{
  if (s != NULL)
    {
      sfree (s->name);
      sfree (s->stringSource);
      sfree (s->curLine);
      sfree (s);
    }
}

extern /*@only@*/ inputStream 
  inputStream_create (char *name, char *suffix, bool echo)
{
  char *ps;
  inputStream s = (inputStream) dmalloc (sizeof (*s));
  
  s->name = (char *) dmalloc (strlen (name) + strlen (suffix) + 1);
  s->file = 0;
  strcpy (s->name, name);

  ps = strrchr (s->name, CONNECTCHAR);

  if (ps == (char *) 0)
    {
      ps = s->name;
    }

  if (strchr (ps, '.') == NULL)
    {
      strcat (s->name, suffix);
    }

  s->lineNo = 0;
  s->charNo = 0;
  s->curLine = NULL;
  s->echo = echo;
  s->fromString = FALSE;
  s->stringSource = NULL;
  s->stringSourceTail = NULL;
  
  return s;
}

extern /*@only@*/ inputStream 
inputStream_fromString (char *name, char *str)
{
  inputStream s = (inputStream) dmalloc (sizeof (*s));

  s->name = mstring_copy (name);
  s->stringSource = mstring_copy (str);
  s->stringSourceTail = s->stringSource;
  s->file = 0;
  s->echo = FALSE;
  s->fromString = TRUE;
  s->lineNo = 0;
  s->charNo = 0;
  s->curLine = NULL;

  return s;
}

extern int inputStream_nextChar (inputStream s)
{
  int res = inputStream_peekChar (s);

  if (res != EOF) 
    {
      if (res == '\n')
	{
	  s->curLine = NULL;
	  s->charNo = 0;
	}
      else
	{
	  s->charNo++;
	}
    }

  DPRINTF (("Next char: %c [%d]", res, res));
  return res;
}

extern int inputStream_peekNChar (inputStream s, int n)
     /* Doesn't work across lines! */
{
  llassert (s->curLine != NULL);
  llassert (s->charNo + n < strlen (s->curLine));
  return ((int) s->curLine [s->charNo + n]);
}

extern int inputStream_peekChar (inputStream s)
{  
  if (s->curLine == NULL)
    {
      s->curLine = NULL;
      s->curLine = inputStream_nextLine (s);
      s->charNo = 0;
    }

  if (s->curLine == NULL)  
    {
      return EOF;
    }
 
  llassert (s->charNo <= strlen (s->curLine));

  if (s->curLine[s->charNo] == '\0') 
    {
      return '\n';
    }
 
  return ((int) s->curLine [s->charNo]);
} 

extern /*@dependent@*/ /*@null@*/ 
char *inputStream_nextLine (inputStream s)
{
  char *currentLine;
  int len;

  llassert (s->curLine == NULL);
  s->charNo = 0;

  if (s->fromString)
    {
      if (s->stringSourceTail == NULL || (strlen (s->stringSourceTail) == 0))
	{
	  currentLine = 0;
	}
      else
	{
	  char *c = strchr (s->stringSourceTail, '\n');
	  
	  
	  /* in case line is terminated not by newline */ 
	  if (c == 0)
	    {
	      c = strchr (s->stringSourceTail, '\0');
	    }

	  len = c - s->stringSourceTail + 1;

	  if (len > STUBMAXRECORDSIZE - 2)
	    {
	      len = (STUBMAXRECORDSIZE - 2);
	    }

	  currentLine = &(s->buffer)[0];
	  strncpy (currentLine, s->stringSourceTail, size_fromInt (len));
	  currentLine[len] = '\0';
	  s->stringSourceTail += len;
	}
      
    }
  else
    {
      llassert (s->file != NULL);
      currentLine = fgets (&(s->buffer)[0], STUBMAXRECORDSIZE, s->file);
    }
  if (currentLine == 0)
    {
      strcpy (s->buffer, "*** End of File ***");
    }
  else
    {
      s->lineNo++;
      len = strlen (currentLine) - 1;
      if (s->buffer[len] == '\n')
	{
	  s->buffer[len] = '\0';
	}
      else 
	{
	  if (len >= STUBMAXRECORDSIZE - 2)
	    {
	      lldiagmsg (message ("Input line too long: %s",
				  cstring_fromChars (currentLine)));
	    }
	}
    }

  /* if (s->echo) slo_echoLine (currentLine);		only needed in LCL */
  return currentLine;
}

extern bool
inputStream_open (inputStream s)
{
  if (s->fromString)
    {
      /* not an error: tail is dependent */
      s->stringSourceTail = s->stringSource; 
      return TRUE;
    }

  DPRINTF (("Open: %s", s->name));
  s->file = fopen (s->name, "r");
  return (s->file != 0 || s->fromString);
}

/*
** requires
**  path != NULL \and
**  s != NULL \and
**  *s.name == filename (*s.name) || filetype (*s.name)
**      *s.name consists of a file name and type only ("<filename>.<type>)
**	No path name is included
**
** ensures
**  if filefound (*path, *s) then
**	result = true \and *s.name = filespec_where_file_found (*path, *s)
**  else
**	result = false
*/

extern bool inputStream_getPath (char *path, inputStream s)
{
  char *returnPath;
  filestatus status;		/* return status of osd_getEnvPath.*/
  bool rVal;			/* return value of this procedure. */

 /* Check if requires met. */
  if (path == NULL || s == NULL || s->name == NULL)
    {
      llbugexitlit ("inputStream_getPath: invalid parameter");
    }

  status = osd_getPath (path, s->name, &returnPath);

  if (status == OSD_FILEFOUND)
    {				/* Should be majority of cases. */
      rVal = TRUE;
      
      sfree (s->name);
      s->name = returnPath;
    }
  else if (status == OSD_FILENOTFOUND)
    {
      rVal = FALSE;
    }
  else if (status == OSD_PATHTOOLONG)
    {
      rVal = FALSE;
     /* Directory and filename are too long.  Report error. */
     llbuglit ("soure_getPath: Filename plus directory from search path too long");
 }
  else
    {
      rVal = FALSE;
      llbuglit ("inputStream_getPath: invalid return status");
    }
  return rVal;
}

# ifndef NOLCL
char *specFullName (char *specfile, /*@out@*/ char **inpath)
{
  /* extract the path and the specname associated with the given file */
  char *specname = (char *) dmalloc (sizeof (*specname) 
				     * (strlen (specfile) + 9));
  char *ospecname = specname;
  char *path = (char *) dmalloc (sizeof (*path) * (strlen (specfile)));
  size_t size;
  long int i, j;
  
  /* initialized path to empty string or may have accidental garbage */
  *path = '\0';

  /*@-mayaliasunique@*/ 
  strcpy (specname, specfile);
  /*@=mayaliasunique@*/ 

  /* trim off pathnames in specfile */
  size = strlen (specname);

  for (i = size_toInt (size) - 1; i >= 0; i--)
    {
      if (specname[i] == CONNECTCHAR)
	{
	  /* strcpy (specname, (char *)specname+i+1); */
	  for (j = 0; j <= i; j++)	/* include '/'  */
	    {
	      path[j] = specname[j];
	    }

	  path[i + 1] = '\0';
	  specname += i + 1;
	  break;
	}
    }

  /* 
  ** also remove .lcl file extension, assume it's the last extension
  ** of the file name 
  */

  size = strlen (specname);

  for (i = size_toInt (size) - 1; i >= 0; i--)
    {
      if (specname[i] == '.')
	{
	  specname[i] = '\0';
	  break;
	}
    }
  
  *inpath = path;

  /*
  ** If specname no longer points to the original char,
  ** we need to allocate a new pointer and copy the string.
  */

  if (specname != ospecname) {
    char *rspecname = (char *) dmalloc (sizeof (*rspecname) * (strlen (specname) + 1));
    strcpy (rspecname, specname); /* evs 2000-05-16: Bug: was ospecname! */
    sfree (ospecname);
    return rspecname;
  } 

  return specname;
}
# endif

