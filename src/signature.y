/*;-*-C-*-;
** Copyright (c) Massachusetts Institute of Technology 1994-1998.
**          All Rights Reserved.
**          Unpublished rights reserved under the copyright laws of
**          the United States.
**
** THIS MATERIAL IS PROVIDED AS IS, WITH ABSOLUTELY NO WARRANTY EXPRESSED
** OR IMPLIED.  ANY USE IS AT YOUR OWN RISK.
**
** This code is distributed freely and may be used freely under the 
** following conditions:
**
**     1. This notice may not be removed or altered.
**
**     2. Works derived from this code are not distributed for
**        commercial gain without explicit permission from MIT 
**        (for permission contact lclint-request@sds.lcs.mit.edu).
*/
/*
**	 Copyright (c) Massachusetts Institute of Technology, 1993
**	    All Rights Reserved.  Unpublished rights reserved
**	    under the copyright laws of the United States.
**++
**  FACILITY:  LSLC
**
**  MODULE DESCRIPTION:
**
**      FILENAME: signature.y
**
**	PURPOSE:  bison grammar for LSL signatures.
** 
**  AUTHOR:
**	Yang Meng Tan, Massachusetts Institute of Technology
*/

%{

# include "bison.reset"

# include <stdio.h>
# include "lclintMacros.nf"
# include "llbasic.h"
# include "lslparse.h"
# include "signature.h"

void lslerror (char *);
/*@dependent@*/ /*@null@*/ lslOp importedlslOp;

/*@-noparams@*/ /* Can't list params since YYSTYPE isn't defined yet. */
static void yyprint (/*FILE *p_file, int p_type, YYSTYPE p_value */);
/*@=noparams@*/

# define YYPRINT(file, type, value) yyprint (file, type, value)

# define YYDEBUG 1

# include "bison.head"

%}

%pure_parser 

/* CONVENTIONS:  Reserved words are in ALL CAPS (plus markerSym)
		Characters appearing in the grammar are reserved:
						% ( ) , : \ */

/* Changes made
   - added LBRACKET stuff in OpForm (missing in LSL)
   - dif from LCL: open vs openSym, close vs closeSym
   - yylval vs yylval.tok
*/

%union {
  ltoken ltok;  /* a leaf is also an ltoken */
  unsigned int count;
  /*@only@*/  ltokenList ltokenList;
  /*@only@*/  opFormNode opform;
  /*@owned@*/ sigNode signature;
  /*@only@*/  nameNode name;
  /*@owned@*/ lslOp operator;
  /*@only@*/  lslOpList operators;
}

%token <ltok> LST_SIMPLEID
%token <ltok> LST_LOGICALOP         /* \implies, \and, \not, \or */
%token <ltok> LST_EQOP              /* \eq, \neq, ==, != */
%token <ltok> LST_SIMPLEOP          /* opSym - reserved */
%token <ltok> LST_MAPSYM            /* LSL's -> */
  /* FIELDMAPSYM = "\\field_arrow", only for LCL symtable import */
%token <ltok> LST_FIELDMAPSYM       /* LCL's struct field operator -> */
%token <ltok> LST_MARKERSYM         /* \marker, __ */
%token <ltok> LST_ifTOKEN LST_thenTOKEN LST_elseTOKEN
  /* different from LSL: separate LBRACKET from openSym and
     RBRACKET from closeSym */
%token <ltok> LST_LBRACKET LST_RBRACKET
%token <ltok> LST_SELECTSYM         /* \select or . */
%token <ltok> LST_SEPSYM LST_OPENSYM LST_CLOSESYM
%token <ltok> LST_COLON             /* : */
%token <ltok> LST_COMMA             /* , */
%token <ltok> LST_EOL LST_COMMENTSYM LST_WHITESPACE 

%token LST_WHITESPACE
%token LST_QUANTIFIERSYM
%token LST_EQUATIONSYM
%token LST_EQSEPSYM
%token LST_COMPOSESYM
%token LST_LPAR
%token LST_RPAR
%token LST_assertsTOKEN
%token LST_assumesTOKEN
%token LST_byTOKEN
%token LST_convertsTOKEN
%token LST_enumerationTOKEN
%token LST_equationsTOKEN
%token LST_exemptingTOKEN
%token LST_forTOKEN
%token LST_generatedTOKEN 
%token LST_impliesTOKEN 
%token LST_includesTOKEN
%token LST_introducesTOKEN
%token LST_ofTOKEN
%token LST_partitionedTOKEN
%token LST_traitTOKEN
%token LST_tupleTOKEN
%token LST_unionTOKEN
%token LST_BADTOKEN

