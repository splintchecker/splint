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
** constraintList.c
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
  s->nspace = constraintListBASESIZE;
  s->elements = (constraint *)
    dmalloc (sizeof (*s->elements) * constraintListBASESIZE);

  return (s);
}

static void
constraintList_grow (constraintList s)
{
  int i;
  constraint *newelements; 

  s->nspace += constraintListBASESIZE;
  newelements = (constraint *) dmalloc (sizeof (*newelements)
				     * (s->nelements + s->nspace));

  for (i = 0; i < s->nelements; i++)
    {
      newelements[i] = s->elements[i]; 
    }

  sfree (s->elements); 
  s->elements = newelements;
}

constraintList_exprNodemerge()
{
}
constraintList 
constraintList_add (constraintList s, constraint el)
{
  if (s->nspace <= 0)
    constraintList_grow (s);

  s->nspace--;
  s->elements[s->nelements] = el;
  s->nelements++;
  return s;
}

/*  cstring */
/*  constraintList_unparse (constraintList s) */
/*  { */
/*    int i; */
/*    cstring st = cstring_undefined; */
/*    bool first = TRUE; */

/*    for (i = 0; i < s->nelements; i++) */
/*      { */
/*        cstring type = cstring_undefined; */
/*        constraint current = s->elements[i]; */

/*        if (current->isObj) */
/*  	{ */
/*  	  type = cstring_makeLiteral ("obj "); */
/*  	} */

/*        if (current->type != NULL) */
/*  	{ */
/*  	  type = message (": %q%q", type, lclTypeSpecNode_unparse (current->type)); */
/*  	} */

/*        if (first) */
/*  	{ */
/*  	  st = type; */
/*  	  first = FALSE; */
/*  	} */
/*        else */
/*  	{ */
/*  	  st = message ("%q, %q", st, type); */
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
      //      constraint_free (s->elements[i]); 
    }

  sfree (s->elements);
  sfree (s);
}

constraintList
constraintList_copy (constraintList s)
{
  constraintList ret = constraintList_new ();

  constraintList_elements (s, el)
    {
      ret = constraintList_add (ret, constraint_copy (el));
    } end_constraintList_elements;

  return ret;
}
