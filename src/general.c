/*
** LCLint - annotation-assisted static program checker
** Copyright (C) 1994-2000 University of Virginia,
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
** general.c
*/

# include "lclintMacros.nf"
# include "basic.h"
# undef malloc
# undef realloc
# undef calloc

# ifdef USEDMALLOC
# include "dmalloc.h"
# endif

# include "portab.h"

/*
** redefine undef'd memory ops
*/

# ifndef USEDMALLOC
# include <stdlib.h> 

/*@-mustdefine@*/

void sfree (void *x)
{
  if (x != NULL)
    {
      /*
      fprintf (stderr, "Freeing: %ld\n", x);
      if ((unsigned long) x < 136000000 && (unsigned long) x > 135000000) {
	fprintf (stderr, "Looks bad!\n");
      }
      */
      free (x);
      /* fprintf (stderr, "Done.\n"); */
    }
}
# endif

void sfreeEventually (void *x)
{
  if (x != NULL)
    {
      ; /* should keep in a table */
    }
/*@-mustfree@*/
} /*@=mustfree@*/

/*
** all memory should be allocated from dimalloc
*/

static long unsigned size_toLongUnsigned (size_t x)
{
  long unsigned res = (long unsigned) x;

  llassert ((size_t) res == x);
  return res;
}

/*@out@*/ void *dimalloc (size_t size, char *name, int line)
{
  /*
  static void *lastaddr = 0;
  static int numallocs = 0;
  static int numbad = 0;
  */

  /* was malloc, use calloc to initialize to zero */
  void *ret = (void *) calloc (1, size);

  /*
  numallocs++;

  if (ret < lastaddr)
    {
      numbad++;
      fprintf (stderr, "Bad alloc: %d / %d\n", numbad, numallocs);
    }

  lastaddr = ret;
  */

  if (ret == NULL)
    {
      if (size == 0)
	{
	  llbug (message ("Zero allocation at %q.",
			  fileloc_unparseRaw (cstring_fromChars (name), line)));
	}
      else
	{
	  llfatalerrorLoc
	    (message ("Out of memory.  Allocating %w bytes at %s:%d.", 
		      size_toLongUnsigned (size),
		      cstring_fromChars (name), line));
	}
    }
      
  /*@-null@*/ /* null okay for size = 0 */
  return ret; 
  /*@=null@*/
}

void *dicalloc (size_t num, size_t size, char *name, int line)
{
  void *ret = (void *) calloc (num, size);

  if (ret == NULL)
    {
      llfatalerrorLoc 
	(message ("Out of memory.  Allocating %w bytes at %s:%d.", 
		  size_toLongUnsigned (size),
		  cstring_fromChars (name), line));
    }
  
  return ret;
}

void *direalloc (/*@out@*/ /*@null@*/ void *x, size_t size, 
		 char *name, int line)
{
  void *ret;

  if (x == NULL)
    {				       
      ret = (void *) dmalloc (size);
    }
  else
    {
      ret = (void *) realloc (x, size);
    }

  if (ret == NULL)
    {
      llfatalerrorLoc
	(message ("Out of memory.  Allocating %w bytes at %s:%d.", 
		  size_toLongUnsigned (size),
		  cstring_fromChars (name), line));
    }
  
  return ret;
}

/*@=mustdefine@*/

# ifndef NOLCL
char *FormatInt (int i)
{
  char temp[255]; /* assume the integer has at most 254 digits */
  char *outs;

  sprintf (temp, "%i", i);
  outs = (char *) dmalloc (sizeof (*outs) * (1 + strlen (temp)));
  strcpy (outs, temp);

  return (outs);
}
# endif

bool
isCext (char *ext)
{
  return (!mstring_equal (ext, ".lcl") && 
	  !mstring_equal (ext, ".spc") &&
	  !mstring_equal (ext, ".ll"));
}

bool
isLCLfile (cstring s)
{
  char *ext;

  ext = filenameExtension (cstring_toCharsSafe (s));

  if (ext != NULL)
    {
      return (!(isCext (ext)));
    }

  return (TRUE);
}

char *removeExtension (/*@temp@*/ char *s, const char *suffix)
{
  char *t = strrchr (s, '.');
  char *s2;

  if (t == (char *) 0 || !mstring_equal (t, suffix))
    {
      return mstring_copy (s);
    }

  /*@-mods@*/ 
  *t = '\0';
  s2 = mstring_copy (s);
  *t = '.';
  /*@=mods@*/  /* Modification is undone. */
  return s2;
}

# ifndef NOLCL
bool firstWord (char *s, char *w)
{
  llassert (s != NULL);
  llassert (w != NULL);
  
  for (; *w != '\0'; w++, s++)
    {
      if (*w != *s || *s == '\0')
	return FALSE;
    }
  return TRUE;
}
# endif

