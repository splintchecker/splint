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
** aliasChecks.c
*/

# include "lclintMacros.nf"
# include "basic.h"
# include "aliasChecks.h"

static void checkStructTransfer (exprNode p_lhs, sRef p_slhs, exprNode p_rhs, sRef p_srhs,
				 fileloc p_loc, transferKind p_tt);
static void checkLeaveTrans (uentry p_actual, transferKind p_transferType);
static void checkTransfer (exprNode p_fexp, sRef p_fref,
			   exprNode p_texp, sRef p_tref, 
			   fileloc p_loc, transferKind p_transferType);
static void checkGlobTrans (uentry p_glob, transferKind p_type);

static ynm
  checkCompletelyDefined (exprNode p_fexp, sRef p_fref, 
			  exprNode p_texp, sRef p_tref,
			  bool p_topLevel, bool p_inUnion, bool p_directUnion,
			  fileloc p_loc, transferKind p_transferType, int p_depth,
			  bool p_report);

static /*@exposed@*/ sRef dependentReference (sRef p_sr);
static bool canLoseLocalReference (sRef p_sr, fileloc p_loc) ;

/* added DRL 8/19/200- */
static void
checkTransferNullTerminatedAux (sRef p_fref, exprNode p_fexp,
				/*@unused@*/ bool p_ffix,
		      sRef p_tref, exprNode p_texp, /*@unused@*/ bool p_tfix,
		      fileloc p_loc, transferKind p_transferType);
/*
** returns the most specific alkind
*/

alkind alkind_resolve (alkind a1, alkind a2)
{
  if (a1 == AK_UNKNOWN || a1 == AK_ERROR) return a2;
  if (a2 == AK_UNKNOWN || a2 == AK_ERROR || a2 == AK_LOCAL) return a1;
  if (a1 == AK_LOCAL) return a2;
  return a1;
}

/*
** tref <- fref
**
** transferType:
**   FCNRETURN   return fref; tref is return type
**   GLOBASSIGN  tref = fref; 
**   FCNPASS     call (fref) ; tref is the argument type
**
*/

static /*@only@*/ cstring
transferErrorMessage (transferKind transferType, alkind tkind) /*@*/ 
{
  switch (transferType)
    {
    case TT_FCNRETURN:
      return (message ("returned as %s", alkind_unparse (tkind)));
    case TT_DOASSIGN:
      return (message ("assigned to %s", alkind_unparse (tkind)));
    case TT_FIELDASSIGN:
      return (message ("assigned to %s", alkind_unparse (tkind)));
    case TT_GLOBINIT:
      return (message ("used as initial value for %s", 
		       alkind_unparse (tkind)));
    case TT_FCNPASS:
      return (message ("passed as %s param", alkind_unparse (tkind)));
    BADDEFAULT;
    }
  BADEXIT;
}

static cstring
transferErrorExpMessage (transferKind transferType, exkind tkind) /*@*/
{
  if (exkind_isUnknown (tkind))
    {
      switch (transferType)
	{
	case TT_FCNRETURN:
	  return (cstring_makeLiteral ("returned without qualification"));
	case TT_FIELDASSIGN:
	case TT_DOASSIGN:
	  return (cstring_makeLiteral ("assigned to unqualified reference"));
	case TT_FCNPASS:
	  return (cstring_makeLiteral ("passed without qualification"));
	case TT_GLOBINIT:
	  return (cstring_makeLiteral ("used as initial value for unqualified storage"));
	BADDEFAULT;
	}
    }
  else
    {
      switch (transferType)
	{
	case TT_FCNRETURN:
	  return (message ("returned as %s", exkind_unparse (tkind)));
	case TT_FIELDASSIGN:
	case TT_DOASSIGN:
	  return (message ("assigned to %s", exkind_unparse (tkind)));
	case TT_FCNPASS:
	  return (message ("passed as %s param", exkind_unparse (tkind)));
	  BADDEFAULT;
	}
    }

  BADEXIT;
}

static /*@observer@*/ cstring
transferNullMessage (transferKind transferType) /*@*/
{
  switch (transferType)
    {
    case TT_FCNRETURN:
      return (cstring_makeLiteralTemp ("returned as non-null"));
    case TT_DOASSIGN:
    case TT_FIELDASSIGN:
      return (cstring_makeLiteralTemp ("assigned to non-null"));
    case TT_GLOBINIT:
      return (cstring_makeLiteralTemp ("initialized to non-null"));
    case TT_FCNPASS:
      return (cstring_makeLiteralTemp ("passed as non-null param"));
    BADDEFAULT;
    }
  BADEXIT;
}

static /*@observer@*/ cstring
transferNTMessage (transferKind transferType) /*@*/
{
  switch (transferType)
    {
    case TT_FCNRETURN:
      return (cstring_makeLiteralTemp ("returned as nullterminated"));
    case TT_DOASSIGN:
    case TT_FIELDASSIGN:
      return (cstring_makeLiteralTemp ("assigned to nullterminated"));
    case TT_GLOBINIT:
      return (cstring_makeLiteralTemp ("initialized to nullterminated"));
    case TT_FCNPASS:
      return (cstring_makeLiteralTemp ("passed as nullterminated param"));
    BADDEFAULT;
    }
  BADEXIT;
}

static /*@dependent@*/ exprNode atFunction = exprNode_undefined;
static int atArgNo = 0;
static int atNumArgs = 0;

static cstring generateText (exprNode e1, exprNode e2, 
			     sRef tref, transferKind tt) 
   /*@*/
{
  if (tt == TT_DOASSIGN || tt == TT_GLOBINIT)
    {
      return (message ("%s = %s", exprNode_unparse (e2),
		       exprNode_unparse (e1)));
    }
  else if (tt == TT_FIELDASSIGN)
    {
      return (message ("%s = %s (field %q)",
		       exprNode_unparse (e2),
		       exprNode_unparse (e1),
		       sRef_unparse (tref)));
    }
  else if (tt == TT_FCNPASS)
    {
      return (message ("%s (%s%s%s)",
		       exprNode_unparse (atFunction),
		       (atArgNo == 1 ? cstring_undefined 
		: cstring_makeLiteralTemp ("..., ")),
		       exprNode_unparse (e1),
		       (atArgNo == atNumArgs ? cstring_undefined
			: cstring_makeLiteralTemp (", ..."))));
    }
  else
    {
      return (cstring_copy (exprNode_unparse (e1)));
    }
}

static /*@observer@*/ cstring
transferType_unparse (transferKind transferType) /*@*/
{
  switch (transferType)
    {
    case TT_FCNRETURN:
      return (cstring_makeLiteralTemp ("Returned"));
    case TT_DOASSIGN:
    case TT_FIELDASSIGN:
      return (cstring_makeLiteralTemp ("Assigned"));
    case TT_FCNPASS:
      return (cstring_makeLiteralTemp ("Passed"));
    case TT_GLOBINIT:
      return (cstring_makeLiteralTemp ("Initialized"));
    case TT_GLOBRETURN:
      return (cstring_makeLiteralTemp ("GLOB RETURN!"));
    case TT_GLOBPASS:
      return (cstring_makeLiteralTemp ("GLOB PASS!"));
    case TT_PARAMRETURN:
      return (cstring_makeLiteralTemp ("PARAM RETURN!"));
    case TT_LEAVETRANS:
      return (cstring_makeLiteralTemp ("LEAVE TRANS!"));
    BADDEFAULT;
    }
  BADEXIT;
}

static /*@observer@*/ cstring udError (sRef s)
{
  if (sRef_isDead (s))
    {
      return cstring_makeLiteralTemp ("released");
    }
  else if (sRef_isAllocated (s))
    {
      return cstring_makeLiteralTemp ("allocated but not defined");
    }
  else
    {
      return cstring_makeLiteralTemp ("undefined");
    }
}

static /*@only@*/ 
cstring defExpl (sRef s) /*@*/
{
  sRef rb = sRef_getRootBase (s);

  if (sRef_sameName (rb, s))
    {
      if (sRef_isAllocated (s))
	{
	  return cstring_makeLiteral (" (allocated only)");
	}
      return cstring_undefined;
    }
  else
    {
      return (message (" (%q is %s)", sRef_unparse (s), udError (s)));
    }
}

/*
** returns TRUE if fref is completely defined.
** if !report, returns TRUE unless error is at the deep level.
*/

