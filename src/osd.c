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
** osd.c
**
** Provide a system-independent interface to system-dependent
** file operations.
*/

/*
 * Modified by Herbert 04/19/97:
 * - added conditional 'OS2' to conditional 'MSDOS'
 * - added include of new header portab.h.
 * - changed '/' to macro.
 * - added DOS / OS/2 specific stuff in osd_getPath.
 */

/*@-allmacros*/
/*@ignore@*/
# include <sys/types.h>
# include <sys/stat.h>
/* Fix suggested by Lars Rasmussen */
# include <errno.h>
/*@end@*/
/*@=allmacros*/
# include "lclintMacros.nf"
# include "basic.h"
# include "osd.h"
# include "portab.h"

/* from stat.h */
/*@ignore@*/
extern int stat (const char *, /*@out@*/ struct stat *);
/*@end@*/

static bool osd_executableFileExists (char *);

static bool nextdir (char **p_current_dir, /*@out@*/ char **p_dir, 
		     /*@out@*/ size_t *p_len);

extern char *LSLRootName (char *filespec)
{
  char *result, *startName, *tail;
  size_t nameLength;

  tail = strrchr (filespec, CONNECTCHAR);
  startName = (tail == NULL ? filespec : &tail[1]);
  tail = strrchr (startName, '.');
  nameLength = (tail == NULL ? strlen (startName) 
		: size_fromInt (tail - startName));
  result = dmalloc (nameLength + 1);
  strncpy (result, startName, nameLength);
  result[(int) nameLength] = '\0';
  return result;
}

extern /*@observer@*/ char *
osd_getEnvironment (char *env, /*@returned@*/ char *def)
{
  char *ret = osd_getEnvironmentVariable (env);

  if (ret == NULL)
    {
      return def;
    }
  else
    {
      return ret;
    }
}


/*
**++
**  FUNCTIONAL DESCRIPTION:
**
**      This function attempts to locate a file in a search list.  On VMS, it
**	just concatinates the path and file names, and then lets RMS do the
**	searching.  On Ultrix, it searches for the file on the path.
**
**  FORMAL PARAMETERS:
**
**      path:	    search path where to look for the file.
**	file:	    name of file to search for.
**	returnPath: if a file is found, this is where the concatenated
**		    directory and file name are returned.
**
**  RETURN VALUE:
**
**      OSD_FILEFOUND:	    the file was found on the search list.
**	OSD_FILENOTFOUND    the file was not found.
**	OSD_PATHTOOLONG	    the concatenated directory and file name are too
**			    long.
**
**  SIDE EFFECTS:
**
**      None
**
**  PRECONDITIONS:
**
**  	Requires that parameters, path and file, are valid C strings.
**
**
**--
*/

extern /*@null@*/ /*@observer@*/ char *
  osd_getHomeDir ()
{
  /* Would something different be better for windows? */
  return (osd_getEnvironmentVariable ("HOME"));
}

filestatus osd_findOnLarchPath (char *file, char **returnPath)
{
  return (osd_getPath (cstring_toCharsSafe (context_getLarchPath ()), file, returnPath));
}

extern filestatus
osd_getPath (char *path, char *file, char **returnPath)
{
  char *fullPath;
  char *dirPtr;
  size_t dirLen;
  char aPath[MAXPATHLEN];
  filestatus rVal = OSD_FILENOTFOUND;	/* assume file not found. */

  fullPath = path;

  if (fullPath == NULL || 
# if defined(OS2) || defined(MSDOS) || defined(WIN32)
    /* under OS/2 and MSDOS the includePath may be empty, if so, search 
     * the current directory. */
    *fullPath == '\0' || 
    (*file == CONNECTCHAR || (file[0] != '\0' && file[1] == ':')))
# else
# ifdef WIN32
	(*file == CONNECTCHAR || (file[0] != '\0' && file[1] == ':')))
# else
    (*file == CONNECTCHAR))
