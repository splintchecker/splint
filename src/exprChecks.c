/*
** LCLint - annotation-assisted static program checker
** Copyright (C) 1994-2000 University of Virginia,
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
** exprChecks.c
*/

# include "lclintMacros.nf"
# include "basic.h"
# include "cgrammar.h"
# include "cgrammar_tokens.h"
# include "aliasChecks.h"
# include "exprChecks.h"

/*
** for now, allow exprChecks to access exprNode.
** may remove this in future
*/

/*@access exprNode@*/

static bool checkCallModifyAux (sRef p_s, exprNode p_f, sRef p_alias, exprNode p_err);
static bool checkModifyValAux (sRef p_s, exprNode p_f, sRef p_alias, exprNode p_err);
static bool checkModifyAux (sRef p_s, exprNode p_f, sRef p_alias, exprNode p_err);
static void checkSafeReturnExpr (/*@notnull@*/ exprNode p_e);

/*
** called at end of expression statement
**
**  of e->kind is not an assign, empty, body or modop
**         verify the the value is void
**
*/

void
exprNode_checkStatement (exprNode e)
{
  bool hasError = FALSE;

  if (!exprNode_isError (e))
    {
      exprKind ek = e->kind;

      if (ek == XPR_CALL && !(ctype_isRealVoid (e->typ)))
	{ 
	  if (ctype_isKnown (e->typ))
	    {
	      if (ctype_isManifestBool (ctype_realishType (e->typ)))
		{
		  hasError = optgenerror 
		    (FLG_RETVALBOOL,
		     message ("Return value (type %t) ignored: %s",
			      e->typ,
			      exprNode_unparseFirst (e)),
		     e->loc);
		}
	      else if (ctype_isDirectInt (e->typ))
		{
		  hasError = optgenerror 
		    (FLG_RETVALINT,
		     message ("Return value (type %t) ignored: %s",
			      e->typ,
			      exprNode_unparseFirst (e)),
		     e->loc);
		}
	      else
		{
		  hasError = optgenerror 
		    (FLG_RETVALOTHER,
		     message ("Return value (type %t) ignored: %s",
			      e->typ,
			      exprNode_unparseFirst (e)),
		     e->loc);
		}
	    }
	}

      if (!hasError && !(exprNode_mayEscape (e))
	  && !(e->canBreak)) /* control changes are effects too! */
	{
	  if (sRefSet_hasRealElement (e->sets)
	      || sRefSet_hasRealElement (e->msets))
	    {
	      ; /* okay */
	    }
	  else
	    {
	      if (sRefSet_isEmpty (e->sets) && sRefSet_isEmpty (e->msets))
		{
		  voptgenerror
		    (FLG_NOEFFECT,
		     message ("Statement has no effect: %s",
			      exprNode_unparseFirst (e)),
		     e->loc);
		}
	      else
		{
		  if (context_maybeSet (FLG_NOEFFECTUNCON))
		    {
		      if (sRefSet_hasUnconstrained (e->sets))
			{
			  voptgenerror
			    (FLG_NOEFFECTUNCON,
			     message ("Statement has no effect (possible "
				      "undected modification through "
				      "call to %q): %s",
				      sRefSet_unparseUnconstrained (e->sets),
				      exprNode_unparseFirst (e)),
			     e->loc);
			}
		      else if (sRefSet_hasUnconstrained (e->msets))
			{
			  voptgenerror
			    (FLG_NOEFFECTUNCON,
			     message ("Statement has no effect (possible "
				      "undected modification through "
				      "call to %q): %s",
				      sRefSet_unparseUnconstrained (e->msets),
				      exprNode_unparseFirst (e)),
			     e->loc);
			}
		      else
			{
			  ; /* statement has unknown modification */
			}
		    }
		}
	    }
	}
    }
}

static bool
checkRepExposed (sRef base, /*@notnull@*/ exprNode e, sRef alias, 
		 /*@unused@*/ exprNode unused)
{
  ctype btype;

  if (sRef_isInvalid (alias) || sRef_sameName (base, alias))
    {
      btype = sRef_getType (base);

      if (ctype_isAbstract (btype) && ctype_isVisiblySharable (e->typ))
	{
	  voptgenerror (FLG_RETEXPOSE,
			message ("Return value exposes rep of %s: %s",
				 ctype_unparse (btype),
				 exprNode_unparse (e)),
			e->loc);
	  return TRUE;
	}
    }
  else
    {
      sRef rbase = sRef_getRootBase (base);
      btype = sRef_getType (rbase);
		      
      if (ctype_isAbstract (btype) && ctype_isVisiblySharable (e->typ))
	{
	  voptgenerror 
	    (FLG_RETEXPOSE,
	     message ("Return value may expose rep of %s through alias %q: %s",
		      ctype_unparse (btype),
		      sRef_unparse (rbase),
		      exprNode_unparse (e)),
	     e->loc);
	  return TRUE;
	}
    }

  return FALSE;
}

