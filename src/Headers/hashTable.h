/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** hashTable.h
*/

# ifndef HTABLE_H
# define HTABLE_H

/*@constant int HBUCKET_BASESIZE; @*/
# define HBUCKET_BASESIZE 2

/*@constant int HBUCKET_DNE; @*/
# define HBUCKET_DNE NOT_FOUND

typedef struct _hashTable *hashTable ;

typedef struct _hentry
{
  /*@dependent@*/ cstring key;
                  int     val;
} hentry;

typedef /*@null@*/ struct _hbucket
{
  int size;
  int nspace;
  /*@only@*/ hentry *entries;
} *hbucket;

typedef /*@only@*/ hbucket o_hbucket;

struct _hashTable
{
  int size;
  int nentries;
  /*@only@*/ o_hbucket *buckets;
} ;


extern /*@only@*/ hashTable hashTable_create(int p_size);
extern void hashTable_insert (hashTable p_h, cstring p_key, int p_value);
extern int hashTable_lookup (hashTable p_h, cstring p_key);
extern /*@unused@*/ /*@only@*/ cstring hashTable_stats(hashTable p_h);
extern void hashTable_free (/*@only@*/ hashTable p_h);
extern void hashTable_remove (hashTable p_h, cstring p_key) /*@modifies p_h@*/ ;
extern void 
  hashTable_replaceKey (hashTable p_h, cstring p_oldkey, /*@dependent@*/ cstring p_newkey);

# else
# error "Multiple include"
# endif 













