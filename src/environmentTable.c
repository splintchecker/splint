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
** environmentTable.c
*/

# include "lclintMacros.nf"
# include "basic.h"

//#include "environmentTable.h"
#include "exprData.i"
#include "exprData.h"
//#include "exprNode.h"

/*@i777*/
/*@-fcnuse*/
/*@ignore@*/
/*@constant int ATINVALID; @*/
# define ATINVALID -1

#define ENVIRONMENTSEARCHLIMIT ALIASSEARCHLIMIT
#define  FLG_GLOBENVIRONMENT FLG_GLOBALIAS
#define NOENVIRONMENT NOALIAS

static sRefSet
  environmentTable_canEnvironmentAux (environmentTable p_s, sRef p_sr, int p_lim) /*@*/ ;
static sRefSet
  environmentTable_aliasedByLimit (environmentTable p_s, sRef p_sr, int p_lim) /*@*/ ;
static sRefSet 
  environmentTable_aliasedByAux (environmentTable p_s, sRef p_sr, int p_lim) /*@*/ ;

static /*@only@*/ sRefSet environmentTable_environmentedByLimit (environmentTable p_s, sRef p_sr, int p_lim) ;

environmentTable
environmentTable_new ()
{
  return (environmentTable_undefined);
}

environmentTable
environmentTable_insertRelativeRange (/*@returned@*/ environmentTable p_s,
			 /*@exposed@*/ sRef p_sr,
			 int p_min, int p_max);


static /*@only@*/ /*@notnull@*/ environmentTable
environmentTable_newEmpty (void)
{
  environmentTable s = (environmentTable) dmalloc (sizeof (*s));
  
  s->nelements = 0;
  s->nspace = environmentTableBASESIZE;
  s->keys     = (sRef *) dmalloc (sizeof (*s->keys) * environmentTableBASESIZE);
  s->values   = (sRefSet *) dmalloc (sizeof (*s->values) * environmentTableBASESIZE);
  s->rangeValues    = (rangeAt*) dmalloc (sizeof (*s->rangeValues) * environmentTableBASESIZE);
  return (s);
}

static void
environmentTable_grow (/*@notnull@*/ environmentTable s)
{
  int i;
  o_sRefSet *oldvalues = s->values;
  sRef    *oldkeys = s->keys;
  rangeAt *oldranges = s->rangeValues;
  
  s->nspace += environmentTableBASESIZE; 

  s->values = (sRefSet *) dmalloc (sizeof (*s->values)
				   * (s->nelements + s->nspace));
  s->keys = (sRef *) dmalloc (sizeof (*s->keys) * (s->nelements + environmentTableBASESIZE));

  s->rangeValues = (rangeAt *) dmalloc (sizeof (*s->rangeValues) * (s->nelements + environmentTableBASESIZE));

  
  if (s->keys == (sRef *) 0 || s->values == (sRefSet *)0 || s->rangeValues == (rangeAt*) 0 )
    {
      llfatalerror (cstring_makeLiteral ("environmentTable_grow: out of memory!"));
    }

  for (i = 0; i < s->nelements; i++)
    {
      s->values[i] = oldvalues[i];
      s->keys[i] = oldkeys[i];
      s->rangeValues[i] = oldranges[i];
    }
  //  s->rangeValues[i] = dmalloc (sizeof (rangeAt));
  sfree (oldvalues);
  sfree (oldkeys);
  sfree (oldranges);
}



static int environmentTable_lookupRefs (/*@notnull@*/ environmentTable s, sRef sr)
{
  int i;

  
  for (i = 0; i < environmentTable_size (s); i++)
    {
      if (sRef_same (sr, s->keys[i])) 
	{
	  return i;
	}
    }

  return ATINVALID;
}

environmentTable
environmentTable_postOpvar (/*@returned@*/ environmentTable s, sRef sr)
{
  int ind;
  // printf("doing postop\n");
  if (environmentTable_isUndefined (s) )
    {
      s = environmentTable_newEmpty();
    }

  ind = environmentTable_lookupRefs (s, sr);
  if (ind == ATINVALID)
    {
      s = environmentTable_addRelativeRange (s, sr);
      ind = s->nelements;
    }
  // assume it ++ we'll do -- later

  s->rangeValues[ind].max++;
  s->rangeValues[ind].min++;
  
  return s;
}

