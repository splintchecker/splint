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


/*@notnull@*/ constraintList constraintList_new () {
constraintList ret;

ret = dmalloc ( sizeof (constraintList_) );
llassert ( ret != NULL);
ret->numconstraints = 0;
return ret; 
}
bool checkrestriction (int value, arithType at, exprNode expr2)
{
  switch (at)
    {
    case LT:  return (value < multiVal_forceInt ( expr2->val)  );
    case LTE: return (value <= multiVal_forceInt ( expr2->val)  );
    case GT:  return (value > multiVal_forceInt ( expr2->val)  );
    case GTE: return (value >= multiVal_forceInt ( expr2->val)  );
    case EQ:  return (value == multiVal_forceInt ( expr2->val)  );
    case NONNEGATIVE: return (value >= 0);
    case POSITIVE:  return (value > 0);
    default:      llassert (FALSE);
    }      
}
bool numericalResolve (constraint c)
{
  llassert (c.expr1);
switch (c.kind)
  {
  case BUFFSIZE:
    if (c.expr1 && c.expr1->sref)
      return checkrestriction (c.expr1->sref->bufinfo.size, c.restriction, c.expr2);
    else
      return FALSE;
  case STRINGLEN:
    if (c.expr1 && c.expr1->sref)
      return checkrestriction (c.expr1->sref->bufinfo.len, c.restriction, c.expr2);
    else
      return FALSE;
  case VALUE:   return checkrestriction (multiVal_forceInt (c.expr1->val), c.restriction, c.expr2);
  case CALLSAFE:  printf("NOt IMplemented !!!");
  default:        llassert(FALSE);
    return FALSE;
  }  
}

cstring parse_restriction (arithType at)
{
  switch (at)
    {
    case LT:  return "<";
    case LTE: return "<=";
    case GT:  return ">";
    case GTE:  return ">=";
    case EQ:  return "=";
    case NONNEGATIVE: return " >= 0";
    case POSITIVE:  return " > 0";
    default:      return "unknown";
    }      
}
cstring constraint_parseKind (constraintType kind)
{
  switch (kind)
    {
    case BUFFSIZE: return "BufferSize";
    case STRINGLEN: return "StringLength";
    case VALUE:     return "value";
    case CALLSAFE:     return "call safe";
    default:        return "unknown";
    }
}

void constraintList_debugPrint ( char * s )
{
  DPRINTF((s) );
}

void constraint_print (constraint c)
{
  char temp [100];
  char temp2 [200];
  
  snprintf (temp, sizeof(temp),"Location:%s  \n Constraint: %s of %s %s %s\n",
	    fileloc_unparse(exprNode_getfileloc (c.expr1 ) ),
	    constraint_parseKind (c.kind),
	  exprNode_unparse(c.expr1), parse_restriction(c.restriction), exprNode_unparse(c.expr2) );
  
  constraintList_debugPrint (temp);

}
void constraintList_print (constraintList cl)
{

  int i;
  if (constraintList_isUndefined (cl) )
    {
      constraintList_debugPrint("Constraint List undefined\n");
      return;
    }
  for (i = 0; i < cl->numconstraints; i++)
    {
      constraint_print (cl->constraints[i]);
    }

}

bool constraint_resolve (constraint c)
{
  if (c.kind == CALLSAFE)
    {
      /* */
      constraintList_debugPrint("can't resolve\n");
      return FALSE;
    }
  else
    {
      return numericalResolve (c);
    }
}	    
void constraintList_resolve (constraintList cl)
{
  int i;
  if (constraintList_isUndefined (cl) )
    {
       constraintList_debugPrint("Constraint List empty \n");
      return;
    }
   for (i = 0; i < cl->numconstraints; i++)
    {
       constraintList_debugPrint("Trying to resolve:\n");
      constraint_print (cl->constraints[i]);
      if ( constraint_resolve (cl->constraints[i] ) )
	 constraintList_debugPrint ("resolve sucessfully\n");
      else
	 constraintList_debugPrint ("not resolved sucessfully\n");
	
    }
}
constraint constraint_create (exprNode e1, exprNode e2,  arithType restriction, constraintType kind)
{
  constraint ret;
  ret.expr1 = e1;
  ret.expr2 = e2;
  ret.restriction = restriction;
  ret.kind = kind;
  return ret;
}

constraintList  constraintList_get (exprNode e1 )
{
  return e1->constraints;
}

