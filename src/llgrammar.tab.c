
/*  A Bison parser, made from llgrammar.y
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

#define yyparse ylparse
#define yylex yllex
#define yyerror ylerror
#define yylval yllval
#define yychar ylchar
#define yydebug yldebug
#define yynerrs ylnerrs
#define	simpleOp	258
#define	PREFIX_OP	259
#define	POSTFIX_OP	260
#define	LLT_MULOP	261
#define	LLT_SEMI	262
#define	LLT_VERTICALBAR	263
#define	ITERATION_OP	264
#define	LLT_LPAR	265
#define	LLT_LBRACKET	266
#define	selectSym	267
#define	LLT_IF_THEN_ELSE	268
#define	logicalOp	269
#define	eqSepSym	270
#define	equationSym	271
#define	commentSym	272
#define	LLT_WHITESPACE	273
#define	LLT_EOL	274
#define	LLT_TYPEDEF_NAME	275
#define	quantifierSym	276
#define	openSym	277
#define	closeSym	278
#define	sepSym	279
#define	simpleId	280
#define	mapSym	281
#define	markerSym	282
#define	preSym	283
#define	postSym	284
#define	anySym	285
#define	LLT_COLON	286
#define	LLT_COMMA	287
#define	LLT_EQUALS	288
#define	LLT_LBRACE	289
#define	LLT_RBRACE	290
#define	LLT_RBRACKET	291
#define	LLT_RPAR	292
#define	LLT_QUOTE	293
#define	eqOp	294
#define	LLT_CCHAR	295
#define	LLT_CFLOAT	296
#define	LLT_CINTEGER	297
#define	LLT_LCSTRING	298
#define	LLT_ALL	299
#define	LLT_ANYTHING	300
#define	LLT_BE	301
#define	LLT_BODY	302
#define	LLT_CLAIMS	303
#define	LLT_CHECKS	304
#define	LLT_CONSTANT	305
#define	LLT_ELSE	306
#define	LLT_ENSURES	307
#define	LLT_FOR	308
#define	LLT_FRESH	309
#define	LLT_IF	310
#define	LLT_IMMUTABLE	311
#define	LLT_IMPORTS	312
#define	LLT_CONSTRAINT	313
#define	LLT_ISSUB	314
#define	LLT_LET	315
#define	LLT_MODIFIES	316
#define	LLT_MUTABLE	317
#define	LLT_NOTHING	318
#define	LLT_INTERNAL	319
#define	LLT_FILESYS	320
#define	LLT_OBJ	321
#define	LLT_OUT	322
#define	LLT_SEF	323
#define	LLT_ONLY	324
#define	LLT_PARTIAL	325
#define	LLT_OWNED	326
#define	LLT_DEPENDENT	327
#define	LLT_KEEP	328
#define	LLT_KEPT	329
#define	LLT_TEMP	330
#define	LLT_SHARED	331
#define	LLT_UNIQUE	332
#define	LLT_UNUSED	333
#define	LLT_EXITS	334
#define	LLT_MAYEXIT	335
#define	LLT_NEVEREXIT	336
#define	LLT_TRUEEXIT	337
#define	LLT_FALSEEXIT	338
#define	LLT_UNDEF	339
#define	LLT_KILLED	340
#define	LLT_CHECKMOD	341
#define	LLT_CHECKED	342
#define	LLT_UNCHECKED	343
#define	LLT_CHECKEDSTRICT	344
#define	LLT_TRUENULL	345
#define	LLT_FALSENULL	346
#define	LLT_LNULL	347
#define	LLT_LNOTNULL	348
#define	LLT_RETURNED	349
#define	LLT_OBSERVER	350
#define	LLT_EXPOSED	351
#define	LLT_REFCOUNTED	352
#define	LLT_REFS	353
#define	LLT_RELNULL	354
#define	LLT_RELDEF	355
#define	LLT_KILLREF	356
#define	LLT_NULLTERMINATED	357
#define	LLT_TEMPREF	358
#define	LLT_NEWREF	359
#define	LLT_PRIVATE	360
#define	LLT_REQUIRES	361
#define	LLT_RESULT	362
#define	LLT_SIZEOF	363
#define	LLT_SPEC	364
#define	LLT_TAGGEDUNION	365
#define	LLT_THEN	366
#define	LLT_TYPE	367
#define	LLT_TYPEDEF	368
#define	LLT_UNCHANGED	369
#define	LLT_USES	370
#define	LLT_CHAR	371
#define	LLT_CONST	372
#define	LLT_DOUBLE	373
#define	LLT_ENUM	374
#define	LLT_FLOAT	375
#define	LLT_INT	376
#define	LLT_ITER	377
#define	LLT_YIELD	378
#define	LLT_LONG	379
#define	LLT_SHORT	380
#define	LLT_SIGNED	381
#define	LLT_UNKNOWN	382
#define	LLT_STRUCT	383
#define	LLT_TELIPSIS	384
#define	LLT_UNION	385
#define	LLT_UNSIGNED	386
#define	LLT_VOID	387
#define	LLT_VOLATILE	388
#define	LLT_PRINTFLIKE	389
#define	LLT_SCANFLIKE	390
#define	LLT_MESSAGELIKE	391

#line 36 "llgrammar.y"


# include "lclintMacros.nf"
# include "llbasic.h"
# include "lclscan.h"
# include "checking.h"
# include "lslparse.h" 
# include "lh.h"
# include "usymtab_interface.h"

/*@-noparams@*/
static /*@unused@*/ void yyprint ();
/*@=noparams@*/

/*@-redecl@*/
void ylerror (char *) /*@modifies *g_msgstream@*/ ;
/*@=redecl@*/

bool g_inTypeDef = FALSE;

/*@constant int YYDEBUG;@*/
# define YYDEBUG 1

/*@notfunction@*/
# define YYPRINT(file, type, value) yyprint (file, type, value)

/*
** This is necessary, or else when the bison-generated code #include's malloc.h,
** there will be a parse error.
**
** Unfortunately, it means the error checking on malloc, etc. is lost for allocations
** in bison-generated files under Win32.
*/

# ifdef WIN32
# undef malloc
# undef calloc
# undef realloc
# endif


#line 78 "llgrammar.y"
typedef union 
{
  ltoken ltok;  /* a leaf is also an ltoken */
  qual typequal;
  unsigned int count;
  /*@only@*/ ltokenList ltokenList;
  /*@only@*/ abstDeclaratorNode abstDecl; 
  /*@only@*/ declaratorNode declare;
  /*@only@*/ declaratorNodeList declarelist;
  /*@only@*/ typeExpr typeexpr;
  /*@only@*/ arrayQualNode array;
  /*@only@*/ quantifierNode quantifier;
  /*@only@*/ quantifierNodeList quantifiers;
  /*@only@*/ varNode var;
  /*@only@*/ varNodeList vars;
  /*@only@*/ storeRefNode storeref;
  /*@only@*/ storeRefNodeList storereflist;
  /*@only@*/ termNode term;
  /*@only@*/ termNodeList termlist;
  /*@only@*/ programNode program; 
  /*@only@*/ stmtNode stmt;
  /*@only@*/ claimNode claim;
  /*@only@*/ typeNode type;
  /*@only@*/ iterNode iter;
  /*@only@*/ fcnNode fcn;
  /*@only@*/ fcnNodeList fcns;
  /*@only@*/ letDeclNode letdecl;
  /*@only@*/ letDeclNodeList letdecls;
  /*@only@*/ lclPredicateNode lclpredicate;
  /*@only@*/ modifyNode modify;
  /*@only@*/ paramNode param;
  /*@only@*/ paramNodeList paramlist;
  /*@only@*/ declaratorInvNodeList declaratorinvs;	
  /*@only@*/ declaratorInvNode declaratorinv;	
  /*@only@*/ abstBodyNode abstbody;
  /*@only@*/ abstractNode abstract;
  /*@only@*/ exposedNode exposed;
  /*    taggedUnionNode taggedunion; */
  /*@only@*/ globalList globals;
  /*@only@*/ constDeclarationNode constdeclaration;
  /*@only@*/ varDeclarationNode vardeclaration;
  /*@only@*/ varDeclarationNodeList vardeclarationlist;
  /*@only@*/ initDeclNodeList initdecls;
  /*@only@*/ initDeclNode initdecl;
  /*@only@*/ stDeclNodeList structdecls;
  /*@only@*/ stDeclNode structdecl;
  /*@only@*/ strOrUnionNode structorunion;
  /*@only@*/ enumSpecNode enumspec; 
  /*@only@*/ lclTypeSpecNode lcltypespec;
  /*@only@*/ typeNameNode typname;
  /*@only@*/ opFormNode opform;
  /*@only@*/ sigNode signature;
  /*@only@*/ nameNode name;
  /*@only@*/ typeNameNodeList namelist;
  /*@only@*/ replaceNode replace;	
  /*@only@*/ replaceNodeList replacelist;
  /*@only@*/ renamingNode renaming;
  /*@only@*/ traitRefNode traitref;
  /*@only@*/ traitRefNodeList traitreflist;
  /*@only@*/ importNode import;
  /*@only@*/ importNodeList importlist;
  /*@only@*/ interfaceNode iface;
  /*@only@*/ interfaceNodeList interfacelist; 
  /*@only@*/ CTypesNode ctypes;
} YYSTYPE;
#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		684
#define	YYFLAG		-32768
#define	YYNTBASE	137

#define YYTRANSLATE(x) ((unsigned)(x) <= 391 ? yytranslate[x] : 291)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
   106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     5,     6,     9,    11,    13,    14,    17,    20,
    21,    24,    26,    28,    30,    34,    38,    40,    42,    44,
    46,    48,    50,    57,    58,    60,    62,    66,    69,    71,
    72,    76,    78,    80,    82,    84,    89,    93,    98,   103,
   105,   107,   109,   111,   113,   114,   128,   129,   144,   145,
   159,   164,   165,   166,   173,   174,   175,   183,   184,   185,
   193,   194,   195,   202,   203,   204,   211,   214,   217,   219,
   223,   225,   229,   231,   233,   237,   239,   241,   245,   247,
   252,   256,   263,   265,   269,   271,   273,   277,   279,   283,
   285,   289,   293,   297,   302,   304,   306,   308,   310,   312,
   316,   318,   322,   323,   326,   330,   333,   336,   337,   340,
   345,   346,   350,   352,   356,   362,   366,   368,   369,   373,
   374,   378,   379,   383,   387,   391,   393,   397,   399,   401,
   404,   406,   408,   409,   413,   414,   418,   419,   421,   423,
   425,   429,   431,   435,   436,   441,   447,   449,   453,   456,
   460,   464,   469,   473,   479,   486,   488,   492,   494,   496,
   499,   502,   506,   510,   514,   519,   521,   525,   530,   534,
   535,   538,   539,   541,   542,   549,   551,   555,   556,   560,
   561,   565,   567,   569,   571,   573,   575,   577,   579,   581,
   583,   585,   587,   590,   592,   594,   596,   598,   600,   602,
   604,   606,   608,   610,   612,   614,   616,   618,   620,   622,
   624,   626,   628,   630,   632,   634,   636,   638,   640,   642,
   644,   646,   648,   650,   652,   654,   656,   658,   660,   662,
   664,   666,   668,   670,   672,   675,   681,   683,   686,   688,
   691,   692,   699,   700,   707,   710,   713,   714,   716,   718,
   721,   725,   727,   731,   732,   734,   741,   744,   746,   750,
   752,   754,   756,   760,   763,   766,   770,   775,   777,   781,
   784,   787,   791,   796,   798,   801,   804,   808,   813,   816,
   819,   822,   825,   829,   831,   832,   834,   838,   841,   843,
   845,   848,   852,   856,   861,   864,   868,   875,   877,   880,
   883,   887,   891,   896,   901,   907,   911,   916,   921,   927,
   930,   933,   937,   941,   943,   945,   947,   949,   951,   953,
   955,   956,   958,   960,   964,   966,   968,   973,   974,   976,
   978,   982,   984,   986,   993,   995,   999,  1001,  1006,  1010,
  1014,  1016,  1019,  1022,  1024,  1026,  1028,  1031,  1033,  1036,
  1039,  1043,  1045,  1047,  1050,  1053,  1057,  1059,  1062,  1066,
  1068,  1074,  1078,  1083,  1086,  1090,  1093,  1095,  1099,  1103,
  1105,  1110,  1112,  1115,  1119,  1123,  1127,  1132,  1136,  1138,
  1142,  1144,  1146,  1148,  1150,  1152,  1154,  1159,  1164,  1169,
  1174,  1181,  1186,  1188,  1190,  1192,  1194,  1196,  1199,  1200,
  1204,  1206,  1210,  1214,  1219,  1221,  1223,  1225,  1227,  1229,
  1231,  1233,  1235
};

