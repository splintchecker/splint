/*
** Splint - annotation-assisted static program checker
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
** For more information: http://www.splint.org
*/
/*
** rangeTable.c
*/

# include "lclintMacros.nf"
# include "basic.h"

/*@constant int ATINVALID; @*/
# define ATINVALID -1

static sRefSet
  rangeTable_canRangeAux (rangeTable p_s, sRef p_sr, int p_lim) /*@*/ ;
static sRefSet
  rangeTable_aliasedByLimit (rangeTable p_s, sRef p_sr, int p_lim) /*@*/ ;
static sRefSet 
  rangeTable_aliasedByAux (rangeTable p_s, sRef p_sr, int p_lim) /*@*/ ;

rangeTable
rangeTable_new ()
{
  return (rangeTable_undefined);
}

static /*@only@*/ /*@notnull@*/ rangeTable
rangeTable_newEmpty (void)
{
  rangeTable s = (rangeTable) dmalloc (sizeof (*s));
  
  s->nelements = 0;
  s->nspace = rangeTableBASESIZE;
  s->keys     = (sRef *) dmalloc (sizeof (*s->keys) * rangeTableBASESIZE);
  s->values   = (sRefSet *) dmalloc (sizeof (*s->values) * rangeTableBASESIZE);
  s->ranges    = (sRefSet *) dmalloc (sizeof (*s->ranges) * rangeTableBASESIZE);
  return (s);
}

static void
rangeTable_grow (/*@notnull@*/ rangeTable s)
{
  int i;
  o_sRefSet *oldvalues = s->values;
  sRef    *oldkeys = s->keys;
  RangeAt *oldranges = s->ranges;
  
  s->nspace += rangeTableBASESIZE; 

  s->values = (sRefSet *) dmalloc (sizeof (*s->values)
				   * (s->nelements + s->nspace));
  s->keys = (sRef *) dmalloc (sizeof (*s->keys) * (s->nelements + rangeTableBASESIZE));

  s->ranges = (sRef *) dmalloc (sizeof (*s->ranges) * (s->nelements + rangeTableBASESIZE));

  
  if (s->keys == (sRef *) 0 || s->values == (sRefSet *)0 || s->ranges = (range_At*) 0 )
    {
      llfatalerror (cstring_makeLiteral ("rangeTable_grow: out of memory!"));
    }

  for (i = 0; i < s->nelements; i++)
    {
      s->values[i] = oldvalues[i];
      s->keys[i] = oldkeys[i];
      s->ranges[i] = oldranges[i];
    }
  
  sfree (oldvalues);
  sfree (oldkeys);
}

static int rangeTable_lookupRefs (/*@notnull@*/ rangeTable s, sRef sr)
{
  int i;

  
  for (i = 0; i < rangeTable_size (s); i++)
    {
      if (sRef_same (sr, s->keys[i])) 
	{
	  return i;
	}
    }

  return ATINVALID;
}

/*
** sr rangees al (and anything al rangees!)
*/

rangeTable
rangeTable_addMustRange (/*@returned@*/ rangeTable s,
			 /*@exposed@*/ sRef sr,
			 sRef al)
{
  int ind;
  sRefSet ss;
  
  llassert (NORANGE (sr, al));

  if (rangeTable_isUndefined (s))
    {
      s = rangeTable_newEmpty ();
      ind = ATINVALID;
    }
  else
    {
      ind = rangeTable_lookupRefs (s, sr);
    }
  
  ss = rangeTable_canRange (s, al); 
  
  
  if (ind == ATINVALID)
    {
      if (s->nspace <= 0) {
	rangeTable_grow (s);
      }

      s->nspace--;
      s->keys[s->nelements] = sr;
      s->values[s->nelements] = sRefSet_single (al); 
      ind = s->nelements;
      s->nelements++;      
    }
  else
    {
      s->values[ind] = sRefSet_insert (s->values[ind], al); 
    }
  
  s->values[ind] = sRefSet_unionExcept (s->values[ind], ss, s->keys[ind]); 

  sRefSet_free (ss);
  return s;
}

