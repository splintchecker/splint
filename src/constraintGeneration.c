
/*
** constraintList.c
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
//# include "exprDataQuite.i"

#ifndef exprNode_isError
#warning wtf
# define exprNode_isError(e)          ((e) == exprNode_undefined)
#else
#warning strange
#endif

#define myexprNode_isError(e)        ((e) == exprNode_undefined)



bool /*@alt void@*/ exprNode_generateConstraints (/*@temp@*/ exprNode e);
static bool exprNode_handleError( exprNode p_e);

//static cstring exprNode_findConstraints ( exprNode p_e);
static bool exprNode_isMultiStatement(exprNode p_e);
static bool exprNode_multiStatement (exprNode p_e);
bool exprNode_exprTraverse (exprNode e, bool definatelv, bool definaterv,  fileloc sequencePoint);
//static void exprNode_constraintPropagateUp (exprNode p_e);
constraintList exprNode_traversRequiresConstraints (exprNode e);
constraintList exprNode_traversEnsuresConstraints (exprNode e);

constraintList exprNode_traversTrueEnsuresConstraints (exprNode e);

extern constraintList reflectChanges (constraintList pre2, constraintList post1);

void mergeResolve (exprNode parent, exprNode child1, exprNode child2);
exprNode makeDataTypeConstraints (exprNode e);
constraintList constraintList_makeFixedArrayConstraints (sRefSet s);
constraintList checkCall (exprNode fcn, exprNodeList arglist);

bool exprNode_testd()
{
  /*        if ( ( (exprNode_isError  ) ) )
	  {
	  }
        if ( ( (e_1  ) ) )
	  {
	  }
  */
}

bool exprNode_isUnhandled (exprNode e)
{
  llassert( exprNode_isDefined(e) );
  switch (e->kind)
    {
    case XPR_INITBLOCK:
    case XPR_EMPTY:
    case XPR_LABEL:
    case XPR_CONST:
    case XPR_VAR:
    case XPR_BODY:
    case XPR_OFFSETOF:
    case XPR_ALIGNOFT:
    case XPR_ALIGNOF:
    case XPR_VAARG:
    case XPR_ITERCALL:
    case XPR_ITER:
    case XPR_CAST:
    case XPR_GOTO:
    case XPR_CONTINUE:
    case XPR_BREAK:
    case XPR_COMMA:
    case XPR_COND:
    case XPR_TOK:
    case XPR_FTDEFAULT:
    case XPR_DEFAULT:
    case XPR_SWITCH:
    case XPR_FTCASE:
    case XPR_CASE:
    case XPR_INIT:
    case XPR_NODE:
      DPRINTF((message ("Warning current constraint generation does not handle expression %s", exprNode_unparse(e)) ) );
      return TRUE;
      /*@notreached@*/
      break;
    default:
      return FALSE;
      
    }
  /*not reached*/
  return FALSE;
}

bool exprNode_handleError( exprNode e)
{
   if (exprNode_isError (e) || exprNode_isUnhandled(e) )
    {
      static /*@only@*/ cstring error = cstring_undefined;

      if (!cstring_isDefined (error))
	{
	  error = cstring_makeLiteral ("<error>");
	}
      
      /*@-unqualifiedtrans*/ return TRUE; /*@=unqualifiedtrans*/
    }
   return FALSE;
}

bool /*@alt void@*/ exprNode_generateConstraints (/*@temp@*/ exprNode e)
{
  if (exprNode_isError (e) )
    return FALSE;
  
  if (exprNode_isUnhandled (e) )
    {
      DPRINTF( (message("Warning ignoring %s", exprNode_unparse (e) ) ) );
      e->requiresConstraints = constraintList_new();
      e->ensuresConstraints = constraintList_new();
      e->trueEnsuresConstraints = constraintList_new();
      e->falseEnsuresConstraints = constraintList_new();
      //  llassert(FALSE);
      return FALSE;
    }

  
  //  e = makeDataTypeConstraints (e);
  
  DPRINTF((message ("exprNode_generateConstraints Analysising %s at %s", exprNode_unparse( e),
		    fileloc_unparse(exprNode_getfileloc(e) ) ) ) );

  if (exprNode_isMultiStatement ( e) )
    {
      exprNode_multiStatement(e);
    }
  else
    {
      //    llassert(FALSE);
      return FALSE;
    }
  
  {
    constraintList c;

    c = constraintList_makeFixedArrayConstraints (e->uses);
  e->requiresConstraints = reflectChanges (e->requiresConstraints, c);
  
  //  e->ensuresConstraints = constraintList_mergeEnsures(c, e->ensuresConstraints);
  
  }    

  /*  printf ("%s", (message ("%s", constraintList_printDetailed (e->requiresConstraints) ) ) );
      printf ("%s", (message ("%s", constraintList_printDetailed (e->ensuresConstraints) ) ) ); */
  return FALSE;
}


/* handles multiple statements */

bool exprNode_isMultiStatement(exprNode e)
{
if (exprNode_handleError (e) != NULL)
  return FALSE;
 
  switch (e->kind)
    {
    case XPR_FOR:
    case XPR_FORPRED:
    case XPR_IF:
    case XPR_IFELSE:
    case XPR_WHILE:
    case XPR_WHILEPRED:
    case XPR_DOWHILE:
    case XPR_BLOCK:
    case XPR_STMT:
    case XPR_STMTLIST:
      return TRUE;
    default:
      return FALSE;
    }

}

