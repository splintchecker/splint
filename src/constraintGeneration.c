
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

//static cstring exprNode_findConstraints ( exprNode p_e);
static bool exprNode_isMultiStatement(exprNode p_e);
static bool exprNode_multiStatement (exprNode p_e);
bool exprNode_exprTraverse (exprNode e, bool definatelv, bool definaterv,  fileloc sequencePoint);
//static void exprNode_constraintPropagateUp (exprNode p_e);
constraintList exprNode_traversRequiresConstraints (exprNode e);
constraintList exprNode_traversEnsuresConstraints (exprNode e);
void mergeResolve (exprNode parent, exprNode child1, exprNode child2);


     
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
      exprNode_multiStatement(e);
    }
  else
    {
      llassert(FALSE);
    }
  printf ("%s", (message ("%s", constraintList_printDetailed (e->requiresConstraints) ) ) );
  printf ("%s", (message ("%s", constraintList_printDetailed (e->ensuresConstraints) ) ) );
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
      llassert(FALSE);
    }
 
  DPRINTF (("Stmt") );
  DPRINTF ( (message ("%s ", exprNode_unparse (e)) ) );
     
  snode = exprData_getUopNode (e->edata);
  
  /* could be stmt involving multiple statements:
     i.e. if, while for ect.
  */
  
  if (exprNode_isMultiStatement (snode))
    {
      llassert(FALSE);
      return exprNode_multiStatement (snode);
    }
  
  loc = exprNode_getNextSequencePoint(e); /* reduces to an expression */
  notError = exprNode_exprTraverse (snode, FALSE, FALSE, loc);
  e->requiresConstraints = exprNode_traversRequiresConstraints(snode);
  // printf ("%s\n", constraintList_print(e->requiresConstraints) );
  e->ensuresConstraints  = exprNode_traversEnsuresConstraints(snode);
  // printf ("Ensures that:\n %s\n", constraintList_print(e->ensuresConstraints) );
  llassert(notError);
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

  
  exprNode_stmt (stmt1);
  DPRINTF(("\nstmt after stmtList call " ));

  exprNode_stmt (stmt2);

  mergeResolve (e, stmt1, stmt2 );
  DPRINTF ( (message ("smtlist constraints are: pre: %s \n and \t post %s\n",
		      constraintList_print(e->requiresConstraints),
		      constraintList_print(e->ensuresConstraints) ) ) );
  return TRUE;
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
      DPRINTF(( "IF:") );
      DPRINTF ((exprNode_unparse(e) ) );
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


bool exprNode_exprTraverse (exprNode e, bool definatelv, bool definaterv,  fileloc sequencePoint)
{
  exprNode t1, t2;

  bool handledExprNode;
  exprData data;
  constraint cons;
  
   DPRINTF((message ("exprNode_exprTraverset Analysising %s %s at", exprNode_unparse( e),
		    fileloc_unparse(exprNode_getfileloc(e) ) ) ) );

   e->requiresConstraints = constraintList_new();
   e->ensuresConstraints = constraintList_new();
   
   if (exprNode_handleError (e))
     {
       return FALSE;
     }
   
   handledExprNode = TRUE;
   
  data = e->edata;
  
  switch (e->kind)
    {
      
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
      lltok_unparse (exprData_getUopTok (data));
      exprNode_exprTraverse (exprData_getUopNode (data), definatelv, definaterv, sequencePoint );
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
      if (lltok_isInc_Op (exprData_getUopTok (data) ) )
	{
	  //	  cons = constraint_makeSideEffectPostIncrement (t1, sequencePoint);
	  // e->ensuresConstraints = constraintList_add(e->requiresConstraints, cons);
	}
      break;
      
    case XPR_PARENS: 
      exprNode_exprTraverse (exprData_getUopNode (e->edata), definatelv, definaterv, sequencePoint);
      //    e->constraints = constraintList_exprNodemerge (exprData_getUopNode (e->edata), exprNode_undefined);
      break; 
    case XPR_ASSIGN:
      exprNode_exprTraverse (exprData_getOpA (data), TRUE, definaterv, sequencePoint ); 
      lltok_unparse (exprData_getOpTok (data));
      exprNode_exprTraverse (exprData_getOpB (data), definatelv, TRUE, sequencePoint );
      //  e->constraints = constraintList_exprNodemerge (exprData_getOpA (data), exprData_getOpB (data) );
      break;
    case XPR_OP:
      exprNode_exprTraverse (exprData_getOpA (data), definatelv, definaterv, sequencePoint );
      lltok_unparse (exprData_getOpTok (data));
      exprNode_exprTraverse (exprData_getOpB  (data), definatelv, definaterv, sequencePoint );
      
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

/* walk down the tree and get all requires Constraints in each subexpression*/
constraintList exprNode_traversRequiresConstraints (exprNode e)
{
  //  exprNode t1, t2;

  bool handledExprNode;
  //  char * mes;
  exprData data;
  constraintList ret;
  ret = constraintList_copy (e->requiresConstraints );
   if (exprNode_handleError (e))
     {
       return ret;
     }
   
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
  ret = constraintList_copy (e->ensuresConstraints );
   if (exprNode_handleError (e))
     {
       return ret;
     }
   
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

