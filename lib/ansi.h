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
/*@checkedstrict@*/ int errno;
# else 
/*@unchecked@*/ int errno;
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
/*@falseexit@*/ void assert (/*@sef@*/ lltX_bool e) 
  /*@*/ ;
# else
/*@falseexit@*/ void assert (/*@sef@*/ lltX_bool /*@alt int@*/ e) 
  /*@*/ ;
# endif


/*
** ctype.h
*/

# ifdef STRICT
lltX_bool isalnum (int c) /*@*/ ;
lltX_bool isalpha (int c) /*@*/ ;
lltX_bool iscntrl (int c) /*@*/ ;
lltX_bool isdigit (int c) /*@*/ ;
lltX_bool isgraph (int c) /*@*/ ;
lltX_bool islower (int c) /*@*/ ;
lltX_bool isprint (int c) /*@*/ ;
lltX_bool ispunct (int c) /*@*/ ;
lltX_bool isspace (int c) /*@*/ ;
lltX_bool isupper (int c) /*@*/ ;
lltX_bool isxdigit (int c) /*@*/ ;
char tolower (int c) /*@*/ ;
char toupper (int c) /*@*/ ;
# else
/*
** evans 2002-01-03: added alt char (was alt unsigned char)
*/

lltX_bool /*@alt int@*/ isalnum (int /*@alt char, unsigned char@*/ c) /*@*/ ;
lltX_bool /*@alt int@*/ isalpha (int /*@alt char, unsigned char@*/ c) /*@*/ ;
lltX_bool /*@alt int@*/ iscntrl (int /*@alt char, unsigned char@*/ c) /*@*/ ;
lltX_bool /*@alt int@*/ isdigit (int /*@alt char, unsigned char@*/ c) /*@*/ ;
lltX_bool /*@alt int@*/ isgraph (int /*@alt char, unsigned char@*/ c) /*@*/ ;
lltX_bool /*@alt int@*/ islower (int /*@alt char, unsigned char@*/ c) /*@*/ ;
lltX_bool /*@alt int@*/ isprint (int /*@alt char, unsigned char@*/ c) /*@*/ ;
lltX_bool /*@alt int@*/ ispunct (int /*@alt char, unsigned char@*/ c) /*@*/ ;
lltX_bool /*@alt int@*/ isspace (int /*@alt char, unsigned char@*/ c) /*@*/ ;
lltX_bool /*@alt int@*/ isupper (int /*@alt char, unsigned char@*/ c) /*@*/ ;
lltX_bool /*@alt int@*/ isxdigit (int /*@alt char, unsigned char@*/ c) /*@*/ ;
char /*@alt int@*/ tolower (int /*@alt char, unsigned char@*/ c) /*@*/ ;
char /*@alt int@*/ toupper (int /*@alt char, unsigned char@*/ c) /*@*/ ;
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

/*@observer@*/ /*@null@*/ char *setlocale (int category, /*@null@*/ char *locale) 
   /*@modifies internalState, errno@*/ ;

struct lconv *localeconv (void) /*@*/ ;

/*
** float.h
*/

/*
** Note, these are defined by macros, but NOT necessarily
** constants.  They may be used as lvalues.
*/

/*@unchecked@*/ int    DBL_DIG;
/*@unchecked@*/ double DBL_EPSILON;
/*@unchecked@*/ int    DBL_MANT_DIG;
/*@unchecked@*/ double DBL_MAX;
/*@unchecked@*/ int    DBL_MAX_10_EXP;
/*@unchecked@*/ int    DBL_MAX_EXP;
/*@unchecked@*/ double DBL_MIN;
/*@unchecked@*/ int    DBL_MIN_10_EXP;
/*@unchecked@*/ int    DBL_MIN_EXP;

/*@unchecked@*/ int   FLT_DIG;
/*@unchecked@*/ float FLT_EPSILON;
/*@unchecked@*/ int   FLT_MANT_DIG;
/*@unchecked@*/ float FLT_MAX;
/*@unchecked@*/ int   FLT_MAX_10_EXP;
/*@unchecked@*/ int   FLT_MAX_EXP;
/*@unchecked@*/ float FLT_MIN;
/*@unchecked@*/ int   FLT_MIN_10_EXP;
/*@unchecked@*/ int   FLT_MIN_EXP;
/*@constant            int   FLT_RADIX@*/
/*@unchecked@*/ int   FLT_ROUNDS;

