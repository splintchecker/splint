/*
** ansi.h --- LCLint Standard C Library
**
** Process with -DSTRICT to get strict library.
*/

/*@-nextlinemacros@*/
/*@+allimponly@*/
/*@+globsimpmodifiesnothing@*/

/*
** errno.h
*/

/*@constant int EDOM;@*/
/*@constant int ERANGE;@*/
/*@constant int EILSEQ;@*/

# ifdef STRICT
/*@checkedstrict@*/ extern int errno;
# else 
/*@unchecked@*/ extern int errno;
# endif

/*
** types 
*/

typedef /*@integraltype@*/ ptrdiff_t;    
typedef /*@unsignedintegraltype@*/ size_t;
typedef /*@signedintegraltype@*/ ssize_t;
typedef /*@integraltype@*/ wchar_t;

/*
** Added by Amendment 1 to ISO.
*/

typedef /*@integraltype@*/ wint_t;
typedef /*@abstract@*/ mbstate_t;

/*@constant null anytype NULL = 0;@*/

/*
** assert.h
*/

/*@constant lltX_bool NDEBUG;@*/

# ifdef STRICT
extern /*@falseexit@*/ void assert (/*@sef@*/ lltX_bool e) 
  /*@*/ ;
# else
extern /*@falseexit@*/ void assert (/*@sef@*/ lltX_bool /*@alt int@*/ e) 
  /*@*/ ;
# endif


/*
** ctype.h
*/

# ifdef STRICT
extern lltX_bool isalnum (int c) /*@*/ ;
extern lltX_bool isalpha (int c) /*@*/ ;
extern lltX_bool iscntrl (int c) /*@*/ ;
extern lltX_bool isdigit (int c) /*@*/ ;
extern lltX_bool isgraph (int c) /*@*/ ;
extern lltX_bool islower (int c) /*@*/ ;
extern lltX_bool isprint (int c) /*@*/ ;
extern lltX_bool ispunct (int c) /*@*/ ;
extern lltX_bool isspace (int c) /*@*/ ;
extern lltX_bool isupper (int c) /*@*/ ;
extern lltX_bool isxdigit (int c) /*@*/ ;
extern char tolower (int c) /*@*/ ;
extern char toupper (int c) /*@*/ ;
# else
extern lltX_bool /*@alt int@*/ isalnum (int /*@alt unsigned char@*/ c) /*@*/ ;
extern lltX_bool /*@alt int@*/ isalpha (int /*@alt unsigned char@*/ c) /*@*/ ;
extern lltX_bool /*@alt int@*/ iscntrl (int /*@alt unsigned char@*/ c) /*@*/ ;
extern lltX_bool /*@alt int@*/ isdigit (int /*@alt unsigned char@*/ c) /*@*/ ;
extern lltX_bool /*@alt int@*/ isgraph (int /*@alt unsigned char@*/ c) /*@*/ ;
extern lltX_bool /*@alt int@*/ islower (int /*@alt unsigned char@*/ c) /*@*/ ;
extern lltX_bool /*@alt int@*/ isprint (int /*@alt unsigned char@*/ c) /*@*/ ;
extern lltX_bool /*@alt int@*/ ispunct (int /*@alt unsigned char@*/ c) /*@*/ ;
extern lltX_bool /*@alt int@*/ isspace (int /*@alt unsigned char@*/ c) /*@*/ ;
extern lltX_bool /*@alt int@*/ isupper (int /*@alt unsigned char@*/ c) /*@*/ ;
extern lltX_bool /*@alt int@*/ isxdigit (int /*@alt unsigned char@*/ c) /*@*/ ;
extern char /*@alt int@*/ tolower (int /*@alt unsigned char@*/ c) /*@*/ ;
extern char /*@alt int@*/ toupper (int /*@alt unsigned char@*/ c) /*@*/ ;
# endif

/*
** locale.h
*/

struct lconv
{
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
} ;

/*@constant int LC_ALL;@*/
/*@constant int LC_COLLATE;@*/
/*@constant int LC_CTYPE;@*/
/*@constant int LC_MONETARY;@*/
/*@constant int LC_NUMERIC;@*/
/*@constant int LC_TIME;@*/

extern /*@observer@*/ /*@null@*/ char *setlocale (int category, /*@null@*/ char *locale) 
   /*@modifies internalState, errno@*/ ;

extern struct lconv *localeconv (void) /*@*/ ;

/*
** float.h
*/

/*
** Note, these are defined by macros, but NOT necessarily
** constants.  They may be used as lvalues.
*/

/*@unchecked@*/ extern int    DBL_DIG;
/*@unchecked@*/ extern double DBL_EPSILON;
/*@unchecked@*/ extern int    DBL_MANT_DIG;
/*@unchecked@*/ extern double DBL_MAX;
/*@unchecked@*/ extern int    DBL_MAX_10_EXP;
/*@unchecked@*/ extern int    DBL_MAX_EXP;
/*@unchecked@*/ extern double DBL_MIN;
/*@unchecked@*/ extern int    DBL_MIN_10_EXP;
/*@unchecked@*/ extern int    DBL_MIN_EXP;

/*@unchecked@*/ extern int   FLT_DIG;
/*@unchecked@*/ extern float FLT_EPSILON;
/*@unchecked@*/ extern int   FLT_MANT_DIG;
/*@unchecked@*/ extern float FLT_MAX;
/*@unchecked@*/ extern int   FLT_MAX_10_EXP;
/*@unchecked@*/ extern int   FLT_MAX_EXP;
/*@unchecked@*/ extern float FLT_MIN;
/*@unchecked@*/ extern int   FLT_MIN_10_EXP;
/*@unchecked@*/ extern int   FLT_MIN_EXP;
/*@constant            int   FLT_RADIX@*/
/*@unchecked@*/ extern int   FLT_ROUNDS;