static rangeTable 
  rangeTable_addSet (/*@returned@*/ rangeTable s,
		     /*@exposed@*/ sRef key, /*@only@*/ sRefSet value)
{
  if (!sRefSet_isEmpty (value))
    {
      if (rangeTable_isUndefined (s))
	{
	  s = rangeTable_newEmpty ();
	}
      else
	{
	  if (s->nspace <= 0)
	    {
	      rangeTable_grow (s);
	    }
	}

      s->nspace--;
      s->keys[s->nelements] = key;
      s->values[s->nelements] = value;
      s->nelements++;      
    }
  else
    {
      sRefSet_free (value);
    }

  return s;
}

/*
** When rangees are cleared:
**
**    o remove all entries for sr
**    o replace all rangees for things which range sr with sr's rangees
**
** Clear rangees for sr; if sr is a direct param reference, clear its rangees too.
*/

static void rangeTable_clearRangeesAux (/*@notnull@*/ rangeTable p_s, sRef p_sr)
   /*@modifies p_s@*/ ;

void rangeTable_clearRangees (rangeTable s, sRef sr)
{
  if (rangeTable_isUndefined (s))
    {
      return;
    }
  else
    {
      sRef rb = sRef_getRootBase (sr);

            
      if (!sRef_isCvar (sr) && sRef_isLocalVar (rb))
	{
	  int ind = rangeTable_lookupRefs (s, rb);
	  
	  if (ind != ATINVALID)
	    {
	      sRefSet al = s->values[ind];
	      
	      	      
	      sRefSet_realElements (al, el)
		{
		  		  
		  if (sRef_isParam (el))
		    {
		      if (sRef_sameName (el, rb))
			{
			  sRef fb = sRef_fixBase (sr, el); 

			  rangeTable_clearRangeesAux (s, fb); 
			}
		    }
		} end_sRefSet_realElements ;
	    }
	}
      
      rangeTable_clearRangeesAux (s, sr); 
    }  
}

static
void rangeTable_clearRangeesAux (/*@notnull@*/ rangeTable s, sRef sr)
{
  int i;
  
  for (i = 0; i < s->nelements; i++)
    {
      sRef key = s->keys[i];
      
      if (sRef_includedBy (key, sr))
	{
	  sRefSet_clear (s->values[i]);
	}
      else
	{
	  (void) sRefSet_deleteBase (s->values[i], sr);   
	}
    }
}

/*
** returns set of all sRefs that must range sr (but are different from sr)
*/

static /*@only@*/ sRefSet rangeTable_rangeedByAux (rangeTable s, sRef sr, int lim)
{
  static bool hadWarning = FALSE;
  sRefSet res = sRefSet_undefined;
  int i;

  llassert (!sRef_isConj (sr));
  
  
  if (rangeTable_isUndefined (s) || lim >= RANGESEARCHLIMIT)
    {
      if (lim >= RANGESEARCHLIMIT && !hadWarning)
	{
	  llquietbug
	    (message ("Range search limit exceeded, checking %q. "
		      "This either means there is a variable with at least "
		      "%d indirections, or there is a bug in Splint.",
		      sRef_unparse (sr),
		      RANGESEARCHLIMIT));
	  
	  hadWarning = TRUE;
	}

      return sRefSet_undefined;
    }
  else
    {
      sRefSet abl;

      if (sRef_isPointer (sr))
	{
	  abl = rangeTable_rangeedByLimit (s, sRef_getBase (sr), lim);
	  res = sRefSet_addIndirection (abl);
	}
      else if (sRef_isAddress (sr))
	{
	  abl = rangeTable_rangeedByLimit (s, sRef_getBase (sr), lim);
	  res = sRefSet_removeIndirection (abl);
	}
      else if (sRef_isField (sr))
	{
	  abl = rangeTable_rangeedByLimit (s, sRef_getBase (sr), lim);
	  res = sRefSet_accessField (abl, sRef_getField (sr));
	}
      else if (sRef_isArrayFetch (sr))
	{
	  abl = rangeTable_rangeedByLimit (s, sRef_getBase (sr), lim);

	  if (sRef_isIndexKnown (sr))
	    {
	      int idx = sRef_getIndex (sr);
	      
	      res = sRefSet_fetchKnown (abl, idx);
	    }
	  else
	    {
	      res = sRefSet_fetchUnknown (abl);
	    }
	}
      else
	{
	  abl = sRefSet_undefined;
	}

      sRefSet_free (abl);
    }

  for (i = 0; i < s->nelements; i++)
    {
      sRef elem = s->keys[i];
      
      if (!sRef_same (sr, elem)) /* was sameName */
	{
	  	  
	  sRefSet_realElements (s->values[i], current)
	    {
	      	      
	      if (sRef_similar (sr, current))
		{
		  		  		  res = sRefSet_insert (res, sRef_fixOuterRef (elem));
		  /*@innerbreak@*/ break;
		}
	    } end_sRefSet_realElements;
	} 
    }
  
    return res;
}

