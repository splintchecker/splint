
/*  A Bison parser, made from cgrammar.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	BADTOK	257
#define	SKIPTOK	258
#define	CTOK_ELIPSIS	259
#define	CASE	260
#define	DEFAULT	261
#define	CIF	262
#define	CELSE	263
#define	SWITCH	264
#define	WHILE	265
#define	DO	266
#define	CFOR	267
#define	GOTO	268
#define	CONTINUE	269
#define	BREAK	270
#define	RETURN	271
#define	TSEMI	272
#define	TLBRACE	273
#define	TRBRACE	274
#define	TCOMMA	275
#define	TCOLON	276
#define	TASSIGN	277
#define	TLPAREN	278
#define	TRPAREN	279
#define	TLSQBR	280
#define	TRSQBR	281
#define	TDOT	282
#define	TAMPERSAND	283
#define	TEXCL	284
#define	TTILDE	285
#define	TMINUS	286
#define	TPLUS	287
#define	TMULT	288
#define	TDIV	289
#define	TPERCENT	290
#define	TLT	291
#define	TGT	292
#define	TCIRC	293
#define	TBAR	294
#define	TQUEST	295
#define	CSIZEOF	296
#define	CALIGNOF	297
#define	ARROW_OP	298
#define	CTYPEDEF	299
#define	COFFSETOF	300
#define	INC_OP	301
#define	DEC_OP	302
#define	LEFT_OP	303
#define	RIGHT_OP	304
#define	LE_OP	305
#define	GE_OP	306
#define	EQ_OP	307
#define	NE_OP	308
#define	AND_OP	309
#define	OR_OP	310
#define	MUL_ASSIGN	311
#define	DIV_ASSIGN	312
#define	MOD_ASSIGN	313
#define	ADD_ASSIGN	314
#define	SUB_ASSIGN	315
#define	LEFT_ASSIGN	316
#define	RIGHT_ASSIGN	317
#define	AND_ASSIGN	318
#define	XOR_ASSIGN	319
#define	OR_ASSIGN	320
#define	CSTRUCT	321
#define	CUNION	322
#define	CENUM	323
#define	VA_ARG	324
#define	VA_DCL	325
#define	QGLOBALS	326
#define	QMODIFIES	327
#define	QNOMODS	328
#define	QCONSTANT	329
#define	QFUNCTION	330
#define	QITER	331
#define	QDEFINES	332
#define	QUSES	333
#define	QALLOCATES	334
#define	QSETS	335
#define	QRELEASES	336
#define	QPRECLAUSE	337
#define	QPOSTCLAUSE	338
#define	QALT	339
#define	QUNDEF	340
#define	QKILLED	341
#define	QENDMACRO	342
#define	LLMACRO	343
#define	LLMACROITER	344
#define	LLMACROEND	345
#define	TENDMACRO	346
#define	QSWITCHBREAK	347
#define	QLOOPBREAK	348
#define	QINNERBREAK	349
#define	QSAFEBREAK	350
#define	QINNERCONTINUE	351
#define	QFALLTHROUGH	352
#define	QLINTNOTREACHED	353
#define	QLINTFALLTHROUGH	354
#define	QLINTFALLTHRU	355
#define	QARGSUSED	356
#define	QPRINTFLIKE	357
#define	QLINTPRINTFLIKE	358
#define	QSCANFLIKE	359
#define	QMESSAGELIKE	360
#define	QNOTREACHED	361
#define	QCONST	362
#define	QVOLATILE	363
#define	QINLINE	364
#define	QEXTENSION	365
#define	QEXTERN	366
#define	QSTATIC	367
#define	QAUTO	368
#define	QREGISTER	369
#define	QOUT	370
#define	QIN	371
#define	QYIELD	372
#define	QONLY	373
#define	QTEMP	374
#define	QSHARED	375
#define	QREF	376
#define	QUNIQUE	377
#define	QCHECKED	378
#define	QUNCHECKED	379
#define	QCHECKEDSTRICT	380
#define	QCHECKMOD	381
#define	QKEEP	382
#define	QKEPT	383
#define	QPARTIAL	384
#define	QSPECIAL	385
#define	QOWNED	386
#define	QDEPENDENT	387
#define	QRETURNED	388
#define	QEXPOSED	389
#define	QNULL	390
#define	QOBSERVER	391
#define	QISNULL	392
#define	QEXITS	393
#define	QMAYEXIT	394
#define	QNEVEREXIT	395
#define	QTRUEEXIT	396
#define	QFALSEEXIT	397
#define	QLONG	398
#define	QSIGNED	399
#define	QUNSIGNED	400
#define	QSHORT	401
#define	QUNUSED	402
#define	QSEF	403
#define	QNOTNULL	404
#define	QRELNULL	405
#define	QABSTRACT	406
#define	QCONCRETE	407
#define	QMUTABLE	408
#define	QIMMUTABLE	409
#define	QTRUENULL	410
#define	QFALSENULL	411
#define	QEXTERNAL	412
#define	QREFCOUNTED	413
#define	QREFS	414
#define	QNEWREF	415
#define	QTEMPREF	416
#define	QKILLREF	417
#define	QRELDEF	418
#define	CGCHAR	419
#define	CBOOL	420
#define	CINT	421
#define	CGFLOAT	422
#define	CDOUBLE	423
#define	CVOID	424
#define	QANYTYPE	425
#define	QINTEGRALTYPE	426
#define	QUNSIGNEDINTEGRALTYPE	427
#define	QSIGNEDINTEGRALTYPE	428
#define	QNULLTERMINATED	429
#define	QSETBUFFERSIZE	430
#define	QBUFFERCONSTRAINT	431
#define	QENSURESCONSTRAINT	432
#define	QSETSTRINGLENGTH	433
#define	QMAXSET	434
#define	QMAXREAD	435
#define	QTESTINRANGE	436
#define	TCAND	437
#define	IDENTIFIER	438
#define	NEW_IDENTIFIER	439
#define	TYPE_NAME_OR_ID	440
#define	CCONSTANT	441
#define	ITER_NAME	442
#define	ITER_ENDNAME	443
#define	TYPE_NAME	444

#line 19 "cgrammar.y"

/*
**
** cgrammar.y
**
** Yacc/Bison grammar for extended ANSI C used by LCLint.
**
** original grammar by Nate Osgood ---
**    hacrat@catfish.lcs.mit.edu Mon Jun 14 13:06:32 1993
**
** changes for LCLint --- handle typedef names correctly
** fix struct/union parsing bug (empty struct is accepted)
** add productions to handle macros --- require
** error correction --- main source of conflicts in grammar.
** need to process initializations sequentially, L->R
**
** production names are cryptic, so more productions fit on one line
**
** conflicts:  87 shift/reduce, 18 reduce/reduce
** most of these are due to handling macros
** a few are due to handling type expressions
*/

/*@=allmacros@*/

extern int yylex ();
extern void swallowMacro (void);

# include "lclintMacros.nf"
# include "basic.h"
# include "cgrammar.h"
# include "exprChecks.h"

/*@-allmacros@*/
/*@-matchfields@*/

# define SHOWCSYM FALSE
void yyerror (char *s);

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


#line 74 "cgrammar.y"
typedef union
{
 lltok tok;
 int count;
 specialClauseKind sck;
 qual typequal;
 qualList tquallist;
 ctype ctyp;
 sRef sr;
 /*@only@*/ qtype qtyp;
 /*@only@*/ cstring cname;
 /*@only@*/ idDecl ntyp;
 /*@only@*/ idDeclList ntyplist;
 /*@only@*/ uentryList flist;
 /*@owned@*/ uentryList entrylist;
 /*@observer@*/ /*@dependent@*/ uentry entry;
 /*@only@*/ uentry oentry;
 /*@only@*/ exprNode expr;
 /*@only@*/ enumNameList enumnamelist;
 /*@only@*/ exprNodeList alist;
 /*@only@*/ sRefSet srset; 
 /*@only@*/ cstringList cstringlist;
  /*drl
    added 1/19/2001
  */
  constraint con;
  constraintList conL;
  constraintExpr conE;
  /* drl */
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



#define	YYFINAL		1218
#define	YYFLAG		-32768
#define	YYNTBASE	191

#define YYTRANSLATE(x) ((unsigned)(x) <= 444 ? yytranslate[x] : 434)

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
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
   107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     3,     5,     8,    11,    13,    15,    17,    19,
    21,    23,    32,    44,    45,    51,    53,    57,    59,    62,
    64,    71,    75,    82,    83,    91,    92,   101,   103,   110,
   114,   121,   122,   129,   130,   138,   139,   140,   151,   155,
   159,   163,   166,   168,   169,   172,   173,   176,   179,   180,
   186,   187,   188,   194,   195,   199,   201,   205,   207,   209,
   211,   213,   215,   217,   222,   228,   230,   232,   234,   236,
   240,   245,   248,   252,   256,   260,   262,   264,   266,   267,
   270,   271,   274,   276,   279,   281,   284,   286,   289,   291,
   295,   298,   300,   302,   304,   306,   308,   310,   312,   313,
   316,   317,   324,   325,   332,   334,   336,   337,   338,   344,
   345,   351,   353,   355,   356,   358,   359,   360,   364,   365,
   369,   371,   373,   375,   377,   379,   381,   383,   385,   387,
   389,   391,   393,   395,   397,   399,   401,   403,   404,   412,
   413,   422,   424,   428,   429,   433,   434,   438,   441,   445,
   448,   451,   453,   455,   457,   461,   466,   469,   473,   477,
   481,   483,   485,   487,   491,   493,   495,   499,   504,   507,
   511,   515,   519,   521,   525,   527,   529,   531,   535,   537,
   539,   541,   546,   550,   555,   562,   568,   574,   577,   580,
   582,   586,   588,   591,   594,   597,   600,   603,   606,   609,
   612,   614,   616,   620,   622,   632,   633,   637,   642,   645,
   650,   653,   655,   660,   662,   666,   670,   674,   676,   680,
   684,   686,   690,   694,   696,   700,   704,   708,   712,   714,
   718,   722,   724,   728,   730,   734,   736,   740,   742,   743,
   748,   750,   751,   756,   758,   759,   760,   768,   770,   774,
   778,   782,   786,   790,   794,   798,   802,   806,   810,   814,
   816,   820,   821,   823,   825,   827,   829,   831,   835,   836,
   846,   847,   859,   862,   863,   870,   871,   879,   884,   889,
   890,   891,   894,   896,   901,   902,   907,   909,   913,   918,
   920,   924,   926,   928,   930,   932,   934,   937,   940,   943,
   946,   949,   952,   955,   958,   961,   964,   967,   970,   973,
   976,   979,   982,   985,   988,   991,   994,   997,  1000,  1003,
  1006,  1009,  1012,  1015,  1018,  1021,  1024,  1027,  1030,  1033,
  1036,  1039,  1042,  1045,  1048,  1051,  1054,  1057,  1060,  1063,
  1066,  1069,  1072,  1074,  1076,  1078,  1080,  1083,  1086,  1089,
  1092,  1095,  1098,  1101,  1104,  1107,  1110,  1113,  1116,  1119,
  1122,  1126,  1128,  1133,  1135,  1139,  1142,  1145,  1148,  1149,
  1151,  1152,  1153,  1165,  1166,  1167,  1179,  1186,  1193,  1194,
  1195,  1206,  1207,  1208,  1219,  1225,  1231,  1236,  1241,  1242,
  1244,  1246,  1249,  1255,  1259,  1262,  1267,  1269,  1273,  1278,
  1285,  1286,  1295,  1300,  1302,  1306,  1309,  1311,  1316,  1318,
  1320,  1323,  1326,  1328,  1331,  1333,  1336,  1338,  1340,  1342,
  1345,  1347,  1350,  1353,  1357,  1359,  1363,  1365,  1369,  1371,
  1373,  1377,  1378,  1381,  1382,  1387,  1392,  1394,  1396,  1399,
  1401,  1403,  1406,  1407,  1409,  1415,  1418,  1422,  1426,  1431,
  1435,  1440,  1445,  1451,  1453,  1455,  1457,  1459,  1461,  1463,
  1465,  1467,  1469,  1472,  1474,  1476,  1478,  1481,  1484,  1492,
  1499,  1502,  1503,  1504,  1515,  1516,  1523,  1525,  1527,  1529,
  1531,  1534,  1536,  1538,  1540,  1542,  1544,  1546,  1548,  1552,
  1554,  1557,  1560,  1563,  1565,  1567,  1569,  1571,  1573,  1575,
  1577,  1579,  1581,  1583,  1587,  1589,  1591,  1594,  1597,  1598,
  1603,  1604,  1610,  1611,  1615,  1616,  1621,  1625,  1628,  1632,
  1633,  1634,  1635,  1636,  1637,  1639,  1642,  1645,  1649,  1652,
  1656,  1660,  1665,  1668,  1671,  1675,  1679,  1684,  1686,  1689,
  1691,  1694,  1696,  1699,  1701,  1704,  1706,  1709,  1711,  1716,
  1719,  1720,  1726,  1727,  1734,  1739,  1744,  1745,  1746,  1757,
  1759,  1760,  1765,  1767,  1769,  1771,  1773,  1775,  1779,  1781,
  1786,  1790,  1795,  1802,  1808,  1814,  1817,  1820,  1822,  1825,
  1828,  1831,  1834,  1837,  1840,  1843,  1846,  1848,  1850,  1855,
  1857,  1861,  1865,  1869,  1871,  1875,  1879,  1881,  1885,  1889,
  1891,  1895,  1899,  1903,  1907,  1909,  1913,  1917,  1919,  1923,
  1925,  1929,  1931,  1935,  1937,  1941,  1943,  1947,  1949,  1950,
  1951,  1959,  1961,  1965,  1969,  1973,  1977,  1981,  1985,  1989,
  1993,  1997,  2001,  2005,  2007,  2008,  2010,  2013,  2021,  2024,
  2027,  2035,  2042,  2045,  2049,  2052,  2056,  2059,  2063,  2067,
  2071,  2075,  2078,  2082,  2083,  2085,  2087,  2089,  2091,  2093,
  2095,  2097,  2099
};