/*@unchecked@*/ int         LDBL_DIG;
/*@unchecked@*/ long double LDBL_EPSILON;
/*@unchecked@*/ int         LDBL_MANT_DIG;
/*@unchecked@*/ long double LDBL_MAX;
/*@unchecked@*/ int         LDBL_MAX_10_EXP;
/*@unchecked@*/ int         LDBL_MAX_EXP;
/*@unchecked@*/ long double LDBL_MIN;
/*@unchecked@*/ int         LDBL_MIN_10_EXP;
/*@unchecked@*/ int         LDBL_MIN_EXP;

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

double sin (double x) /*@*/ ;
double cos (double x) /*@*/ ;
double tan (double x) /*@*/ ;
double asin (double x) /*@modifies errno@*/ ;
double acos (double x) /*@modifies errno@*/ ;
double atan (double x) /*@*/ ;
double atan2 (double y, double x) /*@*/ ;
double sinh (double x) /*@*/ ;
double cosh (double x) /*@modifies errno@*/ ;
double tanh (double x) /*@*/ ;

double exp (double x) /*@modifies errno@*/ ;
double ldexp (double x, int n) /*@modifies errno@*/ ;
double frexp (double x, /*@out@*/ int *xp) /*@modifies *xp;@*/ ;

double log (double x) /*@modifies errno@*/ ;
double log10 (double x) /*@modifies errno@*/ ;

double pow (double x, double y) /*@modifies errno@*/ ;
double sqrt (double x) /*@modifies errno@*/ ;

double ceil (double x) /*@*/ ;
double floor (double x) /*@*/ ;
double fabs (double x) /*@*/ ;

double modf (double x, /*@out@*/ double *ip) /*@modifies *ip;@*/ ;
double fmod (double x, double y) /*@*/ ;

/*
** These functions are optional in iso C.  An implementation does not
** have to provide them.  They are included in comments here, but
** are not required to be part of the standard library.
*/

# ifdef OPTIONAL_MATH

float acosf (float x) /*@modifies errno@*/ ;
long double acosl (long double x) /*@modifies errno@*/ ;
float asinf (float x)	/*@modifies errno@*/ ;
long double asinl (long double x) /*@modifies errno@*/ ;
float atanf (float x)	/*@*/ ;
long double atanl (long double x) /*@*/ ;
float atan2f (float y, float x) /*@*/ ;
long double atan2l (long double y, long double x) /*@*/ ;
float ceilf (float x)	/*@*/ ;
long double ceill (long double x) /*@*/ ;
float cosf (float x) /*@*/ ;
long double cosl (long double x) /*@*/ ;
float coshf (float x)	/*@modifies errno@*/ ;
long double coshl (long double x) /*@modifies errno@*/ ;
float expf (float x) /*@modifies errno@*/ ;
long double expl (long double x) /*@modifies errno@*/;
float fabsf (float x)	/*@*/ ;
long double fabsl (long double x) /*@*/ ;
float floorf (float x) /*@*/ ;
long double floorl (long double x) /*@*/ ;
float fmodf (float x, float y) /*@*/ ;
long double fmodl (long double x, long double y)	/*@*/ ;
float frexpf (float x, /*@out@*/ int *xp) /*@modifies *xp@*/;
long double frexpl (long double x, /*@out@*/ int *xp) /*@modifies *xp@*/;
float ldexpf (float x, int n) /*@modifies errno@*/ ;
long double ldexpl (long double x, int n) /*@modifies errno@*/ ;
float logf (float x) /*@modifies errno@*/ ;
long double logl (long double x) /*@modifies errno@*/ ;
float log10f (float x) /*@modifies errno@*/;
long double log10l (long double x) /*@modifies errno@*/;
float modff (float x, /*@out@*/ float *xp) /*@modifies *xp@*/ ;
long double modfl (long double x, /*@out@*/ long double *xp) /*@modifies *xp@*/ ;
float powf (float x, float y) /*@modifies errno@*/ ;
long double powl (long double x, long double y) /*@modifies errno@*/ ;
float sinf (float x) /*@*/ ;
long double sinl (long double x)	/*@*/ ;
float sinhf (float x) /*@*/ ;
long double sinhl (long double x) /*@*/ ;
float sqrtf (float x) /*@modifies errno@*/ ;
long double sqrtl (long double x) /*@modifies errno@*/ ;
float tanf (float x) /*@*/ ;
long double tanl (long double x)	/*@*/ ;
float tanhf (float x) /*@*/ ;
long double tanhl (long double x) /*@*/ ;

# endif

/*
** setjmp.h
*/

typedef /*@abstract@*/ /*@mutable@*/ void *jmp_buf;

int setjmp (/*@out@*/ jmp_buf env) /*@modifies env;@*/ ;
/*@mayexit@*/ void longjmp (jmp_buf env, int val) /*@*/ ;

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