static const short yyrhs[] = {    -1,
   139,   138,   141,     0,     0,   139,   140,     0,   144,     0,
   145,     0,     0,   146,   142,     0,   151,   142,     0,     0,
   142,   143,     0,   146,     0,   151,     0,   145,     0,    57,
   175,     7,     0,   115,   179,     7,     0,   154,     0,   155,
     0,   156,     0,   158,     0,   161,     0,   147,     0,   122,
   285,    10,   148,    37,     7,     0,     0,   149,     0,   150,
     0,   149,    32,   150,     0,   123,   244,     0,   244,     0,
     0,   109,   152,   153,     0,   154,     0,   155,     0,   156,
     0,   158,     0,    50,   227,   189,     7,     0,   227,   189,
     7,     0,   117,   227,   189,     7,     0,   133,   227,   189,
     7,     0,   163,     0,   172,     0,   134,     0,   135,     0,
   136,     0,     0,   227,   240,   191,   159,    34,   193,   195,
   199,   200,   201,   204,   205,    35,     0,     0,   157,   227,
   240,   191,   160,    34,   193,   195,   199,   200,   201,   204,
   205,    35,     0,     0,    48,   287,    10,   206,    37,   191,
   162,    34,   195,   200,   209,   204,    35,     0,    48,   284,
   287,     7,     0,     0,     0,    62,   164,   112,    20,   165,
   214,     0,     0,     0,    62,   166,    97,   112,    20,   167,
   214,     0,     0,     0,    97,    62,   168,   112,    20,   169,
   214,     0,     0,     0,    56,   170,   112,    20,   171,   214,
     0,     0,     0,   113,   227,   173,   219,   174,     7,     0,
   230,     7,     0,   238,     7,     0,   176,     0,   175,    32,
   176,     0,   178,     0,     3,   178,     3,     0,    43,     0,
   178,     0,   177,    32,   178,     0,   283,     0,   180,     0,
   179,    32,   180,     0,   289,     0,   289,    10,   182,    37,
     0,    10,   181,    37,     0,    10,   181,    37,    10,   182,
    37,     0,   289,     0,   181,    32,   289,     0,   184,     0,
   183,     0,   183,    32,   184,     0,   245,     0,   183,    32,
   245,     0,   185,     0,   184,    32,   185,     0,   245,    53,
   223,     0,   245,    53,   186,     0,   245,    53,   186,   256,
     0,   290,     0,   249,     0,   188,     0,   260,     0,   190,
     0,   189,    32,   190,     0,   240,     0,   240,    33,   187,
     0,     0,   191,   192,     0,   227,   189,     7,     0,    64,
     7,     0,    65,     7,     0,     0,   193,   194,     0,   105,
   227,   189,     7,     0,     0,    60,   196,     7,     0,   197,
     0,   196,    32,   197,     0,   285,    31,   198,    46,   260,
     0,   285,    46,   260,     0,   227,     0,     0,    49,   259,
     7,     0,     0,   106,   259,     7,     0,     0,    61,    63,
     7,     0,    61,    45,     7,     0,    61,   202,     7,     0,
   203,     0,   202,    32,   203,     0,   260,     0,   228,     0,
    66,   228,     0,    64,     0,    65,     0,     0,    52,   259,
     7,     0,     0,    48,   259,     7,     0,     0,   207,     0,
   208,     0,   129,     0,   208,    32,   129,     0,   244,     0,
   208,    32,   244,     0,     0,    47,    34,   210,    35,     0,
    47,    34,   210,     7,    35,     0,   211,     0,    10,   210,
    37,     0,   210,     6,     0,   210,     8,   210,     0,   210,
     7,   210,     0,   284,    10,   212,    37,     0,   284,    10,
    37,     0,   285,    33,   284,    10,    37,     0,   285,    33,
   284,    10,   212,    37,     0,   213,     0,   212,    32,   213,
     0,   277,     0,   285,     0,     3,   213,     0,   213,     3,
     0,   213,     3,   213,     0,    10,   213,    37,     0,   284,
    10,    37,     0,   284,    10,   212,    37,     0,     7,     0,
    34,   215,    35,     0,    34,   177,    35,     7,     0,    34,
    35,     7,     0,     0,   215,   158,     0,     0,   217,     0,
     0,    58,   218,   279,    10,   259,    37,     0,   220,     0,
   219,    32,   220,     0,     0,   240,   221,   222,     0,     0,
    34,   216,    35,     0,   132,     0,   116,     0,   118,     0,
   120,     0,   121,     0,   124,     0,   125,     0,   126,     0,
   131,     0,   127,     0,   223,     0,   224,   223,     0,    20,
     0,   224,     0,    67,     0,    78,     0,    68,     0,    69,
     0,    71,     0,    72,     0,    73,     0,    74,     0,    95,
     0,    79,     0,    80,     0,    82,     0,    83,     0,    81,
     0,    75,     0,    76,     0,    77,     0,    87,     0,    88,
     0,    89,     0,    90,     0,    91,     0,    99,     0,   100,
     0,    97,     0,    98,     0,   104,     0,   101,     0,    92,
     0,    93,     0,    94,     0,    96,     0,    70,     0,   102,
     0,    84,     0,    85,     0,   225,     0,   230,     0,   238,
     0,   226,   227,     0,     8,   228,    31,   228,     8,     0,
   227,     0,   227,   229,     0,     6,     0,   229,     6,     0,
     0,   128,   233,   231,    34,   234,    35,     0,     0,   130,
   233,   232,    34,   234,    35,     0,   128,   286,     0,   130,
   286,     0,     0,   286,     0,   235,     0,   234,   235,     0,
   227,   236,     7,     0,   240,     0,   236,    32,   240,     0,
     0,    32,     0,   119,   233,    34,   239,   237,    35,     0,
   119,   286,     0,    25,     0,   239,    32,    25,     0,   242,
     0,   241,     0,   285,     0,    10,   241,    37,     0,     6,
   241,     0,   241,   248,     0,   241,    10,    37,     0,   241,
    10,   207,    37,     0,    20,     0,    10,   242,    37,     0,
     6,   242,     0,   242,   248,     0,   242,    10,    37,     0,
   242,    10,   207,    37,     0,    20,     0,     6,   243,     0,
   243,   248,     0,   243,    10,    37,     0,   243,    10,   207,
    37,     0,   227,   243,     0,   227,   241,     0,   227,   246,
     0,   227,   246,     0,    66,   227,   246,     0,   249,     0,
     0,   247,     0,    10,   247,    37,     0,     6,   247,     0,
     6,     0,   248,     0,   247,   248,     0,   247,    10,    37,
     0,    10,   207,    37,     0,   247,    10,   207,    37,     0,
    11,    36,     0,    11,   188,    36,     0,    55,    27,   111,
    27,    51,    27,     0,   252,     0,    27,   252,     0,   252,
    27,     0,    27,   252,    27,     0,   250,   253,   251,     0,
    27,   250,   253,   251,     0,   250,   253,   251,    27,     0,
    27,   250,   253,   251,    27,     0,    11,   253,    36,     0,
    11,   253,    36,    27,     0,    27,    11,   253,    36,     0,
    27,    11,   253,    36,    27,     0,    12,   283,     0,    26,
   283,     0,    27,    12,   283,     0,    27,    26,   283,     0,
    22,     0,    34,     0,    23,     0,    35,     0,   264,     0,
    14,     0,    39,     0,     0,   254,     0,    27,     0,   254,
   255,    27,     0,    32,     0,    24,     0,    31,   257,    26,
   288,     0,     0,   258,     0,   288,     0,   258,    32,   288,
     0,   260,     0,   261,     0,    55,   261,   111,   261,    51,
   261,     0,   262,     0,   261,    14,   261,     0,   263,     0,
   278,    10,   259,    37,     0,   263,    39,   263,     0,   263,
    33,   263,     0,   265,     0,   268,   266,     0,   268,   267,
     0,     3,     0,     6,     0,   268,     0,   264,   265,     0,
   264,     0,   266,   264,     0,   264,   268,     0,   267,   264,
   268,     0,   273,     0,   269,     0,   269,   273,     0,   273,
   269,     0,   273,   269,   273,     0,   270,     0,   270,   273,
     0,   271,    31,   288,     0,   271,     0,    11,   272,    36,
    31,   288,     0,    11,   272,    36,     0,    11,    36,    31,
   288,     0,    11,    36,     0,   250,   272,   251,     0,   250,
   251,     0,   260,     0,   272,   255,   260,     0,    10,   261,
    37,     0,   285,     0,   290,    10,   274,    37,     0,   276,
     0,   273,   275,     0,   273,    12,   283,     0,   273,    26,
   283,     0,   273,    11,    36,     0,   273,    11,   274,    36,
     0,   273,    31,   288,     0,   261,     0,   274,    32,   261,
     0,    28,     0,    29,     0,    30,     0,    38,     0,   277,
     0,   107,     0,    54,    10,   274,    37,     0,   114,    10,
    44,    37,     0,   114,    10,   202,    37,     0,   108,    10,
   260,    37,     0,    59,    10,   260,    32,   260,    37,     0,
   108,    10,   227,    37,     0,    42,     0,    43,     0,    40,
     0,    41,     0,   279,     0,   278,   279,     0,     0,    21,
   280,   281,     0,   282,     0,   281,    32,   282,     0,   285,
    31,   198,     0,   285,    31,    66,   198,     0,    25,     0,
    20,     0,    25,     0,    25,     0,   283,     0,   283,     0,
   283,     0,   283,     0,   283,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   383,   384,   387,   388,   391,   392,   395,   396,   397,   400,
   401,   404,   405,   406,   409,   415,   419,   421,   423,   425,
   427,   429,   433,   437,   438,   441,   443,   447,   448,   451,
   452,   455,   457,   459,   461,   465,   469,   471,   473,   477,
   478,   481,   482,   483,   486,   487,   494,   496,   507,   509,
   512,   516,   516,   517,   518,   518,   520,   521,   522,   523,
   524,   524,   525,   528,   529,   530,   531,   533,   549,   551,
   555,   556,   558,   561,   562,   565,   569,   571,   575,   577,
   579,   581,   585,   586,   589,   591,   593,   596,   598,   601,
   603,   606,   607,   608,   612,   613,   615,   617,   620,   622,
   626,   627,   630,   632,   636,   637,   638,   641,   642,   645,
   649,   650,   653,   654,   657,   658,   660,   663,   664,   667,
   668,   671,   672,   673,   674,   677,   678,   681,   682,   683,
   684,   685,   688,   689,   692,   693,   696,   697,   700,   701,
   702,   705,   706,   709,   710,   711,   714,   715,   718,   723,
   729,   737,   739,   741,   743,   747,   748,   751,   752,   753,
   754,   755,   756,   757,   759,   763,   764,   765,   766,   769,
   770,   773,   774,   777,   777,   786,   787,   791,   792,   795,
   796,   799,   800,   801,   802,   803,   804,   805,   806,   807,
   808,   816,   817,   822,   824,   830,   831,   832,   833,   834,
   835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
   845,   846,   847,   848,   849,   850,   851,   852,   853,   854,
   855,   856,   857,   858,   859,   860,   861,   862,   863,   864,
   865,   868,   870,   872,   874,   876,   885,   886,   891,   892,
   895,   897,   899,   901,   903,   905,   909,   910,   913,   914,
   919,   922,   924,   928,   929,   932,   934,   938,   939,   949,
   950,   953,   954,   955,   956,   957,   958,   961,   962,   963,
   964,   965,   966,   975,   976,   977,   978,   979,   985,   986,
   987,   997,   998,   999,  1004,  1005,  1008,  1009,  1010,  1011,
  1012,  1013,  1014,  1015,  1018,  1019,  1022,  1024,  1026,  1028,
  1030,  1033,  1035,  1037,  1039,  1041,  1043,  1051,  1053,  1055,
  1058,  1061,  1064,  1069,  1070,  1073,  1074,  1077,  1078,  1079,
  1082,  1083,  1086,  1087,  1090,  1091,  1094,  1097,  1098,  1101,
  1102,  1105,  1108,  1114,  1116,  1117,  1120,  1121,  1126,  1128,
  1132,  1133,  1134,  1137,  1138,  1141,  1142,  1145,  1146,  1149,
  1150,  1153,  1154,  1155,  1156,  1157,  1158,  1159,  1162,  1163,
  1166,  1169,  1171,  1175,  1179,  1180,  1183,  1184,  1187,  1189,
  1191,  1193,  1194,  1196,  1198,  1200,  1203,  1205,  1209,  1210,
  1213,  1214,  1215,  1216,  1219,  1220,  1221,  1222,  1223,  1224,
  1229,  1235,  1245,  1246,  1247,  1248,  1251,  1253,  1257,  1261,
  1264,  1265,  1268,  1269,  1272,  1273,  1276,  1277,  1278,  1279,
  1280,  1281,  1282
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","simpleOp",
"PREFIX_OP","POSTFIX_OP","LLT_MULOP","LLT_SEMI","LLT_VERTICALBAR","ITERATION_OP",
"LLT_LPAR","LLT_LBRACKET","selectSym","LLT_IF_THEN_ELSE","logicalOp","eqSepSym",
"equationSym","commentSym","LLT_WHITESPACE","LLT_EOL","LLT_TYPEDEF_NAME","quantifierSym",
"openSym","closeSym","sepSym","simpleId","mapSym","markerSym","preSym","postSym",
"anySym","LLT_COLON","LLT_COMMA","LLT_EQUALS","LLT_LBRACE","LLT_RBRACE","LLT_RBRACKET",
"LLT_RPAR","LLT_QUOTE","eqOp","LLT_CCHAR","LLT_CFLOAT","LLT_CINTEGER","LLT_LCSTRING",
"LLT_ALL","LLT_ANYTHING","LLT_BE","LLT_BODY","LLT_CLAIMS","LLT_CHECKS","LLT_CONSTANT",
"LLT_ELSE","LLT_ENSURES","LLT_FOR","LLT_FRESH","LLT_IF","LLT_IMMUTABLE","LLT_IMPORTS",
"LLT_CONSTRAINT","LLT_ISSUB","LLT_LET","LLT_MODIFIES","LLT_MUTABLE","LLT_NOTHING",
"LLT_INTERNAL","LLT_FILESYS","LLT_OBJ","LLT_OUT","LLT_SEF","LLT_ONLY","LLT_PARTIAL",
"LLT_OWNED","LLT_DEPENDENT","LLT_KEEP","LLT_KEPT","LLT_TEMP","LLT_SHARED","LLT_UNIQUE",
"LLT_UNUSED","LLT_EXITS","LLT_MAYEXIT","LLT_NEVEREXIT","LLT_TRUEEXIT","LLT_FALSEEXIT",
"LLT_UNDEF","LLT_KILLED","LLT_CHECKMOD","LLT_CHECKED","LLT_UNCHECKED","LLT_CHECKEDSTRICT",
"LLT_TRUENULL","LLT_FALSENULL","LLT_LNULL","LLT_LNOTNULL","LLT_RETURNED","LLT_OBSERVER",
"LLT_EXPOSED","LLT_REFCOUNTED","LLT_REFS","LLT_RELNULL","LLT_RELDEF","LLT_KILLREF",
"LLT_NULLTERMINATED","LLT_TEMPREF","LLT_NEWREF","LLT_PRIVATE","LLT_REQUIRES",
"LLT_RESULT","LLT_SIZEOF","LLT_SPEC","LLT_TAGGEDUNION","LLT_THEN","LLT_TYPE",
"LLT_TYPEDEF","LLT_UNCHANGED","LLT_USES","LLT_CHAR","LLT_CONST","LLT_DOUBLE",
"LLT_ENUM","LLT_FLOAT","LLT_INT","LLT_ITER","LLT_YIELD","LLT_LONG","LLT_SHORT",
"LLT_SIGNED","LLT_UNKNOWN","LLT_STRUCT","LLT_TELIPSIS","LLT_UNION","LLT_UNSIGNED",
"LLT_VOID","LLT_VOLATILE","LLT_PRINTFLIKE","LLT_SCANFLIKE","LLT_MESSAGELIKE",
"interface","@1","externals","external","optDeclarations","declarations","declaration",
"imports","uses","export","iter","iterParamList","realIterParamList","iterParam",
"private","@2","private2","constDeclaration","varDeclaration","type","special",
"fcn","@3","@4","claim","@5","abstract","@6","@7","@8","@9","@10","@11","@12",
"@13","exposed","@14","@15","importNameList","importName","interfaceNameList",
"interfaceName","traitRefNodeList","traitRef","traitIdList","renaming","nameList",
"replaceNodeList","replace","name","initializer","constLclExpr","initDecls",
"initDecl","globals","globalDecl","privateInits","privateInit","optLetDecl",
"beDeclList","beDecl","sortSpec","optChecks","optRequire","optModify","storeRefList",
"storeRef","optEnsure","optClaim","optParamList","realParamList","paramList",
"optBody","callExpr","stmt","valueList","value","abstBody","fcns","optTypeInv",
"typeInv","@16","declaratorInvs","declaratorInv","@17","optExposedBody","CType",
"CTypes","typeSpecifier","specialQualifier","lclTypeSpec","lclType","pointers",
"structOrUnionSpec","@18","@19","optTagId","structDecls","structDecl","declaratorList",
"optCOMMA","enumSpec","enumeratorList","declarator","notype_decl","after_type_decl",
"parameter_decl","param","typeName","optAbstDeclarator","abstDeclarator","arrayQual",
"opForm","open","close","anyOp","middle","placeList","separator","signature",
"domain","sortList","lclPredicate","term","term0","equalityTerm","simpleOpTerm",
"simpleOp2","prefixOpTerm","postfixOps","infixOpPart","secondary","bracketed",
"sqBracketed","matched","args","primary","termList","stateFcn","lclPrimary",
"cLiteral","quantifiers","quantifier","@20","quantifiedList","quantified","simpleIdOrTypedefName",
"fcnId","varId","tagId","claimId","sortId","traitId","opId", NULL
};
#endif

static const short yyr1[] = {     0,
   138,   137,   139,   139,   140,   140,   141,   141,   141,   142,
   142,   143,   143,   143,   144,   145,   146,   146,   146,   146,
   146,   146,   147,   148,   148,   149,   149,   150,   150,   152,
   151,   153,   153,   153,   153,   154,   155,   155,   155,   156,
   156,   157,   157,   157,   159,   158,   160,   158,   162,   161,
   161,   164,   165,   163,   166,   167,   163,   168,   169,   163,
   170,   171,   163,   173,   174,   172,   172,   172,   175,   175,
   176,   176,   176,   177,   177,   178,   179,   179,   180,   180,
   180,   180,   181,   181,   182,   182,   182,   183,   183,   184,
   184,   185,   185,   185,   186,   186,   187,   188,   189,   189,
   190,   190,   191,   191,   192,   192,   192,   193,   193,   194,
   195,   195,   196,   196,   197,   197,   198,   199,   199,   200,
   200,   201,   201,   201,   201,   202,   202,   203,   203,   203,
   203,   203,   204,   204,   205,   205,   206,   206,   207,   207,
   207,   208,   208,   209,   209,   209,   210,   210,   210,   210,
   210,   211,   211,   211,   211,   212,   212,   213,   213,   213,
   213,   213,   213,   213,   213,   214,   214,   214,   214,   215,
   215,   216,   216,   218,   217,   219,   219,   221,   220,   222,
   222,   223,   223,   223,   223,   223,   223,   223,   223,   223,
   223,   224,   224,   225,   225,   226,   226,   226,   226,   226,
   226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
   226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
   226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
   226,   227,   227,   227,   227,   227,   228,   228,   229,   229,
   231,   230,   232,   230,   230,   230,   233,   233,   234,   234,
   235,   236,   236,   237,   237,   238,   238,   239,   239,   240,
   240,   241,   241,   241,   241,   241,   241,   242,   242,   242,
   242,   242,   242,   243,   243,   243,   243,   243,   244,   244,
   244,   245,   245,   245,   246,   246,   247,   247,   247,   247,
   247,   247,   247,   247,   248,   248,   249,   249,   249,   249,
   249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
   249,   249,   249,   250,   250,   251,   251,   252,   252,   252,
   253,   253,   254,   254,   255,   255,   256,   257,   257,   258,
   258,   259,   260,   261,   261,   261,   262,   262,   262,   262,
   263,   263,   263,   264,   264,   265,   265,   266,   266,   267,
   267,   268,   268,   268,   268,   268,   268,   268,   269,   269,
   270,   270,   270,   270,   271,   271,   272,   272,   273,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   274,   274,
   275,   275,   275,   275,   276,   276,   276,   276,   276,   276,
   276,   276,   277,   277,   277,   277,   278,   278,   280,   279,
   281,   281,   282,   282,   283,   283,   284,   285,   286,   287,
   288,   289,   290
};

static const short yyr2[] = {     0,
     0,     3,     0,     2,     1,     1,     0,     2,     2,     0,
     2,     1,     1,     1,     3,     3,     1,     1,     1,     1,
     1,     1,     6,     0,     1,     1,     3,     2,     1,     0,
     3,     1,     1,     1,     1,     4,     3,     4,     4,     1,
     1,     1,     1,     1,     0,    13,     0,    14,     0,    13,
     4,     0,     0,     6,     0,     0,     7,     0,     0,     7,
     0,     0,     6,     0,     0,     6,     2,     2,     1,     3,
     1,     3,     1,     1,     3,     1,     1,     3,     1,     4,
     3,     6,     1,     3,     1,     1,     3,     1,     3,     1,
     3,     3,     3,     4,     1,     1,     1,     1,     1,     3,
     1,     3,     0,     2,     3,     2,     2,     0,     2,     4,
     0,     3,     1,     3,     5,     3,     1,     0,     3,     0,
     3,     0,     3,     3,     3,     1,     3,     1,     1,     2,
     1,     1,     0,     3,     0,     3,     0,     1,     1,     1,
     3,     1,     3,     0,     4,     5,     1,     3,     2,     3,
     3,     4,     3,     5,     6,     1,     3,     1,     1,     2,
     2,     3,     3,     3,     4,     1,     3,     4,     3,     0,
     2,     0,     1,     0,     6,     1,     3,     0,     3,     0,
     3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     2,     5,     1,     2,     1,     2,
     0,     6,     0,     6,     2,     2,     0,     1,     1,     2,
     3,     1,     3,     0,     1,     6,     2,     1,     3,     1,
     1,     1,     3,     2,     2,     3,     4,     1,     3,     2,
     2,     3,     4,     1,     2,     2,     3,     4,     2,     2,
     2,     2,     3,     1,     0,     1,     3,     2,     1,     1,
     2,     3,     3,     4,     2,     3,     6,     1,     2,     2,
     3,     3,     4,     4,     5,     3,     4,     4,     5,     2,
     2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
     0,     1,     1,     3,     1,     1,     4,     0,     1,     1,
     3,     1,     1,     6,     1,     3,     1,     4,     3,     3,
     1,     2,     2,     1,     1,     1,     2,     1,     2,     2,
     3,     1,     1,     2,     2,     3,     1,     2,     3,     1,
     5,     3,     4,     2,     3,     2,     1,     3,     3,     1,
     4,     1,     2,     3,     3,     3,     4,     3,     1,     3,
     1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
     6,     4,     1,     1,     1,     1,     1,     2,     0,     3,
     1,     3,     3,     4,     1,     1,     1,     1,     1,     1,
     1,     1,     1
};