/*@unchecked@*/ extern int         LDBL_DIG;
/*@unchecked@*/ extern long double LDBL_EPSILON;
/*@unchecked@*/ extern int         LDBL_MANT_DIG;
/*@unchecked@*/ extern long double LDBL_MAX;
/*@unchecked@*/ extern int         LDBL_MAX_10_EXP;
/*@unchecked@*/ extern int         LDBL_MAX_EXP;
/*@unchecked@*/ extern long double LDBL_MIN;
/*@unchecked@*/ extern int         LDBL_MIN_10_EXP;
/*@unchecked@*/ extern int         LDBL_MIN_EXP;

/*
** limits.h
*/

/*@constant int CHAR_BIT; @*/
/*@constant char CHAR_MAX; @*/
/*@constant char CHAR_MIN; @*/
/*@constant int INT_MAX; @*/
/*@constant int INT_MIN; @*/
/*@constant long int LONG_MAX; @*/
/*@constant long int LONG_MIN; @*/
/*@constant long int MB_LEN_MAX@*/
/*@constant signed char SCHAR_MAX; @*/
/*@constant signed char SCHAR_MIN; @*/
/*@constant short SHRT_MAX; @*/
/*@constant short SHRT_MIN; @*/
/*@constant unsigned char UCHAR_MAX; @*/
/*@constant unsigned char UCHAR_MIN; @*/
/*@constant unsigned int UINT_MAX; @*/
/*@constant unsigned long ULONG_MAX; @*/
/*@constant unsigned short USHRT_MAX; @*/

/*
** math.h
*/

/*@constant double HUGE_VAL; @*/

/*
** math functions that may have a range error modify errno 
*/

extern double sin (double x) /*@*/ ;
extern double cos (double x) /*@*/ ;
extern double tan (double x) /*@*/ ;
extern double asin (double x) /*@modifies errno@*/ ;
extern double acos (double x) /*@modifies errno@*/ ;
extern double atan (double x) /*@*/ ;
extern double atan2 (double y, double x) /*@*/ ;
extern double sinh (double x) /*@*/ ;
extern double cosh (double x) /*@modifies errno@*/ ;
extern double tanh (double x) /*@*/ ;

extern double exp (double x) /*@modifies errno@*/ ;
extern double ldexp (double x, int n) /*@modifies errno@*/ ;
extern double frexp (double x, /*@out@*/ int *xp) /*@modifies *xp;@*/ ;

extern double log (double x) /*@modifies errno@*/ ;
extern double log10 (double x) /*@modifies errno@*/ ;

extern double pow (double x, double y) /*@modifies errno@*/ ;
extern double sqrt (double x) /*@modifies errno@*/ ;

extern double ceil (double x) /*@*/ ;
extern double floor (double x) /*@*/ ;
extern double fabs (double x) /*@*/ ;

double modf (double x, /*@out@*/ double *ip) /*@modifies *ip;@*/ ;
double fmod (double x, double y) /*@*/ ;

/*
** These functions are optional in iso C.  An implementation does not
** have to provide them.  They are included in comments here, but
** are not required to be part of the standard library.
*/

# ifdef OPTIONAL_MATH

extern float acosf (float x) /*@modifies errno@*/ ;
extern long double acosl (long double x) /*@modifies errno@*/ ;
extern float asinf (float x)	/*@modifies errno@*/ ;
extern long double asinl (long double x) /*@modifies errno@*/ ;
extern float atanf (float x)	/*@*/ ;
extern long double atanl (long double x) /*@*/ ;
extern float atan2f (float y, float x) /*@*/ ;
extern long double atan2l (long double y, long double x) /*@*/ ;
extern float ceilf (float x)	/*@*/ ;
extern long double ceill (long double x) /*@*/ ;
extern float cosf (float x) /*@*/ ;
extern long double cosl (long double x) /*@*/ ;
extern float coshf (float x)	/*@modifies errno@*/ ;
extern long double coshl (long double x) /*@modifies errno@*/ ;
extern float expf (float x) /*@modifies errno@*/ ;
extern long double expl (long double x) /*@modifies errno@*/;
extern float fabsf (float x)	/*@*/ ;
extern long double fabsl (long double x) /*@*/ ;
extern float floorf (float x) /*@*/ ;
extern long double floorl (long double x) /*@*/ ;
extern float fmodf (float x, float y) /*@*/ ;
extern long double fmodl (long double x, long double y)	/*@*/ ;
extern float frexpf (float x, /*@out@*/ int *xp) /*@modifies *xp@*/;
extern long double frexpl (long double x, /*@out@*/ int *xp) /*@modifies *xp@*/;
extern float ldexpf (float x, int n) /*@modifies errno@*/ ;
extern long double ldexpl (long double x, int n) /*@modifies errno@*/ ;
extern float logf (float x) /*@modifies errno@*/ ;
extern long double logl (long double x) /*@modifies errno@*/ ;
extern float log10f (float x) /*@modifies errno@*/;
extern long double log10l (long double x) /*@modifies errno@*/;
extern float modff (float x, /*@out@*/ float *xp) /*@modifies *xp@*/ ;
extern long double modfl (long double x, /*@out@*/ long double *xp) /*@modifies *xp@*/ ;
extern float powf (float x, float y) /*@modifies errno@*/ ;
extern long double powl (long double x, long double y) /*@modifies errno@*/ ;
extern float sinf (float x) /*@*/ ;
extern long double sinl (long double x)	/*@*/ ;
extern float sinhf (float x) /*@*/ ;
extern long double sinhl (long double x) /*@*/ ;
extern float sqrtf (float x) /*@modifies errno@*/ ;
extern long double sqrtl (long double x) /*@modifies errno@*/ ;
extern float tanf (float x) /*@*/ ;
extern long double tanl (long double x)	/*@*/ ;
extern float tanhf (float x) /*@*/ ;
extern long double tanhl (long double x) /*@*/ ;

# endif

/*
** setjmp.h
*/

typedef /*@abstract@*/ /*@mutable@*/ void *jmp_buf;

extern int setjmp (/*@out@*/ jmp_buf env) /*@modifies env;@*/ ;
extern /*@mayexit@*/ void longjmp (jmp_buf env, int val) /*@*/ ;