static bool
checkRefGlobParam (sRef base, /*@notnull@*/ exprNode e,
		   sRef alias, /*@unused@*/ exprNode unused)
{
  if (sRef_isInvalid (alias) || sRef_sameName (base, alias))
    {
      ctype ct = e->typ;

      if (ctype_isUnknown (ct))
	{
	  ct = sRef_getType (base);
	}
 
      if (ctype_isVisiblySharable (ct))
	{
	  if (sRef_isGlobal (base))
	    {
	      voptgenerror
		(FLG_RETALIAS,
		 message ("Function returns reference to global %q: %s",
			  sRef_unparse (base),
			  exprNode_unparse (e)),
		 e->loc);

	      return TRUE;
	    }
	  else if (sRef_isAnyParam (base))
	    {
	      uentryList params = context_getParams ();
	      int paramno = sRef_getParam (base);

	      if (paramno < uentryList_size (params))
		{
		  uentry arg = uentryList_getN (params, paramno);
		  sRef ref = uentry_getSref (arg);

		  if (uentry_isReturned (arg) 
		      || sRef_isOnly (ref) 
		      || sRef_isExposed (ref)
		      || sRef_isRefCounted (ref))
		    {
		      ; /* okay */
		    }
		  else
		    {
		      voptgenerror 
			(FLG_RETALIAS,
			 message ("Function returns reference to parameter %q: %s",
				  sRef_unparse (base),
				  exprNode_unparse (e)),
			 e->loc);
		    }
		}
	      else
		{
		  llbuglit ("ret alias: bad paramno");
		}
	      
	      return TRUE;
	    }
	  else
	    {
	      return FALSE;
	    }
	}
    }
  else
    {
      if (ctype_isVisiblySharable (e->typ))
	{
	  if (sRef_isGlobal (base))
	    {
	      voptgenerror 
		(FLG_RETALIAS,
		 message ("Function may return reference to global %q through alias %q: %s",
			  sRef_unparse (alias),
			  sRef_unparse (base),
			  exprNode_unparse (e)),
		 e->loc);
	      return TRUE;
	    }
	  else if (sRef_isAnyParam (base) && !(sRef_isOnly (base)))
	    {
	      uentryList params = context_getParams ();
	      int paramno = sRef_getParam (base);
	      
	      if (paramno < uentryList_size (params))
		{
		  uentry arg = uentryList_getN (params, paramno);
		  
		  if (!uentry_isReturned (arg))
		    {
		      voptgenerror 
			(FLG_RETALIAS,
			 message 
			 ("Function may return reference to parameter %q through alias %q: %s",
			  sRef_unparse (base),
			  sRef_unparse (alias),
			  exprNode_unparse (e)),
			 e->loc);
		      
		      return TRUE;
		    }
		}
	      else
		{
		  voptgenerror 
		    (FLG_RETALIAS,
		     message 
		     ("Function may return reference to parameter %q through alias %q: %s",
		      sRef_unparse (base),
		      sRef_unparse (alias),
		      exprNode_unparse (e)),
		     e->loc);
		  
		  return TRUE;
		}
	    }
	  else
	    {
	      return FALSE;
	    }
	}
    }
  return FALSE;
}


void
exprNode_checkModify (exprNode e, exprNode err)
{
  llassert (exprNode_isDefined (e));

  DPRINTF (("Check modify: %s", exprNode_unparse (e)));

  if (sRef_isValid (e->sref))
    {
      sRef_aliasCheckPred (checkModifyAux, sRef_isReference, e->sref, e, err);
    }
}

void
exprNode_checkModifyVal (exprNode e, exprNode err)
{
  llassert (exprNode_isDefined (e));
  
  DPRINTF (("Check modify val: %s", exprNode_unparse (e)));

  if (sRef_isValid (e->sref))
    {
      sRef_aliasCheckPred (checkModifyValAux, sRef_isReference, e->sref, e, err);
    }
}

void
exprChecks_checkNullReturn (fileloc loc)
{
  if (!context_inRealFunction ())
    {
      /*
      llmsg ("exprChecks_checkNullReturnExpr: not in function context");
      */
      return;
    }
  else
    {
      if (ctype_isFunction (context_currentFunctionType ()))
	{
	  ctype tr = ctype_returnValue (context_currentFunctionType ());

	  if (!ctype_isFirstVoid (tr))
	    {
	      if (ctype_isUnknown (tr))
		{
		  voptgenerror
		    (FLG_CONTROL,
		     cstring_makeLiteral ("Empty return in function declared to implicitly return int"),
		     loc);
		}
	      else
		{
		  voptgenerror (FLG_CONTROL,
				message ("Empty return in function declared to return %t", tr),
				loc);
		}
	    }
	}
    }
}

void
exprNode_checkReturn (exprNode e)
{
  if (!exprNode_isError (e))
    {
      if (!context_inRealFunction ())
	{
	  if (context_inMacro ())
	    {
	      llerror (FLG_CONTROL,
		       message ("Macro %s uses return (not functional)",
				context_inFunctionName ()));
	    }
	  else
	    {
	      /*
		llbuglit ("exprNode_checkReturn: not in function context");
		*/
	    }
	}
      else
	{
	  if (ctype_isFunction (context_currentFunctionType ()))
	    {
	      checkSafeReturnExpr (e);
	    }
	  else
	    {
	      ;
	    }
	}
    }
}