bool exprNode_stmt (exprNode e)
{
  exprNode snode;
  fileloc loc;
  bool notError;

  if (exprNode_isError(e) )
    {
      return FALSE;
    }
  e->requiresConstraints = constraintList_new();
  e->ensuresConstraints  = constraintList_new();
  //  e = makeDataTypeConstraints(e);
  
 
  DPRINTF(( "STMT:") );
  DPRINTF ( ( cstring_toCharsSafe ( exprNode_unparse(e)) )
	   );
  if (e->kind != XPR_STMT)
    {
      
      DPRINTF (("Not Stmt") );
      DPRINTF ( (message ("%s ", exprNode_unparse (e)) ) );
      if (exprNode_isMultiStatement (e) )
	{
	  return exprNode_multiStatement (e );
	}
      BPRINTF( (message ("Ignoring non-statement %s", exprNode_unparse(e) ) ) );
      return TRUE;
      //      llassert(FALSE);
    }
 
  DPRINTF (("Stmt") );
  DPRINTF ( (message ("%s ", exprNode_unparse (e)) ) );
     
  snode = exprData_getUopNode (e->edata);
  
  /* could be stmt involving multiple statements:
     i.e. if, while for ect.
  */
  
  if (exprNode_isMultiStatement (snode))
    {
      //      llassert(FALSE);
      return exprNode_multiStatement (snode);
    }
  
  loc = exprNode_getNextSequencePoint(e); /* reduces to an expression */
  notError = exprNode_exprTraverse (snode, FALSE, FALSE, loc);
  e->requiresConstraints = exprNode_traversRequiresConstraints(snode);
  //  printf ("For: %s \n", exprNode_unparse (e) );
  // printf ("%s\n", constraintList_print(e->requiresConstraints) );
  e->ensuresConstraints  = exprNode_traversEnsuresConstraints(snode);
  // printf ("Ensures that:\n %s\n", constraintList_print(e->ensuresConstraints) );
  //  llassert(notError);
  return notError;
  
}


bool exprNode_stmtList  (exprNode e)
{
  exprNode stmt1, stmt2;
  if (exprNode_isError (e) )
    {
      return FALSE;
    }

  e->requiresConstraints = constraintList_new();
  e->ensuresConstraints  = constraintList_new();
  //  e = makeDataTypeConstraints(e);
  
  /*Handle case of stmtList with only one statement:
   The parse tree stores this as stmt instead of stmtList*/
  if (e->kind != XPR_STMTLIST)
    {
      return exprNode_stmt(e);
    }
  llassert (e->kind == XPR_STMTLIST);
  DPRINTF(( "STMTLIST:") );
  DPRINTF ((cstring_toCharsSafe (exprNode_unparse(e)) ) );
  stmt1 = exprData_getPairA (e->edata);
  stmt2 = exprData_getPairB (e->edata);


  DPRINTF(("        stmtlist       ") );
  DPRINTF ((message("XW%s    |        %s", exprNode_unparse(stmt1), exprNode_unparse(stmt2) ) ) );
   
  exprNode_stmt (stmt1);
  DPRINTF(("\nstmt after stmtList call " ));

  exprNode_stmt (stmt2);
  mergeResolve (e, stmt1, stmt2 );
  
  DPRINTF ( (message ("smtlist constraints are: pre: %s \n and \t post %s\n",
		      constraintList_print(e->requiresConstraints),
		      constraintList_print(e->ensuresConstraints) ) ) );
  return TRUE;
}


exprNode doIf (exprNode e, exprNode test, exprNode body)
{
  test->trueEnsuresConstraints =  exprNode_traversTrueEnsuresConstraints(test);
  e->requiresConstraints = reflectChanges (body->requiresConstraints, test->trueEnsuresConstraints);
  e->requiresConstraints = reflectChanges (e->requiresConstraints,
					   test->ensuresConstraints);
#warning bad
  e->ensuresConstraints = constraintList_copy (test->ensuresConstraints);
  return e;
}

constraintList constraintList_makeFixedArrayConstraints (sRefSet s)
{
  constraintList ret;
  ret = constraintList_new();
 
  sRefSet_elements (s, el)
    {
      //    llassert (el);
    if (sRef_isFixedArray(el) )
      {
	int s;
	constraint con;
	s = sRef_getArraySize(el);
	DPRINTF( (message("%s is a fixed array with size %d",
			  sRef_unparse(el), s) ) );
	con = constraint_makeSRefWriteSafeInt (el, (s - 1));
	ret = constraintList_add(ret, con);
      }
    else
      {
	DPRINTF( (message("%s is not a fixed array",
			  sRef_unparse(el)) ) );
      }
    }
  end_sRefSet_elements

    return ret;
}

