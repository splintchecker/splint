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
** constraintTerm.c
*/

/* #define DEBUGPRINT 1 */

# include <ctype.h> /* for isdigit */
# include "lclintMacros.nf"
# include "basic.h"
# include "cgrammar.h"
# include "cgrammar_tokens.h"

# include "exprChecks.h"
# include "exprNodeSList.h"

/*@-czechfcns@*/

/*@access exprNode @*/

bool constraintTerm_isDefined (constraintTerm t)
{
  return t != NULL;
}

void constraintTerm_free (/*@only@*/ constraintTerm term)
{
  llassert (constraintTerm_isDefined (term));

  fileloc_free (term->loc);
  
  switch (term->kind) 
    {
    case EXPRNODE:
      /* we don't free an exprNode*/
      break;
    case SREF:
      /* sref */
      sRef_free (term->value.sref);
      break;
    case INTLITERAL:
      /* don't free an int */
      break;
    case  ERRORBADCONSTRAINTTERMTYPE:
    default:
      /* type was set incorrectly */
      llcontbug (message("constraintTerm_free type was set incorrectly"));
    }

  term->kind =  ERRORBADCONSTRAINTTERMTYPE;
  free (term);
}

/*@only@*/ static/*@out@*/ constraintTerm new_constraintTermExpr (void)
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


bool constraintTerm_isInitBlock (/*@observer@*/ /*@temp@*/ constraintTerm c) /*@*/
{
  llassert (c != NULL);
  if (c->kind == EXPRNODE)
    {
      
      if (exprNode_isInitBlock(c->value.expr) )
	{
	  return TRUE;
	}
    }
  return FALSE;
}


bool constraintTerm_isExprNode (/*@observer@*/ /*@temp@*/ constraintTerm c) /*@*/
{
  llassert (c != NULL);
  if (c->kind == EXPRNODE)
    {
      return TRUE;
    }
  return FALSE;
}


int constraintTerm_getInitBlockLength (/*@observer@*/ /*@temp@*/ constraintTerm c) /*@*/
{

  exprNodeList  list;
  int ret;
  llassert (c != NULL);
  llassert (constraintTerm_isInitBlock (c) );
  llassert (c->kind == EXPRNODE);

  llassert(exprNode_isDefined(c->value.expr) );

  if (exprNode_isUndefined(c->value.expr) )
    {
      return 1;
    }

  if (c->value.expr->edata == exprData_undefined)
    {
      return 1;
    }
  list = exprData_getArgs(c->value.expr->edata);

  ret = exprNodeList_size(list);

  return ret;  
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

constraintTerm constraintTerm_simplify (/*@returned@*/ constraintTerm term) /*@modifies term@*/
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
  llassert (constraintTerm_isDefined (t));
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

/*@only@*/ constraintTerm constraintTerm_makeExprNode (/*@dependent@*/  exprNode e)
{
  constraintTerm ret = new_constraintTermExpr();
  ret->loc =  fileloc_copy(exprNode_getfileloc(e));
  ret->value.expr = e;
  ret->kind = EXPRNODE;
  ret = constraintTerm_simplify(ret);
  return ret;
}

/*@only@*/ constraintTerm constraintTerm_makesRef  (/*@temp@*/ /*@observer@*/ sRef s)
{
  constraintTerm ret = new_constraintTermExpr();
  ret->loc =  fileloc_undefined;
  ret->value.sref = sRef_saveCopy(s);
  ret->kind = SREF;
  ret = constraintTerm_simplify(ret);
  return ret;
}



constraintTerm constraintTerm_copy (constraintTerm term)
{
  constraintTerm ret;
  ret = new_constraintTermExpr();
  ret->loc = fileloc_copy (term->loc);
  
  switch (term->kind)
    {
    case EXPRNODE:
      ret->value.expr = term->value.expr;
      break;
    case INTLITERAL:
      ret->value.intlit = term->value.intlit;
      break;
      
    case SREF:
      ret->value.sref = sRef_saveCopy(term->value.sref);
      break;
    default:
      BADEXIT;
    }
  ret->kind = term->kind;
  return ret;
}

constraintTerm constraintTerm_setFileloc (/*@returned@*/ constraintTerm term, fileloc loc) 
{
  llassert(term != NULL);

  if ( fileloc_isDefined(  term->loc ) )
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
      /*@i334*/  /*wtf*/
      s = message ("%s", exprNode_unparse (term->value.expr) );
      break;
    case INTLITERAL:
      s = message (" %d ", (int) term->value.intlit);
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
      /*@i334*/  /*wtf*/
      break;
    case INTLITERAL:
      break;
      
    case SREF:
      term->value.sref = sRef_fixBaseParam (term->value.sref, arglist);
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
      /*@i334*/  /*wtf*/
      s = message ("%s @ %q", exprNode_unparse (term->value.expr),
		   fileloc_unparse (term->loc) );
      break;
    case INTLITERAL:
      s = message ("%d", (int)term->value.intlit);
      break;
      
    case SREF:
      s = message ("%q", sRef_unparseDebug (term->value.sref) );

      break;
    default:
      BADEXIT;
    }
  
  return s;
}


constraintTerm constraintTerm_makeIntLiteral (long i)
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
    {
      return TRUE;
    }
  else if (term->kind == SREF)
    {
      if (sRef_hasValue (term->value.sref))
	{
	  multiVal mval = sRef_getValue (term->value.sref);

	  return multiVal_isInt (mval); /* for now, only try to deal with int values */
	}
      else
	{
	  return FALSE;
	}
    }
  else if (term->kind == EXPRNODE)
    {
      return FALSE;
    }
  else
    {
      return FALSE;
    }
}

