
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

void /*@alt bool@*/ exprNode_generateConstraints (/*@temp@*/ exprNode e);
static bool exprNode_handleError( exprNode p_e);

static cstring exprNode_findConstraints ( exprNode p_e);
static bool exprNode_isMultiStatement(exprNode p_e);
static bool exprNode_multiStatement (exprNode p_e);
bool exprNode_exprTraverse (exprNode e, bool definatelv, bool definaterv,  fileloc sequencePoint);
static void exprNode_constraintPropagateUp (exprNode p_e);


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
      return FALSE;
      /*@notreached@*/
      break;
    default:
      return TRUE;
      
    }
  /*not reached*/
  return FALSE;
}

bool exprNode_handleError( exprNode e)
{
   if (exprNode_isError (e) || !exprNode_isUnhandled(e) )
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

void /*@alt bool@*/ exprNode_generateConstraints (/*@temp@*/ exprNode e)
{
  DPRINTF((message ("exprNode_gnerateConstraints Analysising %s %s at", exprNode_unparse( e),
		    fileloc_unparse(exprNode_getfileloc(e) ) ) ) );
  
  if (exprNode_isMultiStatement ( e) )
    {
      return  exprNode_multiStatement(e);
    }
  else
    {
      llassert(FALSE);
    }

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

  if (exprNode_isError(e) )
    {
      return FALSE;
    }
  
  TPRINTF(( "STMT:") );
  TPRINTF ( ( cstring_toCharsSafe ( exprNode_unparse(e)) )
	   );
  if (e->kind != XPR_STMT)
    {
      
      TPRINTF (("Not Stmt") );
      if (exprNode_isMultiStatement (e) )
	{
	  return exprNode_multiStatement (e );
	}
      llassert(FALSE);
    }

  snode = exprData_getUopNode (e->edata);
  
  /* could be stmt involving multiple statements:
     i.e. if, while for ect.
  */
  
  if (exprNode_isMultiStatement (snode))
    {
      llassert(FALSE);
      return exprNode_multiStatement (snode);
    }
  else
    {
      fileloc loc;
      bool notError;
      loc = exprNode_getNextSequencePoint(e); /* reduces to an expression */
      notError = exprNode_exprTraverse (snode, FALSE, FALSE, loc);
      llassert(notError);
      fileloc_free (loc);
      return notError;
    }
}


bool exprNode_stmtList  (exprNode e)
{
  if (exprNode_isError (e) )
    {
      return FALSE;
    }
  /*Handle case of stmtList with only one statement:
   The parse tree stores this as stmt instead of stmtList*/
  if (e->kind != XPR_STMTLIST)
    {
      return exprNode_stmt(e);
    }
  llassert (e->kind == XPR_STMTLIST);
  TPRINTF(( "STMTLIST:") );
  TPRINTF ((cstring_toCharsSafe (exprNode_unparse(e)) ) );
  (void) exprNode_stmt (exprData_getPairA (e->edata));
  TPRINTF(("\nstmt after stmtList call " ));
  //  e->constraints = constraintList_exprNodemerge (exprData_getPairA (e->edata), exprData_getPairB (e->edata) );
  return exprNode_stmt (exprData_getPairB (e->edata));
}

bool exprNode_multiStatement (exprNode e)
{
  
  bool ret;
  exprData data;

  
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
		     exprNode_generateConstraints (exprData_getPairA (data)); 
		     exprNode_generateConstraints (exprData_getPairB (data));
      break;

    case XPR_FORPRED:
      //            ret = message ("for (%s; %s; %s)",
		     exprNode_generateConstraints (exprData_getTripleInit (data));
		     exprNode_generateConstraints (exprData_getTripleTest (data));
		     exprNode_generateConstraints (exprData_getTripleInc (data));
      break;
    case XPR_IF:
      TPRINTF(( "IF:") );
      TPRINTF ((exprNode_unparse(e) ) );
      //      ret = message ("if (%s) %s", 
		     exprNode_generateConstraints (exprData_getPairA (data));
		     exprNode_generateConstraints (exprData_getPairB (data));
		     //      e->constraints = constraintList_exprNodemerge (exprData_getPairA (data),exprData_getPairB(data));
      break;
      
    case XPR_IFELSE:
      //      ret = message ("if (%s) %s else %s",
		     exprNode_generateConstraints (exprData_getTriplePred (data));
		     exprNode_generateConstraints (exprData_getTripleTrue (data));
		     exprNode_generateConstraints (exprData_getTripleFalse (data));
      break;
    case XPR_WHILE:
      //      ret = message ("while (%s) %s",
		     exprNode_generateConstraints (exprData_getPairA (data));
		     exprNode_generateConstraints (exprData_getPairB (data));
		     //      e->constraints = constraintList_exprNodemerge (exprData_getPairA (data), exprData_getPairB (data) );
      break;

    case XPR_WHILEPRED:
      // ret =
      //	cstring_copy (
		      exprNode_generateConstraints (exprData_getSingle (data));
      break;

    case XPR_DOWHILE:
      // ret = message ("do { %s } while (%s)",
		     exprNode_generateConstraints (exprData_getPairB (data));
		     exprNode_generateConstraints (exprData_getPairA (data));
      break;
      
    case XPR_BLOCK:
      //      ret = message ("{ %s }",
		     exprNode_generateConstraints (exprData_getSingle (data));
      e->constraints = (exprData_getSingle (data))->constraints;
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


/*  void upwrap (exprNode e) */
/*  { */
/*    printf ("in upwrap with e = %X\n" , e); */
/*    printf ("%s\n", exprNode_unparse (e)   );  */
/*  } */



bool exprNode_exprTraverse (exprNode e, bool definatelv, bool definaterv,  fileloc sequencePoint)
{
  exprNode t1, t2;

  bool handledExprNode;
  char * mes;
  exprData data;
  constraintExpr tmp;
  constraint cons;
  
   DPRINTF((message ("exprNode_exprTraverset Analysising %s %s at", exprNode_unparse( e),
		    fileloc_unparse(exprNode_getfileloc(e) ) ) ) );
   
   if (exprNode_handleError (e))
     {
       return FALSE;
     }
   
   handledExprNode = TRUE;
   
  data = e->edata;
  
  switch (e->kind)
    {
      
    case XPR_FETCH:

      /*
	Make sure these are right!
	
	if (rvalue)
  	   valueOf (index) <= maxRead (array)
	   valueOf (index) >= minRead (array)
	   else   lvalue 
		    valueOf (index) <= maxSet (array)
		    valueOf (index) >= minSet (array)
      */
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
      e->constraints = constraintList_add(e->constraints, cons);
      constraint_print (cons);
      cons = constraint_makeEnsureMaxReadAtLeast (t1, t2, sequencePoint);
      constraint_print (cons);
      cons = constraint_makeEnsureMinReadAtMost (t1, t2, sequencePoint);
      constraint_print (cons);
      
      exprNode_exprTraverse (exprData_getPairA (data), FALSE, TRUE, sequencePoint);
      exprNode_exprTraverse (exprData_getPairB (data), FALSE, TRUE, sequencePoint);
      
            /*@i325 Should check which is array/index. */
      

      break;
    case XPR_PREOP: 
      t1 = exprData_getUopNode(data);
      lltok_unparse (exprData_getUopTok (data));
      exprNode_exprTraverse (exprData_getUopNode (data), definatelv, definaterv, sequencePoint );
      /*handle * pointer access */

      /*@ i 325 do ++ and -- */
      if (lltok_isMult( exprData_getUopTok (data) ) )
	{
	  if (definatelv)
	    {
	      printf ("Requires maxs(%s) > %d \n", exprNode_unparse (exprData_getUopNode (data) ), 0 );
	    }
	  else
	    {
	      cons = constraint_makeReadSafeInt (t1, 0);
	      constraint_print(cons);
	    }
	}
      
      break;
      
    case XPR_PARENS: 
      exprNode_exprTraverse (exprData_getUopNode (e->edata), definatelv, definaterv, sequencePoint);
       e->constraints = constraintList_exprNodemerge (exprData_getUopNode (e->edata), exprNode_undefined);
      break;
    case XPR_ASSIGN:
      exprNode_exprTraverse (exprData_getOpA (data), TRUE, definaterv, sequencePoint ); 
      lltok_unparse (exprData_getOpTok (data));
      exprNode_exprTraverse (exprData_getOpB (data), definatelv, TRUE, sequencePoint );
      e->constraints = constraintList_exprNodemerge (exprData_getOpA (data), exprData_getOpB (data) );
      break;
    case XPR_OP:
      exprNode_exprTraverse (exprData_getOpA (data), definatelv, definaterv, sequencePoint );
      lltok_unparse (exprData_getOpTok (data));
      exprNode_exprTraverse (exprData_getOpB  (data), definatelv, definaterv, sequencePoint );
      
      e->constraints  = constraintList_exprNodemerge (exprData_getOpA (data), exprData_getOpB (data));
      break;
    case XPR_SIZEOFT:
      ctype_unparse (qtype_getType (exprData_getType (data) ) );
      
      break;
      
    case XPR_SIZEOF:
      exprNode_exprTraverse (exprData_getSingle (data), definatelv, definaterv, sequencePoint );
      e->constraints = constraintList_exprNodemerge (exprData_getSingle (e->edata), exprNode_undefined);
      break;
      
    case XPR_CALL:
      exprNode_exprTraverse (exprData_getFcn (data), definatelv, definaterv, sequencePoint );
      exprNodeList_unparse (exprData_getArgs (data) );
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
      e->constraints = constraintList_exprNodemerge (exprData_getUopNode (e->edata), exprNode_undefined);
      if (lltok_isInc_Op (exprData_getUopTok (data) ) )
	{
	  t1 = exprData_getUopNode (data);
	  cons = constraint_makeSideEffectPostIncrement (t1, sequencePoint );
	  constraint_print (cons);
	  // printf("Side Effect: %s = (%s)0 +1 ", exprNode_unparse (exprData_getUopNode (data) ), exprNode_unparse (exprData_getUopNode(data) ) );
	}
      break;
    default:
      handledExprNode = FALSE;
    }

  return handledExprNode; 
}

/*  void exprNode_constraintPropagateUp (exprNode e) */
/*  { */

/*     cstring ret; */
/*    exprData data; */

/*    if (exprNode_handleError (e) ) */
/*      { */
/*        return; */
/*      } */

/*    data = e->edata; */

/*    switch (e->kind) */
/*      { */
/*      case XPR_PARENS:  */
/*        e->constraints = constraintList_exprNodemerge (exprData_getUopNode (e->edata), exprNode_undefined); */
/*        break; */
/*      case XPR_ASSIGN: */
/*        e->constraints = constraintList_exprNodemerge (exprData_getOpA (data), exprData_getOpB (data) ); */
/*        break; */
/*      case XPR_CALL: */
/*        //      e->constraints = constraintList_add (e->constraints, constraint_create (e,exprNode_undefined, GT,  CALLSAFE ) ); */
/*        break; */
/*      case XPR_INITBLOCK: */
/*        //("{ %q }"  */
/*        exprNodeList_unparse (exprData_getArgs (data) ); */
/*     //       e->constraints = constraintList_exprNodemerge (exprData_getArgs (data), exprData_getOpB (data) ); */
/*        break; */
 
/*      case XPR_OP: */
/*        //   ret = message ("%s %s %s", */
/*  		     exprNode_generateConstraints (exprData_getOpA (data)),  */
/*  		     lltok_unparse (exprData_getOpTok (data)), */
/*        		     exprNode_generateConstraints (exprData_getOpB (data))); */
/*        e->constraints  = constraintList_exprNodemerge (exprData_getOpA (data), exprData_getOpB (data); */
/*        break; */
 
/*      case XPR_ALIGNOF: */
/*           e->constraints = constraintList_exprNodemerge (exprData_getSingle (e->edata), exprNode_undefined); */
/*        break; */
      
/*      case XPR_VAARG: */
/*            e->constraints = constraintList_exprNodemerge (exprData_getCastNode (data), exprNode_undefined); */
/*        break; */
      
/*      case XPR_ITERCALL: */
/*        //    ret = message ("%q(%q)",  */
/*        //	     uentry_getName (exprData_getIterCallIter (data)), */
/*        //	     exprNodeList_unparse (exprData_getIterCallArgs (data))); */
/*        ////      e->constraints = constraintList_exprNodemerge (exprData_getIterCallArgs (data), exprNode_undefined); */
/*        break; */
/*      case XPR_ITER: */
/*        DPRINTF(("XPR_ITER NOT IMPLEMENTED" )); */
/*     //    ret = message ("%q(%q) %s %q",  */
/*  // 		     uentry_getName (exprData_getIterSname (data)), */
/*  // 		     exprNodeList_unparse (exprData_getIterAlist (data)), */
/*  // 		     exprNode_generateConstraints (exprData_getIterBody (data)), */
/*  // 		     uentry_getName (exprData_getIterEname (data))); */
/*        break; */
/*      case XPR_CAST: */
/*        e->constraints = constraintList_exprNodemerge (exprData_getCastNode (data), exprNode_undefined); */
/*        break; */

/*      default: */
/*        DPRINTF(("NOT Currently IMplemented")); */
/*      } */
/*  } */

/*  //Not used below */
      
/*     case XPR_FOR: */
/*       ret = message ("%s %s",  */
/* 		     exprNode_generateConstraints (exprData_getPairA (data)),  */
/* 		     exprNode_generateConstraints (exprData_getPairB (data))); */
/*       break; */

/*     case XPR_FORPRED: */
/*             ret = message ("for (%s; %s; %s)", */
/* 		     exprNode_generateConstraints (exprData_getTripleInit (data)), */
/* 		     exprNode_generateConstraints (exprData_getTripleTest (data)), */
/* 		     exprNode_generateConstraints (exprData_getTripleInc (data))); */
/*       break; */
      
/*     case XPR_GOTO: */
/*       ret = message ("goto %s", exprData_getLiteral (data)); */
/*       break; */

/*     case XPR_CONTINUE: */
/*       ret = cstring_makeLiteral ("continue"); */
/*       break; */

/*     case XPR_BREAK: */
/*       ret = cstring_makeLiteral ("break"); */
/*       break; */

/*     case XPR_RETURN: */
/*       ret = message ("return %s", exprNode_generateConstraints (exprData_getSingle (data))); */
/*       break; */

/*     case XPR_NULLRETURN: */
/*       ret = cstring_makeLiteral ("return"); */
/*       break; */

/*     case XPR_COMMA: */
/*       ret = message ("%s, %s",  */
/* 		     exprNode_generateConstraints (exprData_getPairA (data)), */
/* 		     exprNode_generateConstraints (exprData_getPairB (data))); */
/*       break; */
      
/*     case XPR_COND: */
/*       ret = message ("%s ? %s : %s", */
/* 		     exprNode_generateConstraints (exprData_getTriplePred (data)), */
/* 		     exprNode_generateConstraints (exprData_getTripleTrue (data)), */
/* 		     exprNode_generateConstraints (exprData_getTripleFalse (data))); */
/*       break; */
/*     case XPR_IF: */
/*       ret = message ("if (%s) %s",  */
/* 		     exprNode_generateConstraints (exprData_getPairA (data)), */
/* 		     exprNode_generateConstraints (exprData_getPairB (data))); */
/*       e->constraints = constraintList_exprNodemerge (exprData_getPairA (data),exprData_getPairB(data)); */
/*       break; */
      
/*     case XPR_IFELSE: */
/*       ret = message ("if (%s) %s else %s", */
/* 		     exprNode_generateConstraints (exprData_getTriplePred (data)), */
/* 		     exprNode_generateConstraints (exprData_getTripleTrue (data)), */
/* 		     exprNode_generateConstraints (exprData_getTripleFalse (data))); */
/*       break; */
/*     case XPR_WHILE: */
/*       ret = message ("while (%s) %s", */
/* 		     exprNode_generateConstraints (exprData_getPairA (data)), */
/* 		     exprNode_generateConstraints (exprData_getPairB (data))); */
/*       e->constraints = constraintList_exprNodemerge (exprData_getPairA (data), exprData_getPairB (data) ); */
/*       break; */

/*     case XPR_WHILEPRED: */
/*       ret = cstring_copy (exprNode_generateConstraints (exprData_getSingle (data))); */
/*       break; */

/*     case XPR_TOK: */
/*       ret = cstring_copy (lltok_unparse (exprData_getTok (data))); */
/*       break; */

/*     case XPR_DOWHILE: */
/*       ret = message ("do { %s } while (%s)", */
/* 		     exprNode_generateConstraints (exprData_getPairB (data)), */
/* 		     exprNode_generateConstraints (exprData_getPairA (data))); */
/*       break; */
      
/*     case XPR_BLOCK: */
/*       ret = message ("{ %s }", exprNode_generateConstraints (exprData_getSingle (data))); */
/*       e->constraints = (exprData_getSingle (data))->constraints; */
/*       break; */

/*     case XPR_STMT: */
/*       ret = cstring_copy (exprNode_generateConstraints (exprData_getSingle (data))); */
/*       e->constraints = (exprData_getSingle (data))->constraints; */
/*       break; */

/*     case XPR_STMTLIST: */
/*       ret = message ("%s; %s",  */
/* 		     exprNode_generateConstraints (exprData_getPairA (data)), */
/* 		     exprNode_generateConstraints (exprData_getPairB (data))); */
/*       e->constraints = constraintList_exprNodemerge (exprData_getPairA (data), exprData_getPairB (data) ); */
/*       break; */
      
/*     case XPR_FTDEFAULT: */
/*     case XPR_DEFAULT: */
/*       ret = cstring_makeLiteral ("default:"); */
/*       break; */

/*     case XPR_SWITCH: */
/*       ret = message ("switch (%s) %s",  */
/* 		     exprNode_generateConstraints (exprData_getPairA (data)), */
/* 		     exprNode_generateConstraints (exprData_getPairB (data))); */
/*       break; */

/*     case XPR_FTCASE: */
/*     case XPR_CASE: */
/*       ret = message ("case %s:",  */
/* 		     exprNode_generateConstraints (exprData_getSingle (data))); */
/*       break; */
      
/*     case XPR_INIT: */
/*       ret = message ("%s = %s", */
/* 		     idDecl_getName (exprData_getInitId (data)), */
/* 		     exprNode_generateConstraints (exprData_getInitNode (data))); */
/*       break; */
      
/*     case XPR_FACCESS: */
/*       ret = message ("%s.%s", */
/* 		     exprNode_generateConstraints (exprData_getFieldNode (data)), */
/* 		     exprData_getFieldName (data)); */
/*       break; */
      
/*     case XPR_ARROW: */
/*             ret = message ("%s->%s", */
/* 		     exprNode_generateConstraints (exprData_getFieldNode (data)), */
/* 		     exprData_getFieldName (data)); */
/*       break; */

/*     case XPR_STRINGLITERAL: */
/*       ret = cstring_copy (exprData_getLiteral (data)); */
/*       break; */

/*     case XPR_NUMLIT: */
/*       ret = cstring_copy (exprData_getLiteral (data)); */
/*       break; */

/*     case XPR_NODE: */
/*       ret = cstring_makeLiteral ("<node>"); */
/*       break; */
/*     } */

/*   return ret;  */
/* } */
