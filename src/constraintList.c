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


/*@iter constraintList_elements_private_only (sef constraintList x, yield only constraint el); @*/
# define constraintList_elements_private_only(x, m_el) \
   { if (constraintList_isDefined (x)) { int m_ind; constraint *m_elements = &((x)->elements[0]); \
     for (m_ind = 0 ; m_ind < (x)->nelements; m_ind++) \
       { constraint m_el = *(m_elements++); 

# define end_constraintList_elements_private_only }}}


/*@iter constraintList_elements_private (sef constraintList x, yield  constraint el); @*/
# define constraintList_elements_private(x, m_el) \
   { if (constraintList_isDefined (x)) { int m_ind; constraint *m_elements = &((x)->elements[0]); \
     for (m_ind = 0 ; m_ind < (x)->nelements; m_ind++) \
       { constraint m_el = *(m_elements++); 

# define end_constraintList_elements_private }}}


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

  llassert (constraintList_isDefined (s));

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
  llassert (constraintList_isDefined (s));

  /*drl7x */
  //   el = constraint_simplify (el);
  if (constraintList_resolve (el, s) )
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

/*@only@*/ constraintList constraintList_addList (/*@only@*/ /*@returned@*/ constraintList s, /*@observer@*/ constraintList newList)
{
  llassert(constraintList_isDefined(s) );
  llassert(constraintList_isDefined(newList) );

  if (newList == constraintList_undefined)
    return s;
  
  constraintList_elements (newList, elem)
    {
    s = constraintList_add (s, constraint_copy(elem) );
    }
  end_constraintList_elements;

  return s;
}

constraintList constraintList_addListFree (/*@returned@*/ constraintList s, /*@only@*/ constraintList newList)
{
  llassert(constraintList_isDefined(s) );
  llassert(constraintList_isDefined(newList) );

  if (constraintList_isUndefined(newList) )
    return s;
  
  constraintList_elements_private_only(newList, elem)
    {
    s = constraintList_add (s, elem);
    }
  end_constraintList_elements_private_only

    constraintList_freeShallow(newList);
    return s;
}


extern /*@only@*/ cstring constraintList_unparse ( /*@observer@*/ constraintList s) /*@*/
{
  return (constraintList_print(s));
}


/*@only@*/ cstring
constraintList_print (/*@temp@*/ constraintList s) /*@*/
{
  int i;
  cstring st = cstring_undefined;
  bool first = TRUE;
  
  if (!constraintList_isDefined (s))
    {
      return cstring_makeLiteral ("<undefined>");
    }

  if (s->nelements == 0)
    {
      st = cstring_makeLiteral("<List Empty>");
      return st;
    }

  for (i = 0; i < s->nelements; i++)
    {
      cstring type = cstring_undefined;
      constraint current = s->elements[i];

      if (constraint_isDefined(current) )
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

void constraintList_printErrorPostConditions (constraintList s, fileloc loc)
{

  constraintList_elements (s, elem)
    {
      if (constraint_isDefined(elem))
	{
	  constraint_printErrorPostCondition (elem, loc);
	}
    }
  end_constraintList_elements;
  return;
}

void constraintList_printError (constraintList s, fileloc loc)
{

  constraintList_elements (s, elem)
    {
      if (constraint_isDefined(elem) )
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

  if (!constraintList_isDefined (s))
    {
      return cstring_makeLiteral ("<undefined>");
    }

  if (s->nelements == 0)
    {
      st = cstring_makeLiteral("<List Empty>");
      return st;
    }

  for (i = 0; i < s->nelements; i++)
    {
      cstring type = cstring_undefined;
      constraint current = s->elements[i];

      if (constraint_isDefined(current ) )
	{
	  cstring temp1 = constraint_printDetailed (current);
	  type = message ("%s %s\n", type, temp1 );
	  cstring_free(temp1);
	}

      if (first)
	{
	  st = type;
	  first = FALSE;
	  type = NULL;
	}
      else
	{
	  st = message ("%q %q", st, type);
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
      temp = constraint_substitute (el, l2);
      
      if (constraintList_resolve (el, l2) || constraintList_resolve(temp,l2) )
	{   /*avoid redundant constraints*/
	  if (!constraintList_resolve (el, ret) )
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
      temp = constraint_substitute (el, l1);
      
      if (constraintList_resolve (el, l1) || constraintList_resolve(temp,l1) )
	{
	  /*avoid redundant constraints*/
	  if (!constraintList_resolve (el, ret) )
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
constraintList_copy (/*@oberserver@*/ /*@temp@*/ constraintList s)
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

constraintList constraintList_preserveCallInfo (/*@returned@*/ constraintList c,/*@observer@*/ /*@depenent@*/ /*@observer@*/  exprNode fcn)
{
  DPRINTF((message("constraintList_preserveOrig preserving the originial constraints for %s ", constraintList_print (c) ) ));

  constraintList_elements_private (c, el)
  {
    //  el = constraint_preserveOrig (el);
    el = constraint_setFcnPre(el);
    el = constraint_origAddGeneratingExpr (el, fcn);
  }
  end_constraintList_elements_private;
  return c;
}

constraintList constraintList_single (constraint c)
{
  constraintList res;
  res = constraintList_makeNew();
  res = constraintList_add (res, c);
  return res;
}

constraintList constraintList_addGeneratingExpr (constraintList c,/*@dependent@*/ exprNode e)
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

/*@only@*/ constraintList constraintList_doSRefFixConstraintParam (constraintList preconditions, /*@temp@*/ /*@observer@*/ exprNodeList arglist)
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
constraintList constraintList_doSRefFixBaseParam (constraintList preconditions, /*@observer@*/
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
      if (constraint_hasOrig(el) )
	{
	  el = constraint_togglePostOrig (el);
	}
    }
  end_constraintList_elements_private;
  return c;
}

/*@only@*/ constraintList constraintList_undump (FILE *f)
{
  constraintList ret;
  char *s = mstring_create (MAX_DUMP_LINE_LENGTH);
  char *os;
  
  ret = constraintList_makeNew();

  os = s;
  s = fgets (os, MAX_DUMP_LINE_LENGTH, f);

  while (s != NULL && *s != ';')
    {
      constraint temp;
      char * c;

      c =  reader_getWord(&s);
      
      if (strcmp (c, "C") != 0)
	{
	  llfatalbug(message("Error reading library.  File may be corrupted"));
	}

      temp = constraint_undump (f);
      ret = constraintList_add (ret, temp);
      s = fgets (os, MAX_DUMP_LINE_LENGTH, f);
      free(c);
    }
  free(s);

  return ret;
}


void constraintList_dump (/*@observer@*/ constraintList c,  FILE *f)
{
  constraintList_elements (c, el)
    {
      fprintf(f, "C\n");
      constraint_dump (el, f);
    }
  end_constraintList_elements; ;
}


