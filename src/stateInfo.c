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
** For information on splint: splint@cs.virginia.edu
** To report a bug: splint-bug@cs.virginia.edu
** For more information: http://www.splint.org
*/

# include "splintMacros.nf"
# include "basic.h"

void stateInfo_free (/*@only@*/ stateInfo a)
{
  if (a != NULL)
    {
      fileloc_free (a->loc);
      sfree (a);
    }
}

/*@only@*/ stateInfo stateInfo_update (/*@only@*/ stateInfo old, stateInfo newinfo)
     /*
     ** returns an stateInfo with the same value as new.  May reuse the
     ** storage of old.  (i.e., same effect as copy, but more
     ** efficient.)
     */
{
  if (old == NULL) 
    {
      old = stateInfo_copy (newinfo);
    }
  else if (newinfo == NULL)
    {
      stateInfo_free (old);
      return NULL;
    }
  else
    {
      old->loc = fileloc_update (old->loc, newinfo->loc);
      old->ref = newinfo->ref;
      old->ue = newinfo->ue;
    }

  return old;
}

/*@only@*/ stateInfo stateInfo_updateLoc (/*@only@*/ stateInfo old, fileloc loc)
{
  if (old == NULL) 
    {
      old = stateInfo_makeLoc (loc);
    }
  else
    {
      old->loc = fileloc_update (old->loc, loc);
      old->ue = uentry_undefined;
      old->ref = sRef_undefined;
    }

  return old;
}

/*@only@*/ stateInfo 
    stateInfo_updateRefLoc (/*@only@*/ stateInfo old, /*@exposed@*/ sRef ref, fileloc loc)
{
  if (old == NULL) 
    {
      old = stateInfo_makeRefLoc (ref, loc);
    }
  else
    {
      old->loc = fileloc_update (old->loc, loc);
      old->ue = uentry_undefined;
      old->ref = ref;
    }

  return old;
}

/*@only@*/ stateInfo stateInfo_copy (stateInfo a)
{
  if (a == NULL)
    {
      return NULL;
    }
  else
    {
      stateInfo ret = (stateInfo) dmalloc (sizeof (*ret));
      
      ret->loc = fileloc_copy (a->loc); /*< should report bug without copy! >*/
      ret->ue = a->ue;
      ret->ref = a->ref;

      return ret;
    }
}

/*@only@*/ /*@notnull@*/ stateInfo
stateInfo_currentLoc (void)
{
  return stateInfo_makeLoc (g_currentloc);
}

/*@only@*/ /*@notnull@*/ stateInfo
stateInfo_makeLoc (fileloc loc)
{
  stateInfo ret = (stateInfo) dmalloc (sizeof (*ret));

  ret->loc = fileloc_copy (loc); /* don't need to copy! */
  ret->ue = uentry_undefined;
  ret->ref = sRef_undefined;
  
  return ret;
}

/*@only@*/ stateInfo
stateInfo_makeRefLoc (/*@exposed@*/ sRef ref, fileloc loc)
{
  stateInfo ret = (stateInfo) dmalloc (sizeof (*ret));

  ret->loc = fileloc_copy (loc);
  ret->ref = ref;
  ret->ue  = uentry_undefined;
  
  return ret;
}

/*@only@*/ cstring
stateInfo_unparse (stateInfo s)
{
    if (stateInfo_isDefined (s) && 
	fileloc_isDefined (s->loc)) {
	return fileloc_unparse (s->loc);
    } else {
	return cstring_makeLiteral ("<no info>");
    }
}

fileloc stateInfo_getLoc (stateInfo info)
{
    if (stateInfo_isDefined (info)) {
	return info->loc;
    }

    return fileloc_undefined;
}

