/*
** Splint - annotation-assisted static program checker
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
** For more information: http://www.splint.org
*/
/*
** qtype.c
**
** Qualified types: a type qualifier list, and a ctype.
** qtypes are mutable
*/

# include "lclintMacros.nf"
# include "basic.h"

/*@notnull@*/ qtype qtype_create (ctype c)
{
  qtype q = (qtype) dmalloc (sizeof (*q));

  q->type = c;
  q->quals = qualList_new ();
  return q;
}

void qtype_free (/*@only@*/ qtype q)
{
  if (qtype_isDefined (q))
    {
      qualList_free (q->quals);
      sfree (q);
    }
}

qtype qtype_unknown ()
{
  return (qtype_create (ctype_unknown));
}

qtype qtype_addQual (qtype qt, qual q)
{
  if (qtype_isDefined (qt))
    {
      qt->quals = qualList_add (qt->quals, q);
    }

  return qt;
}

# ifndef NOLCL
qtype qtype_addQualList (/*@returned@*/ qtype qt, qualList ql)
{
  if (qtype_isDefined (qt))
    {
      qt->quals = qualList_appendList (qt->quals, ql);
    }

  return qt;
}
# endif

static void checkAltQuals (qtype q)
{
  if (qtype_isDefined (q))
    {
      qualList badQuals = qualList_undefined;
      
      qualList_elements (q->quals, qu)
	{
	  if (!qual_isCQual (qu) && !qual_isImplied (qu))
	    {
	      badQuals = qualList_add (badQuals, qu);
	    }
	} end_qualList_elements ;
      
      if (!qualList_isEmpty (badQuals))
	{
	  voptgenerror (FLG_SYNTAX,
			message 
			("Alternate type cannot use annotations %q: %q",
			 qualList_unparse (badQuals),
			 qtype_unparse (q)),
			g_currentloc);
	}
    }
}

# ifndef NOLCL
qtype qtype_mergeImplicitAlt (/*@returned@*/ qtype q1, /*@only@*/ qtype q2)
{
  if (qtype_isDefined (q1) && qtype_isDefined (q2))
    {
      q1->type = ctype_makeConj (q1->type, q2->type);
      
      if (!qualList_isEmpty (q2->quals))
	{
	  checkAltQuals (q2);
	}
    }

  qtype_free (q2);
  return q1;
}
# endif

qtype qtype_mergeAlt (/*@returned@*/ qtype q1, /*@only@*/ qtype q2)
{
  if (qtype_isDefined (q1) && qtype_isDefined (q2))
    {
      if (context_getFlag (FLG_IMPCONJ))
	{
	  q1->type = ctype_makeConj (q1->type, q2->type);
	}
      else
	{
	  q1->type = ctype_makeExplicitConj (q1->type, q2->type);
	}

      
      if (!qualList_isEmpty (q2->quals))
	{
	  checkAltQuals (q2);
	}
    }
  
  qtype_free (q2);
  return q1;
}

qtype qtype_combine (/*@returned@*/ qtype q1, ctype ct)
{
  if (qtype_isDefined (q1))
    {
      /* ct is modifier (or q1->type is unknown) */
      q1->type = ctype_combine (q1->type, ct); 
    }

  return q1;
}

qtype qtype_resolve (/*@returned@*/ qtype q)
{
  if (qtype_isDefined (q))
    {
      q->type = ctype_resolve (q->type);
    }

  return q;
}

cstring qtype_unparse (qtype q)
{
  if (qtype_isDefined (q))
    {
      return (message ("%q%s", qualList_unparse (q->quals), 
		       ctype_unparse (q->type)));
    }
  else
    {
      return (cstring_makeLiteral ("<undefined>"));
    }
}

qtype qtype_newBase (/*@returned@*/ qtype q, ctype ct)
{
  if (qtype_isDefined (q))
    {
      q->type = ctype_newBase (ct, q->type);
    }

  return q;
}

qtype qtype_newQbase (qtype q1, qtype q2)
{
  if (qtype_isDefined (q1) && qtype_isDefined (q2))
    {
      q1->type = ctype_newBase (q1->type, q2->type);
      q1->quals = qualList_appendList (q1->quals, q2->quals);
    }

  return q1;
}

void qtype_adjustPointers (int n, qtype q)
{
  if (qtype_isDefined (q))
    {
      q->type = ctype_adjustPointers (n, q->type);
    }
}

# ifndef NOLCL
qtype qtype_copy (qtype q)
{
  if (qtype_isDefined (q))
    {
      qtype r = qtype_create (q->type);
      
      qualList_free (r->quals);
      r->quals = qualList_copy (q->quals);
      return r;
    }
  else
    {
      return qtype_undefined;
    }
}
# endif