long constraintTerm_getValue (constraintTerm term) 
{
  llassert (constraintTerm_canGetValue (term));

  if (term->kind == INTLITERAL)
    {
      return term->value.intlit; 
    }
  else if (term->kind == SREF)
    {
      if (sRef_hasValue (term->value.sref))
	{
	  multiVal mval = sRef_getValue (term->value.sref);

	  return multiVal_forceInt (mval); /* for now, only try to deal with int values */
	}
      else
	{
	  BADBRANCH;
	}
    }
  else if (term->kind == EXPRNODE)
    {
      BADBRANCH;
    }
  else
    {
      BADBRANCH;
    }

  BADEXIT;
}

/*drl added this 10.30.001
 */

/*@exposed@*/ exprNode constraintTerm_getExprNode (constraintTerm t)
{
  llassert (t != NULL);
  
  llassert (t->kind == EXPRNODE);

  return t->value.expr;

}

 /*@exposed@*/ sRef constraintTerm_getsRef (constraintTerm t)
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
  
  if (constraintTerm_canGetValue (term1) && constraintTerm_canGetValue (term2))
    /* evans 2001-07-24: was (term1->kind == INTLITERAL) && (term2->kind == INTLITERAL) ) */
    {
      long t1, t2;

      t1 = constraintTerm_getValue (term1);
      t2 = constraintTerm_getValue (term2);

      return (t1 == t2);
    }
  
  if (constraintTerm_canGetValue (term1) || constraintTerm_canGetValue (term2))
    {
      /* evans 2001-07-24: is this right? */ /*@i534@*/
      return FALSE;
    }

  s1 = constraintTerm_getsRef (term1);
  s2 = constraintTerm_getsRef (term2);

  if (!(sRef_isValid(s1) && sRef_isValid(s2)))
    {
      return FALSE;
    }
  
  DPRINTF( (message
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

void constraintTerm_dump ( /*@observer@*/ constraintTerm t,  FILE *f)
{
  fileloc loc;
  constraintTermValue value;
  constraintTermType kind;
  uentry u;
  
  loc = t->loc;

  value = t->value;

  kind  = t->kind;

  fprintf(f, "%d\n", (int) kind);
  
  switch (kind)
    {
      
    case EXPRNODE:
      u = exprNode_getUentry(t->value.expr);
      fprintf(f, "%s\n", cstring_toCharsSafe( uentry_rawName (u) )
	      );
      break;
      
    case SREF:
      {
	sRef s;

	s =  t->value.sref;
	
	if (sRef_isResult (s ) )
	  {
	    fprintf(f, "Result\n");
	  }
	else if (sRef_isParam (s ) )
	  {
	    int param;
	    ctype ct;
	    cstring ctString;

	    
	    ct =  sRef_getType (s); 
	    param = sRef_getParam(s);

	    ctString =  ctype_dump(ct);
	    
	    fprintf(f, "Param %s %d\n", cstring_toCharsSafe(ctString), (int) param );
	    cstring_free(ctString);
	  }
	else
	  {
	    u = sRef_getUentry(s);
	    fprintf(f, "%s\n", cstring_toCharsSafe(uentry_rawName (u) ) );
	  }
	
      }
      break;
      
    case INTLITERAL:
      fprintf (f, "%ld\n", t->value.intlit);
      break;
      
    default:
      BADEXIT;
    }
  
}


/*@only@*/ constraintTerm constraintTerm_undump ( FILE *f)
{
  constraintTermType kind;
  constraintTerm ret;
  
  uentry ue;
  
  char *str;
  char *os;

  str = mstring_create (MAX_DUMP_LINE_LENGTH);
  os = str;
  str = fgets (os, MAX_DUMP_LINE_LENGTH, f);

  kind = (constraintTermType) reader_getInt(&str);
  str = fgets(os, MAX_DUMP_LINE_LENGTH, f);

  switch (kind)
    {
      
    case SREF:
      {
	sRef s;
	char * term;
	term = reader_getWord(&str);
	
	if (strcmp (term, "Result") == 0 )
	  {
	    s = sRef_makeResult (ctype_unknown);
	  }
	else if (strcmp (term, "Param" ) == 0 )
	  {
	    int param;
	    char *str2, *ostr2;
	    
	    ctype t;

	    reader_checkChar(&str, ' ');
	    str2  = reader_getWord(&str);
	    param = reader_getInt(&str);

	    ostr2 = str2;
	    t = ctype_undump(&str2) ;
	    s = sRef_makeParam (param, t, stateInfo_makeLoc (g_currentloc));
	    free (ostr2);
	  }
	else  /* This must be an identified that we can search for in usymTab */
	  {
	    cstring termStr = cstring_makeLiteralTemp(term);

	    ue = usymtab_lookup (termStr);
	    s = uentry_getSref(ue);
	  }
	
	ret = constraintTerm_makesRef(s);

	free(term);
      }
      break;

    case EXPRNODE:
      {
	sRef s;
	char * term;
	cstring termStr;
		
	term = reader_getWord(&str);
	/* This must be an identifier that we can search for in usymTab */
	termStr = cstring_makeLiteralTemp(term);
	
	ue = usymtab_lookup (termStr);
	s = uentry_getSref(ue);
	ret = constraintTerm_makesRef(s);

	free (term);
      }
      break;
      
      
    case INTLITERAL:
      {
	int i;

	i = reader_getInt(&str);
	ret = constraintTerm_makeIntLiteral (i);
      }
      break;
      
    default:
      BADEXIT;
    }
  free (os);

  return ret;
}