void
exprNode_checkPred (cstring c, exprNode e)
{
  ctype ct;

  if (exprNode_isError (e))
    return;

  ct = exprNode_getType (e);

  if (exprNode_isAssign (e))
    {
      voptgenerror 
	(FLG_PREDASSIGN,
	 message ("Test expression for %s is assignment expression: %s", 
		  c, exprNode_unparse (e)),
	 e->loc);
    }

  if (ctype_isRealBool (ct))
    {
     ;
    }
  else if (ctype_isRealPointer (ct))
    {
      voptgenerror
	(FLG_PREDBOOLPTR,
	 message ("Test expression for %s not %s, type %t: %s", c, 
		  context_printBoolName (), 
		  ct, exprNode_unparse (e)),
	 e->loc);
    }
  else if (ctype_isRealInt (ct))
    {
      voptgenerror 
	(FLG_PREDBOOLINT,
	 message ("Test expression for %s not %s, type %t: %s", c, 
		  context_printBoolName (), ct, exprNode_unparse (e)),
	 e->loc);
    }
  else
    {
      voptgenerror 
	(FLG_PREDBOOLOTHERS,
	 message ("Test expression for %s not %s, type %t: %s", c, 
		  context_printBoolName (), ct, exprNode_unparse (e)),
	 e->loc);
    }
}

void
exprChecks_checkUsedGlobs (globSet decl, globSet used)
{
  fileloc fl = uentry_whereSpecified (context_getHeader ());

  if (fileloc_isUndefined (fl))
    {
      fl = uentry_whereDeclared (context_getHeader ());
    }

  globSet_allElements (decl, el)
    {
      if (!globSet_member (used, el))
	{
	  if (sRef_isSpecInternalState (el)
	      || sRef_isNothing (el))
	    {
	      ;
	    }
	  else
	    {
	      cstring sname = sRef_unparse (el);
	      
	      if (fileloc_isLib (fl))
		{
		  voptgenerror (FLG_USEALLGLOBS,
				message ("Global %s listed (%q) but not used", 
					 sname, fileloc_unparse (fl)),
				g_currentloc);
		}		
	      else
		{
		  voptgenerror (FLG_USEALLGLOBS,
				message ("Global %s listed but not used", sname),
				fl);
		}

	      cstring_free (sname);
	    }
	}
    } end_globSet_allElements;
}

void
exprNode_checkAllMods (sRefSet mods, uentry ue)
{
  bool realParams = FALSE;
  uentry le = context_getHeader ();
  fileloc fl = uentry_whereSpecified (le);
  uentryList specParamNames = uentryList_undefined;
  uentryList paramNames = context_getParams ();

  if (uentry_isFunction (le))
    {
      specParamNames = uentry_getParams (le);  

      if (uentryList_isUndefined (specParamNames))
	{
	  ; /* unknown params */
	}
      else if (uentryList_size (paramNames) != uentryList_size (specParamNames))
	{
	  llbug
	    (message ("exprNode_checkAllMods: parameter lists have different sizes: "
		      "%q (%d) / %q (%d)",
		      uentryList_unparse (paramNames),
		      uentryList_size (paramNames),
		      uentryList_unparse (specParamNames),
		      uentryList_size (specParamNames)));
	}
      else if (uentryList_size (paramNames) > 0 
	       && !uentry_hasRealName (uentryList_getN (specParamNames, 0)))
	{
	  /* loaded from a library */
	}
      else
	{
	  realParams = TRUE;
	}
    }

  sRefSet_allElements (mods, sr)
    {
      if (sRef_isNothing (sr) || sRef_isSpecState (sr))
	{
	  ; /* should report on anything? */
	}
      else if (sRef_isInternalState (sr))
	{
	  if (!sRef_isModified (sr))
	    {
	      if (sRefSet_hasStatic (mods))
		{
		  ; /* okay */
		}
	      else
		{
		  if (optgenerror 
		      (FLG_MUSTMOD,
		       message
		       ("Function %s specified to modify internal state "
			"but no internal state is modified", 
			uentry_rawName (ue)),
		       uentry_whereLast (ue)))
		    {
		      uentry_showWhereSpecified (le);
		    }
		}
	    }
	}
      else 
	{
	  if (!sRef_isModified (sr))
	    {
	      cstring sname = realParams ? sRef_unparse (sr) : sRef_unparse (sr);
	      
	      if (fileloc_isLib (fl) && !realParams)
		{
		  voptgenerror 
		    (FLG_MUSTMOD,
		     message ("Suspect object listed (%q) in modifies "
			      "clause of %s not modified: %s", 
			      fileloc_unparse (fl),
			      uentry_rawName (ue),
			      sname),
		     uentry_whereLast (ue));
		}		
	      else
		{
		  if (optgenerror 
		      (FLG_MUSTMOD,
		       message ("Suspect object listed in modifies of %s "
				"not modified: %s", 
				uentry_rawName (ue),
				sname),
		       uentry_whereLast (ue)))
		    {
		      uentry_showWhereSpecified (le);
		    }
		}
	      cstring_free (sname);
	    }
	}
    } end_sRefSet_allElements;
}