/*@null@*/ void (*signal (int sig, /*@null@*/ void (*func)(int))) (int) 
   /*@modifies internalState, errno;@*/ ;

/*@mayexit@*/ int raise (int sig) ;

/*
** stdarg.h
*/

typedef /*@abstract@*/ /*@mutable@*/ void *va_list;

void va_start (/*@out@*/ va_list ap, ...) /*@modifies ap;@*/ ;
void va_end (va_list va) /*@modifies va;@*/ ;

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

int remove (char *filename) /*@modifies fileSystem, errno@*/ ;
int rename (char *old, char *new) /*@modifies fileSystem, errno@*/ ;

/*@null@*/ FILE *tmpfile (void) /*@modifies fileSystem@*/ ;
/*@observer@*/ char *
  tmpnam (/*@out@*/ /*@null@*/ /*@returned@*/ char *s) 
  /*@modifies *s, internalState@*/ ;

int fclose (FILE *stream) /*@modifies *stream, errno, fileSystem;@*/ ;
int fflush (/*@null@*/ FILE *stream) 
   /*@modifies *stream, errno, fileSystem;@*/ ;

/*@null@*/ /*@dependent@*/ FILE *fopen (char *filename, char *mode) 
   /*@modifies fileSystem@*/ ;         

/*@null@*/ FILE *freopen (char *filename, char *mode, FILE *stream) 
  /*@modifies *stream, fileSystem, errno@*/ ;

void setbuf (FILE *stream, /*@null@*/ /*@exposed@*/ char *buf) 
   /*@modifies fileSystem, *stream, *buf@*/ ;

int setvbuf (FILE *stream, /*@null@*/ /*@exposed@*/ char *buf, 
		    int mode, size_t size)
   /*@modifies fileSystem, *stream, *buf@*/ ;

# ifdef STRICT
/*@printflike@*/ 
int fprintf (FILE *stream, char *format, ...)
   /*@modifies fileSystem, *stream@*/ ;
# else
/*@printflike@*/ 
int /*@alt void@*/ fprintf (FILE *stream, char *format, ...)
   /*@modifies fileSystem, *stream@*/ ;
# endif

/*@scanflike@*/ 
int fscanf (FILE *stream, char *format, ...)
   /*@modifies fileSystem, *stream@*/ ;

# ifdef STRICT
/*@printflike@*/ 
int printf (char *format, ...) 
   /*@globals stdout@*/
   /*@modifies fileSystem, *stdout@*/ ;
# else
/*@printflike@*/ 
int /*@alt void@*/ printf (char *format, ...) 
   /*@globals stdout@*/
   /*@modifies fileSystem, *stdout@*/ ;
# endif

/*@scanflike@*/
int scanf(char *format, ...)
   /*@globals stdin@*/
   /*@modifies fileSystem, *stdin@*/ ;

# ifdef STRICT
/*@printflike@*/ 
int sprintf (/*@out@*/ char *s, char *format, ...) 
   /*@modifies *s@*/ ;
# else
/*@printflike@*/ 
int /*@alt void@*/ sprintf (/*@out@*/ char *s, char *format, ...) 
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

int fgetc (FILE *stream) 
   /*@modifies fileSystem, *stream, errno@*/ ;

/*@null@*/ char *
  fgets (/*@returned@*/ /*@out@*/ char *s, int n, FILE *stream)
     /*@modifies fileSystem, *s, *stream, errno@*/
     /*@requires MaxSet(s) >= (n -1); @*/
     /*@ensures MaxRead(s) <= (n -1) /\ MaxRead(s) >= 0; @*/
     ;

int fputc (int /*@alt char@*/ c, FILE *stream)
  /*:errorcode EOF:*/
  /*@modifies fileSystem, *stream, errno@*/ ;

int fputs (char *s, FILE *stream)
  /*@modifies fileSystem, *stream@*/ ;

/* note use of sef --- stream may be evaluated more than once */
int getc (/*@sef@*/ FILE *stream)
  /*@modifies fileSystem, *stream@*/ ;

int getchar (void) /*@globals stdin@*/ /*@modifies fileSystem, *stdin@*/ ;

/*@null@*/ char *gets (/*@out@*/ char *s) 
   /*@warn bufferoverflowhigh
           "Use of gets leads to a buffer overflow vulnerability.  Use fgets instead"@*/
   /*@globals stdin@*/ /*@modifies fileSystem, *s, *stdin, errno@*/ ;