/*
** signal.h
*/

/*@constant int SIGABRT; @*/
/*@constant int SIGFPE; @*/
/*@constant int SIGILL; @*/
/*@constant int SIGINT; @*/
/*@constant int SIGSEGV; @*/
/*@constant int SIGTERM; @*/

typedef /*@integraltype@*/ sig_atomic_t;

/*@constant void (*SIG_DFL)(int); @*/
/*@constant void (*SIG_ERR)(int); @*/
/*@constant void (*SIG_IGN)(int); @*/

/*
** signal takes an int, and a function takes int returns void, and
** returns the function (or NULL if unsuccessful).
*/

extern /*@null@*/ void (*signal (int sig, /*@null@*/ void (*func)(int))) (int) 
   /*@modifies internalState, errno;@*/ ;

extern /*@mayexit@*/ int raise (int sig) ;

/*
** stdarg.h
*/

typedef /*@abstract@*/ /*@mutable@*/ void *va_list;

extern void va_start (/*@out@*/ va_list ap, ...) /*@modifies ap;@*/ ;
extern void va_end (va_list va) /*@modifies va;@*/ ;

/*
** va_arg is builtin
*/

/*
** stdio.h
*/

typedef /*@abstract@*/ /*@mutable@*/ void *FILE;
typedef /*@abstract@*/ /*@mutable@*/ void *fpos_t;

/*@constant int _IOFBF; @*/
/*@constant int _IOLBF; @*/
/*@constant int _IONBF; @*/

/*@constant int BUFSIZ; @*/
/*@constant int EOF; @*/

/*@constant int FOPEN_MAX; @*/
/*@constant int FILENAME_MAX; @*/

/*@constant int L_tmpnam; @*/

/*@constant int SEEK_CUR; @*/
/*@constant int SEEK_END; @*/
/*@constant int SEEK_SET; @*/

/*@constant int TMP_MAX; @*/

# ifdef STRICT
/*@checked@*/ FILE *stderr;
/*@checked@*/ FILE *stdin;
/*@checked@*/ FILE *stdout;
# else
/*@unchecked@*/ FILE *stderr;
/*@unchecked@*/ FILE *stdin;
/*@unchecked@*/ FILE *stdout;
# endif

extern int remove (char *filename) /*@modifies fileSystem, errno@*/ ;
extern int rename (char *old, char *new) /*@modifies fileSystem, errno@*/ ;

extern /*@null@*/ FILE *tmpfile (void) /*@modifies fileSystem@*/ ;
extern /*@observer@*/ char *
  tmpnam (/*@out@*/ /*@null@*/ /*@returned@*/ char *s) 
  /*@modifies *s, internalState@*/ ;

extern int fclose (FILE *stream) /*@modifies *stream, errno, fileSystem;@*/ ;
extern int fflush (/*@null@*/ FILE *stream) 
   /*@modifies *stream, errno, fileSystem;@*/ ;

extern /*@null@*/ /*@dependent@*/ FILE *fopen (char *filename, char *mode) 
   /*@modifies fileSystem@*/ ;         

extern /*@null@*/ FILE *freopen (char *filename, char *mode, FILE *stream) 
  /*@modifies *stream, fileSystem, errno@*/ ;

extern void setbuf (FILE *stream, /*@null@*/ /*@exposed@*/ char *buf) 
   /*@modifies fileSystem, *stream, *buf@*/ ;

extern int setvbuf (FILE *stream, /*@null@*/ /*@exposed@*/ char *buf, 
		    int mode, size_t size)
   /*@modifies fileSystem, *stream, *buf@*/ ;

# ifdef STRICT
/*@printflike@*/ 
extern int fprintf (FILE *stream, char *format, ...)
   /*@modifies fileSystem, *stream@*/ ;
# else
/*@printflike@*/ 
extern int /*@alt void@*/ fprintf (FILE *stream, char *format, ...)
   /*@modifies fileSystem, *stream@*/ ;
# endif

/*@scanflike@*/ 
extern int fscanf (FILE *stream, char *format, ...)
   /*@modifies fileSystem, *stream@*/ ;

# ifdef STRICT
/*@printflike@*/ 
extern int printf (char *format, ...) 
   /*@globals stdout@*/
   /*@modifies fileSystem, *stdout@*/ ;
# else
/*@printflike@*/ 
extern int /*@alt void@*/ printf (char *format, ...) 
   /*@globals stdout@*/
   /*@modifies fileSystem, *stdout@*/ ;
# endif

/*@scanflike@*/
extern int scanf(char *format, ...)
   /*@globals stdin@*/
   /*@modifies fileSystem, *stdin@*/ ;

# ifdef STRICT
/*@printflike@*/ 
extern int sprintf (/*@out@*/ char *s, char *format, ...) 
   /*@modifies *s@*/ ;
# else
/*@printflike@*/ 
extern int /*@alt void@*/ sprintf (/*@out@*/ char *s, char *format, ...) 
   /*@modifies *s@*/ ;
# endif

/*@scanflike@*/ 
int sscanf (/*@out@*/ char *s, char *format, ...) /*@*/ ;
   /* modifies extra arguments */

int vprintf (const char *format, va_list arg)
   /*@globals stdout@*/
   /*@modifies fileSystem, *stdout@*/ ;

int vfprintf (FILE *stream, char *format, va_list arg)
   /*@modifies fileSystem, *stream, arg, errno@*/ ;

int vsprintf (/*@out@*/ char *str, const char *format, va_list ap)
     /*@warn bufferoverflowhigh "Use vsnprintf instead"@*/
     /*@modifies str@*/ ;

int vsnprintf (/*@out@*/ char *str, size_t size, const char *format, va_list ap)
     /*@requires maxSet(str) >= size@*/
     /*@modifies str@*/ ;

extern int fgetc (FILE *stream) 
   /*@modifies fileSystem, *stream, errno@*/ ;

