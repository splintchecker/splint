/*
** exprNode.c
*/

# include <ctype.h> /* for isdigit */
# include "lclintMacros.nf"
# include "basic.h"
# include "cgrammar.h"
# include "cgrammar_tokens.h"

# include "exprChecks.h"
# include "aliasChecks.h"
# include "exprNodeSList.h"
# include "exprData.i"

/*@only@*/ exprData exprData_makeLiteral (/*@only@*/ cstring s)
{
  exprData ed = (exprData) dmalloc (sizeof (*ed));
  
  ed->literal = s;
  return ed;
}

/*@only@*/ exprData exprData_makeId (/*@temp@*/ uentry id)
{
  exprData ed = (exprData) dmalloc (sizeof (*ed));
  ed->id = cstring_copy (uentry_rawName (id));
  return ed;
}

/*@only@*/ exprData exprData_makePair (/*@keep@*/ exprNode a, /*@keep@*/ exprNode b)
{
  exprData ed = (exprData) dmalloc (sizeof (*ed));

  ed->pair = (exprPair) dmalloc (sizeof (*ed->pair));
  ed->pair->a = a;
  ed->pair->b = b;

  return ed;
}