static const short yydefact[] = {     3,
     1,     0,     0,     7,     4,     5,     6,     0,   406,   405,
    73,     0,    69,    71,    76,     0,     0,    77,   412,    79,
     0,   194,     0,     0,    61,    52,   196,   198,   199,   228,
   200,   201,   202,   203,   210,   211,   212,   197,   205,   206,
   209,   207,   208,   230,   231,   213,   214,   215,   216,   217,
   224,   225,   226,   204,   227,   220,   221,   218,   219,   223,
   229,   222,    30,     0,   183,     0,   184,   247,   185,   186,
     0,   187,   188,   189,   191,   247,   247,   190,   182,     0,
    42,    43,    44,     2,    10,    22,    10,    17,    18,    19,
     0,    20,    21,    40,    41,   192,   195,   232,     0,     0,
   233,   234,     0,    15,     0,     0,    83,    16,     0,     0,
   220,   237,     0,   233,   234,   407,   410,     0,     0,     0,
     0,     0,     0,    58,     0,    64,     0,     0,   409,   257,
   408,     0,   241,   245,   243,   246,     0,     8,     9,     0,
   193,   235,     0,     0,   268,     0,    99,   103,   261,   260,
   262,    67,    68,    72,    70,     0,    81,    78,   344,   345,
   321,     0,   319,   314,     0,     0,   315,   320,     0,     0,
     0,    86,    85,    90,   285,    88,   284,   321,   298,   318,
   239,   238,     0,     0,   137,     0,   101,     0,     0,     0,
     0,    31,    32,    33,    34,    35,     0,     0,     0,    24,
     0,     0,     0,    11,    14,    12,    13,   103,   264,   270,
     0,     0,    37,     0,     0,    45,     0,     0,   265,     0,
   271,    84,     0,   323,     0,   322,   310,   311,   321,     0,
     0,   321,   299,     0,   285,    80,     0,     0,   289,     0,
   282,   286,   290,     0,     0,   300,   240,     0,    51,   140,
     0,   138,   139,   285,   142,    36,    62,    53,     0,     0,
    65,   176,   178,    38,   258,   254,     0,     0,    25,    26,
    29,     0,     0,    39,    47,   263,   269,   100,     0,     0,
   399,   408,   395,   396,   393,   394,     0,     0,     0,   386,
     0,     0,   102,    97,     0,    98,   333,   335,   337,     0,
   341,   346,   353,   357,   360,   352,   372,   385,     0,   397,
   413,   370,     0,     0,     0,     0,   104,     0,   266,     0,
   295,     0,   272,     0,     0,   306,   326,   325,     0,     0,
   312,   313,     0,   301,     0,   283,    87,    89,    91,     0,
   288,     0,     0,     0,   291,    93,    92,    96,    95,   316,
   317,   302,   236,   103,     0,   289,     0,   274,   280,   279,
   281,     0,     0,    56,    59,     0,     0,   180,   255,     0,
    28,     0,     0,     0,     0,   249,     0,     0,     0,   364,
   367,     0,     0,     0,     0,     0,     0,     0,   366,     0,
     0,     0,     0,   347,   346,   348,   342,   343,   354,   358,
     0,     0,     0,     0,   381,   382,   383,     0,   384,   355,
   373,     0,   398,     0,   106,   107,   108,     0,   267,   296,
   273,    82,   307,   324,   308,   303,     0,   293,   287,   292,
     0,   328,    94,   304,    49,   141,   143,   275,   289,     0,
   276,   166,   170,    63,    54,     0,     0,   177,    66,   172,
   179,   259,   256,    23,    27,     0,   252,   242,   250,   244,
   108,   369,     0,   362,     0,   400,   401,     0,   379,     0,
     0,     0,   194,     0,     0,     0,   131,   132,     0,     0,
   126,   129,   128,   365,   336,   340,   339,   350,   349,     0,
   411,   359,   376,     0,   374,   375,   378,   356,     0,   332,
     0,   111,   105,   309,   305,     0,   294,     0,   329,   330,
     0,   277,     0,     0,     0,    74,     0,    57,    60,   174,
     0,   173,   251,     0,   111,   363,     0,   368,     0,     0,
     0,   387,     0,     0,   392,   390,   388,   130,     0,   389,
   351,   377,   338,   371,     0,     0,   109,   118,   297,     0,
     0,   111,   278,   169,     0,     0,   167,   171,     0,     0,
   181,   253,   118,   361,   402,     0,   403,   117,   380,     0,
     0,   127,     0,   113,     0,     0,     0,   120,   327,   331,
   120,    75,   168,   103,     0,   120,   404,   334,   391,   112,
     0,     0,     0,     0,     0,     0,   122,   144,     0,   122,
   114,     0,   116,   110,   119,     0,     0,   133,     0,   133,
     0,   133,     0,   121,     0,     0,     0,     0,   135,     0,
     0,   175,   135,   115,   124,   123,   125,     0,     0,     0,
     0,   408,     0,   147,     0,     0,    50,     0,   134,     0,
    46,     0,   149,     0,     0,   145,     0,     0,    48,   136,
     0,   148,   146,   151,   150,     0,     0,   153,     0,   156,
   158,     0,   159,   407,     0,   160,     0,     0,   152,   161,
     0,     0,   163,   157,   162,   164,     0,   154,     0,   165,
   155,     0,     0,     0
};

static const short yydefgoto[] = {   682,
     4,     1,     5,    84,   138,   204,     6,   205,   206,    86,
   268,   269,   270,   207,   125,   192,    88,    89,    90,    91,
    92,   316,   378,    93,   511,    94,   122,   363,   123,   446,
   191,   447,   121,   362,    95,   197,   367,    12,    13,   515,
    14,    17,    18,   106,   171,   172,   173,   174,   346,   293,
   294,   146,   147,   216,   317,   502,   547,   548,   573,   574,
   567,   578,   597,   608,   480,   481,   619,   630,   251,   342,
   253,   610,   654,   634,   659,   660,   444,   517,   521,   522,
   560,   261,   262,   368,   451,    96,    97,    98,    99,   254,
   482,   182,   114,   201,   202,   128,   375,   376,   456,   370,
   115,   266,   187,   149,   150,   360,   255,   176,   241,   242,
   243,   177,   295,   352,   179,   225,   226,   465,   433,   508,
   509,   499,   500,   297,   298,   299,   300,   301,   397,   398,
   302,   303,   304,   305,   382,   306,   470,   411,   307,   308,
   309,   310,   383,   466,   467,   311,   662,   312,   130,   119,
   492,    20,   313
};

static const short yypact[] = {-32768,
   -25,   136,   368,  1350,-32768,-32768,-32768,   181,-32768,-32768,
-32768,    94,-32768,-32768,-32768,   181,   110,-32768,-32768,    33,
  2903,-32768,   182,  2903,-32768,    17,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   -11,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  2903,-32768,  2903,-32768,   181,-32768,-32768,
   108,-32768,-32768,-32768,-32768,   181,   181,-32768,-32768,  2903,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  2903,-32768,-32768,-32768,-32768,-32768,   399,-32768,  2903,   408,
   155,   192,   205,-32768,   136,   204,-32768,-32768,   368,  1152,
-32768,   233,   223,-32768,-32768,   266,-32768,   181,   305,   408,
   211,   235,   264,-32768,  1445,-32768,   408,   339,-32768,   347,
-32768,   377,-32768,   347,-32768,   347,   408,  1247,  1247,   408,
-32768,-32768,   408,   408,-32768,   196,-32768,   259,   322,   409,
-32768,-32768,-32768,-32768,-32768,   181,   387,-32768,-32768,-32768,
   386,   181,-32768,-32768,   181,   534,-32768,-32768,   403,  2903,
   410,   445,   453,-32768,   360,   439,-32768,   386,   474,-32768,
-32768,   496,  2903,   497,  2319,   239,   470,   486,   492,   401,
   404,-32768,-32768,-32768,-32768,-32768,   408,   282,   493,  2414,
   488,   494,   288,-32768,-32768,-32768,-32768,-32768,   322,   409,
   121,   141,-32768,   408,  3200,  1836,  1933,  3059,-32768,  2030,
-32768,-32768,  1152,-32768,   499,   122,-32768,-32768,   386,   181,
   181,   386,   502,   421,   360,-32768,  1152,  1152,   360,  1741,
-32768,   454,-32768,   328,    80,-32768,-32768,   525,-32768,-32768,
   504,-32768,   507,   380,-32768,-32768,-32768,-32768,   522,   524,
   515,-32768,-32768,-32768,-32768,   518,  2903,   514,   520,-32768,
-32768,  2903,  2903,-32768,  1836,-32768,-32768,-32768,  3200,  3109,
-32768,   266,-32768,-32768,-32768,-32768,   544,  3200,   545,-32768,
   549,   551,-32768,-32768,  3033,-32768,   550,-32768,   114,  3226,
-32768,   374,   382,   382,   535,   193,-32768,-32768,   273,-32768,
-32768,-32768,   555,   560,   562,   536,-32768,   408,-32768,   537,
-32768,   539,-32768,   540,   541,   552,-32768,-32768,   553,   547,
-32768,-32768,    80,-32768,   554,-32768,   453,   439,-32768,   439,
   454,   548,   177,  2127,-32768,   556,-32768,-32768,-32768,-32768,
-32768,   557,-32768,-32768,  2509,   380,  1644,-32768,   322,   469,
-32768,    47,    47,-32768,-32768,   408,   564,   538,   561,   559,
-32768,   569,  2414,   408,  2611,-32768,  2713,   558,    36,   565,
-32768,   293,   108,  3200,    10,  3200,  1022,   762,-32768,   220,
  3200,  3226,  3226,-32768,-32768,   268,   374,   374,   275,   275,
   181,  3150,   181,   181,-32768,-32768,-32768,   181,-32768,   382,
-32768,  3200,-32768,  3200,-32768,-32768,-32768,   314,-32768,-32768,
-32768,-32768,-32768,-32768,   563,   568,   566,-32768,-32768,-32768,
   573,   181,-32768,-32768,  1836,-32768,-32768,   469,   354,  2224,
-32768,-32768,   165,-32768,-32768,    47,    47,-32768,-32768,   530,
-32768,-32768,-32768,-32768,-32768,   317,-32768,-32768,-32768,-32768,
-32768,-32768,   181,   567,  3200,   570,-32768,   572,   550,   362,
  3200,   579,   581,   575,   577,   578,-32768,-32768,  2903,   384,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   268,
-32768,-32768,-32768,   157,-32768,-32768,-32768,   275,   583,-32768,
   397,    -8,-32768,-32768,-32768,   574,-32768,   590,   591,-32768,
   571,-32768,   587,   592,   363,-32768,  1547,-32768,-32768,-32768,
   594,-32768,-32768,   408,    -8,-32768,   181,-32768,   108,  2808,
  3200,-32768,    28,  3200,-32768,-32768,-32768,-32768,   892,-32768,
-32768,-32768,-32768,-32768,   108,  2903,-32768,   582,-32768,   181,
   181,   576,-32768,-32768,   181,   593,-32768,-32768,   408,   605,
-32768,-32768,   582,-32768,-32768,  2903,-32768,-32768,   550,  3200,
   600,-32768,   331,-32768,   103,   408,  3200,   521,-32768,-32768,
   521,-32768,-32768,-32768,   629,   521,-32768,   550,-32768,-32768,
   108,  2903,  3200,   336,   634,  3200,   584,   597,  3200,   584,
-32768,   601,-32768,-32768,-32768,   639,   632,   596,   615,   596,
   613,   596,  3200,-32768,   644,   648,   337,  3200,   608,    49,
   623,-32768,   608,-32768,-32768,-32768,-32768,   652,  3200,   625,
    49,   651,    50,-32768,   653,   631,-32768,   627,-32768,   658,
-32768,    63,-32768,   272,    49,-32768,   208,   642,-32768,-32768,
    49,-32768,-32768,   660,-32768,   222,   222,-32768,   419,   666,
-32768,   661,-32768,-32768,   668,-32768,    41,   222,-32768,   316,
   432,   468,-32768,   666,-32768,-32768,   426,-32768,   430,-32768,
-32768,   670,   676,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,   595,-32768,-32768,   678,   677,-32768,
-32768,-32768,   307,   679,-32768,-32768,   610,   612,   616,-32768,
  -121,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   580,-32768,
    -6,-32768,   585,-32768,   461,-32768,   451,   452,-32768,-32768,
   471,  -108,   478,  -188,-32768,   232,-32768,  -458,-32768,   127,
  -473,   175,  -169,   142,   137,   206,  -206,   120,-32768,  -180,
-32768,-32768,  -507,-32768,  -190,  -230,  -318,-32768,-32768,-32768,
-32768,-32768,   381,-32768,-32768,   -89,-32768,-32768,-32768,    -3,
   -18,-32768,    32,-32768,-32768,   407,   476,    68,-32768,-32768,
    56,-32768,   -93,  -127,   344,   398,  -187,   257,  -182,  -213,
  -101,   511,    30,  -267,   603,  -137,-32768,   586,-32768,-32768,
-32768,  -531,  -204,  -254,-32768,   105,   -46,   466,-32768,-32768,
  -278,   455,-32768,-32768,   472,  -265,  -205,-32768,-32768,  -372,
-32768,  -303,-32768,-32768,   242,     7,   -23,   -38,   423,   656,
  -377,    19,   531
};


#define	YYLAST		3340