static const short yyrhs[] = {    -1,
   192,     0,   193,     0,   192,   193,     0,   261,   430,     0,
   194,     0,   195,     0,   205,     0,   208,     0,   298,     0,
     1,     0,    75,   318,   331,   341,   331,   430,   306,    88,
     0,    75,   318,   331,   341,   331,    23,   306,   311,   310,
   430,    88,     0,     0,    76,   196,   197,   430,    88,     0,
   198,     0,   318,   331,   198,     0,   202,     0,   345,   202,
     0,   432,     0,   306,    24,   331,   341,   306,    25,     0,
   199,    26,    27,     0,   199,    26,   306,   297,    27,   331,
     0,     0,   199,   307,    24,    25,   200,   210,   212,     0,
     0,   199,   307,    24,   342,    25,   201,   210,   212,     0,
   432,     0,   306,    24,   331,   198,   306,    25,     0,   202,
    26,    27,     0,   202,    26,   306,   297,    27,   331,     0,
     0,   202,   307,    24,    25,   203,   228,     0,     0,   202,
   307,    24,   342,    25,   204,   228,     0,     0,     0,    77,
   432,    24,   342,    25,   206,   228,   207,   430,    88,     0,
    89,   371,    92,     0,    90,   358,    92,     0,    91,   359,
    92,     0,    89,    92,     0,   257,     0,     0,   211,   230,
     0,     0,   213,   214,     0,   217,   215,     0,     0,   216,
   178,   219,   430,    88,     0,     0,     0,   218,   177,   219,
   430,    88,     0,     0,   220,   183,   219,     0,   220,     0,
   223,   222,   223,     0,   180,     0,   181,     0,    52,     0,
    51,     0,    53,     0,   224,     0,   226,    24,   223,    25,
     0,    24,   223,   227,   223,    25,     0,   225,     0,   187,
     0,   431,     0,   185,     0,   225,    26,    27,     0,   225,
    26,   187,    27,     0,    34,   225,     0,    24,   225,    25,
     0,   225,    28,   432,     0,   225,    44,   432,     0,   221,
     0,    33,     0,    32,     0,     0,     0,   231,     0,     0,
   229,   231,     0,   238,     0,   232,   238,     0,   241,     0,
   232,   241,     0,   254,     0,   254,   232,     0,   234,     0,
   233,    21,   234,     0,   237,   235,     0,   431,     0,   185,
     0,    86,     0,    87,     0,   116,     0,   117,     0,   130,
     0,     0,   236,   237,     0,     0,    72,   239,   391,   430,
    88,   244,     0,     0,    72,   240,   233,   430,    88,   244,
     0,    74,     0,   245,     0,     0,     0,    72,   242,   391,
   430,   244,     0,     0,    72,   243,   233,   430,   244,     0,
    74,     0,   247,     0,     0,   245,     0,     0,     0,    73,
   246,   262,     0,     0,    73,   248,   263,     0,    78,     0,
    79,     0,    80,     0,    81,     0,    82,     0,    88,     0,
    88,     0,    83,     0,    84,     0,   119,     0,   137,     0,
   135,     0,   133,     0,   132,     0,   121,     0,   138,     0,
   150,     0,     0,   249,   331,   255,   268,   430,   251,   306,
     0,     0,   252,   331,   253,   256,   268,   430,   250,   306,
     0,   341,     0,   318,   331,   341,     0,     0,    19,   259,
   387,     0,     0,   391,   260,   380,     0,   209,   258,     0,
   266,   430,    88,     0,   430,    88,     0,   266,   430,     0,
   430,     0,   431,     0,   185,     0,   264,    26,    27,     0,
   264,    26,   265,    27,     0,    34,   264,     0,    24,   264,
    25,     0,   264,    28,   432,     0,   264,    44,   432,     0,
   264,     0,   187,     0,   264,     0,   266,    21,   264,     0,
   431,     0,   185,     0,   267,    26,    27,     0,   267,    26,
   265,    27,     0,    34,   267,     0,    24,   267,    25,     0,
   267,    28,   432,     0,   267,    44,   432,     0,   267,     0,
   268,    21,   267,     0,   431,     0,   185,     0,   187,     0,
    24,   295,    25,     0,   186,     0,   111,     0,   269,     0,
   270,    26,   295,    27,     0,   270,    24,    25,     0,   270,
    24,   271,    25,     0,    70,    24,   294,    21,   353,    25,
     0,   270,   331,    28,   432,   306,     0,   270,   331,    44,
   432,   306,     0,   270,    47,     0,   270,    48,     0,   294,
     0,   271,    21,   294,     0,   270,     0,    47,   272,     0,
    48,   272,     0,    29,   278,     0,    34,   278,     0,    33,
   278,     0,    32,   278,     0,    31,   278,     0,    30,   278,
     0,   275,     0,   274,     0,   273,    28,   432,     0,   432,
     0,    46,   306,    24,   353,   331,    21,   273,    25,   306,
     0,     0,   306,   276,   277,     0,    42,    24,   353,    25,
     0,    42,   272,     0,    43,    24,   353,    25,     0,    43,
   272,     0,   272,     0,    24,   353,    25,   278,     0,   278,
     0,   279,    34,   278,     0,   279,    35,   278,     0,   279,
    36,   278,     0,   279,     0,   280,    33,   279,     0,   280,
    32,   279,     0,   280,     0,   281,    49,   280,     0,   281,
    50,   280,     0,   281,     0,   282,    37,   281,     0,   282,
    38,   281,     0,   282,    51,   281,     0,   282,    52,   281,
     0,   282,     0,   283,    53,   282,     0,   283,    54,   282,
     0,   283,     0,   284,    29,   283,     0,   284,     0,   285,
    39,   284,     0,   285,     0,   286,    40,   285,     0,   286,
     0,     0,   287,    55,   288,   286,     0,   287,     0,     0,
   289,    56,   290,   287,     0,   289,     0,     0,     0,   289,
    41,   292,   295,    22,   293,   291,     0,   291,     0,   272,
    23,   294,     0,   272,    57,   294,     0,   272,    58,   294,
     0,   272,    59,   294,     0,   272,    60,   294,     0,   272,
    61,   294,     0,   272,    62,   294,     0,   272,    63,   294,
     0,   272,    64,   294,     0,   272,    65,   294,     0,   272,
    66,   294,     0,   294,     0,   295,    21,   294,     0,     0,
   295,     0,   291,     0,   299,     0,    71,     0,   304,     0,
   318,   306,    18,     0,     0,   318,   331,   341,   331,   300,
   306,   310,    18,   306,     0,     0,   318,   331,   341,   331,
    23,   301,   306,   311,   310,    18,   306,     0,   341,   331,
     0,     0,   341,   331,    23,   303,   306,   311,     0,     0,
    45,   318,   305,   331,   308,   306,    18,     0,    45,   318,
   306,    18,     0,    45,   308,   306,    18,     0,     0,     0,
   309,   306,     0,   302,     0,   308,    21,   331,   302,     0,
     0,   310,    21,   331,   302,     0,   294,     0,    19,   312,
    20,     0,    19,   312,    21,    20,     0,   311,     0,   312,
    21,   311,     0,   112,     0,   110,     0,   113,     0,   114,
     0,   115,     0,   108,   306,     0,   109,   306,     0,   116,
   306,     0,   117,   306,     0,   130,   306,     0,   131,   306,
     0,   132,   306,     0,   133,   306,     0,   118,   306,     0,
   120,   306,     0,   119,   306,     0,   128,   306,     0,   129,
   306,     0,   121,   306,     0,   123,   306,     0,   139,   306,
     0,   140,   306,     0,   142,   306,     0,   143,   306,     0,
   141,   306,     0,   136,   306,     0,   151,   306,     0,   134,
   306,     0,   135,   306,     0,   137,   306,     0,   124,   306,
     0,   127,   306,     0,   125,   306,     0,   126,   306,     0,
   156,   306,     0,   157,   306,     0,   148,   306,     0,   158,
   306,     0,   149,   306,     0,   152,   306,     0,   153,   306,
     0,   154,   306,     0,   155,   306,     0,   150,   306,     0,
   159,   306,     0,   160,   306,     0,   163,   306,     0,   164,
   306,     0,   161,   306,     0,   162,   306,     0,   175,   306,
     0,   147,     0,   144,     0,   145,     0,   146,     0,   165,
   331,     0,   167,   331,     0,   166,   331,     0,   168,   331,
     0,   169,   331,     0,   170,   331,     0,   171,   331,     0,
   172,   331,     0,   173,   331,     0,   174,   331,     0,   433,
   331,     0,   322,   331,     0,   336,   331,     0,   315,   331,
     0,   306,   318,   306,     0,   320,     0,   320,    85,   319,
    88,     0,   353,     0,   353,    21,   319,     0,   313,   321,
     0,   314,   321,     0,   316,   321,     0,     0,   318,     0,
     0,     0,   331,    67,   432,   306,    19,   323,   384,   332,
   385,   324,    20,     0,     0,     0,   331,    68,   432,   306,
    19,   325,   384,   332,   385,   326,    20,     0,   331,    67,
   432,   306,    19,    20,     0,   331,    68,   432,   306,    19,
    20,     0,     0,     0,   331,    67,   306,    19,   327,   384,
   332,   385,   328,    20,     0,     0,     0,   331,    68,   306,
    19,   329,   384,   332,   385,   330,    20,     0,   331,    67,
   306,    19,    20,     0,   331,    68,   306,    19,    20,     0,
   331,    67,   432,   331,     0,   331,    68,   432,   331,     0,
     0,   333,     0,   208,     0,   332,   333,     0,   318,   331,
   334,   306,    18,     0,   318,   306,    18,     0,   335,   331,
     0,   334,    21,   335,   331,     0,   341,     0,    22,   306,
   297,     0,   341,    22,   306,   297,     0,   331,    69,    19,
   338,    20,   306,     0,     0,   331,    69,   432,    19,   337,
   338,    20,   306,     0,   331,    69,   432,   306,     0,   339,
     0,   338,    21,   339,     0,   338,    21,     0,   432,     0,
   432,    23,   306,   297,     0,   199,     0,   355,     0,   345,
   190,     0,   345,   340,     0,   199,     0,   345,   199,     0,
   348,     0,   331,   346,     0,   108,     0,   109,     0,   343,
     0,   344,   343,     0,    34,     0,    34,   344,     0,    34,
   345,     0,    34,   344,   345,     0,   347,     0,   347,    21,
     5,     0,   432,     0,   347,    21,   432,     0,     5,     0,
   349,     0,   349,    21,     5,     0,     0,   350,   352,     0,
     0,   349,    21,   351,   352,     0,   306,   318,   340,   306,
     0,   432,     0,   317,     0,   317,   354,     0,   345,     0,
   356,     0,   345,   356,     0,     0,   356,     0,   306,    24,
   331,   354,    25,     0,    26,    27,     0,    26,   297,    27,
     0,   356,    26,    27,     0,   356,    26,   297,    27,     0,
   306,    24,    25,     0,   306,    24,   348,    25,     0,   356,
   306,    24,    25,     0,   356,   306,    24,   348,    25,     0,
   373,     0,   374,     0,   377,     0,   380,     0,   393,     0,
   396,     0,   427,     0,   401,     0,   429,     0,    22,   432,
     0,   360,     0,   358,     0,   367,     0,   360,   367,     0,
   400,   360,     0,   426,   372,    11,    24,   295,    25,    18,
     0,   426,   372,    11,    24,   295,    25,     0,   362,   367,
     0,     0,     0,    13,    24,   296,    18,   296,    18,   363,
   296,   364,    25,     0,     0,   188,   382,    24,   366,   404,
    25,     0,   189,     0,   373,     0,   374,     0,   377,     0,
   369,   391,     0,   369,     0,   370,     0,   393,     0,   368,
     0,   361,     0,   365,     0,   429,     0,    24,   367,    25,
     0,     1,     0,   395,   367,     0,   382,    19,     0,   386,
    20,     0,   372,     0,   390,     0,   373,     0,   374,     0,
   377,     0,   381,     0,   394,     0,   396,     0,   401,     0,
   428,     0,    24,   372,    25,     0,   429,     0,     1,     0,
   432,    22,     0,   107,   357,     0,     0,     6,   297,   375,
    22,     0,     0,    98,     6,   297,   376,    22,     0,     0,
     7,   378,    22,     0,     0,    98,     7,   379,    22,     0,
    24,   380,    25,     0,   382,   388,     0,   382,   389,   383,
     0,     0,     0,     0,     0,     0,    20,     0,   107,    20,
     0,   392,    20,     0,   392,   107,    20,     0,   391,    20,
     0,   391,   107,    20,     0,   391,   392,    20,     0,   391,
   392,   107,    20,     0,    19,   387,     0,    19,    20,     0,
    19,   390,    20,     0,    19,   391,    20,     0,    19,   391,
   392,    20,     0,   372,     0,   390,   372,     0,   298,     0,
   391,   298,     0,   357,     0,   392,   357,     0,    18,     0,
   295,    18,     0,    18,     0,   295,    18,     0,   295,     0,
     8,    24,   295,    25,     0,   395,   357,     0,     0,   395,
   357,     9,   397,   357,     0,     0,    10,    24,   295,   398,
    25,   357,     0,    11,    24,   295,    25,     0,    11,    24,
   295,    25,     0,     0,     0,   188,   402,   382,    24,   403,
   404,    25,   380,   425,   383,     0,   406,     0,     0,   404,
   405,    21,   406,     0,   424,     0,   431,     0,   186,     0,
   185,     0,   187,     0,    24,   295,    25,     0,   407,     0,
   270,    26,   295,    27,     0,   270,    24,    25,     0,   270,
    24,   271,    25,     0,    70,    24,   294,    21,   353,    25,
     0,   270,   331,    28,   432,   306,     0,   270,   331,    44,
   432,   306,     0,   270,    47,     0,   270,    48,     0,   408,
     0,    47,   272,     0,    48,   272,     0,    29,   278,     0,
    34,   278,     0,    33,   278,     0,    32,   278,     0,    31,
   278,     0,    30,   278,     0,   275,     0,   409,     0,    24,
   353,    25,   278,     0,   410,     0,   279,    34,   278,     0,
   279,    35,   278,     0,   279,    36,   278,     0,   411,     0,
   280,    33,   279,     0,   280,    32,   279,     0,   412,     0,
   281,    49,   280,     0,   281,    50,   280,     0,   413,     0,
   282,    37,   281,     0,   282,    38,   281,     0,   282,    51,
   281,     0,   282,    52,   281,     0,   414,     0,   283,    53,
   282,     0,   283,    54,   282,     0,   415,     0,   284,    29,
   283,     0,   416,     0,   285,    39,   284,     0,   417,     0,
   286,    40,   285,     0,   418,     0,   287,    55,   286,     0,
   419,     0,   289,    56,   287,     0,   420,     0,     0,     0,
   289,    41,   422,   295,    22,   423,   291,     0,   421,     0,
   272,    23,   294,     0,   272,    57,   294,     0,   272,    58,
   294,     0,   272,    59,   294,     0,   272,    60,   294,     0,
   272,    61,   294,     0,   272,    62,   294,     0,   272,    63,
   294,     0,   272,    64,   294,     0,   272,    65,   294,     0,
   272,    66,   294,     0,   189,     0,     0,    12,     0,   399,
   357,     0,   426,   357,    11,    24,   295,    25,    18,     0,
   362,   357,     0,   399,   372,     0,   426,   372,    11,    24,
   295,    25,    18,     0,   426,   372,    11,    24,   295,    25,
     0,   362,   372,     0,    14,   432,    18,     0,    15,    18,
     0,    97,    15,    18,     0,    16,    18,     0,    93,    16,
    18,     0,    94,    16,    18,     0,    95,    16,    18,     0,
    96,    16,    18,     0,    17,    18,     0,    17,   295,    18,
     0,     0,    18,     0,   184,     0,   185,     0,   188,     0,
   189,     0,   431,     0,   186,     0,   190,     0,   186,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   269,   270,   273,   274,   277,   278,   279,   280,   281,   282,
   283,   286,   288,   292,   292,   297,   303,   307,   308,   312,
   313,   315,   317,   321,   324,   332,   335,   343,   344,   346,
   348,   364,   368,   375,   379,   385,   387,   387,   391,   392,
   393,   394,   397,   400,   401,   407,   408,   412,   416,   421,
   428,   432,   437,   444,   447,   448,   451,   456,   457,   460,
   461,   462,   465,   466,   467,   472,   473,   481,   484,   486,
   487,   492,   493,   494,   496,   512,   516,   517,   522,   523,
   533,   534,   537,   538,   541,   542,   545,   546,   549,   550,
   553,   556,   557,   560,   561,   562,   563,   564,   567,   568,
   571,   571,   574,   574,   577,   581,   582,   585,   585,   588,
   588,   591,   595,   596,   599,   600,   603,   609,   616,   622,
   629,   630,   631,   632,   633,   636,   639,   642,   643,   646,
   647,   648,   649,   650,   651,   652,   653,   656,   662,   669,
   675,   684,   690,   694,   696,   700,   703,   710,   720,   721,
   724,   725,   728,   729,   730,   731,   732,   733,   734,   735,
   739,   740,   744,   745,   748,   750,   752,   753,   754,   755,
   756,   758,   762,   766,   778,   779,   780,   781,   782,   783,
   786,   787,   788,   789,   790,   791,   792,   793,   794,   797,
   798,   801,   802,   803,   804,   805,   806,   807,   808,   809,
   810,   811,   814,   815,   818,   822,   823,   826,   827,   828,
   829,   832,   833,   837,   838,   839,   840,   843,   844,   845,
   848,   849,   850,   853,   854,   855,   856,   857,   860,   861,
   862,   865,   866,   869,   870,   874,   875,   878,   879,   884,
   890,   891,   897,   903,   904,   904,   906,   909,   910,   911,
   912,   913,   914,   915,   916,   917,   918,   919,   920,   923,
   924,   927,   928,   931,   936,   937,   938,   941,   954,   958,
   959,   962,   967,   968,   968,   973,   974,   975,   976,   979,
   982,   985,   988,   989,   992,   993,   996,   997,   998,  1002,
  1004,  1013,  1014,  1015,  1016,  1017,  1020,  1021,  1022,  1023,
  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,
  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,
  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,
  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,
  1064,  1065,  1071,  1072,  1073,  1074,  1077,  1078,  1079,  1080,
  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,  1089,  1090,
  1093,  1097,  1098,  1102,  1103,  1107,  1108,  1109,  1112,  1113,
  1116,  1118,  1120,  1121,  1123,  1125,  1126,  1128,  1130,  1132,
  1134,  1135,  1137,  1139,  1140,  1142,  1144,  1145,  1148,  1151,
  1152,  1153,  1156,  1158,  1162,  1164,  1168,  1169,  1170,  1174,
  1176,  1176,  1178,  1181,  1183,  1185,  1188,  1193,  1200,  1201,
  1202,  1209,  1213,  1214,  1218,  1219,  1222,  1223,  1226,  1227,
  1230,  1231,  1232,  1233,  1236,  1237,  1240,  1241,  1244,  1245,
  1246,  1249,  1249,  1250,  1251,  1254,  1266,  1282,  1283,  1286,
  1287,  1288,  1291,  1292,  1295,  1297,  1298,  1300,  1301,  1303,
  1305,  1307,  1309,  1315,  1316,  1317,  1318,  1319,  1320,  1321,
  1322,  1323,  1338,  1343,  1346,  1349,  1350,  1354,  1356,  1358,
  1360,  1364,  1365,  1367,  1371,  1373,  1375,  1378,  1379,  1380,
  1381,  1382,  1383,  1384,  1385,  1386,  1387,  1388,  1389,  1390,
  1393,  1399,  1402,  1405,  1406,  1409,  1410,  1411,  1412,  1413,
  1414,  1415,  1416,  1417,  1418,  1419,  1422,  1423,  1429,  1430,
  1431,  1432,  1435,  1436,  1437,  1438,  1441,  1442,  1446,  1449,
  1452,  1455,  1458,  1461,  1464,  1465,  1466,  1467,  1469,  1470,
  1472,  1474,  1481,  1485,  1487,  1489,  1491,  1495,  1496,  1499,
  1500,  1503,  1504,  1507,  1508,  1511,  1512,  1513,  1516,  1524,
  1529,  1530,  1534,  1535,  1538,  1543,  1546,  1547,  1548,  1556,
  1557,  1557,  1561,  1562,  1563,  1574,  1581,  1582,  1585,  1586,
  1587,  1588,  1589,  1591,  1592,  1593,  1594,  1597,  1598,  1599,
  1600,  1601,  1602,  1603,  1604,  1605,  1606,  1609,  1610,  1613,
  1614,  1615,  1616,  1619,  1620,  1621,  1624,  1625,  1626,  1629,
  1630,  1631,  1632,  1633,  1636,  1637,  1638,  1641,  1642,  1645,
  1646,  1650,  1651,  1654,  1655,  1658,  1659,  1662,  1663,  1664,
  1665,  1668,  1669,  1670,  1671,  1672,  1673,  1674,  1675,  1676,
  1677,  1678,  1679,  1682,  1683,  1686,  1689,  1691,  1693,  1697,
  1698,  1700,  1702,  1705,  1706,  1707,  1709,  1710,  1711,  1712,
  1713,  1714,  1715,  1718,  1719,  1722,  1725,  1726,  1727,  1728,
  1729,  1732,  1733
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","BADTOK",
"SKIPTOK","CTOK_ELIPSIS","CASE","DEFAULT","CIF","CELSE","SWITCH","WHILE","DO",
"CFOR","GOTO","CONTINUE","BREAK","RETURN","TSEMI","TLBRACE","TRBRACE","TCOMMA",
"TCOLON","TASSIGN","TLPAREN","TRPAREN","TLSQBR","TRSQBR","TDOT","TAMPERSAND",
"TEXCL","TTILDE","TMINUS","TPLUS","TMULT","TDIV","TPERCENT","TLT","TGT","TCIRC",
"TBAR","TQUEST","CSIZEOF","CALIGNOF","ARROW_OP","CTYPEDEF","COFFSETOF","INC_OP",
"DEC_OP","LEFT_OP","RIGHT_OP","LE_OP","GE_OP","EQ_OP","NE_OP","AND_OP","OR_OP",
"MUL_ASSIGN","DIV_ASSIGN","MOD_ASSIGN","ADD_ASSIGN","SUB_ASSIGN","LEFT_ASSIGN",
"RIGHT_ASSIGN","AND_ASSIGN","XOR_ASSIGN","OR_ASSIGN","CSTRUCT","CUNION","CENUM",
"VA_ARG","VA_DCL","QGLOBALS","QMODIFIES","QNOMODS","QCONSTANT","QFUNCTION","QITER",
"QDEFINES","QUSES","QALLOCATES","QSETS","QRELEASES","QPRECLAUSE","QPOSTCLAUSE",
"QALT","QUNDEF","QKILLED","QENDMACRO","LLMACRO","LLMACROITER","LLMACROEND","TENDMACRO",
"QSWITCHBREAK","QLOOPBREAK","QINNERBREAK","QSAFEBREAK","QINNERCONTINUE","QFALLTHROUGH",
"QLINTNOTREACHED","QLINTFALLTHROUGH","QLINTFALLTHRU","QARGSUSED","QPRINTFLIKE",
"QLINTPRINTFLIKE","QSCANFLIKE","QMESSAGELIKE","QNOTREACHED","QCONST","QVOLATILE",
"QINLINE","QEXTENSION","QEXTERN","QSTATIC","QAUTO","QREGISTER","QOUT","QIN",
"QYIELD","QONLY","QTEMP","QSHARED","QREF","QUNIQUE","QCHECKED","QUNCHECKED",
"QCHECKEDSTRICT","QCHECKMOD","QKEEP","QKEPT","QPARTIAL","QSPECIAL","QOWNED",
"QDEPENDENT","QRETURNED","QEXPOSED","QNULL","QOBSERVER","QISNULL","QEXITS","QMAYEXIT",
"QNEVEREXIT","QTRUEEXIT","QFALSEEXIT","QLONG","QSIGNED","QUNSIGNED","QSHORT",
"QUNUSED","QSEF","QNOTNULL","QRELNULL","QABSTRACT","QCONCRETE","QMUTABLE","QIMMUTABLE",
"QTRUENULL","QFALSENULL","QEXTERNAL","QREFCOUNTED","QREFS","QNEWREF","QTEMPREF",
"QKILLREF","QRELDEF","CGCHAR","CBOOL","CINT","CGFLOAT","CDOUBLE","CVOID","QANYTYPE",
"QINTEGRALTYPE","QUNSIGNEDINTEGRALTYPE","QSIGNEDINTEGRALTYPE","QNULLTERMINATED",
"QSETBUFFERSIZE","QBUFFERCONSTRAINT","QENSURESCONSTRAINT","QSETSTRINGLENGTH",
"QMAXSET","QMAXREAD","QTESTINRANGE","TCAND","IDENTIFIER","NEW_IDENTIFIER","TYPE_NAME_OR_ID",
"CCONSTANT","ITER_NAME","ITER_ENDNAME","TYPE_NAME","file","externalDefs","externalDef",
"constantDecl","fcnDecl","@1","plainFcn","plainNamedDecl","namedDeclBase","@2",
"@3","plainNamedDeclBase","@4","@5","iterDecl","@6","@7","macroDef","fcnDefHdr",
"optGlobMods","@8","optGlobBufConstraints","@9","optGlobBufConstraintsRest",
"optGlobEnsuresConstraintsAux","@10","optGlobBufConstraintsAux","@11","BufConstraintList",
"BufConstraint","bufferModifier","relationalOp","BufConstraintExpr","BufConstraintTerm",
"BufConstraintSrefExpr","BufUnaryOp","BufBinaryOp","optPlainGlobMods","@13",
"optGlobModsRest","optPlainGlobModsRest","specialClauses","globIdList","globIdListExpr",
"globId","globQual","optGlobQuals","optGlobModsAux","@14","@15","optPlainGlobModsAux",
"@16","@17","optMods","fcnMods","@18","fcnPlainMods","@19","specialTag","endStateTag",
"endSpecialTag","stateSpecialClause","specialClauseType","specialClause","@20",
"@21","fcnDefHdrAux","fcnBody","@22","@23","fcnDef","locModifies","locPlainModifies",
"modListExpr","mExpr","modList","specClauseListExpr","specClauseList","primaryExpr",
"postfixExpr","argumentExprList","unaryExpr","fieldDesignator","offsetofExpr",
"sizeofExpr","@24","sizeofExprAux","castExpr","timesExpr","plusExpr","shiftExpr",
"relationalExpr","equalityExpr","bitandExpr","xorExpr","bitorExpr","andExpr",
"@25","orExpr","@26","conditionalExpr","@27","@28","assignExpr","expr","optExpr",
"constantExpr","initializer","instanceDecl","@29","@30","namedInitializer","@31",
"typeDecl","@32","IsType","PushType","namedInitializerList","namedInitializerListAux",
"optDeclarators","init","initList","storageSpecifier","typeQualifier","typeModifier",
"typeSpecifier","completeType","completeTypeSpecifier","altType","completeTypeSpecifierAux",
"optCompleteType","suSpc","@33","@34","@35","@36","@37","@38","@39","@40","NotType",
"structDeclList","structDecl","structNamedDeclList","structNamedDecl","enumSpc",
"@41","enumeratorList","enumerator","optNamedDecl","namedDecl","genericParamList",
"innerMods","innerModsList","pointers","paramIdList","idList","paramTypeList",
"paramList","@42","@43","paramDecl","typeExpression","abstractDecl","optAbstractDeclBase",
"abstractDeclBase","stmt","iterBody","endBody","iterDefStmtList","iterDefIterationStmt",
"forPred","@44","@45","partialIterStmt","@46","iterDefStmt","iterSelectionStmt",
"openScope","closeScope","macroBody","stmtErr","labeledStmt","caseStmt","@47",
"@48","defaultStmt","@49","@50","compoundStmt","compoundStmtErr","CreateInnerScope",
"DeleteInnerScope","CreateStructInnerScope","DeleteStructInnerScope","DeleteInnerScopeSafe",
"compoundStmtRest","compoundStmtAux","compoundStmtAuxErr","stmtListErr","initializerList",
"stmtList","expressionStmt","expressionStmtErr","ifPred","selectionStmt","@51",
"@52","whilePred","iterWhilePred","iterStmt","@53","@54","iterArgList","@55",
"iterArgExpr","primaryIterExpr","postfixIterExpr","unaryIterExpr","castIterExpr",
"timesIterExpr","plusIterExpr","shiftIterExpr","relationalIterExpr","equalityIterExpr",
"bitandIterExpr","xorIterExpr","bitorIterExpr","andIterExpr","orIterExpr","conditionalIterExpr",
"@56","@57","assignIterExpr","endIter","doHeader","iterationStmt","iterationStmtErr",
"jumpStmt","optSemi","id","newId","typeName", NULL
};
#endif

