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
** warnClause.c
*/

# include "lclintMacros.nf"
# include "basic.h"

static warnClause warnClause_createAux (/*@only@*/ fileloc loc, 
					/*@only@*/ flagSpec flag, 
					/*@only@*/ exprNode msg)
{
  warnClause res = (warnClause) dmalloc (sizeof (*res));
  
  res->loc = loc;
  res->flag = flag;
  res->msg = msg;
  
  return res;
}

extern warnClause warnClause_create (lltok tok, flagSpec flag, exprNode msg) 
{
  warnClause res;
  DPRINTF (("Create warn message: %s/ %s ", 
	    flagSpec_unparse (flag), exprNode_unparse(msg)));
  
  res = warnClause_createAux (lltok_stealLoc (tok),
			      flag, msg);
  lltok_release (tok);
  return res;
}

warnClause warnClause_copy (warnClause w)
{
  if (warnClause_isDefined (w))
    {
      return warnClause_createAux (fileloc_copy (w->loc),
				   flagSpec_copy (w->flag),
				   w->msg); /*@i32 should exprNode_copy (w->msg)); */
    }
  else
    {
      return warnClause_undefined;
    }
}

extern flagSpec warnClause_getFlag (warnClause w)
{
  return w->flag;
}

extern cstring warnClause_unparse (warnClause w)
{
  if (warnClause_isDefined (w))
    {
      return message ("<%q> %s",
		      flagSpec_unparse (w->flag), exprNode_unparse (w->msg));
    }
  else
    {
      return cstring_undefined;
    }
}

extern bool warnClause_hasMessage (warnClause w)
{
  return warnClause_isDefined (w) && exprNode_isDefined (w->msg)
    && cstring_isDefined (multiVal_forceString (exprNode_getValue (w->msg)));
}

extern /*@observer@*/ cstring warnClause_getMessage (warnClause w)
{
  if (warnClause_isDefined (w) && exprNode_isDefined (w->msg)) {
    llassert (exprNode_knownStringValue (w->msg));
    return multiVal_forceString (exprNode_getValue (w->msg));
  } else {
    return cstring_undefined;
  }
}


extern void warnClause_free (warnClause w)
{
  if (warnClause_isDefined (w))
    {
      flagSpec_free (w->flag);
      /*@i43 should be copied! exprNode_free (w->msg); */
      fileloc_free (w->loc);
      sfree (w);
    }
}

/*@only@*/ cstring
warnClause_dump (warnClause wc)
{
  cstring st = cstring_undefined;

  llassert (!cstring_containsChar (warnClause_getMessage (wc), '#'));

  if (warnClause_hasMessage (wc))
    {
      llassert (cstring_firstChar (warnClause_getMessage (wc)) != '.');
      st = message ("%q#%s#", flagSpec_dump (wc->flag), warnClause_getMessage (wc));
    }
  else
    {
      st = message ("%q#.#", flagSpec_dump (wc->flag));
    }

  return st;
}

warnClause
warnClause_undump (char **s)
{
  flagSpec flag;
  cstring msg;
  exprNode emsg;

  DPRINTF (("Undump: %s", *s));
  flag = flagSpec_undump (s);
  DPRINTF (("Here: %s", *s));
  reader_checkChar (s, '#');
  DPRINTF (("Here: %s", *s));

  if (reader_optCheckChar (s, '.'))
    {
      msg = cstring_undefined;
    }
  else
    {
      msg = reader_readUntil (s, '#');
    }
  
  DPRINTF (("Here: %s", *s));
  reader_checkChar (s, '#');

  emsg = exprNode_rawStringLiteral (msg, fileloc_copy (g_currentloc));
  
  return warnClause_createAux (fileloc_copy (g_currentloc), flag, emsg);
}