int putc (int /*@alt char@*/ c, /*@sef@*/ FILE *stream)
   /*:errorcode EOF:*/
   /*@modifies fileSystem, *stream;@*/ ;

int putchar (int /*@alt char@*/ c)
   /*:errorcode EOF:*/
   /*@globals stdout@*/ /*@modifies fileSystem, *stdout@*/ ; 

int puts (const char *s)
   /*:errorcode EOF:*/
   /*@globals stdout@*/
   /*@modifies fileSystem, *stdout@*/ ; 

int ungetc (int /*@alt char@*/ c, FILE *stream)
  /*@modifies fileSystem, *stream, errno@*/ ;

size_t 
  fread (/*@out@*/ void *ptr, size_t size, size_t nobj, FILE *stream)
  /*@modifies fileSystem, *ptr, *stream, errno@*/ ;

size_t fwrite (void *ptr, size_t size, size_t nobj, FILE *stream)
  /*@modifies fileSystem, *stream, errno@*/ ;

int fgetpos (FILE *stream, /*@out@*/ fpos_t *pos)
  /*@modifies *pos, errno@*/ ;

int fseek (FILE *stream, long int offset, int whence)
   /*:errorcode -1:*/
   /*@modifies fileSystem, *stream, errno@*/ ;

int fsetpos (FILE *stream, fpos_t *pos)
   /*@modifies fileSystem, *stream, errno@*/ ;

long int ftell(FILE *stream) 
   /*:errorcode -1:*/ /*@modifies errno*/ ;

void rewind (FILE *stream) /*@modifies *stream@*/ ;
void clearerr (FILE *stream) /*@modifies *stream@*/ ;

int feof (FILE *stream) /*@modifies errno@*/ ;
int ferror (FILE *stream) /*@modifies errno@*/ ;

void perror (/*@null@*/ char *s) 
   /*@globals errno, stderr@*/ /*@modifies fileSystem, *stderr@*/ ; 

/*
** stdlib.h
*/

double atof (char *s) /*@*/ ;
int atoi (char *s) /*@*/ ;
long int atol (char *s) /*@*/ ;

double strtod (char *s, /*@null@*/ /*@out@*/ char **endp)
  /*@modifies *endp, errno@*/ ;

long strtol (char *s, /*@null@*/ /*@out@*/ char **endp, int base)
  /*@modifies *endp, errno@*/ ;

unsigned long 
  strtoul (char *s, /*@null@*/ /*@out@*/ char **endp, int base)
  /*@modifies *endp, errno@*/ ;

/*@constant int RAND_MAX; @*/
int rand (void) /*@modifies internalState@*/ ;
void srand (unsigned int seed) /*@modifies internalState@*/ ;

/*
  drl
  changed 12/29/2000
*/

/*@null@*/ /*@only@*/ void *calloc (size_t nobj, size_t size) /*@*/
     /*@ensures MaxSet(result) == (nobj - 1); @*/ ;
/*@null@*/ /*@out@*/ /*@only@*/ void *malloc (size_t size) /*@*/
     /*@ensures MaxSet(result) == (size - 1); @*/ ;

/*end drl changed */
     
/* 11 June 1997: removed out on return value */

# if 0
/*@null@*/ /*@only@*/ void *
   realloc (/*@null@*/ /*@only@*/ /*@special@*/ void *p, 
	    size_t size) /*@releases p@*/ /*@modifies *p@*/
     /*@ensures MaxSet(result) == (size - 1) @*/;
# endif

/*
** LCLint annotations cannot fully describe realloc.  The semantics we
** want are:
**    realloc returns null: ownership of parameter is not changed
**    realloc returns non-null: ownership of parameter is transferred to return value
**
** Otherwise, storage is in the same state before and after the call.
*/

/*@null@*/ /*@only@*/ void *
   realloc (/*@null@*/ /*@only@*/ /*@out@*/ /*@returned@*/ void *p, size_t size) 
     /*@modifies *p@*/ /*@ensures MaxSet(result) >= (size - 1) @*/;

void free (/*@null@*/ /*@out@*/ /*@only@*/ void *p) /*@modifies p@*/ ;

/*@constant int EXIT_FAILURE; @*/ 
/*@constant int EXIT_SUCCESS; @*/ 

/*@exits@*/ void abort (void) /*@*/ ;
/*@exits@*/ void exit (int status) /*@*/ ;
int atexit (void (*func)(void)) /*@modifies internalState@*/ ;

/*@observer@*/ /*@null@*/ char *getenv (char *name) /*@*/ ;

int system (/*@null@*/ char *s) /*@modifies fileSystem@*/ ;