static const short yyr1[] = {     0,
   191,   191,   192,   192,   193,   193,   193,   193,   193,   193,
   193,   194,   194,   196,   195,   197,   197,   198,   198,   199,
   199,   199,   199,   200,   199,   201,   199,   202,   202,   202,
   202,   203,   202,   204,   202,   206,   207,   205,   208,   208,
   208,   208,   209,   211,   210,   213,   212,   214,   216,   215,
   215,   218,   217,   217,   219,   219,   220,   221,   221,   222,
   222,   222,   223,   223,   223,   224,   224,   225,   225,   225,
   225,   225,   225,   225,   225,   226,   227,   227,    -1,    -1,
   229,   228,   230,   230,   231,   231,   232,   232,   233,   233,
   234,   235,   235,   236,   236,   236,   236,   236,   237,   237,
   239,   238,   240,   238,   238,   238,   238,   242,   241,   243,
   241,   241,   241,   241,   244,   244,   246,   245,   248,   247,
   249,   249,   249,   249,   249,   250,   251,   252,   252,   253,
   253,   253,   253,   253,   253,   253,   253,   255,   254,   256,
   254,   257,   257,   259,   258,   260,   258,   261,   262,   262,
   263,   263,   264,   264,   264,   264,   264,   264,   264,   264,
   265,   265,   266,   266,   267,   267,   267,   267,   267,   267,
   267,   267,   268,   268,   269,   269,   269,   269,   269,   269,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   271,
   271,   272,   272,   272,   272,   272,   272,   272,   272,   272,
   272,   272,   273,   273,   274,   276,   275,   277,   277,   277,
   277,   278,   278,   279,   279,   279,   279,   280,   280,   280,
   281,   281,   281,   282,   282,   282,   282,   282,   283,   283,
   283,   284,   284,   285,   285,   286,   286,   287,   288,   287,
   289,   290,   289,   291,   292,   293,   291,   294,   294,   294,
   294,   294,   294,   294,   294,   294,   294,   294,   294,   295,
   295,   296,   296,   297,   298,   298,   298,   299,   300,   299,
   301,   299,   302,   303,   302,   305,   304,   304,   304,   306,
   307,   308,   309,   309,   310,   310,   311,   311,   311,   312,
   312,   313,   313,   313,   313,   313,   314,   314,   314,   314,
   314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
   314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
   314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
   314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
   314,   314,   315,   315,   315,   315,   316,   316,   316,   316,
   316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
   317,   318,   318,   319,   319,   320,   320,   320,   321,   321,
   323,   324,   322,   325,   326,   322,   322,   322,   327,   328,
   322,   329,   330,   322,   322,   322,   322,   322,   331,   332,
   332,   332,   333,   333,   334,   334,   335,   335,   335,   336,
   337,   336,   336,   338,   338,   338,   339,   339,   340,   340,
   340,   340,   341,   341,   342,   342,   343,   343,   344,   344,
   345,   345,   345,   345,   346,   346,   347,   347,   348,   348,
   348,   350,   349,   351,   349,   352,   352,   353,   353,   354,
   354,   354,   355,   355,   356,   356,   356,   356,   356,   356,
   356,   356,   356,   357,   357,   357,   357,   357,   357,   357,
   357,   357,    -1,   358,   359,   360,   360,   361,   361,   361,
   361,   363,   364,   362,   366,   365,   365,   367,   367,   367,
   367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
   368,   369,   370,   371,   371,   372,   372,   372,   372,   372,
   372,   372,   372,   372,   372,   372,   373,   373,   375,   374,
   376,   374,   378,   377,   379,   377,   380,   380,   381,   382,
   383,   384,   385,   386,   387,   387,   387,   387,   387,   387,
   387,   387,   388,   389,   389,   389,   389,   390,   390,   391,
   391,   392,   392,   393,   393,   394,   394,   394,   395,   396,
   397,   396,   398,   396,   399,   400,   402,   403,   401,   404,
   405,   404,   406,   406,   406,   406,   407,   407,   408,   408,
   408,   408,   408,   408,   408,   408,   408,   409,   409,   409,
   409,   409,   409,   409,   409,   409,   409,   410,   410,   411,
   411,   411,   411,   412,   412,   412,   413,   413,   413,   414,
   414,   414,   414,   414,   415,   415,   415,   416,   416,   417,
   417,   418,   418,   419,   419,   420,   420,   421,   422,   423,
   421,   424,   424,   424,   424,   424,   424,   424,   424,   424,
   424,   424,   424,   425,   425,   426,   427,   427,   427,   428,
   428,   428,   428,   429,   429,   429,   429,   429,   429,   429,
   429,   429,   429,   430,   430,   431,   432,   432,   432,   432,
   432,   433,   433
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     2,     1,     1,     1,     1,     1,
     1,     8,    11,     0,     5,     1,     3,     1,     2,     1,
     6,     3,     6,     0,     7,     0,     8,     1,     6,     3,
     6,     0,     6,     0,     7,     0,     0,    10,     3,     3,
     3,     2,     1,     0,     2,     0,     2,     2,     0,     5,
     0,     0,     5,     0,     3,     1,     3,     1,     1,     1,
     1,     1,     1,     4,     5,     1,     1,     1,     1,     3,
     4,     2,     3,     3,     3,     1,     1,     1,     0,     2,
     0,     2,     1,     2,     1,     2,     1,     2,     1,     3,
     2,     1,     1,     1,     1,     1,     1,     1,     0,     2,
     0,     6,     0,     6,     1,     1,     0,     0,     5,     0,
     5,     1,     1,     0,     1,     0,     0,     3,     0,     3,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     0,     7,     0,
     8,     1,     3,     0,     3,     0,     3,     2,     3,     2,
     2,     1,     1,     1,     3,     4,     2,     3,     3,     3,
     1,     1,     1,     3,     1,     1,     3,     4,     2,     3,
     3,     3,     1,     3,     1,     1,     1,     3,     1,     1,
     1,     4,     3,     4,     6,     5,     5,     2,     2,     1,
     3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
     1,     1,     3,     1,     9,     0,     3,     4,     2,     4,
     2,     1,     4,     1,     3,     3,     3,     1,     3,     3,
     1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
     3,     1,     3,     1,     3,     1,     3,     1,     0,     4,
     1,     0,     4,     1,     0,     0,     7,     1,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
     3,     0,     1,     1,     1,     1,     1,     3,     0,     9,
     0,    11,     2,     0,     6,     0,     7,     4,     4,     0,
     0,     2,     1,     4,     0,     4,     1,     3,     4,     1,
     3,     1,     1,     1,     1,     1,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     1,     1,     1,     1,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     3,     1,     4,     1,     3,     2,     2,     2,     0,     1,
     0,     0,    11,     0,     0,    11,     6,     6,     0,     0,
    10,     0,     0,    10,     5,     5,     4,     4,     0,     1,
     1,     2,     5,     3,     2,     4,     1,     3,     4,     6,
     0,     8,     4,     1,     3,     2,     1,     4,     1,     1,
     2,     2,     1,     2,     1,     2,     1,     1,     1,     2,
     1,     2,     2,     3,     1,     3,     1,     3,     1,     1,
     3,     0,     2,     0,     4,     4,     1,     1,     2,     1,
     1,     2,     0,     1,     5,     2,     3,     3,     4,     3,
     4,     4,     5,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     2,     1,     1,     1,     2,     2,     7,     6,
     2,     0,     0,    10,     0,     6,     1,     1,     1,     1,
     2,     1,     1,     1,     1,     1,     1,     1,     3,     1,
     2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     3,     1,     1,     2,     2,     0,     4,
     0,     5,     0,     3,     0,     4,     3,     2,     3,     0,
     0,     0,     0,     0,     1,     2,     2,     3,     2,     3,
     3,     4,     2,     2,     3,     3,     4,     1,     2,     1,
     2,     1,     2,     1,     2,     1,     2,     1,     4,     2,
     0,     5,     0,     6,     4,     4,     0,     0,    10,     1,
     0,     4,     1,     1,     1,     1,     1,     3,     1,     4,
     3,     4,     6,     5,     5,     2,     2,     1,     2,     2,
     2,     2,     2,     2,     2,     2,     1,     1,     4,     1,
     3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
     3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
     3,     1,     3,     1,     3,     1,     3,     1,     0,     0,
     7,     1,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     1,     0,     1,     2,     7,     2,     2,
     7,     6,     2,     3,     2,     3,     2,     3,     3,     3,
     3,     2,     3,     0,     1,     1,     1,     1,     1,     1,
     1,     1,     1
};

static const short yydefact[] = {     0,
    11,   421,   389,   266,   389,    14,     0,     0,     0,     0,
   280,   280,   293,   292,   294,   295,   296,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   344,   345,   346,   343,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   280,   389,   389,   389,   389,   389,   389,
   389,   389,   389,   389,   280,   656,   657,   661,   658,   659,
   662,     0,     3,     6,     7,   413,     8,     9,   389,    43,
   654,    10,   265,   267,     0,   369,   369,   389,   369,   389,
   362,   389,     0,   389,   142,   280,   660,    20,   389,   417,
   418,   419,   422,   423,   283,   280,   280,   276,   389,   663,
   389,   389,   661,     0,   506,   280,   513,     0,     0,     0,
   636,     0,     0,     0,     0,   280,   546,     0,   280,   280,
   280,   280,   280,   280,   280,   280,   280,     0,    42,     0,
     0,     0,     0,     0,     0,   280,   180,   176,   179,   177,
   557,   181,   192,   212,   202,   201,   214,   218,   221,   224,
   229,   232,   234,   236,   238,   241,   244,   248,   260,   548,
   206,     0,     0,   538,   496,   497,   498,   499,     0,     0,
   500,   280,   501,     0,   502,     0,   503,   505,   175,     0,
   490,     0,   544,     0,   520,   477,     0,     0,     0,   486,
     0,   487,   466,   485,   482,   483,   478,   479,   480,     0,
     0,   484,     0,     0,     0,   488,   465,     0,   297,   298,
   299,   300,   305,   307,   306,   310,   311,   322,   324,   325,
   323,   308,   309,   301,   302,   303,   304,   319,   320,   317,
   321,   312,   313,   316,   314,   315,   328,   330,   335,   318,
   331,   332,   333,   334,   326,   327,   329,   336,   337,   340,
   341,   338,   339,   347,   349,   348,   350,   351,   352,   353,
   354,   355,   356,   342,     4,   280,     0,   144,   148,   540,
   389,   389,   655,     5,   389,   370,   366,   367,   360,   368,
     0,   280,   280,   358,   280,   280,     0,   359,   414,   357,
   420,   424,   389,     0,   282,   389,     0,   273,   280,   654,
    16,    18,     0,   389,   280,    28,   432,   280,   176,   179,
   212,   264,   509,   175,     0,   280,   280,   280,   280,     0,
   645,   647,   652,     0,     0,   389,   438,     0,     0,   195,
   200,   199,   198,   197,   196,     0,   280,   193,   194,   280,
     0,     0,     0,     0,     0,   280,   515,   280,   508,   280,
   454,   455,   456,   457,     0,   458,   459,   280,   461,   280,
   460,   462,   520,   280,   280,   188,   189,     0,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   280,   280,   239,   245,   242,   547,   280,
     0,   643,    39,     0,   521,   539,   550,   640,     0,   507,
   280,     0,     0,     0,   545,    40,   467,   471,   481,   492,
   493,   491,     0,     0,    41,    22,   280,   432,   389,   280,
   520,   541,   280,   268,   143,   389,     0,   364,     0,   389,
     0,   389,     0,   280,   280,   279,   280,   278,   274,   389,
     0,   280,     0,   389,   280,    19,   429,     0,     0,   415,
   430,   280,     0,     0,   514,     0,   553,     0,   263,     0,
   644,   653,   178,   280,   280,     0,   440,   439,   441,   280,
   504,   280,     0,   648,   649,   650,   651,   646,   511,     0,
     0,   639,   389,   518,   637,     0,     0,   183,     0,   190,
     0,     0,     0,   249,   250,   251,   252,   253,   254,   255,
   256,   257,   258,   259,   215,   216,   217,   220,   219,   222,
   223,   225,   226,   227,   228,   230,   231,   233,   235,   237,
   280,   280,   280,   261,   280,   280,   207,   534,   179,   538,
     0,   389,   519,   551,     0,     0,   489,   475,     0,     0,
    24,     0,   525,   280,   542,   145,   389,   280,   389,   520,
   147,   280,   269,   363,   280,   379,     0,   387,   382,     0,
   388,     0,   404,   407,   401,   403,   284,   280,   280,   654,
    15,    30,   280,   432,   280,    17,   416,   425,   427,    36,
   434,   389,   433,   437,   510,   549,     0,   555,   280,   361,
   446,     0,   432,   442,   280,     0,   213,   389,   280,     0,
   516,   517,   533,     0,   558,   280,   184,   182,   280,   280,
   240,     0,   243,   280,   209,   280,   211,   535,   536,   280,
   280,   280,   556,   280,   280,   389,    44,    26,   526,   529,
   280,   280,   527,   280,   543,     0,   271,   280,   365,   385,
   522,   371,   386,   522,   374,   280,   406,   280,     0,     0,
   280,   280,   280,     0,    32,     0,   280,     0,    81,   431,
   280,   443,   280,     0,   447,   450,   280,     0,   448,     0,
   432,     0,     0,   512,   280,   280,   191,   186,   187,   246,
     0,     0,   537,   552,     0,   280,   280,   280,   280,   280,
   280,   280,   280,   280,     0,   176,   179,   177,   192,   212,
   201,   218,   221,   224,   229,   232,   234,   236,   238,   241,
     0,   561,   560,   569,   578,   588,   590,   594,   597,   600,
   605,   608,   610,   612,   614,   616,   618,   622,   563,   175,
     0,    23,    46,   107,    44,   530,   531,   280,   528,    21,
   280,   285,   389,   377,   522,   389,   378,   522,   400,   405,
   280,     0,   277,   280,   287,   275,   280,     0,   389,    81,
    34,     0,   426,   428,    37,   114,   435,   409,     0,   280,
   443,   410,   444,   554,   472,     0,   451,   449,   452,     0,
     0,   185,     0,   561,   280,   208,   210,   642,     0,     0,
   195,   200,   199,   198,   197,   196,   193,   194,   280,   280,
   280,   188,   189,     0,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   239,   619,   242,   476,     0,   470,    25,    54,   101,
   117,   105,   121,   122,   123,   124,   125,   128,   129,    45,
   107,    83,   106,   389,   389,    87,    46,   532,   280,     0,
   391,   389,   389,   390,   389,   389,   389,   408,   280,   290,
     0,   285,    12,    31,    33,    81,    29,   654,   108,   119,
   112,    82,   114,    85,   113,   432,   436,   411,   412,   280,
   445,   453,     0,   204,     0,   520,   247,   641,   178,   280,
     0,   183,     0,     0,     0,     0,   623,   624,   625,   626,
   627,   628,   629,   630,   631,   632,   633,   215,   216,   217,
   220,   219,   222,   223,   225,   226,   227,   228,   230,   231,
   233,   235,   237,   615,   280,   617,   280,   469,    47,    51,
     0,   389,    99,   654,    84,   138,     0,    88,    27,   285,
   280,   389,     0,   280,   392,   380,   389,   383,   389,   402,
   288,   280,   654,    35,     0,   389,    99,   654,    86,   280,
   473,   280,     0,   638,   635,   213,   280,   184,   182,   280,
   280,     0,   562,    48,     0,     0,   389,    94,    95,    96,
    97,    98,   654,    89,    99,     0,     0,     0,   154,   118,
   163,   654,     0,   153,     0,   130,   135,   134,   133,   132,
   131,   136,   137,   140,     0,   270,   280,   394,   280,   280,
   389,   397,     0,   372,     0,   375,   289,   291,     0,    38,
   654,   654,   120,   654,   152,   280,     0,   205,   203,   634,
   521,     0,   186,   187,   620,     0,     0,     0,    58,    59,
    69,    67,   654,    56,    76,     0,    63,    66,     0,    68,
     0,    99,     0,   100,    93,    91,    92,     0,   157,     0,
     0,     0,     0,     0,   150,     0,     0,   166,   173,   654,
   165,     0,   280,   286,   280,   280,     0,   395,   280,   381,
     0,   384,     0,    13,   116,   116,   151,   474,   559,   185,
   280,   654,     0,    66,     0,    72,     0,     0,    61,    60,
    62,     0,     0,     0,     0,     0,   116,    90,   116,   158,
   155,   162,   161,     0,   159,   160,   164,   149,     0,   169,
     0,     0,     0,     0,     0,   654,   272,   398,   389,   393,
   280,   373,   376,   109,   115,   111,   621,     0,    78,    77,
     0,    73,     0,    53,    55,    57,    70,     0,    74,    75,
     0,   102,   104,   156,   170,   167,     0,   171,   172,   174,
   127,   280,     0,   396,   399,    50,     0,    71,    64,   168,
   139,   126,   280,    65,   141,     0,     0,     0
};

static const short yydefgoto[] = {  1216,
    82,    83,    84,    85,   122,   320,   321,    86,   657,   765,
   322,   790,   906,    87,   689,   908,   891,    89,   763,   764,
   868,   869,   969,  1014,  1015,   970,   971,  1083,  1084,  1085,
  1142,  1086,  1087,  1088,  1089,  1181,   795,   796,   880,   912,
   881,  1023,  1024,  1096,  1025,  1026,   882,   972,   973,   914,
   996,   997,  1174,  1175,   974,   915,   998,   884,  1213,  1202,
   885,  1044,   886,  1035,  1112,    90,   289,   449,   451,    91,
  1030,  1063,  1031,  1154,  1032,  1109,  1110,   162,   163,   519,
   164,   923,   165,   166,   421,   557,   167,   168,   169,   170,
   171,   172,   173,   174,   175,   176,   551,   177,   553,   178,
   552,   815,   179,   207,   490,   333,   290,    93,   668,   771,
   115,   599,    94,   316,   181,   287,   116,   117,   890,   786,
   901,    96,    97,    98,    99,   347,   291,   457,   101,   297,
   102,   775,  1121,   778,  1123,   671,  1053,   674,  1055,   103,
   893,   894,  1050,  1051,   104,   679,   592,   593,   800,   119,
   479,   112,   113,   106,   607,   608,   480,   481,   482,   691,
   613,   348,   806,   802,   499,   369,   208,   228,   209,   210,
   370,   920,  1067,   212,   654,   213,   214,   215,   216,   183,
   426,   371,   372,   484,   630,   373,   335,   510,   374,   188,
   375,   563,   773,   986,   221,   576,   514,   425,   190,   577,
   578,   376,   191,   192,   377,   651,   617,   378,   224,   379,
   383,   706,   742,   866,   743,   744,   745,   746,   747,   748,
   749,   750,   751,   752,   753,   754,   755,   756,   757,   758,
   965,  1131,   759,  1071,   380,   381,   197,   382,   294,   334,
   200,   109
};

