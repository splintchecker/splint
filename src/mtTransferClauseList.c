/*
** Splint - annotation-assisted static program checker
** Copyright (C) 1994-2002 University of Virginia,
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
** For more information: http://www.splint.org
*/
/*
** mtTransferClauseList.c
**
** based on list_template.c
**
** where T has T_equal (or change this) and T_unparse
*/

# include "lclintMacros.nf"
# include "basic.h"

mtTransferClauseList
mtTransferClauseList_new ()
{
  return mtTransferClauseList_undefined;
}

static /*@notnull@*/ mtTransferClauseList
mtTransferClauseList_newEmpty (void)
{
  mtTransferClauseList s = (mtTransferClauseList) dmalloc (sizeof (*s));
  
  s->nelements = 0;
  s->nspace = mtTransferClauseListBASESIZE; 
  s->elements = (mtTransferClause *) dmalloc (sizeof (*s->elements) * mtTransferClauseListBASESIZE);

  return (s);
}

static void
mtTransferClauseList_grow (/*@notnull@*/ mtTransferClauseList s)
{
  int i;
  mtTransferClause *newelements;
  
  s->nspace += mtTransferClauseListBASESIZE;

  newelements = (mtTransferClause *) dmalloc (sizeof (*newelements) * (s->nelements + s->nspace));

  if (newelements == (mtTransferClause *) 0)
    {
      llfatalerror (cstring_makeLiteral ("mtTransferClauseList_grow: out of memory!"));
    }

  for (i = 0; i < s->nelements; i++)
    {
      newelements[i] = s->elements[i];
    }
  
  sfree (s->elements); 
  s->elements = newelements;
}

mtTransferClauseList mtTransferClauseList_single (/*@keep@*/ mtTransferClause el) 
{
  mtTransferClauseList s = mtTransferClauseList_new ();
  s = mtTransferClauseList_add (s, el);
  return s;
}

mtTransferClauseList mtTransferClauseList_add (mtTransferClauseList s, /*@keep@*/ mtTransferClause el)
{
  if (!mtTransferClauseList_isDefined (s))
    {
      s = mtTransferClauseList_newEmpty ();
    }

  if (s->nspace <= 0)
    {
      mtTransferClauseList_grow (s);
    }
  
  s->nspace--;
  /*@i32@*/ s->elements[s->nelements] = el;
  s->nelements++;

  /*@i32@*/ return s;
}

mtTransferClauseList mtTransferClauseList_prepend (mtTransferClauseList s, /*@keep@*/ mtTransferClause el)
{
  int i;

  if (!mtTransferClauseList_isDefined (s))
    {
      /*@i32@*/ return mtTransferClauseList_single (el);
    }

  if (s->nspace <= 0)
    {
      mtTransferClauseList_grow (s);
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
mtTransferClauseList_unparse (mtTransferClauseList s)
{
  return mtTransferClauseList_unparseSep (s, cstring_makeLiteralTemp (" "));
}

cstring
mtTransferClauseList_unparseSep (mtTransferClauseList s, cstring sep)
{
   cstring st = cstring_undefined;

   if (mtTransferClauseList_isDefined (s))
     {
       int i;

       for (i = 0; i < s->nelements; i++)
	 {
	   if (i == 0)
	     {
	       st = mtTransferClause_unparse (s->elements[i]);
	     }
	   else
	     st = message ("%q%s%q", st, sep, mtTransferClause_unparse (s->elements[i]));
	 }
     }

   return st;
}

void
mtTransferClauseList_free (mtTransferClauseList s)
{
  if (mtTransferClauseList_isDefined (s))
    {
      int i;

      for (i = 0; i < s->nelements; i++) {
	mtTransferClause_free (s->elements[i]);
      }

      sfree (s->elements);
      sfree (s);
    }
}

