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
** hashTable.c
**
** Since hsearch defined in <search.h> only allows one hash table,
** I'll implement my own.
**
** Try to find a decent hash function, etc. later...
**
** hashTable is from string -> unsigned
**
*/

# include "lclintMacros.nf"
# include "basic.h"

/*@constant null hbucket hbucket_undefined; @*/
# define hbucket_undefined 0

static /*@truenull@*/ bool hbucket_isNull (/*@null@*/ hbucket h) 
{ 
  return (h == hbucket_undefined); 
}

static hentry
hentry_create (cstring key, int val)
{
  hentry h;

  h.key = key;
  h.val = val;
  return (h);
}

static bool
hbucket_isEmpty (hbucket h)
{
  return (h == hbucket_undefined || h->size == 0);
}

static cstring
hbucket_unparse (hbucket h)
{
  cstring s = cstring_undefined;

  if (!hbucket_isNull (h))
    {
      int i;
      
      for (i = 0; i < h->size; i++)
	{
	  s = message ("%q %s:%d", s, h->entries[i].key, h->entries[i].val);
	}
    }

  return s;
}

static hbucket
hbucket_single (hentry e)
{
  hbucket h = (hbucket) dmalloc (sizeof (*h));
  
  h->size = 1;
  h->nspace = HBUCKET_BASESIZE - 1;
  h->entries = (hentry *) dmalloc (HBUCKET_BASESIZE * sizeof (*h->entries));
  h->entries[0] = e;
  
  return (h);
}

static void
hbucket_grow (/*@notnull@*/ hbucket h)
{
  int i;
  hentry *newentries; 
  
  h->nspace += HBUCKET_BASESIZE;

  newentries = (hentry *) 
    dmalloc ((h->size + HBUCKET_BASESIZE) * sizeof (*newentries));
  
  for (i = 0; i < h->size; i++) 
    {
      newentries[i] = h->entries[i]; 
    }
  
  sfree (h->entries);
  h->entries = newentries; 
}

static int hbucket_lookup (hbucket p_h, cstring p_key);

/*
** bizarre duplicate behaviour
** required for duplicate entries
*/

static void
hbucket_add (/*@notnull@*/ hbucket h, hentry e)
{
  int exloc = hbucket_lookup (h, e.key);

  
  if (exloc != HBUCKET_DNE)
    {
      h->entries[exloc].key = e.key;
      h->entries[exloc].val = e.val;
      return;
    }

  if (h->nspace == 0)
    {
            hbucket_grow (h);
    }

  h->entries[h->size] = e;
  h->size++;
  h->nspace--;
}

static int
hbucket_ncollisions (hbucket h)
{
  if (!hbucket_isNull (h) && (h->size > 1))
    return (h->size - 1);
  else
    return 0;
}

int
hbucket_lookup (hbucket h, cstring key)
{
  if (!hbucket_isNull (h))
    {
      int i;
      
      for (i = 0; i < h->size; i++)
	{
	  if (cstring_equal (h->entries[i].key, key))
	    {
	      return h->entries[i].val;
	    }
	}
    }

  return HBUCKET_DNE;
}

static
void hbucket_free (/*@only@*/ hbucket h)
{
  if (!hbucket_isNull (h))
    {
      sfree (h->entries);
      sfree (h);
    }
}

void 
hashTable_free (/*@only@*/ hashTable h)
{
  int i;

  for (i = 0; i < h->size; i++)
    {
      hbucket_free (h->buckets[i]);
    }

  sfree (h->buckets);
  sfree (h);
}
  
static int
hashTable_countCollisions (hashTable h)
{
  int nc = 0;
  int i;

  for (i = 0; i < h->size; i++)
    {
      nc += hbucket_ncollisions (h->buckets[i]);
    }

  return (nc);
}


static int
hashTable_countEmpty (hashTable h)
{
  int nc = 0;
  int i;

  for (i = 0; i < h->size; i++)
    {
      if (hbucket_isEmpty (h->buckets[i]))
	{
	  nc++;
	}
    }

  return (nc);
}

/*
** hash function snarfed from quake/hash.c Hash_String
** by Stephen Harrison
*/

/*
 * Here are 256 random numbers for use in the hash function
 */

/*@+ignoresigns@*/
static unsigned int RandomNumbers[256] =
{
#include "256_random_numbers.nf"
};
/*@=ignoresigns@*/

static unsigned int 
hashTable_hashValue (hashTable h, cstring key)
{
  char *p;
  unsigned int hash_value = 0;

  for (p = cstring_toCharsSafe (key); *p != '\0'; p++)
    {
      hash_value = (hash_value << 1) ^ RandomNumbers[*p % 256];
    }

  return (hash_value % h->size);
}

static /*@exposed@*/ hbucket
hashTable_hash (hashTable h, cstring key)
{
  return h->buckets[hashTable_hashValue (h, key)];
}