void exprNode_checkMacroBody (/*@only@*/ exprNode e)
{
  if (!exprNode_isError (e))
    {
      uentry hdr;

      if (!(context_inFunctionLike () || context_inMacroConstant ()
	    || context_inMacroUnknown ()))
	{
	  llcontbug 
	    (message 
	     ("exprNode_checkMacroBody: not in macro function or constant: %q", 
	      context_unparse ()));
	  exprNode_free (e);
	  return;
	}

      hdr = context_getHeader ();
      
      if (e->kind == XPR_STMTLIST || e->kind == XPR_BODY)
	{
	  voptgenerror 
	    (FLG_MACROSTMT,
	     message 
	     ("Macro %q definition is statement list (recommend "
	      "do { ... } while (0) constuction to ensure multiple "
	      "statement macro is syntactic function)",
	      uentry_getName (hdr)),
	     fileloc_isDefined (e->loc) ? e->loc : g_currentloc);
	}
      
      if (context_inMacroConstant ())
	{
	  ctype t = uentry_getType (hdr);

	  uentry_setDefined (hdr, e->loc);
	  
	  if (!(exprNode_matchType (t, e)))
	    {
	      cstring uname = uentry_getName (hdr);

	      if (cstring_equal (uname, context_getTrueName ())
		  || cstring_equal (uname, context_getFalseName ()))
		{
		  /* 
		  ** We need to do something special to allow FALSE and TRUE
		  ** to be defined without reporting errors.  This is a tad
		  ** bogus, but otherwise lots of things would break.
		  */


		  llassert (ctype_isManifestBool (t));
		  /* Should also check type of e is a reasonable (?) bool type. */
		}
	      else 
		{
		  if (optgenerror 
		      (FLG_INCONDEFS,
		       message
		       ("Constant %q specified as %s, but defined as %s: %s",
			uentry_getName (hdr),
			ctype_unparse (t),
			ctype_unparse (e->typ),
			exprNode_unparse (e)),
		       e->loc))
		    {
		      uentry_showWhereSpecified (hdr);
		    }
		}

	      cstring_free (uname);
	    }
	  else
	    {
	      if (context_maybeSet (FLG_NULLSTATE)
		  && ctype_isUA(t) 
		  && ctype_isRealPointer (t)
		  && exprNode_isNullValue (e))
		{
		  uentry ue = usymtab_getTypeEntry (ctype_typeId (t));
		  sRef   sr = uentry_getSref (ue);
		  
		  if (!sRef_possiblyNull (sr))
		    {
		      vgenhinterror 
			(FLG_NULLSTATE,
			 message ("Constant %q of non-null type %s defined "
				  "as null: %s",
				  uentry_getName (hdr), ctype_unparse (t),
				  exprNode_unparse (e)),
			 message ("If %s can be null, add a /*@null@*/ "
				  "qualifer to its typedef.",
				  ctype_unparse (t)),
			 e->loc);
		    }
		  
		  uentry_mergeConstantValue (hdr, e->val);
		  e->val = multiVal_undefined;
		}
	    }
	}
      else if (context_inMacroFunction () || context_inMacroUnknown ())
	{
	  ctype rettype = context_getRetType ();

	  if (context_isMacroMissingParams ())
	    {
	      llassert (context_inMacroFunction ());

	      /*
	      ** # define newname oldname
	      **
	      ** newname is a function
	      ** specification of oldname should match
	      ** specification of newname.
	      */

	      if (!ctype_isFunction (e->typ))
		{
		  voptgenerror 
		    (FLG_INCONDEFS,
		     message ("Function %s defined by unparameterized "
			      "macro not corresponding to function",
			      context_inFunctionName ()),
		     e->loc);
		}
	      else
		{
		  uentry ue = exprNode_getUentry (e);

		  if (uentry_isValid (ue))
		    {
		      /*
		      ** Okay, for now --- should check for consistency
		      */
		      /*
		      ** uentry oldue = usymtab_lookup (cfname);
		      */

		      /* check var conformance here! */
		    }
		  else
		    {
		      voptgenerror
			(FLG_INCONDEFS,
			 message ("Function %s defined by unparameterized "
				  "macro not corresponding to function",
				  context_inFunctionName ()),
			 e->loc);
		    }
		  
		  e->typ = ctype_returnValue (e->typ);
		  rettype = e->typ; /* avoid aditional errors */
		}
	    }

	  if (ctype_isVoid (rettype) || ctype_isUnknown (rettype))
	    {
	     ; /* don't complain when void macros have values */
	    }	    
	  else if (!exprNode_matchType (rettype, e))
	    {
	      if (optgenerror 
		  (FLG_INCONDEFS,
		   message ("Function %q specified to return %s, "
			    "implemented as macro having type %s: %s",
			    uentry_getName (hdr),
			    ctype_unparse (rettype), ctype_unparse (e->typ),
			    exprNode_unparse (e)),
		   e->loc))
		{
		  uentry_showWhereSpecified (hdr);
		}
	    }
	  else
	    {
	      switch (e->kind)
		{
		  /* these expressions have values: */
		case XPR_PARENS: case XPR_ASSIGN: 
		case XPR_EMPTY: case XPR_VAR:
		case XPR_OP: case XPR_POSTOP: 
		case XPR_PREOP: case XPR_CALL: 
		case XPR_SIZEOFT: case XPR_SIZEOF: 
		case XPR_ALIGNOFT: case XPR_ALIGNOF: 
		case XPR_CAST: case XPR_FETCH: 
		case XPR_COMMA: case XPR_COND: 
		case XPR_ARROW:	case XPR_CONST:	
		case XPR_STRINGLITERAL:	case XPR_NUMLIT:
		case XPR_FACCESS: case XPR_OFFSETOF:

		  checkReturnTransfer (e, hdr);
		  break;

		  /* these expressions don't */
		case XPR_LABEL:
		case XPR_VAARG: case XPR_ITER: 
		case XPR_FOR: case XPR_FORPRED:
		case XPR_GOTO: case XPR_CONTINUE: 
		case XPR_BREAK: case XPR_RETURN:
		case XPR_NULLRETURN: case XPR_IF: 
		case XPR_IFELSE: case XPR_DOWHILE:
		case XPR_WHILE:	case XPR_STMT: 
		case XPR_STMTLIST: case XPR_SWITCH:
		case XPR_INIT: case XPR_BODY: 
		case XPR_NODE: case XPR_ITERCALL:
		case XPR_TOK: case XPR_CASE: 
		case XPR_FTCASE: case XPR_FTDEFAULT:
		case XPR_DEFAULT: case XPR_WHILEPRED:
		case XPR_BLOCK: case XPR_INITBLOCK:
		  if (optgenerror 
		      (FLG_INCONDEFS,
		       message ("Function %q specified to return %s, "
				"implemented as macro with no result: %s",
				uentry_getName (hdr),
				ctype_unparse (rettype), 
				exprNode_unparse (e)),
		       e->loc))
		    {
		      uentry_showWhereSpecified (hdr);
		    }
		}
	    }

	  usymtab_checkFinalScope (FALSE);
	}
      else
	{
	  llbug (message ("exprNode_checkMacroBody: not in macro function: %q", context_unparse ()));
	}

      exprNode_free (e);
    }

  context_exitFunction ();
  return;
}

