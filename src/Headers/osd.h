/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2003.
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
**
** POSIX defines PATHMAX in limits.h
*/

# ifdef PATH_MAX
/*@constant size_t MAXPATHLEN; @*/
# define MAXPATHLEN PATH_MAX
# else
/*@constant size_t MAXPATHLEN; @*/
# define MAXPATHLEN 1024
# endif

typedef enum {
  OSD_FILEFOUND,
  OSD_FILENOTFOUND,
  OSD_PATHTOOLONG 
} filestatus;

extern /*@only@*/ cstring LSLRootName (cstring p_filespec) /*@*/ ;

extern filestatus   
  osd_getPath (cstring p_path, cstring p_file, /*@out@*/ cstring *p_returnPath)
  /*@modifies *p_returnPath@*/ ;

extern filestatus   
  osd_getExePath (cstring p_path, cstring p_file, /*@out@*/ cstring *p_returnPath)
  /*@modifies *p_returnPath@*/ ;

extern bool osd_fileExists (cstring p_filespec) /*@*/ ;
extern /*@observer@*/ cstring
  osd_getEnvironment (cstring p_env, /*@returned@*/ cstring p_def) /*@*/ ;

extern filestatus osd_findOnLarchPath (cstring p_file, /*@out@*/ cstring *p_returnPath) 
  /*@modifies *p_returnPath@*/ ;

extern void osd_setTempError (void) /*@modifies internalState@*/ ;

extern /*@observer@*/  cstring osd_getHomeDir (void) /*@*/ ;

extern /*@observer@*/ cstring osd_getEnvironmentVariable (cstring) ;

/*@constant int CALL_SUCCESS@*/
# define CALL_SUCCESS 0
extern int osd_system (cstring p_cmd) /*@modifies fileSystem@*/ ;

extern cstring osd_absolutePath (cstring p_cwd, cstring p_filename) /*@*/ ;
extern /*@only@*/ cstring osd_outputPath (cstring p_filename) /*@*/ ;
extern void osd_initMod (void) /*@modifies internalState@*/ ;
extern void osd_destroyMod (void) /*@modifies internalState@*/ ;

extern bool osd_equalCanonicalPrefix (cstring p_dirpath, cstring p_prefixpath) /*@*/ ;

extern int osd_unlink (cstring) /*@modifies fileSystem@*/ ;
extern cstring osd_fixDefine (cstring);
extern bool osd_fileIsReadable (cstring);

extern bool osd_isConnectChar (char) /*@*/ ;
extern /*@observer@*/ cstring osd_getCurrentDirectory (void) /*@*/ ;

# ifdef WIN32
extern int osd_getPid (void) ;
# else
extern int /*pid_t*/ osd_getPid (void) ;
# endif

# else
# error "Multiple include"
# endif



