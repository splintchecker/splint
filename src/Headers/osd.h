/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** osd.h
*/

# ifndef OSD_H
# define OSD_H

/* Macro to substitute for ## because VAX C currently doesn't allow it. */
# ifdef __STDC__
    /* Use an intermediate paste macro so PASTE macro arguments will get    */
    /* evaluated.  Therefore, PASTE(PASTE(a,b),c) will work. */
/*@notfunction@*/
# define IPASTE(L,R)	    L ## R
/*@notfunction@*/
# define PASTE(L,R)         IPASTE(L,R)
# else
/*@notfunction@*/
# define PASTE(L,R )	    L/**/R
# endif

/* Macro to substitute for # because VAX C currently doesn't allow it. */
# ifdef __STDC__
/*@notfunction@*/
#  define ISTR(x)	# x
/*@notfunction@*/
#  define STR(x)         ISTR(x)
# else
/*@notfunction@*/
#  define ISTR(x)	"x"
/*@notfunction@*/
#  define STR(x)		ISTR(x)
# endif

/*
** MAXPATHLEN defines the longest permissable path length.
** Is defined in <sys/param.h> in MIPS/Ultrix, but it not defined on the VAX.
** Define here so available on both systems.
*/

/*@constant int MAXPATHLEN; @*/
# define MAXPATHLEN      1024

typedef enum {
  OSD_FILEFOUND,
  OSD_FILENOTFOUND,
  OSD_PATHTOOLONG } filestatus;

extern /*@only@*/ char *LSLRootName (char *p_filespec) /*@*/ ;

extern filestatus   
  osd_getPath (char *p_path, char *p_file, /*@out@*/ char **p_returnPath)
  /*@modifies *p_returnPath@*/ ;

extern filestatus   
  osd_getExePath (char *p_path, char *p_file, /*@out@*/ char **p_returnPath)
  /*@modifies *p_returnPath@*/ ;

extern bool osd_fileExists (char *p_filespec) /*@*/ ;
extern /*@observer@*/ char *
  osd_getEnvironment (char *p_env, /*@returned@*/ char *p_def) /*@*/ ;

extern filestatus osd_findOnLarchPath (char *p_file, /*@out@*/ char **p_returnPath) 
  /*@modifies *p_returnPath@*/ ;

extern /*@observer@*/ /*@null@*/ char *osd_getHomeDir (void) /*@*/ ;

extern /*@observer@*/ /*@null@*/ char *osd_getEnvironmentVariable (char *) ;

# ifndef NOLCL
/*@constant int CALL_SUCCESS@*/
# define CALL_SUCCESS 0

extern int osd_system (const char *p_cmd) /*@modifies fileSystem@*/ ;
# endif

extern int osd_unlink (const char *) /*@modifies fileSystem@*/ ;
extern cstring osd_fixDefine (char *);
extern bool osd_fileIsReadable (char *);

extern bool osd_isConnectChar (char) /*@*/ ;

# ifdef WIN32
extern int osd_getPid (void) ;
# else
extern int /*pid_t*/ osd_getPid (void) ;
# endif

# else
# error "Multiple include"
# endif