# ifndef NOLCL
/*@only@*/ char *removePath (char *s)
{
  char *t = strrchr (s, CONNECTCHAR);

  if (t == NULL) return (mstring_copy (s));
  else return (mstring_copy (t + 1));
}
# endif

/*@only@*/ char *
removePathFree (/*@only@*/ char *s)
{
  char *t = strrchr (s, CONNECTCHAR);

# ifdef ALTCONNECTCHAR
  {
    char *at = strrchr (s, ALTCONNECTCHAR);
    if (t == NULL || (at > t)) {
      t = at;
    }
  }
# endif

  if (t == NULL) 
    {
      return (s);
    }
  else
    {
      char *res = mstring_copy (t + 1);
      mstring_free (s);
      return res;
    }
}

void mstring_markFree (char *s)
{
    sfreeEventually (s);
}

/*@only@*/ char *
removeAnyExtension (char *s)
{
  char *ret;
  char *t = strrchr (s, '.');

  if (t == (char *) 0)
    {
      return mstring_copy (s);
    }

  /*@-mods@*/
  *t = '\0';
  ret = mstring_copy (s);
  *t = '.';
  /*@=mods@*/ /* modification is undone */

  return ret;
}

/*@only@*/ char *
addExtension (char *s, const char *suffix)
{
  if (strrchr (s, '.') == (char *) 0)
    {
      /* <<< was mstring_concatFree1 --- bug detected by lclint >>> */
      return (mstring_concat (s, suffix));
    }
  else
    {
      return mstring_copy (s);
    }
}

int
getInt (char **s)
{
  bool gotOne = FALSE;
  int i = 0;

  while (**s == ' ')
    {
      (*s)++;
    }

  if (**s == '-')
    {
      (*s)++;
      if (**s < '0' || **s > '9')
	{
	  llbug (message ("getInt: bad int: %s", cstring_fromChars (*s))); 
	}
      else
	{
	  i = -1 * (int) (**s - '0');
	  gotOne = TRUE;
	}

      (*s)++;
    }

  while (**s >= '0' && **s <= '9')
    {
      i *= 10;
      i += (int) (**s - '0');
      (*s)++;
      gotOne = TRUE;
    }

  if (!gotOne)
    {
      llbug (message ("No int to read: %s", cstring_fromChars (*s)));
    }

  while (**s == '\n' || **s == ' ' || **s == '\t')
    {
      (*s)++;
    }

  return i;
}

char
loadChar (char **s)
{
  char ret;

  while (**s == ' ')
    {
      (*s)++;
    }
  
  ret = **s;
  (*s)++;
  return ret;
}

/*
** not sure if this works...
*/

double
getDouble (char **s)
{
  char *end = mstring_createEmpty ();
  double ret;

  ret = strtod (*s, &end);

  *s = end;
  return ret;
}

/*
** read to ' ', '\t'. '\n', '#', ',' or '\0'
*/

char *
getWord (char **s)
{
  char *res;
  char *t = *s;
  char c;

  while ((c = **s) != '\0' && (c != ' ') && (c != ',') 
	 && (c != '\n') && (c != '\t') && (c != '#'))
    {
      (*s)++;
    }

  if (*s == t)  
    {
      return NULL;
    }

  **s = '\0';
  res = mstring_copy (t);
  **s = c;
  return res;
}

bool
optCheckChar (char **s, char c)
{
  if (**s == c)
    {
      (*s)++;
      return TRUE;
    }
  else
    {
      return FALSE;
    }
}

void
docheckChar (char **s, char c, char *file, int line)
{
  /*@unchecked@*/ static int nbadchars = 0;

  if (**s == c)
    {
      (*s)++;
    }
  else
    {
      nbadchars++;

      if (nbadchars > 5)
	{
	  llfatalbug (cstring_makeLiteral 
		      ("checkChar: Too many errors.  Check library is up to date."));
	}
      else
	{
	  llbug (message ("checkChar: %q: Bad char, expecting %h: %s",
			  fileloc_unparseRaw (cstring_fromChars (file), line),
			  c,
			  cstring_fromChars (*s)));
	}
    }
}

char *mstring_spaces (int n)
{
  int i;
  char *ret;
  char *ptr;

  llassert (n >= 0);

  ret = (char *) dmalloc (size_fromInt (n + 1));
  ptr = ret;

  for (i = 0; i < n; i++)
    {
      *ptr++ = ' ';
    }

  *ptr = '\0';

  return ret;
}
 
char *mstring_concat (const char *s1, const char *s2)
{
  char *s = (char *) dmalloc (strlen (s1) + strlen (s2) + 1);
  strcpy (s, s1);
  strcat (s, s2);
  return s;
}

