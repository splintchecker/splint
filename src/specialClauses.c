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
** specialClauses.c
*/

# include "lclintMacros.nf"
# include "basic.h"

static bool specialClause_isMemoryAllocation (specialClause p_cl) /*@*/ ;
static void specialClause_free (/*@only@*/ specialClause p_s) ;
static cstring specialClause_dump (specialClause p_s) /*@*/ ;
static specialClause specialClause_undump (char **p_s) /*@modifies *p_s@*/ ;
static specialClause specialClause_copy (specialClause p_s) /*@*/ ;
static bool specialClause_sameKind (specialClause p_s1, specialClause p_s2) /*@*/ ;

specialClause 
  specialClause_create (stateConstraint st, specialClauseKind k, sRefSet s) 
{
  specialClause ret = (specialClause) dmalloc (sizeof (*ret));

  ret->state = st;
  ret->kind = k;
  ret->refs = s;

  return ret;
}

bool specialClause_isBefore (specialClause cl)
{
  return (cl->state == TK_BEFORE || cl->state == TK_BOTH);
}

bool specialClause_isAfter (specialClause cl)
{
  return (cl->state == TK_AFTER || cl->state == TK_BOTH);
}

bool specialClause_isMemoryAllocation (specialClause cl)
{
  switch (cl->kind)
    {
    case SP_ALLOCATES:
    case SP_RELEASES:
    case SP_ISONLY:
    case SP_ISSHARED:
    case SP_ISDEPENDENT:
    case SP_ISOWNED:
    case SP_ISOBSERVER:
    case SP_ISEXPOSED:
      return TRUE;
    case SP_USES:
    case SP_DEFINES:
    case SP_SETS:
    case SP_ISNULL:
    case SP_ISNOTNULL:
      return FALSE;
  }

  BADEXIT;
}

/*
** An error is reported if the test is NOT true.
*/

sRefTest specialClause_getPreTestFunction (specialClause cl)
{
  switch (cl->kind)
    {
    case SP_USES:
      return sRef_isStrictReadable;
    case SP_ALLOCATES:
      return sRef_hasNoStorage; 
    case SP_DEFINES:
      return sRef_hasNoStorage;
    case SP_SETS:
      return sRef_isNotUndefined;
    case SP_RELEASES:
      return sRef_isNotUndefined;
    case SP_ISONLY:
      return sRef_isOnly;
    case SP_ISSHARED:
      return sRef_isShared;
    case SP_ISDEPENDENT:
      return sRef_isDependent;
    case SP_ISOWNED:
      return sRef_isOwned;
    case SP_ISOBSERVER:
      return sRef_isObserver;
    case SP_ISEXPOSED:
      return sRef_isExposed;
    case SP_ISNOTNULL:
      return sRef_isNotNull;
    case SP_ISNULL:
      return sRef_isDefinitelyNull;
  }

  BADEXIT;
}

sRefTest specialClause_getPostTestFunction (specialClause cl)
{
  llassert (specialClause_isAfter (cl));

  switch (cl->kind)
    {
    case SP_USES:
      return NULL;
    case SP_ALLOCATES:
      return sRef_isAllocated;
    case SP_DEFINES:
      return sRef_isReallyDefined;
    case SP_SETS:
      return sRef_isReallyDefined;
    case SP_RELEASES:
      return sRef_isDeadStorage;
    case SP_ISONLY:
      return sRef_isOnly;
    case SP_ISSHARED:
      return sRef_isShared;
    case SP_ISDEPENDENT:
      return sRef_isDependent;
    case SP_ISOWNED:
      return sRef_isOwned;
    case SP_ISOBSERVER:
      return sRef_isObserver;
    case SP_ISEXPOSED:
      return sRef_isExposed;
    case SP_ISNOTNULL:
      return sRef_isNotNull;
    case SP_ISNULL:
      return sRef_isDefinitelyNull;
  }

  BADEXIT;
}

sRefShower specialClause_getPostTestShower (specialClause cl)
{
  switch (cl->kind)
    {
    case SP_USES:
    case SP_ALLOCATES:
      return NULL;
    case SP_DEFINES:
    case SP_SETS:
      return sRef_showNotReallyDefined;
    case SP_RELEASES:
      return NULL;
    case SP_ISONLY:
    case SP_ISSHARED:
    case SP_ISDEPENDENT:
    case SP_ISOWNED:
      return sRef_showAliasInfo;
    case SP_ISOBSERVER:
    case SP_ISEXPOSED:
      return sRef_showExpInfo;
    case SP_ISNOTNULL:
    case SP_ISNULL:
      return sRef_showNullInfo;
  }

  BADEXIT;
}