exprNode makeDataTypeConstraints (exprNode e)
{
  constraintList c;
  DPRINTF(("makeDataTypeConstraints"));

  c = constraintList_makeFixedArrayConstraints (e->uses);
  
  e->ensuresConstraints = constraintList_addList (e->ensuresConstraints, c);
  
/*   sRefSet_elements (e->uses, el) */
/*     llassert (el); */
/*     if (sRef_isFixedArray(el) ) */
/*       { */
/* 	int s; */
/* 	constraint con; */
/* 	s = sRef_getArraySize(el); */
/* 	DPRINTF( (message("%s is a fixed array with size %d", */
/* 			  sRef_unparse(el), s) ) ); */
/* 	con = constraint_makeSRefWriteSafeInt (el, (s - 1)); */
/* 	e->ensuresConstraints = constraintList_add(e->ensuresConstraints, */
/* 						   con); */
/*       } */
/*     else */
/*       { */
/* 	DPRINTF( (message("%s is not a fixed array", */
/* 			  sRef_unparse(el)) ) ); */
/*       } */
/*   end_sRefSet_elements */

 return e;
}


bool exprNode_multiStatement (exprNode e)
{
  
  bool ret;
  exprData data;
  exprNode e1, e2;
  exprNode p, trueBranch, falseBranch;
  exprNode forPred, forBody;
  exprNode init, test, inc;
  constraintList cons;
  constraintList t, f;
  e->requiresConstraints = constraintList_new();
  e->ensuresConstraints = constraintList_new();
  e->trueEnsuresConstraints = constraintList_new();
  e->falseEnsuresConstraints = constraintList_new();

  //  e = makeDataTypeConstraints(e);

  DPRINTF((message ("exprNode_multistatement Analysising %s %s at", exprNode_unparse( e),
		    fileloc_unparse(exprNode_getfileloc(e) ) ) ) );
  
  if (exprNode_handleError (e))
    {
      return FALSE;
    }

  data = e->edata;

  ret = TRUE;

  switch (e->kind)
    {
      
    case XPR_FOR:
      // ret = message ("%s %s",
      forPred = exprData_getPairA (data);
      forBody = exprData_getPairB (data);
      
  
      //first generate the constraints
      exprNode_generateConstraints (forPred);
      exprNode_generateConstraints (forBody);
      
      //merge the constraints: modle as if statement
      /* init
	if (test)
	   for body
	   inc        */
      init  =  exprData_getTripleInit (forPred->edata);
      test =   exprData_getTripleTest (forPred->edata);
      inc  =   exprData_getTripleInc (forPred->edata);

      //      if ( ( (exprNode_isError (test) || (exprNode_isError(init) ) || (exprNode_isError) ) ) )
      //            if ( ( (myexprNode_isError (test) || (myexprNode_isError(init) ) || (myexprNode_isError) ) ) )

      //if ( ( (exprNode_isError  ) ) )
            if ( ( (exprNode_isError (test) || (exprNode_isError(init) ) ) || (exprNode_isError (inc) ) ) )
	{
	  BPRINTF ((message ("strange for statement:%s, ignoring it", exprNode_unparse(e) ) ) );
	  return ret;
	}
      
      test->trueEnsuresConstraints =  exprNode_traversTrueEnsuresConstraints(test);
      //      e->requiresConstraints = reflectChanges (body->requiresConstraints, test->trueEnsuresConstraints);
      e->requiresConstraints = reflectChanges (e->requiresConstraints, test->ensuresConstraints);
      
      break;

    case XPR_FORPRED:
      //            ret = message ("for (%s; %s; %s)",
      exprNode_generateConstraints (exprData_getTripleInit (data) );
      exprNode_exprTraverse (exprData_getTripleTest (data),FALSE, FALSE, exprNode_loc(e));
      exprNode_generateConstraints (exprData_getTripleInc (data));
      break;
    case XPR_IF:
      DPRINTF(( "IF:") );
      DPRINTF ((exprNode_unparse(e) ) );
      //      ret = message ("if (%s) %s",
      e1 = exprData_getPairA (data);
      e2 = exprData_getPairB (data);

      exprNode_exprTraverse (e1,
			     FALSE, FALSE, exprNode_loc(e1));

      exprNode_generateConstraints (e2);

      e = doIf (e, e1, e2);
  
      
      //      e->constraints = constraintList_exprNodemerge (exprData_getPairA (data),exprData_getPairB(data));
      break;
      
    case XPR_IFELSE:
      DPRINTF(("Starting IFELSE"));
      //      ret = message ("if (%s) %s else %s",
      p = exprData_getTriplePred (data);
      trueBranch = exprData_getTripleTrue (data);
      falseBranch = exprData_getTripleFalse (data);
      
      exprNode_exprTraverse (p,
			     FALSE, FALSE, exprNode_loc(p));
      exprNode_generateConstraints (trueBranch);
      exprNode_generateConstraints (falseBranch);

      // do requires clauses
      
      cons = reflectChanges (trueBranch->requiresConstraints, p->trueEnsuresConstraints);
      cons  = reflectChanges (cons,
			      p->ensuresConstraints);
      e->requiresConstraints = constraintList_copy (cons);

      cons = reflectChanges (falseBranch->requiresConstraints, p->falseEnsuresConstraints);
      cons  = reflectChanges (cons,
			      p->ensuresConstraints);
      e->requiresConstraints = constraintList_addList (e->requiresConstraints,
						       cons);
      e->requiresConstraints = constraintList_addList (e->requiresConstraints,
						       p->requiresConstraints);
      
      // do ensures clauses
      // find the  the ensures lists for each subbranch
      t = constraintList_mergeEnsures (p->trueEnsuresConstraints, trueBranch->ensuresConstraints);
      t = constraintList_mergeEnsures (p->ensuresConstraints, t);

      f = constraintList_mergeEnsures (p->falseEnsuresConstraints, falseBranch->ensuresConstraints);
      f = constraintList_mergeEnsures (p->ensuresConstraints, f);

      // find ensures for whole if/else statement
      
      e->ensuresConstraints = constraintList_logicalOr (t, f);
      DPRINTF( ("Done IFELSE") );
      break;
    case XPR_WHILE:
       e1 = exprData_getPairA (data);
       e2 = exprData_getPairB (data);
      exprNode_exprTraverse (e1,
			     FALSE, FALSE, exprNode_loc(e1));

      exprNode_generateConstraints (e2);
      
      e1->trueEnsuresConstraints =  exprNode_traversTrueEnsuresConstraints(e1);
      
      e->requiresConstraints = reflectChanges (e2->requiresConstraints, e1->trueEnsuresConstraints);
      
      e->requiresConstraints = reflectChanges (e->requiresConstraints,
					       e1->ensuresConstraints);
#warning bad
      e->ensuresConstraints = constraintList_copy (e1->ensuresConstraints);
      
      //      ret = message ("while (%s) %s",
		     exprNode_generateConstraints (exprData_getPairA (data));
		     exprNode_generateConstraints (exprData_getPairB (data));
		     //      e->constraints = constraintList_exprNodemerge (exprData_getPairA (data), exprData_getPairB (data) );
      break;

    case XPR_DOWHILE:
      // ret = message ("do { %s } while (%s)",
		     exprNode_generateConstraints (exprData_getPairB (data));
		     exprNode_generateConstraints (exprData_getPairA (data));
      break;
      
    case XPR_BLOCK:
      //      ret = message ("{ %s }",
		     exprNode_generateConstraints (exprData_getSingle (data));
		     e->requiresConstraints = constraintList_copy ( (exprData_getSingle (data))->requiresConstraints );
		     e->ensuresConstraints = constraintList_copy ( (exprData_getSingle (data))->ensuresConstraints );
		     //      e->constraints = (exprData_getSingle (data))->constraints;
      break;

    case XPR_STMT:
    case XPR_STMTLIST:
      return exprNode_stmtList (e);
      /*@notreached@*/
      break;
    default:
      ret=FALSE;
    }
  return ret;
}

