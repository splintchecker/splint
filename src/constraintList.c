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


/*@iter constraintList_elements_private (sef constraintList x, yield constraint el); @*/
# define constraintList_elements_private(x, m_el) \
   { int m_ind; constraint *m_elements = &((x)->elements[0]); \
     for (m_ind = 0 ; m_ind < (x)->nelements; m_ind++) \
       { constraint m_el = *(m_elements++); 

# define end_constraintList_elements_private }}


constraintList constraintList_makeNew ()
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


constraintList 
constraintList_add (/*@returned@*/ constraintList s, /*@only@*/ constraint el)
{
  /*drl7x */
  //   el = constraint_simplify (el);
  if (resolve (el, s) )
    {
      constraint_free (el);
      return s;
    }
  
  if (s->nspace <= 0)
    constraintList_grow (s);

  s->nspace--;
  s->elements[s->nelements] = el;
  s->nelements++;
  return s;
}

/* frees everything but actual constraints */
/* This function should only be used if you have 
   other references to unshared constraints 
*/
static void constraintList_freeShallow (/*@only@*/ constraintList c)
{
  if (constraintList_isDefined(c) )
    {
      free (c->elements);
      c->elements = NULL;
      c->nelements = -1;
      c->nspace = -1;
    }
  free (c);
  c = NULL;
}

/*@only@*/ constraintList constraintList_addList (/*@returned@*/ constraintList s, /*@observer@*/ constraintList new)
{
  llassert(constraintList_isDefined(s) );
  llassert(constraintList_isDefined(new) );

  if (new == constraintList_undefined)
    return s;
  
  constraintList_elements (new, elem)
    {
    s = constraintList_add (s, constraint_copy(elem) );
    }
  end_constraintList_elements;

  return s;
}



/*@only@*/ constraintList constraintList_addListFree (/*@only@*/ constraintList s, /*@only@*/ constraintList new)
{
  llassert(constraintList_isDefined(s) );
  llassert(constraintList_isDefined(new) );

  if (new == constraintList_undefined)
    return s;
  
  constraintList_elements_private(new, elem)
    {
    s = constraintList_add (s, elem);
    }
  end_constraintList_elements_private

    constraintList_freeShallow(new);
    return s;
}

cstring
constraintList_print (constraintList s) /*@*/
{
  int i;
  cstring st = cstring_undefined;
  bool first = TRUE;

  if (s->nelements == 0)
    {
      st = cstring_makeLiteral("<List Empty>");
      return st;
    }

  for (i = 0; i < s->nelements; i++)
    {
      cstring type = cstring_undefined;
      constraint current = s->elements[i];

      if (current != NULL)
	{
	  cstring temp1;
	    if ( context_getFlag (FLG_ORCONSTRAINT) )
	      temp1 = constraint_printOr(current);
	    else
	      temp1 = constraint_print(current);
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
    } //end for

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
    {
      st = cstring_makeLiteral("<List Empty>");
      return st;
    }

  for (i = 0; i < s->nelements; i++)
    {
      cstring type = cstring_undefined;
      constraint current = s->elements[i];

      if (current != NULL)
	{
	  cstring temp1 = constraint_printDetailed (current);
	  type = message ("%s %s\n", type, temp1 );
	  cstring_free(temp1);
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
constraintList_logicalOr (/*@observer@*/ constraintList l1, /*@observer@*/ constraintList l2)
{
  constraint temp;
  constraintList ret;
  DPRINTF ( (message ("Logical or on %s and %s",
		      constraintList_print(l1), 
		      constraintList_print(l2)) ) );
  
  ret = constraintList_makeNew();
  constraintList_elements (l1, el)
    {
      temp = substitute (el, l2);
      
      if (resolve (el, l2) || resolve(temp,l2) )
	{   /*avoid redundant constraints*/
	  if (!resolve (el, ret) )
	    {
	      constraint temp2;
	      temp2 = constraint_copy(el);
	      ret = constraintList_add (ret, temp2);
	    }
	}
      constraint_free(temp);
    }
  end_constraintList_elements;

   constraintList_elements (l2, el)
    {
      temp = substitute (el, l1);
      
      if (resolve (el, l1) || resolve(temp,l1) )
	{
	  /*avoid redundant constraints*/
	  if (!resolve (el, ret) )
	    {
	      constraint temp2;
	      temp2 = constraint_copy(el);
	      ret = constraintList_add (ret, temp2);
	    }
	}
      constraint_free(temp);
    }
  end_constraintList_elements;

  
  return ret;
}

void
constraintList_free (/*@only@*/ constraintList s)
{
  int i;

  llassert(constraintList_isDefined(s) );

  
  for (i = 0; i < s->nelements; i++)
    {
      constraint_free (s->elements[i]); 
    }

  sfree (s->elements);
  s->elements = NULL;
  s->nelements = -1;
  s->nspace = -1;
  sfree (s);
  s = NULL;
}

constraintList
constraintList_copy (constraintList s)
{
  constraintList ret = constraintList_makeNew ();

  constraintList_elements (s, el)
    {
      ret = constraintList_add (ret, constraint_copy (el));
    } end_constraintList_elements;

  return ret;
}

constraintList constraintList_preserveOrig (constraintList c)
{
  DPRINTF((message("constraintList_preserveOrig preserving the originial constraints for %s ", constraintList_print (c) ) ));

  constraintList_elements_private (c, el)
  {
    el = constraint_preserveOrig (el);
  }
  end_constraintList_elements_private;
  return c;
}

constraintList constraintList_addGeneratingExpr (constraintList c, exprNode e)
{
  DPRINTF ((message ("entering constraintList_addGeneratingExpr for %s ", exprNode_unparse(e) ) ));
  
  constraintList_elements_private (c, el)
  {
    DPRINTF ((message ("setting generatingExpr for %s to %s", constraint_print(el), exprNode_unparse(e) )  ));
    el = constraint_addGeneratingExpr (el, e);
  }
  end_constraintList_elements_private;
  return c;
}

/*@only@*/ constraintList constraintList_doFixResult (/*@only@*/constraintList postconditions, exprNode fcnCall)
{
  constraintList ret;
  ret = constraintList_makeNew();
  constraintList_elements_private (postconditions, el)
    {
      ret = constraintList_add (ret, constraint_doFixResult (el, fcnCall) );
    }
  end_constraintList_elements_private;

  constraintList_free(postconditions);
  return ret;
}

constraintList constraintList_doSRefFixConstraintParam (constraintList preconditions, exprNodeList arglist)
{
  constraintList ret;
  ret = constraintList_makeNew();

  constraintList_elements (preconditions, el)
    {
      ret = constraintList_add(ret, constraint_doSRefFixConstraintParam (el, arglist) );
    }
  end_constraintList_elements;

  constraintList_free (preconditions);

  return ret;
}
constraintList constraintList_doSRefFixBaseParam (/*@observer@*/ constraintList preconditions, /*@observer@*/
						   exprNodeList arglist)
{
  constraintList ret;
  constraint temp;
  ret = constraintList_makeNew();

  constraintList_elements (preconditions, el)
    {
      temp = constraint_copy(el);
      ret = constraintList_add(ret, constraint_doSRefFixBaseParam (temp, arglist) );
    }
  end_constraintList_elements;

  return ret;
}

constraintList constraintList_togglePost (/*@returned@*/ constraintList c)
{
  constraintList_elements_private (c, el)
    {
      el = constraint_togglePost(el);
    }
  end_constraintList_elements_private;
  return c;
}