# endif
# endif
    {
     /* No path specified. Look for it in the current directory.	    */

      strcpy (&aPath[0], file);

      if (osd_fileExists (&aPath[0]))
	{
	  rVal = OSD_FILEFOUND;
   	  *returnPath = dmalloc (strlen (&aPath[0]) + 1);
	  strcpy (*returnPath, &aPath[0]);
	}
    }
  else
    {
     /* Path specified. Loop through directories in path looking for the */
     /* first occurrence of the file.				    */

      while (nextdir (&fullPath, &dirPtr, &dirLen) &&
	     rVal == OSD_FILENOTFOUND)
	{
	  if ((dirLen + strlen (file) + 2) <= MAXPATHLEN)
	    {
	     /* Cat directory and filename, and see if file exists.  */
	      strncpy (&aPath[0], dirPtr, dirLen);
	      strcpy (&aPath[0] + dirLen, "");	/* Null terminate aPath. */
	      strcat (&aPath[0], CONNECTSTR);
	      strcat (&aPath[0], file);

	      if (osd_fileExists (&aPath[0]))
		{
		  rVal = OSD_FILEFOUND;
   		  *returnPath = (char *) dmalloc (strlen (&aPath[0]) + 1);
		  strcpy (*returnPath, &aPath[0]);
		}
	    }
	  else
	    {
	      rVal = OSD_PATHTOOLONG;
	    }
	}	
    }

  return rVal;
}

extern filestatus
osd_getExePath (char *path, char *file, char **returnPath)
{
  char *fullPath;
  char *dirPtr;
  size_t dirLen;
  char aPath[MAXPATHLEN];
  filestatus rVal = OSD_FILENOTFOUND;	/* assume file not found. */
  
  fullPath = osd_getEnvironmentVariable (path);

  if (fullPath == NULL)
    {
     /* No path specified. Look for it in the current directory. */

      strcpy (&aPath[0], file);

      if (osd_fileExists (&aPath[0]))
	{
	  rVal = OSD_FILEFOUND;
   	  *returnPath = dmalloc (strlen (&aPath[0]) + 1);
	  strcpy (*returnPath, &aPath[0]);
	}
    }
  else
    {
     /* 
     ** Path specified. Loop through directories in path looking
     ** for the first occurrence of the file.				    
     */

      while (nextdir (&fullPath, &dirPtr, &dirLen) &&
	     rVal == OSD_FILENOTFOUND)
	{
	  if ((dirLen + strlen (file) + 2) <= MAXPATHLEN)
	    {
	      /* Cat directory and filename, and see if file exists.  */
	      strncpy (&aPath[0], dirPtr, dirLen);
	      strcpy (&aPath[0] + dirLen, ""); /* Null terminate aPath. */
	      strcat (&aPath[0], CONNECTSTR);
	      strcat (&aPath[0], file);

	      if (osd_executableFileExists (&aPath[0]))
		{
		  rVal = OSD_FILEFOUND;
   		  *returnPath = dmalloc (strlen (&aPath[0]) + 1);
		  strcpy (*returnPath, &aPath[0]);
		}
	    }
	  else
	    {
	      rVal = OSD_PATHTOOLONG;
	    }
	}
    }

  return rVal;
}

bool
osd_fileExists (char *filespec)
{
# ifdef UNIX
  struct stat buf;
  return (stat (filespec, &buf) == 0);
# else
# ifdef WIN32
  FILE *test = fopen (filespec, "r");
  if (test != NULL) 
  {
	(void) fclose (test);
	return TRUE;
  } 
  else
  { 
	  return FALSE;
  }
# else 
  return FALSE;
# endif
# endif
}

bool
osd_executableFileExists (/*@unused@*/ char *filespec)
{
# ifdef UNIX
	struct stat buf;
# if defined(__IBMC__) && defined(OS2)
# define S_IFMT (unsigned short)0xFFFF
# endif
  if (stat (filespec, &buf) == 0)
    { 
      /* mask by file type */
      /*@-unrecog@*/ /* S_IFMT is not defined */
      if ((buf.st_mode & S_IFMT) != S_IFDIR /*@=unrecog@*/) /* not a directory */
	{
	  /* as long as it is an executable file */
# if defined(__IBMC__) && defined(OS2)
      int com_or_exe_pos = strlen( filespec) - 4;
      return stricmp( &filespec[com_or_exe_pos], ".exe") == 0
        || stricmp( &filespec[com_or_exe_pos], ".com") == 0
        || stricmp( &filespec[com_or_exe_pos], ".bat") == 0
        || stricmp( &filespec[com_or_exe_pos], ".cmd") == 0;
# else
	  return (((buf.st_mode & S_IXUSR)
# if !defined(MSDOS) && !defined(OS2) 
		   | (buf.st_mode & S_IXGRP) |
		   (buf.st_mode & S_IXOTH)
# endif
		   ) != 0);
# endif
	}
    }

# endif
  return (FALSE);

}

