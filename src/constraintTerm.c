/*
** constraintTerm.c
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

int constraintTerm_getValue (constraintTerm term)
{
  if (term->kind == EXPRNODE)
    {
      return (multiVal_forceInt (term->value.expr->val) );
    }
  if (term->kind == INTLITERAL )
    {
      return (term->value.intlit);
    }
  llassert(FALSE);
  return 0;
}

/*@out@*/ static  constraintTerm new_constraintTermExpr (void)
{
  constraintTerm ret;
  ret = dmalloc (sizeof (* ret ) );
  return ret;
}

constraintTerm constraintTerm_simplify (constraintTerm term)
{
  if (term->constrType == VALUE)
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

    }
  return term;
}

constraintTerm constraintTerm_copy (constraintTerm term)
{
  constraintTerm ret;
  ret = new_constraintTermExpr();
  ret->constrType = term->constrType;
  ret->loc = fileloc_copy (term->loc);
  ret->value= term->value;
  ret->kind = term->kind;
  return ret;
}

constraintTerm exprNode_makeConstraintTerm (/*@only@*/ exprNode e)
{
  constraintTerm ret = new_constraintTermExpr();
  ret->loc =  exprNode_getfileloc(e);
  ret->value.expr = e;
  ret->kind = EXPRNODE;
  return ret;
}


constraintTerm constraintTerm_makeMaxSetexpr (exprNode e)
{
  constraintTerm ret;
  ret = exprNode_makeConstraintTerm (e);
  ret->constrType = MAXSET;
  return ret;
}

constraintTerm constraintTerm_makeMinSetexpr (exprNode e)
{
  constraintTerm ret;
  ret = exprNode_makeConstraintTerm (e);
  ret->constrType = MINSET;
  return ret;
}

constraintTerm constraintTerm_makeMaxReadexpr (exprNode e)
{
  constraintTerm ret;
  ret = exprNode_makeConstraintTerm (e);
  ret->constrType = MAXREAD;
  return ret;
}

constraintTerm constraintTerm_makeMinReadexpr (exprNode e)
{
  constraintTerm ret;
  ret = exprNode_makeConstraintTerm (e);
  ret->constrType = MINREAD;
  return ret;
}

constraintTerm constraintTerm_makeValueexpr (exprNode e)
{
  constraintTerm ret;
  ret = exprNode_makeConstraintTerm (e);
  ret->constrType = VALUE;
  ret = constraintTerm_simplify (ret);
  return ret;
}


constraintTerm intLit_makeConstraintTerm (int i)
{
  constraintTerm ret = new_constraintTermExpr();
  ret->value.intlit = i;
  ret->kind = INTLITERAL;
  ret->loc =  fileloc_undefined;
  return ret;
}


constraintTerm constraintTerm_makeIntLitValue (int i)
{
  constraintTerm ret;
  ret = intLit_makeConstraintTerm (i);
  ret->constrType = VALUE;
  return ret;

}

/* constraintTerm constraintTerm_makeMinSetexpr (int i) */
/* { */
/*   constraintTerm ret; */
/*   ret = intLit_makeConstraintTerm (i); */
/*   ret->constrType = MINSET; */
/* } */

/* constraintTerm constraintTerm_makeMaxReadexpr (int i) */
/* { */
/*   constraintTerm ret; */
/*   ret = intLit_makeConstraintTerm (i); */
/*   ret->constrType = MAXREAD; */
/* } */
/* constraintTerm constraintTerm_makeMinReadexpr (int i) */
/* { */
/*   constraintTerm ret; */
/*   ret = exprNode_makeConstraintTerm (i); */
/*   ret->constrType = MINREAD; */
/* } */




cstring  constraintType_print (constraintType constrType)
{
  cstring st = cstring_undefined;
  
  switch (constrType)
    {
    case VALUE:
      st = cstring_makeLiteral("VALUE");
      break;
    case CALLSAFE:
      st = cstring_makeLiteral("CALLSAFE");
      break;
    case  MAXSET:
      st = cstring_makeLiteral ("MAXSET");
      break;
    case    MINSET:
      st = cstring_makeLiteral ("MINSET");
      break;
    case MAXREAD:
      st = cstring_makeLiteral ("MAXREAD");
      break;
    case MINREAD:
      st = cstring_makeLiteral ("MINREAD");
      break;
    case NULLTERMINATED:
      st = cstring_makeLiteral ("NULLTERMINATED");
      break;
    case UNDEFINED:
      st = cstring_makeLiteral (("Unhandled value for constraintType"));
      llassert(FALSE);
      break;
    default:
      st = cstring_makeLiteral (("Unhandled value for constraintType"));
      llassert(FALSE);
    }
  return st;
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
    {
      s = message (" %d ", term->value.intlit);
      break;
    }
    case SREF:
      s = cstring_makeLiteral("Not Implemented\n");
      llassert(FALSE);
      break;
    }
  s = message (" %s %s ", constraintType_print (term->constrType), s);
  return s;
  
}



bool constraintTerm_same (constraintTerm term1, constraintTerm term2)
{
  llassert (term1 !=NULL && term2 !=NULL);

  if (term1->constrType != term2->constrType)
    {
      return FALSE;
    }
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
     TPRINTF ((message (" %s and %s are same", constraintTerm_print(term1), constraintTerm_print(term2)  )  ));
     return TRUE;
   }
 else
   {
     TPRINTF ((message (" %s and %s are not same", constraintTerm_print(term1), constraintTerm_print(term2)  )  ));
     return FALSE;
   }     
    
}