environmentTable
environmentTable_mergeEnvironments (environmentTable s1, environmentTable s2)
{
  int i;
  environmentTable t1;
  t1 = environmentTable_copy (s1);
  if (environmentTable_isUndefined (s2) )
    return t1;
  
  for (i = 0; i < s2->nelements; i++)
    {
      int ind = environmentTable_lookupRefs ( t1, s1->keys[i]);
      if (s2->rangeValues[i].isRelative)
	{
	  if (ind == ATINVALID)
	    {
	      t1 = environmentTable_insertRelativeRange(t1, s2->keys[i], s2->rangeValues[i].max,  s2->rangeValues[i].min);
	    }
	  else
	    {
	      t1->rangeValues[ind].min += s2->rangeValues[i].min;
	      t1->rangeValues[ind].max += s2->rangeValues[i].max;
	    }
	}
      else
	{
	  /* we want to overwrite old value .. */
	  t1 = environmentTable_addExactValue (t1, s2->keys[i], s2->rangeValues[i].max);
	  /*should fix this to do min and max ... */
	}
	      
    }
}

rangeAt
rangeAt_createRelativeRange ()
{
  rangeAt tmp;
  tmp.isRelative = TRUE;
  tmp.unknown = FALSE;
  tmp.max = 0;
  tmp.min = 0;
  return tmp;
}

rangeAt rangeAt_createExactRange (int min, int max)
{
  rangeAt tmp;
  tmp.isRelative = FALSE;
  tmp.unknown = FALSE;
  tmp.min = min;
  tmp.max = max;
  return tmp;
}

environmentTable
environmentTable_addRelativeRange (/*@returned@*/ environmentTable s,
			 /*@exposed@*/ sRef sr)
{
  int ind;
  sRefSet ss;
  rangeAt range;
  
  if (environmentTable_isUndefined (s))
    {
      s = environmentTable_newEmpty ();
      ind = ATINVALID;
    }
  else
    {
      ind = environmentTable_lookupRefs (s, sr);
    }

  if (ind == ATINVALID)
    {
      if (s->nspace <= 0) {
	environmentTable_grow (s);
      }

      s->nspace--;
      s->keys[s->nelements] = sr;
      /*fix this */
      //  s->values[s->nelements] = sRefSet_single (al); 
      ind = s->nelements;
      s->nelements++;      
    }
  range = rangeAt_createRelativeRange();

  s->rangeValues[ind] = range;
  return s;
}
			     
void 
environmentTable_testInRange ( environmentTable s,  /*@exposed@*/ sRef sr, int index)
{
  int ind;
  sRefSet ss;
  rangeAt range;
  if (environmentTable_isUndefined (s))
    {
      fprintf(stderr,"environmentTable not defined\n");
      return;
    }
  
  ind = environmentTable_lookupRefs (s, sr);
  if (ind == ATINVALID)
    {
      fprintf (stderr,"range not known\n");
      return;
    }
  if ( &s->rangeValues[ind] )
    {
      if ( (s->rangeValues[ind].min <= index ) && (s->rangeValues[ind].max >= index) )
	{
	  printf("The value %d is in the range for this variable \n", index);
	}
      else
	  printf("The value %d is NOT in the range for this variable \n", index);
    }
  
}


environmentTable
environmentTable_addExactValue (/*@returned@*/ environmentTable s,
			 /*@exposed@*/ sRef sr,
			 int val)
{
  int ind;
  sRefSet ss;
  rangeAt range;
  
  if (environmentTable_isUndefined (s))
    {
      s = environmentTable_newEmpty ();
      ind = ATINVALID;
    }
  else
    {
      ind = environmentTable_lookupRefs (s, sr);
    }

  if (ind == ATINVALID)
    {
      if (s->nspace <= 0) {
	environmentTable_grow (s);
      }

      s->nspace--;
      s->keys[s->nelements] = sr;
      /*fix this */
      //  s->values[s->nelements] = sRefSet_single (al); 
      ind = s->nelements;
      s->nelements++;      
    }
   
  else
    {
      /*   s->values[ind] = sRefSet_insert (s->values[ind], al);  */
    }
  /*
  if ( (s->rangeValues[ind]) == 0 )
    {
      s->rangeValues[ind] = dmalloc(sizeof(rangeAt) );
    }
  */
  range.min = val;
  range.max = val;
  
  s->rangeValues[ind] = range;
  return s;
}

