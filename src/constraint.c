/*
** constraintList.c
*/

# include <ctype.h> /* for isdigit */
# include "lclintMacros.nf"
# include "basic.h"
# include "cgrammar.h"
# include "cgrammar_tokens.h"

# include "exprChecks.h"
# include "aliasChecks.h"
# include "exprNodeSList.h"
//# include "exprData.i"

/*@i33*/
/*@-fcnuse*/
/*@-assignexpose*/

constraint constraint_makeNew (void);


constraint makeConstraintParse (sRef x, lltok relOp, exprNode cconstant)
     
{
  char *t;
  int c;
  constraint ret;
  ret = constraint_makeNew();
  llassert (x);
  if (!x)
    return ret;
 
    
  ret->lexpr = constraintExpr_makeTermsRef (x);
  #warning fix abstraction

  if (relOp.tok == GE_OP)
      ret->ar = GTE;
  else if (relOp.tok == LE_OP)
    ret->ar = LTE;
  else if (relOp.tok == EQ_OP)
    ret->ar = EQ;
  else
  llfatalbug("Unsupported relational operator");


  t =  cstring_toCharsSafe (exprNode_unparse(cconstant));
  c = atoi( t );
  ret->expr = constraintExpr_makeIntLiteral (c);

  ret->post = TRUE;
  //  ret->orig = ret;
  DPRINTF(("GENERATED CONSTRAINT:"));
  DPRINTF( (message ("%s", constraint_print(ret) ) ) );
  return ret;
}

constraint makeConstraintParse2 (constraintExpr l, lltok relOp, exprNode cconstant)
     
{
  char *t;
  int c;
  constraint ret;
  ret = constraint_makeNew();
  llassert (l);
  if (!l)
    return ret;
 
    
  ret->lexpr = constraintExpr_copy (l);
  #warning fix abstraction

  if (relOp.tok == GE_OP)
      ret->ar = GTE;
  else if (relOp.tok == LE_OP)
    ret->ar = LTE;
  else if (relOp.tok == EQ_OP)
    ret->ar = EQ;
  else
  llfatalbug("Unsupported relational operator");


  t =  cstring_toCharsSafe (exprNode_unparse(cconstant));
  c = atoi( t );
  ret->expr = constraintExpr_makeIntLiteral (c);

  ret->post = TRUE;
  //  ret->orig = ret;
  DPRINTF(("GENERATED CONSTRAINT:"));
  DPRINTF( (message ("%s", constraint_print(ret) ) ) );
  return ret;
}


constraint makeConstraintParse3 (constraintExpr l, lltok relOp, constraintExpr r)     
{
  constraint ret;
  ret = constraint_makeNew();
  llassert (l);
  if (!l)
    return ret;
 
    
  ret->lexpr = constraintExpr_copy (l);
  #warning fix abstraction

  if (relOp.tok == GE_OP)
      ret->ar = GTE;
  else if (relOp.tok == LE_OP)
    ret->ar = LTE;
  else if (relOp.tok == EQ_OP)
    ret->ar = EQ;
  else
  llfatalbug("Unsupported relational operator");

  ret->expr = constraintExpr_copy (r);

  ret->post = TRUE;
  //  ret->orig = ret;
  DPRINTF(("GENERATED CONSTRAINT:"));
  DPRINTF( (message ("%s", constraint_print(ret) ) ) );
  return ret;
}

constraint constraint_copy (constraint c)
{
  constraint ret;
  ret = constraint_makeNew();
  ret->lexpr = constraintExpr_copy (c->lexpr);
  ret->ar = c->ar;
  ret->expr =  constraintExpr_copy (c->expr);
  ret->post = c->post;
  /*@i33 fix this*/
  if (c->orig != NULL)
    ret->orig = constraint_copy (c->orig);
  else
    ret->orig = NULL;
  return ret;
}

/*like copy expect it doesn't allocate memory for the constraint*/

void constraint_overWrite (constraint c1, constraint c2)
{
  c1->lexpr = constraintExpr_copy (c2->lexpr);
  c1->ar = c2->ar;
  c1->expr =  constraintExpr_copy (c2->expr);
  c1->post = c2->post;
  /*@i33 fix this*/
  if (c2->orig != NULL)
    c1->orig = constraint_copy (c2->orig);
  else
    c1->orig = NULL;

}