bool lltok_isBoolean_Op (lltok tok)
{
  /*this should really be a switch statement but
    I don't want to violate the abstraction
    maybe this should go in lltok.c */
  
  if (lltok_isEq_Op (tok) )
	{
	  return TRUE;
	}
      if (lltok_isAnd_Op (tok) )

	{

	  return TRUE;	  	  
	}
   if (lltok_isOr_Op (tok) )
	{
	  return TRUE;	  	
	}

   if (lltok_isGt_Op (tok) )
     {
       return TRUE;
     }
   if (lltok_isLt_Op (tok) )
     {
       return TRUE;
     }

   if (lltok_isLe_Op (tok) )
     {
       return TRUE;
     }
   
   if (lltok_isGe_Op (tok) )
     {
       return TRUE;
     }
   
   return FALSE;

}


void exprNode_booleanTraverse (exprNode e, bool definatelv, bool definaterv,  fileloc sequencePoint)
{
 constraint cons;
exprNode t1, t2;
exprData data;
lltok tok;
constraintList tempList;
data = e->edata;

tok = exprData_getOpTok (data);


t1 = exprData_getOpA (data);
t2 = exprData_getOpB (data);


/* arithmetic tests */

if (lltok_isEq_Op (tok) )
{
  cons =  constraint_makeEnsureEqual (t1, t2, sequencePoint);
  e->trueEnsuresConstraints = constraintList_add(e->trueEnsuresConstraints, cons);
}
 

 if (lltok_isLt_Op (tok) )
   {
     cons =  constraint_makeEnsureLessThan (t1, t2, sequencePoint);
     e->trueEnsuresConstraints = constraintList_add(e->trueEnsuresConstraints, cons);
     cons = constraint_makeEnsureGreaterThanEqual (t1, t2, sequencePoint);
     e->falseEnsuresConstraints = constraintList_add(e->falseEnsuresConstraints, cons);
   }
 
   
if (lltok_isGe_Op (tok) )
{
  
  cons = constraint_makeEnsureGreaterThanEqual (t1, t2, sequencePoint);
  e->trueEnsuresConstraints = constraintList_add(e->trueEnsuresConstraints, cons);
  
  cons =  constraint_makeEnsureLessThan (t1, t2, sequencePoint);
  e->falseEnsuresConstraints = constraintList_add(e->falseEnsuresConstraints, cons);
  
}


  if (lltok_isGt_Op (tok) )
{
  cons =  constraint_makeEnsureGreaterThan (t1, t2, sequencePoint);
  e->trueEnsuresConstraints = constraintList_add(e->trueEnsuresConstraints, cons);
  cons = constraint_makeEnsureLessThanEqual (t1, t2, sequencePoint);
  e->falseEnsuresConstraints = constraintList_add(e->falseEnsuresConstraints, cons);
}

if (lltok_isLe_Op (tok) )
{
   cons = constraint_makeEnsureLessThanEqual (t1, t2, sequencePoint);
  e->trueEnsuresConstraints = constraintList_add(e->trueEnsuresConstraints, cons);
  
  cons =  constraint_makeEnsureGreaterThan (t1, t2, sequencePoint);
  e->falseEnsuresConstraints = constraintList_add(e->falseEnsuresConstraints, cons);
}
  


/*Logical operations */

 if (lltok_isAnd_Op (tok) )
   
   {
     //true ensures 
     tempList = constraintList_copy (t1->trueEnsuresConstraints);
     tempList = constraintList_addList (tempList, t2->trueEnsuresConstraints);
     e->trueEnsuresConstraints = constraintList_addList(e->trueEnsuresConstraints, tempList);
     
      //false ensures: fens t1 or tens t1 and fens t2
     tempList = constraintList_copy (t1->trueEnsuresConstraints);
     tempList = constraintList_addList (tempList, t2->falseEnsuresConstraints);
     tempList = constraintList_logicalOr (tempList, t1->falseEnsuresConstraints);
      e->falseEnsuresConstraints =constraintList_addList(e->falseEnsuresConstraints, tempList);
      
   }
 
  if (lltok_isOr_Op (tok) )
    {
      //false ensures 
      tempList = constraintList_copy (t1->falseEnsuresConstraints);
      tempList = constraintList_addList (tempList, t2->falseEnsuresConstraints);
      e->falseEnsuresConstraints = constraintList_addList(e->falseEnsuresConstraints, tempList);
      
      //true ensures: tens t1 or fens t1 and tens t2
      tempList = constraintList_copy (t1->falseEnsuresConstraints);
      tempList = constraintList_addList (tempList, t2->trueEnsuresConstraints);
      tempList = constraintList_logicalOr (tempList, t1->trueEnsuresConstraints);
      e->trueEnsuresConstraints =constraintList_addList(e->trueEnsuresConstraints, tempList);
      
    }
  
}

