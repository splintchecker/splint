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
# include "exprData.i"

/*@i33*/
/*@-fcnuse*/
/*@-assignexpose*/

constraint constraint_copy (constraint c)
{
  constraint ret;
  ret = constraint_makeNew();
  ret->c1 = c->c1;
  ret->t1 = c->t1;
  ret->ar = c->ar;
  ret->e1 = c->e1;
  ret->post = c->post;
  return ret;
}

bool constraint_resolve (/*@unused@*/ constraint c)
{
  return FALSE;
}

/*@notnull@*/ 
/*@special@*/ constraint constraint_makeNew (void)
     /*@post:isnull result->t1, result->e1, result->c1@*/
     /*@defines result->ar, result->post@*/
{
  constraint ret;
  ret = dmalloc(sizeof (*ret) );
  ret->t1 = NULL;
  ret->e1 = NULL;
  ret->c1 = NULL;
  ret->ar = LT;
  ret->post = FALSE;
  /*@i23*/return ret;
}
/*@-czechfcns@*/

/*@out@*/ constraintTerm new_constraintTermExpr (void)
{
  constraintTerm ret;
  ret = dmalloc (sizeof (* ret ) );
  
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


constraintTerm intLit_makeConstraintTerm (int i)
{
  constraintTerm ret = new_constraintTermExpr();
  ret->value.intlit = i;
  ret->kind = INTLITERAL;
  ret->loc =  fileloc_undefined;
  return ret;
}
     

/*@special@*/ constraintExpr makeConstraintExpr (/*@only@*/ /*@notnull@*/ constraintTerm term)
 /*@post:isnull result->e1@*/
     /*@post:notnull result->t1@*/
     /*@defines result->e1, result->t1, result->c1@, result->op*/
{
  constraintExpr ret;
  ret = dmalloc (sizeof (*ret) );
  ret->t1 = term;
  ret->e1 = NULL;
  ret->c1 = UNDEFINED;
  ret->op = PLUS;
  return ret;
}


 constraintExpr makeConstraintExprIntlit (int i)
{
  constraintExpr ret;
  ret = dmalloc (sizeof (*ret) );
  ret->t1 = intLit_makeConstraintTerm (i);
  ret->e1 = NULL;
  ret->c1 = VALUE;
  ret->op = PLUS;
  /*@i1*/ return ret;
}

				       
/*@i33*/
/*@null@*/ constraint constraint_makeReadSafeExprNode ( exprNode po, exprNode ind)
{
  constraint ret = constraint_makeNew();
  constraintTerm term;
  po = exprNode_fakeCopy(po);
  ind = exprNode_fakeCopy(ind);
  printf ("Requires maxr(%s) >= %s\n", cstring_toCharsSafe (exprNode_unparse (po ) ),
	  cstring_toCharsSafe ( exprNode_unparse (ind)  ) );
  ret->t1 = exprNode_makeConstraintTerm(po);
  ret->c1 = MAXREAD;
  ret->ar = GTE;

  term = exprNode_makeConstraintTerm (ind);
  
  ret->e1 =  makeConstraintExpr (term);
  ret->e1->c1 = VALUE;
  /*@i1*/return ret;
}

constraint constraint_makeWriteSafeExprNode (exprNode po, exprNode ind)
{
  constraint ret = constraint_makeNew();
  constraintTerm term;
  printf ("Requires maxw(%s) >= %s\n", cstring_toCharsSafe (exprNode_unparse (po ) ),
	 cstring_toCharsSafe( exprNode_unparse (ind)  ) );
  ret->t1 = exprNode_makeConstraintTerm(po);
  ret->c1 = MAXSET;
  ret->ar = GTE;

  term = exprNode_makeConstraintTerm(ind);
  
  ret->e1 =  makeConstraintExpr (term);
  ret->e1->c1 = VALUE;
  /*@i1*/return ret;
}


constraint constraint_makeReadSafeInt (exprNode t1, int index)
{
  constraint ret = constraint_makeNew();
  constraintTerm term;
  printf ("Ensures maxr((valueof(%s)) >= %d\n", cstring_toCharsSafe (exprNode_unparse (t1 ) ),
	  index   );
  t1 = exprNode_fakeCopy(t1);
  ret->t1 = exprNode_makeConstraintTerm(t1);
  ret->c1 = MAXREAD;
  ret->ar = GTE;
  ret->post = TRUE;
  term = intLit_makeConstraintTerm(index);
  
  ret->e1 =  makeConstraintExpr (term);
  ret->e1->c1 = VALUE;
  /*make this refer to element after preconditions */
  fileloc_incColumn (ret->t1->loc);
  /*@i1*/ return ret;
}


constraint constraint_makeEnsureMaxReadAtLeast (exprNode t1, exprNode t2, fileloc sequencePoint)
{
  constraint ret = constraint_makeNew();
  constraintTerm term;

  t1 = exprNode_fakeCopy (t1);
  t2 = exprNode_fakeCopy (t2);
  
  ret->t1 = exprNode_makeConstraintTerm(t1);

  if (ret->t1->loc != NULL)
    fileloc_free(ret->t1->loc);
  
  ret->t1->loc = fileloc_copy (sequencePoint);
  ret->c1 = MAXREAD;
  ret->ar = GTE;
  ret->post = TRUE;  
  term = exprNode_makeConstraintTerm (t2);
  
  ret->e1 =  makeConstraintExpr (term);
  ret->e1->c1 = VALUE;
  /*make this refer to element after preconditions */
  fileloc_incColumn (ret->t1->loc);
  /*@i1*/ return ret;
}

constraint constraint_makeEnsureMinReadAtMost (exprNode po, exprNode ind, fileloc sequencePoint)
{
  constraint ret = constraint_makeNew();
  constraintTerm term;

  po = exprNode_fakeCopy (po);
  ind = exprNode_fakeCopy (ind);
  
  ret->t1 = exprNode_makeConstraintTerm(po);
  ret->c1 = MINREAD;
  ret->ar = LTE;
  ret->post = TRUE;
  term = exprNode_makeConstraintTerm (ind);
  
  ret->e1 =  makeConstraintExpr (term);
  ret->e1->c1 = VALUE;
  /*make this refer to element after preconditions */
  fileloc_incColumn (ret->t1->loc);
  /*@i1*/ return ret;
}

constraintExpr makePostOpInc (exprNode t1)
{
  constraintExpr ret;
  constraintTerm term;

  t1 = exprNode_fakeCopy (t1);
  term =   exprNode_makeConstraintTerm(t1);
  ret = makeConstraintExpr (term);
  ret->op = PLUS;
  ret->c1 = VALUE;
  ret->e1 =  makeConstraintExprIntlit (1);
  return ret;
}

constraint constraint_makeSideEffectPostIncrement (exprNode t1, fileloc sequencePoint)
{
  constraint ret = constraint_makeNew();
  //constraintTerm term;
  exprNode t2;
  t1 = exprNode_fakeCopy(t1);
  t2 = exprNode_fakeCopy(t1);
  
  ret->t1 = exprNode_makeConstraintTerm(t1);
  ret->c1 = VALUE;
  ret->ar = EQ;
  ret->post = TRUE;
  ret->e1 = makePostOpInc(t2);

  fileloc_incColumn (  ret->t1->loc);
  fileloc_incColumn (  ret->t1->loc);
  
  /*@i6*/return ret;
}

void constraintType_print (constraintType c1)
{
  switch (c1)
    {
    case VALUE:
      printf("VALUE");
      break;
    case CALLSAFE:
      printf("CALLSAFE");
      break;
    case  MAXSET:
      printf ("MAXSET");
      break;
    case    MINSET:
      printf ("MINSET");
      break;
    case MAXREAD:
      printf ("MAXREAD");
      break;
    case MINREAD:
      printf ("MINREAD");
      break;
    case NULLTERMINATED:
      printf ("NULLTERMINATED");
      break;
    case UNDEFINED:
      TPRINTF(("Unhandled value for constraintType"));
      llassert(FALSE);
      break;
    default:
      TPRINTF(("Unhandled value for constraintType"));
      llassert(FALSE);
    }
}
void constraintTerm_print (constraintTerm term)
{
  cstring s;

  llassert (term != NULL);
  switch (term->kind)
    {
    case EXPRNODE:
      s = exprNode_unparse (term->value.expr);
      printf(" %s", cstring_toCharsSafe(s) );
      s = fileloc_unparse (term->loc);
      printf("@ %s", cstring_toCharsSafe(s) );
      cstring_free(s);
      break;
    case INTLITERAL:
    {
      char * buf = malloc (15);
      /*@i1*/snprintf (buf, 14, "intliteral(%d)", term->value.intlit);
      /*@i1*/ printf(" %s  ", buf);
      free (buf);
      break;
    }
    case SREF:
      TPRINTF( ("Not Implemented\n"));
      llassert(FALSE);
      break;
    }
    /*@-unreachable*/
  return;
  /*@=unreachable*/
}

void arithType_print (arithType ar)
{
  switch (ar)
    {
    case LT:
      printf(" <  ");
      return;
    case	LTE:
      printf(" <= ");
      return;
    case 	GT:
      printf(" >  ");
      return;
    case 	GTE:
      printf(" <= ");
      return;
    case	EQ:
      printf(" == ");
      return;
    case	NONNEGATIVE:
      printf(" NONNEGATIVE ");
      return;
    case	POSITIVE:
      printf(" POSITIVE ");
      return;
    default:
      llassert(FALSE);
    }
}

void constraintExpr_print (constraintExpr ex)
{
  llassert (ex != NULL);
  constraintType_print (ex->c1 );
  constraintTerm_print (ex->t1);
  if (ex->e1 != NULL)
    {
      if (ex->op == PLUS)
	{
	  printf(" + ");
	}
      else
	{
	  printf (" - ");
	}
      
      constraintExpr_print (ex->e1);
    }
  
}


void constraint_print (constraint c)
{
  if (c->post)
    {
      printf("Ensures: ");
    }
  else
    {
      printf("requires: ");
    }
  
  constraintType_print (c->c1);
  constraintTerm_print (c->t1);
  arithType_print(c->ar);
  constraintExpr_print(c->e1);
  printf("\n");
}

/*@=fcnuse*/
/*@=assignexpose*/
/*@=czechfcns@*/