static const short yytable[] = {   118,
   100,   103,   113,   196,   252,   413,   148,   141,    15,    19,
   296,   186,   271,   296,    15,   209,   211,   112,   198,   275,
   120,   395,    19,   391,   379,   341,   343,   389,   203,   117,
   497,     2,   132,   385,   107,   101,   320,   399,   400,   324,
   245,   391,   110,   670,   445,   595,   208,   219,   221,   391,
   124,   545,   336,   442,   510,   643,   644,   645,   631,   102,
   126,   151,   127,   180,   606,   426,   563,   611,   643,   651,
   645,   361,   462,   632,   129,   381,   137,   673,   570,   371,
   443,   151,   129,   129,   646,   526,   628,   140,   151,     3,
   381,   330,   587,   581,   333,   142,   546,   640,   151,   652,
   104,   151,   350,   263,   151,   151,   175,   219,   221,   219,
   221,    15,   633,   -55,   351,    19,   108,   488,   602,   180,
   471,   100,   484,   642,   117,   105,   359,   518,   519,   469,
   217,   218,   131,   592,   100,   100,   485,   655,     8,   178,
   345,   109,   341,   343,   498,   327,   392,   469,   593,   564,
   220,   218,   393,   328,   347,     9,   101,   276,   151,   469,
    10,   152,    19,   431,   248,   435,   235,   437,   227,   101,
   101,   228,   579,   580,   222,   151,   180,   277,    11,   112,
   102,   472,   475,   483,     9,   271,   344,   218,   531,    10,
   180,   180,   542,   102,   102,   232,   494,   180,   153,   514,
     9,     9,   213,   402,   403,    10,   116,   154,   501,   418,
   656,   541,   318,   429,   164,   151,   533,   657,   404,   175,
   405,   406,   407,   408,   656,   341,   167,   214,   209,   211,
   409,   657,   632,   175,   175,   156,   331,   332,   181,   345,
   157,   345,   350,   327,   658,   256,   632,   283,   284,   285,
   286,   328,   178,   183,   351,   396,   585,   219,   441,   513,
   528,   283,   284,   285,   286,  -101,   178,   178,   374,   374,
   214,   318,   263,   178,   661,  -405,   569,   279,   280,   151,
   457,   631,   412,   661,   661,   402,   403,     9,   264,   164,
  -101,   215,   282,   281,   274,   661,   632,   661,   661,   661,
   404,   167,   405,   406,   407,   408,   653,   283,   284,   285,
   286,   209,   409,   214,   185,   588,   327,   151,   151,   214,
   503,   287,   188,   523,   328,   657,   289,   151,   464,   571,
   159,   217,   218,   160,   483,   151,   441,   590,   161,   162,
   632,   163,   604,   627,   468,   214,   189,     9,   524,   164,
   489,   490,    10,   165,   166,   283,   284,   285,   286,   439,
   190,   167,   591,   357,   218,   239,   168,   214,   539,   240,
   218,   374,   199,   374,   290,   291,   159,    16,   131,   160,
  -248,   292,   169,   474,   112,   356,   200,     9,   603,   357,
   218,   279,    10,   531,   555,   558,   223,   556,   532,   358,
   151,     9,   483,   621,   131,   623,   282,   491,   624,   495,
   496,   598,   224,   143,   491,   539,   600,   144,   220,   218,
   540,   283,   284,   285,   286,   666,   667,   145,   531,   234,
   562,   318,   131,   544,   656,   287,   516,   674,   491,   675,
   289,   657,   459,    65,   459,    67,   236,    69,    70,    15,
   668,    72,    73,    74,    75,   669,   632,   668,    78,    79,
   538,   668,   680,   344,   218,   584,   681,   594,   676,   491,
   656,   283,   284,   285,   286,   112,   237,   657,   440,   218,
   677,   679,   133,   135,   238,   151,   210,   212,   290,   291,
   468,   244,   632,   338,   340,   292,   486,   487,   134,   136,
   246,   247,   215,   249,   678,   257,   575,   283,   284,   285,
   286,   258,   259,   559,    65,   260,    67,   265,    69,    70,
   151,   272,    72,    73,    74,    75,   568,   273,   334,    78,
    79,   335,   353,   491,   326,   112,   159,   151,   355,   160,
   354,   364,   576,   365,   229,   230,   366,   163,   582,   369,
   372,   373,   575,   384,   386,   164,   491,   491,   387,   231,
   388,    15,   568,   391,   414,   401,   415,   167,   416,   417,
   449,   450,   168,   419,   420,   454,   421,   422,   423,   424,
   427,   636,   425,   434,   428,   452,   432,   520,   568,   504,
  -406,   461,   636,   453,   505,   463,   635,   527,   554,   583,
   549,   529,   530,   112,   552,   636,   636,   635,   663,   507,
   534,   535,   636,   536,   537,   550,   506,   663,   663,   543,
   635,   635,   551,   553,   665,   281,   596,   635,   561,   663,
   577,   663,   663,   663,   159,   545,   589,   160,   599,    21,
   605,   279,   280,   609,   607,   614,   613,   618,   620,   622,
   625,   473,   281,   164,   626,   629,   282,   637,   639,   641,
  -407,   649,   647,   648,   650,   167,   664,   645,   670,   683,
   671,   283,   284,   285,   286,   684,   615,   672,     7,   455,
    85,   139,    87,   325,   155,   287,   288,   337,   322,   339,
   289,   278,   525,   158,   616,   477,   478,   479,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,   601,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,   111,    57,
    58,    59,    60,    61,   193,    62,   194,   586,   290,   291,
   195,   612,   638,   617,   572,   292,   448,    65,   377,    67,
    68,    69,    70,   438,   348,    72,    73,    74,    75,    76,
   410,    77,    78,    79,   159,   394,   390,   160,   233,    21,
   565,   279,   280,   184,   349,     0,     0,     0,     0,     0,
     0,   473,   281,   164,     0,     0,   282,     0,     0,     0,
     0,     0,     0,     0,     0,   167,     0,     0,     0,     0,
     0,   283,   284,   285,   286,   476,     0,     0,     0,     0,
     0,   329,     0,     0,     0,   287,   288,     0,     0,     0,
   289,     0,     0,     0,     0,   477,   478,   479,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,     0,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,   111,    57,
    58,    59,    60,    61,     0,    62,     0,     0,   290,   291,
     0,     0,     0,     0,     0,   292,     0,    65,     0,    67,
    68,    69,    70,     0,     0,    72,    73,    74,    75,    76,
     0,    77,    78,    79,   159,     0,     0,   160,     0,    21,
     0,   279,   280,     0,     0,     0,     0,     0,     0,     0,
     0,   473,   281,   164,     0,     0,   282,     0,     0,     0,
     0,     0,     0,     0,     0,   167,     0,     0,     0,     0,
     0,   283,   284,   285,   286,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   287,   288,     0,     0,     0,
   289,     0,     0,     0,     0,   477,   478,   479,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,     0,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,   111,    57,
    58,    59,    60,    61,     0,    62,     0,     0,   290,   291,
     0,     0,     0,     0,     0,   292,     0,    65,     0,    67,
    68,    69,    70,     0,     0,    72,    73,    74,    75,    76,
     0,    77,    78,    79,   159,     0,     0,   160,     0,    21,
     0,   279,   280,     0,     0,     0,     0,     0,     0,     0,
     0,   473,   281,   164,     0,     0,   282,     0,     0,     0,
     0,     0,     0,     0,     0,   167,     0,     0,     0,     0,
     0,   283,   284,   285,   286,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   287,   288,     0,     0,     0,
   289,     0,     0,     0,     0,     0,     0,     0,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,     0,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,   111,    57,
    58,    59,    60,    61,     0,    62,     0,     0,   290,   291,
     0,     0,     0,     0,     0,   292,     0,    65,     0,    67,
    68,    69,    70,     0,     0,    72,    73,    74,    75,    76,
     0,    77,    78,    79,   159,     0,     0,   160,     0,    21,
     0,     0,   161,   162,     0,   163,     0,     0,     0,     0,
     0,    22,     0,   164,     0,     0,     0,   165,   166,     0,
     0,     0,     0,     0,     0,   167,     0,     0,     0,     0,
   168,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   169,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   170,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,     0,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,   111,    57,
    58,    59,    60,    61,    21,    62,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    22,    65,     0,    67,
    68,    69,    70,     0,     0,    72,    73,    74,    75,    76,
     0,    77,    78,    79,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    23,     0,    24,     0,     0,     0,
     0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
     0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,     0,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,     0,
    62,     0,     0,     0,     0,    63,     0,    21,     0,    64,
     0,     3,    65,    66,    67,    68,    69,    70,    71,    22,
    72,    73,    74,    75,    76,     0,    77,    78,    79,    80,
    81,    82,    83,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    23,     0,    24,
     0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
     0,    26,     0,     0,     0,     0,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,     0,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    21,    62,     0,     0,     0,     0,    63,     0,
     0,     0,    64,     0,    22,    65,    66,    67,    68,    69,
    70,    71,     0,    72,    73,    74,    75,    76,     0,    77,
    78,    79,    80,    81,    82,    83,     0,     0,     0,     0,
     0,     0,     0,     0,    24,     0,     0,     0,     0,     0,
    25,     0,     0,     0,     0,     0,    26,     0,     0,     0,
     0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
     0,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,     0,    62,     0,
     0,     0,     0,     0,    21,     0,     0,    64,     0,     0,
    65,    66,    67,    68,    69,    70,    22,     0,    72,    73,
    74,    75,    76,     0,    77,    78,    79,    80,    81,    82,
    83,   557,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,     0,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,   111,    57,    58,    59,    60,    61,   439,
    62,    21,     0,   357,   218,     0,     0,     0,     0,     0,
     0,     0,    65,    22,    67,    68,    69,    70,   131,     0,
    72,    73,    74,    75,    76,     0,    77,    78,    79,     0,
    81,    82,    83,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
   111,    57,    58,    59,    60,    61,   239,    62,    21,     0,
   240,   218,     0,     0,     0,     0,     0,     0,     0,    65,
    22,    67,    68,    69,    70,     0,     0,    72,    73,    74,
    75,    76,   250,    77,    78,    79,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,     0,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,   111,    57,    58,
    59,    60,    61,    21,    62,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    22,    65,     0,    67,    68,
    69,    70,     0,     0,    72,    73,    74,    75,    76,   250,
    77,    78,    79,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   314,
   315,     0,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,     0,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,   111,    57,    58,    59,    60,    61,     0,    62,
    21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    65,    22,    67,    68,    69,    70,     0,     0,    72,
    73,    74,    75,    76,     0,    77,    78,    79,     0,   319,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,     0,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,   111,
    57,    58,    59,    60,    61,     0,    62,    21,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    65,    22,
    67,    68,    69,    70,     0,     0,    72,    73,    74,    75,
    76,   250,    77,    78,    79,     0,   323,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,     0,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,   111,    57,    58,    59,
    60,    61,     0,    62,    21,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    65,    22,    67,    68,    69,
    70,     0,     0,    72,    73,    74,    75,    76,   250,    77,
    78,    79,     0,   430,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,     0,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,   111,    57,    58,    59,    60,    61,     0,
    62,    21,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    65,    22,    67,    68,    69,    70,     0,     0,
    72,    73,    74,    75,    76,   250,    77,    78,    79,     0,
   512,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
   111,    57,    58,    59,    60,    61,    21,    62,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    22,    65,
     0,    67,    68,    69,    70,     0,     0,    72,    73,    74,
    75,    76,   250,    77,    78,    79,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,   111,    57,    58,    59,    60,
    61,    21,    62,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    22,    65,     0,    67,    68,    69,    70,
     0,     0,    72,    73,    74,    75,    76,   250,    77,    78,
    79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
   111,    57,    58,    59,    60,    61,    21,    62,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    22,    65,
     0,    67,    68,    69,    70,     0,   267,    72,    73,    74,
    75,    76,     0,    77,    78,    79,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,   111,    57,    58,    59,    60,
    61,     0,    62,     0,     0,     0,     0,     0,    21,     0,
     0,     0,     0,     0,    65,     0,    67,    68,    69,    70,
    22,     0,    72,    73,    74,    75,    76,   436,    77,    78,
    79,     0,     0,     0,     0,   458,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,     0,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,   111,    57,    58,
    59,    60,    61,     0,    62,     0,     0,     0,     0,     0,
    21,     0,     0,     0,     0,     0,    65,     0,    67,    68,
    69,    70,    22,     0,    72,    73,    74,    75,    76,     0,
    77,    78,    79,     0,     0,     0,     0,   460,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,     0,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,   111,
    57,    58,    59,    60,    61,    21,    62,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    22,    65,     0,
    67,    68,    69,    70,     0,     0,    72,    73,    74,    75,
    76,     0,    77,    78,    79,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   566,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,   111,    57,    58,    59,    60,    61,
    21,    62,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    22,    65,     0,    67,    68,    69,    70,     0,
     0,    72,    73,    74,    75,    76,     0,    77,    78,    79,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,     0,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,   111,
    57,    58,    59,    60,    61,     0,    62,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
    67,    68,    69,    70,     0,     0,    72,    73,    74,    75,
    76,     0,    77,    78,    79,   159,     0,     0,   160,     0,
     0,     0,   279,   280,     0,     0,     0,     0,     0,     0,
     0,     0,     9,   281,   164,   350,     0,   282,     0,     0,
     0,   159,     0,     0,   160,     0,   167,   351,   279,   280,
     0,     0,   283,   284,   285,   286,     0,     0,     9,   281,
   164,     0,     0,   282,     0,     0,   287,   288,     0,     0,
     0,   289,   167,     0,   321,     0,     0,     0,   283,   284,
   285,   286,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   159,   287,   288,   160,     0,     0,   289,   279,   280,
     0,     0,     0,     0,     0,     0,     0,     0,     9,   281,
   164,     0,     0,   282,     0,     0,     0,     0,     0,   290,
   291,     0,   167,     0,   380,     0,   292,     0,   283,   284,
   285,   286,   159,     0,     0,   160,     0,     0,     0,   279,
   280,     0,   287,   288,     0,   290,   291,   289,     0,     9,
   281,   164,   292,     0,   282,     0,     0,     0,     0,     0,
     0,     0,     0,   167,     0,   493,     0,     0,     0,   283,
   284,   285,   286,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   159,   287,   288,   160,     0,     0,   289,   279,
   280,     0,     0,     0,     0,   290,   291,     0,     0,     9,
   281,   164,   292,     0,   282,     0,     0,     0,   159,     0,
     0,   160,     0,   167,     0,   279,   280,     0,     0,   283,
   284,   285,   286,     0,     0,     9,     0,   164,     0,     0,
   282,     0,     0,   287,   288,     0,   290,   291,   289,   167,
     0,     0,     0,   292,     0,   283,   284,   285,   286,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   287,
     0,     0,     0,     0,   289,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   290,   291,     0,     0,
     0,     0,     0,   292,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   290,   291,     0,     0,     0,     0,     0,   292
};