sRefMod specialClause_getEntryFunction (specialClause cl)
{
  if (cl->state == TK_BEFORE || cl->state == TK_BOTH)
    {
      switch (cl->kind)
	{
	case SP_USES:
	  return sRef_setDefinedComplete;
	case SP_ALLOCATES:
	  return NULL;
	case SP_DEFINES:
	  return NULL;
	case SP_SETS:
	  return sRef_setAllocatedComplete;
	case SP_RELEASES:
	  return sRef_setDefinedComplete;
	case SP_ISONLY:
	  return sRef_setOnly;
	case SP_ISSHARED:
	  return sRef_setShared;
	case SP_ISDEPENDENT:
	  return sRef_setDependent;
	case SP_ISOWNED:
	  return sRef_setOwned;
	case SP_ISOBSERVER:
	  return sRef_setObserver;
	case SP_ISEXPOSED:
	  return sRef_setExposed;
	case SP_ISNOTNULL:
	  return sRef_setNotNull;
	case SP_ISNULL:
	  return sRef_setDefNull;
	}

      BADBRANCH;
    }
  else
    {
      return NULL;
    }
}

sRefMod specialClause_getEffectFunction (specialClause cl)
{
  if (cl->state == TK_AFTER || cl->state == TK_BOTH)
    {
      switch (cl->kind)
	{
	case SP_USES:
	  return NULL;
	case SP_ALLOCATES:
	  return sRef_setAllocatedComplete;
	case SP_DEFINES:
	  return sRef_setDefinedNCComplete;
	case SP_SETS:
	  return sRef_setDefinedNCComplete;
	case SP_RELEASES:
	  return sRef_killComplete;
	case SP_ISONLY:
	  return sRef_setOnly;
	case SP_ISSHARED:
	  return sRef_setShared;
	case SP_ISDEPENDENT:
	  return sRef_setDependent;
	case SP_ISOWNED:
	  return sRef_setOwned;
	case SP_ISOBSERVER:
	  return sRef_setObserver;
	case SP_ISEXPOSED:
	  return sRef_setExposed;
	case SP_ISNOTNULL:
	  return sRef_setNotNull;
	case SP_ISNULL:
	  return sRef_setDefNull;
	}

      BADBRANCH;
    }
  else
    {
      return NULL;
    }
}

sRefMod specialClause_getReturnEffectFunction (specialClause cl)
{
  if (cl->state == TK_AFTER || cl->state == TK_BOTH)
    {
      switch (cl->kind)
	{
	case SP_USES:
	case SP_ALLOCATES:
	case SP_DEFINES:
	case SP_SETS:
	case SP_RELEASES:
	  return NULL;
	case SP_ISONLY:
	  return sRef_killComplete;
	case SP_ISSHARED:
	case SP_ISDEPENDENT:
	case SP_ISOWNED:
	case SP_ISOBSERVER:
	case SP_ISEXPOSED:
	case SP_ISNULL:
	case SP_ISNOTNULL:
	  return NULL;
	}

      BADBRANCH;
    }
  else
    {
      return NULL;
    }
}

flagcode specialClause_preErrorCode (specialClause cl)
{
  llassert (cl->state == TK_BOTH || cl->state == TK_BEFORE);

  switch (cl->kind)
    {
    case SP_USES:
      return FLG_USEDEF;
    case SP_ALLOCATES: /*@fallthrough@*/ 
    case SP_DEFINES:
    case SP_SETS:
      return FLG_MUSTFREE;
    case SP_RELEASES:
      return FLG_USEDEF;
    case SP_ISONLY:
      return FLG_ONLYTRANS;
    case SP_ISSHARED:
      return FLG_SHAREDTRANS;
    case SP_ISDEPENDENT:
      return FLG_DEPENDENTTRANS;
    case SP_ISOWNED:
      return FLG_OWNEDTRANS;
    case SP_ISOBSERVER:
      return FLG_OBSERVERTRANS;
    case SP_ISEXPOSED:
      return FLG_EXPOSETRANS;
    case SP_ISNULL:
    case SP_ISNOTNULL:
      return FLG_NULLSTATE;
  }

  BADBRANCH;
}