extern /*@null@*/ char *
  fgets (/*@returned@*/ /*@out@*/ char *s, int n, FILE *stream)
     /*@modifies fileSystem, *s, *stream, errno@*/
     /*@requires MaxSet(s) >= (n -1); @*/
     /*@ensures MaxRead(s) <= (n -1) /\ MaxRead(s) >= 0; @*/
     ;

extern int fputc (int /*@alt char@*/ c, FILE *stream)
  /*@modifies fileSystem, *stream, errno@*/ ;

extern int fputs (char *s, FILE *stream)
  /*@modifies fileSystem, *stream@*/ ;

/* note use of sef --- stream may be evaluated more than once */
extern int getc (/*@sef@*/ FILE *stream)
  /*@modifies fileSystem, *stream@*/ ;

extern int getchar (void) /*@globals stdin@*/ /*@modifies fileSystem, *stdin@*/ ;

extern /*@null@*/ char *gets (/*@out@*/ char *s) 
   /*@warn bufferoverflowhigh
           "Use of gets leads to a buffer overflow vulnerability.  Use fgets instead"@*/
   /*@globals stdin@*/ /*@modifies fileSystem, *s, *stdin, errno@*/ ;

extern int putc (int /*@alt char@*/ c, /*@sef@*/ FILE *stream)
  /*@modifies fileSystem, *stream;@*/ ;

extern int putchar (int /*@alt char@*/ c)
   /*@globals stdout@*/ /*@modifies fileSystem, *stdout@*/ ; 

extern int puts (const char *s)
   /*@globals stdout@*/ /*@modifies fileSystem, *stdout@*/ ; 

extern int ungetc (int /*@alt char@*/ c, FILE *stream)
  /*@modifies fileSystem, *stream, errno@*/ ;

extern size_t 
  fread (/*@out@*/ void *ptr, size_t size, size_t nobj, FILE *stream)
  /*@modifies fileSystem, *ptr, *stream, errno@*/ ;

extern size_t fwrite (void *ptr, size_t size, size_t nobj, FILE *stream)
  /*@modifies fileSystem, *stream, errno@*/ ;

extern int fgetpos (FILE *stream, /*@out@*/ fpos_t *pos)
  /*@modifies *pos, errno@*/ ;

extern int fseek (FILE *stream, long int offset, int whence)
  /*@modifies fileSystem, *stream, errno@*/ ;

extern int fsetpos (FILE *stream, fpos_t *pos)
   /*@modifies fileSystem, *stream, errno@*/ ;

extern long int ftell(FILE *stream) /*@modifies errno@*/ ;

extern void rewind (FILE *stream) /*@modifies *stream@*/ ;
extern void clearerr (FILE *stream) /*@modifies *stream@*/ ;

extern int feof (FILE *stream) /*@modifies errno@*/ ;
extern int ferror (FILE *stream) /*@modifies errno@*/ ;

extern void perror (/*@null@*/ char *s) 
   /*@globals errno, stderr@*/ /*@modifies fileSystem, *stderr@*/ ; 

/*
** stdlib.h
*/

extern double atof (char *s) /*@*/ ;
extern int atoi (char *s) /*@*/ ;
extern long int atol (char *s) /*@*/ ;

extern double strtod (char *s, /*@null@*/ /*@out@*/ char **endp)
  /*@modifies *endp, errno@*/ ;

extern long strtol (char *s, /*@null@*/ /*@out@*/ char **endp, int base)
  /*@modifies *endp, errno@*/ ;

extern unsigned long 
  strtoul (char *s, /*@null@*/ /*@out@*/ char **endp, int base)
  /*@modifies *endp, errno@*/ ;

/*@constant int RAND_MAX; @*/
extern int rand (void) /*@modifies internalState@*/ ;
extern void srand (unsigned int seed) /*@modifies internalState@*/ ;

/*
  drl
  changed 12/29/2000
*/

extern /*@null@*/ /*@only@*/ void *calloc (size_t nobj, size_t size) /*@*/
     /*@ensures MaxSet(result) == (nobj - 1); @*/ ;
extern /*@null@*/ /*@out@*/ /*@only@*/ void *malloc (size_t size) /*@*/
     /*@ensures MaxSet(result) == (size - 1); @*/ ;

/*end drl changed */
     
/* 11 June 1997: removed out on return value */

# if 0
extern /*@null@*/ /*@only@*/ void *
   realloc (/*@null@*/ /*@only@*/ /*@special@*/ void *p, 
	    size_t size) /*@releases p@*/ /*@modifies *p@*/
     /*@ensures MaxSet(result) >= (size - 1) @*/;
# endif

/*
** LCLint annotations cannot fully describe realloc.  The semantics we
** want are:
**    realloc returns null: ownership of parameter is not changed
**    realloc returns non-null: ownership of parameter is transferred to return value
**
** Otherwise, storage is in the same state before and after the call.
*/

extern /*@null@*/ /*@only@*/ void *
   realloc (/*@null@*/ /*@only@*/ /*@out@*/ /*@returned@*/ void *p, size_t size) 
     /*@modifies *p@*/ /*@ensures MaxSet(result) >= (size - 1) @*/;

extern void free (/*@null@*/ /*@out@*/ /*@only@*/ void *p) /*@modifies p@*/ ;

/*@constant int EXIT_FAILURE; @*/ 
/*@constant int EXIT_SUCCESS; @*/ 

extern /*@exits@*/ void abort (void) /*@*/ ;
extern /*@exits@*/ void exit (int status) /*@*/ ;
extern int atexit (void (*func)(void)) /*@modifies internalState@*/ ;

extern /*@observer@*/ /*@null@*/ char *getenv (char *name) /*@*/ ;

extern int system (/*@null@*/ char *s) /*@modifies fileSystem@*/ ;

extern /*@null@*/ /*@dependent@*/ void *
  bsearch (void *key, void *base, 
	   size_t n, size_t size, 
	   int (*compar)(void *, void *)) /*@*/ ;