%type <ltok> anyOp separator sortId opId
%type <count> middle placeList
%type <ltokenList> domain sortList
%type <opform> opForm
%type <signature> signature
%type <name> name 
%type <operator> operator
%type <operators> operatorList top

%%

top: operatorList { lslOpList_free ($1); } 
 
operatorList: operator 
              { lslOpList x = lslOpList_new ();
		g_importedlslOp = $1;
		lslOpList_add (x, $1);
 		$$ = x; }
            | operatorList operator
              { lslOpList_add ($1, $2);
		$$ = $1; } 

operator: name LST_COLON signature 
          { $$ = makelslOpNode ($1, $3); }
/* The next production is never used in the output of lsl -syms 
          |  name
          { $$ = makelslOpNode ($1, (sigNode)0); } */
 
name: opId /* check for the case of if_then_else */
      { $$ = makeNameNodeId ($1); } 
    | opForm
      { $$ = makeNameNodeForm ($1); }
 
opForm 
     : LST_ifTOKEN LST_MARKERSYM LST_thenTOKEN LST_MARKERSYM LST_elseTOKEN LST_MARKERSYM
       { $$ = makeOpFormNode ($1, OPF_IF, opFormUnion_createMiddle (0), ltoken_undefined); }
     | anyOp
       { $$ = makeOpFormNode ($1, OPF_ANYOP, opFormUnion_createAnyOp ($1), ltoken_undefined); }
     | LST_MARKERSYM anyOp
       { $$ = makeOpFormNode ($1, OPF_MANYOP, opFormUnion_createAnyOp ($2), ltoken_undefined); }
     | anyOp LST_MARKERSYM
       { $$ = makeOpFormNode ($1, OPF_ANYOPM, opFormUnion_createAnyOp ($1), ltoken_undefined); }
     | LST_MARKERSYM anyOp LST_MARKERSYM
       { $$ = makeOpFormNode ($1, OPF_MANYOPM, opFormUnion_createAnyOp ($2), ltoken_undefined); }
     | LST_OPENSYM middle LST_CLOSESYM
       { $$ = makeOpFormNode ($1, OPF_MIDDLE, opFormUnion_createMiddle ($2), $3); }
     | LST_MARKERSYM LST_OPENSYM middle LST_CLOSESYM
       { $$ = makeOpFormNode ($2, OPF_MMIDDLE, opFormUnion_createMiddle ($3), $4); }
     | LST_OPENSYM middle LST_CLOSESYM LST_MARKERSYM
       { $$ = makeOpFormNode ($1, OPF_MIDDLEM, opFormUnion_createMiddle ($2), $3); }
     | LST_MARKERSYM LST_OPENSYM middle LST_CLOSESYM LST_MARKERSYM
       { $$ = makeOpFormNode ($2, OPF_MMIDDLEM, 
			      opFormUnion_createMiddle ($3), $4); }
     | LST_LBRACKET middle LST_RBRACKET
       { $$ = makeOpFormNode ($1, OPF_BMIDDLE, 
			      opFormUnion_createMiddle ($2), $3); }
     | LST_MARKERSYM LST_LBRACKET middle LST_RBRACKET 
       { $$ = makeOpFormNode ($2, OPF_BMMIDDLE, 
			      opFormUnion_createMiddle ($3), $4); }
     | LST_LBRACKET middle LST_RBRACKET LST_MARKERSYM
     { $$ = makeOpFormNode ($1, OPF_BMIDDLEM, 
			    opFormUnion_createMiddle ($2), $3); }
     | LST_MARKERSYM LST_LBRACKET middle LST_RBRACKET LST_MARKERSYM
     { $$ = makeOpFormNode ($2, OPF_BMMIDDLEM, 
			    opFormUnion_createMiddle ($3), $4); }
     | LST_SELECTSYM LST_SIMPLEID
     { $$ = makeOpFormNode ($1, OPF_SELECT, 
			    opFormUnion_createAnyOp ($2), ltoken_undefined); }
     | LST_MARKERSYM LST_SELECTSYM LST_SIMPLEID
     { $$ = makeOpFormNode ($1, OPF_MSELECT, 
			    opFormUnion_createAnyOp ($3), ltoken_undefined); }
        /* not in LSL, need FILEDMAPSYM to distinguish it from MAPSYM */ 
        /* LST_FIELDMAPSYM = "\\field_arrow", only for LCL symtable import */
     | LST_MARKERSYM LST_FIELDMAPSYM LST_SIMPLEID
     { $$ = makeOpFormNode ($1, OPF_MMAP, 
			    opFormUnion_createAnyOp ($3), ltoken_undefined); }
			  