/*@null@*/ /*@dependent@*/ void *
  bsearch (void *key, void *base, 
	   size_t n, size_t size, 
	   int (*compar)(void *, void *)) /*@*/ ;

void qsort (void *base, size_t n, size_t size, 
		   int (*compar)(void *, void *))
   /*@modifies *base, errno@*/ ;

int abs (int n) /*@*/ ;

typedef /*@concrete@*/ struct 
{
  int quot;
  int rem;
} div_t ;

div_t div (int num, int denom) /*@*/ ;

long int labs (long int n) /*@*/ ; 

typedef /*@concrete@*/ struct 
{
  long int quot;
  long int rem;
} ldiv_t ;

ldiv_t ldiv (long num, long denom) /*@*/ ;

/*@constant size_t MB_CUR_MAX; @*/

/*
** wchar_t and wint_t functions added by Amendment 1 to ISO.
*/

/*@constant int WCHAR_MAX@*/
/*@constant int WCHAR_MIN@*/
/*@constant wint_t WEOF@*/

wint_t btowc (int c) /*@*/ ;

wint_t fgetwc (FILE *fp)	/*@modifies fileSystem, *fp*/ ;

/*@null@*/ wchar_t *fgetws (/*@returned@*/ wchar_t *s, int n, FILE *stream)
   /*@modifies fileSystem, *s, *stream@*/;

wint_t fputwc (wchar_t c, FILE *stream)
   /*@modifies fileSystem, *stream@*/;

int fputws (const wchar_t *s, FILE *stream)
   /*@modifies fileSystem, *stream@*/ ;

int fwide (FILE *stream, int mode) /*@*/ ; 
   /* does not modify the stream */

/*@printflike@*/ int fwprintf (FILE *stream, const wchar_t *format, ...)
    /*@modifies *stream, fileSystem@*/ ;

/*@scanflike@*/ int fwscanf (FILE *stream, const wchar_t *format, ...)
	/*@modifies *stream, fileSystem@*/ ;

/* note use of sef --- stream may be evaluated more than once */
wint_t getwc (/*@sef@*/ FILE *stream) /*@modifies fileSystem, *stream@*/ ;

wint_t getwchar (void) /*@modifies fileSystem, *stdin@*/;

size_t mbrlen (const char *s, size_t n, /*@null@*/ mbstate_t *ps) /*@*/ ;

size_t mbrtowc (/*@null@*/ wchar_t *pwc, const char *s, size_t n,
		       /*@null@*/ mbstate_t *ps) 
   /*@modifies *pwc@*/ ;

int mbsinit (/*@null@*/ const mbstate_t *ps) /*@*/ ;

size_t mbsrtowcs (/*@null@*/ wchar_t *dst, const char **src, size_t len,
			 /*@null@*/ mbstate_t *ps) 
   /*@modifies *dst@*/ ;

/* note use of sef --- stream may be evaluated more than once */
wint_t putwc (wchar_t c, /*@sef@*/ FILE *stream)	/*@modifies fileSystem, *stream@*/ ;

wint_t putwchar (wchar_t c) /*@modifies fileSystem, *stdout@*/ ;

/*@printflike@*/ int swprintf (wchar_t *s, size_t n, const wchar_t *format, ...)
   /*@modifies *s@*/ ;

/*@scanflike@*/ int swscanf (const wchar_t *s, const wchar_t *format, ...)
   /*@modifies *stdin@*/ ;

wint_t ungetwc (wint_t c, FILE *stream) /*@modifies fileSystem, *stream@*/ ;

int vfwprintf (FILE *stream, const wchar_t *format, va_list arg)
   /*@modifies fileSystem, *stream@*/ ;

int vswprintf (wchar_t *s, size_t n, const wchar_t *format, va_list arg)
   /*@modifies *s@*/ ;

int vwprintf (const wchar_t *format, va_list arg)
   /*@modifies fileSystem, *stdout@*/ ;

size_t wcrtomb (/*@null@*/ /*@out@*/ char *s, wchar_t wc, /*@null@*/ mbstate_t *ps)
   /*@modifies *s@*/;

void /*@alt wchar_t *@*/
  wcscat (/*@unique@*/ /*@returned@*/ /*@out@*/ wchar_t *s1, const wchar_t *s2)
  /*@modifies *s1@*/ ;

/*@exposed@*/ /*@null@*/ wchar_t *
  wcschr (/*@returned@*/ const wchar_t *s, wchar_t c)
  /*@*/ ;

int wcscmp (const wchar_t *s1, const wchar_t *s2) /*@*/ ;

int wcscoll (const wchar_t *s1, const wchar_t *s2) /*@*/ ;