static /*@only@*/ sRefSet rangeTable_rangeedByLimit (rangeTable s, sRef sr, int lim)
{
  sRefSet res;
  
  
  if (sRef_isConj (sr))
    {
      res = sRefSet_unionFree (rangeTable_rangeedByLimit (s, sRef_getConjA (sr), lim),
			       rangeTable_rangeedByLimit (s, sRef_getConjB (sr), lim));
    }
  else
    {
      res = rangeTable_rangeedByAux (s, sr, lim + 1);
    }
  
    return res;
}

/*@only@*/ sRefSet rangeTable_rangeedBy (rangeTable s, sRef sr)
{ 
  if (sRef_isConj (sr))
    {
      return (sRefSet_unionFree (rangeTable_rangeedBy (s, sRef_getConjA (sr)),
				 rangeTable_rangeedBy (s, sRef_getConjB (sr))));
    }

  return (rangeTable_rangeedByAux (s, sr, 0));
}

/*@only@*/ sRefSet rangeTable_canRange (rangeTable s, sRef sr)
{
  sRefSet res;

    
  if (sRef_isConj (sr))
    {
      res = sRefSet_unionFree (rangeTable_canRange (s, sRef_getConjA (sr)),
			       rangeTable_canRange (s, sRef_getConjB (sr)));
    }
  else
    {
      res = rangeTable_canRangeAux (s, sr, 0);
          }

    return res;
}

/*
** need to limit the depth of rangeing searches 
*/

static /*@only@*/ sRefSet rangeTable_canRangeLimit (rangeTable s, sRef sr, int lim)
{
  sRefSet res;
  
  if (sRef_isConj (sr))
    {
      sRefSet a = rangeTable_canRangeLimit (s, sRef_getConjA (sr), lim);
      sRefSet b = rangeTable_canRangeLimit (s, sRef_getConjB (sr), lim);

      res = sRefSet_unionFree (a, b);
    }
  else
    {
      res = rangeTable_canRangeAux (s, sr, lim + 1);
    }
  
  return res;
}

static /*@only@*/ sRefSet 
  rangeTable_canRangeAux (rangeTable s, sRef sr, int lim)
{
  static bool hadWarning = FALSE;
  llassert (!sRef_isConj (sr));
  
  
  if (rangeTable_isUndefined (s) || lim >= RANGESEARCHLIMIT)
    {
      if (lim >= RANGESEARCHLIMIT && !hadWarning)
	{
	  llquietbug
	    (message ("Range search limit exceeded, checking %q. "
		      "This either means there is a variable with at least "
		      "%d indirections, or there is a bug in Splint.",
		      sRef_unparse (sr),
		      RANGESEARCHLIMIT));
	  
	  hadWarning = TRUE;
	}

      return sRefSet_undefined;
    }
  else
    {
      int ind = rangeTable_lookupRefs (s, sr);

      if (sRef_isPointer (sr) || sRef_isAddress (sr) || sRef_isField (sr)
	  || sRef_isArrayFetch (sr))
	{
	  sRef base = sRef_getBase (sr);
	  sRefSet tmp = rangeTable_canRangeLimit (s, base, lim);
	  sRefSet ret;

	  if (sRef_isPointer (sr))
	    {
	      ret = sRefSet_addIndirection (tmp); 
	    }
	  else if (sRef_isAddress (sr))
	    {
	      ret = sRefSet_removeIndirection (tmp);
	    }
	  else if (sRef_isField (sr))
	    {
	      ret = sRefSet_accessField (tmp, sRef_getField (sr));
	    }
	  else if (sRef_isArrayFetch (sr))
	    {
	      if (sRef_isIndexKnown (sr))
		{
		  ret = sRefSet_fetchKnown (tmp, sRef_getIndex (sr));
		}
	      else
		{
		  ret = sRefSet_fetchUnknown (tmp);
		}
	    }
	  else
	    {
	      BADBRANCH;
	    }

	  if (ind != ATINVALID)
	    {
	      ret = sRefSet_union (ret, s->values[ind]);
	    }

	  sRefSet_free (tmp);
	  	  return ret;
	}
      
      if (ind == ATINVALID) return sRefSet_undefined;      
      
      return sRefSet_newCopy (s->values[ind]);
    }
}

