/*
** constraintExpr.c
*/

//#define DEBUGPRINT 1

# include <ctype.h> /* for isdigit */
# include "lclintMacros.nf"
# include "basic.h"
# include "cgrammar.h"
# include "cgrammar_tokens.h"

# include "exprChecks.h"
# include "aliasChecks.h"
# include "exprNodeSList.h"

//# include "exprData.i"

/*@-czechfcns@*/

//#include "constraintExpr.h"

/*@access exprNode, constraintTermValue @*/

void constraintTerm_free (/*@only@*/ constraintTerm term)
{
  llassert(constraintTerm_isDefined(term) );
  fileloc_free (term->loc);
  
  switch (term->kind) 
    {
    case EXPRNODE:
      /* we don't free an exprNode*/
      break;
    case SREF:
      /* sref */
      //sRef_free (term->value.sref);
      break;
    case INTLITERAL:
      /* don't free an int */
      break;
    case  ERRORBADCONSTRAINTTERMTYPE:
    default:
      /* type was set incorrectly */
      llcontbug (message("constraintTerm_free type was set incorrectly"));
    }
  free (term);
}

static/*@out@*/ constraintTerm new_constraintTermExpr (void)
{
  constraintTerm ret;
  ret = dmalloc (sizeof (* ret ) );
  ret->value.intlit = 0;
  return ret;
}


bool constraintTerm_isIntLiteral (constraintTerm term)
{
  llassert(term != NULL);
  
  if (term->kind == INTLITERAL)
    return TRUE;

  return FALSE;
}

bool constraintTerm_isStringLiteral (constraintTerm c) /*@*/
{
  llassert (c != NULL);
  if (c->kind == EXPRNODE)
    {
      if (exprNode_knownStringValue(c->value.expr) )
	{
	  return TRUE;
	}
    }
  return FALSE;
}

cstring constraintTerm_getStringLiteral (constraintTerm c)
{
  llassert (c != NULL);
  llassert (constraintTerm_isStringLiteral (c) );
  llassert (c->kind == EXPRNODE);
  
  return (cstring_copy ( multiVal_forceString (exprNode_getValue (c->value.expr) ) ) );
}

/*@only@*/ constraintTerm constraintTerm_simplify (/*@returned@*/ constraintTerm term) /*@modifies term@*/
{
  if (term->kind == EXPRNODE)
    {
      if ( exprNode_knownIntValue (term->value.expr ) )
	{
	  long int temp;
	  temp  = exprNode_getLongValue (term->value.expr);
	  term->value.intlit = (int)temp;
	  term->kind = INTLITERAL;
	}
    }
  return term;
}

fileloc constraintTerm_getFileloc (constraintTerm t)
{
  return (fileloc_copy (t->loc) );
}

constraintTermType constraintTerm_getKind (constraintTerm t)
{
  llassert (constraintTerm_isDefined(t) );
  
  return (t->kind);
}

/*@exposed@*/ sRef constraintTerm_getSRef (constraintTerm t)
{
  llassert (constraintTerm_isDefined(t) );
  llassert (t->kind == SREF);

  return (t->value.sref);
}

constraintTerm constraintTerm_makeExprNode ( exprNode e)
{
  constraintTerm ret = new_constraintTermExpr();
  ret->loc =  fileloc_copy(exprNode_getfileloc(e));
  ret->value.expr = e;
  ret->kind = EXPRNODE;
  ret = constraintTerm_simplify(ret);
  return ret;
}

/*@only@*/ constraintTerm constraintTerm_makesRef  (/*@only@*/ sRef s)
{
  constraintTerm ret = new_constraintTermExpr();
  ret->loc =  fileloc_undefined;
  ret->value.sref = s;
  ret->kind = SREF;
  ret = constraintTerm_simplify(ret);
  return ret;
}

constraintTerm constraintTerm_copy (constraintTerm term)
{
  constraintTerm ret;
  ret = new_constraintTermExpr();
  ret->loc = fileloc_copy (term->loc);
  constraintTermValue_copy (ret->value, term->value);
  ret->kind = term->kind;
  return ret;
}

constraintTerm constraintTerm_setFileloc (/*@returned@*/ constraintTerm term, fileloc loc) 
{
  llassert(term != NULL);

  if (term->loc != fileloc_undefined)
    fileloc_free(term->loc);

  term->loc = fileloc_copy(loc);
  return term;
}