extern void qsort (void *base, size_t n, size_t size, 
		   int (*compar)(void *, void *))
   /*@modifies *base, errno@*/ ;

extern int abs (int n) /*@*/ ;

typedef /*@concrete@*/ struct 
{
  int quot;
  int rem;
} div_t ;

extern div_t div (int num, int denom) /*@*/ ;

extern long int labs (long int n) /*@*/ ; 

typedef /*@concrete@*/ struct 
{
  long int quot;
  long int rem;
} ldiv_t ;

extern ldiv_t ldiv (long num, long denom) /*@*/ ;

/*@constant size_t MB_CUR_MAX; @*/

/*
** wchar_t and wint_t functions added by Amendment 1 to ISO.
*/

/*@constant int WCHAR_MAX@*/
/*@constant int WCHAR_MIN@*/
/*@constant wint_t WEOF@*/

extern wint_t btowc (int c) /*@*/ ;

extern wint_t fgetwc (FILE *fp)	/*@modifies fileSystem, *fp*/ ;

extern /*@null@*/ wchar_t *fgetws (/*@returned@*/ wchar_t *s, int n, FILE *stream)
   /*@modifies fileSystem, *s, *stream@*/;

extern wint_t fputwc (wchar_t c, FILE *stream)
   /*@modifies fileSystem, *stream@*/;

extern int fputws (const wchar_t *s, FILE *stream)
   /*@modifies fileSystem, *stream@*/ ;

extern int fwide (FILE *stream, int mode) /*@*/ ; 
   /* does not modify the stream */

/*@printflike@*/ extern int fwprintf (FILE *stream, const wchar_t *format, ...)
    /*@modifies *stream, fileSystem@*/ ;

/*@scanflike@*/ extern int fwscanf (FILE *stream, const wchar_t *format, ...)
	/*@modifies *stream, fileSystem@*/ ;

/* note use of sef --- stream may be evaluated more than once */
extern wint_t getwc (/*@sef@*/ FILE *stream) /*@modifies fileSystem, *stream@*/ ;

extern wint_t getwchar (void) /*@modifies fileSystem, *stdin@*/;

extern size_t mbrlen (const char *s, size_t n, /*@null@*/ mbstate_t *ps) /*@*/ ;

extern size_t mbrtowc (/*@null@*/ wchar_t *pwc, const char *s, size_t n,
		       /*@null@*/ mbstate_t *ps) 
   /*@modifies *pwc@*/ ;

extern int mbsinit (/*@null@*/ const mbstate_t *ps) /*@*/ ;

extern size_t mbsrtowcs (/*@null@*/ wchar_t *dst, const char **src, size_t len,
			 /*@null@*/ mbstate_t *ps) 
   /*@modifies *dst@*/ ;

/* note use of sef --- stream may be evaluated more than once */
extern wint_t putwc (wchar_t c, /*@sef@*/ FILE *stream)	/*@modifies fileSystem, *stream@*/ ;

extern wint_t putwchar (wchar_t c) /*@modifies fileSystem, *stdout@*/ ;

/*@printflike@*/ extern int swprintf (wchar_t *s, size_t n, const wchar_t *format, ...)
   /*@modifies *s@*/ ;

/*@scanflike@*/ extern int swscanf (const wchar_t *s, const wchar_t *format, ...)
   /*@modifies *stdin@*/ ;

extern wint_t ungetwc (wint_t c, FILE *stream) /*@modifies fileSystem, *stream@*/ ;

extern int vfwprintf (FILE *stream, const wchar_t *format, va_list arg)
   /*@modifies fileSystem, *stream@*/ ;

extern int vswprintf (wchar_t *s, size_t n, const wchar_t *format, va_list arg)
   /*@modifies *s@*/ ;

extern int vwprintf (const wchar_t *format, va_list arg)
   /*@modifies fileSystem, *stdout@*/ ;

extern size_t wcrtomb (/*@null@*/ /*@out@*/ char *s, wchar_t wc, /*@null@*/ mbstate_t *ps)
   /*@modifies *s@*/;

extern void /*@alt wchar_t *@*/
  wcscat (/*@unique@*/ /*@returned@*/ /*@out@*/ wchar_t *s1, const wchar_t *s2)
  /*@modifies *s1@*/ ;

extern /*@exposed@*/ /*@null@*/ wchar_t *
  wcschr (/*@returned@*/ const wchar_t *s, wchar_t c)
  /*@*/ ;

extern int wcscmp (const wchar_t *s1, const wchar_t *s2) /*@*/ ;

extern int wcscoll (const wchar_t *s1, const wchar_t *s2) /*@*/ ;

extern void /*@alt wchar_t *@*/ 
  wcscpy (/*@unique@*/ /*@out@*/ /*@returned@*/ wchar_t *s1, const wchar_t *s2)
  /*@modifies *s1@*/ ;

extern size_t wcscspn (const wchar_t *s1, const wchar_t *s2) /*@*/ ;

extern size_t wcsftime (/*@out@*/ wchar_t *s, size_t maxsize, const wchar_t *format,
			const struct tm *timeptr) 
   /*@modifies *s@*/ ;

extern size_t wcslen (const wchar_t *s) /*@*/ ;

extern void /*@alt wchar_t *@*/
  wcsncat (/*@unique@*/ /*@returned@*/ /*@out@*/ wchar_t *s1, const wchar_t *s2,
	   size_t n) 
  /*@modifies *s1@*/ ;

extern int wcsncmp (const wchar_t *s1, const wchar_t *s2, size_t n) /*@*/ ;

extern void /*@alt wchar_t *@*/
  wcsncpy (/*@unique@*/ /*@returned@*/ /*@out@*/ wchar_t *s1, const wchar_t *s2,
	   size_t n) 
   /*@modifies *s1@*/ ;

extern /*@null@*/ wchar_t *
  wcspbrk (/*@returned@*/ const wchar_t *s1, const wchar_t *s2)
  /*@*/ ;

extern /*@null@*/ wchar_t *
  wcsrchr (/*@returned@*/ const wchar_t *s, wchar_t c)
  /*@*/ ;