void exprNode_checkFunctionBody (exprNode body)
{
  if (!exprNode_isError (body))
    {
      bool noret = context_getFlag (FLG_NORETURN);
      bool checkret = exprNode_mustEscape (body);

      if (!checkret 
	  && noret 
	  && !exprNode_errorEscape (body)
	  && context_inRealFunction ()
	  && ctype_isFunction (context_currentFunctionType ()))
	{
	  ctype tr = ctype_returnValue (context_currentFunctionType ());
	  
	  if (!ctype_isFirstVoid (tr)) 
	    {
	      if (ctype_isUnknown (tr))
		{
		  voptgenerror 
		    (FLG_NORETURN,
		     cstring_makeLiteral ("Path with no return in function declared to implicity return int"), 
		     g_currentloc);
		}
	      else
		{
		  voptgenerror 
		    (FLG_NORETURN,
		     message ("Path with no return in function declared to return %t", 
			      tr),
		     g_currentloc);
		}
	    }
	}

      /* drl added call*/
      exprNode_checkFunction (context_getHeader (), body);
      
      if (!checkret)
	{
	  context_returnFunction ();
	}
    }
}
/*drl modified */

extern constraintList implicitFcnConstraints;

void exprNode_checkFunction (/*@unused@*/ uentry ue, /*@only@*/ exprNode body)
{
  constraintList c, t;
 constraintList c2, fix;

 //  return;

 //  context_setFlag(FLG_ORCONSTRAINT, TRUE);
  exprNode_generateConstraints (body);
  
  c =   uentry_getFcnPreconditions (ue);
  DPRINTF(("function constraints\n"));
  DPRINTF (("\n\n\n\n\n\n\n"));

  context_enterInnerContext ();
  
   if (c)
     {

       DPRINTF ( (message ("Function preconditions are %s \n\n\n\n\n", constraintList_printDetailed (c) ) ) );
       
       t = reflectChanges (body->requiresConstraints, constraintList_copy (c) );
       body->requiresConstraints = constraintList_copy (t);

       c2  =  constraintList_copy (c);
       fix =  constraintList_makeFixedArrayConstraints (body->uses);
       c2  =  reflectChanges (c2, constraintList_copy(fix) );
       if ( context_getFlag (FLG_ORCONSTRAINT) )
	 {
	   t = reflectChangesOr (body->requiresConstraints, constraintList_copy (c2) );
	 }
       else
	 {
	   t = reflectChanges (body->requiresConstraints, constraintList_copy (c2) );
	 }
       body->requiresConstraints = constraintList_copy (t);
       
       DPRINTF ( (message ("The body has the required constraints: %s", constraintList_printDetailed (t) ) ) );
       t = constraintList_mergeEnsures (c, body->ensuresConstraints);

   body->ensuresConstraints = constraintList_copy (t);
   
   DPRINTF ( (message ("The body has the ensures constraints: %s", constraintList_printDetailed (t) ) ) );
     }

   if (c)
     {
       DPRINTF((message ("The Function %s has the preconditions %s", uentry_unparse(ue), constraintList_printDetailed(c) ) ) );
     }
   else
     {
       DPRINTF((message ("The Function %s has no preconditions", uentry_unparse(ue) ) ) );
     }

   if ( implicitFcnConstraints)
     {
          if (context_getFlag (FLG_IMPLICTCONSTRAINT) )
	      {
		body->requiresConstraints = reflectChanges (body->requiresConstraints, constraintList_copy (implicitFcnConstraints) );
	      }
     }
   
   constraintList_printError(body->requiresConstraints, g_currentloc);
   constraintList_printError(body->ensuresConstraints, g_currentloc);
   
   //   ConPrint (message ("Unable to resolve function constraints:\n%s", constraintList_printDetailed(body->requiresConstraints) ), g_currentloc);

   //   ConPrint (message ("LCLint has found function post conditions:\n%s", constraintList_printDetailed(body->ensuresConstraints) ), g_currentloc);
  
     //  printf ("The required constraints are:\n%s", constraintList_printDetailed(body->requiresConstraints) );
     //   printf ("The ensures constraints are:\n%s", constraintList_printDetailed(body->ensuresConstraints) );
   
   context_exitInnerPlain();
   /* exprNode_free (body); */
}