static ynm
  checkCompletelyDefined (exprNode fexp, sRef fref, 
			  exprNode texp, sRef tref, 
			  bool topLevel, bool inUnion, bool directUnion,
			  fileloc loc, transferKind transferType,
			  int depth, bool report)
{
  ctype ct;
  alkind fkind = sRef_getAliasKind (fref);
  alkind tkind = sRef_getAliasKind (tref);
  
  if (depth > MAXDEPTH)
    {
      llquietbug
	(message 
	 ("Check definition limit exceeded, checking %q. "
	  "This either means there is a variable with at least "
	  "%d indirections apparent in the program text, or "
	  "there is a bug in LCLint.",
	  sRef_unparse (fref),
	  MAXDEPTH));

      return YES;
    }

  if (!sRef_isKnown (fref))
    {
      return YES;
    }

  if (alkind_isStack (fkind))
    {
      ctype rt = ctype_realType (sRef_getType (tref));

      if (ctype_isMutable (rt) && !ctype_isSU (rt))
	{
	  if (transferType == TT_PARAMRETURN)
	    {
	      if (optgenerror 
		  (FLG_RETSTACK,
		   message
		   ("Stack-allocated storage %qreachable from parameter %q",
		    sRef_unparseOpt (fref),
		    sRef_unparse (sRef_getRootBase (fref))), 
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	    }
	  else if (transferType == TT_GLOBRETURN)
	    {
	      if (optgenerror 
		  (FLG_RETSTACK,
		   message
		   ("Stack-allocated storage %qreachable from global %q",
		    sRef_unparseOpt (fref),
		    sRef_unparse (sRef_getRootBase (fref))),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	    }
	  else if (transferType == TT_FCNRETURN)
	    {
	      if (optgenerror 
		  (FLG_RETSTACK,
		   message 
		   ("Stack-allocated storage %qreachable from return value: %s",
		    sRef_unparseOpt (fref), 
		    exprNode_unparse (fexp)),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	    }
	  else
	    {
	      /* no error */
	    }
	}
    }

  if (!topLevel)
    {
      if ((sRef_isObserver (fref) && !sRef_isObserver (tref))
	  || (sRef_isExposed (fref) && !(sRef_isObserver (tref) 
					 || sRef_isExposed (tref))))
	{
	  flagcode code = (sRef_isObserver (fref) 
			   ? FLG_OBSERVERTRANS : FLG_EXPOSETRANS);

	  if (!sRef_isStateLive (fref))
	    {
	      ; /* no error (will be a definition error) */
	    }
	  else if (transferType == TT_DOASSIGN
		   || transferType == TT_FIELDASSIGN
		   || transferType == TT_GLOBINIT
		   || transferType == TT_FCNPASS)
	    {
	      ; /* no error */
	    }
	  else if (transferType == TT_PARAMRETURN)
	    {
	      if (optgenerror 
		  (code,
		   message
		   ("%s storage %qreachable from %s parameter",
		    exkind_capName (sRef_getExKind (fref)),
		    sRef_unparseOpt (fref), 
		    exkind_unparseError (sRef_getExKind (tref))),
		   loc))
		{
		  sRef_showExpInfo (fref);
		  sRef_setExKind (fref, XO_UNKNOWN, loc);
		}
	    }
	  else if (transferType == TT_LEAVETRANS)
	    {
	      ;
	    }
	  else if (transferType == TT_GLOBINIT)
	    {
	      if (optgenerror 
		  (code,
		   message 
		   ("%s storage %qreachable from %s initial value",
		    exkind_capName (sRef_getExKind (fref)),
		    sRef_unparseOpt (fref), 
		    exkind_unparseError (sRef_getExKind (tref))),
		   loc))
		{
		  sRef_showExpInfo (fref);
		  sRef_setExKind (fref, XO_UNKNOWN, loc);
		}
	    }
	  else if (transferType == TT_GLOBRETURN)
	    {
	      if (optgenerror 
		  (code,
		   message
		   ("%s storage %qreachable from %s global",
		    exkind_capName (sRef_getExKind (fref)),
		    sRef_unparseOpt (fref), 
		    exkind_unparseError (sRef_getExKind (tref))),
		   loc))
		{
		  sRef_showExpInfo (fref);
		  sRef_setExKind (fref, XO_UNKNOWN, loc);
		}
	    }
	  else if (transferType == TT_FCNRETURN)
	    {
	      if (optgenerror 
		  (code,
		   message 
		   ("%s storage %qreachable from %s return value",
		    exkind_capName (sRef_getExKind (fref)),
		    sRef_unparseOpt (fref), 
		    exkind_unparseError (sRef_getExKind (tref))),
		   loc))
		{
		  sRef_showExpInfo (fref);
		  sRef_setExKind (fref, XO_UNKNOWN, loc);
		}
	    }
	  else
	    {
	      llcontbug (message ("Transfer type: %s", 
				  transferType_unparse (transferType)));
	      
	      if (optgenerror 
		  (code,
		   message
		   ("%s storage %qreachable from %s return value",
		    exkind_capName (sRef_getExKind (fref)),
		    sRef_unparseOpt (fref), 
		    exkind_unparseError (sRef_getExKind (tref))),
		   loc))
		{
		  sRef_showExpInfo (fref);
		  sRef_setExKind (fref, XO_UNKNOWN, loc);
		}
	    }

	}
      
      if (!alkind_compatible (fkind, tkind))
	{
	  if (fkind == AK_UNKNOWN && !sRef_isStateLive (fref))
	    {
	      ; /* no error (will be a definition error) */
	    }
	  else if (transferType == TT_DOASSIGN)
	    {
	      ; /* no error */
	    }
	  else if (transferType == TT_FCNPASS)
	    {
	      if (alkind_isKnown (sRef_getAliasKind (tref)))
		{
		  if (optgenerror 
		      (FLG_COMPMEMPASS,
		       message
		       ("Storage %qreachable from passed parameter "
			"is %s (should be %s): %s",
			sRef_unparseOpt (fref), 
			alkind_unparse (sRef_getAliasKind (fref)),
			alkind_unparse (sRef_getAliasKind (tref)),
			exprNode_unparse (fexp)),
		       loc))
		    {
		      sRef_showAliasInfo (fref);
		    }
		}
	    }
	  else if (transferType == TT_PARAMRETURN)
	    {
	      bool noerror = FALSE;

	      if (alkind_isDependent (sRef_getAliasKind (fref)))
		{
		  if (canLoseLocalReference (fref, loc))
		    {
		      noerror = TRUE;
		    }
		}

	      if (!noerror
		  && optgenerror 
		  (FLG_COMPMEMPASS,
		   message
		   ("Storage %qreachable from parameter is %s (should be %s)",
		    sRef_unparseOpt (fref), 
		    alkind_unparse (sRef_getAliasKind (fref)),
		    alkind_unparse (sRef_getAliasKind (tref))),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	      }
	  else if (transferType == TT_LEAVETRANS)
	    {
	      if (optgenerror 
		  (FLG_COMPMEMPASS,
		   message
		   ("Storage %qreachable from temporary reference is %s "
		    "at scope exit (should be %s)",
		    sRef_unparseOpt (fref), 
		    alkind_unparse (sRef_getAliasKind (fref)),
		    alkind_unparse (sRef_getAliasKind (tref))),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	      }
	  else if (transferType == TT_GLOBRETURN)
	    {
	      if (optgenerror 
		  (FLG_COMPMEMPASS,
		   message
		   ("Storage %qreachable from global is %s (should be %s)",
		    sRef_unparseOpt (fref), 
		    alkind_unparse (sRef_getAliasKind (fref)),
		    alkind_unparse (sRef_getAliasKind (tref))),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	    }
	  else if (transferType == TT_FCNRETURN)
	    {
	      if (optgenerror 
		  (FLG_COMPMEMPASS,
		   message 
		   ("Storage %qreachable from return value is %s (should be %s)",
		    sRef_unparseOpt (fref), 
		    alkind_unparse (sRef_getAliasKind (fref)),
		    alkind_unparse (sRef_getAliasKind (tref))),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	    }
	  else if (transferType == TT_GLOBINIT)
	    {
	      if (optgenerror 
		  (FLG_COMPMEMPASS,
		   message 
		   ("Storage %qreachable from initial value is %s (should be %s)",
		    sRef_unparseOpt (fref), 
		    alkind_unparse (sRef_getAliasKind (fref)),
		    alkind_unparse (sRef_getAliasKind (tref))),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	    }
	  else
	    {
	      llcontbug (message ("Transfer type: %s", 
				  transferType_unparse (transferType)));
	      
	      if (optgenerror 
		  (FLG_COMPMEMPASS,
		   message
		   ("Storage %qreachable from return value is %s (should be %s)",
		    sRef_unparseOpt (fref), 
		    alkind_unparse (sRef_getAliasKind (fref)),
		    alkind_unparse (sRef_getAliasKind (tref))),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	    }
	}

      if (sRef_isDead (fref))
	{
	  if (directUnion)
	    {
	      return NO;
	    }

	  if (transferType == TT_PARAMRETURN)
	    {
	      if (optgenerror 
		  (FLG_USERELEASED,
		   message 
		   ("Released storage %q reachable from parameter at return point",
		    sRef_unparse (fref)),
		   loc))
		{
		  sRef_showStateInfo (fref);
		  return YES;
		}
	      }
	  else if (transferType == TT_LEAVETRANS)
	    {
	      if (optgenerror 
		  (FLG_USERELEASED,
		   message ("Released storage %q reachable from temporary "
			    "reference at scope exit",
			    sRef_unparse (fref)),
		   loc))
		{
		  sRef_showStateInfo (fref);
		  return YES;
		}
	      }
	  else if (transferType == TT_GLOBRETURN)
	    {
	      if (optgenerror 
		  (FLG_GLOBSTATE,
		   message ("Released storage %q reachable from global",
			    sRef_unparse (fref)),
		   loc))
		{
		  sRef_showStateInfo (fref);
		  return YES;
		}
	    }
	  else if (transferType == TT_FCNPASS)
	    {
	      if (optgenerror 
		  (FLG_USERELEASED,
		   message ("Released storage %q reachable from passed parameter",
			    sRef_unparse (fref)),
		   loc))
		{
		  sRef_showStateInfo (fref);
		  return YES;
		}
	    }
	  else
	    {
	      if (optgenerror 
		  (FLG_USERELEASED,
		   message ("Released storage %q reachable from parameter",
			    sRef_unparse (fref)),
		   loc))
		{
		  sRef_showStateInfo (fref);
		  return YES;
		}
	    }
	}
    }

  if (!topLevel 
      && sRef_possiblyNull (fref) 
      && !sRef_perhapsNull (tref) 
      && ctype_isRealPointer (sRef_getType (tref))
      && !usymtab_isGuarded (fref))
    {
      if (transferType == TT_FCNRETURN)
	{
	  if (optgenerror 
	      (FLG_NULLRET, 
	       message ("%q storage %qderivable from return value: %s", 
			cstring_capitalize (sRef_nullMessage (fref)),
			sRef_unparseOpt (fref),
			exprNode_unparse (fexp)),
	       loc))
	    {
	      sRef_showNullInfo (fref);
	      sRef_setNullError (fref);
	    }
	}
      else if (transferType == TT_GLOBRETURN || transferType == TT_PARAMRETURN)
	{
	  if (optgenerror 
	      (FLG_NULLSTATE,
	       message 
	       ("Function returns with %s storage derivable from %q %q", 
		sRef_nullMessage (fref),
		cstring_makeLiteral ((transferType == TT_GLOBRETURN) 
				     ? "global" : "parameter"),
		sRef_unparse (fref)),
	       loc))
	    {
	      sRef_showNullInfo (fref);
	      sRef_setNullError (fref);
	    }
	}
      else if (transferType == TT_GLOBPASS)
	{
	  if (optgenerror
	      (FLG_NULLPASS,
	       message ("Function called with %s storage "
			"derivable from global %q", 
			sRef_nullMessage (fref),
			sRef_unparse (fref)),
	       loc))
	    {
	      sRef_showNullInfo (fref);
	      sRef_setNullError (fref);
	    }
	}
      else if (transferType == TT_FCNPASS)
	{
	  if (optgenerror
	      (FLG_NULLSTATE,
	       message ("%q storage %qderivable from parameter %q", 
			cstring_capitalize (sRef_nullMessage (fref)),
			sRef_unparseOpt (fref),
			generateText (fexp, exprNode_undefined, 
				      sRef_undefined, TT_FCNPASS)),
	       loc))
	    {
	      sRef_showNullInfo (fref);
	      sRef_setNullError (fref);
	    }
	}
      else
	{
	  llassert (transferType == TT_DOASSIGN
		    || transferType == TT_GLOBINIT
		    || transferType == TT_LEAVETRANS);
	}
    }

  if (sRef_isRelDef (tref) 
      || sRef_isPartial (tref) 
      || sRef_isAllocated (tref)
      || sRef_isStateSpecial (tref))
    {
      /* should check fref is allocated? */
      return YES;
    }

  ct = ctype_realType (sRef_getType (fref));

  if (!(sRef_isAnyDefined (fref) 
	|| sRef_isPdefined (fref)
	|| sRef_isAllocated (fref)
	|| sRef_isStateUnknown (fref)))
    {
      if (transferType == TT_GLOBRETURN)
	{
	  if (report
	      && optgenerror 
	      (FLG_COMPDEF,
	       message ("Function returns with global %q not "
			"completely defined%q",
			sRef_unparse (sRef_getRootBase (fref)),
			defExpl (fref)),
	       loc))
	    {
	      sRef_showStateInfo (fref);
	      sRef_setDefined (fref, loc);
	    }
	}
      else if (transferType == TT_GLOBPASS)
	{
	  if (report &&
	      optgenerror 
	      (FLG_COMPDEF,
	       message 
	       ("Function called with global %q not completely defined%q",
		sRef_unparse (sRef_getRootBase (fref)),
		defExpl (fref)),
	       loc))
	    {
	      sRef_showStateInfo (fref);
	      sRef_setDefined (fref, loc);
	    }
	}
      else if (transferType == TT_PARAMRETURN)
	{
	  if (report && !topLevel
	      && optgenerror 
	      (FLG_COMPDEF,
	       message ("Function returns storage %q reachable from parameter not "
			"completely defined%q",
			sRef_unparse (sRef_getRootBase (fref)),
			defExpl (fref)),
	       loc))
	    {
	      sRef_showStateInfo (fref);
	      sRef_setDefined (fref, loc);
	    }
	}
      else if (transferType == TT_LEAVETRANS)
	{
	  if (report && !topLevel
	      && optgenerror 
	      (FLG_COMPDEF,
	       message ("Scope exits with storage %q reachable from "
			"temporary reference not completely defined%q",
			sRef_unparse (sRef_getRootBase (fref)),
			defExpl (fref)),
	       loc))
	    {
	      sRef_showStateInfo (fref);
	      sRef_setDefined (fref, loc);
	    }
	}
      else 
	{
	  if (transferType != TT_DOASSIGN
	      && (!(sRef_isNew (fref) || sRef_isType (fref))))
	    {
	      if (report)
		{
		  if (sRef_isDead (fref))
		    {
		      if (optgenerror 
			  (FLG_USERELEASED,
			   message ("%s storage %qwas released: %q",
				    transferType_unparse (transferType),
				    sRef_unparseOpt (fref), 
				    generateText (fexp, texp, tref, transferType)),
			   loc))
			{
			  sRef_showStateInfo (fref);
			}
		    }
		  else 
		    {
		      if (optgenerror 
			  (FLG_COMPDEF,
			   message 
			   ("%s storage %qnot completely defined%q: %q",
			    transferType_unparse (transferType),
			    sRef_unparseOpt (sRef_getRootBase (fref)), 
			    defExpl (fref),
			    generateText (fexp, texp, tref, transferType)),
			   loc))
			{
			  sRef rb = sRef_getRootBase (fref);
			  sRef_showStateInfo (fref);
			  sRef_setDefinedComplete (rb, loc);
			}
		    }
		}
	    }
	  else
	    {

	      if (sRef_isAllocated (fref) && sRef_isValid (tref) 
		  && (transferType == TT_DOASSIGN))
		{
		  sRef_setAllocatedComplete (tref, loc);
		}
	      return YES;
	    }
	}

      return NO;
    }
  
  if (ctype_isUnknown (ct))
    {
      return YES;
    }
  else if (ctype_isPointer (ct))
    {
      ctype tct = ctype_realType (sRef_getType (tref));

      if (sRef_isStateUnknown (fref))
	{
	  return NO;
	}
      else
	{
	  if (ctype_isAP (tct) || ctype_isUnknown (tct))
	    {
	      sRef fptr = sRef_constructDeref (fref);
	      sRef tptr = sRef_constructDeref (tref);

	      return (checkCompletelyDefined (fexp, fptr, texp, tptr,
					      FALSE, inUnion, FALSE, loc, 
					      transferType, depth + 1, report));
	    }
	  else
	    {
	      return YES;
	    }
	}
    }
  else if (ctype_isArray (ct))
    {
      return YES;
    }
  else if (ctype_isStruct (ct))
    {
      ctype tct = ctype_realType (sRef_getType (tref));

      if (ctype_match (ct, tct))
	{
	  bool isOk = TRUE;
	  bool hasOneDefined = FALSE;
	  cstringSList badFields = cstringSList_undefined;
	  
	  if (sRef_isStateUnknown (fref) || sRef_isAllocated (tref)) 
	    {
	      return YES;
	    }
	  
	  if (sRef_isPdefined (fref) || sRef_isAnyDefined (fref))
	    {
	      sRefSet_realElements (sRef_derivedFields (fref), sr)
		{
		  bool thisField;
		  
		  hasOneDefined = TRUE;
		  
		  if (sRef_isField (sr))
		    {
		      cstring fieldname = sRef_getField (sr);
		      sRef fldref = sRef_makeField (tref, fieldname);
		      bool shouldCheck = !sRef_isRecursiveField (fldref);
			
		      if (shouldCheck)
			{
			  thisField = 
			    ynm_toBoolRelaxed 
			      (checkCompletelyDefined (fexp, sr, texp, fldref,
						       FALSE, inUnion, FALSE, loc, 
						       transferType, depth + 1, 
						       FALSE));
			}
		      else
			{
			  thisField = TRUE;
			}
		      
		      if (!thisField)
			{
			  isOk = FALSE;
			  badFields = cstringSList_add (badFields,
							sRef_getField (sr));
			}
		    }
		} end_sRefSet_realElements;
	    }
	  else if (sRef_isAllocated (fref))
	    {
	      /*
	      ** for structures, each field must be completely defined
	      */
	      
	      uentryList fields = ctype_getFields (ct);
	      
	      uentryList_elements (fields, ue)
		{
		  bool thisField;
		  cstring name = uentry_getRealName (ue);
		  sRef ffield = sRef_makeField (fref, name);
		  sRef tfield = sRef_makeField (tref, name);
		  bool shouldCheck = !sRef_isRecursiveField (tfield);
		  
		  if (!shouldCheck)
		    {
		      thisField = TRUE;
		    }
		  else
		    {
		      thisField = ynm_toBoolRelaxed
			(checkCompletelyDefined (fexp, ffield, texp, tfield,
						 FALSE, inUnion, FALSE,
						 loc, transferType,
						 depth + 1, FALSE));
		    }
		  
		  if (!thisField)
		    {
		      isOk = FALSE;
		      badFields = cstringSList_add (badFields, uentry_rawName (ue));
		    }
		  else
		    {
		      hasOneDefined = TRUE;
		    }
		} end_uentryList_elements;
	    }
	  else
	    {
	      ;
	    }
	  
	  if (!isOk && (!inUnion || hasOneDefined))
	    {
	      if (transferType == TT_GLOBRETURN)
		{
		  if (optgenerror
		      (FLG_COMPDEF,
		       message ("Global storage %q contains %d undefined field%p "
				"when call returns: %q",
				sRef_unparse (fref),
				cstringSList_size (badFields),
				cstringSList_unparseAbbrev (badFields)),
		       loc))
		    {
		      sRef_setDefined (fref, loc);
		    }
		}
	      else if (transferType == TT_GLOBPASS)
		{
		  if (optgenerror
		      (FLG_COMPDEF,
		       message ("Global storage %q contains %d undefined field%p "
				"before call: %q",
				sRef_unparse (fref),
				cstringSList_size (badFields),
				cstringSList_unparseAbbrev (badFields)),
		       loc))
		    {
		      sRef_setDefined (fref, loc);
		    }
		}
	      else if (transferType == TT_PARAMRETURN)
		{
		  if (optgenerror
		      (FLG_COMPDEF,
		       message ("Storage %qreachable from parameter "
				"contains %d undefined field%p: %q",
				sRef_unparseOpt (fref),
				cstringSList_size (badFields),
				cstringSList_unparseAbbrev (badFields)),
		       loc))
		    {
		      sRef_setDefined (fref, loc);
		    }
		}
	      else if (transferType == TT_LEAVETRANS)
		{
		  /* no error */
		}
	      else
		{
		  if (optgenerror
		      (FLG_COMPDEF,
		       message ("%s storage %qcontains %d undefined field%p: %q",
				transferType_unparse (transferType),
				sRef_unparseOpt (fref),
				cstringSList_size (badFields),
				cstringSList_unparseAbbrev (badFields)),
		       loc))
		    {
		      sRef_setDefined (fref, loc);
		    }
		}
	    }
	  
	  cstringSList_free (badFields);
	  
	  if (inUnion)
	    {
	      if (directUnion)
		{
		  return (ynm_fromBool (hasOneDefined));
		}
	      else
		{
		  return (MAYBE);
		}
	    }
	  else
	    {
	      return (ynm_fromBool (!report || isOk));
	    }
	}
      else
	{
	  return YES;
	}
    }
  else if (ctype_isUnion (ct))
    {
      if (sRef_isStateUnknown (fref) || sRef_isAllocated (tref)) 
	{
	  return YES;
	}
      else 
	{
	  ctype tct = ctype_realType (sRef_getType (tref));
	  
	  if (ctype_isKnown (tct) && ctype_match (ct, tct))
	    {
	      cstringSList goodFields = cstringSList_new ();
	      bool isOk = FALSE;
	      int nelements = sRefSet_size (sRef_derivedFields (fref));	      

	      /*
              ** for unions, at least one field must be completely defined
	      */
	      
	      if (sRef_isPdefined (fref) || sRef_isAnyDefined (fref))
		{
		  isOk = TRUE;
		}
	      
	      sRefSet_realElements (sRef_derivedFields (fref), sr)
		{
		  bool thisField;
		  
		  if (sRef_isField (sr))
		    {
		      sRef fldref = sRef_makeField (tref, sRef_getField (sr));
		      
		      thisField = ynm_toBoolStrict 
			(checkCompletelyDefined 
			 (fexp, sr, texp, fldref, FALSE, inUnion, 
			  (nelements > 1 ? TRUE : FALSE),
			  loc, transferType, depth + 1, FALSE));
		      
		      if (thisField)
			{
			  goodFields = cstringSList_add 
			    (goodFields, sRef_getField (sr));
			}
		    }
		} end_sRefSet_realElements;
	      
	      if (cstringSList_empty (goodFields) 
		  && !isOk 
		  && context_getFlag (FLG_UNIONDEF))
		{
		  if (!inUnion)
		    {
		      if (transferType == TT_PARAMRETURN)
			{
			  voptgenerror 
			    (FLG_UNIONDEF,
			     message ("Union %q reachable from parameter has "
				      "no defined field",
				      sRef_unparse (fref)),
			     loc);
			}
		      else if (transferType == TT_LEAVETRANS)
			{
			  voptgenerror 
			    (FLG_UNIONDEF,
			     message ("Union %q has no defined field at scope exit",
				      sRef_unparse (fref)),
			     loc);
			}
		      else if (transferType == TT_DOASSIGN
			       || transferType == TT_FIELDASSIGN
			       || transferType == TT_GLOBINIT)
			{
			  ; /* no error */
			}
		      else
			{
			  voptgenerror 
			    (FLG_UNIONDEF,
			     message ("%s union %q has no defined field",
				      transferType_unparse (transferType),
				      sRef_unparse (fref)),
			     loc);
			}
		    }
		  isOk = FALSE;
		}
	      
	      cstringSList_free (goodFields);
	      return ynm_fromBool (!report || isOk);
	    }
	}
    }
  else
    {
      ;
    }

  return YES;
}

/*
** fref is being free'd
*/

typedef enum {
  DSC_GLOB, DSC_LOCAL, DSC_PARAM, DSC_STRUCT
  } dscCode;

static /*@observer@*/ cstring dscCode_unparse (dscCode desc) /*@*/
{
  switch (desc)
    {
    case DSC_GLOB:
      return cstring_makeLiteralTemp ("killed global");
    case DSC_LOCAL:
      return cstring_makeLiteralTemp ("variable declared in this scope");
    case DSC_PARAM:
      return cstring_makeLiteralTemp ("released storage");
    case DSC_STRUCT:
      return cstring_makeLiteralTemp ("released structure parameter");
    }

  BADEXIT;
}

static bool 
  checkCompletelyDestroyed (exprNode p_fexp, sRef p_fref, bool p_topLevel, 
			    fileloc p_loc, int p_depth, dscCode p_desc);

bool checkGlobalDestroyed (sRef fref, fileloc loc)
{
  return (checkCompletelyDestroyed (exprNode_undefined, fref, TRUE,
				    loc, 0, DSC_GLOB));
}

void checkLocalDestroyed (sRef fref, fileloc loc)
{
  if (sRef_isObserver (fref) || sRef_isExposed (fref)
      || sRef_isPartial (fref))
    {
      ;
    }
  else
    {
      (void) checkCompletelyDestroyed (exprNode_undefined, fref, TRUE,
				       loc, 0, DSC_LOCAL);
    }
}

void checkStructDestroyed (sRef fref, fileloc loc)
{
  if (sRef_isObserver (fref) || sRef_isExposed (fref)
      || sRef_isPartial (fref))
    {
      ;
    }
  else
    {
      (void) checkCompletelyDestroyed (exprNode_undefined, fref, TRUE, loc, 0, DSC_STRUCT);
    }
}

static bool
  checkCompletelyDestroyed (exprNode fexp, sRef fref, bool topLevel,
			    fileloc loc, int depth,
			    dscCode desc)
{
  ctype ct;
  
  if (depth > MAXDEPTH)
    {
      llquietbug (message ("checkCompletelyDestroyed: too deep: %s / %q", 
			   exprNode_unparse (fexp),
			   sRef_unparseFull (fref)));
      return TRUE;
    }

  if (!sRef_isKnown (fref)) return TRUE;
  if (usymtab_isProbableNull (fref)) return TRUE;
  if (!context_getFlag (FLG_COMPDESTROY)) return TRUE;
  if (!context_getFlag (FLG_MUSTFREE)) return TRUE;
  
  ct = ctype_realType (sRef_getType (fref));

  if (!topLevel)
    {
      bool error = FALSE;

      if (sRef_isFresh (fref) || sRef_isOnly (fref))
	{
	  error = TRUE;
	  
	  if (sRef_isDead (fref) 
	      || sRef_isUnuseable (fref)
	      || sRef_definitelyNull (fref)
	      || sRef_isObserver (fref) 
	      || sRef_isExposed (fref))
	    {
	      error = FALSE;
	    }
	}
      
      if (error)
	{
	  if (sRef_isPossiblyDead (fref) || sRef_isRelDef (fref))
	    {
	      if (exprNode_isDefined (fexp))
		{
		  voptgenerror2 
		    (FLG_COMPDESTROY, FLG_STRICTDESTROY,
		     message ("Only storage %q (type %s) derived from %s "
			      "may not have been released: %s",
			      sRef_unparse (fref), 
			      ctype_unparse (sRef_getType (fref)),
			      dscCode_unparse (desc),
			      exprNode_unparse (fexp)),
		     loc);
		}
	      else
		{
		  voptgenerror2 
		    (FLG_COMPDESTROY, FLG_STRICTDESTROY,
		     message 
		     ("Only storage %q (type %s) derived from %s "
		      "may not have been released",
		      sRef_unparse (fref), 
		      ctype_unparse (sRef_getType (fref)),
		      dscCode_unparse (desc)),
		     loc);
		}
	      
	      sRef_kill (fref, loc); /* prevent further errors */
	    }
	  else 
	    {
	      if (sRef_isStateUndefined (fref))
		{
		  return TRUE;
		}
	      else
		{
		  if (exprNode_isDefined (fexp))
		    {
		      voptgenerror 
			(FLG_COMPDESTROY,
			 message ("Only storage %q (type %s) derived from %s "
				  "is not released (memory leak): %s",
				  sRef_unparse (fref),
				  ctype_unparse (sRef_getType (fref)),  
				  dscCode_unparse (desc),
				  exprNode_unparse (fexp)),
			 loc);
		    }
		  else
		    {
		      voptgenerror 
			(FLG_COMPDESTROY,
			 message ("Only storage %q (type %s) derived from %s "
				  "is not released (memory leak)",
				  sRef_unparse (fref),
				  ctype_unparse (sRef_getType (fref)),
				  dscCode_unparse (desc)),
			 loc);
		    }
		}
	    }

	  return FALSE;
	}
      
      if (sRef_isAnyDefined (fref) || sRef_isDead (fref)
	  || (sRef_isPdefined (fref) 
	      && sRefSet_isEmpty (sRef_derivedFields (fref))))
	{
	  return TRUE;
	}
    }
  
  if (ctype_isPointer (ct))
    {
      sRef fptr = sRef_constructDeadDeref (fref);
      bool res = checkCompletelyDestroyed (fexp, fptr, FALSE, loc,
					   depth + 1, desc);
      
      return res;
    }
  else if (ctype_isArray (ct))
    {
      if ((sRef_isStateUnknown (fref) || sRef_isAllocated (fref))
	  && !sRef_hasDerived (fref))
	{
	  /*
	  ** Bogosity necessary to prevent infinite depth.
	  */

	  return FALSE;
	}
      else
	{
	  sRef farr = sRef_constructDeadDeref (fref);
	  
	  return (checkCompletelyDestroyed (fexp, farr, FALSE, loc, 
					    depth + 1, desc));
	}
    }
  else if (ctype_isStruct (ct))
    {
      /*
      ** for structures, each field must be completely destroyed
      */

      bool isOk = TRUE;
      uentryList fields = ctype_getFields (ct);
      
      if (depth >= MAXDEPTH)
	{
	  llquietbug (message ("checkCompletelyDestroyed (fields): too deep: %s / %q", 
			       exprNode_unparse (fexp),
			       sRef_unparseFull (fref)));
			      
	  return TRUE;
	}
      else
	{
	  uentryList_elements (fields, ue)
	    {
	      sRef field = sRef_makeField (fref, uentry_rawName (ue));
	      
	      /*
	      ** note order of && operands --- want to report multiple errors
	      */
	      
	      isOk = (checkCompletelyDestroyed (fexp, field, FALSE, loc,
						depth + 1, desc)
		      && isOk);
	    } end_uentryList_elements;
	}

      return isOk;
    }
  else
    {
      return TRUE;
    }
}

void
checkReturnTransfer (exprNode fexp, uentry rval)
{
  sRef uref = uentry_getSref (rval);
  sRef rref = sRef_makeNew (sRef_getType (uref), uref, cstring_undefined);
  
  if (sRef_isStateSpecial (rref))
    {
      uentry fcn = context_getHeader ();
      sRef fref = exprNode_getSref (fexp);
      specialClauses clauses = uentry_getSpecialClauses (fcn);

      specialClauses_postElements (clauses, cl)
	{
	  sRefSet refs = specialClause_getRefs (cl);
	  sRefTest tst = specialClause_getPostTestFunction (cl);
	  sRefMod modf = specialClause_getReturnEffectFunction (cl);

	  sRefSet_elements (refs, el)
	    {
	      sRef base = sRef_getRootBase (el);
	      
	      if (sRef_isResult (base))
		{
		  sRef sr = sRef_fixBase (el, fref);

		  if (tst != NULL && !(tst (sr)))
		    {
		      if (optgenerror 
			  (specialClause_postErrorCode (cl),
			   message ("%s storage %q corresponds to "
				    "storage listed in %q clause: %s",
				    specialClause_postErrorString (cl, sr),
				    sRef_unparse (sr),
				    specialClause_unparseKind (cl),
				    exprNode_unparse (fexp)),
			   exprNode_loc (fexp)))
			{
			  sRefShower ss = specialClause_getPostTestShower (cl);
			  
			  if (ss != NULL)
			    {
			      ss (sr);
			    }
			}
		    }

		  if (modf != NULL)
		    {
		      modf (sr, exprNode_loc (fexp));
		    }
		}
	      else
		{
		  /* 
		  ** Non-results are checked in exit scope.
		  */
		}
	    } end_sRefSet_elements ;
	} end_specialClauses_postElements ;

      (void) checkTransfer (fexp, fref,
			    exprNode_undefined, rref, 
			    exprNode_loc (fexp), TT_FCNRETURN);
    }
  else
    {
      if (ctype_isRealSU (exprNode_getType (fexp)))
	{
	  sRef fref = exprNode_getSref (fexp);
	  
	  checkStructTransfer (exprNode_undefined, rref, 
			       fexp, fref,
			       exprNode_loc (fexp),
			       TT_FCNRETURN);
	}
      else
	{
	  (void) checkTransfer (fexp, exprNode_getSref (fexp),
				exprNode_undefined, rref, 
				exprNode_loc (fexp), TT_FCNRETURN);
	}
    }
}

static void
  checkPassSpecialClauses (uentry ue, exprNode fexp, sRef fref, int argno)
{
  specialClauses clauses = uentry_getSpecialClauses (ue);

  DPRINTF (("Check pass special: %s / %s",
	    exprNode_unparse (fexp), sRef_unparseFull (fref)));
  
  specialClauses_preElements (clauses, cl)
    {
      sRefSet refs = specialClause_getRefs (cl);
      sRefTest tst = specialClause_getPreTestFunction (cl);
      sRefMod modf = specialClause_getEffectFunction (cl);

      sRefSet_elements (refs, el)
	{
	  sRef base = sRef_getRootBase (el);
	  
	  if (sRef_isResult (base))
	    {
	      ; /* nothing to check before */
	    }
	  else if (sRef_isParam (base))
	    {
	      if (sRef_getParam (base) == argno - 1)
		{
		  sRef sb;

		  DPRINTF (("Fix base: %s / %s",
			    sRef_unparseFull (el),
			    sRef_unparseFull (fref)));

		  sb = sRef_fixBase (el, fref);

		  if (tst != NULL && !(tst(sb)))
		    {
		      voptgenerror 
			(specialClause_preErrorCode (cl),
			 message ("%s storage %qcorresponds to "
				  "storage listed in %q clause of "
				  "called function: %s",
				  specialClause_preErrorString (cl, sb),
				  sRef_unparseOpt (sb),
				  specialClause_unparseKind (cl),
				  exprNode_unparse (fexp)),
			 exprNode_loc (fexp));
		    }

		  if (modf != NULL)
		    {
		      DPRINTF (("Fixing: %s", sRef_unparseFull (sb)));
		      modf (sb, exprNode_loc (fexp));
		      DPRINTF (("==> %s", sRef_unparseFull (sb)));
		    }
		}
	    }
	  else
	    {
	      BADBRANCH;
	    }
	} end_sRefSet_elements ; 	  
    } end_specialClauses_preElements ;

    DPRINTF (("After: %s", sRef_unparseFull (fref)));
}

/*
** should not modify arg
*/

void
checkPassTransfer (exprNode fexp, uentry arg, bool isSpec,
		   /*@dependent@*/ exprNode fcn, int argno, int totargs)
{
  sRef tref = uentry_getSref (arg);
  sRef fref = exprNode_getSref (fexp);
  bool isOut = FALSE;
  bool isPartial = FALSE;
  bool isImpOut = FALSE;
  ctype ct = uentry_getType (arg);

  DPRINTF (("Check pass: %s -> %s",
	    sRef_unparseFull (fref),
	    sRef_unparseFull (tref)));
  
  atFunction = fcn;
  atArgNo = argno;
  atNumArgs = totargs;

  if (ctype_isElips (ct))
    {
      ct = ctype_unknown;
    }
  
  if (!ctype_isElips (ct) && 
      (ctype_isVoidPointer (ct) && uentry_isOut (arg) && sRef_isOnly (tref)))
    {
      if (ctype_isRealAP (ct))
	{
	  if (sRef_aliasCheckSimplePred (sRef_isDead, fref))
	    {
	      if (optgenerror
		  (FLG_USERELEASED,
		   message ("Dead storage %qpassed as out parameter: %s",
			    sRef_unparseOpt (fref),
			    exprNode_unparse (fexp)),
		   exprNode_loc (fexp)))
		{
		  if (sRef_isDead (fref))
		    {
		      sRef_showStateInfo (fref);
		    }
		}
	      
	      sRef_setAllocated (fref, exprNode_loc (fexp));
	    }
	  else if (context_getFlag (FLG_STRICTUSERELEASED)
		   && sRef_aliasCheckSimplePred (sRef_isPossiblyDead, fref))
	    {
	      if (optgenerror2 
		  (FLG_USERELEASED, FLG_STRICTUSERELEASED,
		   message ("Possibly dead storage %qpassed as out parameter: %s",
			    sRef_unparseOpt (fref),
			    exprNode_unparse (fexp)),
		   exprNode_loc (fexp)))
		{
		  if (sRef_isPossiblyDead (fref))
		    {
		      sRef_showStateInfo (fref);
		    }
		}
	      
	      sRef_setAllocated (fref, exprNode_loc (fexp));
	    }
	  else if (sRef_aliasCheckSimplePred (sRef_isStateUndefined, fref) 
		   || sRef_aliasCheckSimplePred (sRef_isUnuseable, fref))
	    {
	      voptgenerror
		(FLG_USEDEF,
		 message ("Unallocated storage %qpassed as out parameter: %s",
			  sRef_unparseOpt (fref),
			  exprNode_unparse (fexp)),
		 exprNode_loc (fexp));

	      sRef_setAllocated (fref, exprNode_loc (fexp));
	    }
	  else
	    {
	      ;
	    }
	}
      
      (void) checkCompletelyDestroyed (fexp, fref, TRUE, exprNode_loc (fexp),
				       0, DSC_PARAM);

      /* make it defined now, so checkTransfer is okay */
      sRef_setDefined (fref, exprNode_loc (fexp)); 
    }
  else if (uentry_isOut (arg))
    {
      if (ctype_isRealAP (ct)
	  && (sRef_isStateUndefined (fref) || sRef_isUnuseable (fref)))
	{
	  voptgenerror
	    (FLG_USEDEF,
	     message ("Unallocated storage %qpassed as out parameter: %s",
		      sRef_unparseOpt (fref),
		      exprNode_unparse (fexp)),
	     exprNode_loc (fexp));
	  sRef_setAllocated (fref, exprNode_loc (fexp));
	}
      isOut = TRUE;
    }
  else if (uentry_isPartial (arg))
    {
      if (ctype_isRealAP (ct) 
	  && (sRef_isStateUndefined (fref) || sRef_isUnuseable (fref)))
	{
	  voptgenerror 
	    (FLG_USEDEF,
	     message ("Unallocated storage %qpassed as partial parameter: %s",
		      sRef_unparseOpt (fref),
		      exprNode_unparse (fexp)),
	     exprNode_loc (fexp));
	  sRef_setAllocated (fref, exprNode_loc (fexp));
	}
      isPartial = TRUE;
    }
  else if (uentry_isStateSpecial (arg))
    {
      uentry ue = exprNode_getUentry (fcn);

      if (ctype_isRealAP (ct) 
	  && (sRef_isStateUndefined (fref) || sRef_isUnuseable (fref)))
	{
	  voptgenerror 
	    (FLG_USEDEF,
	     message ("Unallocated storage %qpassed as special parameter: %s",
		      sRef_unparseOpt (fref),
		      exprNode_unparse (fexp)),
	     exprNode_loc (fexp));
	  sRef_setAllocated (fref, exprNode_loc (fexp));
	}

      if (uentry_hasSpecialClauses (ue))
	{
	  checkPassSpecialClauses (ue, fexp, fref, argno);
	}
      
      return; /* ??? */
    }
  else if (sRef_isStateDefined (tref))
    {
      exprNode_checkUseParam (fexp);
    }
  else
    {
      if (isSpec || (!context_getFlag (FLG_IMPOUTS)))
	{
	  exprNode_checkUseParam (fexp);
	}
      else
	{
	  if (!sRef_isMacroParamRef (fref) 
	      && (ctype_isRealAP (ct)))
	    {
	      if (sRef_isAddress (fref))
		{
		  if (sRef_isStateUndefined (fref) || sRef_isUnuseable (fref))
		    {
		      voptgenerror 
			(FLG_USEDEF,
			 message 
			 ("Unallocated address %qpassed as implicit "
			  "out parameter: %s",
			  sRef_unparseOpt (fref),
			  exprNode_unparse (fexp)),
			 exprNode_loc (fexp));
		      sRef_setAllocated (fref, exprNode_loc (fexp));
		    }
		}
	      
	      /* yes, I really mean this! */
	      tref = sRef_copy (tref);
	      sRef_setAllocated (tref, exprNode_loc (fexp)); 

	      isOut = TRUE;
	      isImpOut = TRUE;
	    }
	  else 
	    {
	      exprNode_checkUseParam (fexp);
	    }
	}
    }

  if (sRef_isNew (fref))
    {
      alkind tkind = sRef_getAliasKind (tref);

      if ((sRef_isFresh (fref) || sRef_isOnly (fref))
	  && !alkind_isOnly (tkind) 
	  && !alkind_isKeep (tkind) 
	  && !alkind_isOwned (tkind)
	  && !alkind_isError (tkind)
	  && !uentry_isReturned (arg))
	
	{
	  voptgenerror 
	    (FLG_MUSTFREE,
	     message ("New fresh storage %qpassed as %s (not released): %s",
		      sRef_unparseOpt (fref),
		      alkind_unparse (sRef_getAliasKind (tref)),
		      exprNode_unparse (fexp)),
	     exprNode_loc (fexp));
	}
      else 
	{
	  if (sRef_isNewRef (fref) && !sRef_isKillRef (tref))
	    {
	      alkind ak = sRef_getAliasKind (tref);
	      
	      if (!alkind_isError (ak))
		{
		  voptgenerror 
		    (FLG_MUSTFREE,
		     message ("New reference %qpassed as %s (not released): %s",
			      sRef_unparseOpt (fref),
			      alkind_unparse (sRef_getAliasKind (tref)),
			      exprNode_unparse (fexp)),
		     exprNode_loc (fexp));
		}
	    }
	}
    }
  
  (void) checkTransfer (fexp, exprNode_getSref (fexp),
			exprNode_undefined, tref,
			exprNode_loc (fexp), TT_FCNPASS);

  setCodePoint ();
  fref = exprNode_getSref (fexp);
  
  if (isOut && !sRef_isDead (fref) && !sRef_isPossiblyDead (fref))
    {
      sRef base;

      if (ctype_isRealAP (sRef_getType (fref)))
	{
	  base = sRef_makePointer (fref); 
	}
      else
	{
	  base = fref;
	}

      if (isImpOut)
	{
	  exprNode_checkMSet (fexp, base);
	}
      else
	{
	  exprNode_checkSet (fexp, base);
	}

      if (sRef_isValid (base))
	{
	  setCodePoint ();

	  sRef_clearDerived (base);
	  sRef_setDefined (base, exprNode_loc (fexp));
	  usymtab_clearAlias (base);
	  sRef_setNullUnknown (base, exprNode_loc (fexp));
	}
    }

  if (isPartial)
    {
      if (sRef_isValid (fref))
	{
	  sRef_setPartial (fref, exprNode_loc (fexp)); 
	}
    }

  atFunction = exprNode_undefined;
  atArgNo = 0;
  atNumArgs = 0;
  
  /* need to fixup here: derived refs could be bogus */
  /* (better to change sRef to not add derivs for "protected" ref) */

  uentry_fixupSref (arg);

  setCodePoint ();

  DPRINTF (("Check pass: ==> %s",
	    sRef_unparseFull (fref)));
}

void
checkGlobReturn (uentry glob)
{
  sRef_protectDerivs ();
  checkGlobTrans (glob, TT_GLOBRETURN);
  sRef_clearProtectDerivs ();
}

void checkParamReturn (uentry actual)
{
  checkLeaveTrans (actual, TT_PARAMRETURN);
}

void checkLoseRef (uentry actual)
{
  checkLeaveTrans (actual, TT_LEAVETRANS);
}

static void
checkLeaveTrans (uentry actual, transferKind transferType)
{
  sRef aref = uentry_getSref (actual);
  sRef origref = uentry_getOrigSref (actual);

  if (transferType == TT_PARAMRETURN 
      && (sRef_isKeep (origref) || sRef_isOnly (origref)
	  || sRef_isOwned (origref)))
    {
      /* caller cannot use, nothing to check */
    }
  else
    {
      if (sRef_isNSLocalVar (origref))
	{
	  ;
	}
      else
	{
	  (void) checkCompletelyDefined (exprNode_undefined, aref, 
					 exprNode_undefined, origref,
					 TRUE, FALSE, FALSE,
					 g_currentloc, transferType,
					 0, TRUE);
	}
    }
}

static void
checkGlobTrans (uentry glob, transferKind type)
{
  sRef eref = uentry_getOrigSref (glob);
  
  (void) checkCompletelyDefined (exprNode_undefined, uentry_getSref (glob), 
				 exprNode_undefined, eref, 
				 TRUE, FALSE, FALSE,
				 g_currentloc, type, 0, TRUE);
}

/*
** For lhs of assignment, alias kind is set from basic type.
** Yoikes!
*/

static void
fixAssignLhs (sRef s)
{
  sRef_resetStateComplete (s);
}

static void checkStructTransfer (exprNode lhs, sRef slhs, exprNode rhs, sRef srhs,
				 fileloc loc,
				 transferKind tt)
{
  ctype st = ctype_realType (sRef_getType (srhs));
  
  if (ctype_isSU (st) && ctype_isRealSU (sRef_getType (slhs))
      && ctype_match (sRef_getType (slhs), st))
    {
      if (tt == TT_DOASSIGN && sRef_isStateDefined (srhs))
	{
	  sRef_setDefinedComplete (slhs, loc);
	}
	  
      if (sRef_isDependent (slhs)
	  || sRef_isObserver (slhs)
	  || sRef_isExposed (slhs))
	{
	  ;
	}
      else
	{
	  if (sRef_isLocalVar (slhs)
	      && sRef_isGlobal (sRef_getRootBase (srhs)))
	    {
	      sRef_setDependent (slhs, exprNode_loc (lhs));
	    }
	  else
	    {
	      if (ctype_isUnion (st))
		{
		  sRef_setDefState (slhs, sRef_getDefState (srhs), 
				    exprNode_loc (lhs));

		  sRefSet_realElements (sRef_derivedFields (srhs), sr)
		    {
		      if (sRef_isField (sr))
			{
			  cstring fieldname = sRef_getField (sr);
			  sRef lfld = sRef_makeField (slhs, fieldname);

			  (void) checkTransfer (rhs, sr, lhs, lfld, 
						exprNode_loc (lhs), tt);
			}
		    } end_sRefSet_realElements ;
		}
	      else
		{
		  uentryList fields = ctype_getFields (st);
		  
		  uentryList_elements (fields, field)
		    {
		      sRef rfld = sRef_makeField (srhs, uentry_rawName (field));
		      sRef lfld = sRef_makeField (slhs, uentry_rawName (field));
		      (void) checkTransfer (rhs, rfld, lhs, lfld, exprNode_loc (lhs), tt);
		    } end_uentryList_elements ;
		}

	      if (sRef_isOnly (srhs))
		{
		  sRef_setKeptComplete (srhs, loc);
		}
	    }
	}
    }
}

void
checkInitTransfer (exprNode lhs, exprNode rhs)
{
  sRef slhs = exprNode_getSref (lhs);
  
  if (sRef_isGlobal (slhs) || (!sRef_isCvar (slhs)))
    {
      (void) checkTransfer (rhs, exprNode_getSref (rhs), 
			    lhs, slhs, exprNode_loc (rhs), TT_GLOBINIT);
    }
  else
    {
      checkAssignTransfer (lhs, rhs);
    }
}

void
checkAssignTransfer (exprNode lhs, exprNode rhs)
{
  sRef slhs = exprNode_getSref (lhs);
  sRef srhs = exprNode_getSref (rhs);
  sRef base = sRef_getBaseSafe (slhs);
  nstate ns;
  struct _bbufinfo bs;

  DPRINTF (("Check assign: %s = %s", exprNode_unparse (lhs),
	    exprNode_unparse (rhs)));
  DPRINTF (("lhs: %s", sRef_unparseFull (slhs)));
  DPRINTF (("rhs: %s", sRef_unparseFull (srhs)));

  if (ctype_isRealSU (sRef_getType (srhs)))
    {
      checkStructTransfer (lhs, slhs, rhs, srhs, exprNode_loc (lhs), TT_FIELDASSIGN);
    }
  else
    {
      (void) checkTransfer (rhs, srhs, lhs, slhs, 
			    exprNode_loc (lhs), TT_DOASSIGN);
    }

  if (sRef_isConst (srhs) && sRef_isLocalState (srhs))
    {
      /* constants can match anything (e.g., NULL) */
      sRef_setAliasKind (slhs, AK_ERROR, fileloc_undefined);
    }

  if (sRef_isValid (base) && sRef_isStateDefined (base))
    {
      sRef_setPdefined (base, g_currentloc); 
    }

  if (sRef_isPartial (srhs))
    {
      sRef_setPartial (slhs, exprNode_loc (rhs));
    }


  ns = sRef_getNullState (srhs);

  if (nstate_possiblyNull (ns))
    {
      if (usymtab_isGuarded (srhs))
	{
	  ns = NS_NOTNULL;
	}
    }

  sRef_setNullStateInnerComplete (slhs, ns, exprNode_loc (rhs));

  if (sRef_isExposed (srhs) || sRef_isObserver (srhs))
    {
      sRef_setExKind (slhs, sRef_getExKind (srhs), exprNode_loc (rhs));
    }

  /* We put the function to transfer NT states */
  bs = sRef_getNullTerminatedState (srhs);
  sRef_setNullTerminatedStateInnerComplete (slhs, bs, exprNode_loc (rhs));
  DPRINTF (("Done transfer: %s", sRef_unparseFull (slhs)));
}

static void
checkTransferNullAux (sRef fref, exprNode fexp, /*@unused@*/ bool ffix,
		      sRef tref, exprNode texp, /*@unused@*/ bool tfix,
		      fileloc loc, transferKind transferType)
{
  alkind tkind = sRef_getAliasKind (tref);
  ctype ttyp = ctype_realType (sRef_getType (tref));

  if (ctype_isUnknown (ttyp))
    {
      ttyp = exprNode_getType (texp);
      
      if (ctype_isUnknown (ttyp))
	{
	  ttyp = exprNode_getType (fexp);

	  if (ctype_isUnknown (ttyp))
	    {
	      ttyp = sRef_getType (fref);
	    }
	}
    }

  if (ctype_isFunction (ttyp) && (transferType == TT_FCNRETURN))
    {
      ttyp = ctype_returnValue (ttyp);
    }

  /*
  ** check for null (don't need to check aliases??)
  */

  if (sRef_possiblyNull (fref) 
      && !usymtab_isGuarded (fref) 
      && ctype_isRealAP (ttyp))
    {
      if (!alkind_isLocal (tkind) && !alkind_isFresh (tkind)
	  && !sRef_perhapsNull (tref)
	  && !(transferType == TT_DOASSIGN))
	{
	  if (transferType == TT_GLOBINIT)
	    {
	      if (optgenerror
		  (FLG_NULLASSIGN,
		   message ("%s %q initialized to %s value: %q",
			    sRef_getScopeName (tref),
			    sRef_unparse (tref),
			    sRef_nullMessage (fref),
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  sRef_showNullInfo (fref);
		  sRef_setNullError (tref);
		}
	    }
	  else
	    {
	      if (optgenerror
		  ((transferType == TT_FCNPASS) ? FLG_NULLPASS : FLG_NULLRET,
		   message ("%q storage %q%s: %q",
			    cstring_capitalize (sRef_nullMessage (fref)),
			    sRef_unparseOpt (fref),
			    transferNullMessage (transferType), 
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  sRef_showNullInfo (fref);
		  sRef_setNullError (fref);
		}
	    }
	}
      else
	{
	  ;
	}
    }  
}


static void
checkTransferAssignAux (sRef fref, exprNode fexp, /*@unused@*/ bool ffix,
			sRef tref, exprNode texp, bool tfix,
			fileloc loc, transferKind transferType)
{
  alkind tkind = sRef_getAliasKind (tref);

  /*
  ** Assignment to same --- no errors, or state changes.
  ** This can happen when returned params are used.
  */

  if (sRef_sameName (fref, tref))
    {
      sRef_copyState (tref, fref); 
      return;
    }
  
  if ((alkind_isOnly (tkind) || alkind_isFresh (tkind) 
       || alkind_isNewRef (tkind) || alkind_isOwned (tkind))
      && !(sRef_isDead (tref) 
	   || sRef_isStateUndefined (tref) 
	   || sRef_isUnuseable (tref) 
	   || sRef_isPartial (tref)
	   || sRef_definitelyNull (tref) 
	   || sRef_isStackAllocated (tref) 
	   || sRef_isAllocIndexRef (tref))
      && !(sRef_same (fref, tref)) /* okay to assign to self (returned params) */
      && !(usymtab_isProbableNull (tref))) 
    {
      if (context_getFlag (FLG_MUSTFREE))
	{
	  if (canLoseReference (tref, loc))
	    {
	      ; /* no error */
	    }
	  else
	    {
	      if (sRef_hasLastReference (tref))
		{
		  if (optgenerror 
		      (FLG_MUSTFREE,
		       message ("Last reference %q to %s storage %qnot released "
				"before assignment: %q",
				sRef_unparse (tref),
				alkind_unparse (tkind),
				sRef_unparseOpt (sRef_getAliasInfoRef (tref)),
				generateText (fexp, texp, tref, transferType)),
		       loc))
		    {
		      sRef_showRefLost (tref);
		    }
		}
	      else
		{
		  if (context_inGlobalScope ())
		    {
		      /* no errors for static initializations */
		    }
		  else 
		    {
		      /*
		       ** don't report this error for a[i], since it could
		       ** be a new element.
		       */
		      
		      if (alkind_isNewRef (tkind))
			{
			  if (optgenerror 
			      (FLG_MUSTFREE,
			       message 
			       ("%q %qnot released before assignment: %q",
				cstring_makeLiteral
				(alkind_isKillRef (sRef_getOrigAliasKind (tref))
				 ? "Kill reference parameter" : "New reference"),
				sRef_unparseOpt (tref),
				generateText (fexp, texp, tref, transferType)),
			       loc))
			    {
			      sRef_showAliasInfo (tref);
			      sRef_setAliasKind (tref, AK_ERROR, loc);
			    }
			}
		      else if
			(!(sRef_isUnknownArrayFetch (tref)
			   && !context_getFlag (FLG_STRICTDESTROY))
			 && !sRef_isUnionField (tref)
			 && !sRef_isRelDef (tref)
			 && optgenerror 
			 (FLG_MUSTFREE,
			  message 
			  ("%s storage %qnot released before assignment: %q",
			   alkind_capName (tkind),
			   sRef_unparseOpt (tref),
			   generateText (fexp, texp, tref, transferType)),
			  loc))
			  {
			    sRef_showAliasInfo (tref);
			  }
		      else
			{
			  ;
			}
		    }
		}
	    }
	}
    }

  fixAssignLhs (tref);

  if (sRef_isRefCounted (tref)) /* tkind might not be correct now */
    {
      if (sRef_isNewRef (fref))
	{
	  sRef_setAliasKind (tref, AK_NEWREF, loc);
	}
      else if (sRef_isConst (fref))
	{
	  /* for now, constants are not ref counted */
	  sRef_setAliasKind (tref, AK_ERROR, loc);
	}
      else
	{
	  ;
	}

      if (!sRef_isNSLocalVar (tref) 
	  && sRef_isRefCounted (fref)
	  && sRef_isStateDefined (fref))
	{
	  voptgenerror 
	    (FLG_NEWREFTRANS,
	     message ("New reference %qto reference counted storage: %q",
		      sRef_unparseOpt (tref),
		      generateText (fexp, texp, tref, transferType)),
	     loc);
	}
    }

  /*
  ** Not for structures and unions, since assignments copy.
  */

  if (sRef_isStack (fref)
      && !ctype_isSU (ctype_realType (sRef_getType (fref))))
    {
      sRef_setAliasKindComplete (tref, AK_STACK, loc);
    }

  if (sRef_isNSLocalVar (tref) 
      && !sRef_isOwned (tref) /*< should only apply to static >*/
      && ctype_isMutable (sRef_getType (tref)))
    {
      if (sRef_isOnly (fref) && sRef_isNew (fref)) 
	{
	  if (!tfix) 
	    {
	      sRef_setFresh (tref, loc);
	    }
	}
    }
}

/*
** requires sRef_isOnly (fref)
*/

static void
checkOnlyTransferAux (sRef fref, exprNode fexp, bool ffix,
		      sRef tref, exprNode texp, /*@unused@*/ bool tfix,
		      fileloc loc, transferKind transferType)
{     
  alkind tkind = sRef_getAliasKind (tref);

  if (sRef_isExposed (tref) || sRef_isObserver (tref))
    {
      if (transferType == TT_FCNRETURN && sRef_isNew (fref)
	  && !alkind_isError (tkind))
	{
	  if (optgenerror 
	      (FLG_ONLYTRANS,
	       message ("Only storage %q%q (will not be released): %q",
			sRef_unparseOpt (fref),
			transferErrorMessage (transferType, tkind),
			generateText (fexp, texp, tref, transferType)),
	       loc))
	    {
	      sRef_showAliasInfo (fref);
	    }
	}
      
      /* no errors for exposed transfers (is this good enough?) */
    }
  else if (alkind_isOnly (tkind) || alkind_isKeep (tkind) || alkind_isOwned (tkind))
    {
      ; /* okay */
    }
  else if ((transferType == TT_FCNPASS)
	   && (alkind_isUnknown (tkind) 
	       || alkind_isTemp (tkind) || alkind_isUnique (tkind)))
    {
      if (sRef_isFresh (fref) 
	  && alkind_isUnknown (tkind) && !context_getFlag (FLG_PASSUNKNOWN))
	{
	  if (!ffix) sRef_setAliasKind (fref, AK_UNKNOWN, loc); 
	}
    }
  else if (alkind_isLocal (tkind) 
	   || alkind_isFresh (tkind) || alkind_isUnknown (tkind))
    {
      if ((transferType == TT_DOASSIGN)
	  && sRef_isNew (fref) 
	  && sRef_isOnly (fref))
	{
	  bool error = FALSE;

	  if (alkind_isUnknown (tkind)
	      && sRef_isGlobal (sRef_getRootBase (tref)))
	    {
	      if (optgenerror 
		  (FLG_ONLYUNQGLOBALTRANS,
		   message ("Only storage %q%q: %q",
			    sRef_unparseOpt (fref),
			    transferErrorMessage (transferType, tkind),
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		  sRef_setAliasKind (tref, AK_ERROR, loc);
		  error = TRUE;
		}
	    }

	  if (!error && !ffix) 
	    {
	      sRef_setFresh (tref, loc);
	    }
	}
      else
	{
	  if (alkind_isLocal (tkind))
	    {
	      if (sRef_sameName (tref, fref))
		{
		  ; /* don't set this --- corresponds to return transfer */
		}
	      else
		{
		  /*
		  ** Don't set local to dependent.  Error will
		  ** be detected through aliasing.  Except for
		  ** arrays.
		  */
		  
		  if (!tfix && sRef_isThroughArrayFetch (fref)
		      && context_getFlag (FLG_DEPARRAYS))
		    {
		      sRef_setDependent (tref, loc);
		    }
		}
	    }
	  else
	    {
	      if (optgenerror 
		  (FLG_ONLYTRANS,
		   message ("Only storage %q%q: %q",
			    sRef_unparseOpt (fref),
			    transferErrorMessage (transferType, tkind),
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	    }
	}
    }
  else
    {
      if (alkind_isError (tkind) 
	  || (alkind_isUnknown (tkind) && !context_getFlag (FLG_MEMIMPLICIT)))
	{
	  flagcode_recordSuppressed (FLG_ONLYTRANS);
	}
      else
	{
	  if ((alkind_isKept (tkind) || alkind_isStack (tkind) 
	       || alkind_isDependent (tkind))
	      && sRef_isNSLocalVar (tref))
	    {
	      ; /* okay */
	    }
	  else
	    {
	      if (optgenerror 
		  (FLG_ONLYTRANS,
		   message ("Only storage %q%q: %q",
			    sRef_unparseOpt (fref),
			    transferErrorMessage (transferType, tkind),
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	    }
	}
      
      if (transferType == TT_DOASSIGN)
	{
	  /*
          ** alias kind unknown to suppress future messages
	  */
	  
	  if (!ffix && sRef_isNSLocalVar (sRef_getRootBase (fref)))
	    {
	      sRef_clearAliasKind (fref);
	    }
	}
    }
}

/*
** ??? same as checkOnly ?
*/

static void
checkOwnedTransferAux (sRef fref, exprNode fexp, bool ffix,
		       sRef tref, exprNode texp, bool tfix,
		       fileloc loc, transferKind transferType)
{     
  alkind tkind = sRef_getAliasKind (tref);

  if (sRef_isExposed (tref) || sRef_isObserver (tref))
    {
      if (transferType == TT_FCNRETURN && sRef_isNew (fref))
	{
	  if (optgenerror 
	      (FLG_OWNEDTRANS,
	       message ("Owned storage %q%q (will not be released): %q",
			sRef_unparseOpt (fref),
			transferErrorMessage (transferType, tkind),
			generateText (fexp, texp, tref, transferType)),
	       loc))
	    {
	      sRef_showAliasInfo (fref);
	    }
	}
    }
  else if (alkind_isOnly (tkind) || alkind_isKeep (tkind) 
	   || alkind_isDependent (tkind)
	   || alkind_isOwned (tkind))
    {
      /* okay */
    }
  else if (alkind_isLocal (tkind)
	   || alkind_isFresh (tkind) || alkind_isUnknown (tkind))
    {
      if ((transferType == TT_DOASSIGN)
	  && sRef_isNew (fref) && sRef_isOnly (fref))
	{
	  if (!tfix) 
	    { 
	      sRef_setFresh (tref, loc); 
	    }
	}
      else
	{
	}
    }
  else if ((transferType == TT_FCNPASS)
	   && (alkind_isUnknown (tkind) 
	       || alkind_isTemp (tkind) || alkind_isUnique (tkind)))
    {
      if (sRef_isFresh (fref) 
	  && alkind_isUnknown (tkind) && !context_getFlag (FLG_PASSUNKNOWN))
	{
	  if (!ffix) { sRef_clearAliasKind (fref); }
	}
    }
  else
    {
      if (alkind_isUnknown (tkind) && !context_getFlag (FLG_MEMIMPLICIT))
	{
	  flagcode_recordSuppressed (FLG_OWNEDTRANS);
	}
      else
	{
	  if (alkind_isKept (tkind) && sRef_isNSLocalVar (tref))
	    {
	      ; /* okay */
	    }
	  else
	    {
	      voptgenerror
		(FLG_OWNEDTRANS,
		 message ("Owned storage %q%q: %q",
			  sRef_unparseOpt (fref),
			  transferErrorMessage (transferType, tkind),
			  generateText (fexp, texp, tref, transferType)),
		 loc);
	    }
	}
      
      if (transferType == TT_DOASSIGN)
	{
	  /*
	   ** alias kind unknown to suppress future messages
	   */
	  
	  if (!ffix) { sRef_clearAliasKind (fref); }
	}
    }
}
  
static void
checkFreshTransferAux (sRef fref, exprNode fexp, bool ffix,
		       sRef tref, exprNode texp, /*@unused@*/ bool tfix,
		       fileloc loc, transferKind transferType)
{     
  alkind tkind = sRef_getAliasKind (tref);

  /*
  ** error to return fresh as non-only
  */

  if (transferType == TT_FCNRETURN
      && !(alkind_isOnly (tkind) || alkind_isNewRef (tkind)))
    {
      if (alkind_isUnknown (tkind) && !context_getFlag (FLG_MEMIMPLICIT))
	{
	  flagcode_recordSuppressed (FLG_NEWREFTRANS);
	}
      else
	{
	  if (alkind_isError (tkind))
	    {
	      if (!ffix) 
		{ 
		  sRef_killComplete (fref, loc); 
		}
	    }
	  else if (alkind_isRefCounted (tkind))
	    {
	      if (optgenerror 
		  (FLG_NEWREFTRANS,
		   message
		   ("New reference returned without newref qualifier: %q",
		    generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		  sRef_killComplete (fref, loc);
		}
	      }
	  else 
	    {
	      if (optgenerror 
		  (FLG_FRESHTRANS,
		   message ("Fresh storage %q (should be only): %q",
			    transferErrorMessage (transferType, tkind),
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		  sRef_killComplete (fref, loc);
		}
	    }
	}
    }
  
  /*
  ** Okay to assign fresh to only, shared or unqualified.
  ** 
  ** should generate other errors? 
  */

  if (alkind_isOnly (tkind))
    {
      if (transferType == TT_DOASSIGN && !sRef_isGlobal (tref))
	{
	  if (!ffix) 
	    { 
	      if (!sRef_isNSLocalVar (tref))
		{
		  sRef_setKeptComplete (fref, loc); 
		}
	    }
	}
      else
	{
	  if (sRef_isConst (fref))
	    {
	      ;
	    }
	  else
	    {
	      if (!ffix) 
		{ 
		  sRef_killComplete (fref, loc); 
		}
	    }
	}
    }
  else if (alkind_isOwned (tkind))
    {
      if (!ffix) 
	{ 
	  sRef_setDependentComplete (fref, loc); 
	}
    }
  else if (alkind_isRefCounted (tkind)
	   && (transferType == TT_FCNRETURN) && sRef_isFresh (fref))
    {
      if (!ffix) 
	{ 
	  sRef_killComplete (fref, loc); 
	}
    }
  else if (alkind_isKeep (tkind))
    {
      if (!ffix) 
	{ 
	  if (!sRef_isNSLocalVar (tref))
	    {
	      sRef_setKeptComplete (fref, loc); 
	    }
	}
    }
  else if (alkind_isShared (tkind))
    {
      if (!ffix) { sRef_setShared (fref, loc); }
    }
  else if (alkind_isLocal (tkind) || alkind_isUnknown (tkind))
    {
      if (transferType == TT_DOASSIGN || transferType == TT_FCNRETURN)
	{
	  /*
	  ** local shares fresh.  Make it owned/dependent. 
          */

	  if (!tfix) 
	    { 
	      sRef_setOwned (tref, loc); 
	    }

	  if (!ffix && !tfix) 
	    { 
	      sRef_setDependentComplete (fref, loc); 
	    }

	  /* NO! sRef_clearAliasKind (fref); */
	}
      else 
	{
	  if (context_getFlag (FLG_PASSUNKNOWN))
	    {
	      	      sRef_clearAliasKind (fref);
	    }
	}
    }
  else
    {
      ;
    }
}

static void
checkTransferExposure (sRef fref, exprNode fexp, /*@unused@*/ bool ffix,
		       sRef tref, exprNode texp, bool tfix,
		       fileloc loc, 
		       transferKind transferType)
{
  alkind fkind = sRef_getAliasKind (fref);
  alkind tkind = sRef_getAliasKind (tref);
  exkind tekind = sRef_getExKind (tref);

  if (sRef_isObserver (fref) && ctype_isMutable (sRef_getType (fref)))
    {
      /*
      ** observer -> exposed or observer
      */
      
      /*
      ** observer -> temp is okay [NO!  really? only in function calls]
      */

      if (sRef_isExposed (tref) || sRef_isObserver (tref)
	  || alkind_isLocal (tkind))
	{
	  /* okay */
	  
	  if ((transferType == TT_DOASSIGN) && alkind_isLocal (tkind))
	    {
	      if (!tfix) { sRef_setAliasKindComplete (tref, fkind, loc); }
	    }
	}
      else
	{
	  if (transferType == TT_FCNRETURN 
	      || transferType == TT_DOASSIGN
	      || transferType == TT_FIELDASSIGN
	      || transferType == TT_GLOBINIT)
	    {
	      bool hasError = FALSE;
	      
	      if (exprNode_isStringLiteral (fexp)
		  && transferType == TT_GLOBINIT)
		{
		  hasError = optgenerror
		    (FLG_READONLYTRANS,
		     message ("Read-only string literal storage %q%q: %q",
			      sRef_unparseOpt (fref),
			      transferErrorExpMessage (transferType, tekind),
			      generateText (fexp, texp, tref, transferType)),
		     loc);

		  sRef_setAliasKind (fref, AK_ERROR, fileloc_undefined);
		}
	      else 
		{
		  if ((transferType == TT_DOASSIGN
		       || transferType == TT_FIELDASSIGN)
		      && (sRef_isNSLocalVar (tref)
			  || (exprNode_isStringLiteral (fexp)
			      && ctype_isRealArray (exprNode_getType (texp)))))
		    {
		      ; /* No error for local assignment or assignment
			   to static array (copies string). */
		    }
		  else
		    {
		      if (exprNode_isStringLiteral (fexp))
			{
			  hasError = optgenerror 
			    (FLG_READONLYTRANS,
			     message
			     ("Read-only string literal storage %q%q: %q",
			      sRef_unparseOpt (fref),
			      transferErrorExpMessage (transferType, tekind),
			      generateText (fexp, texp, tref, transferType)),
			     loc);
			  
			}

		      if (!hasError)
			{
			  hasError = optgenerror 
			    (FLG_OBSERVERTRANS,
			     message
			     ("Observer storage %q%q: %q",
			      sRef_unparseOpt (fref),
			      transferErrorExpMessage (transferType, tekind),
			      generateText (fexp, texp, tref, transferType)),
			     loc);
			}
		    }
		}
	      
	      if (hasError)
		{
		  if (transferType != TT_GLOBINIT)
		    {
		      sRef_showExpInfo (fref);
		      sRef_setAliasKind (tref, AK_ERROR, loc);
		    }
		}
	      else 
		{
		  if (transferType == TT_DOASSIGN && !tfix)
		    {
		      DPRINTF (("Setting unknown!"));
		      /* sRef_setAliasKind (tref, AK_ERROR, loc); */
		    }
		}
	    }
	  else /* TT_FCNPASS */
	    {
	      llassert (transferType == TT_FCNPASS);

	      if (alkind_isTemp (tkind) 
		  || alkind_isDependent (tkind)
		  || alkind_isRefCounted (tkind))
		{
		  ; /* okay */
		}
	      else 
		{
		  if (!alkind_isError (tkind))
		    {
		      if (optgenerror 
			  (FLG_OBSERVERTRANS,
			   message ("Observer storage %q%q: %q",
				    sRef_unparseOpt (fref),
				    transferErrorMessage (transferType, tkind),
				    generateText (fexp, texp, tref, transferType)),
			   loc))
			{
			  sRef_showExpInfo (fref);
			  sRef_clearAliasState (fref, loc); 
			}
		    }
		}
	    }
	}
    }
  else if (sRef_isExposed (fref) && ctype_isMutable (sRef_getType (fref)))
    {
      if (transferType == TT_FCNRETURN)
	{
	  if (!(sRef_isExposed (tref) || sRef_isObserver (tref)
		|| sRef_isParam (fref)))
	    {
	      if (optgenerror
		  (FLG_EXPOSETRANS,
		   message ("Exposed storage %q%q: %q",
			    sRef_unparseOpt (fref),
			    transferErrorExpMessage (transferType, tekind),
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  sRef_showExpInfo (fref);
		}
	    }
	}
      else if (transferType == TT_FCNPASS)
	{
	  if (!(sRef_isExposed (tref) 
		|| sRef_isObserver (tref)
		|| (alkind_isUnknown (tkind) 
		    || alkind_isDependent (tkind)
		    || alkind_isTemp (tkind)
		    || alkind_isKillRef (tkind)
		    || alkind_isRefCounted (tkind))))
	    {
	      if (alkind_isUnique (tkind) || alkind_isError (tkind))
		{
		}
	      else 
		{
		  if (optgenerror 
		      (FLG_EXPOSETRANS,
		       message ("Exposed storage %q%q: %q",
				sRef_unparseOpt (fref),
				transferErrorMessage (transferType, tkind),
				generateText (fexp, texp, tref, transferType)),
		       loc))
		    {
		      sRef_showExpInfo (fref);
		      sRef_clearAliasState (fref, loc); 
		    }
		}

	    }
	  else
	    {
	      ;
	    }
	}
      else if (transferType == TT_DOASSIGN)
	{
	  if (!(sRef_isExposed (tref) 
		|| !sRef_isCvar (tref)
		|| (alkind_isUnknown (tkind)
		    || alkind_isDependent (tkind)
		    || alkind_isRefCounted (tkind) 
		    || alkind_isNewRef (tkind)
		    || alkind_isFresh (tkind)
		    || alkind_isLocal (tkind))))
	    {
	      if (optgenerror 
		  (FLG_EXPOSETRANS,
		   message ("Exposed storage %q%q: %q",
			    sRef_unparseOpt (fref),
			    transferErrorExpMessage (transferType, tekind),
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  sRef_showExpInfo (fref);
		}
	    }
	  if (!tfix) { sRef_setExposed (tref, loc); }
	}
      else
	{
	  llassert (transferType == TT_GLOBPASS
		    || transferType == TT_GLOBRETURN
		    || transferType == TT_PARAMRETURN
		    || transferType == TT_LEAVETRANS
		    || transferType == TT_GLOBINIT);
	}
    }
  else
    {
      ;
    }
}

/*
** returns TRUE if there is no error reported
**
** if fixt, don't change tref (except if error reported.)
** if fixf, don't change fref (except if error reported.)
*/

static void
checkTransferAux (exprNode fexp, sRef fref, bool ffix,
		  exprNode texp, sRef tref, bool tfix,
		  fileloc loc, transferKind transferType)
{
  alkind fkind;
  alkind tkind;
  bool isassign = (transferType == TT_DOASSIGN);
  bool isfieldassign = (transferType == TT_FIELDASSIGN);
  bool iseitherassign = isassign || (transferType == TT_FIELDASSIGN);
  bool isfcnpass = (transferType == TT_FCNPASS);
  bool isfcnreturn = (transferType == TT_FCNRETURN);
  
  setCodePoint ();

  /*start modification David Larochelle */

    if (!ffix && !tfix)
    {
      setCodePoint ();
      checkTransferNullTerminatedAux (fref, fexp, ffix, tref, texp, tfix, 
			    loc, transferType);
    }
    /*end modification */
    
  if (!ffix && !tfix)
    {
      setCodePoint ();
      checkTransferNullAux (fref, fexp, ffix, tref, texp, tfix, 
			    loc, transferType);
    }

  if (isassign)
    {
      setCodePoint ();
      checkTransferAssignAux (fref, fexp, ffix, tref, texp, tfix,
			      loc, transferType);
    }

  /*
  ** Check for definition 
  */

  /*
  ** errors passing out params already detected in checkAnyCall
  */

  if (!ffix && !tfix)
    {
      bool defok = TRUE;

      if (!iseitherassign 
	  || (!sRef_isNSLocalVar (tref) 
	      && (sRef_isAnyDefined (tref) || !sRef_stateKnown (tref))))
	{
	  setCodePoint ();

	  if (!ynm_toBoolRelaxed 
	      (checkCompletelyDefined (fexp, fref, texp, tref,
				       TRUE, FALSE, FALSE, 
				       loc, transferType, 0, TRUE)))
	    {
	      defok = FALSE;
	    }
	}

      setCodePoint ();
      
      if (defok && iseitherassign)
	{
	  sRef_setDefState (tref, sRef_getDefState (fref), loc);
	}
    }

  
  /*
  ** check exposure
  */

  setCodePoint ();
  checkTransferExposure (fref, fexp, ffix, tref, texp, tfix, 
			 loc, transferType);

  fkind = sRef_getAliasKind (fref);
  tkind = sRef_getAliasKind (tref);

  /*
  ** check aliasing
  */

  if (alkind_isOnly (fkind))
    {
      setCodePoint ();
      checkOnlyTransferAux (fref, fexp, ffix,
			    tref, texp, tfix, 
			    loc, transferType);
    }
  else if (alkind_isFresh (fkind))
    {
      setCodePoint ();
      checkFreshTransferAux (fref, fexp, ffix,
			     tref, texp, tfix,
			     loc, transferType);
    }
  else if (alkind_isOwned (fkind))
    {
      setCodePoint ();
      checkOwnedTransferAux (fref, fexp, ffix,
			     tref, texp, tfix,
			     loc, transferType);
    }
  else if (alkind_isDependent (fkind))
    {
      setCodePoint ();
      if (isfcnreturn && 
	  (sRef_isExposed (tref) || sRef_isObserver (tref)))
	{
	  ; /* okay */
	}
      else if ((alkind_isOnly (tkind) || alkind_isKeep (tkind)
		|| alkind_isOwned (tkind))
	       || (!isfcnpass && alkind_isTemp (tkind)))
	{
	  bool error = TRUE;

	  if (sRef_isLocalVar (fref))
	    {
	      sRef depRef = dependentReference (fref);

	      if (sRef_isValid (depRef) && sRef_isLocalVar (depRef))
		{
		  error = FALSE;
		  sRef_kill (depRef, loc);
		  sRef_kill (fref, loc);
		}

	    }

	  if (isfieldassign)
	    {
	      error = FALSE;
	    }

	  if (canLoseLocalReference (fref, loc))
	    {
	      ;
	    }
	  else
	    {
	      if (error &&
		  (optgenerror 
		   (FLG_DEPENDENTTRANS,
		    message ("%s storage %q%q: %q",
			     alkind_capName (fkind),
			     sRef_unparseOpt (fref),
			     transferErrorMessage (transferType, tkind),
			     generateText (fexp, texp, tref, transferType)),
		    loc)))
		{
		  DPRINTF (("Here: %s / %s", 
			    sRef_unparseFull (fref),
			    sRef_unparseFull (tref)));

		  sRef_showAliasInfo (fref);
		}
	    }
	}
      else 
	{
	  if (isassign && (alkind_isFresh (tkind) || alkind_isLocal (tkind)))
	    {
	      if (!tfix && !ffix)
		{
		  sRef_setDependent (tref, loc);
		}
	    }
	}
    }
  else if (alkind_isShared (fkind))
    {
      setCodePoint ();
      /*
      ** xxx <- shared
      */

      if (alkind_isOnly (tkind) 
	  || (!isfcnpass 
	      && (!(sRef_isObserver (tref) || sRef_isExposed (tref)) 
		  && alkind_isTemp (tkind))))
	{
	  if (optgenerror
	      (FLG_SHAREDTRANS,
	       message ("%s storage %q%q: %q",
			alkind_capName (fkind),
			sRef_unparseOpt (fref),
			transferErrorMessage (transferType, tkind),
			generateText (fexp, texp, tref, transferType)),
	       loc))
	    {
	      sRef_showAliasInfo (fref);
	    }
	}
      else 
	{
	  if (alkind_isFresh (tkind) || alkind_isLocal (tkind))
	    {
	      sRef_setShared (tref, loc);
	    }
	}
    }
  else if (alkind_isKeep (fkind))
    {
      setCodePoint ();

      if (alkind_isKeep (tkind) 
	  || alkind_isLocal (tkind)
	  || (isfcnreturn && sRef_isExposed (tref))
	  || (iseitherassign 
	      && (alkind_isOnly (tkind) || alkind_isOwned (tkind))))
	{
	  sRef_setKept (fref, loc);
	}
      else if (isfcnpass 
	       && (alkind_isTemp (tkind) || alkind_isOwned (tkind)))
	{
	  ;
	}
      else 
	{
	  if (!alkind_isError (tkind))
	    {
	      if (optgenerror
		  (FLG_KEEPTRANS,
		   message ("%s storage %q: %q",
			    alkind_capName (fkind),
			    transferErrorMessage (transferType, tkind),
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	    }
	}
    }
  else if (alkind_isTemp (fkind) || alkind_isKept (fkind))
    {
      /*
      ** xxx <- temp
      */
      
      if (alkind_isOnly (tkind)
	  || alkind_isShared (tkind) 
	  || (alkind_isTemp (fkind)
	      && !isfcnreturn && alkind_isDependent (tkind))
	  || alkind_isOwned (tkind)
	  || alkind_isKeep (tkind))
	{
	  if (!exprNode_isNullValue (fexp)
	      && (ctype_isMutable (exprNode_getType (fexp))
		  || (ctype_isArray (exprNode_getType (fexp))
		      && sRef_isParam (fref)))
	      && (!iseitherassign || sRef_isReference (tref)))
	    {
	      if (sRef_isThroughArrayFetch (fref))
		{
		  if (optgenerror2
		      (alkind_isTemp (fkind) ? FLG_TEMPTRANS : FLG_KEPTTRANS,
		       FLG_STRICTUSERELEASED,
		       message ("%s storage %q%q: %q",
				alkind_capName (fkind),
				sRef_unparseOpt (fref),
				transferErrorMessage (transferType, tkind),
				generateText (fexp, texp, tref, transferType)),
		       loc))
		    {
		      sRef_showAliasInfo (fref);
		    }
		}
	      else
		{
		  if (optgenerror
		      (alkind_isTemp (fkind) ? FLG_TEMPTRANS : FLG_KEPTTRANS,
		       message ("%s storage %q%q: %q",
				alkind_capName (fkind),
				sRef_unparseOpt (fref),
				transferErrorMessage (transferType, tkind),
				generateText (fexp, texp, tref, transferType)),
		       loc))
		    {
		      sRef_showAliasInfo (fref);
		    }
		}
	    }
	}
    }
  else if (alkind_isRefCounted (fkind) || alkind_isKillRef (fkind))
    {
      if (alkind_isNewRef (tkind))
	{
	  /*
	  ** check that the refs field has been modified
	  */

	  if (!sRef_isConst (fref))
	    {
	      voptgenerror 
		(FLG_REFCOUNTTRANS,
		 message ("Reference counted storage returned without modifying "
			  "reference count: %s",
			  exprNode_unparse (fexp)),
		 loc);
	    }
	}
      else if (iseitherassign)
	{
	  if (alkind_isRefCounted (fkind))
	    {
	      if (!sRef_isLocalVar (tref))
		{
		  vgenhinterror 
		    (FLG_REFCOUNTTRANS,
		     message 
		     ("Assignment to non-local from reference counted storage: %s",
		      exprNode_unparse (fexp)),
		     cstring_makeLiteral 
		     ("Reference counted storage should call a function returning "
		      "a newref instead of direct assignments."),
		     loc);
		}
	      else
		{
		  ;
		}
	    }
	}
      else /* fcnpass */
	{
	  if (alkind_isRefCounted (tkind) || alkind_isTemp (tkind))
	    {
	      /* okay --- no change in state */
	    }
	  else if (alkind_isKillRef (tkind))
	    {
	      if (!ffix && !tfix && !(transferType == TT_FCNRETURN))
		{ 
		  sRef_killComplete (fref, loc); 
		}
	    }
	  else 
	    {
	      if (!alkind_isError (tkind))
		{
		  voptgenerror
		    (FLG_REFCOUNTTRANS,
		     message ("Reference counted storage %q: %q",
			      transferErrorMessage (transferType, tkind),
			      generateText (fexp, texp, tref, transferType)),
		     loc);
		}
	    }
	}
    }
  else
    {
      ;
    }

  setCodePoint ();
  
  if (alkind_isOnly (tkind) || alkind_isKeep (tkind))
    {
      if (sRef_isAddress (fref))
	{
	  voptgenerror
	    (FLG_IMMEDIATETRANS,
	     message ("Immediate address %q %q: %q", 
		      sRef_unparse (fref),
		      transferErrorMessage (transferType, tkind),
		      generateText (fexp, texp, tref, transferType)),
	     loc);
	  
	  sRef_setAliasKind (fref, AK_ERROR, loc);
	}
      else 
	{
	  if ((alkind_isUnknown (fkind) || alkind_isStatic (fkind))
	      && !sRef_isDefinitelyNull (fref)
	      && (!ffix && !tfix)
	      && (!exprNode_isNullValue (fexp)))
	    {
	      flagcode errkind = alkind_isStatic (fkind) 
		? FLG_STATICTRANS : FLG_UNKNOWNTRANS;

	      if (transferType == TT_GLOBINIT)
		{
		  if (errkind == FLG_STATICTRANS)
		    {
		      errkind = FLG_STATICINITTRANS;
		    }
		  else
		    {
		      errkind = FLG_UNKNOWNINITTRANS;
		    }
		}

	      if (optgenerror 
		  (errkind,
		   message ("%s storage %s %q: %q",
			    alkind_capName (fkind),
			    exprNode_unparse (fexp),
			    transferErrorMessage (transferType, tkind),
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	    }
	}
      
      /* don't kill shared to suppress future messages */
      if (!alkind_isShared (fkind))
	{
	  if (isassign)
	    {
	      if (!ffix) 
		{
		  /*< yuk! should do this in aliasaux >*/
		   
		  if (!sRef_isNSLocalVar (tref) && !sRef_sameName (fref, tref))
		    {
		      if (!tfix)
			{
			  sRef_setKeptComplete (fref, loc);
			}
		      else
			{
			  sRef_setKept (fref, loc);
			}
		    }
		}
	    }
	  else
	    {
	      if (!ffix) 
		{
		  if (!tfix)
		    {
		      if (alkind_isKeep (tkind))
			{
			  sRef_setKeptComplete (fref, loc);
			}
		      else
			{
			  sRef_killComplete (fref, loc); 
			}
		    }
		  else
		    {
		      if (alkind_isKeep (tkind))
			{
			  sRef_setKept (fref, loc);
			}
		      else
			{
			  sRef_kill (fref, loc);
			}
		    }
		}
	    }
	}
    }
  else if (alkind_isOwned (tkind))
    {
      /* don't kill shared to suppress future messages */
      if (!alkind_isShared (fkind)) 
	{
	  if (!isassign 
	      || !sRef_sameName (fref, tref)) /* result of return parameter */
	    {
	      if (!ffix)
		{
		  if (!tfix)
		    {
		      sRef_setDependentComplete (fref, loc);
		    }
		  else
		    {
		      sRef_setDependent (fref, loc);
		    }
		}
	    }
	}
    }
  else if (alkind_isShared (tkind))
    {
      if (alkind_isFresh (fkind) || alkind_isLocal (fkind))
	{
	  if (!ffix) 
	    {
	      sRef_setShared (fref, loc);
	    }
	}
    }
  else if (alkind_isUnknown (tkind) && context_getFlag (FLG_MEMIMPLICIT))
    {
      if (alkind_isDependent (fkind))
	{
	  if (!exprNode_isNullValue (fexp)
	      && ctype_isMutable (exprNode_getType (fexp))
	      && (!iseitherassign || sRef_isReference (tref)))
	    {
	      if (canLoseReference (fref, loc))
		{
		  ;
		}
	      else
		{
		  if (optgenerror
		      (FLG_DEPENDENTTRANS,
		       message ("%s storage %q%q: %q",
				alkind_capName (fkind),
				sRef_unparseOpt (fref),
				transferErrorMessage (transferType, tkind),
				generateText (fexp, texp, tref, transferType)),
		       loc))
		    {
		      DPRINTF (("Here: %s / %s", sRef_unparseFull (fref),
				sRef_unparseFull (tref)));
		      sRef_showAliasInfo (fref);
		    }
		}
	    }
	}
    }
  else if (alkind_isNewRef (tkind))
    {
      if (!ffix && !tfix)
	{ 
	  sRef_killComplete (fref, loc);  
	}
    }
  else if (alkind_isKillRef (tkind))
    {
      if (transferType == TT_FCNRETURN)
	{
	  if (sRef_isNewRef (fref))
	    {
	      if (optgenerror
		  (FLG_REFCOUNTTRANS,
		   message ("New reference returned as temp reference: %q",
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  sRef_showAliasInfo (fref);
		}
	      }
	}
      else
	{
	  if (sRef_isNewRef (fref))
	    {
	      sRef_killComplete (fref, loc);
	    }
	  else 
	    {
	      if (sRef_isRefCounted (fref) 
		  && sRef_isCvar (fref)
		  && !sRef_isLocalVar (fref))
		{
		  if (optgenerror
		      (FLG_REFCOUNTTRANS,
		       message 
		       ("External reference counted storage released: %q",
			generateText (fexp, texp, tref, transferType)),
		       loc))
		    {
		      sRef_showAliasInfo (fref);
		    }
		}
	    }
	}
	  
    }
  else
    {
      ;
    }

  setCodePoint ();
}

/*
** assigns fexp := tref or passes fexp as a parameter, or returns fexp.
**
** For assignments, sets alias and definition state accordingly.
*/

static void
checkTransfer (exprNode fexp, sRef fref, exprNode texp, sRef tref, 
	       fileloc loc, transferKind transferType)
{
  setCodePoint ();

  if (context_inProtectVars ())
    {
            return;
    }

  /*
  ** for local references, we need to check
  ** the transfer for all possible aliases.
  */

  if (sRef_isLocalVar (tref) && transferType != TT_DOASSIGN)
    {    
      sRefSet alias = usymtab_allAliases (tref);

      sRefSet_realElements (alias, atref)
	{
	  sRef abase = sRef_getRootBase (atref);

	  if (sRef_isKnown (atref)
	      && !sRef_isLocalVar (abase) 
	      && !sRef_isExternal (abase))
	    {
	      atref = sRef_updateSref (atref);

	      if (sRef_hasName (atref))
		{
		  if (!sRef_isNew (atref) 
		      && !sRef_sameName (tref, atref))
		    {
		      context_setAliasAnnote (atref, tref);
		    }
		  
		  		  checkTransferAux (fexp, fref, TRUE, 
				    texp, atref, FALSE,
				    loc, transferType);
		  
		  context_clearAliasAnnote ();
		}
	    }
	} end_sRefSet_realElements;

      sRefSet_free (alias);
    }

  
  if (sRef_isLocalVar (fref))
    {    
      sRefSet alias = usymtab_allAliases (fref);

      sRefSet_realElements (alias, afref)
	{
	  sRef abase = sRef_getRootBase (afref);

	  if (sRef_isKnown (afref) 
	      && !sRef_isLocalVar (abase)
	      && !sRef_isExternal (abase))
	    {
	      afref = sRef_updateSref (afref);

	      if (sRef_hasName (afref))
		{
		  if (!sRef_isNew (afref) 
		      && !sRef_sameName (afref, fref))
		    {
		      		      context_setAliasAnnote (afref, fref);
		    }
		  
		  		  checkTransferAux (fexp, afref, FALSE,
				    texp, tref, TRUE,
				    loc, transferType);
		  
		  context_clearAliasAnnote ();
		}
	    }
	} end_sRefSet_realElements;

      sRefSet_free (alias);
    }
  
  setCodePoint ();

    checkTransferAux (fexp, fref, FALSE, texp, tref, FALSE, 
		    loc, transferType);

  setCodePoint ();  
}

static /*@exposed@*/ sRef 
  dependentReference (sRef sr)
{
  sRefSet ab = usymtab_aliasedBy (sr); /* yes, really mean aliasedBy */
  
  /*
  ** If there is a local variable that aliases sr, then there is no
  ** error.  Make the local an only.
  */
  
  if (!sRefSet_isEmpty (ab))
    {
      sRef res = sRef_undefined;

      /*
      ** make one an only, others alias it
      */
      
            
      sRefSet_realElements (ab, current)
	{
	  if (sRef_isOwned (current))
	    {
	      res = current; 
	      break;
	    }
	} end_sRefSet_realElements;

      sRefSet_free (ab);
      return res;
    }

  return sRef_undefined;
}

bool canLoseReference (sRef sr, fileloc loc)
{
  bool gotone = FALSE;
  sRefSet ab = usymtab_aliasedBy (sr); /* yes, really mean aliasedBy */
  
    
  /*
   ** if there is a local variable that aliases sr, then there is no
   ** error.  Make the local an only.
   */
  
  if (!sRefSet_isEmpty (ab))
    {
      /*
      ** make one an only, others alias it
      */
      
            
      sRefSet_realElements (ab, current)
	{
	  sRef_setLastReference (current, sr, loc);
	  gotone = TRUE;
	  break;
	} end_sRefSet_realElements;

      sRefSet_free (ab);
    }

  return gotone;
}

bool canLoseLocalReference (sRef sr, fileloc loc)
{
  bool gotone = FALSE;
  sRefSet ab = usymtab_aliasedBy (sr); /* yes, really mean aliasedBy */
  
    
  /*
   ** if there is a local variable that aliases sr, then there is no
   ** error.  Make the local an only.
   */
  
  if (!sRefSet_isEmpty (ab))
    {
      /*
      ** make one an only, others alias it
      */
      
            
      sRefSet_realElements (ab, current)
	{
	  if (sRef_isRealLocalVar (sRef_getRootBase (current)))
	    {
	      sRef_setLastReference (current, sr, loc);
	      gotone = TRUE;
	      break;
	    }
	} end_sRefSet_realElements;

      sRefSet_free (ab);
    }

  return gotone;
}


/*start modification */

/*added by David Larochelle 4/13/2000*/

/*this is modeled after checkTransferNullAux */

static void
checkTransferNullTerminatedAux (sRef fref, exprNode fexp,
				/*@unused@*/ bool ffix,
		      sRef tref, exprNode texp, /*@unused@*/ bool tfix,
		      fileloc loc, transferKind transferType)
{
  alkind tkind = sRef_getAliasKind (tref);
  ctype ttyp = ctype_realType (sRef_getType (tref));

/* DEBUG
  printf  ("checking for fexp-%s\n", exprNode_unparse(fexp));
  printf  ("checking for texp-%s\n", exprNode_unparse(texp));
*/

  if (ctype_isUnknown (ttyp))
    {
      ttyp = exprNode_getType (texp);
      
      if (ctype_isUnknown (ttyp))
	{
	  ttyp = exprNode_getType (fexp);

	  if (ctype_isUnknown (ttyp))
	    {
	      ttyp = sRef_getType (fref);
	    }
	}
    }

  if (ctype_isFunction (ttyp) && (transferType == TT_FCNRETURN))
    {
      ttyp = ctype_returnValue (ttyp);
    }

  /*
  ** check for null terminated (don't need to check aliases??)
  */

  if (!sRef_isNullTerminated (fref) 
      && !usymtab_isGuarded (fref) 
      && ctype_isRealAP (ttyp))
    {
      if (!alkind_isLocal (tkind) && !alkind_isFresh (tkind)
	  //this should be perhapsNullTerminated but I didn't want to write
	  && (sRef_isPossiblyNullTerminated (tref) ||
                           sRef_isNullTerminated (tref))
	  && !(transferType == TT_DOASSIGN))
	{
	  if (transferType == TT_GLOBINIT)
	    {
	      printf("-----------------------------------NULLTERMINATED ERROR1\n");
              if (sRef_isPossiblyNullTerminated (fref)) {
	        if (lloptgenerror
		  (FLG_NULLTERMINATEDWARNING, 
		  message ("%s %q initialized to %s value: %q",
			    sRef_getScopeName (tref),
			    sRef_unparse (tref),
			    sRef_ntMessage (fref),
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{

		  printf ("NULLTERMINATED REFERENCE ERROR\n");
		  // printf ("First way\n");
		}
 
              } else {
	      
	        if (lloptgenerror
		  (FLG_NULLTERMINATED, 
		  message ("%s %q initialized to %s value: %q",
			    sRef_getScopeName (tref),
			    sRef_unparse (tref),
			    sRef_ntMessage (fref),
			    generateText (fexp, texp, tref, transferType)),
		   loc))
		{

		  printf ("NULLTERMINATED REFERENCE ERROR\n");
		  // printf ("First way\n");
		}
 
	        printf("-----------------------------\n\n");

              }
	    }
	  else
	    {
	      printf("****************************NULLTERMINATED ERROR2\n");
	      //		  ((transferType == TT_FCNPASS) ? FLG_NULLPASS : FLG_NULLRET,

              if (sRef_isPossiblyNullTerminated (fref))
	      {
		
	        if (lloptgenerror
		  (FLG_NULLTERMINATEDWARNING, 
		  message ("%q storage %q%s: %q",
			   /*@i777@*/cstring_capitalize (sRef_ntMessage (fref)),
			   sRef_unparseOpt (fref),
			   transferNTMessage (transferType), 
			   generateText (fexp, texp, tref, transferType)),
		   loc))
		{

		  printf ("NULLTERMINATED REFERENCE ERROR\n");
		  // printf ("First way\n");
		}
 
              } else {
	        if (lloptgenerror
		  ((transferType == TT_FCNPASS) ? FLG_NULLTERMINATED: FLG_NULLTERMINATED,
		  message ("%q storage %q%s: %q",
			   /*@i77@*/cstring_capitalize (sRef_ntMessage (fref)),
			   sRef_unparseOpt (fref),
			   transferNTMessage (transferType), 
			   generateText (fexp, texp, tref, transferType)),
		   loc))
		{
		  //  sRef_showNullInfo (fref);
		  // sRef_setNullError (fref);
		  printf ("SYMBOL REFERENCED IS NOT NULLTERMINATED!\n");

		}
	        printf("*******************************=\n\n");
             }
	    }
	}
      else
	{
	  ;
	}
    }  
}
/* end modification */