void /*@alt wchar_t *@*/ 
  wcscpy (/*@unique@*/ /*@out@*/ /*@returned@*/ wchar_t *s1, const wchar_t *s2)
  /*@modifies *s1@*/ ;

size_t wcscspn (const wchar_t *s1, const wchar_t *s2) /*@*/ ;

size_t wcsftime (/*@out@*/ wchar_t *s, size_t maxsize, const wchar_t *format,
			const struct tm *timeptr) 
   /*@modifies *s@*/ ;

size_t wcslen (const wchar_t *s) /*@*/ ;

void /*@alt wchar_t *@*/
  wcsncat (/*@unique@*/ /*@returned@*/ /*@out@*/ wchar_t *s1, const wchar_t *s2,
	   size_t n) 
  /*@modifies *s1@*/ ;

int wcsncmp (const wchar_t *s1, const wchar_t *s2, size_t n) /*@*/ ;

void /*@alt wchar_t *@*/
  wcsncpy (/*@unique@*/ /*@returned@*/ /*@out@*/ wchar_t *s1, const wchar_t *s2,
	   size_t n) 
   /*@modifies *s1@*/ ;

/*@null@*/ wchar_t *
  wcspbrk (/*@returned@*/ const wchar_t *s1, const wchar_t *s2)
  /*@*/ ;

/*@null@*/ wchar_t *
  wcsrchr (/*@returned@*/ const wchar_t *s, wchar_t c)
  /*@*/ ;

size_t
  wcsrtombs (/*@null@*/ char *dst, const wchar_t **src, size_t len,
	     /*@null@*/ mbstate_t *ps) 
  /*@modifies *src@*/ ;

size_t wcsspn (const wchar_t *s1, const wchar_t *s2) /*@*/ ;

/*@null@*/ wchar_t *wcsstr (const wchar_t *s1, const wchar_t *s2) /*@*/ ;

double wcstod (const wchar_t *nptr, /*@null@*/ wchar_t **endptr)
   /*@modifies *endptr@*/ ;

/*@null@*/ wchar_t *
  wcstok (/*@null@*/ wchar_t *s1, const wchar_t *s2, wchar_t **ptr)
  /*@modifies *ptr@*/;

long wcstol (const wchar_t *nptr, /*@null@*/ wchar_t **endptr, int base)
   /*@modifies *endptr@*/;

unsigned long
  wcstoul (const wchar_t *nptr, /*@null@*/ wchar_t **endptr, int base)
  /*@modifies *endptr@*/;

size_t
  wcsxfrm (/*@null@*/ wchar_t *s1, const wchar_t *s2, size_t n)
  /*@modifies *s1@*/;

int wctob (wint_t c) /*@*/;

/*@null@*/ wchar_t *wmemchr (const wchar_t *s, wchar_t c, size_t n) /*@*/ ;

int wmemcmp (const wchar_t *s1, const wchar_t *s2, size_t n) /*@*/ ;

wchar_t *wmemcpy (/*@returned@*/ wchar_t *s1, const wchar_t *s2, size_t n)
   /*@modifies *s1@*/;

wchar_t *wmemmove (/*@returned@*/ wchar_t *s1, const wchar_t *s2, size_t n)
   /*@modifies *s1@*/;

wchar_t *wmemset (/*@returned@*/ wchar_t *s, wchar_t c, size_t n)
   /*@modifies *s@*/;

/*@printflike@*/ int wprintf (const wchar_t *format, ...)
   /*@globals stdout@*/ /*@modifies errno, *stdout@*/;

/*@scanflike@*/ int
  wscanf (const wchar_t *format, ...)
  /*@globals stdin@*/ /*@modifies errno, *stdin@*/;

/*
** wctype.h (added by Amendment 1)
*/

/* Warning: not sure about these (maybe abstract?): */
typedef /*@integraltype@*/ wctype_t;
typedef /*@integraltype@*/ wctrans_t;

# ifdef STRICT
lltX_bool iswalnum (wint_t c) /*@*/ ;
lltX_bool iswalpha (wint_t c) /*@*/ ;
lltX_bool iswcntrl (wint_t c) /*@*/ ;
lltX_bool iswctype (wint_t c, wctype_t ctg) /*@*/ ;
lltX_bool iswdigit (wint_t c) /*@*/ ;
lltX_bool iswgraph (wint_t c) /*@*/ ;
lltX_bool iswlower (wint_t c) /*@*/ ;
lltX_bool iswprint (wint_t c) /*@*/ ;
lltX_bool iswpunct (wint_t c) /*@*/ ;
lltX_bool iswspace (wint_t c) /*@*/ ;
lltX_bool iswupper (wint_t c) /*@*/ ;
lltX_bool iswxdigit (wint_t c) /*@*/ ;