void exprChecks_checkEmptyMacroBody (void)
{
  uentry hdr;
  
  if (!(context_inFunctionLike () || context_inMacroConstant ()
	|| context_inMacroUnknown ()))
    {
      llcontbug 
	(message ("exprNode_checkEmptyMacroBody: not in macro function or constant: %q", 
		  context_unparse ()));
      return;
    }
  
  hdr = context_getHeader ();
  
  beginLine ();
  
  if (uentry_isFunction (hdr))
    {
      voptgenerror 
	(FLG_MACROEMPTY,
	 message 
	 ("Macro definition for %q is empty", uentry_getName (hdr)),
	 g_currentloc);

      usymtab_checkFinalScope (FALSE);
    }

  context_exitFunction ();
  return;
}

void exprNode_checkIterBody (/*@only@*/ exprNode body)
{
  context_exitAllClauses ();

  context_exitFunction ();
  exprNode_free (body);
}

void exprNode_checkIterEnd (/*@only@*/ exprNode body)
{
  context_exitAllClauses ();
  context_exitFunction ();
  exprNode_free (body);
}

static
bool checkModifyAuxAux (sRef s, exprNode f, sRef alias, exprNode err)
{
  bool hasMods = context_hasMods ();
  flagcode errCode = hasMods ? FLG_MODIFIES : FLG_MODNOMODS;

  if (exprNode_isDefined (f))
    {
      f->sets = sRefSet_insert (f->sets, s); 
    }

  if (context_getFlag (FLG_MODIFIES) 
      && (hasMods || context_getFlag (FLG_MODNOMODS)))
    {
      sRefSet mods = context_modList ();
      
      if (!sRef_canModify (s, mods))
	{
	  sRef rb = sRef_getRootBase (s);
	 
	  
	  if (sRef_isGlobal (rb))
	    {
	      if (!context_checkGlobMod (rb))
		{
		  		  return FALSE;
		}
	    }

	  if (sRef_isInvalid (alias) || sRef_sameName (s, alias))
	    {
	      if (sRef_isLocalVar (sRef_getRootBase (s)))
		{
		  voptgenerror 
		    (errCode,
		     message 
		     ("Undocumented modification of internal state (%q): %s", 
		      sRef_unparse (s), exprNode_unparse (err)), 
		     exprNode_isDefined (f) ? f->loc : g_currentloc);
		}
	      else
		{
		  if (sRef_isSystemState (s))
		    {
		      if (errCode == FLG_MODNOMODS) 
			{
			  if (context_getFlag (FLG_MODNOMODS))
			    {
			      errCode = FLG_MODFILESYSTEM;
			    }
			}
		      else
			{
			  errCode = FLG_MODFILESYSTEM;
			}
		    }

		  voptgenerror 
		    (errCode,
		     message ("Undocumented modification of %q: %s", 
			      sRef_unparse (s), exprNode_unparse (err)), 
		     exprNode_isDefined (f) ? f->loc : g_currentloc);
		}
	      
	      return TRUE;
	    }
	  else
	    {
	      if (sRef_isReference (s) && !sRef_isAddress (alias))
		{
		  voptgenerror 
		    (errCode,
		     message
		     ("Possible undocumented modification of %q through alias %q: %s", 
		      sRef_unparse (s),
		      sRef_unparse (alias),
		      exprNode_unparse (err)),
		     exprNode_isDefined (f) ? f->loc : g_currentloc);
		  return TRUE;
		}
	    }
	}
    }
  else
    {
      if (context_maybeSet (FLG_MUSTMOD))
	{
	  (void) sRef_canModify (s, context_modList ());
	}
      
      if (sRef_isRefsField (s))
	{
	  sRef_setModified (s);
	}
    }
  
  return FALSE;
}

