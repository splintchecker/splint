/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
**
*/
/*
** cstring.h
*/

# ifndef CSTRING_H
# define CSTRING_H

/* does this cause problems on Solaris?  linux?  */
/* sgi's don't like it */
# ifndef IRIX
# ifdef NULL   /* hack so <strings.h> works */
# undef NULL
# endif
# endif

/* typedefs in forwardTypes */

extern /*@notnull@*/ cstring cstring_create (int p_n) /*@*/ ;
extern /*@only@*/ /*@notnull@*/  cstring cstring_newEmpty (void) ;
extern /*@notnull@*/ cstring cstring_appendChar (/*@only@*/ cstring p_s1, char p_c);

extern cstring cstring_concatLength (/*@only@*/ cstring p_s1, char *p_s2, int p_len) /*@*/ ;

extern /*@notnull@*/ cstring cstring_prependChar (char p_c, /*@temp@*/ cstring p_s1);
extern /*@notnull@*/ cstring cstring_prependCharO (char p_c, /*@only@*/ cstring p_s1);
extern cstring cstring_downcase (cstring p_s) /*@*/ ;
extern cstring cstring_copy (cstring p_s) /*@*/ ;
extern cstring cstring_copyLength (char *p_s, int p_len) /*@*/ ;

extern int cstring_toPosInt (cstring p_s) /*@*/ ;

typedef enum {
  CGE_SAME,     /* no differences */
  CGE_DISTINCT, /* significant differences */
  CGE_CASE,     /* case differences */
  CGE_LOOKALIKE /* lookalike differences */
} cmpcode;

extern cmpcode cstring_genericEqual (cstring p_s, cstring p_t,
				     int p_nchars,
				     bool p_caseinsensitive,
				     bool p_lookalike) /*@*/ ;

# ifdef WIN32
extern void cstring_replaceAll (cstring p_s, char p_old, char p_snew) /*@modifies p_s@*/ ;
# endif

extern void cstring_replaceLit (/*@unique@*/ cstring p_s, char *p_old, char *p_snew);
extern char cstring_firstChar (cstring p_s);
extern char cstring_secondChar (cstring p_s);
extern char cstring_lastChar (cstring p_s) /*@*/ ;
extern char cstring_getChar (cstring p_s, int p_n);
extern void cstring_setChar (cstring p_s, int p_n, char p_c);

# define cstring_secondChar(s) cstring_getChar (s, 2)

extern /*@exposed@*/ /*@notnull@*/ char *
  cstring_toCharsSafe (/*@temp@*/ /*@exposed@*/ /*@returned@*/ cstring p_s)
     /*@*/ ;

extern int cstring_length (cstring p_s) /*@*/ ;
extern bool cstring_contains (/*@unique@*/ cstring p_c, cstring p_sub) /*@*/ ;
extern bool cstring_containsChar (cstring p_c, char p_ch) /*@*/ ;
extern bool cstring_equal (cstring p_c1, cstring p_c2) /*@*/ ;
extern bool cstring_equalCaseInsensitive (cstring p_c1, cstring p_c2) /*@*/ ;
extern bool cstring_equalLen (cstring p_c1, cstring p_c2, int p_len) /*@*/ ;
extern bool cstring_equalLenCaseInsensitive (cstring p_c1, cstring p_c2, int p_len) /*@*/ ;
extern bool cstring_equalPrefix (cstring p_c1, char *p_c2) /*@*/ ;
extern bool cstring_equalCanonicalPrefix (cstring p_c1, char *p_c2) /*@*/ ;
extern bool cstring_equalLit (cstring p_c1, char *p_c2) /*@*/ ;
extern int cstring_compare (cstring p_c1, cstring p_c2) /*@*/ ;
extern int cstring_xcompare (cstring *p_c1, cstring *p_c2) /*@*/ ;

# ifndef NOLCL
extern bool cstring_hasNonAlphaNumBar (cstring p_s) /*@*/ ;
# endif

extern cstring cstring_elide (cstring p_s, int p_len) /*@*/ ;
extern cstring cstring_clip (/*@returned@*/ cstring p_s, int p_len) 
   /*@modifies p_s@*/ ;
extern void cstring_stripChars (cstring p_s, const char *p_clist) /*@modifies p_s@*/ ;

extern /*@dependent@*/ cstring 
  cstring_bsearch (cstring p_key,
		   char **p_table,
		   int p_nentries);

extern bool cstring_lessthan (cstring p_s1, cstring p_s2) /*@*/ ;
# define cstring_lessthan(s1, s2) (cstring_compare (s1, s2) < 0)

# define cstring_equalLit(s, lit) \
  (mstring_equal (cstring_toCharsSafe (s), lit))

extern bool cstring_equalFree (/*@only@*/ cstring p_c1, /*@only@*/ cstring p_c2);