wint_t towctrans (wint_t c, wctrans_t ctg) /*@*/ ;
wint_t towlower (wint_t c) /*@*/ ;
wint_t towupper (wint_t c) /*@*/ ;
# else
lltX_bool /*@alt int@*/ iswalnum (wint_t c) /*@*/ ;
lltX_bool /*@alt int@*/ iswalpha (wint_t c) /*@*/ ;
lltX_bool /*@alt int@*/ iswcntrl (wint_t c) /*@*/ ;
lltX_bool /*@alt int@*/ iswctype (wint_t c, wctype_t ctg) /*@*/ ;
lltX_bool /*@alt int@*/ iswdigit (wint_t c) /*@*/ ;
lltX_bool /*@alt int@*/ iswgraph (wint_t c) /*@*/ ;
lltX_bool /*@alt int@*/ iswlower (wint_t c) /*@*/ ;
lltX_bool /*@alt int@*/ iswprint (wint_t c) /*@*/ ;
lltX_bool /*@alt int@*/ iswpunct (wint_t c) /*@*/ ;
lltX_bool /*@alt int@*/ iswspace (wint_t c) /*@*/ ;
lltX_bool /*@alt int@*/ iswupper (wint_t c) /*@*/ ;
lltX_bool /*@alt int@*/ iswxdigit (wint_t c) /*@*/ ;

wint_t /*@alt int@*/ towctrans (wint_t c, wctrans_t ctg)	/*@*/ ;
wint_t /*@alt int@*/ towlower (wint_t c)	/*@*/ ;
wint_t /*@alt int@*/ towupper (wint_t c)	/*@*/ ;
# endif

wctrans_t wctrans (const char *property)	/*@*/ ;
wctype_t wctype (const char *property) /*@*/ ;

int mblen (char *s, size_t n) /*@*/ ;
int mbtowc (/*@null@*/ wchar_t *pwc, /*@null@*/ char *s, size_t n) 
   /*@modifies *pwc@*/ ;
int wctomb (/*@out@*/ /*@null@*/ char *s, wchar_t wchar) 
   /*@modifies *s@*/ ;
size_t mbstowcs (/*@out@*/ wchar_t *pwcs, char *s, size_t n)
  /*@modifies *pwcs@*/ ;
size_t wcstombs (/*@out@*/ char *s, wchar_t *pwcs, size_t n)
  /*@modifies *s@*/ ;

/*
** string.h
*/
     
void /*@alt void * @*/
  memcpy (/*@unique@*/ /*@returned@*/ /*@out@*/ void *s1, void *s2, size_t n) 
  /*@modifies *s1@*/
     /*@requires MaxRead(s2) >= (n - 1) /\ MaxSet(s1) >= (n - 1); @*/
     ;

void /*@alt void * @*/
  memmove (/*@returned@*/ /*@out@*/ void *s1, void *s2, size_t n)
  /*@modifies *s1@*/
  /*@requires MaxRead(s2) >= (n - 1) /\ MaxSet(s1) >= (n - 1); @*/
   ;

  
  /* drl
     modifed  12/29/2000
  */

void /*@alt char * @*/ 
  strcpy (/*@unique@*/ /*@out@*/ /*@returned@*/ char *s1, char *s2) 
     /*@modifies *s1@*/ 
     /*@requires maxSet(s1) >= maxRead(s2) @*/
     /*@ensures MaxRead(s1) == MaxRead (s2) /\ MaxRead(result) == MaxRead(s2) /\ MaxSet(result) == MaxSet(s1); @*/;

void /*@alt char * @*/
  strncpy (/*@unique@*/ /*@out@*/ /*@returned@*/ char *s1, char *s2, size_t n) 
  /*@modifies *s1@*/      /*@requires MaxSet(s1) >= ( n - 1 ); @*/ /*@ensures MaxRead (s2) >= MaxRead(s1) /\ MaxRead (s1) <= n; @*/; 

void /*@alt char * @*/
  strcat (/*@unique@*/ /*@returned@*/ char *s1, char *s2) 
     /*@modifies *s1@*/ /*@requires MaxSet(s1) >= (MaxRead(s1) + MaxRead(s2) );@*/
     /*@ensures MaxRead(result) == (MaxRead(s1) + MaxRead(s2) );@*/;