/*@only@*/ hashTable
hashTable_create (int size)
{
  int i;
  hashTable h = (hashTable) dmalloc (sizeof (*h));
  
  h->size = size;
  h->nentries = 0;
  h->buckets = (hbucket *) dmalloc (sizeof (*h->buckets) * size);
  
  /*@+loopexec@*/
  for (i = 0; i < size; i++)
    {
      h->buckets[i] = hbucket_undefined;
    }
  /*@-loopexec@*/
  return h;
}

/*@-mustfree@*/
static /*@unused@*/ void
hashTable_print (hashTable h)
{
  int i;

  for (i = 0; i < h->size; i++)
    {
      hbucket hb = h->buckets[i];

      if (hb != NULL)
	{
	  llmsg (message ("%d. %s\n", i, hbucket_unparse (hb)));
	}
    }

  llmsg (message ("size: %d, collisions: %d, empty: %d", 
		  h->size, 
		  hashTable_countCollisions (h),
		  hashTable_countEmpty (h)));
}
/*@=mustfree@*/

/*@only@*/ cstring
hashTable_stats (hashTable h)
{
  return (message ("size: %d, collisions: %d, empty: %d\n", 
			h->size, hashTable_countCollisions (h),
			hashTable_countEmpty (h)));
}

static void
hashTable_addEntry (hashTable h, hentry e)
{
  unsigned int hindex = hashTable_hashValue (h, e.key);
  /*
  ** using
  **   hbucket hb = h->buckets[hindex];  
  ** instead reveals a bug I don't want to deal with right now!
  */

  h->nentries++;
  
  if (hbucket_isNull (h->buckets[hindex]))
    {
      h->buckets[hindex] = hbucket_single (e); 
    }
  else
    {
      hbucket_add (h->buckets[hindex], e);
    }
}

void
hashTable_insert (hashTable h, cstring key, int value)
{
  unsigned int hindex;
  hbucket hb;
  hentry e;  

  
  h->nentries++;

  /*
  ** rehashing based (loosely) on code by Steve Harrison
  */

  if (h->nentries * 162 > h->size * 100) 
    {
      int i;
      int oldsize = h->size;
      int newsize = 1 + ((oldsize * 26244) / 10000); /* 26244 = 162^2 */
      hbucket *oldbuckets = h->buckets;

      
      h->size = newsize;  
      h->nentries = 0;
      h->buckets = (hbucket *) dmalloc (sizeof (*h->buckets) * newsize);

      /*@+loopexec@*/
      for (i = 0; i < newsize; i++)
	{
	  h->buckets[i] = hbucket_undefined;
	}
      /*@=loopexec@*/
      
      for (i = 0; i < oldsize; i++)
	{
	  hbucket bucket = oldbuckets[i];
	  
	  if (!hbucket_isNull (bucket))
	    {
	      int j;

	      for (j = 0; j < bucket->size; j++)
		{
		  hashTable_addEntry (h, bucket->entries[j]);
		}

	      sfree (bucket);
	    }
	}

      sfree (oldbuckets);
    }

  
  e = hentry_create (key, value);
  hindex = hashTable_hashValue (h, key);
  hb = h->buckets[hindex];
  
  if (hbucket_isNull (hb))
    {
            h->buckets[hindex] = hbucket_single (e);
    }
  else
    {
            hbucket_add (hb, e);
    }

  }

int
hashTable_lookup (hashTable h, cstring key)
{
  hbucket hb = hashTable_hash (h, key);

  return (hbucket_lookup (hb, key));
}

/*
** This is needed if oldkey is going to be released.
*/

void
hashTable_replaceKey (hashTable h, cstring oldkey, /*@dependent@*/ cstring newkey)
{
  hbucket hb = hashTable_hash (h, oldkey);

  llassert (cstring_equal (oldkey, newkey));

  if (!hbucket_isNull (hb))
    {
      int i;
      
      for (i = 0; i < hb->size; i++)
	{
	  if (cstring_equal (hb->entries[i].key, oldkey))
	    {
	      hb->entries[i].key = newkey;
	      return;
	    }
	}
    }

  llbug (message ("hashTable_replaceKey: %s not found", oldkey));
}

void
hashTable_remove (hashTable h, cstring key)
{
  hbucket hb = hashTable_hash (h, key);

  if (!hbucket_isNull (hb))
    {
      int i;
      
      for (i = 0; i < hb->size; i++)
	{
	  if (cstring_equal (hb->entries[i].key, key))
	    {
	      if (i < hb->size - 1)
		{
		  hb->entries[i] = hb->entries[hb->size - 1];
		}
	      
	      hb->size--;
	      return;
	    }
	}
    }

  llbug (message ("hashTable_removeKey: %s not found", key));
}


