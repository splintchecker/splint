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
** qual.c
**
** representation of type qualifiers
*/

# include "lclintMacros.nf"
# include "basic.h"

static bool qual_isValid (int q)
{
  return ((qual)q >= QU_UNKNOWN 
	  && ((qual)q < QU_LAST));
}

qual qual_fromInt (int q)
{
  llassertprint (qual_isValid (q), ("Invalid qual: %d", q));
  return (qual) q;
}

cstring qual_unparse (qual q)
{
  switch (q)
    {
    case QU_UNKNOWN:    return cstring_makeLiteralTemp ("unknown");
    case QU_ABSTRACT:   return cstring_makeLiteralTemp ("abstract");
    case QU_CONCRETE:   return cstring_makeLiteralTemp ("concrete");
    case QU_MUTABLE:    return cstring_makeLiteralTemp ("mutable");
    case QU_IMMUTABLE:  return cstring_makeLiteralTemp ("immutable");
    case QU_SHORT:      return cstring_makeLiteralTemp ("short");
    case QU_LONG:       return cstring_makeLiteralTemp ("long");
    case QU_SIGNED:     return cstring_makeLiteralTemp ("signed");
    case QU_UNSIGNED:   return cstring_makeLiteralTemp ("unsigned");
    case QU_CONST:      return cstring_makeLiteralTemp ("const");
    case QU_VOLATILE:   return cstring_makeLiteralTemp ("volatile");
    case QU_INLINE:     return cstring_makeLiteralTemp ("inline");
    case QU_EXTERN:     return cstring_makeLiteralTemp ("extern");
    case QU_STATIC:     return cstring_makeLiteralTemp ("static");
    case QU_AUTO:       return cstring_makeLiteralTemp ("auto");
    case QU_REGISTER:   return cstring_makeLiteralTemp ("register");
    case QU_OUT:        return cstring_makeLiteralTemp ("out");
    case QU_IN:         return cstring_makeLiteralTemp ("in");
    case QU_RELDEF:     return cstring_makeLiteralTemp ("reldef");
    case QU_ONLY:       return cstring_makeLiteralTemp ("only");
    case QU_IMPONLY:    return cstring_makeLiteralTemp ("only");
    case QU_PARTIAL:    return cstring_makeLiteralTemp ("partial");
    case QU_SPECIAL:    return cstring_makeLiteralTemp ("special");
    case QU_KEEP:       return cstring_makeLiteralTemp ("keep");
    case QU_KEPT:       return cstring_makeLiteralTemp ("kept");
    case QU_YIELD:      return cstring_makeLiteralTemp ("yield");
    case QU_TEMP:       return cstring_makeLiteralTemp ("temp");
    case QU_SHARED:     return cstring_makeLiteralTemp ("shared");
    case QU_UNIQUE:     return cstring_makeLiteralTemp ("unique");
    case QU_UNCHECKED:  return cstring_makeLiteralTemp ("unchecked");
    case QU_CHECKED:    return cstring_makeLiteralTemp ("checked");
    case QU_CHECKMOD:   return cstring_makeLiteralTemp ("checkmod");
    case QU_CHECKEDSTRICT: return cstring_makeLiteralTemp ("checkedstrict");
    case QU_TRUENULL:   return cstring_makeLiteralTemp ("truenull");
    case QU_FALSENULL:  return cstring_makeLiteralTemp ("falsenull");
    case QU_NULL:       return cstring_makeLiteralTemp ("null");
    case QU_RELNULL:    return cstring_makeLiteralTemp ("relnull");
    case QU_NOTNULL:    return cstring_makeLiteralTemp ("notnull");
    case QU_RETURNED:   return cstring_makeLiteralTemp ("  returned");
    case QU_EXPOSED:    return cstring_makeLiteralTemp ("exposed");
    case QU_EXITS:      return cstring_makeLiteralTemp ("exits");
    case QU_MAYEXIT:    return cstring_makeLiteralTemp ("mayexit");
    case QU_UNUSED:     return cstring_makeLiteralTemp ("unused");
    case QU_EXTERNAL:   return cstring_makeLiteralTemp ("external");
    case QU_SEF:        return cstring_makeLiteralTemp ("sef");
    case QU_OBSERVER:   return cstring_makeLiteralTemp ("observer");
    case QU_REFCOUNTED: return cstring_makeLiteralTemp ("refcounted"); 
    case QU_REFS:       return cstring_makeLiteralTemp ("refs"); 
    case QU_NEWREF:     return cstring_makeLiteralTemp ("newref"); 
    case QU_KILLREF:    return cstring_makeLiteralTemp ("killref"); 
    case QU_TEMPREF:    return cstring_makeLiteralTemp ("tempref"); 
    case QU_OWNED:      return cstring_makeLiteralTemp ("owned");
    case QU_DEPENDENT:  return cstring_makeLiteralTemp ("dependent");
    case QU_NEVEREXIT:  return cstring_makeLiteralTemp ("neverexit");
    case QU_TRUEEXIT:   return cstring_makeLiteralTemp ("trueexit");
    case QU_FALSEEXIT:  return cstring_makeLiteralTemp ("falseexit");
    case QU_UNDEF:      return cstring_makeLiteralTemp ("undef");
    case QU_KILLED:     return cstring_makeLiteralTemp ("killed");
    case QU_PRINTFLIKE: return cstring_makeLiteralTemp ("printflike");
    case QU_SCANFLIKE:  return cstring_makeLiteralTemp ("scanflike");
    case QU_MESSAGELIKE:return cstring_makeLiteralTemp ("messagelike");
    case QU_LAST:       return cstring_makeLiteralTemp ("< last >");
    }

  BADEXIT;
}