static
bool checkModifyAux (sRef s, exprNode f, sRef alias, exprNode err)
{
  DPRINTF (("Check modify aux: %s", sRef_unparseFull (s)));

  if (sRef_isReference (s) && sRef_isObserver (s) 
      && context_maybeSet (FLG_MODOBSERVER))
    {	 
      cstring sname;
      
      if (sRef_isPointer (s)) 
	{
	  sRef base = sRef_getBase (s);
	  sname = sRef_unparse (base);
	}
      else 
	{
	  if (sRef_isAddress (s))
	    {
	      sRef p = sRef_constructPointer (s);
	      sname = sRef_unparse (p);
	    }
	  else
	    {
	      sname = sRef_unparse (s);
	    }
	}
      
      if (!sRef_isValid (alias) || sRef_sameName (s, alias))
	{
	  if (sRef_isMeaningful (s))
	    {
	      if (optgenerror 
		  (FLG_MODOBSERVER,
		   message ("Suspect modification of observer %s: %s", 
			    sname, exprNode_unparse (err)), 
		   exprNode_isDefined (f) ? f->loc : g_currentloc))
		{
		  sRef_showExpInfo (s);
		}
	    }
	  else
	    {
	      voptgenerror 
		(FLG_MODOBSERVER,
		 message ("Suspect modification of observer returned by "
			  "function call: %s", 
			  exprNode_unparse (err)), 
		 exprNode_isDefined (f) ? f->loc : g_currentloc);
	    }
	}
      else
	{
	  if (optgenerror
	      (FLG_MODOBSERVER,
	       message ("Suspect modification of observer %s through alias %q: %s", 
			sname, sRef_unparse (alias), exprNode_unparse (err)), 
	       exprNode_isDefined (f) ? f->loc : g_currentloc))
	    {
	      sRef_showExpInfo (s);
	    }
	}
      
      cstring_free (sname);
    }
  
  (void) checkModifyAuxAux (s, f, alias, err);
  return FALSE;
}

static
bool checkModifyValAux (sRef s, exprNode f, sRef alias, exprNode err)
{
  (void) checkModifyAuxAux (s, f, alias, err);
  return FALSE;
}

static
bool checkCallModifyAux (sRef s, exprNode f, sRef alias, exprNode err)
{
  bool result = FALSE;

  if (sRef_isObserver (s) && context_maybeSet (FLG_MODOBSERVER))
    {	 
      sRef p = sRef_isAddress (s) ? sRef_constructPointer (s) : s;
      cstring sname = sRef_unparse (p);

      if (!sRef_isValid (alias) || sRef_sameName (s, alias))
	{
	  if (sRef_isMeaningful (s))
	    {
	      result = optgenerror 
		(FLG_MODOBSERVER,
		 message ("Suspect modification of observer %s: %s", 
			  sname, exprNode_unparse (err)), 
		 exprNode_isDefined (f) ? f->loc : g_currentloc);
	    }
	  else
	    {
	      result = optgenerror 
		(FLG_MODOBSERVER,
		 message ("Suspect modification of observer returned by "
			  "function call: %s", 
			  exprNode_unparse (err)), 
		 exprNode_isDefined (f) ? f->loc : g_currentloc);
	    }
	}
      else
	{
	  result = optgenerror 
	    (FLG_MODOBSERVER,
	     message
	     ("Suspect modification of observer %s through alias %q: %s", 
	      sname, sRef_unparse (alias), exprNode_unparse (err)), 
	     exprNode_isDefined (f) ? f->loc : g_currentloc);
	}
      
      cstring_free (sname);
    }
  else if (context_maybeSet (FLG_MODIFIES))
    {
      if (!(sRef_canModifyVal (s, context_modList ())))
	{
	  sRef p = sRef_isAddress (s) ? sRef_constructPointer (s) : s;
	  cstring sname = sRef_unparse (p);
	  bool hasMods = context_hasMods ();
	  sRef rb = sRef_getRootBase (s);
	  flagcode errCode = hasMods ? FLG_MODIFIES : FLG_MODNOMODS;
	  bool check = TRUE;
	  
	  if (sRef_isGlobal (rb))
	    {
	      uentry ue = sRef_getUentry (rb);
	      
	      /* be more specific here! */
	      if (!uentry_isCheckedModify (ue))
		{
		  check = FALSE;
		}
	    }
	  
	  if (check)
	    {
	      if (!sRef_isValid (alias) || sRef_sameName (s, alias))
		{
		  if (sRef_isLocalVar (sRef_getRootBase (s)))
		    {
		      voptgenerror 
			(errCode,
			 message 
			 ("Undocumented modification of internal "
			  "state (%q) through call to %s: %s", 
			  sRef_unparse (s), exprNode_unparse (f),
			  exprNode_unparse (err)), 
			 exprNode_isDefined (f) ? f->loc : g_currentloc);
		    }
		  else
		    {
		      if (sRef_isSystemState (s))
			{
			  if (errCode == FLG_MODNOMODS) 
			    {
			      if (context_getFlag (FLG_MODNOMODS))
				{
				  errCode = FLG_MODFILESYSTEM;
				}
			    }
			  else
			    {
			      errCode = FLG_MODFILESYSTEM;
			    }
			}
		      
		      result = optgenerror 
			(errCode,
			 message ("Undocumented modification of %s "
				  "possible from call to %s: %s", 
				  sname,
				  exprNode_unparse (f),
				  exprNode_unparse (err)),
			 exprNode_isDefined (f) ? f->loc : g_currentloc);
		    }
		}
	      else
		{
		  result = optgenerror
		    (errCode,
		     message ("Undocumented modification of %s possible "
			      "from call to %s (through alias %q): %s", 
			      sname,
			      exprNode_unparse (f), 
			      sRef_unparse (alias), 
			      exprNode_unparse (err)),
		     exprNode_isDefined (f) ? f->loc : g_currentloc);
		}
	    }
	  cstring_free (sname);
	}
    }
  else
    {
      if (context_maybeSet (FLG_MUSTMOD))
	{
	  (void) sRef_canModifyVal (s, context_modList ());
	}
    }

  return result;
}