void /*@alt char * @*/
  strncat (/*@unique@*/ /*@returned@*/ char *s1, char *s2, size_t n)
     /*@modifies *s1@*/ 
     /*@requires MaxSet(s1) >= ( MaxRead(s1) + n); @*/
      /*@ensures MaxRead(s1) >= (MaxRead(s1) + n); @*/;

     /*drl end*/
     
int memcmp (void *s1, void *s2, size_t n) /*@*/ ;
int strcmp (char *s1, char *s2) /*@*/ ;
int strcoll (char *s1, char *s2) /*@*/ ;
int strncmp (char *s1, char *s2, size_t n) /*@*/ ;
size_t strxfrm (/*@out@*/ /*@null@*/ char *s1, char *s2, size_t n) 
  /*@modifies *s1@*/ ;  /* s1 may be null only if n == 0 */ 

/*@null@*/ void *memchr (void *s, int c, size_t n) /*@*/ ;

# ifdef STRICT
/*@exposed@*/ /*@null@*/ char *
strchr (/*@returned@*/ char *s, char c) /*@*/ /*@ensures MaxSet(result) >= 0 /\ MaxSet(result) <= MaxSet(s) /\ MaxRead (result) <= MaxRead(s) /\ MaxRead(result) >= 0 @*/ ;
# else
/*@exposed@*/ /*@null@*/ char *
  strchr (/*@returned@*/ char *s, int /*@alt char@*/ c) /*@*/ /*@ensures MaxSet(result) >= 0 /\ MaxSet(result) <= MaxSet(s) /\ MaxRead (result) <= MaxRead(s) /\ MaxRead(result) >= 0; @*/ ;
# endif

size_t strcspn (char *s1, char *s2) /*@*/ ;
/*@null@*/ /*@exposed@*/ char *
  strpbrk (/*@returned@*/ char *s, char *t) /*@*/ ;

# ifdef STRICT
/*@null@*/ /*@exposed@*/ char *
  strrchr (/*@returned@*/ char *s, char c) /*@*/  /*@ensures MaxSet(result) >= 0 /\ MaxSet(result) <= MaxSet(s) /\ MaxRead (result) <= MaxRead(s) /\ MaxRead(result) >= 0 @*/ ;
# else
/*@null@*/ /*@exposed@*/ char *
  strrchr (/*@returned@*/ char *s, int /*@alt char@*/ c) /*@*/  /*@ensures MaxSet(result) >= 0 /\ MaxSet(result) <= MaxSet(s) /\ MaxRead (result) <= MaxRead(s) /\ MaxRead(result) >= 0 @*/ ;
# endif

size_t strspn (char *s, char *t) /*@*/ ;

/*@null@*/ /*@exposed@*/  char *
  strstr (/*@returned@*/ /*@unique@*/ char *s, char *t) /*@*/
       /*@ensures MaxSet(result) >= 0 /\ MaxSet(result) <= MaxSet(s) /\ MaxRead (result) <= MaxRead(s) /\ MaxRead(result) >= 0 @*/ ;

/*@null@*/ /*@exposed@*/ char *
  strtok (/*@returned@*/ /*@null@*/ char *s, char *t)
  /*@modifies *s, internalState, errno@*/ ;

void /*@alt void *@*/ memset (/*@out@*/ /*@returned@*/ void *s, 
				     int c, size_t n)
     /*@modifies *s@*/ /*@requires MaxSet(s) >= (n - 1) @*/ /*@ensures MaxRead(s) >= (n - 1) @*/ ;

/*@observer@*/ char *strerror (int errnum) /*@*/ ;

/*drl */
size_t strlen (char *s) /*@*/ /*@ensures result == MaxRead(s); @*/; 

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

clock_t clock (void) /*@modifies internalState@*/ ;
double difftime (time_t time1, time_t time0) /*@*/ ;
time_t mktime (struct tm *timeptr) /*@*/ ;

time_t time (/*@null@*/ /*@out@*/ time_t *tp)
  /*@modifies *tp@*/ ;

/*@observer@*/ char *asctime (struct tm *timeptr) 
  /*@modifies errno*/ /*@ensures MaxSet(result) == 25 /\  MaxRead(result) == 25; @*/ ;

/*@observer@*/ char *ctime (time_t *tp) /*@*/
     /*@ensures MaxSet(result) == 25 /\  MaxRead(result) == 25; @*/;

/*@null@*/ /*@observer@*/ struct tm *gmtime (time_t *tp) /*@*/ ;

/*@null@*/ /*@observer@*/ struct tm *localtime (time_t *tp) 
  /*@modifies errno@*/ ;

size_t strftime (/*@out@*/ char *s, size_t smax,
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

/*
** What should the types be here? 
*/ /*#*/

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
