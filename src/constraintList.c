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

/*  void constraintList_exprNodemerge(void) */
/*  { */
/*  } */
constraintList 
constraintList_add (constraintList s, constraint el)
{
  if (resolve (el, s) )
    return s;
  
  if (s->nspace <= 0)
    constraintList_grow (s);

  s->nspace--;
  s->elements[s->nelements] = el;
  s->nelements++;
  return s;
}

constraintList constraintList_addList (constraintList s, constraintList new)
{
  llassert(s);
  llassert(new);

  if (new == constraintList_undefined)
    return s;
  
  constraintList_elements(new, elem)
    {
    s = constraintList_add (s, elem);
    }
  end_constraintList_elements
    return s;
}

cstring
constraintList_print (constraintList s) /*@*/
{
  int i;
  cstring st = cstring_undefined;
  bool first = TRUE;

  if (s->nelements == 0)
    st = cstring_makeLiteral("<List Empty>");
  
  for (i = 0; i < s->nelements; i++)
    {
      cstring type = cstring_undefined;
      constraint current = s->elements[i];

      if (current != NULL)
	{
	  cstring temp1 = constraint_print(current);
	  type = message ("%q %q\n", type, temp1 );
	}

      if (first)
	{
	  st = type;
	  first = FALSE;
	}
      else
	{
	  st = message ("%q, %q", st, type);
	}
    }
  return st;
}

void constraintList_printError (constraintList s, fileloc loc)
{

  constraintList_elements (s, elem)
    {
      if (elem != NULL)
	{
	  constraint_printError (elem, loc);
	}
    }
  end_constraintList_elements;
  return;
}

cstring
constraintList_printDetailed (constraintList s)
{
  int i;
  cstring st = cstring_undefined;
  bool first = TRUE;

  if (s->nelements == 0)
    st = cstring_makeLiteral("<List Empty>");
  
  for (i = 0; i < s->nelements; i++)
    {
      cstring type = cstring_undefined;
      constraint current = s->elements[i];

      if (current != NULL)
	{
	  cstring temp1 = constraint_printDetailed (current);
	  type = message ("%s %s\n", type, temp1 );
	}

      if (first)
	{
	  st = type;
	  first = FALSE;
	}
      else
	{
	  st = message ("%s %s", st, type);
	}
    }
  return st;
}

/*{ x: constraint | (x in l1 -> resolve (x, l2) || (x in l2 -> resolve (x, l1)
} */

constraintList
constraintList_logicalOr (constraintList l1, constraintList l2)
{
  constraint temp;
  constraintList ret;
  DPRINTF ( (message ("Logical of on %s and %s",
		      constraintList_print(l1), 
		      constraintList_print(l2)) ) );
  
  ret = constraintList_new();
  constraintList_elements (l1, el)
    {
      temp = substitute (el, l2);
      
      if (resolve (el, l2) || resolve(temp,l2) )
	{   /*avoid redundant constraints*/
	  if (!resolve (el, ret) )
	    ret = constraintList_add (ret, el);
	}
    }
  end_constraintList_elements;

   constraintList_elements (l2, el)
    {
      temp = substitute (el, l1);
      
      if (resolve (el, l1) || resolve(temp,l1) )
	{
	  /*avoid redundant constraints*/
	  if (!resolve (el, ret) )
	    ret = constraintList_add (ret, el);
	}
    }
  end_constraintList_elements;

  
  return ret;
}

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

constraintList constraintList_preserveOrig (constraintList c)
{
  constraintList_elements (c, el)
  {
    el = constraint_preserveOrig (el);
  }
  end_constraintList_elements;
  return c;
}

constraintList constraintList_doFixResult (constraintList postconditions, exprNode fcnCall)
{
  constraintList ret;
  ret = constraintList_new();
  constraintList_elements (postconditions, el)
    {
      ret = constraintList_add (ret, constraint_doFixResult (el, fcnCall) );
    }
  end_constraintList_elements;

  return ret;
}

constraintList constraintList_doSRefFixConstraintParam (constraintList preconditions, exprNodeList arglist)
{
  constraintList ret;
  ret = constraintList_new();

  constraintList_elements (preconditions, el)
    {
      ret = constraintList_add(ret, constraint_doSRefFixConstraintParam (el, arglist) );
    }
  end_constraintList_elements;

  return ret;
}
constraintList constraintList_doSRefFixBaseParam (constraintList preconditions,
						   exprNodeList arglist)
{
  constraintList ret;
  ret = constraintList_new();

  constraintList_elements (preconditions, el)
    {
      ret = constraintList_add(ret, constraint_doSRefFixBaseParam (el, arglist) );
    }
  end_constraintList_elements;

  return ret;
}

constraintList constraintList_togglePost (/*@returned@*/ constraintList c)
{
  constraintList_elements (c, el)
    {
      el->post = !el->post;
    }
  end_constraintList_elements;
  return c;
}