cstring specialClause_preErrorString (specialClause cl, sRef sr)
{
  llassert (cl->state == TK_BOTH || cl->state == TK_BEFORE);

  switch (cl->kind)
    {
    case SP_USES:
      if (sRef_isDead (sr)) 
	return cstring_makeLiteralTemp ("Dead");
      else
	return cstring_makeLiteralTemp ("Undefined");
    case SP_ALLOCATES: /*@fallthrough@*/ 
    case SP_DEFINES:
    case SP_SETS:
      return cstring_makeLiteralTemp ("Allocated");
    case SP_RELEASES:
      if (sRef_isDead (sr)) 
	{
	  return cstring_makeLiteralTemp ("Dead");
	}
      else if (sRef_isDependent (sr) 
	       || sRef_isShared (sr))
	{
	  return alkind_unparse (sRef_getAliasKind (sr));
	}
      else if (sRef_isObserver (sr) || sRef_isExposed (sr))
	{
	  return exkind_unparse (sRef_getExKind (sr));
	}
      else
	{
	  return cstring_makeLiteralTemp ("Undefined");
	}
    case SP_ISONLY:
    case SP_ISSHARED:
    case SP_ISDEPENDENT:
    case SP_ISOWNED:
      return alkind_capName (sRef_getAliasKind (sr));
    case SP_ISOBSERVER:
      return cstring_makeLiteralTemp ("Non-observer");
    case SP_ISEXPOSED:
      if (sRef_isObserver (sr))
	{
	  return cstring_makeLiteralTemp ("Observer");
	}
      else
	{
	  return cstring_makeLiteralTemp ("Non-exposed");
	}
    case SP_ISNOTNULL:
      if (sRef_isDefinitelyNull (sr))
	{
	  return cstring_makeLiteralTemp ("Null");
	}
      else
	{
	  return cstring_makeLiteralTemp ("Possibly null");
	}
    case SP_ISNULL:
      return cstring_makeLiteralTemp ("Non-null");
  }

  BADEXIT;
}

flagcode specialClause_postErrorCode (specialClause cl)
{
  llassert (cl->state == TK_BOTH || cl->state == TK_AFTER);

  switch (cl->kind)
    {
    case SP_USES:
      BADBRANCHCONT;
      return INVALID_FLAG;
    case SP_ALLOCATES: 
    case SP_DEFINES:  
    case SP_SETS:     
      return FLG_COMPDEF;
    case SP_RELEASES:
      return FLG_MUSTFREE;
    case SP_ISONLY:
      return FLG_ONLYTRANS;
    case SP_ISSHARED:
      return FLG_SHAREDTRANS;
    case SP_ISDEPENDENT:
      return FLG_DEPENDENTTRANS;
    case SP_ISOWNED:
      return FLG_OWNEDTRANS;
    case SP_ISOBSERVER:
      return FLG_OBSERVERTRANS;
    case SP_ISEXPOSED:
      return FLG_EXPOSETRANS;
    case SP_ISNULL:
    case SP_ISNOTNULL:
      return FLG_NULLSTATE;
  }

  BADBRANCH;
}

cstring specialClause_postErrorString (specialClause cl, sRef sr)
{
  llassert (cl->state == TK_BOTH || cl->state == TK_AFTER);

  switch (cl->kind)
    {
    case SP_USES:
      BADBRANCHCONT;
      return cstring_makeLiteralTemp ("<ERROR>");
    case SP_ALLOCATES: 
      return cstring_makeLiteralTemp ("Unallocated");
    case SP_DEFINES:
    case SP_SETS:
      return cstring_makeLiteralTemp ("Undefined");
    case SP_RELEASES:
      return cstring_makeLiteralTemp ("Unreleased");
    case SP_ISONLY:
    case SP_ISSHARED:
    case SP_ISOWNED:
    case SP_ISDEPENDENT:
      return alkind_capName (sRef_getAliasKind (sr));
    case SP_ISOBSERVER:
      return cstring_makeLiteralTemp ("Non-observer");
    case SP_ISEXPOSED:
      if (sRef_isObserver (sr))
	{
	  return cstring_makeLiteralTemp ("Observer");
	}
      else
	{
	  return cstring_makeLiteralTemp ("Non-exposed");
	}
    case SP_ISNULL:
      return cstring_makeLiteralTemp ("Non-null");
    case SP_ISNOTNULL:
      if (sRef_isDefinitelyNull (sr))
	{
	  return cstring_makeLiteralTemp ("Null");
	}
      else
	{
	  return cstring_makeLiteralTemp ("Possibly null");
	}
  }

  BADEXIT;
}

