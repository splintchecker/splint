/*
** LCLint - annotation-assisted static program checker
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
** For more information: http://lclint.cs.virginia.edu
*/
/*
** stateValue.c
*/

# include "lclintMacros.nf"
# include "llbasic.h"

extern 
stateValue stateValue_create (int value, stateInfo info) {
  stateValue sv = (stateValue) dmalloc (sizeof (*sv));
  
  sv->value = value;
  sv->info = info;
  
  return sv;
}

stateValue stateValue_copy (stateValue s) {
  stateValue res;
  llassert (stateValue_isDefined (s));
  res = stateValue_create (s->value, stateInfo_copy (s->info));
  return res;
}

bool stateValue_sameValue (stateValue s1, stateValue s2) 
{
  if (stateValue_isDefined (s1) && stateValue_isDefined (s2))
    {
      return s1->value == s2->value;
    }
  else
    {
      return !stateValue_isDefined (s1) && !stateValue_isDefined (s2);
    }
}

extern
cstring stateValue_unparse (stateValue s) {
  if (stateValue_isDefined (s))
    {
      return (message ("%d:%q", s->value, stateInfo_unparse (s->info)));
    }
  else
    {
      return (cstring_makeLiteral ("<stateValue_undefined>"));
    }
}

void stateValue_updateValue (stateValue s, int value, stateInfo info) 
{
  llassert (stateValue_isDefined (s));
  s->value = value;
  
  if (stateInfo_isDefined (info)) {
    stateInfo_free (s->info);
    s->info = info;
  }
  
  DPRINTF (("update state value: %s", stateValue_unparse (s)));
}

void stateValue_updateValueLoc (stateValue s, int value, fileloc loc)
{
  llassert (stateValue_isDefined (s));

  DPRINTF (("Update state: %s -> %d at %s", stateValue_unparse (s), value, 
	    fileloc_unparse (loc)));

  s->value = value;
  
  if (fileloc_isDefined (loc)) {
    s->info = stateInfo_updateLoc (s->info, loc);
  }
}
		  
void stateValue_update (stateValue res, stateValue val)
{
  llassert (stateValue_isDefined (res));
  res->value = val->value;
  res->info = stateInfo_update (res->info, val->info);
  DPRINTF (("update state: %s", stateValue_unparse (res)));
}
		  
void stateValue_show (stateValue s, metaStateInfo msinfo)
{
  if (stateValue_isDefined (s))
    {
      stateInfo info = stateValue_getInfo (s);
      
      if (stateInfo_isDefined (info))
	{
	  if (fileloc_isDefined (info->loc))
	    {
	      llgenindentmsg (message 
			      ("State becomes %s",
			       metaStateInfo_unparseValue (msinfo,
							   stateValue_getValue (s))),
			      info->loc);
	    }
	}
    }
}

/*@observer@*/ cstring stateValue_unparseValue (stateValue s, metaStateInfo msinfo)
{
  return metaStateInfo_unparseValue (msinfo,
				     stateValue_getValue (s));
}

int stateValue_getValue (stateValue s)
{
  llassert (stateValue_isDefined (s));
  return s->value;
}

stateInfo stateValue_getInfo (stateValue s)
{
  llassert (stateValue_isDefined (s));
  return s->info;
}

bool stateValue_hasLoc (stateValue s)
{
  return (fileloc_isDefined (stateValue_getLoc (s)));
}
