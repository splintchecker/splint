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
** functionConstraint.c
*/

# include "lclintMacros.nf"
# include "basic.h"
# include "mtincludes.h"

static /*@only@*/ /*@notnull@*/ /*@special@*/ functionConstraint  /*@i32 need special? @*/
functionConstraint_alloc (functionConstraintKind kind) /*@defines result->kind@*/
{
  functionConstraint res = (functionConstraint) dmalloc (sizeof (*res));

  res->kind = kind;
  return res;
}

extern functionConstraint functionConstraint_createBufferConstraint (constraintList buf)
{ 
  functionConstraint res = functionConstraint_alloc (FCT_BUFFER);
  res->constraint.buffer = buf;
  return res;
}

extern functionConstraint functionConstraint_createMetaStateConstraint (metaStateConstraint msc)
{ 
  functionConstraint res = functionConstraint_alloc (FCT_METASTATE);
  res->constraint.metastate = msc;
  return res;
}

/*@only@*/ cstring functionConstraint_unparse (functionConstraint p)
{
  if (functionConstraint_isDefined (p)) 
    {
      switch (p->kind)
	{
	case FCT_BUFFER: 
	  return constraintList_unparse (p->constraint.buffer);
	case FCT_METASTATE:
	  return metaStateConstraint_unparse (p->constraint.metastate);
	  BADDEFAULT;
	}
      BADBRANCH;
    }
  else
    {
      return cstring_makeLiteral ("< empty constraint >");
    }
}

extern constraintList functionConstraint_getBufferConstraint (functionConstraint node)
{
  llassert (functionConstraint_isDefined (node));
  llassert (node->kind == FCT_BUFFER);
  return node->constraint.buffer;
}

extern metaStateConstraint functionConstraint_getMetaStateConstraint (functionConstraint node)
{
  llassert (functionConstraint_isDefined (node));
  llassert (node->kind == FCT_METASTATE);
  return node->constraint.metastate;
}

extern bool functionConstraint_hasBufferConstraint (functionConstraint node)
{
  return functionConstraint_isDefined (node) && node->kind == FCT_BUFFER;
}

extern functionConstraint functionConstraint_copy (functionConstraint node) 
{
  if (functionConstraint_isDefined (node))
    {
      switch (node->kind)
	{
	case FCT_BUFFER:
	  return functionConstraint_createBufferConstraint (constraintList_copy (node->constraint.buffer));
	case FCT_METASTATE:
	  return functionConstraint_createMetaStateConstraint (metaStateConstraint_copy (node->constraint.metastate));
	}
      
      BADBRANCH;
    }
  else
    {
      return functionConstraint_undefined;
    }
}

extern void functionConstraint_free (/*@only@*/ functionConstraint node) 
{
  if (functionConstraint_isDefined (node))
    {
      switch (node->kind)
	{
	case FCT_BUFFER:
	  constraintList_free (node->constraint.buffer);
	  break;
	case FCT_METASTATE:
	  metaStateConstraint_free (node->constraint.metastate);
	  break;
	  BADDEFAULT;
	}
      
      sfree (node);
    }
}