bool exprNode_exprTraverse (exprNode e, bool definatelv, bool definaterv,  fileloc sequencePoint)
{
  exprNode t1, t2;
  lltok tok;
  bool handledExprNode;
  exprData data;
  constraint cons;

     if (exprNode_isError(e) )
     {
       return FALSE;
     }

   DPRINTF((message ("exprNode_exprTraverset Analysising %s %s at", exprNode_unparse( e),
		    fileloc_unparse(exprNode_getfileloc(e) ) ) ) );

   e->requiresConstraints = constraintList_new();
   e->ensuresConstraints = constraintList_new();
   e->trueEnsuresConstraints = constraintList_new();;
   e->falseEnsuresConstraints = constraintList_new();;

   if (exprNode_isUnhandled (e) )
     {
       return FALSE;
     }
   //   e = makeDataTypeConstraints (e);
 
   handledExprNode = TRUE;
   
  data = e->edata;
  
  switch (e->kind)
    {

      
    case XPR_WHILEPRED:
      t1 = exprData_getSingle (data);
      exprNode_exprTraverse (t1,  definatelv, definaterv, sequencePoint);
      e = exprNode_copyConstraints (e, t1);
      break;

    case XPR_FETCH:

      if (definatelv )
	{
	  t1 =  (exprData_getPairA (data) );
	  t2 =  (exprData_getPairB (data) );
	  cons =  constraint_makeWriteSafeExprNode (t1, t2);
	}
      else 
	{
	  t1 =  (exprData_getPairA (data) );
	  t2 =  (exprData_getPairB (data) );
	  cons = constraint_makeReadSafeExprNode (t1, t2 );
	}
      
      e->requiresConstraints = constraintList_add(e->requiresConstraints, cons);
      cons = constraint_makeEnsureMaxReadAtLeast (t1, t2, sequencePoint);
      e->ensuresConstraints = constraintList_add(e->ensuresConstraints, cons);
      //      cons = constraint_makeEnsureMinReadAtMost (t1, t2, sequencePoint);
      // e->ensuresConstraints = constraintList_add(e->ensuresConstraints, cons);
       
      exprNode_exprTraverse (exprData_getPairA (data), FALSE, TRUE, sequencePoint);
      exprNode_exprTraverse (exprData_getPairB (data), FALSE, TRUE, sequencePoint);
      
            /*@i325 Should check which is array/index. */
      break;
    case XPR_PREOP: 
      t1 = exprData_getUopNode(data);
      //lltok_unparse (exprData_getUopTok (data));
      exprNode_exprTraverse (t1, definatelv, definaterv, sequencePoint );
      /*handle * pointer access */

      /*@ i 325 do ++ and -- */
      if (lltok_isMult( exprData_getUopTok (data) ) )
	{
	  if (definatelv)
	    {
	      cons = constraint_makeWriteSafeInt (t1, 0);
	    }
	  else
	    {
	      cons = constraint_makeReadSafeInt (t1, 0);
	    }
  	      e->requiresConstraints = constraintList_add(e->requiresConstraints, cons);
	}
      
      /* ! expr */
      if (lltok_isNot_Op (exprData_getUopTok (data) ) )
	{
	  e->trueEnsuresConstraints  = constraintList_copy (t1->falseEnsuresConstraints);
	  e->falseEnsuresConstraints = constraintList_copy (t1->trueEnsuresConstraints);
	}
      break;
      
    case XPR_PARENS: 
      exprNode_exprTraverse (exprData_getUopNode (e->edata), definatelv, definaterv, sequencePoint);
      //    e->constraints = constraintList_exprNodemerge (exprData_getUopNode (e->edata), exprNode_undefined);
      break; 
    case XPR_ASSIGN:
      t1 = exprData_getOpA (data);
      t2 = exprData_getOpB (data);
      exprNode_exprTraverse (t1, TRUE, definaterv, sequencePoint ); 
      lltok_unparse (exprData_getOpTok (data));
      exprNode_exprTraverse (t2, definatelv, TRUE, sequencePoint );

      /* this test is nessecary because some expressions generate a null expression node.  function pointer do that -- drl */
      if ( (!exprNode_isError (t1))  &&  (!exprNode_isError(t2)) )
	{
	  cons =  constraint_makeEnsureEqual (t1, t2, sequencePoint);
	  e->ensuresConstraints = constraintList_add(e->ensuresConstraints, cons);
	}
      
      break;
    case XPR_OP:
      t1 = exprData_getOpA (data);
      t2 = exprData_getOpB (data);
      
       exprNode_exprTraverse (t1, definatelv, definaterv, sequencePoint );
      tok = exprData_getOpTok (data);
      exprNode_exprTraverse (t2, definatelv, definaterv, sequencePoint );

      if (lltok_isBoolean_Op (tok) )
	exprNode_booleanTraverse (e, definatelv, definaterv, sequencePoint);

      //      e->constraints  = constraintList_exprNodemerge (exprData_getOpA (data), exprData_getOpB (data));
      break;
    case XPR_SIZEOFT:
      ctype_unparse (qtype_getType (exprData_getType (data) ) );
      
      break;
      
    case XPR_SIZEOF: 
      exprNode_exprTraverse (exprData_getSingle (data), definatelv, definaterv, sequencePoint );
      //      e->constraints = constraintList_exprNodemerge (exprData_getSingle (e->edata), exprNode_undefined);
      break;
      
    case XPR_CALL:
      exprNode_exprTraverse (exprData_getFcn (data), definatelv, definaterv, sequencePoint );
      exprNodeList_unparse (exprData_getArgs (data) );
      DPRINTF ( (message ("Got call that %s ( %s) ",  exprNode_unparse(exprData_getFcn(data) ),   exprNodeList_unparse (exprData_getArgs (data) ) ) ) );

     

      e->requiresConstraints = constraintList_addList (e->requiresConstraints,
						 checkCall (exprData_getFcn (data), exprData_getArgs (data)  ) );      
      //      e->constraints = constraintList_add (e->constraints, constraint_create (e,exprNode_undefined, GT,  CALLSAFE ) );
      break;
      
    case XPR_RETURN:
      exprNode_exprTraverse (exprData_getSingle (data), definatelv, definaterv, sequencePoint );
      break;
  
    case XPR_NULLRETURN:
      cstring_makeLiteral ("return");;
      break;
      
      
    case XPR_FACCESS:
      exprNode_exprTraverse (exprData_getFieldNode (data), definatelv, definaterv, sequencePoint );
      exprData_getFieldName (data) ;
      break;
   
    case XPR_ARROW:
      exprNode_exprTraverse (exprData_getFieldNode (data), definatelv, definaterv, sequencePoint );
      exprData_getFieldName (data);
      break;
   
    case XPR_STRINGLITERAL:
      cstring_copy (exprData_getLiteral (data));
      break;
      
    case XPR_NUMLIT:
      cstring_copy (exprData_getLiteral (data));
      break;
    case XPR_POSTOP:
      
      exprNode_exprTraverse (exprData_getUopNode (data), TRUE, definaterv, sequencePoint );
      lltok_unparse (exprData_getUopTok (data));
      if (lltok_isInc_Op (exprData_getUopTok (data) ) )
	{
	  DPRINTF(("doing ++"));
	  t1 = exprData_getUopNode (data);
	  cons = constraint_makeMaxSetSideEffectPostIncrement (t1, sequencePoint );
	  e->ensuresConstraints = constraintList_add (e->ensuresConstraints, cons);
	  //	  cons = constraint_makeMaxReadSideEffectPostIncrement (t1, sequencePoint );
	  //e->ensuresConstraints = constraintList_add (e->ensuresConstraints, cons);
	}
      break;
    default:
      handledExprNode = FALSE;
    }

  e->requiresConstraints =  constraintList_preserveOrig ( e->requiresConstraints);
  e->ensuresConstraints  =  constraintList_preserveOrig ( e->ensuresConstraints);
  
  return handledExprNode; 
}