static cstring constraintTerm_getName (constraintTerm term)
{
  cstring s;
  s = cstring_undefined;
  
  llassert (term != NULL);

  switch (term->kind)
    {
    case EXPRNODE:
      /*@i334*/  //wtf
      s = message ("%s", exprNode_unparse (term->value.expr) );
      break;
    case INTLITERAL:
      s = message (" %d ", term->value.intlit);
      break;
      
    case SREF:
      s = message ("%q", sRef_unparse (term->value.sref) );

      break;
    default:
      BADEXIT;
      /*@notreached@*/
      break;
    }
  
  return s;
}

constraintTerm 
constraintTerm_doSRefFixBaseParam (/*@returned@*/constraintTerm term, exprNodeList arglist) /*@modifies term@*/
{
  llassert (term != NULL);
  
  switch (term->kind)
    {
    case EXPRNODE:
      /*@i334*/  //wtf
      //   s = message ("%s @ %s ", exprNode_unparse (term->value.expr),
      //	   fileloc_unparse (term->loc) );
      break;
    case INTLITERAL:
      //  s = message (" %d ", term->value.intlit);
       break;
      
    case SREF:
      term->value.sref = sRef_fixBaseParam (term->value.sref, arglist);
      //      s = message ("%s ", sRef_unparse (term->value.sref) );

      break;
    default:
      BADEXIT;
    }
  return term;
  
}

cstring constraintTerm_print (constraintTerm term)  /*@*/
{
  cstring s;
  s = cstring_undefined;
  
  llassert (term != NULL);

  switch (term->kind)
    {
    case EXPRNODE:
      /*@i334*/  //wtf
      s = message ("%s @ %q ", exprNode_unparse (term->value.expr),
		   fileloc_unparse (term->loc) );
      break;
    case INTLITERAL:
      s = message (" %d ", term->value.intlit);
      break;
      
    case SREF:
      s = message ("%q ", sRef_unparseDebug (term->value.sref) );

      break;
    default:
      BADEXIT;
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

static bool constraintTerm_same (constraintTerm term1, constraintTerm term2)
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

static /*@exposed@*/ sRef constraintTerm_getsRef (constraintTerm t)
{
  llassert (t != NULL);
  if (t->kind == EXPRNODE)
    {
      return exprNode_getSref(t->value.expr);
    }

  if (t->kind == SREF)
    {
      return t->value.sref;
    }

  return sRef_undefined;
}

bool constraintTerm_probSame (constraintTerm term1, constraintTerm term2)
{
  cstring s1, s2;

  llassert (term1 !=NULL && term2 !=NULL);
     
 DPRINTF ( (message
	    ("Comparing srefs for %s and  %s ", constraintTerm_print(term1), constraintTerm_print(term2)
	     )
	    )
	   );
  
  s1 = constraintTerm_getName (term1);
  s2 = constraintTerm_getName (term2);

  if (cstring_equal (s1, s2) )
    {
      DPRINTF ((message (" %q and %q are same", s1, s2 ) ) );
     return TRUE;
   }
  else
     {
     DPRINTF ((message (" %q and %q are not same", s1, s2 ) ) );
     return FALSE;
   }   
}

bool constraintTerm_similar (constraintTerm term1, constraintTerm term2)
{
  sRef s1, s2;
  
  llassert (term1 !=NULL && term2 !=NULL);
  
  if ( (term1->kind == INTLITERAL) && (term2->kind == INTLITERAL) )
    {
      int t1, t2;
      llassert (constraintTerm_canGetValue(term1) );
      t1 = constraintTerm_getValue (term1);

      llassert (constraintTerm_canGetValue(term2) );
      t2 = constraintTerm_getValue (term2);
      if (t1 == t2)
	return TRUE;
      
       return FALSE;
    }
    
  s1 = constraintTerm_getsRef (term1);
  s2 = constraintTerm_getsRef (term2);

  if ( ! (s1 && s2) )
    {
      return FALSE;
    }
  
 DPRINTF ( (message
	    ("Comparing srefs for %s and  %s ", constraintTerm_print(term1), constraintTerm_print(term2)
	     )
	    )
	   );
 
 if (sRef_similarRelaxed(s1, s2)   || sRef_sameName (s1, s2) )
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