void exprNode_checkCallModifyVal (sRef s, exprNodeList args, exprNode f, exprNode err)
{
  s = sRef_fixBaseParam (s, args);
  sRef_aliasCheckPred (checkCallModifyAux, NULL, s, f, err);
}

void
exprChecks_checkExport (uentry e)
{
  if (context_checkExport (e))
    {
      fileloc fl = uentry_whereDeclared (e);
      
      if (fileloc_isHeader (fl) && !fileloc_isLib (fl) 
	  && !fileloc_isImport (fl) && !uentry_isStatic (e))
	{
	  if (uentry_isFunction (e) || 
	      (uentry_isVariable (e) && ctype_isFunction (uentry_getType (e))))
	    {
	      voptgenerror 
		(FLG_EXPORTFCN,
		 message ("Function exported, but not specified: %q", 
			  uentry_getName (e)),
		 fl);
	    }
	  else if (uentry_isExpandedMacro (e))
	    {
	      voptgenerror
		(FLG_EXPORTMACRO,
		 message ("Expanded macro exported, but not specified: %q", 
			  uentry_getName (e)),
		 fl);
	    }
	  else if (uentry_isVariable (e) && !uentry_isParam (e)) 
	    {
	      voptgenerror 
		(FLG_EXPORTVAR,
		 message ("Variable exported, but not specified: %q", 
			  uentry_getName (e)),
		 fl);
	    }
	  else if (uentry_isEitherConstant (e))
	    {
	      voptgenerror 
		(FLG_EXPORTCONST,
		 message ("Constant exported, but not specified: %q", 
			  uentry_getName (e)),
		 fl);
	    }
	  else if (uentry_isIter (e) || uentry_isEndIter (e))
	    {
	      voptgenerror 
		(FLG_EXPORTITER,
		 message ("Iterator exported, but not specified: %q", 
			  uentry_getName (e)),
		 fl);
	    }

	  else if (uentry_isDatatype (e))
	    {
	      ; /* error already reported */
	    }
	  else
	    {
	      BADEXIT;
	    }
	}
    }
}

static void checkSafeReturnExpr (/*@notnull@*/ exprNode e)
{
  ctype tr = ctype_returnValue (context_currentFunctionType ());
  ctype te = exprNode_getType (e);

  if (!ctype_forceMatch (tr, te) && !exprNode_matchLiteral (tr, e))
    {
      (void) gentypeerror
	(te, e, tr, exprNode_undefined,
	 message ("Return value type %t does not match declared type %t: %s",
		  te, tr, exprNode_unparse (e)),
	 e->loc);
    }
  else
    {
      sRef ret = e->sref;
      uentry rval = context_getHeader ();
      sRef resultref = uentry_getSref (rval);

      checkReturnTransfer (e, rval);

      if (!(sRef_isExposed (uentry_getSref (context_getHeader ()))
	    || sRef_isObserver (uentry_getSref (context_getHeader ())))
	  && (context_getFlag (FLG_RETALIAS) 
	      || context_getFlag (FLG_RETEXPOSE)))
	{
	  sRef base = sRef_getRootBase (ret);
	  ctype rtype = e->typ;

	  if (ctype_isUnknown (rtype))
	    {
	      rtype = tr;
	    }

	  if (ctype_isVisiblySharable (rtype))
	    {
	      if (context_getFlag (FLG_RETALIAS))
		{
		  sRef_aliasCheckPred (checkRefGlobParam, NULL, base, 
				       e, exprNode_undefined);
		}
	      
	      if (context_getFlag (FLG_RETEXPOSE) && sRef_isIReference (ret) 
		  && !sRef_isExposed (resultref) && !sRef_isObserver (resultref))
		{
		  sRef_aliasCheckPred (checkRepExposed, NULL, base, e, 
				       exprNode_undefined);
		}
	    }
	}
    }
}

