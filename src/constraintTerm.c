/*
** constraintExpr.c
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

/*@-czechfcns@*/

//#include "constraintExpr.h"

bool constraintTerm_isIntLiteral (constraintTerm term)
{
  llassert(term);
  
  if (term->kind == INTLITERAL)
    return TRUE;

  return FALSE;
}

constraintTerm constraintTerm_simplify (constraintTerm term)
{
  if (term->kind == EXPRNODE)
    {
      if ( exprNode_knownIntValue (term->value.expr ) )
	{
	  int temp;
	  temp  = exprNode_getLongValue (term->value.expr);
	  term->value.intlit = temp;
	  term->kind = INTLITERAL;
	}
    }
  return term;
}

fileloc constraintTerm_getFileloc (constraintTerm t)
{
  return (fileloc_copy (t->loc) );
}

constraintTerm constraintTerm_makeExprNode (/*@only@*/ exprNode e)
{
  constraintTerm ret = new_constraintTermExpr();
  ret->loc =  exprNode_getfileloc(e);
  ret->value.expr = e;
  ret->kind = EXPRNODE;
  ret = constraintTerm_simplify(ret);
  return ret;
}

constraintTerm constraintTerm_copy (constraintTerm term)
{
  constraintTerm ret;
  ret = new_constraintTermExpr();
  ret->loc = fileloc_copy (term->loc);
  ret->value= term->value;
  ret->kind = term->kind;
  return ret;
}

constraintTerm constraintTerm_setFileloc (constraintTerm term, fileloc loc)
{
  llassert(term);
  term->loc = fileloc_copy(loc);
  return term;
}

cstring constraintTerm_print (constraintTerm term)
{
  cstring s;
  s = cstring_undefined;
  
  llassert (term != NULL);

  switch (term->kind)
    {
    case EXPRNODE:
      /*@i334*/  //wtf
      s = message ("%s @ %s ", exprNode_unparse (term->value.expr),
		   fileloc_unparse (term->loc) );
      break;
    case INTLITERAL:
      s = message (" %d ", term->value.intlit);
      break;
      
    case SREF:
      s = cstring_makeLiteral("Not Implemented\n");
      llassert(FALSE);
      break;
    }
  
  return s;
}


constraintTerm constraintTerm_makeIntLiteral (int i)
{
  constraintTerm ret = new_constraintTermExpr();
  ret->value.intlit = i;
  ret->kind = INTLITERAL;
  ret->loc =  fileloc_undefined;
  return ret;
}

bool constraintTerm_canGetValue (constraintTerm term)
{
  if (term->kind == INTLITERAL)
    return TRUE;
  else
    return FALSE;
}

int constraintTerm_getValue (constraintTerm term) 
{
  llassert (term->kind == INTLITERAL);
  return term->value.intlit;
}



/* same and similar are similar but not the same*/

bool constraintTerm_same (constraintTerm term1, constraintTerm term2)
{
  llassert (term1 !=NULL && term2 !=NULL);

  if ( (term1->kind != term2->kind) || (term1->kind != EXPRNODE) )
    {
      return FALSE;
    }
      
 DPRINTF ( (message
	    ("Comparing srefs for %s and  %s ", constraintTerm_print(term1), constraintTerm_print(term2)
	     )
	    )
	   );
 
 if (sRef_same (term1->value.expr->sref, term2->value.expr->sref) )
   {
     DPRINTF ((message (" %s and %s are same", constraintTerm_print(term1), constraintTerm_print(term2)  )  ));
     return TRUE;
   }
 else
   {
     DPRINTF ((message (" %s and %s are not same", constraintTerm_print(term1), constraintTerm_print(term2)  )  ));
     return FALSE;
   }     
    
}

bool constraintTerm_similar (constraintTerm term1, constraintTerm term2)
{
  llassert (term1 !=NULL && term2 !=NULL);

  if ( (term1->kind != term2->kind) || (term1->kind != EXPRNODE) )
    {
      return FALSE;
    }
      
 DPRINTF ( (message
	    ("Comparing srefs for %s and  %s ", constraintTerm_print(term1), constraintTerm_print(term2)
	     )
	    )
	   );
 
 if (sRef_same (term1->value.expr->sref, term2->value.expr->sref) )
   {
     DPRINTF ((message (" %s and %s are same", constraintTerm_print(term1), constraintTerm_print(term2)  )  ));
     return TRUE;
   }
 else
   {
     DPRINTF ((message (" %s and %s are not same", constraintTerm_print(term1), constraintTerm_print(term2)  )  ));
     return FALSE;
   }     
    
}



