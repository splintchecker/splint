/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** misc.h
**
** (general.c)
*/

# ifndef MISC_H
# define MISC_H

# ifndef NOLCL
# include "lclMisc.h"
# endif

extern void assertSet (/*@special@*/ /*@sef@*/ /*@unused@*/ void *p_x) 
   /*@sets p_x, *p_x@*/ ;
# define assertSet(x) ;

extern bool isLCLfile (cstring p_s) /*@*/ ;
extern bool isCext(char *p_ext) /*@*/ ;
extern char *addExtension(char *p_s, const char *p_suffix);

extern char *removeExtension (char *p_s, const char *p_suffix) /*@*/ ;

# ifndef NOLCL
extern char *removePath (char *p_s) /*@*/ ;
# endif

extern char *removePathFree (/*@only@*/ char *p_s) /*@*/ ;
extern char *removeAnyExtension (char *p_s) /*@*/ ;

extern int getInt (char **p_s) /*@modifies *p_s@*/ ;
extern char loadChar (char **p_s) /*@modifies *p_s@*/ ; 
extern double getDouble (char **p_s) /*@modifies *p_s@*/ ;
extern void docheckChar (char ** p_s, char p_c, char *p_file, int p_line)
   /*@modifies *p_s;@*/;

extern bool optCheckChar (char **p_s, char p_c) /*@modifies *p_s;@*/ ;
extern void checkChar (char **p_s, char p_c) /*@modifies *p_s;@*/ ;
# define checkChar(s,c)  (docheckChar (s, c, __FILE__, __LINE__))
extern /*@only@*/ /*@null@*/ char *getWord (char **p_s) /*@modifies *p_s@*/ ;
extern cstring getStringWord (char **p_s) /*@modifies *p_s@*/ ;

/*@-czechfcns@*/
extern int size_toInt (size_t p_x) /*@*/ ;
extern long size_toLong (size_t p_x) /*@*/ ;
extern size_t size_fromInt (int p_x) /*@*/ ;
extern int longUnsigned_toInt (long unsigned int p_x) /*@*/ ;
extern int long_toInt (long p_x) /*@*/ ;
extern long unsigned longUnsigned_fromInt (int p_x) /*@*/ ;
/*@=czechfcns@*/

/* string functions */

typedef /*@concrete@*/ char *mstring;
typedef /*@observer@*/ char *ob_mstring;
typedef /*@observer@*/ /*@null@*/ char *bn_mstring;

extern /*@unused@*/ /*@notnull@*/ /*@observer@*/ char *
  mstring_safePrint (/*@returned@*/ /*@null@*/ mstring p_s) /*@*/ ;
extern char *mstring_spaces (int p_n) /*@*/ ;
extern char *mstring_concat  (const char *p_s1, const char *p_s2) /*@*/ ;
extern char *mstring_concatFree (/*@only@*/ char *p_s1, /*@only@*/ char *p_s2) /*@modifies *p_s1, *p_s2*/ ;
extern char *mstring_concatFree1 (/*@only@*/ char *p_s1, const char *p_s2);
extern char *mstring_append (/*@only@*/ char *p_s1, char p_c);
extern char *mstring_copy (/*@null@*/ char *p_s1) /*@*/ ;
extern bool mstring_equalPrefix (const char *p_c1, const char *p_c2) /*@*/ ;
extern bool mstring_equal (/*@null@*/ const char *p_s1, /*@null@*/ const char *p_s2) /*@*/ ;

extern int mstring_length (/*@sef@*/ /*@null@*/ char *p_s) /*@*/ ;
# define mstring_length(s) \
  (((s) != NULL) ? size_toInt (strlen (s)) : 0)

extern /*@falsenull@*/ bool mstring_isDefined (/*@sef@*/ /*@null@*/ char *p_s) /*@*/ ;
# define mstring_isDefined(s) ((s) != NULL)

extern /*@truenull@*/ bool mstring_isEmpty (/*@sef@*/ /*@null@*/ char *p_s) /*@*/ ;
# define mstring_isEmpty(s) (mstring_length(s) == 0)

extern void mstring_markFree (/*@owned@*/ char *p_s) /*@modifies *p_s;@*/ ;

extern /*@notnull@*/ /*@only@*/ char *mstring_create (int p_n) /*@*/ ;
extern /*@notnull@*/ /*@only@*/ char *mstring_createEmpty (void) /*@*/ ;

extern void mstring_free (/*@out@*/ /*@only@*/ /*@null@*/ char *p_s);
# define mstring_free(s) sfree(s)

# define mstring_createEmpty() mstring_create(0)

extern int int_compare (/*@sef@*/ int p_x, /*@sef@*/ int p_y) /*@*/ ;
# define int_compare(x,y) (((x) > (y)) ? 1 : (((x) < (y)) ? -1 : 0))

/*@-macroparams@*/
/*@-macrofcndecl@*/ /* works for lots of types */
# define generic_compare(x,y) (((x) > (y)) ? 1 : (((x) < (y)) ? -1 : 0)) 
/*@=macrofcndecl@*/
/*@=macroparams@*/

/*@notfunction@*/
# define GET(s) ((s *)smalloc(sizeof(s)))

extern bool isHeaderFile (cstring) /*@*/ ;

extern void fputline (FILE *p_out, char *p_s) /*@modifies p_out@*/;

extern int int_log (int p_x) /*@*/ ;

extern char char_fromInt (int p_x) /*@*/ ;

extern /*@observer@*/ /*@null@*/ char *
  filenameExtension (/*@returned@*/ char *p_s) /*@*/ ;

extern /*@exposed@*/ char *removePreDirs (char *p_s);
extern void checkUngetc (int p_c, FILE *p_f) /*@modifies *p_f@*/ ;

/* These are defined by the bison library (?) */
extern /*@external@*/ int isatty (int);
extern /*@external@*/ int yywrap (void);

# else
# error "Multiple include"
# endif
