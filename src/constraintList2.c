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
** termNodeList.c
**
** based on list_template.c
**
** where T has T_equal (or change this) and T_unparse
*/

# include "lclintMacros.nf"
# include "llbasic.h"

constraintList constraintList_new ()
{
  constraintList s = (constraintList) dmalloc (sizeof (*s));
  
  s->nelements = 0;
  s->nspacelow = constraintListGROWLOW;
  s->nspacehigh = constraintListGROWHI;
  s->elementsroot = (constraint *) dmalloc (sizeof (*s->elements) * (s->nspacelow + s->nspacehigh));
  s->elements = s->elementsroot + constraintListGROWLOW;
  s->current = 0;

  return (s);
}

static void
constraintList_grow (constraintList s)
{
  int i;
  constraint *newelements = (constraint *) dmalloc (sizeof (*newelements)
						* (s->nelements + constraintListBASESIZE));

  for (i = 0; i < s->nelements; i++)
    {
      newelements[i + constraintListGROWLOW] = s->elements[i];
    }
  
  sfree (s->elementsroot);

  s->nspacelow = constraintListGROWLOW;
  s->nspacehigh = constraintListGROWHI; 

  s->elementsroot = newelements;
  s->elements = s->elementsroot + s->nspacelow;
}

void 
constraintList_addh (constraintList s, constraint el)
{
  llassert (constraintListGROWHI > 0);

  if (s->nspacehigh <= 0)
    constraintList_grow (s);

  s->nspacehigh--;
  s->elements[s->nelements] = el;
  s->nelements++;
}

constraintList 
constraintList_push (constraintList s, constraint el)
{
  constraintList_addh (s, el);
  return s;
}

void constraintList_insertList (constraintList 

void 
constraintList_addl (constraintList s, constraint el)
{
  llassert (constraintListGROWLOW > 0);

  if (s->nspacelow <= 0)
    constraintList_grow (s);

  s->nspacelow--;
  s->elements--;
  s->elements[0] = el;
  s->current++;
  s->nelements++;
}

void 
constraintList_reset (constraintList s)
{
  s->current = 0;
}

void 
constraintList_finish (constraintList s)
{
  s->current = s->nelements - 1;
}

void 
constraintList_advance (constraintList s)
{
  s->current++;
  llassert (s->current < s->nelements);
}

/*@exposed@*/ constraint 
constraintList_head (constraintList s)
{
  llassert (s->nelements > 0);
  return (s->elements[0]);
}

/*@only@*/ constraintList 
constraintList_copy (constraintList s)
{
  constraintList r = constraintList_new ();

  constraintList_elements (s, x)
  {
    constraintList_addh (r, constraint_copySafe (x));
  } end_constraintList_elements;

  return r;
}

/*@exposed@*/ constraint 
constraintList_current (constraintList s)
{
  llassert (!(s->current >= s->nelements));
  return (s->elements[s->current]);
}

constraint 
constraintList_getN (constraintList s, int n)
{
  llassert (n >= 0 && n < s->nelements);

  return (s->elements[n]);
}

/*@only@*/ cstring
constraintList_unparse (constraintList s)
{
  bool first = TRUE;
  cstring st = cstring_undefined;

  constraintList_elements (s, current)
  {
    if (first)
      {
	st = constraint_unparse (current);
	first = FALSE;
      }
    else
      st = message ("%q, %q", st, constraint_unparse (current));
  } end_constraintList_elements;

  return st;
}

///*  /*@only@*/ cstring */
/*  constraintList_unparseTail (constraintList s) */
/*  { */
/*    bool head = TRUE; */
/*    bool first = TRUE; */
/*    cstring st = cstring_undefined; */

/*    constraintList_elements (s, current) */
/*    { */
/*      if (head) */
/*        { */
/*  	head = FALSE; */
/*        } */
/*      else */
/*        { */
/*  	if (first) */
/*  	  { */
/*  	    st = constraint_unparse (current); */
/*  	    first = FALSE; */
/*  	  } */
/*  	else */
/*  	  st = message ("%q, %q", st, constraint_unparse (current)); */
/*        } */
/*    } end_constraintList_elements; */

/*    return st; */
/*  } */

// /*@only@*/ cstring 
/*  constraintList_unparseToCurrent (constraintList s) */
/*  { */
/*    int i; */
/*    cstring st = cstring_undefined; */

/*    for (i = 0; i < s->current; i++) */
/*      { */
/*        constraint current = s->elements[i]; */

/*        if (i == 0) */
/*  	st = constraint_unparse (current); */
/*        else */
/*  	st = message ("%q, %q", st, constraint_unparse (current)); */
/*      } */

/*    return st; */
/*  } */

///*@only@*/ cstring
/*  constraintList_unparseSecondToCurrent (constraintList s) */
/*  { */
/*    int i; */
/*    cstring st = cstring_undefined; */

/*    for (i = 1; i < s->current; i++) */
/*      { */
/*        constraint current = s->elements[i]; */

/*        if (i == 1) */
/*  	{ */
/*  	  st = constraint_unparse (current); */
/*  	} */
/*        else */
/*  	{ */
/*  	  st = message ("%q, %q", st, constraint_unparse (current)); */
/*  	} */
/*      } */

/*    return st; */
/*  } */

void
constraintList_free (constraintList s)
{
  int i;
  for (i = 0; i < s->nelements; i++)
    {
      constraint_free (s->elements[i]); 
    }

  sfree (s->elementsroot);
  sfree (s);
}
