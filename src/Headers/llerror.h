/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/

# ifndef LLERROR_H
# define LLERROR_H

extern bool /*@alt void@*/ check (bool p_x);
# define check(p_x)  doCheck (p_x, cstring_fromChars (#p_x), cstring_makeLiteralTemp (__FILE__), __LINE__)

extern bool doCheck (bool p_x, cstring p_pred, cstring p_file, int p_line);

extern /*@falseexit@*/ void llassert (/*@sef@*/ bool p_test);
# define llassert(tst) \
    do { if (!(tst)) { \
           if (context_getFlag (FLG_TRYTORECOVER)) checkParseError (); \
	   lldiagmsg (message ("%s:%d: at source point", \
			       cstring_makeLiteralTemp (__FILE__), __LINE__)); \
	   llbuglit ("llassert failed: " #tst); \
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
extern /*@exits@*/ void llfatalbug (/*@only@*/ cstring p_s) 
   /*@globals g_currentloc@*/
   /*@modifies stderr@*/ ;
extern void llgloberror (/*@only@*/ cstring p_s) /*@modifies g_msgstream@*/ ;
extern bool llgenerror (flagcode p_o, /*@only@*/ cstring p_s, fileloc p_fl) /*@modifies g_msgstream@*/ ;
extern bool llgenhinterror (flagcode p_o, /*@only@*/ cstring p_s, /*@only@*/ cstring p_hint, 
			    fileloc p_fl) /*@modifies g_msgstream@*/ ;
extern void llerror (flagcode p_o, /*@only@*/ cstring p_s) 
   /*@globals g_msgstream, g_currentloc@*/ 
   /*@modifies g_msgstream@*/ ;
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
extern void lclerror (ltoken p_t, /*@only@*/ cstring p_msg);

extern void lclbug (/*@only@*/ cstring p_s);
extern void lclplainerror (/*@only@*/ cstring p_msg);
extern bool lclHadError (void);
extern void lclRedeclarationError (ltoken p_id);
# endif

extern void flagWarning (/*@observer@*/ cstring p_s) /*@modifies g_msgstream@*/ ;

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
optgenerror2 (flagcode p_f1, flagcode p_f2, /*@only@*/ cstring p_s, fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;

/*
** Report error if f1 is set and f2 is not set.
*/

extern bool 
optgenerror2n (flagcode p_f1, flagcode p_f2, /*@only@*/ cstring p_s, fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;

extern bool lloptgenerror (flagcode p_o, /*@only@*/ cstring p_s, fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;

extern bool llnoptgenerror (flagcode p_o, /*@only@*/ cstring p_s, fileloc p_loc)
  /*@modifies *g_msgstream, internalState@*/ ;

extern bool llgenformattypeerror (ctype p_t1, exprNode p_e1, 
				  ctype p_t2, exprNode p_e2,
				  /*@only@*/ cstring p_s, fileloc p_fl)
  /*@modifies *g_msgstream, internalState@*/ ;

extern bool llgentypeerror (ctype p_t1, exprNode p_e1,
			    ctype p_t2, exprNode p_e2,
			    /*@only@*/ cstring p_s,
			    fileloc p_fl)
  /*@modifies *g_msgstream, internalState@*/ ;

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

extern void 
  voptgenerror2 (/*@sef@*/ flagcode p_f1, /*@sef@*/ flagcode p_f2, 
		 /*@sef@*/ /*@only@*/ cstring p_s, /*@sef@*/ fileloc p_loc);
#define voptgenerror2(f1, f2, s, loc)   ((void) optgenerror2 (f1, f2, s, loc))

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

extern void llforceerror (flagcode p_code, /*@only@*/ cstring p_s, fileloc p_fl) /*@modifies g_msgstream@*/ ; 

extern void llerrorlit (flagcode p_o, char *p_s);
extern void llgenindentmsg (/*@only@*/ cstring p_s, fileloc p_fl) /*@modifies g_msgstream@*/ ;

extern /*@exits@*/ void llbugexitlit (char *p_s);
extern void llbuglit (char *p_s);
extern void llcontbuglit (char *p_s);

# define llerror(o, s)      ((void) llgenerror (o, s, g_currentloc))
# define llerrorlit(o, s)   ((void) llerror (o, cstring_makeLiteral (s)))
# define llbuglit(s)        (llbug (cstring_makeLiteral (s)))
# define llcontbuglit(s)    (llbug (cstring_makeLiteral (s)))
# define llbugexitlit(s)    (llbug (cstring_makeLiteral (s)))

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