static const short yypact[] = {  2053,
-32768,   117,  5389,-32768,  6235,-32768,   896,  3028,  3410,  3410,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   557,-32768,-32768,
-32768,  2229,-32768,-32768,-32768,   430,-32768,-32768,  5126,-32768,
   105,-32768,-32768,-32768,   124,  6069,  6069,-32768,  6069,   118,
    80,-32768,   527,-32768,-32768,   896,-32768,-32768,-32768,-32768,
-32768,-32768,   117,-32768,-32768,   156,-32768,   118,-32768,-32768,
-32768,  5389,-32768,   162,-32768,  5552,-32768,   183,   197,   205,
-32768,   213,   896,   283,   311,   892,-32768,  2605,  5552,  5552,
  5552,  5552,  5552,  5552,-32768,  5563,  5563,   288,-32768,   366,
   374,   379,   387,   345,   149,  4650,-32768,   389,   412,-32768,
   436,-32768,   834,   963,-32768,-32768,-32768,   821,   303,   636,
   294,   683,   439,   457,   463,   453,   106,-32768,-32768,   333,
-32768,  3558,   427,   435,-32768,-32768,-32768,-32768,   517,  3176,
-32768,  4650,-32768,  3558,-32768,  3558,-32768,-32768,   519,   537,
-32768,   565,-32768,  2795,   436,   585,   344,   523,  3219,-32768,
  3410,-32768,-32768,-32768,  5829,-32768,-32768,-32768,-32768,   604,
   623,-32768,  3410,  3410,  3558,-32768,-32768,   561,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   640,   653,-32768,-32768,-32768,
   118,  4969,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   662,   607,-32768,-32768,   896,   896,   -10,-32768,   430,-32768,
-32768,-32768,-32768,   707,-32768,-32768,   729,   684,   607,   105,
-32768,   648,   677,-32768,   896,-32768,   285,  5552,-32768,-32768,
-32768,-32768,-32768,-32768,   747,  5552,  5552,  5552,  1041,   736,
-32768,-32768,-32768,   414,   641,  5698,   375,   757,   781,-32768,
-32768,-32768,-32768,-32768,-32768,   785,  5552,-32768,-32768,  5552,
   796,   806,   811,   822,   827,  5552,-32768,  2225,-32768,  4650,
-32768,-32768,-32768,-32768,   871,-32768,-32768,  4650,-32768,  4650,
-32768,-32768,-32768,  3261,  5552,-32768,-32768,   140,  5552,  5552,
  5552,  5552,  5552,  5552,  5552,  5552,  5552,  5552,  5552,  5552,
  5552,  5552,  5552,  5552,  5552,  5552,  5552,  5552,  5552,  5552,
  5552,  5552,  5552,  5552,  5552,-32768,-32768,-32768,-32768,  5552,
   829,-32768,-32768,  2415,-32768,-32768,   854,-32768,   874,-32768,
  5552,   730,   902,   913,-32768,-32768,-32768,-32768,  5829,-32768,
-32768,-32768,  2985,   971,-32768,-32768,  5552,   260,  3660,   607,
   948,-32768,   607,-32768,   275,  6235,   891,   953,   998,  1018,
  1027,  1018,   896,  1029,   607,-32768,   607,-32768,-32768,-32768,
   979,  1042,  1032,-32768,   607,   648,-32768,   896,   965,-32768,
  1043,   896,   274,  1093,-32768,   301,  1099,   367,  1099,  1108,
-32768,-32768,-32768,-32768,  3452,  1124,   840,-32768,   853,  5552,
-32768,-32768,  1115,-32768,-32768,-32768,-32768,-32768,-32768,  1119,
  1140,-32768,  3660,-32768,-32768,  1156,  1144,-32768,   458,-32768,
   256,   896,   896,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   821,   821,   303,
   303,   636,   636,   636,   636,   294,   294,   683,   439,   457,
  5552,  5552,  5552,-32768,  5583,  5594,-32768,-32768,  5321,-32768,
  3367,  3845,-32768,-32768,  1157,   512,-32768,-32768,  1159,  1160,
-32768,  1161,-32768,  1967,-32768,-32768,  4030,  4215,-32768,   948,
-32768,-32768,  1169,-32768,-32768,  1173,  1175,-32768,  1176,  1178,
-32768,   886,-32768,  1172,-32768,-32768,-32768,   156,-32768,   193,
-32768,-32768,  5552,   524,   607,-32768,-32768,  1180,-32768,-32768,
  1194,  6235,-32768,-32768,-32768,-32768,  1179,-32768,  1041,-32768,
-32768,  1184,   923,   853,  3514,  1181,-32768,-32768,-32768,  1190,
-32768,-32768,-32768,  1182,-32768,  5552,-32768,-32768,-32768,-32768,
   463,   898,   453,  5552,-32768,  5552,-32768,-32768,-32768,  4258,
  4650,  5552,-32768,  5614,  5552,-32768,-32768,-32768,-32768,-32768,
  4360,  4403,-32768,  4505,-32768,  1189,-32768,-32768,-32768,-32768,
-32768,  1183,-32768,-32768,  1195,-32768,   896,-32768,   896,  1198,
  3070,-32768,-32768,  1192,-32768,  1196,-32768,   535,-32768,-32768,
   896,   637,  4650,  1204,-32768,-32768,   108,  1199,-32768,  1203,
   119,  1202,  1206,-32768,  5552,  5614,-32768,-32768,-32768,-32768,
  1207,  1208,-32768,-32768,   526,  5552,  5552,  5552,  5552,  5552,
  5552,  5552,  5563,  5563,  1211,   540,   612,   675,   968,  1272,
   681,   908,   897,   917,   400,   945,  1209,  1197,  1200,  1188,
   207,  1212,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   697,
   705,-32768,-32768,   961,-32768,-32768,-32768,  4548,-32768,-32768,
-32768,-32768,  6156,-32768,-32768,  6156,-32768,-32768,-32768,-32768,
  5552,  1010,-32768,  3070,-32768,-32768,  3070,  1151,-32768,-32768,
-32768,  1220,-32768,-32768,-32768,  1022,-32768,   430,  1222,-32768,
   578,-32768,   853,-32768,-32768,  1225,-32768,-32768,-32768,  1226,
   896,-32768,   732,  1227,  5552,-32768,-32768,  1229,   740,  1228,
   755,   769,   777,   783,   809,   814,   817,   844,  5552,  4681,
  5552,   876,   884,   152,  5552,  5552,  5552,  5552,  5552,  5552,
  5552,  5552,  5552,  5552,  5552,  5552,  5552,  5552,  5552,  5552,
  5552,  5552,  5552,  5552,  5552,  5552,  5552,  5552,  5552,  5552,
  5552,  5552,-32768,  5552,-32768,  1233,  1237,-32768,  1080,    67,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1035,-32768,-32768,-32768,-32768,  1079,-32768,-32768,  3070,   459,
-32768,   118,  5205,-32768,  6156,  5205,  6156,-32768,-32768,-32768,
  1071,-32768,-32768,-32768,-32768,-32768,-32768,   105,   172,-32768,
-32768,-32768,  1081,-32768,-32768,   543,-32768,-32768,-32768,  4996,
-32768,-32768,   393,-32768,  1238,   948,-32768,-32768,   944,  5552,
  1240,   970,   976,   257,   896,   896,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   983,   984,   993,
   654,   859,   920,   938,   485,   525,   567,   644,   816,   866,
   555,   352,   110,   463,  5552,   453,  5614,-32768,-32768,  1084,
  1086,  5960,    43,    91,-32768,-32768,   678,-32768,-32768,-32768,
-32768,-32768,  1247,    61,-32768,-32768,  5205,-32768,  5205,-32768,
-32768,  1858,   496,-32768,  1186,  5960,    43,    91,-32768,   600,
-32768,-32768,   896,-32768,  1077,  1011,-32768,  1036,  1037,-32768,
-32768,  1122,-32768,-32768,  1089,   232,  4812,-32768,-32768,-32768,
-32768,-32768,   552,-32768,    43,   966,    77,    77,-32768,-32768,
   314,   560,  1187,-32768,   133,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   566,-32768,   607,-32768,-32768,  1248,
-32768,  1246,  1250,-32768,  1251,-32768,-32768,-32768,  1191,-32768,
  4654,   552,-32768,   560,-32768,    47,  1252,-32768,-32768,-32768,
-32768,  1255,  1072,  1112,-32768,   232,   232,   258,-32768,-32768,
-32768,-32768,   105,  1098,-32768,  1138,-32768,   500,  1263,-32768,
  1213,    43,  1214,-32768,-32768,-32768,-32768,   528,   314,   471,
   896,   896,    77,  1215,-32768,   133,   133,-32768,   575,   633,
-32768,   133,-32768,-32768,  5552,    61,  1273,-32768,-32768,-32768,
  1270,-32768,  1276,-32768,  1219,  1219,-32768,-32768,-32768,  1117,
  5552,   105,  1090,   689,   258,   500,  1216,   232,-32768,-32768,
-32768,   232,   -17,   896,   896,   232,  1219,-32768,  1219,-32768,
-32768,-32768,   314,  1278,-32768,-32768,   314,-32768,   907,   575,
   594,   896,   896,   133,  1218,   633,-32768,-32768,-32768,-32768,
  5552,-32768,-32768,-32768,-32768,-32768,-32768,  1221,-32768,-32768,
   232,-32768,   689,-32768,-32768,-32768,-32768,  1281,-32768,-32768,
  1274,-32768,-32768,-32768,-32768,-32768,  1283,-32768,-32768,   575,
-32768,-32768,  1223,-32768,-32768,-32768,  1275,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1297,  1312,-32768
};

static const short yypgoto[] = {-32768,
-32768,  1231,-32768,-32768,-32768,-32768,  -459,  -102,-32768,-32768,
   989,-32768,-32768,-32768,-32768,-32768,   112,-32768,   550,-32768,
   429,-32768,-32768,-32768,-32768,-32768,-32768,  -955,-32768,-32768,
-32768,  -937,-32768,  -964,-32768,-32768,  -687,-32768,-32768,-32768,
  -698,   321,   227,-32768,-32768,   296,   441,-32768,-32768,   410,
-32768,-32768,  -983,  -667,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -901,   179,   343,  -864,   230,-32768,  -573,   518,
   988,-32768,-32768,  -567,-32768,-32768,   130,  -357,  -340,  -331,
  -367,  -317,  -347,  -345,  -482,  -467,-32768,  -565,-32768,   -32,
-32768,-32768,   780,  1082,  -604,  -295,     2,-32768,-32768,-32768,
  -464,-32768,-32768,-32768,     0,  -242,   880,-32768,  -782,  -679,
-32768,-32768,-32768,-32768,-32768,-32768,   158,   765,-32768,   815,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   357,
  -677,  -786,-32768,   233,-32768,-32768,   672,   676,   551,    68,
  -374,  1242,-32768,     6,-32768,-32768,  -532,-32768,-32768,-32768,
   665,  -296,  1012,-32768,  -480,  1101,  1347,-32768,  1134,-32768,
   764,-32768,-32768,-32768,-32768,  -119,-32768,-32768,-32768,-32768,
    85,  1376,  1566,-32768,-32768,  1584,-32768,-32768,  -363,-32768,
  1450,   289,  -537,  -794,-32768,   848,-32768,-32768,   940,   -83,
  -309,     4,-32768,   334,   173,-32768,-32768,   189,-32768,   214,
-32768,-32768,   656,-32768,   398,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1672,-32768,-32768,  1675,   498,   182,
   433,-32768
};


#define	YYLAST		6425