static const short yycheck[] = {    23,
     4,     8,    21,   125,   185,   309,   100,    97,     2,     3,
   215,   120,   200,   218,     8,   143,   144,    21,   127,   208,
    24,   300,    16,    14,   279,   239,   240,   295,   137,    23,
   408,    57,    71,   288,    16,     4,   217,   303,   304,   220,
   178,    14,    10,     3,   363,   577,   140,   149,   150,    14,
    62,    60,   235,     7,   432,     6,     7,     8,    10,     4,
    64,   100,    66,   110,   596,   333,   525,   599,     6,     7,
     8,   254,    37,    25,    68,   280,    80,    37,    51,   267,
    34,   120,    76,    77,    35,   463,   618,    91,   127,   115,
   295,   229,   566,   552,   232,    99,   105,   629,   137,    37,
     7,   140,    23,   197,   143,   144,   110,   209,   210,   211,
   212,   105,   620,    97,    35,   109,     7,   396,   592,   166,
   111,   125,   390,   631,   118,    32,   254,   446,   447,   384,
    10,    11,    25,    31,   138,   139,   391,   645,     3,   110,
   242,    32,   356,   357,   410,    24,    33,   402,    46,   527,
    10,    11,    39,    32,   244,    20,   125,    37,   197,   414,
    25,     7,   156,   344,   183,   354,   170,   355,   162,   138,
   139,   165,   550,   551,   156,   214,   223,    37,    43,   183,
   125,   386,   387,   388,    20,   373,    10,    11,    32,    25,
   237,   238,    36,   138,   139,   166,   402,   244,     7,    35,
    20,    20,     7,    11,    12,    25,    25,     3,   414,   318,
     3,   490,   216,    37,    22,   254,   471,    10,    26,   223,
    28,    29,    30,    31,     3,   439,    34,    32,   356,   357,
    38,    10,    25,   237,   238,    32,   230,   231,     6,   341,
    37,   343,    23,    24,    37,     7,    25,    40,    41,    42,
    43,    32,   223,    31,    35,   302,   560,   359,   360,   440,
   465,    40,    41,    42,    43,     7,   237,   238,   272,   273,
    32,   275,   366,   244,   647,    10,   531,    10,    11,   318,
   374,    10,    10,   656,   657,    11,    12,    20,     7,    22,
    32,    33,    25,    21,     7,   668,    25,   670,   671,   672,
    26,    34,    28,    29,    30,    31,    35,    40,    41,    42,
    43,   439,    38,    32,    10,   570,    24,   356,   357,    32,
     7,    54,   112,     7,    32,    10,    59,   366,    36,   534,
     3,    10,    11,     6,   539,   374,   438,     7,    11,    12,
    25,    14,     7,     7,   383,    32,   112,    20,    32,    22,
   397,   398,    25,    26,    27,    40,    41,    42,    43,     6,
    97,    34,    32,    10,    11,     6,    39,    32,    32,    10,
    11,   375,    34,   377,   107,   108,     3,    10,    25,     6,
    34,   114,    55,   387,   388,     6,    10,    20,   593,    10,
    11,    10,    25,    32,    32,   517,    10,    35,    37,    20,
   439,    20,   607,   610,    25,   612,    25,   401,   613,   403,
   404,   581,    27,     6,   408,    32,   586,    10,    10,    11,
    37,    40,    41,    42,    43,   656,   657,    20,    32,    27,
   524,   435,    25,    37,     3,    54,   443,   668,   432,   670,
    59,    10,   375,   116,   377,   118,    37,   120,   121,   443,
    32,   124,   125,   126,   127,    37,    25,    32,   131,   132,
   479,    32,    37,    10,    11,   559,    37,   576,    37,   463,
     3,    40,    41,    42,    43,   479,    32,    10,    10,    11,
   671,   672,    76,    77,    32,   524,   143,   144,   107,   108,
   529,    53,    25,   237,   238,   114,   392,   393,    76,    77,
    27,     6,    33,     7,    37,    20,   545,    40,    41,    42,
    43,    20,   112,   517,   116,   112,   118,    25,   120,   121,
   559,    34,   124,   125,   126,   127,   530,    34,    27,   131,
   132,   111,     8,   527,    36,   539,     3,   576,    32,     6,
    37,    20,   546,    20,    11,    12,    32,    14,   555,    32,
    37,    32,   591,    10,    10,    22,   550,   551,    10,    26,
    10,   555,   566,    14,    10,    31,     7,    34,     7,    34,
     7,    34,    39,    37,    36,     7,    37,    37,    27,    27,
    27,   620,    36,    27,    37,    25,    31,    58,   592,    27,
    10,    34,   631,    35,    27,    31,   620,    31,     7,     7,
    27,    32,    31,   607,    34,   644,   645,   631,   647,    37,
    32,    37,   651,    37,    37,    26,    51,   656,   657,    37,
   644,   645,    32,    37,   648,    21,   106,   651,    35,   668,
    49,   670,   671,   672,     3,    60,    37,     6,    10,     8,
     7,    10,    11,    47,    61,     7,    46,    52,    34,    37,
     7,    20,    21,    22,     7,    48,    25,    35,     7,    35,
    10,    35,    10,    33,     7,    34,    25,     8,     3,     0,
    10,    40,    41,    42,    43,     0,    45,    10,     1,   373,
     4,    87,     4,   223,   105,    54,    55,   237,   218,   238,
    59,   214,   461,   109,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,   591,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
    99,   100,   101,   102,   125,   104,   125,   563,   107,   108,
   125,   600,   623,   607,   539,   114,   366,   116,   273,   118,
   119,   120,   121,   356,   244,   124,   125,   126,   127,   128,
   306,   130,   131,   132,     3,   300,   295,     6,   166,     8,
   529,    10,    11,   118,   244,    -1,    -1,    -1,    -1,    -1,
    -1,    20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
    -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
    -1,   226,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    -1,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
    99,   100,   101,   102,    -1,   104,    -1,    -1,   107,   108,
    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,
   119,   120,   121,    -1,    -1,   124,   125,   126,   127,   128,
    -1,   130,   131,   132,     3,    -1,    -1,     6,    -1,     8,
    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
    -1,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    -1,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
    99,   100,   101,   102,    -1,   104,    -1,    -1,   107,   108,
    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,
   119,   120,   121,    -1,    -1,   124,   125,   126,   127,   128,
    -1,   130,   131,   132,     3,    -1,    -1,     6,    -1,     8,
    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
    -1,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    -1,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
    99,   100,   101,   102,    -1,   104,    -1,    -1,   107,   108,
    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,   118,
   119,   120,   121,    -1,    -1,   124,   125,   126,   127,   128,
    -1,   130,   131,   132,     3,    -1,    -1,     6,    -1,     8,
    -1,    -1,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,
    -1,    20,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    -1,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
    99,   100,   101,   102,     8,   104,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    20,   116,    -1,   118,
   119,   120,   121,    -1,    -1,   124,   125,   126,   127,   128,
    -1,   130,   131,   132,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    48,    -1,    50,    -1,    -1,    -1,
    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,    -1,
    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
    84,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
    94,    95,    96,    97,    98,    99,   100,   101,   102,    -1,
   104,    -1,    -1,    -1,    -1,   109,    -1,     8,    -1,   113,
    -1,   115,   116,   117,   118,   119,   120,   121,   122,    20,
   124,   125,   126,   127,   128,    -1,   130,   131,   132,   133,
   134,   135,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,
    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
    -1,    62,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    83,    84,    85,    -1,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
   101,   102,     8,   104,    -1,    -1,    -1,    -1,   109,    -1,
    -1,    -1,   113,    -1,    20,   116,   117,   118,   119,   120,
   121,   122,    -1,   124,   125,   126,   127,   128,    -1,   130,
   131,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
    56,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
    -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    99,   100,   101,   102,    -1,   104,    -1,
    -1,    -1,    -1,    -1,     8,    -1,    -1,   113,    -1,    -1,
   116,   117,   118,   119,   120,   121,    20,    -1,   124,   125,
   126,   127,   128,    -1,   130,   131,   132,   133,   134,   135,
   136,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
    84,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
    94,    95,    96,    97,    98,    99,   100,   101,   102,     6,
   104,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   116,    20,   118,   119,   120,   121,    25,    -1,
   124,   125,   126,   127,   128,    -1,   130,   131,   132,    -1,
   134,   135,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,   100,   101,   102,     6,   104,     8,    -1,
    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
    20,   118,   119,   120,   121,    -1,    -1,   124,   125,   126,
   127,   128,   129,   130,   131,   132,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
    80,    81,    82,    83,    84,    85,    -1,    87,    88,    89,
    90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
   100,   101,   102,     8,   104,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    20,   116,    -1,   118,   119,
   120,   121,    -1,    -1,   124,   125,   126,   127,   128,   129,
   130,   131,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
    65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
    85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
    95,    96,    97,    98,    99,   100,   101,   102,    -1,   104,
     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   116,    20,   118,   119,   120,   121,    -1,    -1,   124,
   125,   126,   127,   128,    -1,   130,   131,   132,    -1,    37,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    -1,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
    98,    99,   100,   101,   102,    -1,   104,     8,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    20,
   118,   119,   120,   121,    -1,    -1,   124,   125,   126,   127,
   128,   129,   130,   131,   132,    -1,    37,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    83,    84,    85,    -1,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
   101,   102,    -1,   104,     8,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   116,    20,   118,   119,   120,
   121,    -1,    -1,   124,   125,   126,   127,   128,   129,   130,
   131,   132,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
    84,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
    94,    95,    96,    97,    98,    99,   100,   101,   102,    -1,
   104,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   116,    20,   118,   119,   120,   121,    -1,    -1,
   124,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,   100,   101,   102,     8,   104,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,   116,
    -1,   118,   119,   120,   121,    -1,    -1,   124,   125,   126,
   127,   128,   129,   130,   131,   132,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
    82,    83,    84,    85,    -1,    87,    88,    89,    90,    91,
    92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
   102,     8,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    20,   116,    -1,   118,   119,   120,   121,
    -1,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,   100,   101,   102,     8,   104,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,   116,
    -1,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,    -1,   130,   131,   132,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
    82,    83,    84,    85,    -1,    87,    88,    89,    90,    91,
    92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
   102,    -1,   104,    -1,    -1,    -1,    -1,    -1,     8,    -1,
    -1,    -1,    -1,    -1,   116,    -1,   118,   119,   120,   121,
    20,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
   132,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
    80,    81,    82,    83,    84,    85,    -1,    87,    88,    89,
    90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
   100,   101,   102,    -1,   104,    -1,    -1,    -1,    -1,    -1,
     8,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,
   120,   121,    20,    -1,   124,   125,   126,   127,   128,    -1,
   130,   131,   132,    -1,    -1,    -1,    -1,    35,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    -1,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
    98,    99,   100,   101,   102,     8,   104,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,   116,    -1,
   118,   119,   120,   121,    -1,    -1,   124,   125,   126,   127,
   128,    -1,   130,   131,   132,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
    83,    84,    85,    -1,    87,    88,    89,    90,    91,    92,
    93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     8,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    20,   116,    -1,   118,   119,   120,   121,    -1,
    -1,   124,   125,   126,   127,   128,    -1,   130,   131,   132,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    -1,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
    98,    99,   100,   101,   102,    -1,   104,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
   118,   119,   120,   121,    -1,    -1,   124,   125,   126,   127,
   128,    -1,   130,   131,   132,     3,    -1,    -1,     6,    -1,
    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    20,    21,    22,    23,    -1,    25,    -1,    -1,
    -1,     3,    -1,    -1,     6,    -1,    34,    35,    10,    11,
    -1,    -1,    40,    41,    42,    43,    -1,    -1,    20,    21,
    22,    -1,    -1,    25,    -1,    -1,    54,    55,    -1,    -1,
    -1,    59,    34,    -1,    36,    -1,    -1,    -1,    40,    41,
    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,     3,    54,    55,     6,    -1,    -1,    59,    10,    11,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,   107,
   108,    -1,    34,    -1,    36,    -1,   114,    -1,    40,    41,
    42,    43,     3,    -1,    -1,     6,    -1,    -1,    -1,    10,
    11,    -1,    54,    55,    -1,   107,   108,    59,    -1,    20,
    21,    22,   114,    -1,    25,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,
    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,     3,    54,    55,     6,    -1,    -1,    59,    10,
    11,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,    20,
    21,    22,   114,    -1,    25,    -1,    -1,    -1,     3,    -1,
    -1,     6,    -1,    34,    -1,    10,    11,    -1,    -1,    40,
    41,    42,    43,    -1,    -1,    20,    -1,    22,    -1,    -1,
    25,    -1,    -1,    54,    55,    -1,   107,   108,    59,    34,
    -1,    -1,    -1,   114,    -1,    40,    41,    42,    43,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,   114
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/gnu/share/bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 196 "/gnu/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 383 "llgrammar.y"
{ lhExternals (yyvsp[0].interfacelist); ;
    break;}
case 2:
#line 384 "llgrammar.y"
{ interfaceNodeList_free (yyvsp[-2].interfacelist); interfaceNodeList_free (yyvsp[0].interfacelist); ;
    break;}
case 3:
#line 387 "llgrammar.y"
{ yyval.interfacelist = interfaceNodeList_new (); ;
    break;}
case 4:
#line 388 "llgrammar.y"
{ yyval.interfacelist = interfaceNodeList_addh (yyvsp[-1].interfacelist, yyvsp[0].iface);;
    break;}
case 7:
#line 395 "llgrammar.y"
{ yyval.interfacelist = interfaceNodeList_new (); ;
    break;}
case 8:
#line 396 "llgrammar.y"
{ yyval.interfacelist = consInterfaceNode (yyvsp[-1].iface, yyvsp[0].interfacelist);;
    break;}
case 9:
#line 397 "llgrammar.y"
{ yyval.interfacelist = consInterfaceNode (yyvsp[-1].iface, yyvsp[0].interfacelist);;
    break;}
case 10:
#line 400 "llgrammar.y"
{ yyval.interfacelist = interfaceNodeList_new (); ;
    break;}
case 11:
#line 401 "llgrammar.y"
{ yyval.interfacelist = interfaceNodeList_addh (yyvsp[-1].interfacelist, yyvsp[0].iface);;
    break;}
case 15:
#line 410 "llgrammar.y"
{ yyval.iface = makeInterfaceNodeImports (yyvsp[-1].importlist);
     /* assume subspecs are already processed, symbol table info in external file */
   ;
    break;}
case 16:
#line 416 "llgrammar.y"
{ yyval.iface = makeInterfaceNodeUses (yyvsp[-1].traitreflist); readlsignatures (yyval.iface);;
    break;}
case 17:
#line 420 "llgrammar.y"
{ declareConstant (yyvsp[0].constdeclaration); yyval.iface = interfaceNode_makeConst (yyvsp[0].constdeclaration); ;
    break;}
case 18:
#line 422 "llgrammar.y"
{ declareVar (yyvsp[0].vardeclaration); yyval.iface = interfaceNode_makeVar (yyvsp[0].vardeclaration); ;
    break;}
case 19:
#line 424 "llgrammar.y"
{ declareType (yyvsp[0].type); yyval.iface = interfaceNode_makeType (yyvsp[0].type); ;
    break;}
case 20:
#line 426 "llgrammar.y"
{ declareFcn (yyvsp[0].fcn, typeId_invalid); yyval.iface = interfaceNode_makeFcn (yyvsp[0].fcn); ;
    break;}
case 21:
#line 428 "llgrammar.y"
{ yyval.iface = interfaceNode_makeClaim (yyvsp[0].claim); ;
    break;}
case 22:
#line 430 "llgrammar.y"
{ declareIter (yyvsp[0].iter); yyval.iface = interfaceNode_makeIter (yyvsp[0].iter); ;
    break;}
case 23:
#line 434 "llgrammar.y"
{ yyval.iter = makeIterNode (yyvsp[-4].ltok, yyvsp[-2].paramlist); ;
    break;}
case 24:
#line 437 "llgrammar.y"
{ yyval.paramlist = paramNodeList_new (); ;
    break;}
case 25:
#line 438 "llgrammar.y"
{ yyval.paramlist = yyvsp[0].paramlist; ;
    break;}
case 26:
#line 442 "llgrammar.y"
{ yyval.paramlist = paramNodeList_add (paramNodeList_new (), yyvsp[0].param); ;
    break;}
case 27:
#line 444 "llgrammar.y"
{ yyval.paramlist = paramNodeList_add (yyvsp[-2].paramlist,yyvsp[0].param); ;
    break;}
case 28:
#line 447 "llgrammar.y"
{ yyval.param = markYieldParamNode (yyvsp[0].param); ;
    break;}
case 29:
#line 448 "llgrammar.y"
{ yyval.param = yyvsp[0].param; ;
    break;}
case 30:
#line 451 "llgrammar.y"
{ symtable_export (g_symtab, FALSE); ;
    break;}
case 31:
#line 452 "llgrammar.y"
{ yyval.iface = yyvsp[0].iface; symtable_export (g_symtab, TRUE); ;
    break;}
case 32:
#line 456 "llgrammar.y"
{ declarePrivConstant (yyvsp[0].constdeclaration); yyval.iface =  interfaceNode_makePrivConst (yyvsp[0].constdeclaration); ;
    break;}
case 33:
#line 458 "llgrammar.y"
{ declarePrivVar (yyvsp[0].vardeclaration); yyval.iface = interfaceNode_makePrivVar (yyvsp[0].vardeclaration); ;
    break;}
case 34:
#line 460 "llgrammar.y"
{ declarePrivType (yyvsp[0].type); yyval.iface = interfaceNode_makePrivType (yyvsp[0].type); ;
    break;}
case 35:
#line 462 "llgrammar.y"
{ declarePrivFcn (yyvsp[0].fcn, typeId_invalid); yyval.iface = interfaceNode_makePrivFcn (yyvsp[0].fcn); ;
    break;}
case 36:
#line 466 "llgrammar.y"
{ yyval.constdeclaration = makeConstDeclarationNode (yyvsp[-2].lcltypespec, yyvsp[-1].initdecls); ;
    break;}
case 37:
#line 470 "llgrammar.y"
{ yyval.vardeclaration = makeVarDeclarationNode (yyvsp[-2].lcltypespec, yyvsp[-1].initdecls, FALSE, FALSE); yyval.vardeclaration->qualifier = QLF_NONE; ;
    break;}
case 38:
#line 472 "llgrammar.y"
{ yyval.vardeclaration = makeVarDeclarationNode (yyvsp[-2].lcltypespec, yyvsp[-1].initdecls, FALSE, FALSE); yyval.vardeclaration->qualifier = QLF_CONST; ;
    break;}
case 39:
#line 474 "llgrammar.y"
{ yyval.vardeclaration = makeVarDeclarationNode (yyvsp[-2].lcltypespec, yyvsp[-1].initdecls, FALSE, FALSE); yyval.vardeclaration->qualifier = QLF_VOLATILE; ;
    break;}
case 40:
#line 477 "llgrammar.y"
{ yyval.type = makeAbstractTypeNode (yyvsp[0].abstract); ;
    break;}
case 41:
#line 478 "llgrammar.y"
{ yyval.type = makeExposedTypeNode (yyvsp[0].exposed); ;
    break;}
case 42:
#line 481 "llgrammar.y"
{ yyval.typequal = qual_createPrintfLike (); ;
    break;}
case 43:
#line 482 "llgrammar.y"
{ yyval.typequal = qual_createScanfLike (); ;
    break;}
case 44:
#line 483 "llgrammar.y"
{ yyval.typequal = qual_createMessageLike (); ;
    break;}
case 45:
#line 486 "llgrammar.y"
{ enteringFcnScope (yyvsp[-2].lcltypespec, yyvsp[-1].declare, yyvsp[0].globals); ;
    break;}
case 46:
#line 488 "llgrammar.y"
{ yyval.fcn = makeFcnNode (qual_createUnknown (), yyvsp[-12].lcltypespec, yyvsp[-11].declare, yyvsp[-10].globals, yyvsp[-7].vardeclarationlist, yyvsp[-6].letdecls, 
		       yyvsp[-5].lclpredicate, yyvsp[-4].lclpredicate, yyvsp[-3].modify, yyvsp[-2].lclpredicate, yyvsp[-1].lclpredicate); 
     /* type, declarator, glovbls, privateinits,
	lets, checks, requires, modifies, ensures, claims */
     symtable_exitScope (g_symtab);
   ;
    break;}
case 47:
#line 494 "llgrammar.y"
{ enteringFcnScope (yyvsp[-2].lcltypespec, yyvsp[-1].declare, yyvsp[0].globals); ;
    break;}
case 48:
#line 498 "llgrammar.y"
{ yyval.fcn = makeFcnNode (yyvsp[-13].typequal, yyvsp[-12].lcltypespec, yyvsp[-11].declare, yyvsp[-10].globals, yyvsp[-7].vardeclarationlist, 
		       yyvsp[-6].letdecls, yyvsp[-5].lclpredicate, yyvsp[-4].lclpredicate, yyvsp[-3].modify, yyvsp[-2].lclpredicate, yyvsp[-1].lclpredicate); 
     /* type, declarator, glovbls, privateinits,
	lets, checks, requires, modifies, ensures, claims */
     symtable_exitScope (g_symtab);
   ;
    break;}
case 49:
#line 508 "llgrammar.y"
{ enteringClaimScope (yyvsp[-2].paramlist, yyvsp[0].globals); ;
    break;}
case 50:
#line 510 "llgrammar.y"
{      yyval.claim = makeClaimNode (yyvsp[-11].ltok, yyvsp[-9].paramlist, yyvsp[-7].globals, yyvsp[-4].letdecls, yyvsp[-3].lclpredicate, yyvsp[-2].program, yyvsp[-1].lclpredicate); 
     symtable_exitScope (g_symtab); ;
    break;}
case 51:
#line 513 "llgrammar.y"
{ yyval.claim = (claimNode) 0; ;
    break;}
case 52:
#line 516 "llgrammar.y"
{g_inTypeDef = TRUE; ;
    break;}
case 53:
#line 516 "llgrammar.y"
{g_inTypeDef = FALSE; ;
    break;}
case 54:
#line 517 "llgrammar.y"
{ yyval.abstract = makeAbstractNode (yyvsp[-5].ltok, yyvsp[-2].ltok, TRUE, FALSE, yyvsp[0].abstbody); ;
    break;}
case 55:
#line 518 "llgrammar.y"
{g_inTypeDef = TRUE; ;
    break;}
case 56:
#line 519 "llgrammar.y"
{g_inTypeDef = FALSE; ;
    break;}
case 57:
#line 520 "llgrammar.y"
{ yyval.abstract = makeAbstractNode (yyvsp[-6].ltok, yyvsp[-2].ltok, TRUE, TRUE, yyvsp[0].abstbody); ;
    break;}
case 58:
#line 521 "llgrammar.y"
{g_inTypeDef = TRUE; ;
    break;}
case 59:
#line 522 "llgrammar.y"
{g_inTypeDef = FALSE; ;
    break;}
case 60:
#line 523 "llgrammar.y"
{ yyval.abstract = makeAbstractNode (yyvsp[-5].ltok, yyvsp[-2].ltok, TRUE, TRUE, yyvsp[0].abstbody); ;
    break;}
case 61:
#line 524 "llgrammar.y"
{g_inTypeDef = TRUE; ;
    break;}
case 62:
#line 524 "llgrammar.y"
{g_inTypeDef = FALSE; ;
    break;}
case 63:
#line 525 "llgrammar.y"
{ yyval.abstract = makeAbstractNode (yyvsp[-5].ltok, yyvsp[-2].ltok, FALSE, FALSE, yyvsp[0].abstbody); ;
    break;}
case 64:
#line 528 "llgrammar.y"
{ g_inTypeDef = TRUE; setExposedType (yyvsp[0].lcltypespec); ;
    break;}
case 65:
#line 529 "llgrammar.y"
{ g_inTypeDef = FALSE; ;
    break;}
case 66:
#line 530 "llgrammar.y"
{ yyval.exposed = makeExposedNode (yyvsp[-5].ltok, yyvsp[-4].lcltypespec, yyvsp[-2].declaratorinvs); /* to support mutually recursive types */ ;
    break;}
case 67:
#line 532 "llgrammar.y"
{ yyval.exposed = makeExposedNode (yyvsp[0].ltok, makeLclTypeSpecNodeSU (yyvsp[-1].structorunion), declaratorInvNodeList_new ()); ;
    break;}
case 68:
#line 534 "llgrammar.y"
{ yyval.exposed = makeExposedNode (yyvsp[0].ltok, makeLclTypeSpecNodeEnum (yyvsp[-1].enumspec), declaratorInvNodeList_new ()); ;
    break;}
case 69:
#line 550 "llgrammar.y"
{ yyval.importlist = importNodeList_add (importNodeList_new (), yyvsp[0].import); ;
    break;}
case 70:
#line 552 "llgrammar.y"
{ yyval.importlist = importNodeList_add (yyvsp[-2].importlist, yyvsp[0].import); ;
    break;}
case 71:
#line 555 "llgrammar.y"
{ yyval.import = importNode_makePlain (yyvsp[0].ltok); ;
    break;}
case 72:
#line 557 "llgrammar.y"
{ checkBrackets (yyvsp[-2].ltok, yyvsp[0].ltok); yyval.import = importNode_makeBracketed (yyvsp[-1].ltok); ;
    break;}
case 73:
#line 558 "llgrammar.y"
{ yyval.import = importNode_makeQuoted (yyvsp[0].ltok); ;
    break;}
case 74:
#line 561 "llgrammar.y"
{ yyval.ltokenList = ltokenList_singleton (yyvsp[0].ltok); ;
    break;}
case 75:
#line 562 "llgrammar.y"
{ yyval.ltokenList = ltokenList_push (yyvsp[-2].ltokenList, yyvsp[0].ltok); ;
    break;}
case 77:
#line 570 "llgrammar.y"
{ yyval.traitreflist = traitRefNodeList_add (traitRefNodeList_new (), yyvsp[0].traitref); ;
    break;}
case 78:
#line 572 "llgrammar.y"
{ yyval.traitreflist = traitRefNodeList_add (yyvsp[-2].traitreflist, yyvsp[0].traitref); ;
    break;}
case 79:
#line 576 "llgrammar.y"
{ yyval.traitref = makeTraitRefNode (ltokenList_singleton (yyvsp[0].ltok), (renamingNode)0); ;
    break;}
case 80:
#line 578 "llgrammar.y"
{ yyval.traitref = makeTraitRefNode (ltokenList_singleton (yyvsp[-3].ltok), yyvsp[-1].renaming); ;
    break;}
case 81:
#line 580 "llgrammar.y"
{ yyval.traitref = makeTraitRefNode (yyvsp[-1].ltokenList, (renamingNode)0); ;
    break;}
case 82:
#line 582 "llgrammar.y"
{ yyval.traitref = makeTraitRefNode (yyvsp[-4].ltokenList, yyvsp[-1].renaming); ;
    break;}
case 83:
#line 585 "llgrammar.y"
{ yyval.ltokenList = ltokenList_singleton (yyvsp[0].ltok); ;
    break;}
case 84:
#line 586 "llgrammar.y"
{ yyval.ltokenList = ltokenList_push (yyvsp[-2].ltokenList, yyvsp[0].ltok); ;
    break;}
case 85:
#line 590 "llgrammar.y"
{ yyval.renaming = makeRenamingNode (typeNameNodeList_new (), yyvsp[0].replacelist); ;
    break;}
case 86:
#line 592 "llgrammar.y"
{ yyval.renaming = makeRenamingNode (yyvsp[0].namelist, replaceNodeList_new ()); ;
    break;}
case 87:
#line 593 "llgrammar.y"
{ yyval.renaming = makeRenamingNode (yyvsp[-2].namelist, yyvsp[0].replacelist); ;
    break;}
case 88:
#line 597 "llgrammar.y"
{ yyval.namelist = typeNameNodeList_add (typeNameNodeList_new (), yyvsp[0].typname); ;
    break;}
case 89:
#line 598 "llgrammar.y"
{ yyval.namelist = typeNameNodeList_add (yyvsp[-2].namelist, yyvsp[0].typname); ;
    break;}
case 90:
#line 602 "llgrammar.y"
{ yyval.replacelist = replaceNodeList_add (replaceNodeList_new (), yyvsp[0].replace); ;
    break;}
case 91:
#line 603 "llgrammar.y"
{ yyval.replacelist = replaceNodeList_add (yyvsp[-2].replacelist, yyvsp[0].replace); ;
    break;}
case 92:
#line 606 "llgrammar.y"
{ yyval.replace = makeReplaceNode (yyvsp[-1].ltok, yyvsp[-2].typname, TRUE, yyvsp[0].ltok, NULL, NULL); ;
    break;}
case 93:
#line 607 "llgrammar.y"
{ yyval.replace = makeReplaceNameNode (yyvsp[-1].ltok, yyvsp[-2].typname, yyvsp[0].name); ;
    break;}
case 94:
#line 608 "llgrammar.y"
{ yyval.replace = makeReplaceNode (yyvsp[-2].ltok, yyvsp[-3].typname, FALSE, ltoken_undefined,
							 yyvsp[-1].name, yyvsp[0].signature); ;
    break;}
case 95:
#line 612 "llgrammar.y"
{ yyval.name = makeNameNodeId (yyvsp[0].ltok); ;
    break;}
case 96:
#line 613 "llgrammar.y"
{ yyval.name = makeNameNodeForm (yyvsp[0].opform); ;
    break;}
case 99:
#line 621 "llgrammar.y"
{ yyval.initdecls = initDeclNodeList_add (initDeclNodeList_new (), yyvsp[0].initdecl); ;
    break;}
case 100:
#line 623 "llgrammar.y"
{ yyval.initdecls = initDeclNodeList_add (yyvsp[-2].initdecls, yyvsp[0].initdecl); ;
    break;}
case 101:
#line 626 "llgrammar.y"
{ yyval.initdecl = makeInitDeclNode (yyvsp[0].declare, (termNode)0); ;
    break;}
case 102:
#line 627 "llgrammar.y"
{ yyval.initdecl = makeInitDeclNode (yyvsp[-2].declare, yyvsp[0].term); ;
    break;}
case 103:
#line 631 "llgrammar.y"
{ yyval.globals = varDeclarationNodeList_new (); ;
    break;}
case 104:
#line 633 "llgrammar.y"
{ varDeclarationNodeList_addh (yyvsp[-1].globals, yyvsp[0].vardeclaration); yyval.globals = yyvsp[-1].globals; ;
    break;}
case 105:
#line 636 "llgrammar.y"
{ yyval.vardeclaration = makeVarDeclarationNode (yyvsp[-2].lcltypespec, yyvsp[-1].initdecls, TRUE, FALSE); ;
    break;}
case 106:
#line 637 "llgrammar.y"
{ yyval.vardeclaration = makeInternalStateNode (); ;
    break;}
case 107:
#line 638 "llgrammar.y"
{ yyval.vardeclaration = makeFileSystemNode (); ;
    break;}
case 108:
#line 641 "llgrammar.y"
{ yyval.vardeclarationlist = varDeclarationNodeList_new (); ;
    break;}
case 109:
#line 642 "llgrammar.y"
{ varDeclarationNodeList_addh (yyvsp[-1].vardeclarationlist, yyvsp[0].vardeclaration); yyval.vardeclarationlist = yyvsp[-1].vardeclarationlist; ;
    break;}
case 110:
#line 646 "llgrammar.y"
{ yyval.vardeclaration = makeVarDeclarationNode (yyvsp[-2].lcltypespec, yyvsp[-1].initdecls, FALSE, TRUE); ;
    break;}
case 111:
#line 649 "llgrammar.y"
{ yyval.letdecls = letDeclNodeList_new (); ;
    break;}
case 112:
#line 650 "llgrammar.y"
{ yyval.letdecls = yyvsp[-1].letdecls; ;
    break;}
case 113:
#line 653 "llgrammar.y"
{ yyval.letdecls = letDeclNodeList_add (letDeclNodeList_new (), yyvsp[0].letdecl); ;
    break;}
case 114:
#line 654 "llgrammar.y"
{ yyval.letdecls = letDeclNodeList_add (yyvsp[-2].letdecls, yyvsp[0].letdecl); ;
    break;}
case 115:
#line 657 "llgrammar.y"
{ yyval.letdecl = makeLetDeclNode (yyvsp[-4].ltok, yyvsp[-2].lcltypespec, yyvsp[0].term); ;
    break;}
case 116:
#line 658 "llgrammar.y"
{ yyval.letdecl = makeLetDeclNode (yyvsp[-2].ltok, (lclTypeSpecNode)0, yyvsp[0].term); ;
    break;}
case 118:
#line 663 "llgrammar.y"
{ yyval.lclpredicate = (lclPredicateNode)0; ;
    break;}
case 119:
#line 664 "llgrammar.y"
{ checkLclPredicate (yyvsp[-2].ltok, yyvsp[-1].lclpredicate); yyval.lclpredicate = makeChecksNode (yyvsp[-2].ltok, yyvsp[-1].lclpredicate); ;
    break;}
case 120:
#line 667 "llgrammar.y"
{ yyval.lclpredicate = (lclPredicateNode)0; ;
    break;}
case 121:
#line 668 "llgrammar.y"
{ checkLclPredicate (yyvsp[-2].ltok, yyvsp[-1].lclpredicate); yyval.lclpredicate = makeRequiresNode (yyvsp[-2].ltok, yyvsp[-1].lclpredicate);;
    break;}
case 122:
#line 671 "llgrammar.y"
{ yyval.modify = (modifyNode)0; ;
    break;}
case 123:
#line 672 "llgrammar.y"
{ yyval.modify = makeModifyNodeSpecial (yyvsp[-2].ltok, TRUE); ;
    break;}
case 124:
#line 673 "llgrammar.y"
{ yyval.modify = makeModifyNodeSpecial (yyvsp[-2].ltok, FALSE); ;
    break;}
case 125:
#line 674 "llgrammar.y"
{ yyval.modify = makeModifyNodeRef (yyvsp[-2].ltok, yyvsp[-1].storereflist); ;
    break;}
case 126:
#line 677 "llgrammar.y"
{ yyval.storereflist = storeRefNodeList_add (storeRefNodeList_new (), yyvsp[0].storeref); ;
    break;}
case 127:
#line 678 "llgrammar.y"
{ yyval.storereflist = storeRefNodeList_add (yyvsp[-2].storereflist, yyvsp[0].storeref); ;
    break;}
case 128:
#line 681 "llgrammar.y"
{ yyval.storeref = makeStoreRefNodeTerm (yyvsp[0].term); ;
    break;}
case 129:
#line 682 "llgrammar.y"
{ yyval.storeref = makeStoreRefNodeType (yyvsp[0].lcltypespec, FALSE); ;
    break;}
case 130:
#line 683 "llgrammar.y"
{ yyval.storeref = makeStoreRefNodeType (yyvsp[0].lcltypespec, TRUE); ;
    break;}
case 131:
#line 684 "llgrammar.y"
{ yyval.storeref = makeStoreRefNodeInternal (); ;
    break;}
case 132:
#line 685 "llgrammar.y"
{ yyval.storeref = makeStoreRefNodeSystem (); ;
    break;}
case 133:
#line 688 "llgrammar.y"
{ yyval.lclpredicate = (lclPredicateNode)0; ;
    break;}
case 134:
#line 689 "llgrammar.y"
{ checkLclPredicate (yyvsp[-2].ltok, yyvsp[-1].lclpredicate); yyval.lclpredicate = makeEnsuresNode (yyvsp[-2].ltok, yyvsp[-1].lclpredicate);;
    break;}
case 135:
#line 692 "llgrammar.y"
{ yyval.lclpredicate = (lclPredicateNode)0; ;
    break;}
case 136:
#line 693 "llgrammar.y"
{ checkLclPredicate (yyvsp[-2].ltok, yyvsp[-1].lclpredicate); yyval.lclpredicate = makeIntraClaimNode (yyvsp[-2].ltok, yyvsp[-1].lclpredicate);;
    break;}
case 137:
#line 696 "llgrammar.y"
{ yyval.paramlist = paramNodeList_new (); ;
    break;}
case 138:
#line 697 "llgrammar.y"
{ yyval.paramlist = yyvsp[0].paramlist; ;
    break;}
case 140:
#line 701 "llgrammar.y"
{ yyval.paramlist = paramNodeList_add (paramNodeList_new (), paramNode_elipsis ()); ;
    break;}
case 141:
#line 702 "llgrammar.y"
{ yyval.paramlist = paramNodeList_add (yyvsp[-2].paramlist, paramNode_elipsis ()); ;
    break;}
case 142:
#line 705 "llgrammar.y"
{ yyval.paramlist = paramNodeList_single (yyvsp[0].param); ;
    break;}
case 143:
#line 706 "llgrammar.y"
{ yyval.paramlist = paramNodeList_add (yyvsp[-2].paramlist, yyvsp[0].param); ;
    break;}
case 144:
#line 709 "llgrammar.y"
{ yyval.program = (programNode)0; ;
    break;}
case 145:
#line 710 "llgrammar.y"
{ yyval.program = yyvsp[-1].program; ;
    break;}
case 146:
#line 711 "llgrammar.y"
{ yyval.program = yyvsp[-2].program; ;
    break;}
case 147:
#line 714 "llgrammar.y"
{ yyval.program = makeProgramNode (yyvsp[0].stmt); ;
    break;}
case 148:
#line 717 "llgrammar.y"
{ yyval.program = yyvsp[-1].program; yyval.program->wrapped = yyval.program->wrapped + 1; ;
    break;}
case 149:
#line 719 "llgrammar.y"
{ programNodeList x = programNodeList_new ();
     programNodeList_addh (x, yyvsp[-1].program);
     yyval.program = makeProgramNodeAction (x, ACT_ITER); 
   ;
    break;}
case 150:
#line 724 "llgrammar.y"
{ programNodeList x = programNodeList_new ();
     programNodeList_addh (x, yyvsp[-2].program);
     programNodeList_addh (x, yyvsp[0].program);
     yyval.program = makeProgramNodeAction (x, ACT_ALTERNATE); 
   ;
    break;}
case 151:
#line 730 "llgrammar.y"
{ programNodeList x = programNodeList_new ();
     programNodeList_addh (x, yyvsp[-2].program);
     programNodeList_addh (x, yyvsp[0].program);
     yyval.program = makeProgramNodeAction (x, ACT_SEQUENCE); 
   ;
    break;}
case 152:
#line 738 "llgrammar.y"
{ yyval.stmt = makeStmtNode (ltoken_undefined, yyvsp[-3].ltok, yyvsp[-1].termlist); ;
    break;}
case 153:
#line 740 "llgrammar.y"
{ yyval.stmt = makeStmtNode (ltoken_undefined, yyvsp[-2].ltok, termNodeList_new ()); ;
    break;}
case 154:
#line 742 "llgrammar.y"
{ yyval.stmt = makeStmtNode (yyvsp[-4].ltok, yyvsp[-2].ltok, termNodeList_new ()); ;
    break;}
case 155:
#line 744 "llgrammar.y"
{ yyval.stmt = makeStmtNode (yyvsp[-5].ltok, yyvsp[-3].ltok, yyvsp[-1].termlist); ;
    break;}
case 156:
#line 747 "llgrammar.y"
{ yyval.termlist = termNodeList_push (termNodeList_new (), yyvsp[0].term); ;
    break;}
case 157:
#line 748 "llgrammar.y"
{ yyval.termlist = termNodeList_push (yyvsp[-2].termlist, yyvsp[0].term); ;
    break;}
case 159:
#line 752 "llgrammar.y"
{ yyval.term = makeSimpleTermNode (yyvsp[0].ltok); ;
    break;}
case 160:
#line 753 "llgrammar.y"
{ yyval.term = makePrefixTermNode (yyvsp[-1].ltok, yyvsp[0].term); ;
    break;}
case 161:
#line 754 "llgrammar.y"
{ yyval.term = makePostfixTermNode2 (yyvsp[-1].term, yyvsp[0].ltok); ;
    break;}
case 162:
#line 755 "llgrammar.y"
{ yyval.term = makeInfixTermNode (yyvsp[-2].term, yyvsp[-1].ltok, yyvsp[0].term); ;
    break;}
case 163:
#line 756 "llgrammar.y"
{ yyval.term = yyvsp[-1].term; yyval.term->wrapped = yyval.term->wrapped + 1; ;
    break;}
case 164:
#line 758 "llgrammar.y"
{ yyval.term = makeOpCallTermNode (yyvsp[-2].ltok, yyvsp[-1].ltok, termNodeList_new (), yyvsp[0].ltok); ;
    break;}
case 165:
#line 760 "llgrammar.y"
{ yyval.term = makeOpCallTermNode (yyvsp[-3].ltok, yyvsp[-2].ltok, yyvsp[-1].termlist, yyvsp[0].ltok); ;
    break;}
case 166:
#line 763 "llgrammar.y"
{ yyval.abstbody = (abstBodyNode)0; ;
    break;}
case 167:
#line 764 "llgrammar.y"
{ yyval.abstbody = makeAbstBodyNode (yyvsp[-2].ltok, yyvsp[-1].fcns); ;
    break;}
case 168:
#line 765 "llgrammar.y"
{ yyval.abstbody = makeAbstBodyNode2 (yyvsp[-3].ltok, yyvsp[-2].ltokenList); ;
    break;}
case 169:
#line 766 "llgrammar.y"
{ yyval.abstbody = (abstBodyNode)0; ;
    break;}
case 170:
#line 769 "llgrammar.y"
{ yyval.fcns = fcnNodeList_new (); ;
    break;}
case 171:
#line 770 "llgrammar.y"
{ yyval.fcns = fcnNodeList_add (yyvsp[-1].fcns, yyvsp[0].fcn); ;
    break;}
case 172:
#line 773 "llgrammar.y"
{ yyval.lclpredicate = (lclPredicateNode)0; ;
    break;}
case 174:
#line 777 "llgrammar.y"
{ g_inTypeDef = FALSE; ;
    break;}
case 175:
#line 778 "llgrammar.y"
{ yyvsp[-1].lclpredicate->tok = yyvsp[-5].ltok; yyvsp[-1].lclpredicate->kind = LPD_CONSTRAINT;
     checkLclPredicate (yyvsp[-5].ltok, yyvsp[-1].lclpredicate);
     yyval.lclpredicate = yyvsp[-1].lclpredicate;
     symtable_exitScope (g_symtab); 
     g_inTypeDef = TRUE;
   ;
    break;}
case 176:
#line 786 "llgrammar.y"
{ yyval.declaratorinvs = declaratorInvNodeList_add (declaratorInvNodeList_new (), yyvsp[0].declaratorinv); ;
    break;}
case 177:
#line 788 "llgrammar.y"
{ yyval.declaratorinvs = declaratorInvNodeList_add (yyvsp[-2].declaratorinvs, yyvsp[0].declaratorinv); ;
    break;}
case 178:
#line 791 "llgrammar.y"
{ declareForwardType (yyvsp[0].declare); ;
    break;}
case 179:
#line 792 "llgrammar.y"
{ yyval.declaratorinv = makeDeclaratorInvNode (yyvsp[-2].declare, yyvsp[0].abstbody); ;
    break;}
case 180:
#line 795 "llgrammar.y"
{ yyval.abstbody = (abstBodyNode)0; ;
    break;}
case 181:
#line 796 "llgrammar.y"
{ yyval.abstbody = makeExposedBodyNode (yyvsp[-2].ltok, yyvsp[-1].lclpredicate); ;
    break;}
case 182:
#line 799 "llgrammar.y"
{ yyval.ltok = yyvsp[0].ltok; ltoken_setIntField (yyval.ltok, fixBits (TS_VOID, 0)); ;
    break;}
case 183:
#line 800 "llgrammar.y"
{ yyval.ltok = yyvsp[0].ltok; ltoken_setIntField (yyval.ltok, fixBits (TS_CHAR, 0)); ;
    break;}
case 184:
#line 801 "llgrammar.y"
{ yyval.ltok = yyvsp[0].ltok; ltoken_setIntField (yyval.ltok, fixBits (TS_DOUBLE, 0)); ;
    break;}
case 185:
#line 802 "llgrammar.y"
{ yyval.ltok = yyvsp[0].ltok; ltoken_setIntField (yyval.ltok, fixBits (TS_FLOAT, 0)); ;
    break;}
case 186:
#line 803 "llgrammar.y"
{ yyval.ltok = yyvsp[0].ltok; ltoken_setIntField (yyval.ltok, fixBits (TS_INT, 0)); ;
    break;}
case 187:
#line 804 "llgrammar.y"
{ yyval.ltok = yyvsp[0].ltok; ltoken_setIntField (yyval.ltok, fixBits (TS_LONG, 0)); ;
    break;}
case 188:
#line 805 "llgrammar.y"
{ yyval.ltok = yyvsp[0].ltok; ltoken_setIntField (yyval.ltok, fixBits (TS_SHORT, 0)); ;
    break;}
case 189:
#line 806 "llgrammar.y"
{ yyval.ltok = yyvsp[0].ltok; ltoken_setIntField (yyval.ltok, fixBits (TS_SIGNED, 0)); ;
    break;}
case 190:
#line 807 "llgrammar.y"
{ yyval.ltok = yyvsp[0].ltok; ltoken_setIntField (yyval.ltok, fixBits (TS_UNSIGNED, 0)); ;
    break;}
case 191:
#line 808 "llgrammar.y"
{ yyval.ltok = yyvsp[0].ltok; ltoken_setIntField (yyval.ltok, fixBits (TS_UNKNOWN, 0)); ;
    break;}
case 192:
#line 816 "llgrammar.y"
{ yyval.ctypes = makeCTypesNode ((CTypesNode)0, yyvsp[0].ltok); ;
    break;}
case 193:
#line 817 "llgrammar.y"
{ yyval.ctypes = makeCTypesNode (yyvsp[-1].ctypes, yyvsp[0].ltok); ;
    break;}
case 194:
#line 823 "llgrammar.y"
{ yyval.ctypes = makeTypeSpecifier (yyvsp[0].ltok); ;
    break;}
case 195:
#line 825 "llgrammar.y"
{ yyval.ctypes = yyvsp[0].ctypes; yyval.ctypes->sort = sort_lookupName (lclctype_toSort (yyvsp[0].ctypes->intfield)); ;
    break;}
case 196:
#line 830 "llgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 197:
#line 831 "llgrammar.y"
{ yyval.typequal = qual_createUnused (); ;
    break;}
case 198:
#line 832 "llgrammar.y"
{ yyval.typequal = qual_createSef (); ;
    break;}
case 199:
#line 833 "llgrammar.y"
{ yyval.typequal = qual_createOnly (); ;
    break;}
case 200:
#line 834 "llgrammar.y"
{ yyval.typequal = qual_createOwned (); ;
    break;}
case 201:
#line 835 "llgrammar.y"
{ yyval.typequal = qual_createDependent (); ;
    break;}
case 202:
#line 836 "llgrammar.y"
{ yyval.typequal = qual_createKeep (); ;
    break;}
case 203:
#line 837 "llgrammar.y"
{ yyval.typequal = qual_createKept (); ;
    break;}
case 204:
#line 838 "llgrammar.y"
{ yyval.typequal = qual_createObserver (); ;
    break;}
case 205:
#line 839 "llgrammar.y"
{ yyval.typequal = qual_createExits (); ;
    break;}
case 206:
#line 840 "llgrammar.y"
{ yyval.typequal = qual_createMayExit (); ;
    break;}
case 207:
#line 841 "llgrammar.y"
{ yyval.typequal = qual_createTrueExit (); ;
    break;}
case 208:
#line 842 "llgrammar.y"
{ yyval.typequal = qual_createFalseExit (); ;
    break;}
case 209:
#line 843 "llgrammar.y"
{ yyval.typequal = qual_createNeverExit (); ;
    break;}
case 210:
#line 844 "llgrammar.y"
{ yyval.typequal = qual_createOnly (); ;
    break;}
case 211:
#line 845 "llgrammar.y"
{ yyval.typequal = qual_createShared (); ;
    break;}
case 212:
#line 846 "llgrammar.y"
{ yyval.typequal = qual_createUnique (); ;
    break;}
case 213:
#line 847 "llgrammar.y"
{ yyval.typequal = qual_createChecked (); ;
    break;}
case 214:
#line 848 "llgrammar.y"
{ yyval.typequal = qual_createUnchecked (); ;
    break;}
case 215:
#line 849 "llgrammar.y"
{ yyval.typequal = qual_createCheckedStrict (); ;
    break;}
case 216:
#line 850 "llgrammar.y"
{ yyval.typequal = qual_createTrueNull (); ;
    break;}
case 217:
#line 851 "llgrammar.y"
{ yyval.typequal = qual_createFalseNull (); ;
    break;}
case 218:
#line 852 "llgrammar.y"
{ yyval.typequal = qual_createRelNull (); ;
    break;}
case 219:
#line 853 "llgrammar.y"
{ yyval.typequal = qual_createRelDef (); ;
    break;}
case 220:
#line 854 "llgrammar.y"
{ yyval.typequal = qual_createRefCounted (); ;
    break;}
case 221:
#line 855 "llgrammar.y"
{ yyval.typequal = qual_createRefs (); ;
    break;}
case 222:
#line 856 "llgrammar.y"
{ yyval.typequal = qual_createNewRef (); ;
    break;}
case 223:
#line 857 "llgrammar.y"
{ yyval.typequal = qual_createKillRef (); ;
    break;}
case 224:
#line 858 "llgrammar.y"
{ yyval.typequal = qual_createNull (); ;
    break;}
case 225:
#line 859 "llgrammar.y"
{ yyval.typequal = qual_createNotNull (); ;
    break;}
case 226:
#line 860 "llgrammar.y"
{ yyval.typequal = qual_createReturned (); ;
    break;}
case 227:
#line 861 "llgrammar.y"
{ yyval.typequal = qual_createExposed (); ;
    break;}
case 228:
#line 862 "llgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 229:
#line 863 "llgrammar.y"
{ yyval.typequal = qual_createNullTerminated () ; ;
    break;}
case 230:
#line 864 "llgrammar.y"
{ yyval.typequal = qual_createUndef (); ;
    break;}
case 231:
#line 865 "llgrammar.y"
{ yyval.typequal = qual_createKilled (); ;
    break;}
case 232:
#line 869 "llgrammar.y"
{ yyval.lcltypespec = makeLclTypeSpecNodeType (yyvsp[0].ctypes); ;
    break;}
case 233:
#line 871 "llgrammar.y"
{ yyval.lcltypespec = makeLclTypeSpecNodeSU (yyvsp[0].structorunion); ;
    break;}
case 234:
#line 873 "llgrammar.y"
{ yyval.lcltypespec = makeLclTypeSpecNodeEnum (yyvsp[0].enumspec); ;
    break;}
case 235:
#line 875 "llgrammar.y"
{ yyval.lcltypespec = lclTypeSpecNode_addQual (yyvsp[0].lcltypespec, yyvsp[-1].typequal); ;
    break;}
case 236:
#line 877 "llgrammar.y"
{ yyval.lcltypespec = makeLclTypeSpecNodeConj (yyvsp[-3].lcltypespec, yyvsp[-1].lcltypespec); ;
    break;}
case 238:
#line 887 "llgrammar.y"
{ llassert (lclTypeSpecNode_isDefined (yyvsp[-1].lcltypespec));
     yyvsp[-1].lcltypespec->pointers = yyvsp[0].count; yyval.lcltypespec = yyvsp[-1].lcltypespec; ;
    break;}
case 239:
#line 891 "llgrammar.y"
{ yyval.count = 1; ;
    break;}
case 240:
#line 892 "llgrammar.y"
{ yyval.count = yyvsp[-1].count + 1; ;
    break;}
case 241:
#line 896 "llgrammar.y"
{ (void) checkAndEnterTag (TAG_FWDSTRUCT, ltoken_copy (yyvsp[0].ltok)); ;
    break;}
case 242:
#line 898 "llgrammar.y"
{ yyval.structorunion = makestrOrUnionNode (yyvsp[-5].ltok, SU_STRUCT, yyvsp[-4].ltok, yyvsp[-1].structdecls); ;
    break;}
case 243:
#line 900 "llgrammar.y"
{ (void) checkAndEnterTag (TAG_FWDUNION, ltoken_copy (yyvsp[0].ltok)); ;
    break;}
case 244:
#line 902 "llgrammar.y"
{ yyval.structorunion = makestrOrUnionNode (yyvsp[-5].ltok, SU_UNION, yyvsp[-4].ltok, yyvsp[-1].structdecls); ;
    break;}
case 245:
#line 904 "llgrammar.y"
{ yyval.structorunion = makeForwardstrOrUnionNode (yyvsp[-1].ltok, SU_STRUCT, yyvsp[0].ltok); ;
    break;}
case 246:
#line 906 "llgrammar.y"
{ yyval.structorunion = makeForwardstrOrUnionNode (yyvsp[-1].ltok, SU_UNION, yyvsp[0].ltok); ;
    break;}
case 247:
#line 909 "llgrammar.y"
{ yyval.ltok = ltoken_undefined; ;
    break;}
case 249:
#line 913 "llgrammar.y"
{ yyval.structdecls = stDeclNodeList_add (stDeclNodeList_new (), yyvsp[0].structdecl); ;
    break;}
case 250:
#line 914 "llgrammar.y"
{ yyval.structdecls = stDeclNodeList_add (yyvsp[-1].structdecls, yyvsp[0].structdecl); ;
    break;}
case 251:
#line 919 "llgrammar.y"
{ yyval.structdecl = makestDeclNode (yyvsp[-2].lcltypespec, yyvsp[-1].declarelist); ;
    break;}
case 252:
#line 923 "llgrammar.y"
{ yyval.declarelist = declaratorNodeList_add (declaratorNodeList_new (), yyvsp[0].declare); ;
    break;}
case 253:
#line 925 "llgrammar.y"
{ yyval.declarelist = declaratorNodeList_add (yyvsp[-2].declarelist, yyvsp[0].declare); ;
    break;}
case 254:
#line 928 "llgrammar.y"
{ ; ;
    break;}
case 255:
#line 929 "llgrammar.y"
{ ; ;
    break;}
case 256:
#line 933 "llgrammar.y"
{ yyval.enumspec = makeEnumSpecNode (yyvsp[-5].ltok, yyvsp[-4].ltok, yyvsp[-2].ltokenList); ;
    break;}
case 257:
#line 935 "llgrammar.y"
{ yyval.enumspec = makeEnumSpecNode2 (yyvsp[-1].ltok, yyvsp[0].ltok); ;
    break;}
case 258:
#line 938 "llgrammar.y"
{ yyval.ltokenList = ltokenList_singleton (yyvsp[0].ltok); ;
    break;}
case 259:
#line 939 "llgrammar.y"
{ yyval.ltokenList = ltokenList_push (yyvsp[-2].ltokenList, yyvsp[0].ltok); ;
    break;}
case 260:
#line 949 "llgrammar.y"
{ yyval.declare = makeDeclaratorNode (yyvsp[0].typeexpr); ;
    break;}
case 261:
#line 950 "llgrammar.y"
{ yyval.declare = makeDeclaratorNode (yyvsp[0].typeexpr); ;
    break;}
case 262:
#line 953 "llgrammar.y"
{ yyval.typeexpr = makeTypeExpr (yyvsp[0].ltok); ;
    break;}
case 263:
#line 954 "llgrammar.y"
{ yyval.typeexpr = yyvsp[-1].typeexpr; yyval.typeexpr->wrapped = yyval.typeexpr->wrapped + 1; ;
    break;}
case 264:
#line 955 "llgrammar.y"
{ yyval.typeexpr = makePointerNode (yyvsp[-1].ltok, yyvsp[0].typeexpr); ;
    break;}
case 265:
#line 956 "llgrammar.y"
{ yyval.typeexpr = makeArrayNode (yyvsp[-1].typeexpr, yyvsp[0].array); ;
    break;}
case 266:
#line 957 "llgrammar.y"
{ yyval.typeexpr = makeFunctionNode (yyvsp[-2].typeexpr, paramNodeList_new ()); ;
    break;}
case 267:
#line 958 "llgrammar.y"
{ yyval.typeexpr = makeFunctionNode (yyvsp[-3].typeexpr, yyvsp[-1].paramlist); ;
    break;}
case 268:
#line 961 "llgrammar.y"
{ yyval.typeexpr = makeTypeExpr (yyvsp[0].ltok); ;
    break;}
case 269:
#line 962 "llgrammar.y"
{ yyval.typeexpr = yyvsp[-1].typeexpr; yyval.typeexpr->wrapped = yyval.typeexpr->wrapped + 1; ;
    break;}
case 270:
#line 963 "llgrammar.y"
{ yyval.typeexpr = makePointerNode (yyvsp[-1].ltok, yyvsp[0].typeexpr); ;
    break;}
case 271:
#line 964 "llgrammar.y"
{ yyval.typeexpr = makeArrayNode (yyvsp[-1].typeexpr, yyvsp[0].array); ;
    break;}
case 272:
#line 965 "llgrammar.y"
{ yyval.typeexpr = makeFunctionNode (yyvsp[-2].typeexpr, paramNodeList_new ()); ;
    break;}
case 273:
#line 966 "llgrammar.y"
{ yyval.typeexpr = makeFunctionNode (yyvsp[-3].typeexpr, yyvsp[-1].paramlist); ;
    break;}
case 274:
#line 975 "llgrammar.y"
{ yyval.typeexpr = makeTypeExpr (yyvsp[0].ltok); ;
    break;}
case 275:
#line 976 "llgrammar.y"
{ yyval.typeexpr = makePointerNode (yyvsp[-1].ltok, yyvsp[0].typeexpr); ;
    break;}
case 276:
#line 977 "llgrammar.y"
{ yyval.typeexpr = makeArrayNode (yyvsp[-1].typeexpr, yyvsp[0].array); ;
    break;}
case 277:
#line 978 "llgrammar.y"
{ yyval.typeexpr = makeFunctionNode (yyvsp[-2].typeexpr, paramNodeList_new ()); ;
    break;}
case 278:
#line 979 "llgrammar.y"
{ yyval.typeexpr = makeFunctionNode (yyvsp[-3].typeexpr, yyvsp[-1].paramlist); ;
    break;}
case 279:
#line 985 "llgrammar.y"
{ yyval.param = makeParamNode (yyvsp[-1].lcltypespec, yyvsp[0].typeexpr); ;
    break;}
case 280:
#line 986 "llgrammar.y"
{ yyval.param = makeParamNode (yyvsp[-1].lcltypespec, yyvsp[0].typeexpr); ;
    break;}
case 281:
#line 987 "llgrammar.y"
{ yyval.param = makeParamNode (yyvsp[-1].lcltypespec, yyvsp[0].abstDecl); ;
    break;}
case 282:
#line 997 "llgrammar.y"
{ yyval.typname = makeTypeNameNode (FALSE, yyvsp[-1].lcltypespec, yyvsp[0].abstDecl); ;
    break;}
case 283:
#line 998 "llgrammar.y"
{ yyval.typname = makeTypeNameNode (TRUE, yyvsp[-1].lcltypespec, yyvsp[0].abstDecl); ;
    break;}
case 284:
#line 999 "llgrammar.y"
{ yyval.typname = makeTypeNameNodeOp (yyvsp[0].opform); ;
    break;}
case 285:
#line 1004 "llgrammar.y"
{ yyval.abstDecl = (abstDeclaratorNode)0; ;
    break;}
case 286:
#line 1005 "llgrammar.y"
{ yyval.abstDecl = (abstDeclaratorNode)yyvsp[0].typeexpr; ;
    break;}
case 287:
#line 1008 "llgrammar.y"
{ yyval.typeexpr = yyvsp[-1].typeexpr; yyval.typeexpr->wrapped = yyval.typeexpr->wrapped + 1; ;
    break;}
case 288:
#line 1009 "llgrammar.y"
{ yyval.typeexpr = makePointerNode (yyvsp[-1].ltok, yyvsp[0].typeexpr); ;
    break;}
case 289:
#line 1010 "llgrammar.y"
{ yyval.typeexpr = makePointerNode (yyvsp[0].ltok, (typeExpr)0); ;
    break;}
case 290:
#line 1011 "llgrammar.y"
{ yyval.typeexpr = makeArrayNode ((typeExpr)0, yyvsp[0].array); ;
    break;}
case 291:
#line 1012 "llgrammar.y"
{ yyval.typeexpr = makeArrayNode (yyvsp[-1].typeexpr, yyvsp[0].array); ;
    break;}
case 292:
#line 1013 "llgrammar.y"
{ yyval.typeexpr = makeFunctionNode (yyvsp[-2].typeexpr, paramNodeList_new ()); ;
    break;}
case 293:
#line 1014 "llgrammar.y"
{ yyval.typeexpr = makeFunctionNode ((typeExpr)0, yyvsp[-1].paramlist); ;
    break;}
case 294:
#line 1015 "llgrammar.y"
{ yyval.typeexpr = makeFunctionNode (yyvsp[-3].typeexpr, yyvsp[-1].paramlist); ;
    break;}
case 295:
#line 1018 "llgrammar.y"
{ yyval.array = makeArrayQualNode (yyvsp[-1].ltok, (termNode)0); ;
    break;}
case 296:
#line 1019 "llgrammar.y"
{ yyval.array = makeArrayQualNode (yyvsp[-2].ltok, yyvsp[-1].term); ;
    break;}
case 297:
#line 1023 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-5].ltok, OPF_IF, opFormUnion_createMiddle (0), ltoken_undefined); ;
    break;}
