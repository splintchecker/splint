/*
** forjunk.c
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

# include "exprData.i"
# include "exprDataQuite.i"


// look for constraints like cexrp = cexrp + 1
static bool incVar (constraint c)
{
  constraintExpr t1;
  if (c->ar != EQ)
    {
      return FALSE;
    }
  if (! isInc (c->expr ) )
    return FALSE;

  llassert (c->expr->kind == binaryexpr);
  t1 = constraintExprData_binaryExprGetExpr1 (c->expr->data);
  if (constraintExpr_similar (c->lexpr, t1) )
    return TRUE;

  return FALSE;
}


static bool increments (constraint c,
			constraintExpr var)
{
  llassert (incVar (c));
  if (constraintExpr_similar (c->lexpr, var) )
    return TRUE;
  else
    return FALSE;
}

static bool canGetForTimes ( exprNode forPred, exprNode forBody)
{
  
  exprNode init, test, inc, t1, t2;
  lltok tok;
  
  init  =  exprData_getTripleInit (forPred->edata);
  test  =   exprData_getTripleTest (forPred->edata);
  inc   =   exprData_getTripleInc (forPred->edata);

  
  if (test->kind != XPR_PREOP)
    return FALSE;
      
  tok = (exprData_getUopTok (test->edata));
  if (!lltok_isMult (tok) )
    {
      return FALSE;
    }

  //should check preop too
  if (inc->kind != XPR_POSTOP)
    {
      return FALSE;
    }
  
  tok = (exprData_getUopTok (inc->edata));
  if (lltok_isInc_Op (tok) )
      {
	t1 = exprData_getUopNode (test->edata);
	t2 = exprData_getUopNode (inc->edata);
	if (sRef_sameName (t1->sref, t2->sref) )
	  {
	    return TRUE;
	  }
      }
  return FALSE;
}

static constraintList getLessThanConstraints (constraintList c)
{
  constraintList ret;

  ret = constraintList_new();
  constraintList_elements (c, el)
    {
      if (el->ar == LT || el->ar == LTE)
	{
	  ret = constraintList_add (ret, el);
	}
    }
  end_constraintList_elements;

  return ret;
}

static constraintList getIncConstraints (constraintList c)
{
  constraintList ret;

  ret = constraintList_new();
  constraintList_elements (c, el)
    {
      if (incVar (el) )
	{
	  ret = constraintList_add (ret, el);
	}
    }
  end_constraintList_elements;
  
  return ret;
}

constraintExpr getForTimes ( exprNode forPred, exprNode forBody)
{
  
  exprNode init, test, inc, t1, t2;
  constraintList ltCon;
  constraintList incCon;
  
  lltok tok;
  
  init  =  exprData_getTripleInit (forPred->edata);
  test  =  exprData_getTripleTest (forPred->edata);
  inc   =  exprData_getTripleInc (forPred->edata);

  llassert(test);
  llassert(inc);
  
  ltCon =  getLessThanConstraints (test->trueEnsuresConstraints);
  incCon = getIncConstraints (inc->ensuresConstraints);
  
  DPRINTF(( message ("getForTimes: ltCon: %s from %s", constraintList_print(ltCon), constraintList_print(test->trueEnsuresConstraints) ) ));
  
  DPRINTF(( message ("getForTimes: incCon: %s from %s", constraintList_print(incCon), constraintList_print(inc->ensuresConstraints) ) ));
   
  constraintList_elements (ltCon, el) 
    {
      constraintList_elements(incCon, el2)
      {
	if ( increments(el2, el->lexpr) )
	  {
	    DPRINTF(( message ("getForTimes: %s increments %s", constraint_print(el2), constraint_print(el) ) ));
	    return constraintExpr_copy (el->expr);

	  }
	else
	  DPRINTF(( message ("getForTimes: %s doesn't increment %s", constraint_print(el2), constraint_print(el) )   ));
      }
      end_constraintList_elements;
    }

  end_constraintList_elements;
  
  DPRINTF (( message ("getForTimes: %s  %s resorting to ugly hack", exprNode_unparse(forPred), exprNode_unparse(forBody) ) ));
  if (! canGetForTimes (forPred, forBody) )
    {
      return NULL;
    }


  if (test->kind != XPR_PREOP)
    llassert (FALSE);
      
  tok = (exprData_getUopTok (test->edata));
  if (!lltok_isMult (tok) )
    {
      llassert ( FALSE );
    }

  //should check preop too
  if (inc->kind != XPR_POSTOP)
    {
      llassert (FALSE );
    }
  
  tok = (exprData_getUopTok (inc->edata));
  if (lltok_isInc_Op (tok) )
      {
	t1 = exprData_getUopNode (test->edata);
	t2 = exprData_getUopNode (inc->edata);
	if (sRef_sameName (t1->sref, t2->sref) )
	  {
	    return (constraintExpr_makeMaxSetExpr (t1) );
	  }
      }
  llassert( FALSE);
  BADEXIT;
}


static bool isInc (constraintExpr c)
{
  
 if (c->kind == binaryexpr )
    {
      constraintExprBinaryOpKind binOP;
      constraintExpr t1, t2;
      t1 = constraintExprData_binaryExprGetExpr1 (c->data);
      t2 = constraintExprData_binaryExprGetExpr2 (c->data);

      binOP = constraintExprData_binaryExprGetOp (c->data);
      if (binOP == PLUS)
	if (constraintExpr_isLit (t2) && constraintExpr_getValue (t2) == 1 )
	  {
	    return TRUE;
	  }
    }

 return FALSE;
}

constraintExpr constraintExpr_searchAndAdd (constraintExpr c, constraintExpr find, constraintExpr add)
{
  constraintExprKind kind;
  constraintExpr temp;

  DPRINTF(( message ("Doing constraintExpr_searchAndAdd  %s %s %s ",
		     constraintExpr_unparse(c), constraintExpr_unparse(find), constraintExpr_unparse(add) ) ) );
  
  if ( constraintExpr_similar (c, find) )
    {
      #warning mem leak

      constraintExpr new;

      new = constraintExpr_makeAddConstraintExpr (c, add);

      DPRINTF((message ("Replacing %s with %s",
			constraintExpr_unparse(c), constraintExpr_unparse(new)
			)));
      return new;
    }

  kind = c->kind;
  
  switch (kind)
    {
    case term:
      break;      
    case unaryExpr:
      temp = constraintExprData_unaryExprGetExpr (c->data);
      temp = constraintExpr_searchAndAdd (temp, find, add);
      c->data = constraintExprData_unaryExprSetExpr (c->data, temp);
      break;           
    case binaryexpr:
      
      temp = constraintExprData_binaryExprGetExpr1 (c->data);
      temp = constraintExpr_searchAndAdd (temp, find, add);
      c->data = constraintExprData_binaryExprSetExpr1 (c->data, temp);
       
      temp = constraintExprData_binaryExprGetExpr2 (c->data);
      temp = constraintExpr_searchAndAdd (temp, find, add);
      c->data = constraintExprData_binaryExprSetExpr2 (c->data, temp);
      break;
    default:
      llassert(FALSE);
    }
  return c;
  
}

constraint  constraint_searchAndAdd (constraint c, constraintExpr find, constraintExpr add)
{
  
  llassert (constraint_search (c, find)  );
  DPRINTF(( message ("Doing constraint_searchAndAdd  %s %s %s ",
		     constraint_print(c), constraintExpr_unparse(find), constraintExpr_unparse(add) ) ) );
  
  c->lexpr = constraintExpr_searchAndAdd (c->lexpr, find, add);
  c->expr =  constraintExpr_searchAndAdd (c->expr, find, add);

   c = constraint_simplify (c);
   c = constraint_simplify (c);

  return c;
  
}

constraintList constraintList_searchAndAdd (constraintList list,
					    constraintExpr find, constraintExpr add)
{
  constraintList newConstraints;
  constraintList ret;
  
  newConstraints = constraintList_new();
  
  constraintList_elements (list, el)
    {
      if (constraint_search (el, find) )
	{
	  constraint new;
	  new = constraint_copy (el);

	  new = constraint_searchAndAdd (new, find, add);
	  newConstraints = constraintList_add (newConstraints, new);
	  DPRINTF (( (message ("Adding constraint %s ", constraint_print (new)) )  ));
	}

    }
  end_constraintList_elements;
  
  ret =  constraintList_addList (list, newConstraints);
  return ret;
}

void doAdjust(exprNode e,  exprNode forPred, exprNode forBody, constraintExpr iterations)
{
  
  constraintList_elements (forBody->ensuresConstraints, el)
    {
      // look fro var = var + 1
      if (incVar(el) )
	{
	  DPRINTF((message ("Found inc variable constraint : %s", constraint_print (el) )  ));
	  forBody->requiresConstraints = constraintList_searchAndAdd(forBody->requiresConstraints, el->lexpr, iterations);
	}
    }
  end_constraintList_elements;
}

void forLoopHeuristics( exprNode e, exprNode forPred, exprNode forBody)
{
  exprNode init, test, inc, t1, t2, t3 ,t4;
  constraint con;
  constraintExpr iterations;
  
  init  =  exprData_getTripleInit (forPred->edata);
  test =   exprData_getTripleTest (forPred->edata);
  inc  =   exprData_getTripleInc (forPred->edata);

  if (exprNode_isError (test) || exprNode_isError (inc) )
    return;
  
  iterations = getForTimes (forPred, forBody );

  if (iterations)
    {
      doAdjust ( e, forPred, forBody, iterations);
    }
  
}


/*    else */
/*      { */
/*        DPRINTF (("Can't get for time ")); */
/*      } */
  