extern /*@only@*/ char *
mstring_concatFree (/*@only@*/ char *s1, /*@only@*/ char *s2)
{
  /* like mstring_concat but deallocates old strings */
  char *s = (char *) dmalloc (strlen (s1) + strlen (s2) + 1);
  strcpy (s, s1);
  strcat (s, s2);

  sfree (s1);
  sfree (s2);
  return s;
}

extern /*@only@*/ char *
mstring_concatFree1 (/*@only@*/ char *s1, const char *s2)
{
  char *s = (char *) dmalloc (strlen (s1) + strlen (s2) + 1);
  strcpy (s, s1);
  strcat (s, s2);
  sfree (s1);

  return s;
}

extern /*@only@*/ char *
mstring_append (/*@only@*/ char *s1, char c)
{
  size_t l = strlen (s1);
  char *s;

  s = (char *) dmalloc (sizeof (*s) * (l + 2));

  strcpy (s, s1);
  *(s + l) = c;
  *(s + l + 1) = '\0';
  sfree (s1); 
  return s;
}

extern 
char *mstring_copy (char *s1)
{
  if (s1 == NULL)
    {
      return NULL;
    }
  else
    {
      char *s = (char *) dmalloc ((strlen (s1) + 1) * sizeof (*s));
      strcpy (s, s1);
      return s;
    }
}

extern
char *mstring_safePrint (char *s)
{
  if (s == NULL)
    {
      return ("<undefined>");
    }
  else
    {
      return s;
    }
}

extern
char *mstring_create (int n)
{
  char *s;

  s = dmalloc (sizeof (*s) * (n + 1));
  *s = '\0';
  return s;
}

void
fputline (FILE *out, char *s)
{
  if (strlen (s) > 0) 
    {
      check (fputs (s, out) != EOF);
    }

  check (fputc ('\n', out) == (int) '\n');
}

int int_log (int x)
{
  int ret = 1;

  while (x > 10)
    {
      ret++;
      x /= 10;
    }

  return ret;
}

/*@-czechfcns@*/
long unsigned int 
longUnsigned_fromInt (int x)
{
  llassert (x >= 0);
  
  return (long unsigned) x;
}

size_t size_fromInt (int x)
{
  size_t res = (size_t) x;

  llassert ((int) res == x);
  return res;
}

int size_toInt (size_t x)
{
  int res = (int) x;

  llassert ((size_t) res == x);
  return res;
}

long size_toLong (size_t x)
{
  long res = (long) x;

  llassert ((size_t) res == x);
  return res;
}

/*@=czechfcns@*/

char
char_fromInt (int x)
{
  llassert ((x >= (int)'\0') && (x <= (int)'~'));

  return ((char) x);
}

/*@-czechfcns@*/
int
longUnsigned_toInt (long unsigned int x)
{
  int res = (int) x;

  llassert ((long unsigned) res == x);
  return res;
}

int
long_toInt (long int x)
{
  int res = (int) x;

  /*@+ignorequals@*/ llassert (res == x); /*@=ignorequals@*/
  return res;
}

/*@+czechfcns@*/

bool mstring_equalPrefix (const char *c1, const char *c2)
{
  llassert (c1 != NULL);
  llassert (c2 != NULL);

  if (strncmp(c1, c2, strlen(c2)) == 0)
    {
      return TRUE;
    }
  else
    {
      return FALSE;
    }
}

bool mstring_equal (/*@null@*/ const char *s1, /*@null@*/ const char *s2)
{
  if (s1 == NULL)
    {
      return (s2 == NULL);
    }
  else
    {
      if (s2 == NULL)
	{
	  return FALSE;
	}
      else
	{
	  return (strcmp(s1, s2) == 0);
	}
    }
}

/*@observer@*/ char *filenameExtension (/*@returned@*/ char *s)
{
  llassert (s != NULL);

  return (strrchr(s, '.'));
}

char *removePreDirs (char *s)
{
  while (*s == '.' && *(s + 1) == CONNECTCHAR) 
    {
      s += 2;
    }

# if defined(OS2) || defined(MSDOS)
  /* remove remainders from double path delimiters... */
  while (*s == CONNECTCHAR) 
    {
      ++s;
    }
# endif /* !defined(OS2) && !defined(MSDOS) */

  return s;
}

void checkUngetc (int c, FILE *f)
{
  int res;

  llassert (c != EOF);
  res = ungetc (c, f);
  llassert (res == c);
}

bool isHeaderFile (cstring fname)
{
  char *ext = filenameExtension (cstring_toCharsSafe (fname));
  
  return (mstring_equal (ext, ".h")
	  || mstring_equal (ext, ".H")
	  || mstring_equal (ext, ".lh"));
}