case 298:
#line 1025 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[0].ltok, OPF_ANYOP, opFormUnion_createAnyOp (yyvsp[0].ltok), ltoken_undefined); ;
    break;}
case 299:
#line 1027 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-1].ltok, OPF_MANYOP, opFormUnion_createAnyOp (yyvsp[0].ltok), ltoken_undefined); ;
    break;}
case 300:
#line 1029 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-1].ltok, OPF_ANYOPM, opFormUnion_createAnyOp (yyvsp[-1].ltok), ltoken_undefined); ;
    break;}
case 301:
#line 1031 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_MANYOPM, 
			  opFormUnion_createAnyOp (yyvsp[-1].ltok), ltoken_undefined); ;
    break;}
case 302:
#line 1034 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_MIDDLE, opFormUnion_createMiddle (yyvsp[-1].count), yyvsp[0].ltok); ;
    break;}
case 303:
#line 1036 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-3].ltok, OPF_MMIDDLE, opFormUnion_createMiddle (yyvsp[-1].count), yyvsp[0].ltok); ;
    break;}
case 304:
#line 1038 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-3].ltok, OPF_MIDDLEM, opFormUnion_createMiddle (yyvsp[-2].count), yyvsp[-1].ltok); ;
    break;}
case 305:
#line 1040 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-3].ltok, OPF_MMIDDLEM, opFormUnion_createMiddle (yyvsp[-2].count), yyvsp[-1].ltok); ;
    break;}