constraintList exprNode_traversTrueEnsuresConstraints (exprNode e)
{
  //  exprNode t1, t2;

  bool handledExprNode;
  //  char * mes;
  exprData data;
  constraintList ret;

   if (exprNode_handleError (e))
     {
       ret = constraintList_new();
       return ret;
     }
  ret = constraintList_copy (e->trueEnsuresConstraints );
   
   handledExprNode = TRUE;
   
  data = e->edata;
  
  switch (e->kind)
    {
      
    case XPR_FETCH:
      
      ret = constraintList_addList (ret,
				    exprNode_traversTrueEnsuresConstraints
				    (exprData_getPairA (data) ) );
        
      ret = constraintList_addList (ret,
				    exprNode_traversTrueEnsuresConstraints
				    (exprData_getPairB (data) ) );
      break;
    case XPR_PREOP:
          
      ret = constraintList_addList (ret,
				    exprNode_traversTrueEnsuresConstraints
				    (exprData_getUopNode (data) ) );
      break;
      
    case XPR_PARENS: 
      ret = constraintList_addList (ret, exprNode_traversTrueEnsuresConstraints
				    (exprData_getUopNode (data) ) );
      break;
    case XPR_ASSIGN:
        ret = constraintList_addList (ret,
				    exprNode_traversTrueEnsuresConstraints
				    (exprData_getOpA (data) ) );
        
       ret = constraintList_addList (ret,
				    exprNode_traversTrueEnsuresConstraints
				    (exprData_getOpB (data) ) );
       break;
    case XPR_OP:
       ret = constraintList_addList (ret,
				    exprNode_traversTrueEnsuresConstraints
				    (exprData_getOpA (data) ) );
        
       ret = constraintList_addList (ret,
				    exprNode_traversTrueEnsuresConstraints
				    (exprData_getOpB (data) ) );
       break;
    case XPR_SIZEOFT:
      
      //      ctype_unparse (qtype_getType (exprData_getType (data) ) );
      
      break;
      
    case XPR_SIZEOF:
          
       ret = constraintList_addList (ret,
				    exprNode_traversTrueEnsuresConstraints
				     (exprData_getSingle (data) ) );
       break;
      
    case XPR_CALL:
      ret = constraintList_addList (ret,
				     exprNode_traversTrueEnsuresConstraints
				    (exprData_getFcn (data) ) );
      /*@i11*/      //   exprNodeList_unparse (exprData_getArgs (data) );
         break;
      
    case XPR_RETURN:
      ret = constraintList_addList (ret,
				    exprNode_traversTrueEnsuresConstraints
				    (exprData_getSingle (data) ) );
      break;
  
    case XPR_NULLRETURN:
      //      cstring_makeLiteral ("return");;
      break;
            
    case XPR_FACCESS:
          ret = constraintList_addList (ret,
				    exprNode_traversTrueEnsuresConstraints
				    (exprData_getFieldNode (data) ) );
       //exprData_getFieldName (data) ;
      break;
   
    case XPR_ARROW:
        ret = constraintList_addList (ret,
				    exprNode_traversTrueEnsuresConstraints
				    (exprData_getFieldNode (data) ) );
	//      exprData_getFieldName (data);
      break;
   
    case XPR_STRINGLITERAL:
      //      cstring_copy (exprData_getLiteral (data));
      break;
      
    case XPR_NUMLIT:
      //      cstring_copy (exprData_getLiteral (data));
      break;
    case XPR_POSTOP:

           ret = constraintList_addList (ret,
				    exprNode_traversTrueEnsuresConstraints
				    (exprData_getUopNode (data) ) );
	   break;
    default:
      break;
    }

  return ret;
}