anyOp: LST_SIMPLEOP
       { $$ = $1; }
     | LST_LOGICALOP
       { $$ = $1; }
     | LST_EQOP
       { $$ = $1; }

middle: /* empty */
        { $$ = 0; }      
      | placeList
        { $$ = $1; }      
 
placeList: LST_MARKERSYM
           { $$ = 1; }      
         | placeList separator LST_MARKERSYM
           { $$ = $1 + 1; }      
 
separator: LST_COMMA
           { $$ = $1; }      
         | LST_SEPSYM
           { $$ = $1; }      

signature: domain LST_MAPSYM sortId
           { $$ = makesigNode ($2, $1, $3); }

domain: /* empty */
        { $$ = ltokenList_new (); } 
      | sortList
        { $$ = $1; }
 
sortList: sortId
          { $$ = ltokenList_singleton ($1); } 
        | sortList LST_COMMA sortId
          { $$ = ltokenList_push ($1, $3); }  

sortId: LST_SIMPLEID 
        { 
	  $$ = $1; 
	  ltoken_setText ($$, processTraitSortId (ltoken_getText ($1))); 
	} 

opId: LST_SIMPLEID
      { $$ = $1; }
%%

# include "bison.reset"

extern char *yytext;

void lslerror (char *s) 
{
  llfatalbug 
    (cstring_makeLiteral 
     ("There has been a problem parsing an LSL signature. This is believed to "
      "result from a problem with gcc version 2.95 optimizations, "
      "but it has not been confirmed.  Please try rebuidling LCLint "
      "without the -O<n> option."));

}

static void yyprint (FILE *file, int type, YYSTYPE value)
{
  fprintf (file, " (%u:%u type: %d; text: %s) ", 
	   ltoken_getLine (value.ltok), 
	   ltoken_getCol (value.ltok), 
	   type, 
	   ltoken_getRawTextChars (value.ltok));
}

extern void PrintToken (ltoken tok) {
  char *codStr;
  
  switch (ltoken_getCode (tok)) 
    {
    case NOTTOKEN:          codStr = "*** NOTTOKEN ***"; break;
    case LST_QUANTIFIERSYM: codStr = "QUANTIFIERSYM"; break;
    case LST_LOGICALOP:     codStr = "LOGICALOP: "; break; 
    case LST_SELECTSYM:     codStr = "LST_SELECTSYM"; break;
    case LST_OPENSYM:	    codStr = "LST_OPENSYM"; break;
    case LST_SEPSYM:	    codStr = "SEPSYM"; break;
    case LST_CLOSESYM:	    codStr = "LST_CLOSESYM"; break;
    case LST_SIMPLEID:	    codStr = "LST_SIMPLEID"; break;
    case LST_MAPSYM:	    codStr = "MAPSYM"; break;
    case LST_MARKERSYM:	    codStr = "LST_MARKERSYM"; break;
    case LST_COMMENTSYM:    codStr = "COMMENTSYM"; break;
    case LST_SIMPLEOP:	    codStr = "SIMPLEOP"; break;
    case LST_COLON:         codStr = "LST_COLON"; break;
    case LST_COMMA:	    codStr = "COMMA"; break;
    case LST_LBRACKET:	    codStr = "LST_LBRACKET"; break;
    case LST_LPAR:	    codStr = "LST_LPAR"; break;
    case LST_RBRACKET:	    codStr = "LST_RBRACKET"; break;
    case LST_RPAR:          codStr = "LST_RPAR"; break;
    case LST_EQOP:          codStr = "LST_EQOP"; break;
    case LST_WHITESPACE:    codStr = "WHITESPACE,"; break;
    case LST_EOL:           codStr = "LST_EOL"; break;
    case LST_elseTOKEN:     codStr = "elseTOKEN"; break;
    case LST_ifTOKEN:       codStr = "ifTOKEN"; break;
    case LST_thenTOKEN:     codStr = "thenTOKEN"; break;
    case LST_BADTOKEN:      codStr = "*** BADTOKEN ***"; break;
    case LEOFTOKEN: /* can't reach LEOFTOKEN easily */
      codStr = "LEOFTOKEN"; break;
    default:
      codStr = "*** invalid token code ***";
      break;
    } /* end switch */
  
  /* only used for debugging */
  printf ("%u:%u: Token Code (%u): %s",
	  ltoken_getLine (tok), ltoken_getCol (tok), 
	  ltoken_getCode (tok), codStr);
  if (ltoken_getRawText (tok) != 0) 
    {
      printf (", Token String (%lu): %s\n", 
	      ltoken_getRawText (tok), ltoken_getRawTextChars (tok));
    }
  else printf ("\n");
}