constraintList constraintList_exprNodemerge (exprNode e1, exprNode e2)
{
  constraintList ret;
  if ( (e1 != NULL) && (e2 != NULL) )
    {
      ret = constraintList_merge (e1->constraints, e2->constraints);
    }
  else if ( (e1 == NULL) && (e2 == NULL) )
    ret = constraintList_merge ( (constraintList)NULL,  (constraintList)NULL );
  else if (e1 == NULL)
    ret = constraintList_merge ( (constraintList)NULL, e2->constraints);
  else
    ret = constraintList_merge (e1->constraints, (constraintList)NULL );
  return ret;
}


constraintList constraintList_merge (constraintList cl1, constraintList cl2)
{
  constraintList ret;
  int i;
  ret = constraintList_undefined; 
  if  (constraintList_isDefined (cl1) )
    {
      for (i = 0; i < cl1->numconstraints; i++)
	{
	  ret = constraintList_add (ret, cl1->constraints[i]);
	}
    }
  if  (constraintList_isDefined (cl2) )
    {
      for (i = 0; i < cl2->numconstraints; i++)
	{
	  ret = constraintList_add (ret, cl2->constraints[i]);
	}
    }
  return ret;


}

constraintList constraintList_add (constraintList constraints, constraint newconstr)
{
  constraintList ret;
  
  if (  constraintList_isUndefined(constraints) )
    {
      ret = constraintList_new ();
    }
  else
    {
      ret = constraints;
    }
  llassert (constraintList_isDefined (ret) );
  llassert (ret->numconstraints < max_constraints);
  ret->constraints[ret->numconstraints] = newconstr;
  ret->numconstraints++;
  return ret;
}

cstring exprNode_generateConstraints (exprNode e)
{

   cstring ret;

   ret = exprNode_findConstraints(e);
   if (ret == NULL)
     {
       ret = exprNode_justUnparse (e);
     }
   llassert(ret != NULL);

   exprNode_constraintPropagateUp(e);
}

/* handels multiple statements */



static cstring exprNode_findConstraints ( exprNode e)
{
  cstring ret;
  exprData data;

  if (exprNode_isError (e))
    {
      static /*@only@*/ cstring error = cstring_undefined;

      if (!cstring_isDefined (error))
	{
	  error = cstring_makeLiteral ("<error>");
	}
      
      return error;
    }   

  data = e->edata;

  switch (e->kind)
    {
    case XPR_CALL:
      ret = message ("%s(%q)",
		     exprNode_generateConstraints (exprData_getFcn (data)), 
		     exprNodeList_unparse (exprData_getArgs (data)));
       constraintList_debugPrint(ret);
      e->constraints = constraintList_add (e->constraints, constraint_create (e,exprNode_undefined, GT,  CALLSAFE ) );
      break;
    case XPR_FETCH:
      ret = message ("%s[%s]", exprNode_generateConstraints (exprData_getPairA (data)),
		     exprNode_generateConstraints (exprData_getPairB (data)));

      e->constraints = constraintList_add (e->constraints, constraint_create (exprData_getPairA (data),exprData_getPairB (data) , GT, BUFFSIZE  ) );
      e->constraints = constraintList_add (e->constraints, constraint_create (exprData_getPairB (data), exprNode_undefined, NONNEGATIVE, VALUE) );
      /* crude test to see if this is an lvalue */
      if ( sRefSet_isEmpty(e->sets) )
	   {
	     /* if its not an lvalue we assume it's an rvalue*/
	     /* of course if its am lvalue we assume its not an rvalue
		should put in a more accurate test sometime...*/
		
	     //       printf("Making constraint that length %s > %s\n",exprNode_generateConstraints (exprData_getPairA (data)),
	     //	     exprNode_generateConstraints (exprData_getPairB (data)));
      e->constraints = constraintList_add (e->constraints, constraint_create (exprData_getPairA (data),exprData_getPairB (data) , GT, STRINGLEN  ) );
	   }
      break;
    case XPR_PREOP: 
      ret = message ("%s%s",
		     lltok_unparse (exprData_getUopTok (data)),
		     exprNode_generateConstraints (exprData_getUopNode (data)));
      /* store old constraints */
       e->constraints = constraintList_exprNodemerge (exprData_getUopNode (e->edata), exprNode_undefined);   
      /*handle * pointer access */
      if (lltok_isMult( exprData_getUopTok (data) ) )
	{
	  e->constraints = constraintList_add (e->constraints, constraint_create (exprData_getUopNode (data), exprNode_undefined, POSITIVE, BUFFSIZE  ) );
      /* crude test to see if this is an lvalue */
	  if ( sRefSet_isEmpty(e->sets) )
	    {
	      /* if its not an lvalue we assume it's an rvalue*/
	      /* of course if its am lvalue we assume its not an rvalue
		 should put in a more accurate test sometime...*/
	     	  e->constraints = constraintList_add (e->constraints, constraint_create (exprData_getUopNode (data), exprNode_undefined, POSITIVE, STRINGLEN  ) );
	   }
	}
      break;

    case XPR_POSTOP:
      ret = message ("%s%s",
		     exprNode_generateConstraints (exprData_getUopNode (data)),
		     lltok_unparse (exprData_getUopTok (data)));
          e->constraints = constraintList_exprNodemerge (exprData_getUopNode (e->edata), exprNode_undefined);
	  if (lltok_isInc_Op (exprData_getUopTok (data) ) )
	    {
	      DPRINTF(("++  -- will be implemented later"));
	      // e->constraints = constraintList_add( e->constraints,
	      // constraint_makeInc_Op (exprData_getUopNode (data) ) );
	    }
      break;
    default:
      DPRINTF(("no special constraint generation"));
      ret = NULL;
    }

  return ret; 
}