/* really exposed! */
extern cstring 
  cstring_fromChars (/*@returned@*/ /*@null@*/ 
		     const /*@exposed@*/ /*@temp@*/ char *p_cp) /*@*/ ;

extern cstring
  cstring_fromCharsO (/*@null@*/ /*@only@*/ char *p_cp) /*@*/ ;
/*@-mustfree@*/
# define cstring_fromCharsO(s) cstring_fromChars(s)
/*@=mustfree@*/

extern cstring cstring_fromCharsNew (/*@null@*/ char *p_s) /*@*/ ;
# define cstring_fromCharsNew(s) cstring_copy(cstring_fromChars(s))

# ifndef NOLCL
extern /*@exposed@*/ /*@notnull@*/ 
  char *cstring_toCharsSafeO (/*@only@*/ /*@exposed@*/ /*@returned@*/ cstring p_s);
/*@-mustfree@*/
# define cstring_toCharsSafeO(s) cstring_toCharsSafe(s)
/*@=mustfree@*/
# endif

extern void cstring_free (/*@only@*/ cstring p_s);

/*@constant null cstring cstring_undefined;@*/
# define cstring_undefined     ((cstring)NULL)

extern /*@falsenull@*/ bool cstring_isDefined (cstring p_s) /*@*/ ;
extern /*@truenull@*/ bool cstring_isUndefined (cstring p_s) /*@*/ ;

extern /*@truenull@*/ bool cstring_isEmpty (cstring p_s) /*@*/ ;
extern /*@falsenull@*/ bool cstring_isNonEmpty (cstring p_s) /*@*/ ;

# define cstring_isDefined(s)   ((s) != cstring_undefined)
# define cstring_isUndefined(s) (!cstring_isDefined(s))

# define cstring_isEmpty(s)     (cstring_length(s) == 0)
# define cstring_isNonEmpty(s)  (!cstring_isEmpty(s))

extern cstring cstring_makeLiteral (char *) /*@*/ ;
extern /*@observer@*/ /*@dependent@*/ cstring 
  cstring_makeLiteralTemp (char *) /*@*/ ;

# define cstring_makeLiteral(s) (cstring_copy (cstring_fromChars (s)))
# define cstring_makeLiteralTemp(s) (cstring_fromChars (s))

extern cstring cstring_capitalize (cstring p_s) /*@*/ ;
extern cstring cstring_capitalizeFree (/*@only@*/ cstring p_s) /*@modifies p_s@*/ ;
extern cstring cstring_fill (cstring p_s, int p_n) /*@*/ ;
extern cstring cstring_prefix (cstring p_s, int p_n) /*@*/ ;
extern /*@observer@*/ cstring cstring_suffix (cstring p_s, int p_n) /*@*/ ;
extern cstring cstring_concat (cstring p_s, cstring p_t) /*@*/ ;

extern cstring 
  cstring_concatFree (/*@only@*/ cstring p_s, /*@only@*/ cstring p_t)
  /*@modifies p_s, p_t@*/ ;

extern cstring 
  cstring_concatFree1 (/*@only@*/ cstring p_s, cstring p_t) 
  /*@modifies p_s@*/ ;

# ifndef NOLCL
extern cstring 
  cstring_concatChars (/*@only@*/ cstring p_s, char *p_t)
  /*@modifies p_s@*/ ;

extern lsymbol cstring_toSymbol (/*@only@*/ cstring p_s) /*@*/ ;
# endif

extern void cstring_markOwned (/*@owned@*/ cstring p_s) /*@modifies p_s@*/ ;

extern cstring cstring_beforeChar (cstring p_s, char p_c) /*@*/ ;

/*@iter cstring_chars (sef cstring s, yield char c);@*/
# define cstring_chars(s, m_c) \
  if (cstring_isDefined (s)) \
    { char *m_current = (char *) (s); \
      char m_c; \
      for (; (m_c = *m_current) != '\0'; m_current++) {
# define end_cstring_chars }}

extern /*@observer@*/ cstring cstring_advanceWhiteSpace (cstring) /*@*/ ;

extern /*@only@*/ /*@notnull@*/ cstring
cstring_copySegment (cstring p_s, int p_findex, int p_tindex) /*@*/ ;

extern bool cstring_containsLit (/*@unique@*/ cstring p_c, char *p_sub) /*@*/ ;
# define cstring_containsLit(c,sub) \
  (cstring_contains (c, cstring_fromChars (sub)))

/*drl added July 2, 001 */
extern int cstring_compareLit (/*@unique@*/ cstring p_c, char *p_sub) /*@*/ ;
# define cstring_compareLit(c,sub) \
  (cstring_compare (c, cstring_fromChars (sub)))

# else
# error "Multiple include"
# endif