cstring specialClause_dump (specialClause s)
{
  return (message ("%d.%d.%q",
		   (int) s->state,
		   (int) s->kind,
		   sRefSet_dump (s->refs)));
}

specialClause specialClause_undump (char **s)
{
  specialClause ret = (specialClause) dmalloc (sizeof (*ret));

  ret->state = (stateConstraint) getInt (s);
  checkChar (s, '.');
  ret->kind = (specialClauseKind) getInt (s);
  checkChar (s, '.');
  ret->refs = sRefSet_undump (s);

  return ret;
}

specialClause specialClause_copy (specialClause s) 
{
  specialClause ret = (specialClause) dmalloc (sizeof (*ret));
  
  ret->state = s->state;
  ret->kind = s->kind;
  ret->refs = sRefSet_newCopy (s->refs);
  
  return ret;
}

bool specialClause_sameKind (specialClause s1, specialClause s2)
{
  return (s1->state == s2->state && s1->kind == s2->kind);
}

void specialClause_free (specialClause s)
{
  sRefSet_free (s->refs);
  sfree (s);
}

static /*@observer@*/ cstring 
  specialClauseKind_unparse (specialClauseKind k) 
{
  switch (k)
    {
    case SP_USES: 
      return cstring_makeLiteralTemp ("uses");
    case SP_DEFINES:
      return cstring_makeLiteralTemp ("defines");
    case SP_ALLOCATES:
      return cstring_makeLiteralTemp ("allocates");
    case SP_RELEASES:
      return cstring_makeLiteralTemp ("releases");
    case SP_SETS:
      return cstring_makeLiteralTemp ("sets");
    case SP_ISNULL:
      return cstring_makeLiteralTemp ("isnull");
    case SP_ISNOTNULL:
      return cstring_makeLiteralTemp ("notnull");
    case SP_ISONLY:
      return cstring_makeLiteralTemp ("only");
    case SP_ISSHARED:
      return cstring_makeLiteralTemp ("shared");
    case SP_ISDEPENDENT:
      return cstring_makeLiteralTemp ("dependent");
    case SP_ISOWNED:
      return cstring_makeLiteralTemp ("owned");
    case SP_ISOBSERVER:
      return cstring_makeLiteralTemp ("observer");
    case SP_ISEXPOSED:
      return cstring_makeLiteralTemp ("exposed");
    }

  BADEXIT;
}

cstring specialClause_unparseKind (specialClause s)
{
  return (message ("%s%s",
		   cstring_makeLiteralTemp (s->state == TK_BEFORE 
					    ? "pre:"
					    : (s->state == TK_AFTER
					       ? "post:" : "")),
		   specialClauseKind_unparse (s->kind)));
}

cstring specialClause_unparse (specialClause s)
{
  return (message ("%q %q", 
		   specialClause_unparseKind (s), sRefSet_unparse (s->refs)));
}

specialClause specialClause_createDefines (sRefSet s)
{
  return (specialClause_create (TK_BOTH, SP_DEFINES, s));
}

specialClause specialClause_createUses (sRefSet s)
{
  return (specialClause_create (TK_BOTH, SP_USES, s));
}

specialClause specialClause_createSets (sRefSet s)
{
  return (specialClause_create (TK_BOTH, SP_SETS, s));
}

specialClause specialClause_createReleases (sRefSet s)
{
  return (specialClause_create (TK_BOTH, SP_RELEASES, s));
}

specialClause specialClause_createAllocates (sRefSet s)
{
  return (specialClause_create (TK_BOTH, SP_ALLOCATES, s));
}