/*    if (exprNode_isError(init) ) */
/*      { */
/*        return; */
/*      } */
  
/*    if (init->kind == XPR_ASSIGN) */
/*      { */
/*        t1 = exprData_getOpA (init->edata); */
/*        t2 = exprData_getOpB (init->edata); */
      
/*        if (! (t1->kind == XPR_VAR) ) */
/*  	return; */
/*      } */
/*    else */
/*      return; */
  
/*    if (test->kind == XPR_FETCH) */
/*      { */
/*        t3 = exprData_getPairA (test->edata); */
/*        t4 = exprData_getPairB (test->edata); */
      
/*        if (sRef_sameName(t1->sref, t4->sref) ) */
/*  	{ */
/*  	  DPRINTF((message ("Found a for loop matching heuristic:%s", exprNode_unparse (forPred) ) )); */
/*  	  con = constraint_makeEnsureLteMaxRead(t1, t3); */
/*  	  forPred->ensuresConstraints = constraintList_add(forPred->ensuresConstraints, con);	   */
/*  	} */
/*        else */
/*  	{ */
/*  	  DPRINTF((message ("Didn't Find a for loop matching heuristic:%s %s and %s differ", exprNode_unparse (forPred), exprNode_unparse(t1), exprNode_unparse(t3) ) )); */
/*  	} */
/*        return; */
/*      } */