cstring exprNode_handleError( exprNode e)
{
   if (exprNode_isError (e))
    {
      static /*@only@*/ cstring error = cstring_undefined;

      if (!cstring_isDefined (error))
	{
	  error = cstring_makeLiteral ("<error>");
	}
      
      return error;
    }
   
}

cstring exprNode_multiStatement (exprNode e)
{
  
   cstring ret;
  exprData data;

  if (exprNode_handleError (e))
    {
      return exprNode_handleError(e);
    }
     
  data = e->edata;

  switch (e->kind)
    {
      
    case XPR_FOR:
      ret = message ("%s %s", 
		     exprNode_generateConstraints (exprData_getPairA (data)), 
		     exprNode_generateConstraints (exprData_getPairB (data)));
      break;

    case XPR_FORPRED:
            ret = message ("for (%s; %s; %s)",
		     exprNode_generateConstraints (exprData_getTripleInit (data)),
		     exprNode_generateConstraints (exprData_getTripleTest (data)),
		     exprNode_generateConstraints (exprData_getTripleInc (data)));
      break;
      
    }
}

cstring exprNode_exprParse (exprNode e)
{
  
   cstring ret;
  exprData data;

  if (exprNode_handleError (e))
    {
      return exprNode_handleError(e);
    }
     
  data = e->edata;

  switch (e->kind)
    {
       case XPR_PARENS: 
      ret = message ("(%s)", exprNode_generateConstraints (exprData_getUopNode (e->edata)));
      e->constraints = constraintList_exprNodemerge (exprData_getUopNode (e->edata), exprNode_undefined);
      break;
          case XPR_ASSIGN:
      ret = message ("%s %s %s",
		     exprNode_generateConstraints (exprData_getOpA (data)), 
		     lltok_unparse (exprData_getOpTok (data)),
		     exprNode_generateConstraints (exprData_getOpB (data)));
      e->constraints = constraintList_exprNodemerge (exprData_getOpA (data), exprData_getOpB (data) );
      break;
      case XPR_PARENS: 
      ret = message ("(%s)", exprNode_generateConstraints (exprData_getUopNode (e->edata)));
      e->constraints = constraintList_exprNodemerge (exprData_getUopNode (e->edata), exprNode_undefined);
      break;
    case XPR_OP:
      ret = message ("%s %s %s",
		     exprNode_generateConstraints (exprData_getOpA (data)), 
		     lltok_unparse (exprData_getOpTok (data)),
      		     exprNode_generateConstraints (exprData_getOpB (data)));
      e->constraints  = constraintList_exprNodemerge (exprData_getOpA (data), exprData_getOpB (data));
      break;
    case XPR_SIZEOFT:
      ret = message ("sizeof(%s)", ctype_unparse (qtype_getType (exprData_getType (data))));
      break;
      
    case XPR_SIZEOF:
      ret = message ("sizeof(%s)", exprNode_generateConstraints (exprData_getSingle (data)));
      e->constraints = constraintList_exprNodemerge (exprData_getSingle (e->edata), exprNode_undefined);
      break;
      
   
    }
}
cstring exprNode_justUnparse (exprNode e)
{

   cstring ret;
  exprData data;

  if (exprNode_isError (e))
    {
      static /*@only@*/ cstring error = cstring_undefined;

      if (!cstring_isDefined (error))
	{
	  error = cstring_makeLiteral ("<error>");
	}
      
      return error;
    }   

  data = e->edata;

  switch (e->kind)
    {
  case XPR_CALL:
      ret = message ("%s(%q)",
		     exprNode_generateConstraints (exprData_getFcn (data)), 
		     exprNodeList_unparse (exprData_getArgs (data)));
       constraintList_debugPrint(ret);
      e->constraints = constraintList_add (e->constraints, constraint_create (e,exprNode_undefined, GT,  CALLSAFE ) );
      break;
    case XPR_INITBLOCK:
      ret = message ("Not Handled");
       break;
    case XPR_EMPTY:
      ret = message ("Not Handled");
      break;
    case XPR_LABEL:
      ret = message ("%s:", exprData_getId (data));
      break;
    case XPR_CONST:
    case XPR_VAR:
      ret = cstring_copy (exprData_getId (data));
      break;
     case XPR_BODY:
      ret = message ("Not handled");
      break;

      
    case XPR_OFFSETOF:
      break;


    case XPR_ALIGNOFT:
      break;
      
    case XPR_ALIGNOF:
      break;
      
    case XPR_VAARG:
      break;
    case XPR_ITERCALL:
      break;
    case XPR_ITER:
      break;
    case XPR_CAST:
      break;

    case XPR_GOTO:
      ret = message ("goto %s", exprData_getLiteral (data));
      break;

    case XPR_CONTINUE:
      ret = cstring_makeLiteral ("continue");
      break;

    case XPR_BREAK:
      ret = cstring_makeLiteral ("break");
      break;

    case XPR_RETURN:
      ret = message ("return %s", exprNode_generateConstraints (exprData_getSingle (data)));
      break;

    case XPR_NULLRETURN:
      ret = cstring_makeLiteral ("return");
      break;

    case XPR_COMMA:
      ret = message ("%s, %s", 
		     exprNode_generateConstraints (exprData_getPairA (data)),
		     exprNode_generateConstraints (exprData_getPairB (data)));
      break;
      
    case XPR_COND:
      ret = message ("%s ? %s : %s",
		     exprNode_generateConstraints (exprData_getTriplePred (data)),
		     exprNode_generateConstraints (exprData_getTripleTrue (data)),
		     exprNode_generateConstraints (exprData_getTripleFalse (data)));
      break;
    case XPR_IF:
      ret = message ("if (%s) %s", 
		     exprNode_generateConstraints (exprData_getPairA (data)),
		     exprNode_generateConstraints (exprData_getPairB (data)));
      e->constraints = constraintList_exprNodemerge (exprData_getPairA (data),exprData_getPairB(data));
      break;
      
    case XPR_IFELSE:
      ret = message ("if (%s) %s else %s",
		     exprNode_generateConstraints (exprData_getTriplePred (data)),
		     exprNode_generateConstraints (exprData_getTripleTrue (data)),
		     exprNode_generateConstraints (exprData_getTripleFalse (data)));
      break;
    case XPR_WHILE:
      ret = message ("while (%s) %s",
		     exprNode_generateConstraints (exprData_getPairA (data)),
		     exprNode_generateConstraints (exprData_getPairB (data)));
      e->constraints = constraintList_exprNodemerge (exprData_getPairA (data), exprData_getPairB (data) );
      break;

    case XPR_WHILEPRED:
      ret = cstring_copy (exprNode_generateConstraints (exprData_getSingle (data)));
      break;

    case XPR_TOK:
      ret = cstring_copy (lltok_unparse (exprData_getTok (data)));
      break;

    case XPR_DOWHILE:
      ret = message ("do { %s } while (%s)",
		     exprNode_generateConstraints (exprData_getPairB (data)),
		     exprNode_generateConstraints (exprData_getPairA (data)));
      break;
      
    case XPR_BLOCK:
      ret = message ("{ %s }", exprNode_generateConstraints (exprData_getSingle (data)));
      e->constraints = (exprData_getSingle (data))->constraints;
      break;

    case XPR_STMT:
      ret = cstring_copy (exprNode_generateConstraints (exprData_getSingle (data)));
      e->constraints = (exprData_getSingle (data))->constraints;
      break;

    case XPR_STMTLIST:
      ret = message ("%s; %s", 
		     exprNode_generateConstraints (exprData_getPairA (data)),
		     exprNode_generateConstraints (exprData_getPairB (data)));
      e->constraints = constraintList_exprNodemerge (exprData_getPairA (data), exprData_getPairB (data) );
      break;
      
    case XPR_FTDEFAULT:
    case XPR_DEFAULT:
      ret = cstring_makeLiteral ("default:");
      break;

    case XPR_SWITCH:
      ret = message ("switch (%s) %s", 
		     exprNode_generateConstraints (exprData_getPairA (data)),
		     exprNode_generateConstraints (exprData_getPairB (data)));
      break;

    case XPR_FTCASE:
    case XPR_CASE:
      ret = message ("case %s:", 
		     exprNode_generateConstraints (exprData_getSingle (data)));
      break;
      
    case XPR_INIT:
      ret = message ("%s = %s",
		     idDecl_getName (exprData_getInitId (data)),
		     exprNode_generateConstraints (exprData_getInitNode (data)));
      break;
      
    case XPR_FACCESS:
      ret = message ("%s.%s",
		     exprNode_generateConstraints (exprData_getFieldNode (data)),
		     exprData_getFieldName (data));
      break;
      
    case XPR_ARROW:
            ret = message ("%s->%s",
		     exprNode_generateConstraints (exprData_getFieldNode (data)),
		     exprData_getFieldName (data));
      break;

    case XPR_STRINGLITERAL:
      ret = cstring_copy (exprData_getLiteral (data));
      break;

    case XPR_NUMLIT:
      ret = cstring_copy (exprData_getLiteral (data));
      break;

    case XPR_NODE:
      ret = cstring_makeLiteral ("<node>");
      break;
    }

  return ret; 
}

