/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
**
*/

# ifndef LLERROR_H
# define LLERROR_H

extern bool /*@alt void@*/ check (bool p_x);
# define check(p_x)  doCheck (p_x, cstring_fromChars (#p_x), cstring_makeLiteralTemp (__FILE__), __LINE__)

extern bool doCheck (bool p_x, cstring p_pred, cstring p_file, int p_line);

extern /*@falseexit@*/ void llassert (/*@sef@*/ bool p_test);
/*@-macroredef@*/
# define llassert(tst) \
    do { if (!(tst)) { \
           if (context_getFlag (FLG_TRYTORECOVER)) checkParseError (); \
	   lldiagmsg (message ("%s:%d: at source point", \
			       cstring_makeLiteralTemp (__FILE__), __LINE__)); \
	   llbuglit ("llassert failed: " #tst); \
       }} while (FALSE)
/*@=macroredef@*/

extern /*@falseexit@*/ void llassertretnull (/*@sef@*/ bool p_test);
# define llassertretnull(tst) \
    do { if (!(tst)) { \
           if (context_getFlag (FLG_TRYTORECOVER)) checkParseError (); \
	   lldiagmsg (message ("%s:%d: at source point", \
			       cstring_makeLiteralTemp (__FILE__), __LINE__)); \
	   llbuglit ("llassert failed: " #tst); \
       }} while (FALSE)

/*
** Use this for assertions in error-generation code (that
** might lead to infinite loops of failed assertions if
** the normal error generation routines are used).
*/

extern /*@falseexit@*/ void llassertprotect (/*@sef@*/ bool p_test);
# define llassertprotect(tst) \
    do { if (!(tst)) { \
	   fprintf (stderr, "%s:%d: at source point: ", __FILE__, __LINE__); \
	   fprintf (stderr, "protected fatal llassert failed: " #tst "\n"); \
           llexit (EXIT_FAILURE); \
       }} while (FALSE)

extern /*@falseexit@*/ void llassertfatal (/*@sef@*/ bool p_test);
# define llassertfatal(tst) \
    do { if (!(tst)) \
	   llfatalbug (message("%s:%d: fatal llassert failed: " #tst, \
			       cstring_makeLiteralTemp (__FILE__), __LINE__)); \
       } while (FALSE)

/*
** llassertprint and llassertprintret are in lclintMacros.nf
*/

extern void llmsg (/*@only@*/ cstring p_s) /*@modifies g_msgstream@*/ ;

extern void lldiagmsg (/*@only@*/ cstring p_s) /*@modifies stderr@*/ ;
extern void llmsgplain (/*@only@*/ cstring p_s) /*@modifies g_msgstream@*/ ;
extern void llhint (/*@only@*/ cstring p_s) 
   /*@globals g_currentloc, g_msgstream;@*/ 
   /*@modifies g_msgstream@*/ ;

extern /*@private@*/ /*@exits@*/ void xllfatalbug (char *p_srcFile, int p_srcLine,
						  /*@only@*/ cstring p_s) 
   /*@globals g_currentloc@*/
   /*@modifies stderr@*/ ;

extern /*@exits@*/ void llfatalbug (/*@only@*/ cstring p_s) 
   /*@globals g_currentloc@*/
   /*@modifies stderr@*/ ;
# define llfatalbug(p_s) \
     xllfatalbug (__FILE__, __LINE__, p_s)

extern /*@private@*/ bool xllgenerror (char *p_srcFile, int p_srcLine, flagcode p_o,
				       /*@only@*/ cstring p_s, fileloc p_fl)
     /*@modifies g_msgstream@*/ ;

extern bool llgenerror (flagcode p_o, /*@only@*/ cstring p_s, fileloc p_fl) 
     /*@modifies g_msgstream@*/ ;
# define llgenerror(p_o, p_s, p_fl) \
     xllgenerror (__FILE__, __LINE__, p_o, p_s, p_fl)

extern /*@private@*/ bool 
   xllgenhinterror (char *p_srcFile, int p_srcLine,
		    flagcode p_o, /*@only@*/ cstring p_s, /*@only@*/ cstring p_hint, 
		    fileloc p_fl) 
     /*@modifies g_msgstream@*/ ;

extern bool llgenhinterror (flagcode p_o, /*@only@*/ cstring p_s, /*@only@*/ cstring p_hint, 
			    fileloc p_fl) /*@modifies g_msgstream@*/ ;

# define llgenhinterror(p_o, p_s, p_hint, p_fl) \
     xllgenhinterror (__FILE__, __LINE__, p_o, p_s, p_hint, p_fl)


extern void llerror (flagcode p_o, /*@only@*/ cstring p_s) 
   /*@globals g_msgstream, g_currentloc@*/ 
   /*@modifies g_msgstream@*/ ;
# define llerror(p_o, p_s) \
   ((void) llgenerror (p_o, p_s, g_currentloc))

extern void llgenmsg (/*@only@*/ cstring p_s, fileloc p_fl) /*@modifies g_msgstream@*/ ;
extern /*@exits@*/ void llfatalerror (/*@only@*/ cstring p_s) /*@modifies g_msgstream@*/ ;
extern /*@exits@*/ void llfatalerrorLoc (/*@only@*/ cstring p_s) 
   /*@globals g_currentloc@*/ 
   /*@modifies stderr@*/ ;
extern void llparseerror (/*@only@*/ cstring p_s) 
   /*@globals g_msgstream, g_currentloc@*/ 
   /*@modifies g_msgstream@*/ ;

# ifndef NOLCL
extern /*@exits@*/ void lclplainfatalerror (/*@only@*/ cstring p_msg) /*@modifies g_msgstream@*/ ;
extern /*@exits@*/ void lclfatalbug (/*@temp@*/ char *p_msg) /*@modifies g_msgstream@*/ ;
extern int lclNumberErrors (void) /*@*/ ;
extern bool lclHadNewError (void) /*@modifies internalState@*/ ;
extern /*@exits@*/ void lclfatalerror (ltoken p_t, /*@only@*/ cstring p_msg);

extern void xlclerror (char *p_srcFile, int p_srcLine, ltoken p_t, /*@only@*/ cstring p_msg) ;

extern void lclerror (ltoken p_t, /*@only@*/ cstring p_msg);
# define lclerror(p_t,p_msg) \
   xlclerror (__FILE__, __LINE__, p_t, p_msg)

extern void lclbug (/*@only@*/ cstring p_s);
extern void lclplainerror (/*@only@*/ cstring p_msg);
extern bool lclHadError (void);
extern void lclRedeclarationError (ltoken p_id);
# endif

extern void llerror_flagWarning (/*@only@*/ cstring p_s) /*@modifies g_msgstream@*/ ;

extern /*@exits@*/ void llbugaux (cstring p_file, int p_line, /*@only@*/ cstring p_s) 
   /*@globals g_msgstream, g_currentloc@*/
   /*@modifies *g_msgstream@*/ ; 

extern /*@exits@*/ void llbug (/*@only@*/ cstring p_s) 
   /*@globals g_msgstream, g_currentloc@*/
   /*@modifies *g_msgstream@*/ ; 

   /* doesn't really exit, but don't mind errors if it doesn't */
# define llbug(s) llbugaux (cstring_makeLiteralTemp (__FILE__), __LINE__, s)

extern void llquietbugaux (/*@only@*/ cstring p_s, cstring, int) /*@modifies *g_msgstream@*/ ; 
extern void llquietbug (/*@only@*/ cstring) /*@modifies *g_msgstream@*/ ; 
# define llquietbug(s) llquietbugaux (s, cstring_makeLiteralTemp (__FILE__), __LINE__)

extern void llcontbug (/*@only@*/ cstring p_s) /*@modifies *g_msgstream@*/ ; 
       /* doesn't really exit, but don't mind errors if it doesn't */
# define llcontbug(s)  (llbug (s))

extern void cleanupMessages (void) 
   /*@globals g_msgstream, g_currentloc;@*/
   /*@modifies g_msgstream, internalState@*/ ;

/*
** Report error iff f1 and f2 are set.
*/

extern bool 
xoptgenerror2 (char *p_srcFile, int p_srcLine,
	       flagcode p_f1, flagcode p_f2, /*@only@*/ cstring p_s, fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;

extern bool 
optgenerror2 (flagcode p_f1, flagcode p_f2, /*@only@*/ cstring p_s, fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;
# define optgenerror2(p_f1, p_f2, p_s, p_loc) \
  (xoptgenerror2 (__FILE__, __LINE__, p_f1, p_f2, p_s, p_loc))

/*
** Report error if f1 is set and f2 is not set.
*/

extern bool 
xoptgenerror2n (char *p_srcFile, int p_srcLine,
		flagcode p_f1, flagcode p_f2, /*@only@*/ cstring p_s, fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;

extern bool 
optgenerror2n (flagcode p_f1, flagcode p_f2, /*@only@*/ cstring p_s, fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;
# define optgenerror2n(p_f1, p_f2, p_s, p_loc) \
  (xoptgenerror2n (__FILE__, __LINE__, p_f1, p_f2, p_s, p_loc))

extern /*@private@*/ bool xlloptgenerror (char *p_srcFile, int p_srcLine, flagcode p_o, /*@only@*/ cstring p_s, fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;

extern bool lloptgenerror (flagcode p_o, /*@only@*/ cstring p_s, fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;
# define lloptgenerror(p_o, p_s, p_loc) \
   (xlloptgenerror (__FILE__, __LINE__, p_o, p_s, p_loc))

extern bool xllnoptgenerror (char *p_srcFile, int p_srcLine,
			     flagcode p_o, /*@only@*/ cstring p_s, fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;

extern bool llnoptgenerror (flagcode p_o, /*@only@*/ cstring p_s, fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;
# define llnoptgenerror(p_o, p_s, p_loc) \
   (xllnoptgenerror (__FILE__, __LINE__, p_o, p_s, p_loc))

extern /*@private@*/ bool 
   xllgenformattypeerror (char *p_srcFile, int p_srcLine,
			  ctype p_t1, exprNode p_e1, 
			  ctype p_t2, exprNode p_e2,
			  /*@only@*/ cstring p_s, fileloc p_fl)
     /*@modifies *g_msgstream, internalState@*/ ;

extern bool llgenformattypeerror (ctype p_t1, exprNode p_e1, 
				  ctype p_t2, exprNode p_e2,
				  /*@only@*/ cstring p_s, fileloc p_fl)
  /*@modifies *g_msgstream, internalState@*/ ;
# define llgenformattypeerror(p_t1, p_e1, p_t2, p_e2, p_s, p_fl) \
  xllgenformattypeerror (__FILE__, __LINE__, p_t1, p_e1, p_t2, p_e2, p_s, p_fl)

extern bool xllgentypeerror (char *p_srcFile, int p_srcLine,
			     ctype p_t1, exprNode p_e1,
			     ctype p_t2, exprNode p_e2,
			     /*@only@*/ cstring p_s,
			     fileloc p_fl)
  /*@modifies *g_msgstream, internalState@*/ ;

extern bool llgentypeerror (ctype p_t1, exprNode p_e1,
			    ctype p_t2, exprNode p_e2,
			    /*@only@*/ cstring p_s,
			    fileloc p_fl)
  /*@modifies *g_msgstream, internalState@*/ ;
# define llgentypeerror(p_t1, p_e1, p_t2, p_e2, p_s, p_fl) \
  xllgentypeerror (__FILE__, __LINE__, p_t1, p_e1, p_t2, p_e2, p_s, p_fl)

extern bool gentypeerror (/*@sef@*/ ctype p_t1, 
			  /*@sef@*/ exprNode p_e1,
			  /*@sef@*/ ctype p_t2, 
			  /*@sef@*/ exprNode p_e2,
			  /*@sef@*/ /*@only@*/ cstring p_s,
			  /*@sef@*/ fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;

/*@-branchstate@*/ /* sef only s is freed on one branch */
#define gentypeerror(t1, e1, t2, e2, s, loc)      \
   (context_suppressFlagMsg (FLG_TYPE,loc) \
    ? (flagcode_recordSuppressed (FLG_TYPE), FALSE) \
    : llgentypeerror (t1, e1, t2, e2, s, loc))
/*@=branchstate@*/

/*
** These are macros to save evaluating s (which may be some expensive
** message generation function).
*/

extern bool 
  optgenerror (/*@sef@*/ flagcode p_o, /*@sef@*/ /*@only@*/ cstring p_s,
	       /*@sef@*/ fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;

/*@-branchstate@*/ /* sef only s is freed on one branch */
#define optgenerror(o,s,loc)      \
   (context_suppressFlagMsg(o,loc) ? (flagcode_recordSuppressed(o), FALSE) \
                                     : lloptgenerror (o, s, loc))
/*@=branchstate@*/

extern void 
  voptgenerror (/*@sef@*/ flagcode p_o, /*@sef@*/ /*@only@*/ cstring p_s, 
		/*@sef@*/ fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;
#define voptgenerror(o, s, loc)   ((void) optgenerror(o,s,loc))

extern /*@private@*/ bool 
  xfsgenerror (char *p_srcFile, int p_srcLine,
		flagSpec p_fs, /*@only@*/ cstring p_s, fileloc p_fl) 
     /*@modifies g_msgstream, internalState@*/ ;

extern bool fsgenerror (flagSpec p_fs, /*@only@*/ cstring p_s, fileloc p_fl) 
     /*@modifies g_msgstream, internalState@*/ ;
# define fsgenerror(p_fs, p_s, p_fl) \
     xfsgenerror (__FILE__, __LINE__, p_fs, p_s, p_fl)

extern void 
vfsgenerror (/*@sef@*/ flagSpec p_fs, /*@sef@*/ /*@only@*/ cstring p_s, 
	     /*@sef@*/ fileloc p_loc)
     /*@modifies *g_msgstream, internalState@*/ ;
#define vfsgenerror(fs, s, loc)   ((void) fsgenerror(fs,s,loc))

/*
** Reports a warning when f1 is ON and f2 is ON
*/

extern void 
  voptgenerror2 (/*@sef@*/ flagcode p_f1, /*@sef@*/ flagcode p_f2, 
		  /*@sef@*/ /*@only@*/ cstring p_s, /*@sef@*/ fileloc p_loc);
#define voptgenerror2(f1, f2, s, loc)   ((void) optgenerror2 (f1, f2, s, loc))

/*
** Reports a warning when f1 is ON and f2 is OFF
*/

extern void 
  voptgenerror2n (/*@sef@*/ flagcode p_f1, /*@sef@*/ flagcode p_f2, 
		  /*@sef@*/ /*@only@*/ cstring p_s, /*@sef@*/ fileloc p_loc);
#define voptgenerror2n(f1, f2, s, loc)   ((void) optgenerror2n (f1, f2, s, loc))

extern void noptgenerror (/*@sef@*/ flagcode p_code, 
			  /*@sef@*/ /*@only@*/ cstring p_s,
			  /*@sef@*/ fileloc p_loc);
/*@-branchstate@*/ /* sef only s is freed on one branch */
#define noptgenerror(o,s,loc)     \
   (context_suppressNotFlagMsg (o, loc) \
    ? (flagcode_recordSuppressed(o), FALSE) \
    : llnoptgenerror (o, s, loc))
/*@=branchstate@*/

extern void 
  vnoptgenerror (/*@sef@*/ flagcode p_code, /*@sef@*/ /*@only@*/ cstring p_msg,
		 /*@sef@*/ fileloc p_loc);
# define vnoptgenerror(o, s, loc) ((void) noptgenerror(o, s, loc))

extern void 
  vgenhinterror (flagcode p_code, /*@only@*/ cstring p_mst,
		 /*@only@*/ cstring p_hint, /*@sef@*/ fileloc p_loc);
# define vgenhinterror(o, s, h, loc) \
    ((void) llgenhinterror(o, s, h, loc))


extern /*@private@*/ bool /*@alt void@*/ xllforceerror (char *p_srcFile, int p_srcLine, flagcode p_code, /*@only@*/ cstring p_s, fileloc p_fl) 
     /*@modifies g_msgstream@*/ ; 

extern bool /*@alt void@*/ llforceerror (flagcode p_code, /*@only@*/ cstring p_s, fileloc p_fl) 
     /*@modifies g_msgstream@*/ ; 
# define llforceerror(p_code, p_s, p_fl) \
     (xllforceerror (__FILE__, __LINE__, p_code, p_s, p_fl))

extern /*@private@*/ bool xcppoptgenerror (char *p_srcFile, int p_srcLine, flagcode p_o,
			     /*@only@*/ cstring p_s, cppReader *p_pfile)
     /*@modifies g_msgstream, p_pfile@*/ ;

extern bool cppoptgenerror (flagcode p_code, /*@only@*/ cstring p_s, cppReader *p_pfile)
     /*@modifies g_msgstream, p_pfile@*/ ;
# define cppoptgenerror(p_code, p_s, p_pfile) \
    (xcppoptgenerror (__FILE__, __LINE__, p_code, p_s, p_pfile))

extern void llerrorlit (flagcode p_o, char *p_s);
# define llerrorlit(o, s)   ((void) llerror (o, cstring_makeLiteral (s)))

extern void llgenindentmsg (/*@only@*/ cstring p_s, fileloc p_fl) /*@modifies g_msgstream@*/ ;

extern /*@exits@*/ void llbugexitlit (char *p_s);
# define llbugexitlit(s)    (llbug (cstring_makeLiteral (s)))

extern void llbuglit (char *p_s);
# define llbuglit(s)        (llbug (cstring_makeLiteral (s)))

extern void llcontbuglit (char *p_s);
# define llcontbuglit(s)    (llbug (cstring_makeLiteral (s)))

extern void checkParseError (void);

extern void llmsglit (char *p_s);
# define llmsglit(s)        (llmsg (cstring_makeLiteral (s)))

extern void ppllerror (/*@only@*/ cstring p_s);
extern void genppllerrorhint (flagcode p_code, /*@only@*/ cstring p_s, 
			      /*@only@*/ cstring p_hint);
extern void genppllerror (flagcode p_code, /*@only@*/ cstring p_s);
extern /*@unused@*/ void pplldiagmsg (/*@only@*/ cstring p_s);
extern void loadllmsg (/*@only@*/ cstring p_s);

extern void llgenindentmsgnoloc (/*@only@*/ cstring p_s);

extern /*@observer@*/ cstring lldecodeerror (int) /*@*/ ;

extern void prepareMessage (void) /*@modifies internalState, g_msgstream@*/ ;
extern void closeMessage (void) /*@modifies internalState, g_msgstream@*/ ;

extern void llflush (void) /*@modifies systemState@*/ ;

# else
# error "Multiple include"
# endif