bool constraint_resolve (/*@unused@*/ constraint c)
{
  return FALSE;
}



constraint constraint_makeNew (void)
{
  constraint ret;
  ret = dmalloc(sizeof (*ret) );
  ret->lexpr = NULL;
  ret->expr = NULL;
  ret->ar = LT;
  ret->post = FALSE;
  ret->orig = NULL;
  /*@i23*/return ret;
}

fileloc constraint_getFileloc (constraint c)
{
  return (constraintExpr_getFileloc (c->lexpr) );


}

constraint constraint_makeReadSafeExprNode ( exprNode po, exprNode ind)
{
  constraint ret = constraint_makeNew();
  //  constraintTerm term;
  po = exprNode_fakeCopy(po);
  ind = exprNode_fakeCopy(ind);
  ret->lexpr = constraintExpr_makeMaxReadExpr(po);
  ret->ar    = GTE;
  ret->expr  = constraintExpr_makeValueExpr (ind);
  return ret;
}

constraint constraint_makeWriteSafeInt (exprNode po, int ind)
{
  constraint ret = constraint_makeNew();

 
  ret->lexpr =constraintExpr_makeMaxSetExpr(po);
  ret->ar = GTE;
  ret->expr =  constraintExpr_makeValueInt (ind);
  /*@i1*/return ret;
}
	
constraint constraint_makeWriteSafeExprNode (exprNode po, exprNode ind)
{
  constraint ret = constraint_makeNew();

 
  ret->lexpr =constraintExpr_makeMaxSetExpr(po);
  ret->ar = GTE;
  ret->expr =  constraintExpr_makeValueExpr (ind);
  /*@i1*/return ret;
}
			       
constraint constraint_makeReadSafeInt ( exprNode po, int ind)
{
  constraint ret = constraint_makeNew();

  po = exprNode_fakeCopy(po);
  
  ret->lexpr = constraintExpr_makeMaxReadExpr(po);
  ret->ar    = GTE;
  ret->expr  = constraintExpr_makeValueInt (ind);
  return ret;
}

constraint constraint_makeEnsureMaxReadAtLeast (exprNode e1, exprNode t2, fileloc sequencePoint)
{
  constraint ret = constraint_makeNew();


  e1 = exprNode_fakeCopy (e1);
  t2 = exprNode_fakeCopy (t2);
  
  ret = constraint_makeReadSafeExprNode(e1, t2);

  ret->lexpr = constraintExpr_setFileloc (ret->lexpr, sequencePoint);
  
  ret->post = TRUE;  

  //  fileloc_incColumn (ret->lexpr->term->loc);
  return ret;
}


/* make constraint ensures e1 == e2 */

constraint constraint_makeEnsureEqual (exprNode e1, exprNode e2, fileloc sequencePoint)
{
  constraint ret = constraint_makeNew();
  exprNode e;
  
  e = exprNode_fakeCopy(e1);
  ret->lexpr = constraintExpr_makeValueExpr (e);
  ret->ar = EQ;
  ret->post = TRUE;
  e = exprNode_fakeCopy(e2);
  ret->expr =  constraintExpr_makeValueExpr (e);
  
  ret->lexpr = constraintExpr_setFileloc (ret->lexpr, sequencePoint);
//   fileloc_incColumn (  ret->lexpr->term->loc);
//   fileloc_incColumn (  ret->lexpr->term->loc);
  return ret;
}


exprNode exprNode_copyConstraints (exprNode dst, exprNode src)
{
  dst->ensuresConstraints = constraintList_copy (src->ensuresConstraints );
  dst->requiresConstraints = constraintList_copy (src->requiresConstraints );
  dst->trueEnsuresConstraints = constraintList_copy (src->trueEnsuresConstraints );
  dst->falseEnsuresConstraints = constraintList_copy (src->falseEnsuresConstraints );
  return dst;
}