/* walk down the tree and get all requires Constraints in each subexpression*/
constraintList exprNode_traversRequiresConstraints (exprNode e)
{
  //  exprNode t1, t2;

  bool handledExprNode;
  //  char * mes;
  exprData data;
  constraintList ret;

   if (exprNode_handleError (e))
     {
       ret = constraintList_new();
       return ret;
     }
  ret = constraintList_copy (e->requiresConstraints );
  
   handledExprNode = TRUE;
   
  data = e->edata;
  
  switch (e->kind)
    {
      
    case XPR_FETCH:
      
      ret = constraintList_addList (ret,
				    exprNode_traversRequiresConstraints
				    (exprData_getPairA (data) ) );
        
      ret = constraintList_addList (ret,
				    exprNode_traversRequiresConstraints
				    (exprData_getPairB (data) ) );
      break;
    case XPR_PREOP:
          
      ret = constraintList_addList (ret,
				    exprNode_traversRequiresConstraints
				    (exprData_getUopNode (data) ) );
      break;
      
    case XPR_PARENS: 
      ret = constraintList_addList (ret, exprNode_traversRequiresConstraints
				    (exprData_getUopNode (data) ) );
      break;
    case XPR_ASSIGN:
        ret = constraintList_addList (ret,
				    exprNode_traversRequiresConstraints
				    (exprData_getOpA (data) ) );
        
       ret = constraintList_addList (ret,
				    exprNode_traversRequiresConstraints
				    (exprData_getOpB (data) ) );
       break;
    case XPR_OP:
       ret = constraintList_addList (ret,
				    exprNode_traversRequiresConstraints
				    (exprData_getOpA (data) ) );
        
       ret = constraintList_addList (ret,
				    exprNode_traversRequiresConstraints
				    (exprData_getOpB (data) ) );
       break;
    case XPR_SIZEOFT:
      
      //      ctype_unparse (qtype_getType (exprData_getType (data) ) );
      
      break;
      
    case XPR_SIZEOF:
          
       ret = constraintList_addList (ret,
				    exprNode_traversRequiresConstraints
				     (exprData_getSingle (data) ) );
       break;
      
    case XPR_CALL:
      ret = constraintList_addList (ret,
				     exprNode_traversRequiresConstraints
				    (exprData_getFcn (data) ) );
      /*@i11*/      //   exprNodeList_unparse (exprData_getArgs (data) );
         break;
      
    case XPR_RETURN:
      ret = constraintList_addList (ret,
				    exprNode_traversRequiresConstraints
				    (exprData_getSingle (data) ) );
      break;
  
    case XPR_NULLRETURN:
      //      cstring_makeLiteral ("return");;
      break;
            
    case XPR_FACCESS:
          ret = constraintList_addList (ret,
				    exprNode_traversRequiresConstraints
				    (exprData_getFieldNode (data) ) );
       //exprData_getFieldName (data) ;
      break;
   
    case XPR_ARROW:
        ret = constraintList_addList (ret,
				    exprNode_traversRequiresConstraints
				    (exprData_getFieldNode (data) ) );
	//      exprData_getFieldName (data);
      break;
   
    case XPR_STRINGLITERAL:
      //      cstring_copy (exprData_getLiteral (data));
      break;
      
    case XPR_NUMLIT:
      //      cstring_copy (exprData_getLiteral (data));
      break;
    case XPR_POSTOP:

           ret = constraintList_addList (ret,
				    exprNode_traversRequiresConstraints
				    (exprData_getUopNode (data) ) );
	   break;
    default:
      break;
    }

  return ret;
}