static const short yytable[] = {    95,
   597,    92,    95,   309,   511,   292,   458,   114,   463,  1187,
   229,   230,   222,   222,   694,   606,   624,   231,   232,   233,
   234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   546,   547,   538,   539,   257,   258,   259,
   260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
   270,   271,   272,   273,   540,   541,   549,   105,   641,   550,
   509,  -440,   495,   572,   284,   542,   543,   544,   545,   473,
   729,    95,  1049,    92,   433,   643,   731,   581,   741,   437,
   698,   438,   184,   332,     2,   548,   883,   913,   896,   301,
  1027,   988,   905,   442,   900,    95,   985,   902,   293,   985,
  1028,    88,  1134,  1136,  1027,   314,   315,   317,   312,   993,
  1132,   323,   293,   477,  1028,  1098,  1099,   325,  1018,  1019,
  -613,   439,   729,   495,  -613,  -280,   776,   346,   731,  1133,
   741,     2,  1176,   809,   356,   687,   417,   295,   414,   105,
     2,   570,  -103,  -103,   366,   367,  1106,   100,  1020,  1021,
   118,   418,   121,  1192,   303,  1193,  1107,   522,   810,  1188,
  1183,   739,  1022,    76,    77,   123,   313,    79,    80,   935,
   193,   107,  1185,   523,   107,   327,   740,   978,   107,   199,
   199,   199,  1054,    88,  1056,   936,   194,  1045,  1153,   622,
   985,  1157,   985,   346,  1186,   628,   336,   222,  1191,   980,
   293,   803,   222,   883,   222,   682,   511,   987,   994,   989,
   337,   195,   349,   739,   110,   111,   222,   222,   338,   686,
    76,    77,   123,   473,    79,    80,   339,   895,   740,   100,
   897,  1159,  1160,  1207,    76,    77,   123,   863,    79,    80,
  -103,  -103,   650,   296,   296,  1077,   296,  -110,  -110,  1153,
    76,  1029,   864,   107,   477,  1078,   422,   662,   350,   351,
   352,   353,   354,   355,    76,  1029,   420,   420,   428,   324,
   429,  1135,   638,  1009,   571,   447,   735,   107,   458,   477,
   301,  1078,  -389,   452,   420,  -389,   732,  -389,   493,  1200,
   341,    95,   456,   107,   459,   461,   737,   684,   738,   444,
   193,   360,  1058,   733,   107,  1001,    76,  1108,    95,   199,
   803,   420,   734,   437,   323,   616,   194,   346,   342,   700,
   407,   408,   703,   332,   403,   404,   736,   199,   735,  1100,
   562,  1101,   223,   223,   409,   410,   496,   711,   732,   712,
   419,   195,   497,   420,   193,  -110,  -110,  1102,   737,   365,
   738,   435,   193,   199,   420,   733,   193,   346,   193,   455,
   194,   199,  -611,   199,   734,   199,  -611,   199,   194,   964,
   413,   361,   194,   698,   194,   199,   470,   420,   736,   362,
   199,   618,   199,   729,   363,   195,   966,   193,  -280,   731,
   495,   741,   364,   195,   199,   199,   199,   195,     2,   195,
  -657,  1079,  1080,   194,   332,    76,  1081,  1002,  1082,   820,
  1003,   274,   275,   276,   277,   278,   279,   280,   281,   282,
   283,   492,   108,  -661,   420,   108,   853,   854,   195,   124,
   452,    76,  1081,  -389,  -389,  -389,   222,  -389,  -389,    95,
   855,   856,    95,  -281,   299,   286,   302,  -658,   304,   587,
   308,   590,   332,   596,    95,   310,    95,   413,  -389,  -389,
  -389,   603,  -389,  -389,   323,   318,   981,   319,   636,   982,
   325,   612,   637,   107,   739,   898,   107,   107,   107,   959,
   960,   951,   952,   620,  1027,   414,   496,  1151,   626,   740,
   107,   456,   415,   494,  1028,  -601,   107,   416,   560,  -601,
   953,   954,   962,   293,   108,   963,   982,   579,   423,   388,
   582,   955,   956,   957,   958,  1143,  -494,  1144,   477,   535,
   536,   537,   420,   405,   406,   424,   653,   223,   108,   793,
  -660,   961,   223,  1145,   223,  -602,   420,   477,   685,  -602,
   818,   199,  1150,  1100,   326,  1101,   223,   223,   430,   199,
  -566,   199,  1005,   452,  -566,   340,  -389,   696,  -389,   293,
   332,  1102,  1092,   405,   406,  -609,  -389,   293,   452,  -609,
  1103,   666,  1114,  1113,   456,   624,   982,  -603,   431,   798,
  -663,  -603,   332,   305,   306,   307,   193,   680,   681,   735,
  1161,  -280,  1162,   495,   323,   199,  -659,   411,   412,   732,
   325,     2,   194,   494,   436,   405,   406,  1027,  1163,   737,
  1196,   738,   440,   626,   199,   495,   733,  1028,   456,   627,
   199,   107,  -565,     2,   107,   734,  -565,   195,   708,   709,
     2,  -663,   441,   346,   107,   346,   107,   450,   107,   736,
   293,   453,   445,  1164,    76,  1029,   107,  1152,   419,   107,
  -280,   420,   495,   107,  -604,   493,   446,   772,  -604,   465,
     2,  -281,   467,   472,  -596,   779,   448,   781,  -596,   454,
   475,   787,   788,   478,   405,   406,   792,   400,   401,   402,
   612,   799,   405,   406,   199,  -567,   496,   801,   798,  -567,
   474,  -587,   497,   107,   107,  -587,   469,  -389,  -389,  -389,
  1072,  -389,  -389,  1182,  1143,   346,  1144,  -564,    76,    77,
   123,  -564,    79,    80,   466,   420,  -389,  -389,  -389,   867,
  -389,  -389,  1145,   193,   108,   411,   412,   460,   462,   464,
  -663,  -663,   199,   199,  -663,  -663,   468,   435,   332,   194,
   420,   108,   420,   491,   493,   199,   925,   326,   199,   199,
   420,    76,    77,   123,   929,    79,    80,   918,   485,   692,
   889,   182,   211,   211,   195,  -581,   223,    76,  1029,  -581,
  1152,   500,   927,    76,    77,   123,   107,    79,    80,  -586,
    76,    77,   123,  -586,    79,    80,  1036,  -585,  1037,   917,
   799,  -585,   626,  -584,   478,   501,   801,  -584,   502,  1038,
  1039,   583,  1040,   504,  1041,  1042,   588,   471,   591,  1168,
    76,    77,   123,   505,    79,    80,   600,  1043,   506,  -583,
   605,   199,   199,  -583,  -582,   760,  -606,  -579,  -582,   507,
  -606,  -579,   199,   199,   508,   199,   821,   822,   823,   824,
   825,   826,   407,   408,   400,   401,   402,   384,   107,   385,
   107,  -389,   564,  -280,  -580,   495,   409,   410,  -580,   107,
   555,   556,   107,   107,   199,  1205,  -280,  -389,   625,  -595,
   386,   387,   108,  -595,   565,   108,  -607,   760,  1017,   513,
  -607,   983,   400,   401,   402,   594,  -576,   108,   990,   108,
  -576,   182,   407,   408,  -577,   676,   677,   326,  -577,   343,
   609,   298,  1061,   300,   614,   328,   409,   410,   420,   710,
   139,   140,   141,   142,   143,   144,   567,   477,   849,   850,
   892,  1195,  1161,   892,  1162,   583,   568,   145,   146,   147,
  -598,   846,   847,   848,  -598,   182,  -389,   696,  -389,   199,
  1163,   403,   404,   182,   639,   640,  -389,   182,  -599,   182,
   478,   148,  -599,   309,  -568,   851,   852,   211,  -568,   403,
   404,   580,   211,   585,   211,   948,   949,   950,   584,   697,
  1046,   569,   107,    95,   702,   389,   211,   211,   182,   610,
  -571,   830,   107,   831,  -571,  -389,   636,   857,   858,   799,
  1008,  1068,   157,  -591,  -592,  1066,   456,  -591,  -592,  1073,
  1074,  -389,   762,  -593,   832,   833,   586,  -593,   452,   390,
   391,   392,   393,   394,   395,   396,   397,   398,   399,   899,
   677,  -589,   870,   871,   872,  -589,  -280,   326,   873,   874,
   875,   876,   877,   878,   879,   589,    95,   595,  1115,  1117,
   892,  1052,   892,   892,   892,   604,  -572,  -570,  -262,  1006,
  -572,  -570,   452,   611,   328,   799,   601,   582,   602,   139,
   140,   141,   142,   143,   144,    76,   329,   330,   160,    76,
    77,   123,   332,    79,    80,   834,   145,   146,   147,   180,
   991,   992,  -574,   909,   910,   911,  -574,   683,  1177,   873,
   874,   875,   876,   877,   878,   879,   870,   871,   872,   594,
   148,   594,  1167,   331,   615,    95,   107,   107,  1171,   420,
   794,  1179,  1180,   614,   108,   619,   331,   331,   331,   331,
   331,   331,  -575,   358,   359,   629,  -575,  -573,   332,   503,
   631,  -573,   420,  1075,   892,   904,   892,   623,   760,    76,
  1095,   157,   909,   910,   911,  1034,   873,   874,   875,   876,
   877,   878,   879,   520,   632,   107,   634,   635,   524,   525,
   526,   527,   528,   529,   530,   531,   532,   533,   534,  1034,
   652,   107,   655,  1052,   107,   658,   656,   182,  1139,  1140,
  1141,   667,   670,   672,   678,   673,   675,  1090,   690,   554,
   688,  1211,   774,   693,   701,   705,   211,  1097,  1034,  1034,
   695,   704,  1215,   770,   777,   783,  1111,   344,   789,   345,
   791,   805,   811,   807,    76,   329,   330,   160,   107,   808,
   812,   816,   817,   108,   829,   860,   865,   859,   903,   861,
   976,   977,   862,   924,   907,   916,   928,   107,   984,   921,
   922,   926,   930,   967,   968,  1004,   -52,  1090,  1090,  1090,
  1007,   -49,  1016,   180,  1048,  1070,  1076,  1119,  1116,  1120,
  1122,   180,  1000,  1060,  1105,   180,  1128,   180,  1124,  1130,
  1138,  1034,   107,   107,  1034,   432,  1146,  1111,  1111,  1172,
  1170,   871,   427,  1111,   835,  1173,  1217,   107,  1209,  1214,
  1147,  1149,  1158,  1184,  1194,  1201,   180,  1208,  1206,  1210,
  1212,  1218,   285,   476,   887,   979,  1090,  1062,  1148,  1090,
  1094,   975,   999,  1090,   182,   107,   107,  1090,   836,   837,
   838,   839,   840,   841,   842,   843,   844,   845,  1047,  1197,
  1064,  1166,  1034,   107,   107,  1111,   598,   933,  1169,   669,
   782,   919,   780,   331,   311,   797,   227,   443,   498,  1129,
   633,   814,  1090,   561,  1013,     0,     0,  1010,  1011,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   185,   217,   217,     0,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,     0,     0,   995,     0,  1118,     0,   483,
     0,     0,     0,     0,     0,   707,   108,   486,   487,   488,
   489,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   108,     0,   331,  1069,     0,     0,   483,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   483,
     0,     0,     0,     0,     0,     0,     0,   189,   220,   220,
   785,     0,     0,     0,     0,     0,   521,     0,     0,     0,
   512,  1033,     0,     0,     0,     0,     0,     0,   515,   108,
   516,     0,   331,     0,     0,     0,     0,   331,     0,     0,
  1059,     0,     0,     0,     0,  1065,     0,     0,   108,     0,
     0,     0,     0,     0,     0,   180,     0,     0,     0,     0,
     0,     0,   566,   185,  1091,     0,     0,     0,     0,     0,
  1093,     0,     0,     0,     0,  1204,     0,     0,     0,  1104,
     0,     0,     0,  1155,  1156,     0,     0,     0,   331,     0,
   331,     0,   645,   647,     0,     0,     0,     0,   108,   575,
     0,     0,     0,     0,     0,     0,     0,   185,  1125,  1126,
     0,  1127,     0,   785,     0,   185,   785,     0,     0,   185,
     0,   185,     0,   186,   218,   218,  1189,  1190,     0,   217,
  1137,     0,     0,     0,   217,     0,   217,   189,     0,     0,
   331,   187,   219,   219,  1198,  1199,     0,     0,   217,   217,
   185,     0,     0,     0,     0,     0,     0,  1165,   931,   520,
     0,     0,   331,   575,   937,   938,   939,   940,   941,   942,
   943,   944,   945,   946,   947,     0,     0,     0,     0,  1178,
     0,   189,     0,   642,     0,     0,     0,     0,     0,   189,
     0,   730,   180,   189,     0,   189,     0,     0,     0,     0,
     0,     0,     0,   220,   434,     0,     0,     0,   220,     0,
   220,     0,   575,  1203,     0,     0,     0,     0,   785,     0,
     0,     0,   220,   220,   189,     0,     0,   575,   665,   196,
   225,   225,   198,   226,   226,     0,     0,     0,     0,     0,
     0,     0,     0,   730,     0,     0,     0,     0,     0,     0,
   489,     0,     0,   186,   331,   331,   331,   331,   331,   331,
   827,   828,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   187,     0,     0,     0,   483,     0,   483,     0,     0,
     0,     0,     0,   715,     0,     0,   761,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   186,     0,     0,
   665,   714,     0,     0,     0,   186,     0,     0,     0,   186,
     0,   186,   665,     0,     0,   187,     0,     0,   331,   218,
     0,   785,     0,   187,   218,     0,   218,   187,     0,   187,
     0,     0,     0,     0,     0,     0,   813,   219,   218,   218,
   186,     0,   219,   804,   219,     0,     0,   819,     0,   185,
     0,     0,   331,     0,     0,     0,   219,   219,   187,   196,
     0,     0,   198,     0,     0,     0,     0,     0,   217,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   517,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     0,   331,     0,   196,     0,     0,   198,     0,     0,     0,
     0,   196,     0,     0,   198,   196,     0,   196,   198,     0,
   198,     0,     0,   189,     0,   225,   784,  1057,   226,     0,
   225,   328,   225,   226,     0,   226,   139,   140,   141,   142,
   143,   144,   220,     0,   225,   225,   196,   226,   226,   198,
     0,     0,     0,   145,   146,   147,     0,     0,     0,     0,
     0,     0,   934,     0,     0,     0,     0,   331,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,   185,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   730,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
     0,     0,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   203,  -520,   659,     0,     0,   186,
   368,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,   489,     0,     0,     0,     0,     0,   187,   218,     0,
   189,     0,   145,   146,   147,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   219,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   148,     0,     0,     0,
     0,    76,   329,   330,   160,     0,  1012,     0,     0,     0,
     0,     0,    -1,     1,     0,     0,     0,     0,     0,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   156,     0,     0,  -280,   157,     0,     0,
     0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
     0,     0,     0,     0,     0,   196,     0,     3,   198,     0,
     0,     0,   331,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   225,     0,     0,   226,   331,  -389,
  -389,  -389,     0,     4,     0,     0,   186,     5,     6,     7,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     8,     9,    10,   187,     0,     0,     0,     0,     0,
    76,   158,   159,   160,   161,    80,     0,     0,   331,     0,
    11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    -2,     1,
     0,     0,   196,     0,     0,   198,    76,    77,    78,     0,
    79,    80,    81,  -520,     0,     0,     0,     0,   368,     0,
     0,     0,  -280,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
   145,   146,   147,     3,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   148,  -389,  -389,  -389,     0,     4,
     0,     0,     0,     5,     6,     7,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   157,    11,    12,    13,     0,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,     0,     0,     0,     0,    76,   329,
   330,   160,    76,    77,    78,   125,    79,    80,    81,     0,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   137,  -520,   558,     0,     0,     0,   138,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -280,  -280,     0,     3,
   145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -389,  -389,  -389,   148,     4,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,    11,    12,    13,   157,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     0,     0,     0,     0,     0,     0,     0,     0,    76,   158,
   559,   160,   161,    80,    81,   125,     0,     0,     0,     0,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   137,  -520,     0,     0,     0,     0,   138,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -280,  -280,     0,     0,
   145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -280,  -280,  -280,   148,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,  -280,  -280,  -280,   157,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,     0,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,     0,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
     0,     0,     0,     0,     0,     0,     0,     0,    76,   158,
   159,   160,   161,    80,  -280,   201,     0,     0,     0,     0,
   126,   127,   128,     0,     0,   202,   131,   132,   133,   134,
   135,   136,   203,  -520,  -524,     0,     0,     0,   204,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -280,  -280,     0,     0,
   145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -280,  -280,  -280,   148,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,  -280,  -280,  -280,   157,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,     0,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,     0,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
     0,     0,     0,     0,     0,     0,     0,     0,    76,   158,
   159,   160,   205,   206,  -280,   201,     0,     0,     0,     0,
   126,   127,   128,     0,     0,   202,   131,   132,   133,   134,
   135,   136,   203,  -468,  -468,     0,     0,     0,   204,  -468,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -280,  -280,   125,     0,
   145,   146,   147,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -520,     0,     0,     0,
     0,   138,     0,     0,   148,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -280,
  -280,     0,     0,   145,   146,   147,  -468,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,   784,     0,
     0,   156,     0,   328,     0,   157,     0,   148,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   145,   146,   147,     0,   149,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,   148,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    76,   158,
   159,   160,   205,   206,     0,     0,   125,     0,     0,     0,
   157,   126,   127,   128,     0,   129,   130,   131,   132,   133,
   134,   135,   136,   137,  -520,     0,     0,     0,     0,   138,
     0,     0,     0,     0,   139,   140,   141,   142,   143,   144,
     0,    76,   158,   159,   160,   161,    80,  -280,  -280,   201,
     0,   145,   146,   147,   126,   127,   128,     0,     0,   202,
   131,   132,   133,   134,   135,   136,   203,  -520,  -524,     0,
     0,     0,   204,     0,     0,   148,     0,   139,   140,   141,
   142,   143,   144,    76,   329,   330,   160,     0,     0,     0,
  -280,  -280,     0,     0,   145,   146,   147,  -495,   150,   151,
   152,   153,   154,   155,     0,     0,     0,     0,     0,     0,
     0,     0,   156,     0,   328,   518,   157,     0,   148,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   145,   146,   147,     0,
  -464,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   156,     0,     0,     0,   157,
   148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
   158,   159,   160,   161,    80,     0,     0,   125,     0,     0,
     0,   157,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   137,  -520,   648,     0,     0,     0,
   138,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,    76,   158,   159,   160,   205,   206,  -280,  -280,
   201,     0,   145,   146,   147,   126,   127,   128,     0,     0,
   202,   131,   132,   133,   134,   135,   136,   203,  -520,  -524,
     0,     0,     0,   204,     0,     0,   148,     0,   139,   140,
   141,   142,   143,   144,    76,   329,   330,   160,     0,     0,
     0,  -280,  -280,     0,     0,   145,   146,   147,     0,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   156,     0,   328,     0,   157,   621,   148,
   139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   145,   146,   147,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   156,     0,     0,     0,
   157,   148,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   328,     0,     0,
   699,     0,   139,   140,   141,   142,   143,   144,     0,     0,
    76,   158,   159,   160,   161,    80,     0,     0,   125,   145,
   146,   147,   157,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -520,     0,     0,     0,
     0,   138,     0,   148,     0,     0,   139,   140,   141,   142,
   143,   144,     0,    76,   158,   159,   160,   205,   206,  -280,
  -280,     0,     0,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   157,     0,     0,   148,     0,     0,
     0,     0,     0,     0,     0,    76,   329,   330,   160,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,   126,   127,   128,   157,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -520,   573,
     0,     0,     0,   368,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,    76,   329,   330,
   160,  -280,  -280,     0,     3,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    76,   158,   159,   160,   161,    80,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   574,    11,    12,    13,
   157,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
     0,     0,     0,    76,   158,   559,   160,   161,    80,    81,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   203,  -520,   649,     0,     0,     0,   368,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -280,  -280,     0,     3,
   145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   148,     4,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,    11,    12,    13,   157,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     0,     0,     0,     0,     0,     0,     0,     0,    76,   158,
   559,   160,   161,    80,    81,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -520,   660,
     0,     0,     0,   368,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,  -280,  -280,     0,     3,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   661,    11,    12,    13,
   157,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
     0,     0,     0,    76,   158,   559,   160,   161,    80,    81,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   203,  -520,   663,     0,     0,     0,   368,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   145,   146,   147,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -520,   713,     0,     0,
     0,   368,     0,     0,   148,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   146,   147,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   664,     0,     0,     0,   157,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,   126,   127,   128,   157,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -520,   766,
     0,     0,     0,   368,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,    76,   158,
   159,   160,   161,    80,     0,   145,   146,   147,   126,   127,
   128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
   203,  -520,   767,     0,     0,     0,   368,     0,     0,   148,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,    76,   158,   159,   160,   161,    80,     0,   145,   146,
   147,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   156,     0,     0,     0,
   157,     0,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   768,
   126,   127,   128,   157,   129,   130,   131,   132,   133,   134,
   135,   136,   203,  -520,   769,     0,     0,     0,   368,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,    76,   158,   159,   160,   161,    80,     0,
   145,   146,   147,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -520,   888,     0,     0,
     0,   368,     0,     0,   148,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,    76,   158,   159,   160,
   161,    80,     0,   145,   146,   147,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,   126,   127,   128,   157,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -520,     0,
     0,   293,     0,   368,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,    76,   158,
   159,   160,   161,    80,     0,   145,   146,   147,     3,     0,
     0,     0,     0,     0,   328,   932,     0,     0,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,   148,
  -389,  -389,  -389,     0,     4,     0,   145,   146,   147,     0,
     0,    76,   158,   159,   160,   161,    80,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
   148,     0,     0,     0,     0,     0,   156,     0,     0,     0,
   157,    11,    12,    13,     0,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,   157,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   293,
     0,     0,     0,    76,   158,   159,   160,   161,    80,   120,
     0,     0,     0,    81,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
     0,     0,     0,     0,    76,   329,   330,   160,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     4,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  -654,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
    12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,  -146,     0,     0,
     0,     0,  -146,     0,     0,     0,     0,   120,     0,     0,
     0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     3,     0,     0,     0,     0,     0,   328,
  -262,     0,     0,     0,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
     0,   145,   146,   147,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   148,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    11,    12,    13,     0,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,   157,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,   288,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   120,     0,     0,     0,    81,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     3,     0,     0,     0,     0,     0,     0,     0,     0,    76,
   329,   330,   160,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  -523,     0,     0,     0,     0,     0,
     0,     0,     0,    11,    12,    13,     0,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   120,    11,    12,    13,    81,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,  -661,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     0,     0,     0,     0,     0,     0,     0,  -663,  -663,  -663,
   120,     0,     0,     0,    81,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  -663,     0,     0,     0,     0,
     0,     0,  -280,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     2,     0,     0,     0,     0,     0,  -663,  -663,
  -663,     0,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
  -663,  -663,     0,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,     0,  -663,
  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
  -663,  -663,  -663,  -663,  -663,  -663,    11,    12,    13,     0,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
  -663,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
     0,     0,    76,    77,    78,   328,    79,    80,    81,     0,
   139,   140,   141,   142,   143,   144,   357,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     0,     0,     0,     0,     0,     0,   644,     0,   145,   146,
   147,   139,   140,   141,   142,   143,   144,   646,     0,     0,
     0,   148,   139,   140,   141,   142,   143,   144,   145,   146,
   147,     0,   148,     0,     0,     0,     0,   716,     0,   145,
   146,   147,   717,   718,   719,   720,   721,   722,     0,     0,
     0,     0,   148,     0,     0,     0,     0,     0,     0,   145,
   723,   724,   157,   148,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   725,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   157,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   157,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    76,   329,   330,   160,  -206,
  -206,     0,     0,     0,     0,     0,    76,   329,   330,   160,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    76,   329,   330,   160,
     0,     0,     0,     0,     0,     0,     0,    76,   329,   330,
   160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    76,   726,   727,
   728,     0,     0,     0,     0,    11,    12,    13,     0,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,     0,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,     3,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   120,     0,     0,     0,    81,     0,     0,
     0,     0,     0,     0,     0,  -389,  -389,  -389,     0,     4,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    11,    12,    13,     0,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,     3,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   120,     0,     0,     0,    81,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
     0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,  -389,  -389,  -389,     0,     0,
     0,     0,     0,     0,     0,   120,     0,     0,     0,    81,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    11,    12,    13,     0,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,     8,     9,    10,     0,     0,     0,
     0,     0,     0,     0,   120,     0,     0,     0,    81,     0,
     0,     0,     0,    11,    12,    13,     0,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   120,    11,    12,    13,    81,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   120,     0,     0,     0,    81
};