static /*@notnull@*/ specialClauses specialClauses_new (void)
{
  specialClauses s = (specialClauses) dmalloc (sizeof (*s));
  
  s->nelements = 0;
  s->nspace = specialClausesBASESIZE;
  s->elements = (specialClause *) 
    dmalloc (sizeof (*s->elements) * specialClausesBASESIZE);

  return (s);
}

static void
specialClauses_grow (specialClauses s)
{
  int i;
  specialClause *newelements;

  llassert (specialClauses_isDefined (s));

  s->nspace += specialClausesBASESIZE; 
  
  newelements = (specialClause *) 
    dmalloc (sizeof (*newelements) * (s->nelements + s->nspace));
  
  for (i = 0; i < s->nelements; i++)
    {
      newelements[i] = s->elements[i];
    }
  
  sfree (s->elements);
  s->elements = newelements;
}

specialClauses specialClauses_add (specialClauses s, specialClause el)
{
  if (specialClauses_isUndefined (s))
    {
      s = specialClauses_new ();
    }
  else
    {
      specialClauses_elements (s, cl)
	{
	  if (specialClause_sameKind (cl, el))
	    {
	      voptgenerror
		(FLG_SYNTAX,
		 message ("Multiple %q clauses for one function (using union)",
			  specialClause_unparseKind (cl)),
		 g_currentloc);

	      cl->refs = sRefSet_union (cl->refs, el->refs);
	      specialClause_free (el);
	      return s;
	    }
	} end_specialClauses_elements ;
    }

  if (s->nspace <= 0)
    {
      specialClauses_grow (s);
    }
  
  s->nspace--;
  s->elements[s->nelements] = el;
  s->nelements++;

  return s;
}

cstring specialClauses_unparse (specialClauses s)
{
  cstring st = cstring_undefined;
  int i;
  
  if (specialClauses_isDefined (s))
    {
      for (i = 0; i < specialClauses_size (s); i++)
	{
	  if (i == 0)
	    {
	      st = message ("%q;", specialClause_unparse (s->elements[i]));
	    }
	  else
	    st = message ("%q %q;", st, specialClause_unparse (s->elements[i]));
	}
    }
  
  return (st);
}

specialClauses specialClauses_copy (specialClauses s)
{
  if (specialClauses_isDefined (s))
    {
      specialClauses t = (specialClauses) dmalloc (sizeof (*t));
      int i;
      
      t->nelements = s->nelements;
      t->nspace = 0;
      
      if (s->nelements > 0)
	{
	  t->elements = (specialClause *) dmalloc (sizeof (*t->elements) * t->nelements);
	  for (i = 0; i < s->nelements; i++) 
	    {
	      t->elements[i] = specialClause_copy (s->elements[i]); 
	    }
	}
      else
	{
	  t->elements = NULL;
	}

      return t;
    }
  else
    {
      return specialClauses_undefined;
    }
}

void
specialClauses_free (specialClauses s)
{
  if (!specialClauses_isUndefined (s)) 
    {
      int i;

      for (i = 0; i < s->nelements; i++)
	{
	  specialClause_free (s->elements[i]);  
	}

      sfree (s->elements);
      sfree (s);
    }
}

cstring specialClauses_dump (specialClauses s)
{
  cstring st = cstring_undefined;

  if (specialClauses_isUndefined (s)) return st;
  
  specialClauses_elements (s, current)
    {
      st = message ("%q%q$", st, specialClause_dump (current));
    } end_specialClauses_elements;

  return st;
}

specialClauses specialClauses_undump (char **s)
{
  char c;
  specialClauses pn = specialClauses_new ();
  int paramno = 0;

  c = **s;

  while (c != '#' && c != '@')
    {
      specialClause sc = specialClause_undump (s);
      
      pn = specialClauses_add (pn, sc);
      checkChar (s, '$');
      c = **s;
      paramno++;
    }

  return pn;
}

static /*@exposed@*/ sRefSet
  specialClauses_getClause (specialClauses s, stateConstraint st, 
			    specialClauseKind k)
{
  specialClauses_elements (s, el)
    {
      if (el->state == st && el->kind == k)
	{
	  return el->refs;
	}
    } end_specialClauses_elements ;

  return sRefSet_undefined;
}