/* walk down the tree and get all Ensures Constraints in each subexpression*/
constraintList exprNode_traversEnsuresConstraints (exprNode e)
{
  //  exprNode t1, t2;

  bool handledExprNode;
  //  char * mes;
  exprData data;
  //  constraintExpr tmp;
  //  constraint cons;
  constraintList ret;


   if (exprNode_handleError (e))
     {
       ret = constraintList_new();
       return ret;
     }
   
  ret = constraintList_copy (e->ensuresConstraints );   
   handledExprNode = TRUE;
   
  data = e->edata;

  DPRINTF( (message (
		     "exprnode_traversEnsuresConstraints call for %s with constraintList of %s",
		     exprNode_unparse (e),
		     constraintList_print(e->ensuresConstraints)
		     )
	    ));
  
  
  switch (e->kind)
    {
      
    case XPR_FETCH:
      
      ret = constraintList_addList (ret,
				    exprNode_traversEnsuresConstraints
				    (exprData_getPairA (data) ) );
        
      ret = constraintList_addList (ret,
				    exprNode_traversEnsuresConstraints
				    (exprData_getPairB (data) ) );
      break;
    case XPR_PREOP:
          
      ret = constraintList_addList (ret,
				    exprNode_traversEnsuresConstraints
				    (exprData_getUopNode (data) ) );
      break;
      
    case XPR_PARENS: 
      ret = constraintList_addList (ret, exprNode_traversEnsuresConstraints
				    (exprData_getUopNode (data) ) );
      break;
    case XPR_ASSIGN:
        ret = constraintList_addList (ret,
				    exprNode_traversEnsuresConstraints
				    (exprData_getOpA (data) ) );
        
       ret = constraintList_addList (ret,
				    exprNode_traversEnsuresConstraints
				    (exprData_getOpB (data) ) );
       break;
    case XPR_OP:
       ret = constraintList_addList (ret,
				    exprNode_traversEnsuresConstraints
				    (exprData_getOpA (data) ) );
        
       ret = constraintList_addList (ret,
				    exprNode_traversEnsuresConstraints
				    (exprData_getOpB (data) ) );
       break;
    case XPR_SIZEOFT:
      
      //      ctype_unparse (qtype_getType (exprData_getType (data) ) );
      
      break;
      
    case XPR_SIZEOF:
          
       ret = constraintList_addList (ret,
				    exprNode_traversEnsuresConstraints
				     (exprData_getSingle (data) ) );
       break;
      
    case XPR_CALL:
      ret = constraintList_addList (ret,
				     exprNode_traversEnsuresConstraints
				    (exprData_getFcn (data) ) );
      /*@i11*/      //   exprNodeList_unparse (exprData_getArgs (data) );
         break;
      
    case XPR_RETURN:
      ret = constraintList_addList (ret,
				    exprNode_traversEnsuresConstraints
				    (exprData_getSingle (data) ) );
      break;
  
    case XPR_NULLRETURN:
      //      cstring_makeLiteral ("return");;
      break;
            
    case XPR_FACCESS:
          ret = constraintList_addList (ret,
				    exprNode_traversEnsuresConstraints
				    (exprData_getFieldNode (data) ) );
       //exprData_getFieldName (data) ;
      break;
   
    case XPR_ARROW:
        ret = constraintList_addList (ret,
				    exprNode_traversEnsuresConstraints
				    (exprData_getFieldNode (data) ) );
	//      exprData_getFieldName (data);
      break;
   
    case XPR_STRINGLITERAL:
      //      cstring_copy (exprData_getLiteral (data));
      break;
      
    case XPR_NUMLIT:
      //      cstring_copy (exprData_getLiteral (data));
      break;
    case XPR_POSTOP:

           ret = constraintList_addList (ret,
				    exprNode_traversEnsuresConstraints
				    (exprData_getUopNode (data) ) );
	   break;
    default:
      break;
    }
DPRINTF( (message (
		     "exprnode_traversEnsuresConstraints call for %s with constraintList of  is returning %s",
		     exprNode_unparse (e),
	     //		     constraintList_print(e->ensuresConstraints),
		     constraintList_print(ret)
		     )
	    ));
  

  return ret;
}


#ifndef exprNode_isError
#warning wtf
# define exprNode_isError(e)          ((e) == exprNode_undefined)
#else
#warning strange
#endif