static const short yycheck[] = {     0,
   465,     0,     3,   106,   368,    89,   303,     2,    19,    27,
    11,    12,     9,    10,   619,   475,   497,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,   411,   412,   403,   404,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,   405,   406,   414,     0,   551,   415,
   366,    25,    26,   448,    75,   407,   408,   409,   410,   322,
   654,    82,    22,    82,   204,   553,   654,   451,   654,   209,
   623,   211,     8,   126,    34,   413,   764,   796,   776,   100,
    24,   896,   790,   223,   784,   106,   893,   787,    18,   896,
    34,     0,  1077,  1078,    24,   116,   117,   118,   113,   902,
  1076,   122,    18,     5,    34,  1027,  1028,   122,    86,    87,
    21,   215,   706,    26,    25,    18,   674,   138,   706,  1077,
   706,    34,  1126,    25,   145,   605,    41,    24,    39,    82,
    34,   447,    86,    87,     6,     7,    24,     0,   116,   117,
     3,    56,     5,  1147,    85,  1149,    34,    28,   701,   187,
  1135,   654,   130,   184,   185,   186,    21,   188,   189,    28,
     8,     0,  1138,    44,     3,    24,   654,   886,     7,     8,
     9,    10,   987,    82,   989,    44,     8,   980,  1100,   495,
   987,  1103,   989,   204,  1142,   502,    24,   204,  1146,   889,
    18,   692,   209,   881,   211,    23,   580,   895,   906,   897,
    24,     8,   138,   706,   108,   109,   223,   224,    24,   604,
   184,   185,   186,   476,   188,   189,    24,   775,   706,    82,
   778,  1106,  1107,  1181,   184,   185,   186,    41,   188,   189,
   184,   185,   562,    96,    97,    24,    99,    86,    87,  1161,
   184,   185,    56,    82,     5,    34,   182,   577,   139,   140,
   141,   142,   143,   144,   184,   185,    21,    21,   194,   122,
   196,    24,    27,    27,    25,   286,   654,   106,   585,     5,
   291,    34,    18,   292,    21,    21,   654,    23,    25,  1164,
    18,   302,   303,   122,   305,   306,   654,   603,   654,   225,
   138,    24,   992,   654,   133,   920,   184,   185,   319,   138,
   801,    21,   654,   443,   325,    25,   138,   328,    18,   625,
    37,    38,   629,   366,    32,    33,   654,   156,   706,    26,
   424,    28,     9,    10,    51,    52,   347,   644,   706,   646,
    18,   138,   347,    21,   182,   184,   185,    44,   706,    15,
   706,    18,   190,   182,    21,   706,   194,   368,   196,   302,
   182,   190,    21,   192,   706,   194,    25,   196,   190,   862,
    29,    16,   194,   916,   196,   204,   319,    21,   706,    16,
   209,    25,   211,   967,    16,   182,   864,   225,    24,   967,
    26,   967,    16,   190,   223,   224,   225,   194,    34,   196,
    22,   180,   181,   225,   447,   184,   185,    25,   187,   716,
    28,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    18,     0,    22,    21,     3,    37,    38,   225,     7,
   439,   184,   185,   184,   185,   186,   443,   188,   189,   450,
    51,    52,   453,    24,    98,    26,   100,    22,   102,   460,
   104,   462,   495,   464,   465,   109,   467,    29,   184,   185,
   186,   472,   188,   189,   475,   119,    18,   121,    21,    21,
   475,   482,    25,   302,   967,   781,   305,   306,   307,   857,
   858,   849,   850,   494,    24,    39,   497,    27,   499,   967,
   319,   502,    40,   346,    34,    21,   325,    55,   424,    25,
   851,   852,   860,    18,    82,   861,    21,   450,    92,   163,
   453,   853,   854,   855,   856,    26,    92,    28,     5,   400,
   401,   402,    21,    49,    50,    19,    25,   204,   106,     5,
    22,   859,   209,    44,   211,    21,    21,     5,    25,    25,
    25,   370,    25,    26,   122,    28,   223,   224,    22,   378,
    21,   380,   926,   562,    25,   133,    24,    25,    26,    18,
   603,    44,    21,    49,    50,    21,    34,    18,   577,    25,
    21,   582,  1047,    18,   585,  1066,    21,    21,    24,   692,
    34,    25,   625,    67,    68,    69,   424,   598,   599,   967,
    26,    24,    28,    26,   605,   424,    22,    53,    54,   967,
   605,    34,   424,   456,    92,    49,    50,    24,    44,   967,
    27,   967,    19,   624,   443,    26,   967,    34,   629,   500,
   449,   450,    21,    34,   453,   967,    25,   424,   639,   640,
    34,    85,    20,   644,   463,   646,   465,   291,   467,   967,
    18,   295,    92,    21,   184,   185,   475,   187,    18,   478,
    24,    21,    26,   482,    21,    25,    27,   668,    25,   313,
    34,    24,   316,    26,    21,   676,    24,   678,    25,    18,
   324,   682,   683,   327,    49,    50,   687,    34,    35,    36,
   691,   692,    49,    50,   513,    21,   697,   692,   801,    25,
    24,    21,   697,   522,   523,    25,    23,   184,   185,   186,
  1007,   188,   189,    25,    26,   716,    28,    21,   184,   185,
   186,    25,   188,   189,    18,    21,   184,   185,   186,    25,
   188,   189,    44,   561,   302,    53,    54,   305,   306,   307,
   184,   185,   561,   562,   188,   189,    18,    18,   781,   561,
    21,   319,    21,    18,    25,   574,    25,   325,   577,   578,
    21,   184,   185,   186,    25,   188,   189,   190,    22,   612,
   771,     8,     9,    10,   561,    21,   443,   184,   185,    25,
   187,    25,   815,   184,   185,   186,   605,   188,   189,    21,
   184,   185,   186,    25,   188,   189,   119,    21,   121,   800,
   801,    25,   803,    21,   448,    25,   801,    25,    24,   132,
   133,   455,   135,    18,   137,   138,   460,   320,   462,  1115,
   184,   185,   186,    18,   188,   189,   470,   150,    18,    21,
   474,   650,   651,    25,    21,   654,    21,    21,    25,    18,
    25,    25,   661,   662,    18,   664,   717,   718,   719,   720,
   721,   722,    37,    38,    34,    35,    36,    24,   677,    26,
   679,    28,     9,    24,    21,    26,    51,    52,    25,   688,
    42,    43,   691,   692,   693,  1171,    24,    44,    26,    21,
    47,    48,   450,    25,    11,   453,    21,   706,   972,    19,
    25,   892,    34,    35,    36,   463,    21,   465,   899,   467,
    25,   138,    37,    38,    21,    20,    21,   475,    25,    18,
   478,    97,   996,    99,   482,    24,    51,    52,    21,    22,
    29,    30,    31,    32,    33,    34,    25,     5,    32,    33,
   773,    25,    26,   776,    28,   579,    24,    46,    47,    48,
    21,    34,    35,    36,    25,   182,    24,    25,    26,   768,
    44,    32,    33,   190,   522,   523,    34,   194,    21,   196,
   604,    70,    25,  1066,    21,    49,    50,   204,    25,    32,
    33,    24,   209,    21,   211,   846,   847,   848,    88,   623,
   981,    11,   801,   984,   628,    23,   223,   224,   225,    25,
    21,    24,   811,    26,    25,    28,    21,    53,    54,  1000,
    25,  1002,   111,    21,    21,  1000,  1007,    25,    25,  1010,
  1011,    44,   656,    21,    47,    48,    19,    25,  1017,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    20,
    21,    21,    72,    73,    74,    25,    19,   605,    78,    79,
    80,    81,    82,    83,    84,    19,  1047,    19,  1049,  1050,
   893,   984,   895,   896,   897,    24,    21,    21,    18,   930,
    25,    25,  1061,    21,    24,  1066,    88,  1000,    27,    29,
    30,    31,    32,    33,    34,   184,   185,   186,   187,   184,
   185,   186,  1115,   188,   189,   729,    46,    47,    48,     8,
    20,    21,    21,    72,    73,    74,    25,   600,  1131,    78,
    79,    80,    81,    82,    83,    84,    72,    73,    74,   677,
    70,   679,  1113,   126,    22,  1116,   935,   936,  1119,    21,
   688,    32,    33,   691,   692,    18,   139,   140,   141,   142,
   143,   144,    21,   146,   147,    21,    25,    21,  1171,   360,
    22,    25,    21,    22,   987,   789,   989,    24,   967,   184,
   185,   111,    72,    73,    74,   974,    78,    79,    80,    81,
    82,    83,    84,   384,    25,   984,    11,    24,   389,   390,
   391,   392,   393,   394,   395,   396,   397,   398,   399,   998,
    24,  1000,    24,  1116,  1003,    25,    27,   424,    51,    52,
    53,    23,    20,    19,    23,    20,    19,  1016,     5,   420,
    21,  1202,    20,    25,    24,    24,   443,  1026,  1027,  1028,
    27,    22,  1213,    25,    20,    18,  1035,   136,    27,   138,
    25,    18,    21,    25,   184,   185,   186,   187,  1047,    27,
    25,    25,    25,   801,    24,    39,    25,    29,    88,    40,
   884,   885,    55,   811,    25,    24,    18,  1066,   892,    25,
    25,    25,    25,    21,    18,    18,   177,  1076,  1077,  1078,
    21,   178,   177,   182,    18,   189,   178,    22,    21,    20,
    20,   190,   916,    88,    88,   194,    25,   196,    88,    25,
   183,  1100,  1101,  1102,  1103,   204,    24,  1106,  1107,    20,
    18,    73,   192,  1112,    23,    20,     0,  1116,    25,    25,
    88,    88,    88,    88,    27,    88,   225,    27,    88,    27,
    88,     0,    82,   325,   765,   887,  1135,   997,  1092,  1138,
  1025,   881,   913,  1142,   561,  1144,  1145,  1146,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,   982,  1161,
   998,  1112,  1161,  1162,  1163,  1164,   467,   830,  1116,   585,
   679,   801,   677,   366,   113,   691,    10,   224,   347,  1071,
   513,   706,  1181,   424,   967,    -1,    -1,   935,   936,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,     8,     9,    10,    -1,   400,   401,   402,
   403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
   413,   414,   415,    -1,    -1,   908,    -1,  1051,    -1,   328,
    -1,    -1,    -1,    -1,    -1,   636,   984,   336,   337,   338,
   339,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1000,    -1,   447,  1003,    -1,    -1,   357,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   368,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,
   681,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,
   370,   974,    -1,    -1,    -1,    -1,    -1,    -1,   378,  1047,
   380,    -1,   495,    -1,    -1,    -1,    -1,   500,    -1,    -1,
   993,    -1,    -1,    -1,    -1,   998,    -1,    -1,  1066,    -1,
    -1,    -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,
    -1,    -1,   431,   138,  1017,    -1,    -1,    -1,    -1,    -1,
  1023,    -1,    -1,    -1,    -1,  1169,    -1,    -1,    -1,  1032,
    -1,    -1,    -1,  1101,  1102,    -1,    -1,    -1,   551,    -1,
   553,    -1,   555,   556,    -1,    -1,    -1,    -1,  1116,   449,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,  1061,  1062,
    -1,  1064,    -1,   784,    -1,   190,   787,    -1,    -1,   194,
    -1,   196,    -1,     8,     9,    10,  1144,  1145,    -1,   204,
  1083,    -1,    -1,    -1,   209,    -1,   211,   138,    -1,    -1,
   603,     8,     9,    10,  1162,  1163,    -1,    -1,   223,   224,
   225,    -1,    -1,    -1,    -1,    -1,    -1,  1110,   829,   830,
    -1,    -1,   625,   513,   835,   836,   837,   838,   839,   840,
   841,   842,   843,   844,   845,    -1,    -1,    -1,    -1,  1132,
    -1,   182,    -1,   552,    -1,    -1,    -1,    -1,    -1,   190,
    -1,   654,   561,   194,    -1,   196,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   204,   205,    -1,    -1,    -1,   209,    -1,
   211,    -1,   562,  1166,    -1,    -1,    -1,    -1,   889,    -1,
    -1,    -1,   223,   224,   225,    -1,    -1,   577,   578,     8,
     9,    10,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   706,    -1,    -1,    -1,    -1,    -1,    -1,
   619,    -1,    -1,   138,   717,   718,   719,   720,   721,   722,
   723,   724,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   138,    -1,    -1,    -1,   644,    -1,   646,    -1,    -1,
    -1,    -1,    -1,   652,    -1,    -1,   655,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,
   650,   651,    -1,    -1,    -1,   190,    -1,    -1,    -1,   194,
    -1,   196,   662,    -1,    -1,   182,    -1,    -1,   781,   204,
    -1,   992,    -1,   190,   209,    -1,   211,   194,    -1,   196,
    -1,    -1,    -1,    -1,    -1,    -1,   705,   204,   223,   224,
   225,    -1,   209,   693,   211,    -1,    -1,   716,    -1,   424,
    -1,    -1,   815,    -1,    -1,    -1,   223,   224,   225,   138,
    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,   443,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   383,   846,   847,   848,   849,   850,   851,   852,
   853,   854,   855,   856,   857,   858,   859,   860,   861,   862,
    -1,   864,    -1,   182,    -1,    -1,   182,    -1,    -1,    -1,
    -1,   190,    -1,    -1,   190,   194,    -1,   196,   194,    -1,
   196,    -1,    -1,   424,    -1,   204,    19,    20,   204,    -1,
   209,    24,   211,   209,    -1,   211,    29,    30,    31,    32,
    33,    34,   443,    -1,   223,   224,   225,   223,   224,   225,
    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,   831,    -1,    -1,    -1,    -1,   930,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   561,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   967,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,   424,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,   920,    -1,    -1,    -1,    -1,    -1,   424,   443,    -1,
   561,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   443,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
    -1,   184,   185,   186,   187,    -1,   965,    -1,    -1,    -1,
    -1,    -1,     0,     1,    -1,    -1,    -1,    -1,    -1,    93,
    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,    -1,    -1,    24,   111,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   424,    -1,    45,   424,    -1,
    -1,    -1,  1115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   443,    -1,    -1,   443,  1131,    67,
    68,    69,    -1,    71,    -1,    -1,   561,    75,    76,    77,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    89,    90,    91,   561,    -1,    -1,    -1,    -1,    -1,
   184,   185,   186,   187,   188,   189,    -1,    -1,  1171,    -1,
   108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,     0,     1,
    -1,    -1,   561,    -1,    -1,   561,   184,   185,   186,    -1,
   188,   189,   190,    19,    -1,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    24,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    46,    47,    48,    45,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    70,    67,    68,    69,    -1,    71,
    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   111,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    -1,    -1,    -1,    -1,   184,   185,
   186,   187,   184,   185,   186,     1,   188,   189,   190,    -1,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    45,
    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
   186,   187,   188,   189,   190,     1,    -1,    -1,    -1,    -1,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
   186,   187,   188,   189,   190,     1,    -1,    -1,    -1,    -1,
     6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
   186,   187,   188,   189,   190,     1,    -1,    -1,    -1,    -1,
     6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    25,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,     1,    -1,
    46,    47,    48,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
    43,    -1,    -1,    46,    47,    48,    92,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    19,    -1,
    -1,   107,    -1,    24,    -1,   111,    -1,    70,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    92,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    70,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
   186,   187,   188,   189,    -1,    -1,     1,    -1,    -1,    -1,
   111,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
    -1,   184,   185,   186,   187,   188,   189,    42,    43,     1,
    -1,    46,    47,    48,     6,     7,     8,    -1,    -1,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
    -1,    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,
    32,    33,    34,   184,   185,   186,   187,    -1,    -1,    -1,
    42,    43,    -1,    -1,    46,    47,    48,    92,    93,    94,
    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,    -1,    24,    25,   111,    -1,    70,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
    92,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,
    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,
   185,   186,   187,   188,   189,    -1,    -1,     1,    -1,    -1,
    -1,   111,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,   184,   185,   186,   187,   188,   189,    42,    43,
     1,    -1,    46,    47,    48,     6,     7,     8,    -1,    -1,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,    29,    30,
    31,    32,    33,    34,   184,   185,   186,   187,    -1,    -1,
    -1,    42,    43,    -1,    -1,    46,    47,    48,    -1,    93,
    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,    -1,    24,    -1,   111,    27,    70,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
   111,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
    27,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
   184,   185,   186,   187,   188,   189,    -1,    -1,     1,    46,
    47,    48,   111,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    24,    -1,    70,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,   184,   185,   186,   187,   188,   189,    42,
    43,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   111,    -1,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,     6,     7,     8,   111,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,   184,   185,   186,
   187,    42,    43,    -1,    45,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,
   111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,   190,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    45,
    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
   186,   187,   188,   189,   190,     6,     7,     8,    -1,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    42,    43,    -1,    45,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,
   111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,   190,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    46,    47,    48,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,     6,     7,     8,   111,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,   184,   185,
   186,   187,   188,   189,    -1,    46,    47,    48,     6,     7,
     8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    70,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,   184,   185,   186,   187,   188,   189,    -1,    46,    47,
    48,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
   111,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
     6,     7,     8,   111,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,    -1,
    46,    47,    48,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,   184,   185,   186,   187,
   188,   189,    -1,    46,    47,    48,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,     6,     7,     8,   111,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
    -1,    18,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,   184,   185,
   186,   187,   188,   189,    -1,    46,    47,    48,    45,    -1,
    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    70,
    67,    68,    69,    -1,    71,    -1,    46,    47,    48,    -1,
    -1,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    70,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
   111,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,   111,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,    18,
    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,   186,
    -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   184,   185,   186,   187,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
   109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,    19,    -1,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,   186,    -1,    -1,
    -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    24,
    25,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,   111,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    19,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,   190,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,
   185,   186,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   186,   108,   109,   110,   190,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    22,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
   186,    -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
   190,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   184,   185,   186,    24,   188,   189,   190,    -1,
    29,    30,    31,    32,    33,    34,    24,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    46,    47,    48,
    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    46,    47,
    48,    29,    30,    31,    32,    33,    34,    24,    -1,    -1,
    -1,    70,    29,    30,    31,    32,    33,    34,    46,    47,
    48,    -1,    70,    -1,    -1,    -1,    -1,    24,    -1,    46,
    47,    48,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    46,
    47,    48,   111,    70,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,    42,
    43,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,
   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,
   187,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,
   113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
   123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
   133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,    45,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   186,    -1,    -1,    -1,   190,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    71,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    45,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,   190,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,
    -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,    67,    68,    69,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,   190,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    89,    90,    91,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,   190,    -1,
    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   186,   108,   109,   110,   190,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   186,    -1,    -1,    -1,   190
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/lib/bison.simple"
/* This file comes from bison-1.28.  */

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
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

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

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
     unsigned int count;
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
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/lib/bison.simple"

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

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

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
  int yyfree_stacks = 0;

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
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
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

case 5:
#line 277 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 6:
#line 278 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 7:
#line 279 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 8:
#line 280 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 9:
#line 281 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 10:
#line 282 "cgrammar.y"
{ uentry_checkDecl (); exprNode_free (yyvsp[0].expr); ;
    break;}
case 11:
#line 283 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 12:
#line 287 "cgrammar.y"
{ checkConstant (yyvsp[-6].qtyp, yyvsp[-4].ntyp); ;
    break;}
case 13:
#line 289 "cgrammar.y"
{ checkValueConstant (yyvsp[-9].qtyp, yyvsp[-7].ntyp, yyvsp[-3].expr) ; ;
    break;}
case 14:
#line 292 "cgrammar.y"
{ context_enterFunctionDecl (); ;
    break;}
case 15:
#line 293 "cgrammar.y"
{ declareStaticFunction (yyvsp[-2].ntyp); context_quietExitFunction (); 
     context_exitFunctionDecl (); ;
    break;}
case 16:
#line 298 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 17:
#line 304 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 19:
#line 309 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 20:
#line 312 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 21:
#line 314 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 22:
#line 316 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 23:
#line 318 "cgrammar.y"
{ 
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ctype_makeFixedArray (idDecl_getCtype (yyvsp[-5].ntyp), exprNode_getLongValue (yyvsp[-2].expr)));
   ;
    break;}
case 24:
#line 322 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 25:
#line 325 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 26:
#line 333 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 27:
#line 336 "cgrammar.y"
{ setImplictfcnConstraints ();
     clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-7].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-7].ntyp), yyvsp[-4].entrylist));
     context_popLoc (); 
   ;
    break;}
case 28:
#line 343 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 29:
#line 345 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 30:
#line 347 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 31:
#line 349 "cgrammar.y"
{ 
     int value;

     if (exprNode_hasValue (yyvsp[-2].expr) 
	 && multiVal_isInt (exprNode_getValue (yyvsp[-2].expr)))
       {
	 value = (int) multiVal_forceInt (exprNode_getValue (yyvsp[-2].expr));
       }
     else
       {
	 value = 0;
       }

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ctype_makeFixedArray (idDecl_getCtype (yyvsp[-5].ntyp), value));
   ;
    break;}
case 32:
#line 365 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 33:
#line 368 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 34:
#line 376 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 35:
#line 379 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 36:
#line 386 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); ;
    break;}
case 37:
#line 387 "cgrammar.y"
{ clearCurrentParams (); ;
    break;}
case 38:
#line 388 "cgrammar.y"
{ declareCIter (yyvsp[-8].cname, yyvsp[-6].entrylist); ;
    break;}
case 39:
#line 391 "cgrammar.y"
{ exprNode_checkMacroBody (yyvsp[-1].expr); ;
    break;}
case 40:
#line 392 "cgrammar.y"
{ exprNode_checkIterBody (yyvsp[-1].expr); ;
    break;}
case 41:
#line 393 "cgrammar.y"
{ exprNode_checkIterEnd (yyvsp[-1].expr); ;
    break;}
case 42:
#line 394 "cgrammar.y"
{ exprChecks_checkEmptyMacroBody (); ;
    break;}
case 43:
#line 397 "cgrammar.y"
{ declareFunction (yyvsp[0].ntyp); ;
    break;}
case 44:
#line 400 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 45:
#line 401 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 46:
#line 407 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 47:
#line 408 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 49:
#line 416 "cgrammar.y"
{
  DPRINTF ( ("doing optGlobEnsuresConstraintsAux\n") );
context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 

;
    break;}
case 50:
#line 422 "cgrammar.y"
{
  setEnsuresConstraints (yyvsp[-2].conL);
  exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
  DPRINTF (("done optGlobBufConstraintsAux\n"));;
    break;}
case 52:
#line 432 "cgrammar.y"
{
  DPRINTF ( ("doing optGlobBufConstraintsAux\n") );
context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 

;
    break;}
case 53:
#line 438 "cgrammar.y"
{
  setFunctionConstraints (yyvsp[-2].conL);
  exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
  DPRINTF (("done optGlobBufConstraintsAux\n"));;
    break;}
case 55:
#line 447 "cgrammar.y"
{ yyval.conL = constraintList_add (yyvsp[0].conL, yyvsp[-2].con); ;
    break;}
case 56:
#line 448 "cgrammar.y"
{constraintList c; c = constraintList_makeNew(); c = constraintList_add (c, yyvsp[0].con); yyval.conL = c;
    break;}
case 57:
#line 451 "cgrammar.y"
{
 yyval.con = makeConstraintParse3 (yyvsp[-2].conE, yyvsp[-1].tok, yyvsp[0].conE);
 DPRINTF(("Done BufConstraint1\n")); ;
    break;}
case 64:
#line 466 "cgrammar.y"
{yyval.conE = constraintExpr_parseMakeUnaryOp (yyvsp[-3].tok, yyvsp[-1].conE);  DPRINTF( ("Got BufConstraintExpr UNary Op ") ); ;
    break;}
case 65:
#line 467 "cgrammar.y"
{
   DPRINTF( ("Got BufConstraintExpr BINary Op ") );
   yyval.conE = constraintExpr_parseMakeBinaryOp (yyvsp[-3].conE, yyvsp[-2].tok, yyvsp[-1].conE); ;
    break;}