void specialClauses_checkAll (uentry ue)
{
  specialClauses clauses = uentry_getSpecialClauses (ue);
  sRef res = uentry_getSref (ue);		  
  bool specialResult = FALSE;

  specialClauses_elements (clauses, cl)
    {
      bool isPre = (cl->state == TK_BEFORE);
      sRefSet refs = cl->refs;

      sRefSet_allElements (refs, el)
	{
	  sRef rb = sRef_getRootBase (el);

	  if (sRef_isResult (rb))
	    {
	      if (isPre)
		{
		  voptgenerror
		    (FLG_INCONDEFS,
		     message ("Function result is used in %q clause of %q "
			      "(%q applies to the state before function is "
			      "called, so should not use result): %q",
			      specialClause_unparseKind (cl),
			      uentry_getName (ue),
			      specialClause_unparseKind (cl),
			      sRef_unparse (el)),
		     uentry_whereLast (ue));
		}
	      else
		{
		  if (!sRef_isStateSpecial (res))
		    {
		      if (!specialResult)
			{
			  voptgenerror
			    (FLG_INCONDEFS,
			     message ("Function result is used in %q clause of %q "
				      "but not annotated with special: %q",
				      specialClause_unparseKind (cl),
				      uentry_getName (ue),
				      sRef_unparse (el)),
			     uentry_whereLast (ue));

			  specialResult = TRUE;
			}
		    }

		  (void) sRef_fixResultType (el, sRef_getType (res), ue);
		}
	    }
	  else if (sRef_isParam (rb))
	    {
	      if (!sRef_isStateSpecial (rb))
		{
		  voptgenerror 
		    (FLG_INCONDEFS,
		     message ("Reference %q used in %q clause of %q, "
			      "but not annotated with special: %q",
			      sRef_unparse (rb),
			      specialClause_unparseKind (cl),
			      uentry_getName (ue),
			      sRef_unparse (el)),
		     uentry_whereLast (ue));
		}
	    }
	  else if (sRef_isInvalid (rb))
	    {
	      /*@innercontinue@*/ continue;
	    }
	  else 
	    {
	      BADBRANCHCONT;
	      /*@innercontinue@*/ continue;
	    }

	  if (specialClause_isMemoryAllocation (cl))
	    {
	      if (!ctype_isVisiblySharable (sRef_getType (el)))
		{
		  llerror 
		    (FLG_SYNTAX, 
		     message ("Special clause %q includes %q of "
			      "non-dynamically allocatated type %s",
			      specialClause_unparseKind (cl),
			      sRef_unparse (el), 
			      ctype_unparse (sRef_getType (el))));
		}
	    }

	} end_sRefSet_allElements ;
    } end_specialClauses_elements ;
}
  
void specialClauses_checkEqual (uentry old, uentry unew)
{
  specialClauses oldClauses = uentry_getSpecialClauses (old);
  specialClauses newClauses = uentry_getSpecialClauses (unew);

  if (specialClauses_isDefined (newClauses))
    {
      specialClauses_elements (newClauses, cl)
	{
	  sRefSet sc = specialClauses_getClause (oldClauses, cl->state, cl->kind);

	  if (!sRefSet_equal (sc, cl->refs))
	    {
	      if (optgenerror
		  (FLG_INCONDEFS,
		   message ("Function %q %rdeclared with inconsistent %q clause: %q",
			    uentry_getName (old),
			    uentry_isDeclared (old),
			    specialClause_unparseKind (cl),
			    sRefSet_unparsePlain (cl->refs)),
		   g_currentloc))
		{
		  uentry_showWhereLastExtra (old, sRefSet_unparsePlain (sc));
		}
	    }
	} end_specialClauses_elements ;

      specialClauses_elements (oldClauses, cl)
	{
	  sRefSet sc = specialClauses_getClause (newClauses, cl->state, cl->kind);

	  if (sRefSet_isUndefined (sc) && !sRefSet_isEmpty (cl->refs))
	    {
	      if (optgenerror
		  (FLG_INCONDEFS,
		   message ("Function %q %rdeclared without %q clause (either "
			    "use no special clauses in redeclaration, or "
			    "they must match exactly: %q",
			    uentry_getName (old),
			    uentry_isDeclared (old),
			    specialClause_unparseKind (cl),
			    sRefSet_unparsePlain (cl->refs)),
		   g_currentloc))
		{
		  uentry_showWhereLastExtra (old, sRefSet_unparsePlain (sc));
		}
	    }
	} end_specialClauses_elements ;

    }
}