extern size_t
  wcsrtombs (/*@null@*/ char *dst, const wchar_t **src, size_t len,
	     /*@null@*/ mbstate_t *ps) 
  /*@modifies *src@*/ ;

extern size_t wcsspn (const wchar_t *s1, const wchar_t *s2) /*@*/ ;

extern /*@null@*/ wchar_t *wcsstr (const wchar_t *s1, const wchar_t *s2) /*@*/ ;

extern double wcstod (const wchar_t *nptr, /*@null@*/ wchar_t **endptr)
   /*@modifies *endptr@*/ ;

extern /*@null@*/ wchar_t *
  wcstok (/*@null@*/ wchar_t *s1, const wchar_t *s2, wchar_t **ptr)
  /*@modifies *ptr@*/;

extern long wcstol (const wchar_t *nptr, /*@null@*/ wchar_t **endptr, int base)
   /*@modifies *endptr@*/;

extern unsigned long
  wcstoul (const wchar_t *nptr, /*@null@*/ wchar_t **endptr, int base)
  /*@modifies *endptr@*/;

extern size_t
  wcsxfrm (/*@null@*/ wchar_t *s1, const wchar_t *s2, size_t n)
  /*@modifies *s1@*/;

extern int wctob (wint_t c) /*@*/;

extern /*@null@*/ wchar_t *wmemchr (const wchar_t *s, wchar_t c, size_t n) /*@*/ ;

extern int wmemcmp (const wchar_t *s1, const wchar_t *s2, size_t n) /*@*/ ;

extern wchar_t *wmemcpy (/*@returned@*/ wchar_t *s1, const wchar_t *s2, size_t n)
   /*@modifies *s1@*/;

extern wchar_t *wmemmove (/*@returned@*/ wchar_t *s1, const wchar_t *s2, size_t n)
   /*@modifies *s1@*/;

extern wchar_t *wmemset (/*@returned@*/ wchar_t *s, wchar_t c, size_t n)
   /*@modifies *s@*/;

/*@printflike@*/ extern int wprintf (const wchar_t *format, ...)
   /*@globals stdout@*/ /*@modifies errno, *stdout@*/;

/*@scanflike@*/ extern int
  wscanf (const wchar_t *format, ...)
  /*@globals stdin@*/ /*@modifies errno, *stdin@*/;

/*
** wctype.h (added by Amendment 1)
*/

/* Warning: not sure about these (maybe abstract?): */
typedef /*@integraltype@*/ wctype_t;
typedef /*@integraltype@*/ wctrans_t;

# ifdef STRICT
extern lltX_bool iswalnum (wint_t c) /*@*/ ;
extern lltX_bool iswalpha (wint_t c) /*@*/ ;
extern lltX_bool iswcntrl (wint_t c) /*@*/ ;
extern lltX_bool iswctype (wint_t c, wctype_t ctg) /*@*/ ;
extern lltX_bool iswdigit (wint_t c) /*@*/ ;
extern lltX_bool iswgraph (wint_t c) /*@*/ ;
extern lltX_bool iswlower (wint_t c) /*@*/ ;
extern lltX_bool iswprint (wint_t c) /*@*/ ;
extern lltX_bool iswpunct (wint_t c) /*@*/ ;
extern lltX_bool iswspace (wint_t c) /*@*/ ;
extern lltX_bool iswupper (wint_t c) /*@*/ ;
extern lltX_bool iswxdigit (wint_t c) /*@*/ ;

extern wint_t towctrans (wint_t c, wctrans_t ctg) /*@*/ ;
extern wint_t towlower (wint_t c) /*@*/ ;
extern wint_t towupper (wint_t c) /*@*/ ;
# else
extern lltX_bool /*@alt int@*/ iswalnum (wint_t c) /*@*/ ;
extern lltX_bool /*@alt int@*/ iswalpha (wint_t c) /*@*/ ;
extern lltX_bool /*@alt int@*/ iswcntrl (wint_t c) /*@*/ ;
extern lltX_bool /*@alt int@*/ iswctype (wint_t c, wctype_t ctg) /*@*/ ;
extern lltX_bool /*@alt int@*/ iswdigit (wint_t c) /*@*/ ;
extern lltX_bool /*@alt int@*/ iswgraph (wint_t c) /*@*/ ;
extern lltX_bool /*@alt int@*/ iswlower (wint_t c) /*@*/ ;
extern lltX_bool /*@alt int@*/ iswprint (wint_t c) /*@*/ ;
extern lltX_bool /*@alt int@*/ iswpunct (wint_t c) /*@*/ ;
extern lltX_bool /*@alt int@*/ iswspace (wint_t c) /*@*/ ;
extern lltX_bool /*@alt int@*/ iswupper (wint_t c) /*@*/ ;
extern lltX_bool /*@alt int@*/ iswxdigit (wint_t c) /*@*/ ;

extern wint_t /*@alt int@*/ towctrans (wint_t c, wctrans_t ctg)	/*@*/ ;
extern wint_t /*@alt int@*/ towlower (wint_t c)	/*@*/ ;
extern wint_t /*@alt int@*/ towupper (wint_t c)	/*@*/ ;
# endif

extern wctrans_t wctrans (const char *property)	/*@*/ ;
extern wctype_t wctype (const char *property) /*@*/ ;

extern int mblen (char *s, size_t n) /*@*/ ;
extern int mbtowc (/*@null@*/ wchar_t *pwc, /*@null@*/ char *s, size_t n) 
   /*@modifies *pwc@*/ ;
extern int wctomb (/*@out@*/ /*@null@*/ char *s, wchar_t wchar) 
   /*@modifies *s@*/ ;
extern size_t mbstowcs (/*@out@*/ wchar_t *pwcs, char *s, size_t n)
  /*@modifies *pwcs@*/ ;
extern size_t wcstombs (/*@out@*/ char *s, wchar_t *pwcs, size_t n)
  /*@modifies *s@*/ ;

/*
** string.h
*/
     
