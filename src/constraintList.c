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
    }      
}
cstring constraint_parseKind (constraintType kind)
{
  switch (kind)
    {
    case BUFFSIZE: return "BufferSize";
    case STRINGLEN: return "StringLength";
    case VALUE:     return "value";
    }
}

void constraint_print (constraint c)
{
#if 0
  printf ("Constraint: %s of %s %s %s\n", constraint_parseKind (c.kind),
	  exprNode_unparse(c.expr1), parse_restriction(c.restriction), exprNode_unparse(c.expr2) );
  #endif
}
void constraintList_print (constraintList cl)
{
#if o  
  int i;
  if (constraintList_isUndefined (cl) )
    {
      printf("Constraint List undefined\n");
      return;
    }
  for (i = 0; i < cl->numconstraints; i++)
    {
      constraint_print (cl->constraints[i]);
    }
#endif
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
  static int temp = 0;
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
      ret = message ("(%s)", exprNode_generateConstraints (exprData_getUopNode (e->edata)));
      break;
    case XPR_ASSIGN:
      ret = message ("%s %s %s",
		     exprNode_generateConstraints (exprData_getOpA (data)), 
		     lltok_unparse (exprData_getOpTok (data)),
		     exprNode_generateConstraints (exprData_getOpB (data)));
      e->constraints = constraintList_exprNodemerge (exprData_getOpA (data), exprData_getOpB (data) );
      break;
    case XPR_CALL:
      ret = message ("%s(%q)",
		     exprNode_generateConstraints (exprData_getFcn (data)), 
		     exprNodeList_unparse (exprData_getArgs (data)));
      break;
    case XPR_INITBLOCK:
      ret = message ("{ %q }", exprNodeList_unparse (exprData_getArgs (data)));
      break;
    case XPR_EMPTY:
      ret = cstring_undefined;
      break;
    case XPR_LABEL:
      ret = message ("%s:", exprData_getId (data));
      break;
    case XPR_CONST:
    case XPR_VAR:
      ret = cstring_copy (exprData_getId (data));
      break;
    case XPR_FETCH:
      ret = message ("%s[%s]", exprNode_generateConstraints (exprData_getPairA (data)),
		     exprNode_generateConstraints (exprData_getPairB (data)));
      //      printf("Making constraint that size %s > %s\n",exprNode_generateConstraints (exprData_getPairA (data)),
      //		     exprNode_generateConstraints (exprData_getPairB (data)));
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
    case XPR_BODY:
      ret = message ("<body>");
      break;
    case XPR_OP:
      ret = message ("%s %s %s",
		     exprNode_generateConstraints (exprData_getOpA (data)), 
		     lltok_unparse (exprData_getOpTok (data)),
      		     exprNode_generateConstraints (exprData_getOpB (data))); 
      break;
      
    case XPR_PREOP: 
      ret = message ("%s%s",
		     lltok_unparse (exprData_getUopTok (data)),
		     exprNode_generateConstraints (exprData_getUopNode (data)));
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
      break;
      
    case XPR_OFFSETOF:
      ret = message ("offsetof(%s,%q)", 
		     ctype_unparse (qtype_getType (exprData_getOffsetType (data))),
		     cstringList_unparseSep (exprData_getOffsetName (data), cstring_makeLiteralTemp (".")));
      break;

    case XPR_SIZEOFT:
      ret = message ("sizeof(%s)", ctype_unparse (qtype_getType (exprData_getType (data))));
      break;
      
    case XPR_SIZEOF:
      ret = message ("sizeof(%s)", exprNode_generateConstraints (exprData_getSingle (data)));
      break;

    case XPR_ALIGNOFT:
      ret = message ("alignof(%s)", ctype_unparse (qtype_getType (exprData_getType (data))));
      break;
      
    case XPR_ALIGNOF:
      ret = message ("alignof(%s)", exprNode_generateConstraints (exprData_getSingle (data)));
      break;
      
    case XPR_VAARG:
      ret = message ("va_arg(%s, %q)", 
		     exprNode_generateConstraints (exprData_getCastNode (data)),
		     qtype_unparse (exprData_getCastType (data)));
      break;
      
    case XPR_ITERCALL:
      ret = message ("%q(%q)", 
		     uentry_getName (exprData_getIterCallIter (data)),
		     exprNodeList_unparse (exprData_getIterCallArgs (data)));
      break;
    case XPR_ITER:
      ret = message ("%q(%q) %s %q",
		     uentry_getName (exprData_getIterSname (data)),
		     exprNodeList_unparse (exprData_getIterAlist (data)),
		     exprNode_generateConstraints (exprData_getIterBody (data)),
		     uentry_getName (exprData_getIterEname (data)));
      break;
    case XPR_CAST:
      ret = message ("(%q)%s", 
		     qtype_unparse (exprData_getCastType (data)),
		     exprNode_generateConstraints (exprData_getCastNode (data)));
      break;
      
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
      ret = message ("%s;%d %s", 
		     exprNode_generateConstraints (exprData_getPairA (data)), temp++,
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