rangeTable rangeTable_copy (rangeTable s)
{
  if (rangeTable_isEmpty (s))
    {
      return rangeTable_undefined;
    }
  else
    {
      rangeTable t = (rangeTable) dmalloc (sizeof (*s));
      int i;

      t->nelements = s->nelements;
      t->nspace = 0;
      t->keys = (sRef *) dmalloc (sizeof (*s->keys) * s->nelements);
      t->values = (sRefSet *) dmalloc (sizeof (*s->values) * t->nelements);
        
      for (i = 0; i < s->nelements; i++)
	{
	  t->keys[i] = s->keys[i];
	  t->values[i] = sRefSet_newCopy (s->values[i]);
	}

      return t;
    }
}

static void
rangeTable_levelPrune (rangeTable s, int lexlevel)
{
  
  
  if (rangeTable_isEmpty (s))
    {
      return;
    }
  else
    {
      int i;
      int backcount = s->nelements - 1;
      
      for (i = 0; i <= backcount; i++)
	{
	  sRef key = s->keys[i];
	  
	  if (sRef_lexLevel (key) > lexlevel)
	    {
	      int j;
	      for (j = backcount; j > i; j--)
		{
		  backcount--;
		  s->nelements--;
		  s->nspace++;
		  
		  if (sRef_lexLevel (s->keys[j]) <= lexlevel)
		    {
		      s->keys[i] = s->keys[j];
		      s->values[i] = s->values[j];
		      sRefSet_levelPrune (s->values[i], lexlevel);
		      /*@innerbreak@*/ break;
		    }
		}
	      if (backcount == i)
		s->nelements--;
	    }
	  else
	    {
	      sRefSet_levelPrune (s->values[i], lexlevel);
	    }
	}
    }
}

/*
** levelUnionSeq
**
**    like level union, but know that t2 was executed after t1.  So if
**    t1 has x -> { a, b } and t2 has x -> { a }, then result has x -> { a }.
**
** NOTE: t2 is "only".
*/

rangeTable rangeTable_levelUnionSeq (/*@returned@*/ rangeTable t1, 
				     /*@only@*/ rangeTable t2, int level)
{
  if (rangeTable_isUndefined (t2))
    {
      return t1;
    }

  if (rangeTable_isUndefined (t1))
    {
      t1 = rangeTable_newEmpty ();
    }
  else
    {
      rangeTable_levelPrune (t1, level);
    }

  rangeTable_elements (t2, key, value)
    {
      if (sRef_lexLevel (key) <= level)
	{
	  int ind = rangeTable_lookupRefs (t1, key);

	  sRefSet_levelPrune (value, level);
	      
	  if (ind == ATINVALID)
	    {
	      /* okay, t2 is killed */
	      /*@-exposetrans@*/ /*@-dependenttrans@*/ 
	      t1 = rangeTable_addSet (t1, key, value);
	      /*@=exposetrans@*/ /*@=dependenttrans@*/ 
	    }
	  else
	    {
	      sRefSet_free (t1->values[ind]);

	      /*@-dependenttrans@*/ /* okay, t2 is killed */
	      t1->values[ind] = value;
	      /*@=dependenttrans@*/
	    } 
	}
      else
	{
	  /*@-exposetrans@*/ /*@-dependenttrans@*/ 
	  sRefSet_free (value);
	  /*@=exposetrans@*/ /*@=dependenttrans@*/ 
	}

    } end_rangeTable_elements;
  
  sfree (t2->keys);
  sfree (t2->values);
  sfree (t2);

    return t1;
}