extern void /*@alt void * @*/
  memcpy (/*@unique@*/ /*@returned@*/ /*@out@*/ void *s1, void *s2, size_t n) 
  /*@modifies *s1@*/
     /*@requires MaxRead(s2) >= (n - 1) /\ MaxSet(s1) >= (n - 1); @*/
     ;

extern void /*@alt void * @*/
  memmove (/*@returned@*/ /*@out@*/ void *s1, void *s2, size_t n)
  /*@modifies *s1@*/
  /*@requires MaxRead(s2) >= (n - 1) /\ MaxSet(s1) >= (n - 1); @*/
   ;

  
  /* drl
     modifed  12/29/2000
  */

extern void /*@alt char * @*/
  strcpy (/*@unique@*/ /*@out@*/ /*@returned@*/ char *s1, char *s2) 
     /*@modifies *s1@*/ 
     /*@requires maxSet(s1) >= maxRead(s2) @*/
     /*@ensures MaxRead(s1) == MaxRead (s2) /\ MaxRead(result) == MaxRead(s2) /\ MaxSet(result) == MaxSet(s1); @*/;

extern void /*@alt char * @*/
  strncpy (/*@unique@*/ /*@out@*/ /*@returned@*/ char *s1, char *s2, size_t n) 
  /*@modifies *s1@*/      /*@requires MaxSet(s1) >= ( n - 1 ); @*/ /*@ensures MaxRead (s2) >= MaxRead(s1) /\ MaxRead (s1) <= n; @*/; 

extern void /*@alt char * @*/
  strcat (/*@unique@*/ /*@returned@*/ char *s1, char *s2) 
     /*@modifies *s1@*/ /*@requires MaxSet(s1) >= (MaxRead(s1) + MaxRead(s2) );@*/
     /*@ensures MaxRead(result) == (MaxRead(s1) + MaxRead(s2) );@*/;

extern void /*@alt char * @*/
  strncat (/*@unique@*/ /*@returned@*/ char *s1, char *s2, size_t n)
     /*@modifies *s1@*/ /*@requires MaxSet(s1) >= ( MaxRead(s1) + n); @*/ /*@ensures MaxRead(result) >= (MaxRead(s1) + n); @*/;

     /*drl end*/
     
extern int memcmp (void *s1, void *s2, size_t n) /*@*/ ;
extern int strcmp (char *s1, char *s2) /*@*/ ;
extern int strcoll (char *s1, char *s2) /*@*/ ;
extern int strncmp (char *s1, char *s2, size_t n) /*@*/ ;
extern size_t strxfrm (/*@out@*/ /*@null@*/ char *s1, char *s2, size_t n) 
  /*@modifies *s1@*/ ;  /* s1 may be null only if n == 0 */ 

extern /*@null@*/ void *memchr (void *s, int c, size_t n) /*@*/ ;

# ifdef STRICT
extern /*@exposed@*/ /*@null@*/ char *
strchr (/*@returned@*/ char *s, char c) /*@*/ /*@ensures MaxSet(result) >= 0 /\ MaxSet(result) <= MaxSet(s) /\ MaxRead (result) <= MaxRead(s) /\ MaxRead(result) >= 0 @*/ ;
# else
extern /*@exposed@*/ /*@null@*/ char *
  strchr (/*@returned@*/ char *s, int /*@alt char@*/ c) /*@*/ /*@ensures MaxSet(result) >= 0 /\ MaxSet(result) <= MaxSet(s) /\ MaxRead (result) <= MaxRead(s) /\ MaxRead(result) >= 0; @*/ ;
# endif

extern size_t strcspn (char *s1, char *s2) /*@*/ ;
extern /*@null@*/ /*@exposed@*/ char *
  strpbrk (/*@returned@*/ char *s, char *t) /*@*/ ;

# ifdef STRICT
extern /*@null@*/ /*@exposed@*/ char *
  strrchr (/*@returned@*/ char *s, char c) /*@*/  /*@ensures MaxSet(result) >= 0 /\ MaxSet(result) <= MaxSet(s) /\ MaxRead (result) <= MaxRead(s) /\ MaxRead(result) >= 0 @*/ ;
# else
extern /*@null@*/ /*@exposed@*/ char *
  strrchr (/*@returned@*/ char *s, int /*@alt char@*/ c) /*@*/  /*@ensures MaxSet(result) >= 0 /\ MaxSet(result) <= MaxSet(s) /\ MaxRead (result) <= MaxRead(s) /\ MaxRead(result) >= 0 @*/ ;
# endif

extern size_t strspn (char *s, char *t) /*@*/ ;

extern /*@null@*/ /*@exposed@*/  char *
  strstr (/*@returned@*/ /*@unique@*/ char *s, char *t) /*@*/
       /*@ensures MaxSet(result) >= 0 /\ MaxSet(result) <= MaxSet(s) /\ MaxRead (result) <= MaxRead(s) /\ MaxRead(result) >= 0 @*/ ;

extern /*@null@*/ /*@exposed@*/ char *
  strtok (/*@returned@*/ /*@null@*/ char *s, char *t)
  /*@modifies *s, internalState, errno@*/ ;

extern void /*@alt void *@*/ memset (/*@out@*/ /*@returned@*/ void *s, 
				     int c, size_t n)
     /*@modifies *s@*/ /*@requires MaxSet(s) >= (n - 1) @*/ /*@ensures MaxRead(s) >= (n - 1) @*/ ;

extern /*@observer@*/ char *strerror (int errnum) /*@*/ ;

/*drl */
extern size_t strlen (char *s) /*@*/ /*@ensures result == MaxRead(s); @*/; 

/*
** time.h
*/

/*@constant int CLOCKS_PER_SEC;@*/

typedef /*@integraltype@*/ clock_t;
typedef /*@integraltype@*/ time_t;

struct tm
  {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
  } ;

extern clock_t clock (void) /*@modifies internalState@*/ ;
extern double difftime (time_t time1, time_t time0) /*@*/ ;
extern time_t mktime (struct tm *timeptr) /*@*/ ;

