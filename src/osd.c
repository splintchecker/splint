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
 * Herbert 06/12/2000:
 * - added OS/2 specific includes before osd_getPid()
 * - handle files like in WIN32 for OS/2 in osd_fileExists()
 */

/*@-allmacros*/
/*@ignore@*/
# include <sys/types.h>
# include <sys/stat.h>
/* Fix suggested by Lars Rasmussen */
# include <errno.h>

/* POSIX platforms should defined getpid in unistd.h */
# if defined (WIN32) || (defined(OS2) && defined(__IBMC__))
# include <process.h>
# else
# include <unistd.h>
# endif

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

extern cstring LSLRootName (cstring filespec)
{
  /*@access cstring@*/
  char *result, *startName, *tail;
  size_t nameLength;

  llassert (cstring_isDefined (filespec));
  tail = strrchr (filespec, CONNECTCHAR);
  startName = (tail == NULL ? filespec : &tail[1]);
  tail = strrchr (startName, '.');
  nameLength = (tail == NULL ? strlen (startName) 
		: size_fromInt (tail - startName));
  result = dmalloc (nameLength + 1);
  strncpy (result, startName, nameLength);
  result[(int) nameLength] = '\0';
  return result;
  /*@noaccess cstring@*/
}

extern /*@observer@*/ cstring
osd_getEnvironment (cstring env, /*@returned@*/ cstring def)
{
  /*@access cstring@*/
  char *ret = osd_getEnvironmentVariable (env);

  if (ret == NULL)
    {
      return def;
    }
  else
    {
      return ret;
    }
  /*@noaccess cstring@*/
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

extern /*@observer@*/ cstring osd_getHomeDir ()
{
  /* Would something different be better for windows? */
  return (osd_getEnvironmentVariable (cstring_makeLiteralTemp ("HOME")));
}

filestatus osd_findOnLarchPath (cstring file, cstring *returnPath)
{
  return (osd_getPath (context_getLarchPath (), file, returnPath));
}

extern filestatus
osd_getPath (cstring path, cstring file, cstring *returnPath)
{
  char *fullPath;
  char *dirPtr;
  size_t dirLen;
  char aPath[MAXPATHLEN];
  filestatus rVal = OSD_FILENOTFOUND;	/* assume file not found. */
  
  /*@access cstring@*/
  
  fullPath = path;
  llassert (cstring_isDefined (file));
  
  if (fullPath == NULL 
      || 
# if defined(OS2) || defined(MSDOS) || defined(WIN32)
      /* under OS/2 and MSDOS the includePath may be empty, if so, search 
       * the current directory. */
      *fullPath == '\0' || 
      (*file == CONNECTCHAR || (file[0] != '\0' && file[1] == ':'))
# else
    (*file == CONNECTCHAR)
# endif
      )
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
  /*@noaccess cstring@*/
}

extern filestatus
osd_getExePath (cstring path, cstring file, cstring *returnPath)
{
  char *fullPath;
  char *dirPtr;
  size_t dirLen;
  char aPath[MAXPATHLEN];
  filestatus rVal = OSD_FILENOTFOUND;	/* assume file not found. */
  /*@access cstring@*/ 
  
  fullPath = osd_getEnvironmentVariable (path);
  
  if (fullPath == NULL)
    {
      /* No path specified. Look for it in the current directory. */
      llassert (cstring_isDefined (file));
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
	  llassert (cstring_isDefined (file));

	  if ((dirLen + cstring_length (file) + 2) <= MAXPATHLEN)
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
  /*@noaccess cstring@*/
}

bool
osd_fileExists (cstring filespec)
{
# ifdef UNIX
  struct stat buf;
  return (stat (cstring_toCharsSafe (filespec), &buf) == 0);
# else
# if defined (WIN32) || defined (OS2)
  FILE *test = fileTable_openFile (context_fileTable (), filespec, "r");
  
  if (test != NULL) 
    {
      (void) fileTable_closeFile (context_fileTable (),test);
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

  *dir = (**current_dir == PATH_SEPARATOR ? *current_dir + 1 : *current_dir);
  
  /* Find next ':' or end of string */
  for (tchar = *dir; *tchar != '\0' && *tchar != PATH_SEPARATOR; tchar++)
    {
      ;
    }
  
  *current_dir = tchar;
  *len = size_fromInt (tchar - *dir);
  return TRUE;
}

/*@observer@*/ /*@null@*/ cstring osd_getEnvironmentVariable (cstring var)
{
  /* evans - 2001-08-26 fixed OS instead of OS2 bug, reported by Alexander Mai */
# if defined(UNIX) || defined(OS2) || defined(MSDOS) || defined(WIN32)
  char *val = getenv (cstring_toCharsSafe (var));

  if (val == NULL) 
    {
      return cstring_undefined;      
    } 
  else 
    {
      return cstring_makeLiteralTemp (val);
    }
# else
  return cstring_undefined;
# endif
}

# ifndef NOLCL

# ifdef WIN32
extern /*@external@*/ int _flushall (void) /*@modifies fileSystem@*/ ;
# endif

# ifndef system
extern /*@external@*/ int system (const char *) /*@modifies fileSystem@*/ ;
# endif
int osd_system (cstring cmd)
{
  int res;
    /* system ("printenv"); */
# ifdef WIN32
  (void) _flushall (); 
# endif

  res = system (cstring_toCharsSafe (cmd));
  return res;
}
# endif

# ifndef unlink
/* This should be defined by unistd.h */
/*@-redecl@*/
extern /*@external@*/ int unlink (const char *) /*@modifies fileSystem@*/ ;
/*@=redecl@*/
# endif

int osd_unlink (cstring fname)
{
  int res;

  res = unlink (cstring_toCharsSafe (fname));

  if (res != 0)
    {
      llcontbug (message ("Cannot remove temporary file: %s (%s)",
			  fname,
			  cstring_fromChars (strerror (errno))));
    }
  
  return res;
}

# if defined (WIN32) || defined (OS2) && defined (__IBMC__)
int
# else
int /* pid_t */
# endif
osd_getPid ()
{
# if defined (WIN32) || defined (OS2) && defined (__IBMC__)
  int pid = _getpid ();
# else
  pid_t pid = getpid ();
# endif

  return (int) pid;
}
  
cstring osd_fixDefine (cstring x)
{
  /*@access cstring@*/
  llassert (cstring_isDefined (x));
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

  return cstring_copy (x);
  /*@noaccess cstring@*/
}

bool osd_fileIsReadable (cstring f)
{
  FILE *fl = fileTable_openFile (context_fileTable (), f, "r");

  if (fl != NULL)
    {
      check (fileTable_closeFile (context_fileTable (), fl));
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

/*
** Returns true if c2 starts with the same path as c1
**
** This is called by context_isSystemDir to determine if a
** directory is on the system path.
**
** In unix, this is just a string comparison.  For Win32 and OS2, we need a more
** complex comparison.
*/

bool osd_equalCanonicalPrefix (cstring dirpath, cstring prefixpath)
{
  llassert (cstring_isDefined (prefixpath));

  if (cstring_isEmpty (dirpath)) 
    {
      return (cstring_isEmpty (prefixpath));
    }

# if defined (WIN32) || defined (OS2)

  /*@access cstring@*/ /* Moved this from cstring - should abstract it... */

  /*
  ** If one has a drive specification, but the other doesn't, skip it.
  */
  
  if (strchr (dirpath, ':') == NULL
      && strchr (prefixpath, ':') != NULL)
    {
      prefixpath = strchr (prefixpath, ':') + 1;
    }
  else 
    {
      if (strchr (prefixpath, ':') == NULL
	  && strchr (dirpath, ':') != NULL)
	{
	  dirpath = strchr (dirpath, ':') + 1;
	}
    }

  {
    int len = size_toInt (strlen (prefixpath));
    int i = 0;
    int slen = 0;

    for (i = 0, slen = 0; i < len; i++, slen++)
      {
	/* Allow any number of connect characters in any combination:
	 * c:/usr//src\/foo == c:\\usr/src\/foo 
	 * After this we'll be at the last of such a sequence */

	if (osd_isConnectChar (dirpath[slen]) && osd_isConnectChar (prefixpath[i]))
	  {
	    /* Skip one or more connect chars */

	    for (; osd_isConnectChar (dirpath[slen+1]); ++slen)
	      {
		; 
	      }
	    
	    for (; osd_isConnectChar (prefixpath[i+1]); ++i)
	      {
		;
	      }
	  }
	/* Windows, MSDOS and OS/2 use case-insensitive path specs! */
	else if (toupper (dirpath[slen]) != toupper (prefixpath[i]))
	  {
	    return FALSE;
	  }

      }
  }

  /*@noaccess cstring@*/ 

  return TRUE;
# else
  return (cstring_equalPrefix (dirpath, prefixpath));
# endif
}

# if 0
/*
** This code provided by Herbert Martin Dietze, to canonicalize path names.
*/

char *osd_getcwd (/*@returned@*/ char *str, size_t size)
{ 
  return getcwd (str, size);
}

/*@null@*/ /*@observer@*/ char *
osd_dirNext (char *str)
{
  char *p1 = strchr (str, '/');
  char *p2 = strchr (str, '\\');

  if (p1 == NULL)
    {
      if (p2 != NULL)
	{
	  return p2 + 1;
	}
      else
	{
	  return NULL;
	}
    }
  else if (p2 == NULL)
    {
      return p1 + 1;
    }
  else /* both not null */
    {
      return (p1 < p2 ? p1 : p2) + 1;
    }
}

static void 
osd_dirShift (char *str, size_t num) /*@modifies str@*/
{
  int i;
  
  assert (num <= strlen (str));
  
  for (i = 0; str[i] != '\0'; i++)
    {
      str[i] = str[i + num];
    }
}

bool
osd_dirDotdot (char *str)
{
  return str[0] == '.' && str[1] == '.' && osd_isConnectChar (str[2]);
}

void
osd_dirNormalize (char *str)
{
  char *pos1, *pos2;

  for (; osd_isConnectChar (str[0]); str++)
    {
    }

  for (; str != NULL && osd_dirDotdot (str); str = osd_dirNext (str))
    {
    }

  for (pos1 = pos2 = str; 
       pos1 != NULL; 
       pos2 = pos1, pos1 = osd_dirNext (pos1))
    {
      /* remove redundant `./' entry */
      while (pos1[0] == '.' && osd_isConnectChar (pos1[1]))
        {
          osd_dirShift (pos1, 2);
        }

      /* remove redundant `foo/../' entry */
      if (osd_dirDotdot (pos1) && pos2 < pos1)
        {
          osd_dirShift (pos2, pos1 - pos2 + 1);
          osd_dirNormalize (str);
        }
    }
}

/*@null@*/ char *
osd_dirAbsolute (char *str)
{
  char *ret = NULL;
  size_t size = PATH_MAX * sizeof (*ret);
  
  if (osd_isConnectChar (str[0]))
    {
      ret = dmalloc ((strlen (str) + 1) * sizeof (*ret));
      strcpy (ret, str);
    }
  else
    {
      ret = dmalloc (size);
      
      ret = osd_getcwd (ret, size);
      ret = realloc (ret, (strlen (str) + strlen (ret) + 2) * sizeof (*ret));

      if (ret == NULL)
        {
          return NULL;
        }

      strcat (ret, CONNECTSTR);
      strcat (ret, str);
    }
  
  osd_dirNormalize (ret);
  return ret;
}

# endif