void exprNode_constraintPropagateUp (exprNode e)
{

   cstring ret;
  exprData data;

  if (exprNode_isError (e))
    {
      static /*@only@*/ cstring error = cstring_undefined;

      if (!cstring_isDefined (error))
	{
	  error = cstring_makeLiteral ("<error>");
	}
      
      return error;
    }   

  data = e->edata;

  switch (e->kind)
    {
       case XPR_PARENS: 
      e->constraints = constraintList_exprNodemerge (exprData_getUopNode (e->edata), exprNode_undefined);
      break;
    case XPR_ASSIGN:
      e->constraints = constraintList_exprNodemerge (exprData_getOpA (data), exprData_getOpB (data) );
      break;
    case XPR_CALL:
      e->constraints = constraintList_add (e->constraints, constraint_create (e,exprNode_undefined, GT,  CALLSAFE ) );
      break;
    case XPR_INITBLOCK:
      //ret = message ("{ %q }", exprNodeList_unparse (exprData_getArgs (data)));
   //       e->constraints = constraintList_exprNodemerge (exprData_getArgs (data), exprData_getOpB (data) );
      break;
 
    case XPR_OP:
      ret = message ("%s %s %s",
		     exprNode_generateConstraints (exprData_getOpA (data)), 
		     lltok_unparse (exprData_getOpTok (data)),
      		     exprNode_generateConstraints (exprData_getOpB (data)));
      e->constraints  = constraintList_exprNodemerge (exprData_getOpA (data), exprData_getOpB (data));
      break;
 
    case XPR_ALIGNOF:
         e->constraints = constraintList_exprNodemerge (exprData_getSingle (e->edata), exprNode_undefined);
      break;
      
    case XPR_VAARG:
          e->constraints = constraintList_exprNodemerge (exprData_getCastNode (data), exprNode_undefined);
      break;
      
    case XPR_ITERCALL:
      //    ret = message ("%q(%q)", 
      //	     uentry_getName (exprData_getIterCallIter (data)),
      //	     exprNodeList_unparse (exprData_getIterCallArgs (data)));
      ////      e->constraints = constraintList_exprNodemerge (exprData_getIterCallArgs (data), exprNode_undefined);
      break;
    case XPR_ITER:
      TPRINTF(("XPR_ITER NOT IMPLEMENTED" ));
     /*  ret = message ("%q(%q) %s %q", */
/* 		     uentry_getName (exprData_getIterSname (data)), */
/* 		     exprNodeList_unparse (exprData_getIterAlist (data)), */
/* 		     exprNode_generateConstraints (exprData_getIterBody (data)), */
/* 		     uentry_getName (exprData_getIterEname (data))); */
      break;
    case XPR_CAST:
      e->constraints = constraintList_exprNodemerge (exprData_getCastNode (data), exprNode_undefined);
      break;

    default:
      TPRINTF(("NOT Currently IMplemented"));
    }
}

      
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