case 66:
#line 472 "cgrammar.y"
{ yyval.conE =  constraintExpr_makeTermsRef(yyvsp[0].sr);;
    break;}
case 67:
#line 473 "cgrammar.y"
{  char *t; int c;
  t =  cstring_toCharsSafe (exprNode_unparse(yyvsp[0].expr));
  c = atoi( t );
  yyval.conE = constraintExpr_makeIntLiteral (c);
;
    break;}
case 68:
#line 481 "cgrammar.y"
{
   yyval.sr =
     checkbufferConstraintClausesId (yyvsp[0].entry);;
    break;}
case 69:
#line 484 "cgrammar.y"
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 70:
#line 486 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 71:
#line 487 "cgrammar.y"
{
     char *t; int c;
  t =  cstring_toCharsSafe (exprNode_unparse(yyvsp[-1].expr));
  c = atoi( t );
   yyval.sr = sRef_makeArrayFetchKnown(yyvsp[-3].sr, c); ;
    break;}
case 72:
#line 492 "cgrammar.y"
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 73:
#line 493 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 74:
#line 494 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 75:
#line 496 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 79:
#line 522 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 80:
#line 523 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 81:
#line 533 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 82:
#line 534 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 89:
#line 549 "cgrammar.y"
{ ; ;
    break;}
case 90:
#line 550 "cgrammar.y"
{ ; ;
    break;}
case 91:
#line 553 "cgrammar.y"
{ globListAdd (yyvsp[0].sr, yyvsp[-1].tquallist); ;
    break;}
case 92:
#line 556 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); ;
    break;}
case 93:
#line 557 "cgrammar.y"
{ yyval.sr = globListUnrecognized (yyvsp[0].cname); ;
    break;}
case 94:
#line 560 "cgrammar.y"
{ yyval.typequal = qual_createUndef (); ;
    break;}
case 95:
#line 561 "cgrammar.y"
{ yyval.typequal = qual_createKilled (); ;
    break;}
case 96:
#line 562 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 97:
#line 563 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 98:
#line 564 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 99:
#line 567 "cgrammar.y"
{ yyval.tquallist = qualList_undefined; ;
    break;}
case 100:
#line 568 "cgrammar.y"
{ yyval.tquallist = qualList_add (yyvsp[0].tquallist, yyvsp[-1].typequal); ;
    break;}
case 101:
#line 571 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 102:
#line 573 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 103:
#line 574 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 104:
#line 576 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 105:
#line 578 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 108:
#line 585 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 109:
#line 587 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 110:
#line 588 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 111:
#line 590 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 112:
#line 592 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 117:
#line 604 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 118:
#line 609 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 119:
#line 617 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 120:
#line 622 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 130:
#line 646 "cgrammar.y"
{ yyval.sck = SP_ISONLY; ;
    break;}
case 131:
#line 647 "cgrammar.y"
{ yyval.sck = SP_ISOBSERVER; ;
    break;}
case 132:
#line 648 "cgrammar.y"
{ yyval.sck = SP_ISEXPOSED; ;
    break;}
case 133:
#line 649 "cgrammar.y"
{ yyval.sck = SP_ISDEPENDENT; ;
    break;}
case 134:
#line 650 "cgrammar.y"
{ yyval.sck = SP_ISOWNED; ;
    break;}
case 135:
#line 651 "cgrammar.y"
{ yyval.sck = SP_ISSHARED; ;
    break;}
case 136:
#line 652 "cgrammar.y"
{ yyval.sck = SP_ISNULL; ;
    break;}
case 137:
#line 653 "cgrammar.y"
{ yyval.sck = SP_ISNOTNULL; ;
    break;}
case 138:
#line 657 "cgrammar.y"
{
     context_setProtectVars (); 
     enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 139:
#line 663 "cgrammar.y"
{ 
     setFunctionSpecialClause (yyvsp[-6].tok, yyvsp[-3].srset, yyvsp[-1].tok); 
     exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 140:
#line 670 "cgrammar.y"
{
      context_setProtectVars (); 
      enterParamsTemp (); 
      sRef_setGlobalScopeSafe (); 
    ;
    break;}
case 141:
#line 676 "cgrammar.y"
{ 
      setFunctionStateSpecialClause (yyvsp[-7].tok, yyvsp[-5].sck, yyvsp[-3].srset, yyvsp[-1].tok); 
      exitParamsTemp ();
      sRef_clearGlobalScopeSafe (); 
      context_releaseVars ();
    ;
    break;}
case 142:
#line 685 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 143:
#line 691 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 144:
#line 694 "cgrammar.y"
{ checkDoneParams (); context_enterInnerContext (); ;
    break;}
case 145:
#line 696 "cgrammar.y"
{  
     exprNode_checkFunctionBody (yyvsp[0].expr); yyval.expr = yyvsp[0].expr; 
     context_exitInner (yyvsp[0].expr); 
   ;
    break;}
case 146:
#line 701 "cgrammar.y"
{ doneParams (); context_enterInnerContext (); ;
    break;}
case 147:
#line 703 "cgrammar.y"
{
     context_exitInner (yyvsp[0].expr);
     exprNode_checkFunctionBody (yyvsp[0].expr); 
     yyval.expr = yyvsp[0].expr; /* old style */ 
   ;
    break;}
case 148:
#line 711 "cgrammar.y"
{ 
     context_setFunctionDefined (exprNode_loc (yyvsp[0].expr)); 
     exprNode_checkFunction (context_getHeader (), yyvsp[0].expr); 
     /* DRL 8 8 2000 */
     
     context_exitFunction ();
   ;
    break;}
case 149:
#line 720 "cgrammar.y"
{ yyval.srset = yyvsp[-2].srset; ;
    break;}
case 150:
#line 721 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 151:
#line 724 "cgrammar.y"
{ yyval.srset = yyvsp[-1].srset; ;
    break;}
case 152:
#line 725 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 153:
#line 728 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); checkModifiesId (yyvsp[0].entry); ;
    break;}
case 154:
#line 729 "cgrammar.y"
{ yyval.sr = fixModifiesId (yyvsp[0].cname); ;
    break;}
case 155:
#line 730 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-2].sr, sRef_undefined); ;
    break;}
case 156:
#line 731 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-3].sr, yyvsp[-1].sr); ;
    break;}
case 157:
#line 732 "cgrammar.y"
{ yyval.sr = modListPointer (yyvsp[0].sr); ;
    break;}
case 158:
#line 733 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 159:
#line 734 "cgrammar.y"
{ yyval.sr = modListFieldAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 160:
#line 735 "cgrammar.y"
{ yyval.sr = modListArrowAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 161:
#line 739 "cgrammar.y"
{ yyval.sr = yyvsp[0].sr; ;
    break;}
case 162:
#line 740 "cgrammar.y"
{ yyval.sr = sRef_makeUnknown (); /* sRef_makeConstant ($1); ? */ ;
    break;}
case 163:
#line 744 "cgrammar.y"
{ yyval.srset = sRefSet_single (yyvsp[0].sr); ;
    break;}
case 164:
#line 745 "cgrammar.y"
{ yyval.srset = sRefSet_insert (yyvsp[-2].srset, yyvsp[0].sr); ;
    break;}
case 165:
#line 749 "cgrammar.y"
{ yyval.sr = checkSpecClausesId (yyvsp[0].entry); ;
    break;}
case 166:
#line 751 "cgrammar.y"
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 167:
#line 752 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 168:
#line 753 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-3].sr); ;
    break;}
case 169:
#line 754 "cgrammar.y"
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 170:
#line 755 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 171:
#line 756 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 172:
#line 758 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 173:
#line 763 "cgrammar.y"
{ if (sRef_isValid (yyvsp[0].sr)) { yyval.srset = sRefSet_single (yyvsp[0].sr); } 
      else { yyval.srset = sRefSet_undefined; } 
    ;
    break;}
case 174:
#line 767 "cgrammar.y"
{ if (sRef_isValid (yyvsp[0].sr))
	{
	  yyval.srset = sRefSet_insert (yyvsp[-2].srset, yyvsp[0].sr); 
	}
      else
	{
	  yyval.srset = yyvsp[-2].srset;
	}
    ;
    break;}
case 175:
#line 778 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (yyvsp[0].entry); ;
    break;}
case 176:
#line 779 "cgrammar.y"
{ yyval.expr = exprNode_fromUIO (yyvsp[0].cname); ;
    break;}
case 177:
#line 780 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 178:
#line 781 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 179:
#line 782 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (coerceId (yyvsp[0].cname)); ;
    break;}
case 180:
#line 783 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 182:
#line 787 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 183:
#line 788 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 184:
#line 789 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 185:
#line 790 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 186:
#line 791 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 187:
#line 792 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 188:
#line 793 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 189:
#line 794 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 190:
#line 797 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 191:
#line 798 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 193:
#line 802 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 194:
#line 803 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 195:
#line 804 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 196:
#line 805 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 197:
#line 806 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 198:
#line 807 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 199:
#line 808 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 200:
#line 809 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 201:
#line 810 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 202:
#line 811 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 203:
#line 814 "cgrammar.y"
{ yyval.cstringlist = cstringList_add (yyvsp[-2].cstringlist, yyvsp[0].cname); ;
    break;}
case 204:
#line 815 "cgrammar.y"
{ yyval.cstringlist = cstringList_single (yyvsp[0].cname); ;
    break;}
case 205:
#line 819 "cgrammar.y"
{ yyval.expr = exprNode_offsetof (yyvsp[-5].qtyp, yyvsp[-2].cstringlist); ;
    break;}
case 206:
#line 822 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 207:
#line 823 "cgrammar.y"
{ context_sizeofReleaseVars (); yyval.expr = yyvsp[0].expr; ;
    break;}
case 208:
#line 826 "cgrammar.y"
{ yyval.expr = exprNode_sizeofType (yyvsp[-1].qtyp); ;
    break;}
case 209:
#line 827 "cgrammar.y"
{ yyval.expr = exprNode_sizeofExpr (yyvsp[0].expr); ;
    break;}
case 210:
#line 828 "cgrammar.y"
{ yyval.expr = exprNode_alignofType (yyvsp[-1].qtyp); ;
    break;}
case 211:
#line 829 "cgrammar.y"
{ yyval.expr = exprNode_alignofExpr (yyvsp[0].expr); ;
    break;}
case 213:
#line 834 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 215:
#line 838 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 216:
#line 839 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 217:
#line 840 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 219:
#line 844 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 220:
#line 845 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 222:
#line 849 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 223:
#line 850 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 225:
#line 854 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 226:
#line 855 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 227:
#line 856 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 228:
#line 857 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 230:
#line 861 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 231:
#line 862 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 233:
#line 866 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 235:
#line 870 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 237:
#line 875 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 239:
#line 880 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); 
     context_enterAndClause (yyvsp[-1].expr); 
   ;
    break;}
case 240:
#line 884 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitAndClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 242:
#line 892 "cgrammar.y"
{ 
     exprNode_produceGuards (yyvsp[-1].expr);
     context_enterOrClause (yyvsp[-1].expr); 
   ;
    break;}
case 243:
#line 897 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitOrClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 245:
#line 904 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 246:
#line 905 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 247:
#line 906 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); context_exitClause (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 249:
#line 910 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 250:
#line 911 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 251:
#line 912 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 252:
#line 913 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 253:
#line 914 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 254:
#line 915 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 255:
#line 916 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 256:
#line 917 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 257:
#line 918 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 258:
#line 919 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 259:
#line 920 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 261:
#line 924 "cgrammar.y"
{ yyval.expr = exprNode_comma (yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 262:
#line 927 "cgrammar.y"
{ yyval.expr = exprNode_undefined; ;
    break;}
case 265:
#line 936 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 266:
#line 937 "cgrammar.y"
{ doVaDcl (); yyval.expr = exprNode_makeError (); ;
    break;}
case 267:
#line 938 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 268:
#line 941 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 269:
#line 955 "cgrammar.y"
{
               setProcessingVars (yyvsp[-3].qtyp); 
     processNamedDecl (yyvsp[-1].ntyp); ;
    break;}
case 270:
#line 958 "cgrammar.y"
{ unsetProcessingVars (); yyval.expr = yyvsp[-2].expr; ;
    break;}
case 271:
#line 960 "cgrammar.y"
{ setProcessingVars (yyvsp[-4].qtyp); processNamedDecl (yyvsp[-2].ntyp); 
        ;
    break;}
case 272:
#line 963 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-2].expr, exprNode_makeInitialization (yyvsp[-8].ntyp, yyvsp[-3].expr)); 
     unsetProcessingVars ();
   ;
    break;}
case 273:
#line 967 "cgrammar.y"
{ processNamedDecl (yyvsp[-1].ntyp); yyval.expr = exprNode_makeError (); ;
    break;}
case 274:
#line 968 "cgrammar.y"
{ processNamedDecl (yyvsp[-2].ntyp); ;
    break;}
case 275:
#line 969 "cgrammar.y"
{ yyval.expr = exprNode_makeInitialization (yyvsp[-5].ntyp, yyvsp[0].expr); ;
    break;}
case 276:
#line 973 "cgrammar.y"
{ setProcessingTypedef (yyvsp[0].qtyp); ;
    break;}
case 277:
#line 974 "cgrammar.y"
{ unsetProcessingTypedef (); ;
    break;}
case 278:
#line 975 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 279:
#line 976 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 280:
#line 979 "cgrammar.y"
{ g_expectingTypeName = TRUE; ;
    break;}
case 281:
#line 982 "cgrammar.y"
{ g_expectingTypeName = TRUE; context_pushLoc (); ;
    break;}
case 282:
#line 985 "cgrammar.y"
{ ; ;
    break;}
case 283:
#line 988 "cgrammar.y"
{ ; ;
    break;}
case 284:
#line 989 "cgrammar.y"
{ ; ;
    break;}
case 285:
#line 992 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 286:
#line 993 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 287:
#line 996 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 288:
#line 997 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-2].tok, yyvsp[-1].alist); ;
    break;}
case 289:
#line 998 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-3].tok, yyvsp[-2].alist); ;
    break;}
case 290:
#line 1003 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 291:
#line 1005 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 292:
#line 1013 "cgrammar.y"
{ setStorageClass (SCEXTERN); yyval.typequal = qual_createExtern (); ;
    break;}
case 293:
#line 1014 "cgrammar.y"
{ yyval.typequal = qual_createInline (); ;
    break;}
case 294:
#line 1015 "cgrammar.y"
{ setStorageClass (SCSTATIC); yyval.typequal = qual_createStatic (); ;
    break;}
case 295:
#line 1016 "cgrammar.y"
{ yyval.typequal = qual_createAuto (); ;
    break;}
case 296:
#line 1017 "cgrammar.y"
{ yyval.typequal = qual_createRegister (); ;
    break;}
case 297:
#line 1020 "cgrammar.y"
{ yyval.typequal = qual_createConst (); ;
    break;}
case 298:
#line 1021 "cgrammar.y"
{ yyval.typequal = qual_createVolatile (); ;
    break;}
case 299:
#line 1022 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 300:
#line 1023 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 301:
#line 1024 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 302:
#line 1025 "cgrammar.y"
{ yyval.typequal = qual_createSpecial (); ;
    break;}
case 303:
#line 1026 "cgrammar.y"
{ yyval.typequal = qual_createOwned (); ;
    break;}
case 304:
#line 1027 "cgrammar.y"
{ yyval.typequal = qual_createDependent (); ;
    break;}
case 305:
#line 1028 "cgrammar.y"
{ yyval.typequal = qual_createYield (); ;
    break;}
case 306:
#line 1029 "cgrammar.y"
{ yyval.typequal = qual_createTemp (); ;
    break;}
case 307:
#line 1030 "cgrammar.y"
{ yyval.typequal = qual_createOnly (); ;
    break;}
case 308:
#line 1031 "cgrammar.y"
{ yyval.typequal = qual_createKeep (); ;
    break;}
case 309:
#line 1032 "cgrammar.y"
{ yyval.typequal = qual_createKept (); ;
    break;}
case 310:
#line 1033 "cgrammar.y"
{ yyval.typequal = qual_createShared (); ;
    break;}
case 311:
#line 1034 "cgrammar.y"
{ yyval.typequal = qual_createUnique (); ;
    break;}
case 312:
#line 1035 "cgrammar.y"
{ yyval.typequal = qual_createExits (); ;
    break;}
case 313:
#line 1036 "cgrammar.y"
{ yyval.typequal = qual_createMayExit (); ;
    break;}
case 314:
#line 1037 "cgrammar.y"
{ yyval.typequal = qual_createTrueExit (); ;
    break;}
case 315:
#line 1038 "cgrammar.y"
{ yyval.typequal = qual_createFalseExit (); ;
    break;}
case 316:
#line 1039 "cgrammar.y"
{ yyval.typequal = qual_createNeverExit (); ;
    break;}
case 317:
#line 1040 "cgrammar.y"
{ yyval.typequal = qual_createNull (); ;
    break;}
case 318:
#line 1041 "cgrammar.y"
{ yyval.typequal = qual_createRelNull (); ;
    break;}
case 319:
#line 1042 "cgrammar.y"
{ yyval.typequal = qual_createReturned (); ;
    break;}
case 320:
#line 1043 "cgrammar.y"
{ yyval.typequal = qual_createExposed (); ;
    break;}
case 321:
#line 1044 "cgrammar.y"
{ yyval.typequal = qual_createObserver (); ;
    break;}
case 322:
#line 1045 "cgrammar.y"
{ yyval.typequal = qual_createChecked (); ;
    break;}
case 323:
#line 1046 "cgrammar.y"
{ yyval.typequal = qual_createCheckMod (); ;
    break;}
case 324:
#line 1047 "cgrammar.y"
{ yyval.typequal = qual_createUnchecked (); ;
    break;}
case 325:
#line 1048 "cgrammar.y"
{ yyval.typequal = qual_createCheckedStrict (); ;
    break;}
case 326:
#line 1049 "cgrammar.y"
{ yyval.typequal = qual_createTrueNull (); ;
    break;}
case 327:
#line 1050 "cgrammar.y"
{ yyval.typequal = qual_createFalseNull (); ;
    break;}
case 328:
#line 1051 "cgrammar.y"
{ yyval.typequal = qual_createUnused (); ;
    break;}
case 329:
#line 1052 "cgrammar.y"
{ yyval.typequal = qual_createExternal (); ;
    break;}
case 330:
#line 1053 "cgrammar.y"
{ yyval.typequal = qual_createSef (); ;
    break;}
case 331:
#line 1054 "cgrammar.y"
{ yyval.typequal = qual_createAbstract (); ;
    break;}
case 332:
#line 1055 "cgrammar.y"
{ yyval.typequal = qual_createConcrete (); ;
    break;}
case 333:
#line 1056 "cgrammar.y"
{ yyval.typequal = qual_createMutable (); ;
    break;}
case 334:
#line 1057 "cgrammar.y"
{ yyval.typequal = qual_createImmutable (); ;
    break;}
case 335:
#line 1058 "cgrammar.y"
{ yyval.typequal = qual_createNotNull (); ;
    break;}
case 336:
#line 1059 "cgrammar.y"
{ yyval.typequal = qual_createRefCounted (); ;
    break;}
case 337:
#line 1060 "cgrammar.y"
{ yyval.typequal = qual_createRefs (); ;
    break;}
case 338:
#line 1061 "cgrammar.y"
{ yyval.typequal = qual_createKillRef (); ;
    break;}
case 339:
#line 1062 "cgrammar.y"
{ yyval.typequal = qual_createRelDef (); ;
    break;}
case 340:
#line 1063 "cgrammar.y"
{ yyval.typequal = qual_createNewRef (); ;
    break;}
case 341:
#line 1064 "cgrammar.y"
{ yyval.typequal = qual_createTempRef (); ;
    break;}
case 342:
#line 1065 "cgrammar.y"
{ yyval.typequal = qual_createNullTerminated (); ;
    break;}
case 343:
#line 1071 "cgrammar.y"
{ yyval.typequal = qual_createShort (); ;
    break;}
case 344:
#line 1072 "cgrammar.y"
{ yyval.typequal = qual_createLong (); ;
    break;}
case 345:
#line 1073 "cgrammar.y"
{ yyval.typequal = qual_createSigned (); ;
    break;}
case 346:
#line 1074 "cgrammar.y"
{ yyval.typequal = qual_createUnsigned (); ;
    break;}