environmentTable
environmentTable_insertRelativeRange (/*@returned@*/ environmentTable s,
			 /*@exposed@*/ sRef sr,
			 int min, int max)
{
  int ind;
  sRefSet ss;
  rangeAt range;
  
  if (environmentTable_isUndefined (s))
    {
      s = environmentTable_newEmpty ();
      ind = ATINVALID;
    }
  else
    {
      ind = environmentTable_lookupRefs (s, sr);
    }

  if (ind == ATINVALID)
    {
      if (s->nspace <= 0) {
	environmentTable_grow (s);
      }

      s->nspace--;
      s->keys[s->nelements] = sr;
      /*fix this */
      //  s->values[s->nelements] = sRefSet_single (al); 
      ind = s->nelements;
      s->nelements++;      
    }
  
  range = rangeAt_createRelativeRange();
  range.min = min;
  range.max = max;
  
  s->rangeValues[ind] = range;
  return s;
}

environmentTable
environmentTable_addMustAlias (/*@returned@*/ environmentTable s,
			 /*@exposed@*/ sRef sr,
			 sRef al)
{
  int ind;
  sRefSet ss;
  
  llassert (NOENVIRONMENT (sr, al));
  /*@ignore@*/
  if (environmentTable_isUndefined (s))
    {
      s = environmentTable_newEmpty ();
      ind = ATINVALID;
    }
  else
    {
      ind = environmentTable_lookupRefs (s, sr);
    }
  
  ss = environmentTable_canEnvironment (s, al); 
  
  
  if (ind == ATINVALID)
    {
      if (s->nspace <= 0) {
	environmentTable_grow (s);
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

static environmentTable 
  environmentTable_addSet (/*@returned@*/ environmentTable s,
		     /*@exposed@*/ sRef key, /*@only@*/ sRefSet value)
{
  if (!sRefSet_isEmpty (value))
    {
      if (environmentTable_isUndefined (s))
	{
	  s = environmentTable_newEmpty ();
	}
      else
	{
	  if (s->nspace <= 0)
	    {
	      environmentTable_grow (s);
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
** When environmentes are cleared:
**
**    o remove all entries for sr
**    o replace all environmentes for things which environment sr with sr's environmentes
**
** Clear environmentes for sr; if sr is a direct param reference, clear its environmentes too.
*/

static void environmentTable_clearEnvironmentesAux (/*@notnull@*/ environmentTable p_s, sRef p_sr)
   /*@modifies p_s@*/ ;

void environmentTable_clearEnvironmentes (environmentTable s, sRef sr)
{
  if (environmentTable_isUndefined (s))
    {
      return;
    }
  else
    {
      sRef rb = sRef_getRootBase (sr);

            
      if (!sRef_isCvar (sr) && sRef_isLocalVar (rb))
	{
	  int ind = environmentTable_lookupRefs (s, rb);
	  
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

			  environmentTable_clearEnvironmentesAux (s, fb); 
			}
		    }
		} end_sRefSet_realElements ;
	    }
	}
      
      environmentTable_clearEnvironmentesAux (s, sr); 
    }  
}

static
void environmentTable_clearEnvironmentesAux (/*@notnull@*/ environmentTable s, sRef sr)
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
** returns set of all sRefs that must environment sr (but are different from sr)
*/

static /*@only@*/ sRefSet environmentTable_environmentedByAux (environmentTable s, sRef sr, int lim)
{
  static bool hadWarning = FALSE;
  sRefSet res = sRefSet_undefined;
  int i;

  llassert (!sRef_isConj (sr));
  
  
  if (environmentTable_isUndefined (s) || lim >= ENVIRONMENTSEARCHLIMIT)
    {
      if (lim >= ENVIRONMENTSEARCHLIMIT && !hadWarning)
	{
	  llquietbug
	    (message ("Environment search limit exceeded, checking %q. "
		      "This either means there is a variable with at least "
		      "%d indirections, or there is a bug in LCLint.",
		      sRef_unparse (sr),
		      ENVIRONMENTSEARCHLIMIT));
	  
	  hadWarning = TRUE;
	}

      return sRefSet_undefined;
    }
  else
    {
      sRefSet abl;

      if (sRef_isPointer (sr))
	{
	  abl = environmentTable_environmentedByLimit (s, sRef_getBase (sr), lim);
	  res = sRefSet_addIndirection (abl);
	}
      else if (sRef_isAddress (sr))
	{
	  abl = environmentTable_environmentedByLimit (s, sRef_getBase (sr), lim);
	  res = sRefSet_removeIndirection (abl);
	}
      else if (sRef_isField (sr))
	{
	  abl = environmentTable_environmentedByLimit (s, sRef_getBase (sr), lim);
	  res = sRefSet_accessField (abl, sRef_getField (sr));
	}
      else if (sRef_isArrayFetch (sr))
	{
	  abl = environmentTable_environmentedByLimit (s, sRef_getBase (sr), lim);

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

static /*@only@*/ sRefSet environmentTable_environmentedByLimit (environmentTable s, sRef sr, int lim)
{
  sRefSet res;
  
  
  if (sRef_isConj (sr))
    {
      res = sRefSet_unionFree (environmentTable_environmentedByLimit (s, sRef_getConjA (sr), lim),
			       environmentTable_environmentedByLimit (s, sRef_getConjB (sr), lim));
    }
  else
    {
      res = environmentTable_environmentedByAux (s, sr, lim + 1);
    }
  
    return res;
}

/*@only@*/ sRefSet environmentTable_environmentedBy (environmentTable s, sRef sr)
{ 
  if (sRef_isConj (sr))
    {
      return (sRefSet_unionFree (environmentTable_environmentedBy (s, sRef_getConjA (sr)),
				 environmentTable_environmentedBy (s, sRef_getConjB (sr))));
    }

  return (environmentTable_environmentedByAux (s, sr, 0));
}

/*@only@*/ sRefSet environmentTable_canEnvironment (environmentTable s, sRef sr)
{
  sRefSet res;

    
  if (sRef_isConj (sr))
    {
      res = sRefSet_unionFree (environmentTable_canEnvironment (s, sRef_getConjA (sr)),
			       environmentTable_canEnvironment (s, sRef_getConjB (sr)));
    }
  else
    {
      res = environmentTable_canEnvironmentAux (s, sr, 0);
          }

    return res;
}

/*
** need to limit the depth of environmenting searches 
*/

static /*@only@*/ sRefSet environmentTable_canEnvironmentLimit (environmentTable s, sRef sr, int lim)
{
  sRefSet res;
  
  if (sRef_isConj (sr))
    {
      sRefSet a = environmentTable_canEnvironmentLimit (s, sRef_getConjA (sr), lim);
      sRefSet b = environmentTable_canEnvironmentLimit (s, sRef_getConjB (sr), lim);

      res = sRefSet_unionFree (a, b);
    }
  else
    {
      res = environmentTable_canEnvironmentAux (s, sr, lim + 1);
    }
  
  return res;
}

static /*@only@*/ sRefSet 
  environmentTable_canEnvironmentAux (environmentTable s, sRef sr, int lim)
{
  static bool hadWarning = FALSE;
  llassert (!sRef_isConj (sr));
  
  
  if (environmentTable_isUndefined (s) || lim >= ALIASSEARCHLIMIT)
    {
      if (lim >= ALIASSEARCHLIMIT && !hadWarning)
	{
	  llquietbug
	    (message ("Environment search limit exceeded, checking %q. "
		      "This either means there is a variable with at least "
		      "%d indirections, or there is a bug in LCLint.",
		      sRef_unparse (sr),
		      ENVIRONMENTSEARCHLIMIT));
	  
	  hadWarning = TRUE;
	}

      return sRefSet_undefined;
    }
  else
    {
      int ind = environmentTable_lookupRefs (s, sr);

      if (sRef_isPointer (sr) || sRef_isAddress (sr) || sRef_isField (sr)
	  || sRef_isArrayFetch (sr))
	{
	  sRef base = sRef_getBase (sr);
	  sRefSet tmp = environmentTable_canEnvironmentLimit (s, base, lim);
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

environmentTable environmentTable_copy (environmentTable s)
{
  if (environmentTable_isEmpty (s))
    {
      return environmentTable_undefined;
    }
  else
    {
      environmentTable t = (environmentTable) dmalloc (sizeof (*s));
      int i;

      t->nelements = s->nelements;
      t->nspace = 0;
      t->keys = (sRef *) dmalloc (sizeof (*s->keys) * s->nelements);
      t->values = (sRefSet *) dmalloc (sizeof (*s->values) * t->nelements);
      t->rangeValues = (rangeAt *) dmalloc (sizeof (*s->rangeValues) * t->nelements);

      for (i = 0; i < s->nelements; i++)
	{
	  t->keys[i] = s->keys[i];
	  t->values[i] = sRefSet_newCopy (s->values[i]);
	  t->rangeValues[i] = s->rangeValues[i];
	}

      return t;
    }
}

static void
environmentTable_levelPrune (environmentTable s, int lexlevel)
{
  
  
  if (environmentTable_isEmpty (s))
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

environmentTable environmentTable_levelUnionSeq (/*@returned@*/ environmentTable t1, 
				     /*@only@*/ environmentTable t2, int level)
{
  if (environmentTable_isUndefined (t2))
    {
      return t1;
    }

  if (environmentTable_isUndefined (t1))
    {
      t1 = environmentTable_newEmpty ();
    }
  else
    {
      environmentTable_levelPrune (t1, level);
    }

  environmentTable_elements (t2, key, value)
    {
      if (sRef_lexLevel (key) <= level)
	{
	  int ind = environmentTable_lookupRefs (t1, key);

	  sRefSet_levelPrune (value, level);
	      
	  if (ind == ATINVALID)
	    {
	      /* okay, t2 is killed */
	      /*@-exposetrans@*/ /*@-dependenttrans@*/ 
	      t1 = environmentTable_addSet (t1, key, value);
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

    } end_environmentTable_elements;
  
  sfree (t2->keys);
  sfree (t2->values);
  sfree (t2);

    return t1;
}

environmentTable 
environmentTable_levelUnion (/*@returned@*/ environmentTable t1, environmentTable t2, int level)
{
  if (environmentTable_isUndefined (t1))
    {
      if (environmentTable_isUndefined (t2)) 
	{
	  return t1;
	}
      else
	{
	  t1 = environmentTable_newEmpty ();
	}
    }
  else
    {
      environmentTable_levelPrune (t1, level);
    }

  environmentTable_elements (t2, key, cvalue)
    {
      sRefSet value = sRefSet_newCopy (cvalue);

      if (sRef_lexLevel (key) <= level)
	{
	  sRefSet_levelPrune (value, level);

	  if (sRefSet_size (value) > 0)
	    {
	      int ind = environmentTable_lookupRefs (t1, key);
	      
	      if (ind == ATINVALID)
		{
		  t1 = environmentTable_addSet (t1, key, value);
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
    } end_environmentTable_elements;

    return t1;
}

environmentTable environmentTable_levelUnionNew (environmentTable t1, environmentTable t2, int level)
{
  environmentTable ret = environmentTable_levelUnion (environmentTable_copy (t1), t2, level);

  return ret;
}

/*@only@*/ cstring
environmentTable_unparse (environmentTable s)
{
   cstring st = cstring_undefined;

   if (environmentTable_isUndefined (s)) return (cstring_makeLiteral ("<NULL>"));

   environmentTable_elements (s, key, value)
     {
       st = message ("%q\t%q -> %q\n", st, sRef_unparse (key), 
		     sRefSet_unparse (value));
     } end_environmentTable_elements;

   return st;
}

/*
** bogus!
*/

void
environmentTable_fixSrefs (environmentTable s)
{
  int i;

  if (environmentTable_isUndefined (s)) return;

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
environmentTable_free (/*@only@*/ environmentTable s)
{
  int i;
  
  if (environmentTable_isUndefined (s)) return;
  
  for (i = 0; i < s->nelements; i++)
    {
      sRefSet_free (s->values[i]); 
    }
  
  sfree (s->values);
  sfree (s->keys);
  sfree (s);
}

void 
environmentTable_checkGlobs (environmentTable t)
{
  environmentTable_elements (t, key, value)
    {
      sRef root = sRef_getRootBase (key);

      if (sRef_isAliasCheckedGlobal (root))
	{
	  sRefSet_realElements (value, sr)
	    {
	      root = sRef_getRootBase (sr);

	      if (((sRef_isAliasCheckedGlobal (root) 
		    && !(sRef_similar (root, key)))
		   || sRef_isAnyParam (root))
		  && !sRef_isExposed (root))
		{
		  if (sRef_isAliasCheckedGlobal (key))
		    {
		      if (!(sRef_isShared (key) 
			    && sRef_isShared (root)))
			{
			  voptgenerror 
			    (FLG_GLOBENVIRONMENT,
			     message 
			     ("Function returns with %q variable %q environmenting %q %q",
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
	      
	      if (sRef_isAliasCheckedGlobal (root) 
		  && !sRef_isExposed (root)
		  && !sRef_isDead (key)
		  && !sRef_isShared (root))
		{
		  voptgenerror 
		    (FLG_GLOBENVIRONMENT,
		     message ("Function returns with parameter %q environmenting %q %q",
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
    } end_environmentTable_elements;
}


exprNode exprNode_mergeEnvironments (exprNode ret, exprNode e1, exprNode e2)
{
 if (exprNode_isDefined (e1) && exprNode_isDefined (e2) )
   {
     ret->environment = environmentTable_mergeEnvironments (e1->environment, e2->environment);
     return ret;
   }
 if (exprNode_isUndefined(e1) && exprNode_isUndefined(e2) )
   {
     ret->environment = environmentTable_undefined;
   }
 else
   {
     ret->environment = exprNode_isUndefined (e1) ? environmentTable_copy(e2->environment)
       : environmentTable_copy (e1->environment);
     return ret;
   }
}



exprNode
exprNode_updateForPostOp ( /*@notnull@*/ /*@returned@*/  exprNode e1)
{
  e1->environment = environmentTable_postOpvar (e1->environment, e1->sref);
  return e1;
}

void updateEnvironmentForPostOp (/*@notnull@*/ exprNode e1)
{
  sRef s1 = e1->sref;
  //  printf("doing updateEnvironmentForPostOp\n");
  e1 =  exprNode_updateForPostOp (e1);
  /*do in exprNode update exprnode*/
  usymtab_postopVar (s1);
}

void updateEnvironment (/*@notnull@*/ exprNode e1, /*@notnull@*/ exprNode e2)
{
  //  printf("doing updateEnvironment\n");
   if (!context_inProtectVars ())
    {
      /*
      ** depends on types of e1 and e2
      */
      
      sRef s1 = e1->sref;
      sRef s2 = e2->sref;
      ctype t1 = exprNode_getType (e1);
      //  printf(" for %s = %s \n", sRef_unparse(s1),  sRef_unparse(s2) );
      // printf("type is %d\n", t1);
      if (multiVal_isInt( e2->val) )
	{
	  int val =  multiVal_forceInt(e2->val);
	  //  printf("value is %d \n", val);
	  usymtab_addExactValue( s1, val);
	  environmentTable_addExactValue (e1->environment, s1, val);
	}
      
      /* handle pointer sRefs, record fields, arrays, etc... */
     }
   else
     {
       //       printf("context_inProtectVars\n");
     }
   
}

/*@=fcnuse*/
/*@end@*/