rangeTable 
rangeTable_levelUnion (/*@returned@*/ rangeTable t1, rangeTable t2, int level)
{
  if (rangeTable_isUndefined (t1))
    {
      if (rangeTable_isUndefined (t2)) 
	{
	  return t1;
	}
      else
	{
	  t1 = rangeTable_newEmpty ();
	}
    }
  else
    {
      rangeTable_levelPrune (t1, level);
    }

  rangeTable_elements (t2, key, cvalue)
    {
      sRefSet value = sRefSet_newCopy (cvalue);

      if (sRef_lexLevel (key) <= level)
	{
	  sRefSet_levelPrune (value, level);

	  if (sRefSet_size (value) > 0)
	    {
	      int ind = rangeTable_lookupRefs (t1, key);
	      
	      if (ind == ATINVALID)
		{
		  t1 = rangeTable_addSet (t1, key, value);
		}
	      else
		{
		  t1->values[ind] = sRefSet_union (t1->values[ind], value);
		  sRefSet_free (value);
		}
	    }
	  else
	    {
	      sRefSet_free (value); 
	    }
	}
      else
	{
	  sRefSet_free (value); 
	}
    } end_rangeTable_elements;

    return t1;
}

rangeTable rangeTable_levelUnionNew (rangeTable t1, rangeTable t2, int level)
{
  rangeTable ret = rangeTable_levelUnion (rangeTable_copy (t1), t2, level);

  return ret;
}

/*@only@*/ cstring
rangeTable_unparse (rangeTable s)
{
   cstring st = cstring_undefined;

   if (rangeTable_isUndefined (s)) return (cstring_makeLiteral ("<NULL>"));

   rangeTable_elements (s, key, value)
     {
       st = message ("%q\t%q -> %q\n", st, sRef_unparse (key), 
		     sRefSet_unparse (value));
     } end_rangeTable_elements;

   return st;
}

/*
** bogus!
*/

void
rangeTable_fixSrefs (rangeTable s)
{
  int i;

  if (rangeTable_isUndefined (s)) return;

  for (i = 0; i < s->nelements; i++)
    {
      sRef old = s->keys[i];

      if (sRef_isLocalVar (old))
	{
	  s->keys[i] = uentry_getSref (sRef_getUentry (old));
	}

      sRefSet_fixSrefs (s->values[i]);
    }
}

void
rangeTable_free (/*@only@*/ rangeTable s)
{
  int i;
  
  if (rangeTable_isUndefined (s)) return;
  
  for (i = 0; i < s->nelements; i++)
    {
      sRefSet_free (s->values[i]); 
    }
  
  sfree (s->values);
  sfree (s->keys);
  sfree (s);
}

void 
rangeTable_checkGlobs (rangeTable t)
{
  rangeTable_elements (t, key, value)
    {
      sRef root = sRef_getRootBase (key);

      if (sRef_isRangeCheckedGlobal (root))
	{
	  sRefSet_realElements (value, sr)
	    {
	      root = sRef_getRootBase (sr);

	      if (((sRef_isRangeCheckedGlobal (root) 
		    && !(sRef_similar (root, key)))
		   || sRef_isAnyParam (root))
		  && !sRef_isExposed (root))
		{
		  if (sRef_isRangeCheckedGlobal (key))
		    {
		      if (!(sRef_isShared (key) 
			    && sRef_isShared (root)))
			{
			  voptgenerror 
			    (FLG_GLOBRANGE,
			     message 
			     ("Function returns with %q variable %q rangeing %q %q",
			      cstring_makeLiteral (sRef_isRealGlobal (key) 
						   ? "global" : "file static"),
			      sRef_unparse (key),
			      cstring_makeLiteral (sRef_isAnyParam (root) 
						   ? "parameter" : "global"),
			      sRef_unparse (sr)),
			     g_currentloc);
			}
		    }

		}
	    } end_sRefSet_realElements;
	}
      else if (sRef_isAnyParam (key) || sRef_isAnyParam (root))
	{
	  sRefSet_realElements (value, sr)
	    {
	      root = sRef_getRootBase (sr);
	      
	      if (sRef_isRangeCheckedGlobal (root) 
		  && !sRef_isExposed (root)
		  && !sRef_isDead (key)
		  && !sRef_isShared (root))
		{
		  voptgenerror 
		    (FLG_GLOBRANGE,
		     message ("Function returns with parameter %q rangeing %q %q",
			      sRef_unparse (key),
			      cstring_makeLiteral (sRef_isRealGlobal (root) 
						   ? "global" : "file static"),
			      sRef_unparse (sr)),
		     g_currentloc);
		}
	    } end_sRefSet_realElements;
	}
      else
	{
	  ;
	}
    } end_rangeTable_elements;
}



