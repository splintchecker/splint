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
** metaStateSpecifier.c
*/

# include "lclintMacros.nf"
# include "basic.h"
# include "mtincludes.h"

metaStateSpecifier 
metaStateSpecifier_create (/*@only@*/ sRef sr, /*@observer@*/ metaStateInfo msinfo)
{
  metaStateSpecifier res = (metaStateSpecifier) dmalloc (sizeof (*res));
  res->sr = sr;
  res->msinfo = msinfo;
  return res;
}

sRef
metaStateSpecifier_getSref (metaStateSpecifier m)
{
  return m->sr;
}

metaStateInfo
metaStateSpecifier_getMetaStateInfo (metaStateSpecifier m)
{
  return m->msinfo;
}

metaStateSpecifier 
metaStateSpecifier_copy (metaStateSpecifier m)
{
  return metaStateSpecifier_create (sRef_saveCopy (m->sr), m->msinfo);
}

cstring metaStateSpecifier_unparse (metaStateSpecifier m) 
{
  return message ("%q:%s", 
		  sRef_unparse (m->sr),
		  metaStateInfo_getName (m->msinfo));
}

void metaStateSpecifier_free (/*@only@*/ metaStateSpecifier m) 
{
  sRef_free (m->sr);
  sfree (m);
}

