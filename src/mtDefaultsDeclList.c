/*
** LCLint - annotation-assisted static program checker
** Copyright (C) 1994-2001 University of Virginia,
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
** mtDefaultsDeclList.c
**
** based on list_template.c
**
** where T has T_equal (or change this) and T_unparse
*/

# include "lclintMacros.nf"
# include "basic.h"
# include "mtgrammar.h"

mtDefaultsDeclList
mtDefaultsDeclList_new ()
{
  return mtDefaultsDeclList_undefined;
}

static /*@notnull@*/ mtDefaultsDeclList
mtDefaultsDeclList_newEmpty (void)
{
  mtDefaultsDeclList s = (mtDefaultsDeclList) dmalloc (sizeof (*s));
  
  s->nelements = 0;
  s->nspace = mtDefaultsDeclListBASESIZE; 
  s->elements = (mtDefaultsDecl *) dmalloc (sizeof (*s->elements) * mtDefaultsDeclListBASESIZE);

  return (s);
}

static void
mtDefaultsDeclList_grow (/*@notnull@*/ mtDefaultsDeclList s)
{
  int i;
  mtDefaultsDecl *newelements;
  
  s->nspace += mtDefaultsDeclListBASESIZE;

  newelements = (mtDefaultsDecl *) dmalloc (sizeof (*newelements) * (s->nelements + s->nspace));

  if (newelements == (mtDefaultsDecl *) 0)
    {
      llfatalerror (cstring_makeLiteral ("mtDefaultsDeclList_grow: out of memory!"));
    }

  for (i = 0; i < s->nelements; i++)
    {
      newelements[i] = s->elements[i];
    }
  
  sfree (s->elements); 
  s->elements = newelements;
}

mtDefaultsDeclList mtDefaultsDeclList_single (/*@keep@*/ mtDefaultsDecl el) 
{
  mtDefaultsDeclList s = mtDefaultsDeclList_new ();
  s = mtDefaultsDeclList_add (s, el);
  return s;
}

mtDefaultsDeclList mtDefaultsDeclList_add (mtDefaultsDeclList s, /*@keep@*/ mtDefaultsDecl el)
{
  if (!mtDefaultsDeclList_isDefined (s))
    {
      s = mtDefaultsDeclList_newEmpty ();
    }

  if (s->nspace <= 0)
    {
      mtDefaultsDeclList_grow (s);
    }
  
  s->nspace--;
  /*@i32@*/ s->elements[s->nelements] = el;
  s->nelements++;

  /*@i32@*/ return s;
}

mtDefaultsDeclList mtDefaultsDeclList_prepend (mtDefaultsDeclList s, /*@keep@*/ mtDefaultsDecl el)
{
  int i;

  if (!mtDefaultsDeclList_isDefined (s))
    {
      /*@i32@*/ return mtDefaultsDeclList_single (el);
    }

  if (s->nspace <= 0)
    {
      mtDefaultsDeclList_grow (s);
    }
  
  s->nspace--;

  for (i = s->nelements; i > 0; i--) 
    {
      s->elements[i] = s->elements [i - 1];
    }

  /*@i32@*/ s->elements[0] = el;
  s->nelements++;

  /*@i32@*/ return s;
}

cstring
mtDefaultsDeclList_unparse (mtDefaultsDeclList s)
{
  return mtDefaultsDeclList_unparseSep (s, cstring_makeLiteralTemp (" "));
}

cstring
mtDefaultsDeclList_unparseSep (mtDefaultsDeclList s, cstring sep)
{
   cstring st = cstring_undefined;

   if (mtDefaultsDeclList_isDefined (s))
     {
       int i;

       for (i = 0; i < s->nelements; i++)
	 {
	   if (i == 0)
	     {
	       st = mtDefaultsDecl_unparse (s->elements[i]);
	     }
	   else
	     st = message ("%q%s%q", st, sep, mtDefaultsDecl_unparse (s->elements[i]));
	 }
     }

   return st;
}

void
mtDefaultsDeclList_free (mtDefaultsDeclList s)
{
  if (mtDefaultsDeclList_isDefined (s))
    {
      int i;

      for (i = 0; i < s->nelements; i++) {
	mtDefaultsDecl_free (s->elements[i]);
      }

      sfree (s->elements);
      sfree (s);
    }
}