/*
**++
**  FUNCTIONAL DESCRIPTION:
**
**      Find the next directory from a directory path.
**
**  FORMAL PARAMETERS:
**
**      char ** current_dir :
**	    Points to the current position in the path string.  The first time
**	    you call this routine, this should point to the first character of
**	    the path.  On return, this will be updated to point to the
**	    terminating \0 or : of the first directory found.  You can then pass
**	    it unchanged for subsequent calls; this routine will correctly skip
**	    over the :.
**
**	char ** dir :
**	    On exit, this will point to the first character of the directory
**	    that was found.  This will be a pointer directly into the client's
**	    path string.
**
**	unsigned int * len :
**	    On exit, this will contain the length of the directory that was
**	    found, not counting any terminating \0 or :.  If no directory was
**	    found, this will be 0.
**
**  RETURN VALUE:
**	TRUE if we found another directory.
**	FALSE otherwise.
**
**  DESIGN:
**
**      We return a pointer and length, rather than a string, because of a)
**	historical reasons; and b) this avoids having to allocate storage.
**
**
**
**--
*/

static bool
nextdir (d_char *current_dir, d_char *dir, size_t *len)
{
  char *tchar;

  if (**current_dir == '\0')
    {
      *len = 0;
      return FALSE;
    }

  *dir = (**current_dir == SEPCHAR ? *current_dir + 1 : *current_dir);
  
  /* Find next ':' or end of string */
  for (tchar = *dir; *tchar != '\0' && *tchar != SEPCHAR; tchar++)
    {
      ;
    }
  
  *current_dir = tchar;
  *len = size_fromInt (tchar - *dir);
  return TRUE;
}

/*@observer@*/ /*@null@*/ char *osd_getEnvironmentVariable (char *var)
{
# ifdef UNIX
	return getenv (var);
# else
# if defined(OS2) || defined(MSDOS)
	return getenv (var);
# else
# if defined(WIN32)
	return getenv (var);
# else
	return NULL;
# endif
# endif
# endif
}

# ifndef NOLCL

# ifdef WIN32
extern /*@external@*/ int _flushall (void) /*@modifies fileSystem@*/ ;
# endif

# ifndef system
extern /*@external@*/ int system (const char *) /*@modifies fileSystem@*/ ;
# endif
int osd_system (const char *cmd)
{
  int res;
    /* system ("printenv"); */
# ifdef WIN32
  (void) _flushall (); 
# endif

  res = system (cmd);
  return res;
}
# endif

# ifndef unlink
/*@-redecl@*/
extern /*@external@*/ int unlink (const char *) /*@modifies fileSystem@*/ ;
/*@=redecl@*/
# endif

int osd_unlink (const char *fname)
{
  int res;

  res = unlink (fname);

  if (res != 0)
    {
      llcontbug (message ("Cannot remove temporary file: %s (%s)",
			  cstring_fromChars (fname),
			  cstring_fromChars (strerror (errno))));
    }
  
  return res;
}

# ifdef WIN32
# include <process.h>
# endif

# ifdef WIN32
int
# else
int /* pid_t */
# endif
osd_getPid ()
{
# ifdef WIN32
  int pid = _getpid ();
# else
  pid_t pid = getpid ();
# endif

  return (int) pid;
}
  
cstring osd_fixDefine (char *x)
{
# ifdef UNIX
  if (strchr (x, '\'') != NULL) {
    /*
    ** If there is a single quote, check for <ident>='<string>' and 
    ** produce <ident>=<string>
    */

    char *eqs = strchr (x, '=');

    if (eqs != NULL) {
      if (eqs[1] == '\'') {
	char *endqu = strrchr (x, '\'');

	if (endqu != NULL) {
	  if (*(endqu - 1) != '\\') {
	    if (*(endqu + 1) == '\0') {
	      cstring res;
	      cstring def;

	      *endqu = '\0';
	      def = cstring_fromChars (eqs + 2);
	      eqs[1] = '\0';
	      res = cstring_concat (cstring_fromChars (x), def);
	      	      return res;
	    }
	  }
	}
      }
    }
  } 

# endif

  return cstring_fromCharsNew (x);
}

bool osd_fileIsReadable (char *f)
{
  FILE *fl = fopen (f, "r");

  if (fl != (FILE *) 0)
    {
      check (fclose (fl) == 0);
      return (TRUE);
    }
  else
    {
      return (FALSE);
    }
}

bool osd_isConnectChar (char c)
{
  if (c == CONNECTCHAR) 
    {
      return TRUE;
    }

# ifdef HASALTCONNECTCHAR
  if (c == ALTCONNECTCHAR)
    {
      return TRUE;
    }
# endif

  return FALSE;
}