case 353:
#line 1083 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 354:
#line 1084 "cgrammar.y"
{ yyval.ctyp = ctype_anyintegral; ;
    break;}
case 355:
#line 1085 "cgrammar.y"
{ yyval.ctyp = ctype_unsignedintegral; ;
    break;}
case 356:
#line 1086 "cgrammar.y"
{ yyval.ctyp = ctype_signedintegral; ;
    break;}
case 360:
#line 1090 "cgrammar.y"
{ yyval.ctyp = ctype_fromQual (yyvsp[-1].typequal); ;
    break;}
case 361:
#line 1094 "cgrammar.y"
{ yyval.qtyp = qtype_resolve (yyvsp[-1].qtyp); ;
    break;}
case 362:
#line 1097 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 363:
#line 1099 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-3].qtyp, yyvsp[-1].qtyp); ;
    break;}
case 365:
#line 1104 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-2].qtyp, yyvsp[0].qtyp); ;
    break;}
case 366:
#line 1107 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 367:
#line 1108 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 368:
#line 1109 "cgrammar.y"
{ yyval.qtyp = qtype_combine (yyvsp[0].qtyp, yyvsp[-1].ctyp); ;
    break;}
case 369:
#line 1112 "cgrammar.y"
{ yyval.qtyp = qtype_unknown (); ;
    break;}
case 370:
#line 1113 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 371:
#line 1116 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 372:
#line 1118 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 373:
#line 1120 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 374:
#line 1121 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 375:
#line 1123 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 376:
#line 1125 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 377:
#line 1127 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 378:
#line 1129 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 379:
#line 1130 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 380:
#line 1132 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 381:
#line 1134 "cgrammar.y"
{ yyval.ctyp = declareUnnamedStruct (yyvsp[-3].flist); ;
    break;}
case 382:
#line 1135 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 383:
#line 1137 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 384:
#line 1139 "cgrammar.y"
{ yyval.ctyp = declareUnnamedUnion (yyvsp[-3].flist); ;
    break;}
case 385:
#line 1141 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedStruct (uentryList_new ()); ;
    break;}
case 386:
#line 1143 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedUnion (uentryList_new ()); ;
    break;}
case 387:
#line 1144 "cgrammar.y"
{ yyval.ctyp = handleStruct (yyvsp[-1].cname); ;
    break;}
case 388:
#line 1145 "cgrammar.y"
{ yyval.ctyp = handleUnion (yyvsp[-1].cname); ;
    break;}
case 389:
#line 1148 "cgrammar.y"
{ g_expectingTypeName = FALSE; ;
    break;}
case 391:
#line 1152 "cgrammar.y"
{ yyval.flist = uentryList_undefined; /* bogus! */ ;
    break;}
case 392:
#line 1153 "cgrammar.y"
{ yyval.flist = uentryList_mergeFields (yyvsp[-1].flist, yyvsp[0].flist); ;
    break;}
case 393:
#line 1157 "cgrammar.y"
{ yyval.flist = fixUentryList (yyvsp[-2].ntyplist, yyvsp[-4].qtyp); ;
    break;}
case 394:
#line 1159 "cgrammar.y"
{ yyval.flist = fixUnnamedDecl (yyvsp[-2].qtyp); ;
    break;}
case 395:
#line 1163 "cgrammar.y"
{ yyval.ntyplist = idDeclList_singleton (yyvsp[-1].ntyp); ;
    break;}
case 396:
#line 1165 "cgrammar.y"
{ yyval.ntyplist = idDeclList_add (yyvsp[-3].ntyplist, yyvsp[-1].ntyp); ;
    break;}
case 397:
#line 1168 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; ;
    break;}
case 398:
#line 1169 "cgrammar.y"
{ yyval.ntyp = idDecl_undefined; ;
    break;}
case 399:
#line 1170 "cgrammar.y"
{ yyval.ntyp = yyvsp[-3].ntyp; ;
    break;}
case 400:
#line 1175 "cgrammar.y"
{ yyval.ctyp = declareUnnamedEnum (yyvsp[-2].enumnamelist); ;
    break;}
case 401:
#line 1176 "cgrammar.y"
{ context_pushLoc (); ;
    break;}
case 402:
#line 1177 "cgrammar.y"
{ context_popLoc (); yyval.ctyp = declareEnum (yyvsp[-5].cname, yyvsp[-2].enumnamelist); ;
    break;}
case 403:
#line 1178 "cgrammar.y"
{ yyval.ctyp = handleEnum (yyvsp[-1].cname); ;
    break;}
case 404:
#line 1182 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_single (yyvsp[0].cname); ;
    break;}
case 405:
#line 1184 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_push (yyvsp[-2].enumnamelist, yyvsp[0].cname); ;
    break;}
case 407:
#line 1189 "cgrammar.y"
{ uentry ue = uentry_makeEnumConstant (yyvsp[0].cname, ctype_unknown);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[0].cname;
   ;
    break;}
case 408:
#line 1194 "cgrammar.y"
{ uentry ue = uentry_makeEnumInitializedConstant (yyvsp[-3].cname, ctype_unknown, yyvsp[0].expr);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[-3].cname; 
   ;
    break;}
case 410:
#line 1201 "cgrammar.y"
{ yyval.ntyp = idDecl_create (cstring_undefined, qtype_create (yyvsp[0].ctyp)); ;
    break;}
case 411:
#line 1203 "cgrammar.y"
{ 
     qtype qt = qtype_unknown ();

     qtype_adjustPointers (yyvsp[-1].count, qt);
     yyval.ntyp = idDecl_create (cstring_copy (LastIdentifier ()), qt);
   ;
    break;}
case 412:
#line 1210 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 414:
#line 1215 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 415:
#line 1218 "cgrammar.y"
{ yyval.entrylist = handleParamTypeList (yyvsp[0].entrylist); ;
    break;}
case 416:
#line 1219 "cgrammar.y"
{ yyval.entrylist = handleParamIdList (yyvsp[0].entrylist); ;
    break;}
case 417:
#line 1222 "cgrammar.y"
{ /* ignored for now */; ;
    break;}
case 418:
#line 1223 "cgrammar.y"
{ ; ;
    break;}
case 419:
#line 1226 "cgrammar.y"
{ ; ;
    break;}
case 420:
#line 1227 "cgrammar.y"
{ ; ;
    break;}
case 421:
#line 1230 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 422:
#line 1231 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 423:
#line 1232 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 424:
#line 1233 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 426:
#line 1237 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 427:
#line 1240 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 428:
#line 1241 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 429:
#line 1244 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeElipsisMarker ()); ;
    break;}
case 431:
#line 1246 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 432:
#line 1249 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 433:
#line 1249 "cgrammar.y"
{ yyval.entrylist = uentryList_single (yyvsp[0].oentry); ;
    break;}
case 434:
#line 1250 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 435:
#line 1251 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-3].entrylist, yyvsp[0].oentry); ;
    break;}
case 436:
#line 1255 "cgrammar.y"
{ 
     if (isFlipOldStyle ()) 
       { 
	 llparseerror (cstring_makeLiteral ("Inconsistent function parameter syntax (mixing old and new style declaration)")); 
       }
     else 
       { 
	 setNewStyle (); 
       }
     yyval.oentry = makeCurrentParam (idDecl_fixParamBase (yyvsp[-1].ntyp, yyvsp[-2].qtyp)); 
   ;
    break;}
case 437:
#line 1267 "cgrammar.y"
{ 
     idDecl tparam = idDecl_create (yyvsp[0].cname, qtype_unknown ());

     if (isNewStyle ()) 
       {
	 llparseerror (message ("Inconsistent function parameter syntax: %q",
				idDecl_unparse (tparam))); 
       }

     setFlipOldStyle ();
     yyval.oentry = makeCurrentParam (tparam);
     idDecl_free (tparam);
   ;
    break;}
case 439:
#line 1283 "cgrammar.y"
{ yyval.qtyp = qtype_newBase (yyvsp[-1].qtyp, yyvsp[0].ctyp); ;
    break;}
case 440:
#line 1286 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[0].count, ctype_unknown); ;
    break;}
case 442:
#line 1288 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[-1].count, yyvsp[0].ctyp); ;
    break;}
case 443:
#line 1291 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 445:
#line 1296 "cgrammar.y"
{ yyval.ctyp = ctype_expectFunction (yyvsp[-1].ctyp); ;
    break;}
case 446:
#line 1297 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 447:
#line 1299 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (ctype_unknown, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 448:
#line 1300 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (yyvsp[-2].ctyp); ;
    break;}
case 449:
#line 1302 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (yyvsp[-3].ctyp, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 450:
#line 1304 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (ctype_unknown, uentryList_makeMissingParams ()); ;
    break;}
case 451:
#line 1306 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (ctype_unknown, yyvsp[-1].entrylist); ;
    break;}
case 452:
#line 1308 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (yyvsp[-3].ctyp, uentryList_makeMissingParams ()); ;
    break;}
case 453:
#line 1310 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (yyvsp[-4].ctyp, yyvsp[-1].entrylist); ;
    break;}
case 463:
#line 1338 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[0].cname); ;
    break;}
case 464:
#line 1343 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 467:
#line 1351 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 468:
#line 1355 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 469:
#line 1357 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr); ;
    break;}
case 470:
#line 1359 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 471:
#line 1361 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 472:
#line 1365 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 473:
#line 1365 "cgrammar.y"
{ context_sizeofReleaseVars (); ;
    break;}
case 474:
#line 1367 "cgrammar.y"
{ yyval.expr = exprNode_forPred (yyvsp[-7].expr, yyvsp[-5].expr, yyvsp[-2].expr); 
     context_enterForClause (yyvsp[-5].expr); ;
    break;}
case 475:
#line 1372 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-2].entry); ;
    break;}
case 476:
#line 1374 "cgrammar.y"
{ yyval.expr = exprNode_iterStart (yyvsp[-5].entry, yyvsp[-1].alist); ;
    break;}
case 477:
#line 1375 "cgrammar.y"
{ yyval.expr = exprNode_createId (yyvsp[0].entry); ;
    break;}
case 481:
#line 1381 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 489:
#line 1389 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 490:
#line 1390 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 491:
#line 1394 "cgrammar.y"
{ /* don't: context_exitTrueClause ($1, $2); */
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 492:
#line 1399 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 493:
#line 1402 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 504:
#line 1417 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 506:
#line 1419 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 507:
#line 1422 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[-1].cname); ;
    break;}
case 508:
#line 1423 "cgrammar.y"
{ yyval.expr = exprNode_notReached (yyvsp[0].expr); ;
    break;}
case 509:
#line 1429 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 510:
#line 1430 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, FALSE); ;
    break;}
case 511:
#line 1431 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 512:
#line 1432 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, TRUE); ;
    break;}
case 513:
#line 1435 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 514:
#line 1436 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, FALSE); ;
    break;}
case 515:
#line 1437 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 516:
#line 1438 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, TRUE); ;
    break;}
case 517:
#line 1441 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 518:
#line 1443 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; context_exitInner (yyvsp[0].expr); ;
    break;}
case 519:
#line 1446 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 520:
#line 1449 "cgrammar.y"
{ context_enterInnerContext (); ;
    break;}
case 521:
#line 1452 "cgrammar.y"
{ context_exitInnerPlain (); ;
    break;}
case 522:
#line 1455 "cgrammar.y"
{ context_enterStructInnerContext (); ;
    break;}
case 523:
#line 1458 "cgrammar.y"
{ context_exitStructInnerContext (); ;
    break;}
case 524:
#line 1461 "cgrammar.y"
{ context_exitInnerSafe (); ;
    break;}
case 525:
#line 1464 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 526:
#line 1465 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_createTok (yyvsp[0].tok)); ;
    break;}
case 527:
#line 1466 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 528:
#line 1468 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 529:
#line 1469 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 530:
#line 1471 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 531:
#line 1473 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 532:
#line 1475 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (exprNode_concat (yyvsp[-3].expr, yyvsp[-2].expr), 
							lltok_getLoc (yyvsp[-1].tok))); 
   ;
    break;}
case 533:
#line 1482 "cgrammar.y"
{ yyval.expr = exprNode_makeBlock (yyvsp[0].expr); ;
    break;}
case 534:
#line 1486 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 535:
#line 1488 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 536:
#line 1490 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 537:
#line 1492 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 539:
#line 1496 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 540:
#line 1499 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 541:
#line 1500 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 542:
#line 1503 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 543:
#line 1504 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 544:
#line 1507 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 545:
#line 1508 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 546:
#line 1511 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 547:
#line 1512 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 548:
#line 1513 "cgrammar.y"
{ yyval.expr = exprNode_checkExpr (yyvsp[0].expr); ;
    break;}
case 549:
#line 1517 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 550:
#line 1525 "cgrammar.y"
{ 
     context_exitTrueClause (yyvsp[-1].expr, yyvsp[0].expr);
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 551:
#line 1529 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-2].expr); ;
    break;}
case 552:
#line 1530 "cgrammar.y"
{
     context_exitClause (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr);
     yyval.expr = exprNode_ifelse (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr); 
   ;
    break;}
case 553:
#line 1534 "cgrammar.y"
{ context_enterSwitch (yyvsp[0].expr); ;
    break;}
case 554:
#line 1535 "cgrammar.y"
{ yyval.expr = exprNode_switch (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 555:
#line 1539 "cgrammar.y"
{ yyval.expr = exprNode_whilePred (yyvsp[-1].expr); context_enterWhileClause (yyvsp[-1].expr); ;
    break;}
case 556:
#line 1543 "cgrammar.y"
{ yyval.expr = exprNode_whilePred(yyvsp[-1].expr); ;
    break;}
case 557:
#line 1546 "cgrammar.y"
{ context_enterIterClause (); ;
    break;}
case 558:
#line 1547 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-3].entry); ;
    break;}
case 559:
#line 1550 "cgrammar.y"
{ 
     yyval.expr = exprNode_iter (yyvsp[-9].entry, yyvsp[-4].alist, yyvsp[-2].expr, yyvsp[-1].entry); 

   ;
    break;}
case 560:
#line 1556 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 561:
#line 1557 "cgrammar.y"
{ nextIterParam (); ;
    break;}
case 562:
#line 1558 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-3].alist, yyvsp[0].expr); ;
    break;}
case 563:
#line 1561 "cgrammar.y"
{ yyval.expr = exprNode_iterExpr (yyvsp[0].expr); ;
    break;}
case 564:
#line 1562 "cgrammar.y"
{ yyval.expr = exprNode_iterId (yyvsp[0].entry); ;
    break;}
case 565:
#line 1563 "cgrammar.y"
{ uentry ue = coerceIterId (yyvsp[0].cname);

		      if (uentry_isValid (ue)) 
			{
			  yyval.expr = exprNode_iterId (ue);
			}
		      else
			{
			  yyval.expr = exprNode_iterNewId (cstring_copy (LastIdentifier ()));
			}
		    ;
    break;}
case 566:
#line 1574 "cgrammar.y"
{ yyval.expr = exprNode_iterNewId (yyvsp[0].cname); ;
    break;}
case 568:
#line 1582 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 570:
#line 1586 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 571:
#line 1587 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 572:
#line 1588 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 573:
#line 1590 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 574:
#line 1591 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 575:
#line 1592 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 576:
#line 1593 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 577:
#line 1594 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 579:
#line 1598 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 580:
#line 1599 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 581:
#line 1600 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 582:
#line 1601 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 583:
#line 1602 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 584:
#line 1603 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 585:
#line 1604 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 586:
#line 1605 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 587:
#line 1606 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 589:
#line 1610 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 591:
#line 1614 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 592:
#line 1615 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 593:
#line 1616 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 595:
#line 1620 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 596:
#line 1621 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 598:
#line 1625 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 599:
#line 1626 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 601:
#line 1630 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 602:
#line 1631 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 603:
#line 1632 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 604:
#line 1633 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 606:
#line 1637 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 607:
#line 1638 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 609:
#line 1642 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 611:
#line 1646 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 613:
#line 1651 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 615:
#line 1655 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 617:
#line 1659 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 619:
#line 1663 "cgrammar.y"
{ context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 620:
#line 1664 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 621:
#line 1665 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 623:
#line 1669 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 624:
#line 1670 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 625:
#line 1671 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 626:
#line 1672 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 627:
#line 1673 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 628:
#line 1674 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 629:
#line 1675 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 630:
#line 1676 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 631:
#line 1677 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 632:
#line 1678 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 633:
#line 1679 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 634:
#line 1682 "cgrammar.y"
{ yyval.entry = yyvsp[0].entry; ;
    break;}
case 635:
#line 1683 "cgrammar.y"
{ yyval.entry = uentry_undefined; ;
    break;}
case 636:
#line 1686 "cgrammar.y"
{ context_enterDoWhileClause (); yyval.tok = yyvsp[0].tok; ;
    break;}
case 637:
#line 1690 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 638:
#line 1692 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr), yyvsp[0].tok); ;
    break;}
case 639:
#line 1694 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 640:
#line 1697 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 641:
#line 1699 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr), yyvsp[0].tok); ;
    break;}
case 642:
#line 1701 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 643:
#line 1702 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 644:
#line 1705 "cgrammar.y"
{ yyval.expr = exprNode_goto (yyvsp[-1].cname); ;
    break;}
case 645:
#line 1706 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-1].tok, BADTOK); ;
    break;}
case 646:
#line 1708 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-2].tok, QINNERCONTINUE); ;
    break;}
case 647:
#line 1709 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, BADTOK); ;
    break;}
case 648:
#line 1710 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSWITCHBREAK); ;
    break;}
case 649:
#line 1711 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QLOOPBREAK); ;
    break;}
case 650:
#line 1712 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QINNERBREAK); ;
    break;}
case 651:
#line 1713 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSAFEBREAK); ;
    break;}
case 652:
#line 1714 "cgrammar.y"
{ yyval.expr = exprNode_nullReturn (yyvsp[-1].tok); ;
    break;}
case 653:
#line 1715 "cgrammar.y"
{ yyval.expr = exprNode_return (yyvsp[-1].expr); ;
    break;}
case 655:
#line 1719 "cgrammar.y"
{ ; ;
    break;}
case 658:
#line 1726 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 659:
#line 1727 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 660:
#line 1728 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 661:
#line 1729 "cgrammar.y"
{ yyval.cname = yyvsp[0].cname; ;
    break;}
case 663:
#line 1733 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/lib/bison.simple"

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

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 1735 "cgrammar.y"


/*@-redecl@*/
extern char *yytext;
/*@=redecl@*/

# include "bison.reset"

void yyerror (/*@unused@*/ char *s) 
{
  static bool givehint = FALSE;

  if (context_inIterDef ())
    {
      llerror (FLG_SYNTAX, message ("Iter syntax not parseable: %s", 
				    context_inFunctionName ()));
    }
  else if (context_inIterEnd ())
    {
      llerror (FLG_SYNTAX, message ("Iter finalizer syntax not parseable: %s", 
				    context_inFunctionName ()));
    }
  else if (context_inMacro ())
    {
      llerror (FLG_SYNTAX, message ("Macro syntax not parseable: %s", 
				    context_inFunctionName ()));
      
      if (context_inMacroUnknown ())
	{
	  if (!givehint)
	    {
	      llhint (cstring_makeLiteral 
		     ("Precede macro definition with /*@notfunction@*/ "
		      "to suppress checking and force expansion"));
	      givehint = TRUE;
	    }
	}

      swallowMacro ();
    }
  else
    {
      llparseerror (cstring_undefined);
    }
}

void printState (idDecl t) {
 cstring id = idDecl_getName (t);
 uentry ue = usymtab_lookupSafe (id);

 sRef s = uentry_getSref (ue);
 
 printf("State = %d\n", s->bufinfo.bufstate);
}


/*take this out soon */
/* void testassert1 (cstring id, icstring cons ) { */
 /*   uentry ue =usymtab_lookupSafe (id); */
/*   sRef s = uentry_getSref (ue); */
/*   printf ("Doing testassert1 with setbuffersize\n"); */
/*   printf("State = %d\n", s->bufinfo.bufstate); */
/* } */
/* void testassert2 (cstring id) { */
/*    uentry ue =usymtab_lookupSafe (id); */
/*   sRef s = uentry_getSref (ue); */
/*   printf ("Doing testassert2 with setbuffersize\n"); */
/*   printf("State = %d\n", s->bufinfo.bufstate); */
/* } */
  





