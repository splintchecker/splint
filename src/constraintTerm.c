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


constraintTerm new_constraintTermExpr (void)
{
  constraintTerm ret;
  ret = dmalloc (sizeof (* ret ) );
  return ret;
}


bool constraintTerm_isIntLiteral (constraintTerm term)
{
  llassert(term);
  
  if (term->kind == INTLITERAL)
    return TRUE;

  return FALSE;
}

bool constraintTerm_isStringLiteral (constraintTerm c)
{
  llassert (c);
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
  llassert (c);
  llassert (constraintTerm_isStringLiteral (c) );
  llassert (c->kind == EXPRNODE);
  
  return ( multiVal_forceString (exprNode_getValue (c->value.expr) ) );
}

constraintTerm constraintTerm_simplify (constraintTerm term)
{
  if (term->kind == EXPRNODE)
    {
      if ( exprNode_knownIntValue (term->value.expr ) )
	{
	  long int temp;
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

constraintTerm constraintTerm_makesRef  (/*@only@*/ sRef s)
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


cstring constraintTerm_getName (constraintTerm term)
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
      s = message ("%s", sRef_unparse (term->value.sref) );

      break;
    }
  
  return s;
}

constraintExpr 
constraintTerm_doFixResult (constraintExpr e, exprNode fcnCall)
{
  constraintTerm t;
  sRef s;
  constraintExprData data = e->data;
  
  constraintExprKind kind = e->kind;
  
  constraintExpr ret;

  llassert(kind == term);

  t = constraintExprData_termGetTerm (data);
  llassert (t != NULL);

  ret = e;
  switch (t->kind)
    {
    case EXPRNODE:
      break;
    case INTLITERAL:
      break;
      
    case SREF:
      s = t->value.sref;
      if (s->kind == SK_RESULT)
	{
	  ret = constraintExpr_makeExprNode(fcnCall);
	}
      break;
    }
  return ret;
  
}

constraintTerm 
constraintTerm_doSRefFixBaseParam (constraintTerm term, exprNodeList arglist)
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
    }
  return term;
  
}

constraintExpr 
constraintTerm_doSRefFixConstraintParam (constraintExpr e, exprNodeList arglist)
{
  constraintTerm t;
  
  constraintExprData data = e->data;
  
  constraintExprKind kind = e->kind;
  
  constraintExpr ret;

  llassert(kind == term);

  t = constraintExprData_termGetTerm (data);
  llassert (t != NULL);

  ret = e;
  switch (t->kind)
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
      ret = sRef_fixConstraintParam (t->value.sref, arglist);
      
      //      s = message ("%s ", sRef_unparse (term->value.sref) );

      break;
    }
  return ret;
  
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
      s = message ("%s @ %s ", exprNode_unparse (term->value.expr),
		   fileloc_unparse (term->loc) );
      break;
    case INTLITERAL:
      s = message (" %d ", term->value.intlit);
      break;
      
    case SREF:
      s = message ("%s ", sRef_unparseDebug (term->value.sref) );

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

sRef constraintTerm_getsRef (constraintTerm t)
{
  llassert (t);
  if (t->kind == EXPRNODE)
    {
      return t->value.expr->sref;
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
      DPRINTF ((message (" %s and %s are same", s1, s2 ) ) );
     return TRUE;
   }
  else
     {
     DPRINTF ((message (" %s and %s are not same", s1, s2 ) ) );
     return FALSE;
   }   
}

bool constraintTerm_similar (constraintTerm term1, constraintTerm term2)
{
  sRef s1, s2;
  
  llassert (term1 !=NULL && term2 !=NULL);

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
