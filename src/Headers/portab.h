/*
** Copyright (c) Massachusetts Institute of Technology 1994, 1995, 1996.
** See ../LICENSE for license information.
*/

# ifndef PORTAB_H
# define PORTAB_H

/*
** Win32 convention?
*/

# if defined(__IBMC__) && defined(OS2)
# define S_IFMT (unsigned short)0xFFFF
# endif

/*@constant observer cstring INCLUDEPATH_VAR@*/
# define INCLUDEPATH_VAR    cstring_makeLiteralTemp ("CPATH")

#if defined (VMS)
/* Connection string inserted between directory and filename to make a  */
/* full path name.							*/

# define    CONNECTSTR	":"
# define    CONNECTCHAR	':'


/* Directory separator character for search list. */
/*@constant static char PATH_SEPARATOR; @*/
# define PATH_SEPARATOR ':'

# elif defined(MSDOS) || defined(OS2) || defined(WIN32)

/* Connection string inserted between directory and filename to make a  */
/* full path name.							*/

/*@constant observer char *CONNECTSTR@*/
# define CONNECTSTR	"\\"

/*@constant char CONNECTCHAR@*/
# define CONNECTCHAR	'\\'

# define HASALTCONNECTCHAR

/*@constant char ALTCONNECTCHAR@*/
# define ALTCONNECTCHAR '/'

/* Directory separator character for search list. */

/*@constant char PATH_SEPARATOR; @*/
# define PATH_SEPARATOR ';'

#else
/* Connection string inserted between directory and filename to make a  */
/* full path name.							*/

/*@constant observer char *CONNECTSTR@*/
# define CONNECTSTR	"/"

/*@constant char CONNECTCHAR; @*/
# define CONNECTCHAR	'/'

/* Directory separator character for search list. */
/*@constant char PATH_SEPARATOR; @*/
# define PATH_SEPARATOR ':'

#endif


# ifdef P_tmpdir

# if defined(OS2) && defined(__IBMC__)
/*@constant observer char *DEFAULT_TMPDIR; @*/
# define DEFAULT_TMPDIR "."
# else
/*@constant observer char *DEFAULT_TMPDIR; @*/
# define DEFAULT_TMPDIR P_tmpdir
# endif
# else
# ifdef WIN32
/*@constant observer char *DEFAULT_TMPDIR; @*/
# define DEFAULT_TMPDIR "\\WINDOWS\\TEMP\\"
# else
/*@constant observer char *DEFAULT_TMPDIR; @*/
# define DEFAULT_TMPDIR "/tmp/"
# endif /* WIN32 */

# endif /* P_tmpdir */

# else
# error "Multiple include"
# endif