case 306:
#line 1042 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_BMIDDLE, opFormUnion_createMiddle (yyvsp[-1].count), yyvsp[0].ltok); ;
    break;}
case 307:
#line 1044 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-3].ltok, OPF_BMIDDLEM, opFormUnion_createMiddle (yyvsp[-2].count), yyvsp[-1].ltok); ;
    break;}
case 308:
#line 1052 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_BMMIDDLE, opFormUnion_createMiddle (yyvsp[-1].count), yyvsp[0].ltok); ;
    break;}
case 309:
#line 1054 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-3].ltok, OPF_BMMIDDLEM, opFormUnion_createMiddle (yyvsp[-2].count), yyvsp[-1].ltok); ;
    break;}
case 310:
#line 1056 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-1].ltok, OPF_SELECT, 
			  opFormUnion_createAnyOp (yyvsp[0].ltok), ltoken_undefined); ;
    break;}
case 311:
#line 1059 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-1].ltok, OPF_MAP, 
			  opFormUnion_createAnyOp (yyvsp[0].ltok), ltoken_undefined); ;
    break;}
case 312:
#line 1062 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_MSELECT, 
			  opFormUnion_createAnyOp (yyvsp[0].ltok), ltoken_undefined); ;
    break;}
case 313:
#line 1065 "llgrammar.y"
{ yyval.opform = makeOpFormNode (yyvsp[-2].ltok, OPF_MMAP, 
			  opFormUnion_createAnyOp (yyvsp[0].ltok), ltoken_undefined); ;
    break;}