constraint constraint_makeMaxSetSideEffectPostIncrement (exprNode e, fileloc sequencePoint)
{
  constraint ret = constraint_makeNew();
  //constraintTerm term;

  e = exprNode_fakeCopy(e);
  ret->lexpr = constraintExpr_makeValueExpr (e);
  ret->ar = EQ;
  ret->post = TRUE;
  ret->expr =  constraintExpr_makeValueExpr (e);
  ret->expr =  constraintExpr_makeIncConstraintExpr (ret->expr);

  ret->lexpr = constraintExpr_setFileloc (ret->lexpr, sequencePoint);
//   fileloc_incColumn (  ret->lexpr->term->loc);
//   fileloc_incColumn (  ret->lexpr->term->loc);
  return ret;
}



// constraint constraint_makeMaxReadSideEffectPostIncrement (exprNode e, fileloc sequencePoint)
// {
//   constraint ret = constraint_makeNew();
//   //constraintTerm term;

//   e = exprNode_fakeCopy(e);
//   ret->lexpr = constraintExpr_makeMaxReadExpr(e);
//   ret->ar = EQ;
//   ret->post = TRUE;
//   ret->expr = constraintExpr_makeIncConstraintExpr (e);
//   ret->lexpr = constraintExpr_setFileLoc (ret->lexpr, sequencePoint);
//   return ret;
// }


cstring arithType_print (arithType ar)
{
  cstring st = cstring_undefined;
  switch (ar)
    {
    case LT:
      st = cstring_makeLiteral (" < ");
      break;
    case	LTE:
      st = cstring_makeLiteral (" <= ");
      break;
    case 	GT:
      st = cstring_makeLiteral (" > ");
      break;
    case 	GTE:
      st = cstring_makeLiteral (" >= ");
      break;
    case	EQ:
      st = cstring_makeLiteral (" == ");
      break;
    case	NONNEGATIVE:
      st = cstring_makeLiteral (" NONNEGATIVE ");
      break;
    case	POSITIVE:
      st = cstring_makeLiteral (" POSITIVE ");
      break;
    default:
      llassert(FALSE);
      break;
    }
  return st;
}


cstring  constraint_printDetailed (constraint c)
{
  cstring st = cstring_undefined;

  if (!c->post)
    {
    if (c->orig)  
      st = message ("Unresolved constraint:\nLclint is unable to resolve %s needed to satisy %s", constraint_print (c), constraint_print(c->orig) );
    else
      st = message ("Unresolved constraint:\nLclint is unable to resolve %s", constraint_print (c));
      
    }
  else
    {
      if (c->orig)
	st = message ("Block Post condition:\nThis function block has the post condition %s\n based on %s", constraint_print (c), constraint_print(c->orig) );
      else
	st = message ("Block Post condition:\nThis function block has the post condition %s", constraint_print (c));	
    }
  return st;
}

cstring  constraint_print (constraint c)
{
  cstring st = cstring_undefined;
  cstring type = cstring_undefined;
  llassert (c);
  if (c->post)
    {
      type = cstring_makeLiteral ("Ensures: ");
    }
  else
    {
      type = cstring_makeLiteral ("Requires: ");
    }
  st = message ("%s: %s %s %s",
		type,
		constraintExpr_print (c->lexpr),
		arithType_print(c->ar),
		constraintExpr_print(c->expr)
		);
  return st;
}

constraint constraint_doSRefFixBaseParam (constraint precondition,
						   exprNodeList arglist)
{
  precondition->lexpr = constraintExpr_doSRefFixBaseParam (precondition->lexpr,
							   arglist);
  precondition->expr = constraintExpr_doSRefFixBaseParam (precondition->expr,
							   arglist);

  return precondition;
}


// bool constraint_hasTerm (constraint c, constraintTerm term)
// {
//   DPRINTF((message ("Constraint %s", constraint_print (c) ) ) );
  
//   if (constraintExpr_includesTerm (c->lexpr, term) )
//     return TRUE;

//   if (constraintExpr_includesTerm (c->expr, term) )
//     return TRUE;

//   return FALSE;
// }

constraint constraint_preserveOrig (constraint c)
{
  c->orig = constraint_copy (c);
  return c;
}
/*@=fcnuse*/
/*@=assignexpose*/
/*@=czechfcns@*/
