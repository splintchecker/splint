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
** metaStateInfo.c
*/

# include "lclintMacros.nf"
# include "basic.h"
# include "mtincludes.h"

/*@notnull@*/ metaStateInfo 
metaStateInfo_create (cstring name, 
		      cstringList valueNames, 
		      mtContextNode context,
		      stateCombinationTable sctable,
		      stateCombinationTable mergetable,
		      fileloc loc) 
{
  metaStateInfo res = (metaStateInfo) dmalloc (sizeof (*res));

  res->name = name;
  res->valueNames = valueNames;
  res->context = context;

  res->sctable = sctable;
  res->mergetable = mergetable;
  res->loc = loc;
  res->default_ref = stateValue_error;
  res->default_parameter = stateValue_error;
  res->default_result = stateValue_error;

  llassert (stateCombinationTable_size (res->sctable) 
	    == cstringList_size (res->valueNames));
  return res;
}

void metaStateInfo_free (/*@only@*/ metaStateInfo msinfo)
{
  if (metaStateInfo_isDefined (msinfo))
    {
      cstring_free (msinfo->name);
      cstringList_free (msinfo->valueNames);
      stateCombinationTable_free (msinfo->sctable);
      stateCombinationTable_free (msinfo->mergetable);
      fileloc_free (msinfo->loc);
      sfree (msinfo);
    }
}

cstring metaStateInfo_unparse (metaStateInfo info)
{
  llassert (metaStateInfo_isDefined (info));
  return message ("%s: %q\n%q", info->name,
		  cstringList_unparse (info->valueNames),
		  stateCombinationTable_unparse (info->sctable));
}

cstring metaStateInfo_unparseValue (metaStateInfo info, int value)
{
  llassert (metaStateInfo_isDefined (info));
  
  DPRINTF (("unparse value: %s / %d",
	    metaStateInfo_unparse (info), value));
  
  if (value < 0) 
      {
	  llassert (value == stateValue_error);
	  return cstring_makeLiteralTemp ("error");
      }
  
  llassert (value < cstringList_size (info->valueNames));
  return cstringList_get (info->valueNames, value);
}

/*@observer@*/ mtContextNode metaStateInfo_getContext (metaStateInfo info)
{
  llassert (metaStateInfo_isDefined (info));
  return info->context;
}

/*@observer@*/ cstring metaStateInfo_getName (metaStateInfo info) 
{
  llassert (metaStateInfo_isDefined (info));
  return info->name;
}

/*@observer@*/ fileloc metaStateInfo_getLoc (metaStateInfo info) 
{
  llassert (metaStateInfo_isDefined (info));
  return info->loc;
}

extern /*@exposed@*/ stateCombinationTable 
metaStateInfo_getTransferTable (metaStateInfo info) /*@*/
{
  llassert (metaStateInfo_isDefined (info));
  return info->sctable;
}

extern /*@exposed@*/ stateCombinationTable 
metaStateInfo_getMergeTable (metaStateInfo info) /*@*/
{
  llassert (metaStateInfo_isDefined (info));
  return info->mergetable;
}

extern int metaStateInfo_getDefaultValue (metaStateInfo info, sRef s)
{
  llassert (metaStateInfo_isDefined (info));

  if (sRef_isParam (s))
    {
      return info->default_parameter;
    }
  else if (sRef_isResult (s))
    {
      return info->default_result;
    }
  else 
    {
      llassert (mtContextNode_matchesRef (metaStateInfo_getContext (info), s));
      return info->default_ref;
    }
}

extern int metaStateInfo_getDefaultGlobalValue (metaStateInfo info)
{
  llassert (metaStateInfo_isDefined (info));
  return info->default_ref;
}

void metaStateInfo_setDefaultRefValue (metaStateInfo info, int val)
{
  llassert (metaStateInfo_isDefined (info));
  llassert (info->default_ref == stateValue_error);
  info->default_ref = val;
}

void metaStateInfo_setDefaultResultValue (metaStateInfo info, int val)
{
  llassert (metaStateInfo_isDefined (info));
  llassert (info->default_result == stateValue_error);
  info->default_result = val;
}

void metaStateInfo_setDefaultParamValue (metaStateInfo info, int val)
{
  llassert (metaStateInfo_isDefined (info));
  llassert (info->default_parameter == stateValue_error);
  info->default_parameter = val;
}

int metaStateInfo_getDefaultRefValue (metaStateInfo info)
{
  llassert (metaStateInfo_isDefined (info));
  return info->default_ref;
}

int metaStateInfo_getDefaultResultValue (metaStateInfo info)
{
  llassert (metaStateInfo_isDefined (info));
  return info->default_result;
}

int metaStateInfo_getDefaultParamValue (metaStateInfo info)
{
  llassert (metaStateInfo_isDefined (info));
  return info->default_parameter;
}