extern time_t time (/*@null@*/ /*@out@*/ time_t *tp)
  /*@modifies *tp@*/ ;

extern /*@observer@*/ char *asctime (struct tm *timeptr) 
  /*@modifies errno*/ /*@ensures MaxSet(result) == 25 /\  MaxRead(result) == 25; @*/ ;

extern /*@observer@*/ char *ctime (time_t *tp) /*@*/
     /*@ensures MaxSet(result) == 25 /\  MaxRead(result) == 25; @*/;

extern /*@null@*/ /*@observer@*/ struct tm *gmtime (time_t *tp) /*@*/ ;

extern /*@null@*/ /*@observer@*/ struct tm *localtime (time_t *tp) 
  /*@modifies errno@*/ ;

extern size_t strftime (/*@out@*/ char *s, size_t smax,
			char *fmt, struct tm *timeptr)
  /*@modifies *s@*/ ;

/*
** ISO c99: 7.18 Integer types <stdint.h>
*/

/*
** These types are OPTIONAL.  Provide warnings on use.
*/

typedef /*@integraltype@*/ int8_t
   /*@warn implementationoptional "ISO99 specifies as optional type, implementation need not provide. Consider int_least8_t instead."@*/ ;

typedef /*@integraltype@*/ int16_t
   /*@warn implementationoptional "ISO99 specifies as optional type, implementation need not provide. Consider int_least16_t instead."@*/ ;

typedef /*@integraltype@*/ int32_t
   /*@warn implementationoptional "ISO99 specifies as optional type, implementation need not provide. Consider int_least32_t instead."@*/ ;

typedef /*@integraltype@*/ int64_t
   /*@warn implementationoptional "ISO99 specifies as optional type, implementation need not provide. Consider int_least64_t instead."@*/ ;

typedef /*@unsignedintegraltype@*/ uint8_t
   /*@warn implementationoptional "ISO99 specifies as optional type, implementation need not provide. Consider uint_least8_t instead."@*/ ;

typedef /*@unsignedintegraltype@*/ uint16_t
   /*@warn implementationoptional "ISO99 specifies as optional type, implementation need not provide. Consider uint_least16_t instead."@*/ ;

typedef /*@unsignedintegraltype@*/ uint32_t
   /*@warn implementationoptional "ISO99 specifies as optional type, implementation need not provide. Consider uint_least32_t instead."@*/ ;

typedef /*@unsignedintegraltype@*/ uint64_t
   /*@warn implementationoptional "ISO99 specifies as optional type, implementation need not provide. Consider uint_least64_t instead."@*/ ;

typedef /*@integraltype@*/ int_least8_t;
typedef /*@integraltype@*/ int_least16_t;
typedef /*@integraltype@*/ int_least32_t;
typedef /*@integraltype@*/ int_least64_t;

typedef /*@unsignedintegraltype@*/ uint_least8_t;
typedef /*@unsignedintegraltype@*/ uint_least16_t;
typedef /*@unsignedintegraltype@*/ uint_least32_t;
typedef /*@unsignedintegraltype@*/ uint_least64_t;

typedef /*@integraltype@*/ int_fast8_t;
typedef /*@integraltype@*/ int_fast16_t;
typedef /*@integraltype@*/ int_fast32_t;
typedef /*@integraltype@*/ int_fast64_t;

typedef /*@unsignedintegraltype@*/ uint_fast8_t;
typedef /*@unsignedintegraltype@*/ uint_fast16_t;
typedef /*@unsignedintegraltype@*/ uint_fast32_t;
typedef /*@unsignedintegraltype@*/ uint_fast64_t;

typedef int *intptr_t
   /*@warn implementationoptional "ISO99 specifies as optional type, implementation need not provide."@*/ ;

typedef unsigned int *uintptr_t
   /*@warn implementationoptional "ISO99 specifies as optional type, implementation need not provide."@*/ ;

typedef /*@signedintegraltype@*/ intmax_t;
typedef /*@unsignedintegraltype@*/ uintmax_t;

/*@i534 types here? */

/*@constant int INT8_MIN@*/
/*@constant int INT16_MIN@*/
/*@constant int INT32_MIN@*/
/*@constant int INT64_MIN@*/

/*@constant int INT8_MAX@*/
/*@constant int INT16_MAX@*/
/*@constant int INT32_MAX@*/
/*@constant int INT64_MAX@*/

/*@constant int UINT8_MIN@*/
/*@constant int UINT16_MIN@*/
/*@constant int UINT32_MIN@*/
/*@constant int UINT64_MIN@*/

/*@constant int INT_LEAST8_MIN@*/
/*@constant int INT_LEAST16_MIN@*/
/*@constant int INT_LEAST32_MIN@*/
/*@constant int INT_LEAST64_MIN@*/

/*@constant int INT_LEAST8_MAX@*/
/*@constant int INT_LEAST16_MAX@*/
/*@constant int INT_LEAST32_MAX@*/
/*@constant int INT_LEAST64_MAX@*/

/*@constant int UINT_LEAST8_MAX@*/
/*@constant int UINT_LEAST16_MAX@*/
/*@constant int UINT_LEAST32_MAX@*/
/*@constant int UINT_LEAST64_MAX@*/

/*@constant int INT_FAST8_MIN@*/
/*@constant int INT_FAST16_MIN@*/
/*@constant int INT_FAST32_MIN@*/
/*@constant int INT_FAST64_MIN@*/

/*@constant int INT_FAST8_MAX@*/
/*@constant int INT_FAST16_MAX@*/
/*@constant int INT_FAST32_MAX@*/
/*@constant int INT_FAST64_MAX@*/

/*@constant int UINT_FAST8_MAX@*/
/*@constant int UINT_FAST16_MAX@*/
/*@constant int UINT_FAST32_MAX@*/
/*@constant int UINT_FAST64_MAX@*/

/*@constant size_t INTPTR_MIN@*/
/*@constant size_t INTPTR_MAX@*/