case 321:
#line 1082 "llgrammar.y"
{ yyval.count = 0; ;
    break;}
case 323:
#line 1086 "llgrammar.y"
{ yyval.count = 1; ;
    break;}
case 324:
#line 1087 "llgrammar.y"
{ yyval.count = yyvsp[-2].count + 1; ;
    break;}
case 327:
#line 1094 "llgrammar.y"
{ yyval.signature = makesigNode (yyvsp[-3].ltok, yyvsp[-2].ltokenList, yyvsp[0].ltok); ;
    break;}
case 328:
#line 1097 "llgrammar.y"
{ yyval.ltokenList = ltokenList_new (); ;
    break;}
case 330:
#line 1101 "llgrammar.y"
{ yyval.ltokenList = ltokenList_singleton (yyvsp[0].ltok); ;
    break;}
case 331:
#line 1102 "llgrammar.y"
{ yyval.ltokenList = ltokenList_push (yyvsp[-2].ltokenList, yyvsp[0].ltok); ;
    break;}
case 332:
#line 1105 "llgrammar.y"
{ yyval.lclpredicate = makeLclPredicateNode (ltoken_undefined, yyvsp[0].term, LPD_PLAIN);;
    break;}
case 333:
#line 1108 "llgrammar.y"
{ yyval.term = checkSort (yyvsp[0].term); ;
    break;}
case 334:
#line 1115 "llgrammar.y"
{ yyval.term = makeIfTermNode (yyvsp[-5].ltok,yyvsp[-4].term,yyvsp[-3].ltok,yyvsp[-2].term,yyvsp[-1].ltok,yyvsp[0].term); ;
    break;}
case 336:
#line 1117 "llgrammar.y"
{ yyval.term = makeInfixTermNode (yyvsp[-2].term, yyvsp[-1].ltok, yyvsp[0].term); ;
    break;}
case 338:
#line 1123 "llgrammar.y"
{ checkLclPredicate (yyvsp[-2].ltok, yyvsp[-1].lclpredicate); yyval.term = makeQuantifiedTermNode (yyvsp[-3].quantifiers, yyvsp[-2].ltok, yyvsp[-1].lclpredicate->predicate, yyvsp[0].ltok);
     symtable_exitScope (g_symtab); 
   ;
    break;}
case 339:
#line 1127 "llgrammar.y"
{ yyval.term = makeInfixTermNode (yyvsp[-2].term, yyvsp[-1].ltok, yyvsp[0].term);;
    break;}
case 340:
#line 1129 "llgrammar.y"
{ yyval.term = makeInfixTermNode (yyvsp[-2].term, yyvsp[-1].ltok, yyvsp[0].term);;
    break;}
case 342:
#line 1133 "llgrammar.y"
{ yyval.term = makePostfixTermNode (yyvsp[-1].term, yyvsp[0].ltokenList); ;
    break;}
case 343:
#line 1134 "llgrammar.y"
{ yyval.term = CollapseInfixTermNode (yyvsp[-1].term, yyvsp[0].termlist); ;
    break;}
case 347:
#line 1142 "llgrammar.y"
{ yyval.term = makePrefixTermNode (yyvsp[-1].ltok, yyvsp[0].term); ;
    break;}
case 348:
#line 1145 "llgrammar.y"
{ yyval.ltokenList = ltokenList_singleton (yyvsp[0].ltok); ;
    break;}
case 349:
#line 1146 "llgrammar.y"
{ yyval.ltokenList = ltokenList_push (yyvsp[-1].ltokenList, yyvsp[0].ltok); ;
    break;}
case 350:
#line 1149 "llgrammar.y"
{ yyval.termlist = pushInfixOpPartNode (termNodeList_new (), yyvsp[-1].ltok, yyvsp[0].term); ;
    break;}
case 351:
#line 1150 "llgrammar.y"
{ yyval.termlist = pushInfixOpPartNode (yyvsp[-2].termlist, yyvsp[-1].ltok, yyvsp[0].term); ;
    break;}
case 353:
#line 1154 "llgrammar.y"
{ yyval.term = computePossibleSorts (yyvsp[0].term); ;
    break;}
case 354:
#line 1155 "llgrammar.y"
{ yyval.term = updateMatchedNode ((termNode)0, yyvsp[-1].term, yyvsp[0].term); ;
    break;}
case 355:
#line 1156 "llgrammar.y"
{ yyval.term = updateMatchedNode (yyvsp[-1].term, yyvsp[0].term, (termNode)0); ;
    break;}
case 356:
#line 1157 "llgrammar.y"
{ yyval.term = updateMatchedNode (yyvsp[-2].term, yyvsp[-1].term, yyvsp[0].term); ;
    break;}
case 357:
#line 1158 "llgrammar.y"
{ yyval.term = computePossibleSorts (yyvsp[0].term); ;
    break;}
case 358:
#line 1159 "llgrammar.y"
{ yyval.term = updateSqBracketedNode ((termNode)0, yyvsp[-1].term, yyvsp[0].term); ;
    break;}
case 359:
#line 1162 "llgrammar.y"
{ yyval.term = yyvsp[-2].term; yyval.term->sort = sort_lookupName (ltoken_getText (yyvsp[0].ltok)); ;
    break;}
case 361:
#line 1167 "llgrammar.y"
{ yyval.term = makeSqBracketedNode (yyvsp[-4].ltok, yyvsp[-3].termlist, yyvsp[-2].ltok); 
     yyval.term->given = sort_lookupName (ltoken_getText (yyvsp[0].ltok)); ;
    break;}
case 362:
#line 1170 "llgrammar.y"
{ yyval.term = makeSqBracketedNode (yyvsp[-2].ltok, yyvsp[-1].termlist, yyvsp[0].ltok); ;
    break;}
case 363:
#line 1172 "llgrammar.y"
{ yyval.term = makeSqBracketedNode (yyvsp[-3].ltok, termNodeList_new (), yyvsp[-2].ltok); 
     yyval.term->given = sort_lookupName (ltoken_getText (yyvsp[0].ltok)); 
   ;
    break;}
case 364:
#line 1176 "llgrammar.y"
{ yyval.term = makeSqBracketedNode (yyvsp[-1].ltok, termNodeList_new (), yyvsp[0].ltok); ;
    break;}
case 365:
#line 1179 "llgrammar.y"
{ yyval.term = makeMatchedNode (yyvsp[-2].ltok, yyvsp[-1].termlist, yyvsp[0].ltok); ;
    break;}
case 366:
#line 1180 "llgrammar.y"
{ yyval.term = makeMatchedNode (yyvsp[-1].ltok, termNodeList_new (), yyvsp[0].ltok); ;
    break;}
case 367:
#line 1183 "llgrammar.y"
{ yyval.termlist = termNodeList_push (termNodeList_new (), yyvsp[0].term); ;
    break;}
case 368:
#line 1184 "llgrammar.y"
{ yyval.termlist = termNodeList_push (yyvsp[-2].termlist, yyvsp[0].term); ;
    break;}
case 369:
#line 1188 "llgrammar.y"
{ yyval.term = yyvsp[-1].term; yyval.term->wrapped = yyval.term->wrapped + 1; ;
    break;}
case 370:
#line 1190 "llgrammar.y"
{ yyval.term = makeSimpleTermNode (yyvsp[0].ltok); ;
    break;}
case 371:
#line 1192 "llgrammar.y"
{ yyval.term = makeOpCallTermNode (yyvsp[-3].ltok, yyvsp[-2].ltok, yyvsp[-1].termlist, yyvsp[0].ltok); ;
    break;}
case 373:
#line 1195 "llgrammar.y"
{ yyval.term = makePostfixTermNode2 (yyvsp[-1].term, yyvsp[0].ltok); ;
    break;}
case 374:
#line 1197 "llgrammar.y"
{ ltoken_markOwned (yyvsp[0].ltok); yyval.term = makeSelectTermNode (yyvsp[-2].term, yyvsp[-1].ltok, yyvsp[0].ltok); ;
    break;}
case 375:
#line 1199 "llgrammar.y"
{ ltoken_markOwned (yyvsp[0].ltok); yyval.term = makeMapTermNode (yyvsp[-2].term, yyvsp[-1].ltok, yyvsp[0].ltok); ;
    break;}
case 376:
#line 1201 "llgrammar.y"
{ yyval.term = updateSqBracketedNode (yyvsp[-2].term, makeSqBracketedNode (yyvsp[-1].ltok, termNodeList_new (), yyvsp[0].ltok), 
				(termNode)0); ;
    break;}
case 377:
#line 1204 "llgrammar.y"
{ yyval.term = updateSqBracketedNode (yyvsp[-3].term, makeSqBracketedNode (yyvsp[-2].ltok, yyvsp[-1].termlist, yyvsp[0].ltok), (termNode)0); ;
    break;}
case 378:
#line 1206 "llgrammar.y"
{ yyval.term = yyvsp[-2].term; yyval.term->given = sort_lookupName (ltoken_getText (yyvsp[0].ltok)); ;
    break;}
case 379:
#line 1209 "llgrammar.y"
{ yyval.termlist = termNodeList_push (termNodeList_new (), yyvsp[0].term); ;
    break;}
case 380:
#line 1210 "llgrammar.y"
{ yyval.termlist = termNodeList_push (yyvsp[-2].termlist, yyvsp[0].term); ;
    break;}
case 386:
#line 1220 "llgrammar.y"
{ yyval.term = makeSimpleTermNode (yyvsp[0].ltok); ;
    break;}
case 387:
#line 1221 "llgrammar.y"
{ yyval.term = makeOpCallTermNode (yyvsp[-3].ltok, yyvsp[-2].ltok, yyvsp[-1].termlist, yyvsp[0].ltok); ;
    break;}
case 388:
#line 1222 "llgrammar.y"
{ yyval.term = makeUnchangedTermNode1 (yyvsp[-3].ltok, yyvsp[-1].ltok); ;
    break;}
case 389:
#line 1223 "llgrammar.y"
{ yyval.term = makeUnchangedTermNode2 (yyvsp[-3].ltok, yyvsp[-1].storereflist); ;
    break;}
case 390:
#line 1225 "llgrammar.y"
{ termNodeList x = termNodeList_new (); 
     termNodeList_addh (x, yyvsp[-1].term);
     yyval.term = makeOpCallTermNode (yyvsp[-3].ltok, yyvsp[-2].ltok, x, yyvsp[0].ltok); 
   ;
    break;}
case 391:
#line 1230 "llgrammar.y"
{ termNodeList x = termNodeList_new ();
     termNodeList_addh (x, yyvsp[-3].term);
     termNodeList_addh (x, yyvsp[-1].term);
     yyval.term = makeOpCallTermNode (yyvsp[-5].ltok, yyvsp[-4].ltok, x, yyvsp[0].ltok); 
   ;
    break;}
case 392:
#line 1235 "llgrammar.y"
{ yyval.term = makeSizeofTermNode (yyvsp[-3].ltok, yyvsp[-1].lcltypespec); ;
    break;}
case 393:
#line 1245 "llgrammar.y"
{ yyval.term = makeLiteralTermNode (yyvsp[0].ltok, sort_int); ;
    break;}
case 394:
#line 1246 "llgrammar.y"
{ yyval.term = makeLiteralTermNode (yyvsp[0].ltok, sort_cstring); ;
    break;}
case 395:
#line 1247 "llgrammar.y"
{ yyval.term = makeLiteralTermNode (yyvsp[0].ltok, sort_char); ;
    break;}
case 396:
#line 1248 "llgrammar.y"
{ yyval.term = makeLiteralTermNode (yyvsp[0].ltok, sort_double); ;
    break;}
case 397:
#line 1252 "llgrammar.y"
{ yyval.quantifiers = quantifierNodeList_add (quantifierNodeList_new (), yyvsp[0].quantifier); ;
    break;}
case 398:
#line 1254 "llgrammar.y"
{ yyval.quantifiers = quantifierNodeList_add (yyvsp[-1].quantifiers, yyvsp[0].quantifier); ;
    break;}
case 399:
#line 1257 "llgrammar.y"
{ scopeInfo si = (scopeInfo) dmalloc (sizeof (*si));
		   si->kind = SPE_QUANT;
		   symtable_enterScope (g_symtab, si); ;
    break;}
case 400:
#line 1261 "llgrammar.y"
{ yyval.quantifier = makeQuantifierNode (yyvsp[0].vars, yyvsp[-2].ltok); ;
    break;}
case 401:
#line 1264 "llgrammar.y"
{ yyval.vars = varNodeList_add (varNodeList_new (), yyvsp[0].var); ;
    break;}
case 402:
#line 1265 "llgrammar.y"
{ yyval.vars = varNodeList_add (yyvsp[-2].vars, yyvsp[0].var); ;
    break;}
case 403:
#line 1268 "llgrammar.y"
{ yyval.var = makeVarNode (yyvsp[-2].ltok, FALSE, yyvsp[0].lcltypespec); ;
    break;}
case 404:
#line 1269 "llgrammar.y"
{ yyval.var = makeVarNode (yyvsp[-3].ltok, TRUE, yyvsp[0].lcltypespec); ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 498 "/gnu/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 1284 "llgrammar.y"


# include "bison.reset"

/*
** yytext is set in lex scanner 
** extern YYSTYPE yylval;  
** yylval is defined by code generated by bison 
*/

void ylerror (char *s) 
{
  /* 
  ** This resetting of the left context is very important when multiple
  ** files are to be parsed.  We do not want failures to propagate.
  ** Lex/Yacc does not reset the flags when the parsing goes bad.  
  ** BEGIN 0;        
  **/

  /*@-mustfree@*/
  lclfatalerror (yllval.ltok,
		 message ("%s: Token code: %s, Token String: %s", 
			  cstring_fromChars (s), 
			  ltoken_unparseCodeName (yllval.ltok), 
			  ltoken_getRawString (yllval.ltok)));
  /*@=mustfree@*/
}

static void yyprint (FILE *f, int t, YYSTYPE value) 
{
  fprintf (f, " type: %d (%s)", t, 
	   cstring_toCharsSafe (ltoken_getRawString (value.ltok)));
}







