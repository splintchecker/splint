
/*  A Bison parser, made from cgrammar.y
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	BADTOK	258
#define	SKIPTOK	259
#define	CTOK_ELIPSIS	260
#define	CASE	261
#define	DEFAULT	262
#define	CIF	263
#define	CELSE	264
#define	SWITCH	265
#define	WHILE	266
#define	DO	267
#define	CFOR	268
#define	GOTO	269
#define	CONTINUE	270
#define	BREAK	271
#define	RETURN	272
#define	TSEMI	273
#define	TLBRACE	274
#define	TRBRACE	275
#define	TCOMMA	276
#define	TCOLON	277
#define	TASSIGN	278
#define	TLPAREN	279
#define	TRPAREN	280
#define	TLSQBR	281
#define	TRSQBR	282
#define	TDOT	283
#define	TAMPERSAND	284
#define	TEXCL	285
#define	TTILDE	286
#define	TMINUS	287
#define	TPLUS	288
#define	TMULT	289
#define	TDIV	290
#define	TPERCENT	291
#define	TLT	292
#define	TGT	293
#define	TCIRC	294
#define	TBAR	295
#define	TQUEST	296
#define	CSIZEOF	297
#define	CALIGNOF	298
#define	ARROW_OP	299
#define	CTYPEDEF	300
#define	COFFSETOF	301
#define	INC_OP	302
#define	DEC_OP	303
#define	LEFT_OP	304
#define	RIGHT_OP	305
#define	LE_OP	306
#define	GE_OP	307
#define	EQ_OP	308
#define	NE_OP	309
#define	AND_OP	310
#define	OR_OP	311
#define	MUL_ASSIGN	312
#define	DIV_ASSIGN	313
#define	MOD_ASSIGN	314
#define	ADD_ASSIGN	315
#define	SUB_ASSIGN	316
#define	LEFT_ASSIGN	317
#define	RIGHT_ASSIGN	318
#define	AND_ASSIGN	319
#define	XOR_ASSIGN	320
#define	OR_ASSIGN	321
#define	CSTRUCT	322
#define	CUNION	323
#define	CENUM	324
#define	VA_ARG	325
#define	VA_DCL	326
#define	QGLOBALS	327
#define	QMODIFIES	328
#define	QNOMODS	329
#define	QCONSTANT	330
#define	QFUNCTION	331
#define	QITER	332
#define	QDEFINES	333
#define	QUSES	334
#define	QALLOCATES	335
#define	QSETS	336
#define	QRELEASES	337
#define	QPRECLAUSE	338
#define	QPOSTCLAUSE	339
#define	QALT	340
#define	QUNDEF	341
#define	QKILLED	342
#define	QENDMACRO	343
#define	LLMACRO	344
#define	LLMACROITER	345
#define	LLMACROEND	346
#define	TENDMACRO	347
#define	QSWITCHBREAK	348
#define	QLOOPBREAK	349
#define	QINNERBREAK	350
#define	QSAFEBREAK	351
#define	QINNERCONTINUE	352
#define	QFALLTHROUGH	353
#define	QLINTNOTREACHED	354
#define	QLINTFALLTHROUGH	355
#define	QLINTFALLTHRU	356
#define	QARGSUSED	357
#define	QPRINTFLIKE	358
#define	QLINTPRINTFLIKE	359
#define	QSCANFLIKE	360
#define	QMESSAGELIKE	361
#define	QNOTREACHED	362
#define	QCONST	363
#define	QVOLATILE	364
#define	QINLINE	365
#define	QEXTENSION	366
#define	QEXTERN	367
#define	QSTATIC	368
#define	QAUTO	369
#define	QREGISTER	370
#define	QOUT	371
#define	QIN	372
#define	QYIELD	373
#define	QONLY	374
#define	QTEMP	375
#define	QSHARED	376
#define	QREF	377
#define	QUNIQUE	378
#define	QCHECKED	379
#define	QUNCHECKED	380
#define	QCHECKEDSTRICT	381
#define	QCHECKMOD	382
#define	QKEEP	383
#define	QKEPT	384
#define	QPARTIAL	385
#define	QSPECIAL	386
#define	QOWNED	387
#define	QDEPENDENT	388
#define	QRETURNED	389
#define	QEXPOSED	390
#define	QNULL	391
#define	QOBSERVER	392
#define	QISNULL	393
#define	QEXITS	394
#define	QMAYEXIT	395
#define	QNEVEREXIT	396
#define	QTRUEEXIT	397
#define	QFALSEEXIT	398
#define	QLONG	399
#define	QSIGNED	400
#define	QUNSIGNED	401
#define	QSHORT	402
#define	QUNUSED	403
#define	QSEF	404
#define	QNOTNULL	405
#define	QRELNULL	406
#define	QABSTRACT	407
#define	QCONCRETE	408
#define	QMUTABLE	409
#define	QIMMUTABLE	410
#define	QTRUENULL	411
#define	QFALSENULL	412
#define	QEXTERNAL	413
#define	QREFCOUNTED	414
#define	QREFS	415
#define	QNEWREF	416
#define	QTEMPREF	417
#define	QKILLREF	418
#define	QRELDEF	419
#define	CGCHAR	420
#define	CBOOL	421
#define	CINT	422
#define	CGFLOAT	423
#define	CDOUBLE	424
#define	CVOID	425
#define	QANYTYPE	426
#define	QINTEGRALTYPE	427
#define	QUNSIGNEDINTEGRALTYPE	428
#define	QSIGNEDINTEGRALTYPE	429
#define	QNULLTERMINATED	430
#define	QSETBUFFERSIZE	431
#define	QBUFFERCONSTRAINT	432
#define	QENSURESCONSTRAINT	433
#define	QSETSTRINGLENGTH	434
#define	QMAXSET	435
#define	QMAXREAD	436
#define	QTESTINRANGE	437
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

void checkandsetBufState(idDecl id, exprNode is);

#line 75 "cgrammar.y"
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



#define	YYFINAL		1229
#define	YYFLAG		-32768
#define	YYNTBASE	190

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
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
   186,   187,   188,   189
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     3,     5,     8,    11,    13,    15,    17,    19,
    21,    23,    32,    44,    45,    51,    53,    57,    59,    62,
    64,    71,    75,    82,    83,    91,    92,   101,   103,   110,
   114,   121,   122,   129,   130,   138,   139,   140,   151,   155,
   159,   163,   166,   168,   169,   172,   173,   176,   179,   180,
   185,   186,   187,   192,   193,   196,   198,   203,   205,   207,
   209,   211,   213,   215,   220,   226,   228,   230,   232,   234,
   238,   243,   246,   250,   254,   258,   260,   262,   264,   265,
   268,   269,   272,   274,   277,   279,   282,   284,   287,   289,
   293,   296,   298,   300,   302,   304,   306,   308,   310,   311,
   314,   315,   322,   323,   330,   332,   334,   335,   336,   342,
   343,   349,   351,   353,   354,   356,   357,   358,   362,   363,
   367,   369,   371,   373,   375,   377,   379,   381,   383,   385,
   387,   389,   391,   393,   395,   397,   399,   401,   402,   410,
   411,   420,   422,   426,   427,   431,   432,   436,   439,   443,
   446,   449,   451,   453,   455,   459,   464,   467,   471,   475,
   479,   481,   483,   485,   489,   491,   493,   497,   502,   505,
   509,   513,   517,   519,   523,   525,   527,   529,   533,   535,
   537,   539,   544,   548,   553,   560,   566,   572,   575,   578,
   580,   584,   586,   589,   592,   595,   598,   601,   604,   607,
   610,   612,   614,   618,   620,   630,   631,   635,   640,   643,
   648,   651,   653,   658,   660,   664,   668,   672,   674,   678,
   682,   684,   688,   692,   694,   698,   702,   706,   710,   712,
   716,   720,   722,   726,   728,   732,   734,   738,   740,   741,
   746,   748,   749,   754,   756,   757,   758,   766,   768,   772,
   776,   780,   784,   788,   792,   796,   800,   804,   808,   812,
   814,   818,   819,   821,   823,   825,   827,   829,   833,   834,
   844,   845,   857,   860,   861,   868,   869,   877,   882,   887,
   888,   889,   892,   894,   899,   900,   905,   907,   911,   916,
   918,   922,   924,   926,   928,   930,   932,   935,   938,   941,
   944,   947,   950,   953,   956,   959,   962,   965,   968,   971,
   974,   977,   980,   983,   986,   989,   992,   995,   998,  1001,
  1004,  1007,  1010,  1013,  1016,  1019,  1022,  1025,  1028,  1031,
  1034,  1037,  1040,  1043,  1046,  1049,  1052,  1055,  1058,  1061,
  1064,  1067,  1070,  1072,  1074,  1076,  1078,  1081,  1084,  1087,
  1090,  1093,  1096,  1099,  1102,  1105,  1108,  1111,  1114,  1117,
  1120,  1124,  1126,  1131,  1133,  1137,  1140,  1143,  1146,  1147,
  1149,  1150,  1151,  1163,  1164,  1165,  1177,  1184,  1191,  1192,
  1193,  1204,  1205,  1206,  1217,  1223,  1229,  1234,  1239,  1240,
  1242,  1244,  1247,  1253,  1257,  1260,  1265,  1267,  1271,  1276,
  1283,  1284,  1293,  1298,  1300,  1304,  1307,  1309,  1314,  1316,
  1318,  1321,  1324,  1326,  1329,  1331,  1334,  1336,  1338,  1340,
  1343,  1345,  1348,  1351,  1355,  1357,  1361,  1363,  1367,  1369,
  1371,  1375,  1376,  1379,  1380,  1385,  1390,  1392,  1394,  1397,
  1399,  1401,  1404,  1405,  1407,  1413,  1416,  1420,  1424,  1429,
  1433,  1438,  1443,  1449,  1451,  1453,  1455,  1457,  1459,  1461,
  1463,  1465,  1467,  1469,  1474,  1479,  1484,  1487,  1489,  1491,
  1493,  1496,  1499,  1507,  1514,  1517,  1518,  1519,  1530,  1531,
  1538,  1540,  1542,  1544,  1546,  1549,  1551,  1553,  1555,  1557,
  1559,  1561,  1563,  1567,  1569,  1572,  1575,  1578,  1580,  1582,
  1584,  1586,  1588,  1590,  1592,  1594,  1596,  1598,  1602,  1604,
  1606,  1609,  1612,  1613,  1618,  1619,  1625,  1626,  1630,  1631,
  1636,  1640,  1643,  1647,  1648,  1649,  1650,  1651,  1652,  1654,
  1657,  1660,  1664,  1667,  1671,  1675,  1680,  1683,  1686,  1690,
  1694,  1699,  1701,  1704,  1706,  1709,  1711,  1714,  1716,  1719,
  1721,  1724,  1726,  1731,  1734,  1735,  1741,  1742,  1749,  1754,
  1759,  1760,  1761,  1772,  1774,  1775,  1780,  1782,  1784,  1786,
  1788,  1790,  1794,  1796,  1801,  1805,  1810,  1817,  1823,  1829,
  1832,  1835,  1837,  1840,  1843,  1846,  1849,  1852,  1855,  1858,
  1861,  1863,  1865,  1870,  1872,  1876,  1880,  1884,  1886,  1890,
  1894,  1896,  1900,  1904,  1906,  1910,  1914,  1918,  1922,  1924,
  1928,  1932,  1934,  1938,  1940,  1944,  1946,  1950,  1952,  1956,
  1958,  1962,  1964,  1965,  1966,  1974,  1976,  1980,  1984,  1988,
  1992,  1996,  2000,  2004,  2008,  2012,  2016,  2020,  2022,  2023,
  2025,  2028,  2036,  2039,  2042,  2050,  2057,  2060,  2064,  2067,
  2071,  2074,  2078,  2082,  2086,  2090,  2093,  2097,  2098,  2100,
  2102,  2104,  2106,  2108,  2110,  2112,  2114
};

static const short yyrhs[] = {    -1,
   191,     0,   192,     0,   191,   192,     0,   260,   430,     0,
   193,     0,   194,     0,   204,     0,   207,     0,   297,     0,
     1,     0,    75,   317,   330,   340,   330,   430,   305,    88,
     0,    75,   317,   330,   340,   330,    23,   305,   310,   309,
   430,    88,     0,     0,    76,   195,   196,   430,    88,     0,
   197,     0,   317,   330,   197,     0,   201,     0,   344,   201,
     0,   432,     0,   305,    24,   330,   340,   305,    25,     0,
   198,    26,    27,     0,   198,    26,   305,   296,    27,   330,
     0,     0,   198,   306,    24,    25,   199,   209,   211,     0,
     0,   198,   306,    24,   341,    25,   200,   209,   211,     0,
   432,     0,   305,    24,   330,   197,   305,    25,     0,   201,
    26,    27,     0,   201,    26,   305,   296,    27,   330,     0,
     0,   201,   306,    24,    25,   202,   227,     0,     0,   201,
   306,    24,   341,    25,   203,   227,     0,     0,     0,    77,
   432,    24,   341,    25,   205,   227,   206,   430,    88,     0,
    89,   371,    92,     0,    90,   358,    92,     0,    91,   359,
    92,     0,    89,    92,     0,   256,     0,     0,   210,   229,
     0,     0,   212,   213,     0,   216,   214,     0,     0,   215,
   178,   218,    88,     0,     0,     0,   217,   177,   218,    88,
     0,     0,   219,   218,     0,   219,     0,   222,   221,   222,
    18,     0,   180,     0,   181,     0,    52,     0,    51,     0,
    53,     0,   223,     0,   225,    24,   222,    25,     0,    24,
   222,   226,   222,    25,     0,   224,     0,   186,     0,   431,
     0,   184,     0,   224,    26,    27,     0,   224,    26,   186,
    27,     0,    34,   224,     0,    24,   224,    25,     0,   224,
    28,   432,     0,   224,    44,   432,     0,   220,     0,    33,
     0,    32,     0,     0,     0,   230,     0,     0,   228,   230,
     0,   237,     0,   231,   237,     0,   240,     0,   231,   240,
     0,   253,     0,   253,   231,     0,   233,     0,   232,    21,
   233,     0,   236,   234,     0,   431,     0,   184,     0,    86,
     0,    87,     0,   116,     0,   117,     0,   130,     0,     0,
   235,   236,     0,     0,    72,   238,   391,   430,    88,   243,
     0,     0,    72,   239,   232,   430,    88,   243,     0,    74,
     0,   244,     0,     0,     0,    72,   241,   391,   430,   243,
     0,     0,    72,   242,   232,   430,   243,     0,    74,     0,
   246,     0,     0,   244,     0,     0,     0,    73,   245,   261,
     0,     0,    73,   247,   262,     0,    78,     0,    79,     0,
    80,     0,    81,     0,    82,     0,    88,     0,    88,     0,
    83,     0,    84,     0,   119,     0,   137,     0,   135,     0,
   133,     0,   132,     0,   121,     0,   138,     0,   150,     0,
     0,   248,   330,   254,   267,   430,   250,   305,     0,     0,
   251,   330,   252,   255,   267,   430,   249,   305,     0,   340,
     0,   317,   330,   340,     0,     0,    19,   258,   387,     0,
     0,   391,   259,   380,     0,   208,   257,     0,   265,   430,
    88,     0,   430,    88,     0,   265,   430,     0,   430,     0,
   431,     0,   184,     0,   263,    26,    27,     0,   263,    26,
   264,    27,     0,    34,   263,     0,    24,   263,    25,     0,
   263,    28,   432,     0,   263,    44,   432,     0,   263,     0,
   186,     0,   263,     0,   265,    21,   263,     0,   431,     0,
   184,     0,   266,    26,    27,     0,   266,    26,   264,    27,
     0,    34,   266,     0,    24,   266,    25,     0,   266,    28,
   432,     0,   266,    44,   432,     0,   266,     0,   267,    21,
   266,     0,   431,     0,   184,     0,   186,     0,    24,   294,
    25,     0,   185,     0,   111,     0,   268,     0,   269,    26,
   294,    27,     0,   269,    24,    25,     0,   269,    24,   270,
    25,     0,    70,    24,   293,    21,   352,    25,     0,   269,
   330,    28,   432,   305,     0,   269,   330,    44,   432,   305,
     0,   269,    47,     0,   269,    48,     0,   293,     0,   270,
    21,   293,     0,   269,     0,    47,   271,     0,    48,   271,
     0,    29,   277,     0,    34,   277,     0,    33,   277,     0,
    32,   277,     0,    31,   277,     0,    30,   277,     0,   274,
     0,   273,     0,   272,    28,   432,     0,   432,     0,    46,
   305,    24,   352,   330,    21,   272,    25,   305,     0,     0,
   305,   275,   276,     0,    42,    24,   352,    25,     0,    42,
   271,     0,    43,    24,   352,    25,     0,    43,   271,     0,
   271,     0,    24,   352,    25,   277,     0,   277,     0,   278,
    34,   277,     0,   278,    35,   277,     0,   278,    36,   277,
     0,   278,     0,   279,    33,   278,     0,   279,    32,   278,
     0,   279,     0,   280,    49,   279,     0,   280,    50,   279,
     0,   280,     0,   281,    37,   280,     0,   281,    38,   280,
     0,   281,    51,   280,     0,   281,    52,   280,     0,   281,
     0,   282,    53,   281,     0,   282,    54,   281,     0,   282,
     0,   283,    29,   282,     0,   283,     0,   284,    39,   283,
     0,   284,     0,   285,    40,   284,     0,   285,     0,     0,
   286,    55,   287,   285,     0,   286,     0,     0,   288,    56,
   289,   286,     0,   288,     0,     0,     0,   288,    41,   291,
   294,    22,   292,   290,     0,   290,     0,   271,    23,   293,
     0,   271,    57,   293,     0,   271,    58,   293,     0,   271,
    59,   293,     0,   271,    60,   293,     0,   271,    61,   293,
     0,   271,    62,   293,     0,   271,    63,   293,     0,   271,
    64,   293,     0,   271,    65,   293,     0,   271,    66,   293,
     0,   293,     0,   294,    21,   293,     0,     0,   294,     0,
   290,     0,   298,     0,    71,     0,   303,     0,   317,   305,
    18,     0,     0,   317,   330,   340,   330,   299,   305,   309,
    18,   305,     0,     0,   317,   330,   340,   330,    23,   300,
   305,   310,   309,    18,   305,     0,   340,   330,     0,     0,
   340,   330,    23,   302,   305,   310,     0,     0,    45,   317,
   304,   330,   307,   305,    18,     0,    45,   317,   305,    18,
     0,    45,   307,   305,    18,     0,     0,     0,   308,   305,
     0,   301,     0,   307,    21,   330,   301,     0,     0,   309,
    21,   330,   301,     0,   293,     0,    19,   311,    20,     0,
    19,   311,    21,    20,     0,   310,     0,   311,    21,   310,
     0,   112,     0,   110,     0,   113,     0,   114,     0,   115,
     0,   108,   305,     0,   109,   305,     0,   116,   305,     0,
   117,   305,     0,   130,   305,     0,   131,   305,     0,   132,
   305,     0,   133,   305,     0,   118,   305,     0,   120,   305,
     0,   119,   305,     0,   128,   305,     0,   129,   305,     0,
   121,   305,     0,   123,   305,     0,   139,   305,     0,   140,
   305,     0,   142,   305,     0,   143,   305,     0,   141,   305,
     0,   136,   305,     0,   151,   305,     0,   134,   305,     0,
   135,   305,     0,   137,   305,     0,   124,   305,     0,   127,
   305,     0,   125,   305,     0,   126,   305,     0,   156,   305,
     0,   157,   305,     0,   148,   305,     0,   158,   305,     0,
   149,   305,     0,   152,   305,     0,   153,   305,     0,   154,
   305,     0,   155,   305,     0,   150,   305,     0,   159,   305,
     0,   160,   305,     0,   163,   305,     0,   164,   305,     0,
   161,   305,     0,   162,   305,     0,   175,   305,     0,   147,
     0,   144,     0,   145,     0,   146,     0,   165,   330,     0,
   167,   330,     0,   166,   330,     0,   168,   330,     0,   169,
   330,     0,   170,   330,     0,   171,   330,     0,   172,   330,
     0,   173,   330,     0,   174,   330,     0,   433,   330,     0,
   321,   330,     0,   335,   330,     0,   314,   330,     0,   305,
   317,   305,     0,   319,     0,   319,    85,   318,    88,     0,
   352,     0,   352,    21,   318,     0,   312,   320,     0,   313,
   320,     0,   315,   320,     0,     0,   317,     0,     0,     0,
   330,    67,   432,   305,    19,   322,   384,   331,   385,   323,
    20,     0,     0,     0,   330,    68,   432,   305,    19,   324,
   384,   331,   385,   325,    20,     0,   330,    67,   432,   305,
    19,    20,     0,   330,    68,   432,   305,    19,    20,     0,
     0,     0,   330,    67,   305,    19,   326,   384,   331,   385,
   327,    20,     0,     0,     0,   330,    68,   305,    19,   328,
   384,   331,   385,   329,    20,     0,   330,    67,   305,    19,
    20,     0,   330,    68,   305,    19,    20,     0,   330,    67,
   432,   330,     0,   330,    68,   432,   330,     0,     0,   332,
     0,   207,     0,   331,   332,     0,   317,   330,   333,   305,
    18,     0,   317,   305,    18,     0,   334,   330,     0,   333,
    21,   334,   330,     0,   340,     0,    22,   305,   296,     0,
   340,    22,   305,   296,     0,   330,    69,    19,   337,    20,
   305,     0,     0,   330,    69,   432,    19,   336,   337,    20,
   305,     0,   330,    69,   432,   305,     0,   338,     0,   337,
    21,   338,     0,   337,    21,     0,   432,     0,   432,    23,
   305,   296,     0,   198,     0,   354,     0,   344,   189,     0,
   344,   339,     0,   198,     0,   344,   198,     0,   347,     0,
   330,   345,     0,   108,     0,   109,     0,   342,     0,   343,
   342,     0,    34,     0,    34,   343,     0,    34,   344,     0,
    34,   343,   344,     0,   346,     0,   346,    21,     5,     0,
   432,     0,   346,    21,   432,     0,     5,     0,   348,     0,
   348,    21,     5,     0,     0,   349,   351,     0,     0,   348,
    21,   350,   351,     0,   305,   317,   339,   305,     0,   432,
     0,   316,     0,   316,   353,     0,   344,     0,   355,     0,
   344,   355,     0,     0,   355,     0,   305,    24,   330,   353,
    25,     0,    26,    27,     0,    26,   296,    27,     0,   355,
    26,    27,     0,   355,    26,   296,    27,     0,   305,    24,
    25,     0,   305,    24,   347,    25,     0,   355,   305,    24,
    25,     0,   355,   305,    24,   347,    25,     0,   373,     0,
   374,     0,   377,     0,   380,     0,   393,     0,   396,     0,
   427,     0,   401,     0,   429,     0,   357,     0,   176,   431,
   186,    88,     0,   179,   431,   186,    88,     0,   182,   431,
   186,    88,     0,    22,   432,     0,   360,     0,   358,     0,
   367,     0,   360,   367,     0,   400,   360,     0,   426,   372,
    11,    24,   294,    25,    18,     0,   426,   372,    11,    24,
   294,    25,     0,   362,   367,     0,     0,     0,    13,    24,
   295,    18,   295,    18,   363,   295,   364,    25,     0,     0,
   187,   382,    24,   366,   404,    25,     0,   188,     0,   373,
     0,   374,     0,   377,     0,   369,   391,     0,   369,     0,
   370,     0,   393,     0,   368,     0,   361,     0,   365,     0,
   429,     0,    24,   367,    25,     0,     1,     0,   395,   367,
     0,   382,    19,     0,   386,    20,     0,   372,     0,   390,
     0,   373,     0,   374,     0,   377,     0,   381,     0,   394,
     0,   396,     0,   401,     0,   428,     0,    24,   372,    25,
     0,   429,     0,     1,     0,   432,    22,     0,   107,   356,
     0,     0,     6,   296,   375,    22,     0,     0,    98,     6,
   296,   376,    22,     0,     0,     7,   378,    22,     0,     0,
    98,     7,   379,    22,     0,    24,   380,    25,     0,   382,
   388,     0,   382,   389,   383,     0,     0,     0,     0,     0,
     0,    20,     0,   107,    20,     0,   392,    20,     0,   392,
   107,    20,     0,   391,    20,     0,   391,   107,    20,     0,
   391,   392,    20,     0,   391,   392,   107,    20,     0,    19,
   387,     0,    19,    20,     0,    19,   390,    20,     0,    19,
   391,    20,     0,    19,   391,   392,    20,     0,   372,     0,
   390,   372,     0,   297,     0,   391,   297,     0,   356,     0,
   392,   356,     0,    18,     0,   294,    18,     0,    18,     0,
   294,    18,     0,   294,     0,     8,    24,   294,    25,     0,
   395,   356,     0,     0,   395,   356,     9,   397,   356,     0,
     0,    10,    24,   294,   398,    25,   356,     0,    11,    24,
   294,    25,     0,    11,    24,   294,    25,     0,     0,     0,
   187,   402,   382,    24,   403,   404,    25,   380,   425,   383,
     0,   406,     0,     0,   404,   405,    21,   406,     0,   424,
     0,   431,     0,   185,     0,   184,     0,   186,     0,    24,
   294,    25,     0,   407,     0,   269,    26,   294,    27,     0,
   269,    24,    25,     0,   269,    24,   270,    25,     0,    70,
    24,   293,    21,   352,    25,     0,   269,   330,    28,   432,
   305,     0,   269,   330,    44,   432,   305,     0,   269,    47,
     0,   269,    48,     0,   408,     0,    47,   271,     0,    48,
   271,     0,    29,   277,     0,    34,   277,     0,    33,   277,
     0,    32,   277,     0,    31,   277,     0,    30,   277,     0,
   274,     0,   409,     0,    24,   352,    25,   277,     0,   410,
     0,   278,    34,   277,     0,   278,    35,   277,     0,   278,
    36,   277,     0,   411,     0,   279,    33,   278,     0,   279,
    32,   278,     0,   412,     0,   280,    49,   279,     0,   280,
    50,   279,     0,   413,     0,   281,    37,   280,     0,   281,
    38,   280,     0,   281,    51,   280,     0,   281,    52,   280,
     0,   414,     0,   282,    53,   281,     0,   282,    54,   281,
     0,   415,     0,   283,    29,   282,     0,   416,     0,   284,
    39,   283,     0,   417,     0,   285,    40,   284,     0,   418,
     0,   286,    55,   285,     0,   419,     0,   288,    56,   286,
     0,   420,     0,     0,     0,   288,    41,   422,   294,    22,
   423,   290,     0,   421,     0,   271,    23,   293,     0,   271,
    57,   293,     0,   271,    58,   293,     0,   271,    59,   293,
     0,   271,    60,   293,     0,   271,    61,   293,     0,   271,
    62,   293,     0,   271,    63,   293,     0,   271,    64,   293,
     0,   271,    65,   293,     0,   271,    66,   293,     0,   188,
     0,     0,    12,     0,   399,   356,     0,   426,   356,    11,
    24,   294,    25,    18,     0,   362,   356,     0,   399,   372,
     0,   426,   372,    11,    24,   294,    25,    18,     0,   426,
   372,    11,    24,   294,    25,     0,   362,   372,     0,    14,
   432,    18,     0,    15,    18,     0,    97,    15,    18,     0,
    16,    18,     0,    93,    16,    18,     0,    94,    16,    18,
     0,    95,    16,    18,     0,    96,    16,    18,     0,    17,
    18,     0,    17,   294,    18,     0,     0,    18,     0,   183,
     0,   184,     0,   187,     0,   188,     0,   431,     0,   185,
     0,   189,     0,   185,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   269,   270,   273,   274,   277,   278,   279,   280,   281,   282,
   283,   286,   288,   292,   292,   297,   303,   307,   308,   312,
   313,   315,   317,   321,   324,   332,   335,   344,   345,   347,
   349,   365,   369,   376,   380,   386,   388,   388,   392,   393,
   394,   395,   398,   401,   402,   408,   409,   413,   417,   422,
   429,   433,   438,   445,   448,   449,   452,   457,   458,   461,
   462,   463,   466,   467,   468,   473,   474,   482,   485,   487,
   488,   493,   494,   495,   497,   513,   517,   518,   523,   524,
   534,   535,   538,   539,   542,   543,   546,   547,   550,   551,
   554,   557,   558,   561,   562,   563,   564,   565,   568,   569,
   572,   572,   575,   575,   578,   582,   583,   586,   586,   589,
   589,   592,   596,   597,   600,   601,   604,   610,   617,   623,
   630,   631,   632,   633,   634,   637,   640,   643,   644,   647,
   648,   649,   650,   651,   652,   653,   654,   657,   663,   670,
   676,   685,   691,   695,   697,   701,   704,   711,   721,   722,
   725,   726,   729,   730,   731,   732,   733,   734,   735,   736,
   740,   741,   745,   746,   749,   751,   753,   754,   755,   756,
   757,   759,   763,   767,   779,   780,   781,   782,   783,   784,
   787,   788,   789,   790,   791,   792,   793,   794,   795,   798,
   799,   802,   803,   804,   805,   806,   807,   808,   809,   810,
   811,   812,   815,   816,   819,   823,   824,   827,   828,   829,
   830,   833,   834,   838,   839,   840,   841,   844,   845,   846,
   849,   850,   851,   854,   855,   856,   857,   858,   861,   862,
   863,   866,   867,   870,   871,   875,   876,   879,   880,   885,
   891,   892,   898,   904,   905,   905,   907,   910,   911,   912,
   913,   914,   915,   916,   917,   918,   919,   920,   921,   924,
   925,   928,   929,   932,   937,   938,   939,   942,   955,   959,
   960,   963,   968,   969,   969,   974,   975,   976,   977,   980,
   983,   986,   989,   990,   993,   994,   997,   998,   999,  1003,
  1005,  1014,  1015,  1016,  1017,  1018,  1021,  1022,  1023,  1024,
  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,
  1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,
  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,
  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,  1064,
  1065,  1066,  1072,  1073,  1074,  1075,  1078,  1079,  1080,  1081,
  1082,  1083,  1084,  1085,  1086,  1087,  1088,  1089,  1090,  1091,
  1094,  1098,  1099,  1103,  1104,  1108,  1109,  1110,  1113,  1114,
  1117,  1119,  1121,  1122,  1124,  1126,  1127,  1129,  1131,  1133,
  1135,  1136,  1138,  1140,  1141,  1143,  1145,  1146,  1149,  1152,
  1153,  1154,  1157,  1159,  1163,  1165,  1169,  1170,  1171,  1175,
  1177,  1177,  1179,  1182,  1184,  1186,  1189,  1194,  1201,  1202,
  1203,  1210,  1214,  1215,  1219,  1220,  1223,  1224,  1227,  1228,
  1231,  1232,  1233,  1234,  1237,  1238,  1241,  1242,  1245,  1246,
  1247,  1250,  1250,  1251,  1252,  1255,  1267,  1283,  1284,  1287,
  1288,  1289,  1292,  1293,  1296,  1298,  1299,  1301,  1302,  1304,
  1306,  1308,  1310,  1316,  1317,  1318,  1319,  1320,  1321,  1322,
  1323,  1324,  1326,  1330,  1332,  1334,  1340,  1345,  1348,  1351,
  1352,  1356,  1358,  1360,  1362,  1366,  1367,  1369,  1373,  1375,
  1377,  1380,  1381,  1382,  1383,  1384,  1385,  1386,  1387,  1388,
  1389,  1390,  1391,  1392,  1395,  1401,  1404,  1407,  1408,  1411,
  1412,  1413,  1414,  1415,  1416,  1417,  1418,  1419,  1420,  1421,
  1424,  1425,  1431,  1432,  1433,  1434,  1437,  1438,  1439,  1440,
  1443,  1444,  1448,  1451,  1454,  1457,  1460,  1463,  1466,  1467,
  1468,  1469,  1471,  1472,  1474,  1476,  1483,  1487,  1489,  1491,
  1493,  1497,  1498,  1501,  1502,  1505,  1506,  1509,  1510,  1513,
  1514,  1515,  1518,  1526,  1531,  1532,  1536,  1537,  1540,  1545,
  1548,  1549,  1550,  1558,  1559,  1559,  1563,  1564,  1565,  1576,
  1583,  1584,  1587,  1588,  1589,  1590,  1591,  1593,  1594,  1595,
  1596,  1599,  1600,  1601,  1602,  1603,  1604,  1605,  1606,  1607,
  1608,  1611,  1612,  1615,  1616,  1617,  1618,  1621,  1622,  1623,
  1626,  1627,  1628,  1631,  1632,  1633,  1634,  1635,  1638,  1639,
  1640,  1643,  1644,  1647,  1648,  1652,  1653,  1656,  1657,  1660,
  1661,  1664,  1665,  1666,  1667,  1670,  1671,  1672,  1673,  1674,
  1675,  1676,  1677,  1678,  1679,  1680,  1681,  1684,  1685,  1688,
  1691,  1693,  1695,  1699,  1700,  1702,  1704,  1707,  1708,  1709,
  1711,  1712,  1713,  1714,  1715,  1716,  1717,  1720,  1721,  1724,
  1727,  1728,  1729,  1730,  1731,  1734,  1735
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
"QMAXSET","QMAXREAD","QTESTINRANGE","IDENTIFIER","NEW_IDENTIFIER","TYPE_NAME_OR_ID",
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
"abstractDeclBase","stmt","lclintassertion","iterBody","endBody","iterDefStmtList",
"iterDefIterationStmt","forPred","@44","@45","partialIterStmt","@46","iterDefStmt",
"iterSelectionStmt","openScope","closeScope","macroBody","stmtErr","labeledStmt",
"caseStmt","@47","@48","defaultStmt","@49","@50","compoundStmt","compoundStmtErr",
"CreateInnerScope","DeleteInnerScope","CreateStructInnerScope","DeleteStructInnerScope",
"DeleteInnerScopeSafe","compoundStmtRest","compoundStmtAux","compoundStmtAuxErr",
"stmtListErr","initializerList","stmtList","expressionStmt","expressionStmtErr",
"ifPred","selectionStmt","@51","@52","whilePred","iterWhilePred","iterStmt",
"@53","@54","iterArgList","@55","iterArgExpr","primaryIterExpr","postfixIterExpr",
"unaryIterExpr","castIterExpr","timesIterExpr","plusIterExpr","shiftIterExpr",
"relationalIterExpr","equalityIterExpr","bitandIterExpr","xorIterExpr","bitorIterExpr",
"andIterExpr","orIterExpr","conditionalIterExpr","@56","@57","assignIterExpr",
"endIter","doHeader","iterationStmt","iterationStmtErr","jumpStmt","optSemi",
"id","newId","typeName", NULL
};
#endif

static const short yyr1[] = {     0,
   190,   190,   191,   191,   192,   192,   192,   192,   192,   192,
   192,   193,   193,   195,   194,   196,   196,   197,   197,   198,
   198,   198,   198,   199,   198,   200,   198,   201,   201,   201,
   201,   202,   201,   203,   201,   205,   206,   204,   207,   207,
   207,   207,   208,   210,   209,   212,   211,   213,   215,   214,
   214,   217,   216,   216,   218,   218,   219,   220,   220,   221,
   221,   221,   222,   222,   222,   223,   223,   224,   224,   224,
   224,   224,   224,   224,   224,   225,   226,   226,    -1,    -1,
   228,   227,   229,   229,   230,   230,   231,   231,   232,   232,
   233,   234,   234,   235,   235,   235,   235,   235,   236,   236,
   238,   237,   239,   237,   237,   237,   237,   241,   240,   242,
   240,   240,   240,   240,   243,   243,   245,   244,   247,   246,
   248,   248,   248,   248,   248,   249,   250,   251,   251,   252,
   252,   252,   252,   252,   252,   252,   252,   254,   253,   255,
   253,   256,   256,   258,   257,   259,   257,   260,   261,   261,
   262,   262,   263,   263,   263,   263,   263,   263,   263,   263,
   264,   264,   265,   265,   266,   266,   266,   266,   266,   266,
   266,   266,   267,   267,   268,   268,   268,   268,   268,   268,
   269,   269,   269,   269,   269,   269,   269,   269,   269,   270,
   270,   271,   271,   271,   271,   271,   271,   271,   271,   271,
   271,   271,   272,   272,   273,   275,   274,   276,   276,   276,
   276,   277,   277,   278,   278,   278,   278,   279,   279,   279,
   280,   280,   280,   281,   281,   281,   281,   281,   282,   282,
   282,   283,   283,   284,   284,   285,   285,   286,   287,   286,
   288,   289,   288,   290,   291,   292,   290,   293,   293,   293,
   293,   293,   293,   293,   293,   293,   293,   293,   293,   294,
   294,   295,   295,   296,   297,   297,   297,   298,   299,   298,
   300,   298,   301,   302,   301,   304,   303,   303,   303,   305,
   306,   307,   308,   308,   309,   309,   310,   310,   310,   311,
   311,   312,   312,   312,   312,   312,   313,   313,   313,   313,
   313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
   313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
   313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
   313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
   313,   313,   314,   314,   314,   314,   315,   315,   315,   315,
   315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
   316,   317,   317,   318,   318,   319,   319,   319,   320,   320,
   322,   323,   321,   324,   325,   321,   321,   321,   326,   327,
   321,   328,   329,   321,   321,   321,   321,   321,   330,   331,
   331,   331,   332,   332,   333,   333,   334,   334,   334,   335,
   336,   335,   335,   337,   337,   337,   338,   338,   339,   339,
   339,   339,   340,   340,   341,   341,   342,   342,   343,   343,
   344,   344,   344,   344,   345,   345,   346,   346,   347,   347,
   347,   349,   348,   350,   348,   351,   351,   352,   352,   353,
   353,   353,   354,   354,   355,   355,   355,   355,   355,   355,
   355,   355,   355,   356,   356,   356,   356,   356,   356,   356,
   356,   356,   356,   357,   357,   357,    -1,   358,   359,   360,
   360,   361,   361,   361,   361,   363,   364,   362,   366,   365,
   365,   367,   367,   367,   367,   367,   367,   367,   367,   367,
   367,   367,   367,   367,   368,   369,   370,   371,   371,   372,
   372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
   373,   373,   375,   374,   376,   374,   378,   377,   379,   377,
   380,   380,   381,   382,   383,   384,   385,   386,   387,   387,
   387,   387,   387,   387,   387,   387,   388,   389,   389,   389,
   389,   390,   390,   391,   391,   392,   392,   393,   393,   394,
   394,   394,   395,   396,   397,   396,   398,   396,   399,   400,
   402,   403,   401,   404,   405,   404,   406,   406,   406,   406,
   407,   407,   408,   408,   408,   408,   408,   408,   408,   408,
   408,   409,   409,   409,   409,   409,   409,   409,   409,   409,
   409,   410,   410,   411,   411,   411,   411,   412,   412,   412,
   413,   413,   413,   414,   414,   414,   414,   414,   415,   415,
   415,   416,   416,   417,   417,   418,   418,   419,   419,   420,
   420,   421,   422,   423,   421,   424,   424,   424,   424,   424,
   424,   424,   424,   424,   424,   424,   424,   425,   425,   426,
   427,   427,   427,   428,   428,   428,   428,   429,   429,   429,
   429,   429,   429,   429,   429,   429,   429,   430,   430,   431,
   432,   432,   432,   432,   432,   433,   433
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     2,     1,     1,     1,     1,     1,
     1,     8,    11,     0,     5,     1,     3,     1,     2,     1,
     6,     3,     6,     0,     7,     0,     8,     1,     6,     3,
     6,     0,     6,     0,     7,     0,     0,    10,     3,     3,
     3,     2,     1,     0,     2,     0,     2,     2,     0,     4,
     0,     0,     4,     0,     2,     1,     4,     1,     1,     1,
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
     1,     1,     1,     4,     4,     4,     2,     1,     1,     1,
     2,     2,     7,     6,     2,     0,     0,    10,     0,     6,
     1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
     1,     1,     3,     1,     2,     2,     2,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
     2,     2,     0,     4,     0,     5,     0,     3,     0,     4,
     3,     2,     3,     0,     0,     0,     0,     0,     1,     2,
     2,     3,     2,     3,     3,     4,     2,     2,     3,     3,
     4,     1,     2,     1,     2,     1,     2,     1,     2,     1,
     2,     1,     4,     2,     0,     5,     0,     6,     4,     4,
     0,     0,    10,     1,     0,     4,     1,     1,     1,     1,
     1,     3,     1,     4,     3,     4,     6,     5,     5,     2,
     2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
     1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
     1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
     3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
     3,     1,     0,     0,     7,     1,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     1,     0,     1,
     2,     7,     2,     2,     7,     6,     2,     3,     2,     3,
     2,     3,     3,     3,     3,     2,     3,     0,     1,     1,
     1,     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     0,
    11,   421,   389,   266,   389,    14,     0,     0,     0,     0,
   280,   280,   293,   292,   294,   295,   296,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   344,   345,   346,   343,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   280,   389,   389,   389,   389,   389,   389,
   389,   389,   389,   389,   280,   660,   661,   665,   662,   663,
   666,     0,     3,     6,     7,   413,     8,     9,   389,    43,
   658,    10,   265,   267,     0,   369,   369,   389,   369,   389,
   362,   389,     0,   389,   142,   280,   664,    20,   389,   417,
   418,   419,   422,   423,   283,   280,   280,   276,   389,   667,
   389,   389,   665,     0,   510,   280,   517,     0,     0,     0,
   640,     0,     0,     0,     0,   280,   550,     0,   280,   280,
   280,   280,   280,   280,   280,   280,   280,     0,    42,     0,
     0,     0,     0,     0,     0,   280,   180,   176,   179,   177,
   561,   181,   192,   212,   202,   201,   214,   218,   221,   224,
   229,   232,   234,   236,   238,   241,   244,   248,   260,   552,
   206,     0,     0,   542,   500,   501,   502,   503,     0,     0,
   504,   280,   505,     0,   506,     0,   507,   509,   175,     0,
   494,     0,   548,     0,   524,   481,     0,     0,     0,   490,
     0,   491,   470,   489,   486,   487,   482,   483,   484,     0,
     0,   488,     0,     0,     0,   492,   469,     0,   297,   298,
   299,   300,   305,   307,   306,   310,   311,   322,   324,   325,
   323,   308,   309,   301,   302,   303,   304,   319,   320,   317,
   321,   312,   313,   316,   314,   315,   328,   330,   335,   318,
   331,   332,   333,   334,   326,   327,   329,   336,   337,   340,
   341,   338,   339,   347,   349,   348,   350,   351,   352,   353,
   354,   355,   356,   342,     4,   280,     0,   144,   148,   544,
   389,   389,   659,     5,   389,   370,   366,   367,   360,   368,
     0,   280,   280,   358,   280,   280,     0,   359,   414,   357,
   420,   424,   389,     0,   282,   389,     0,   273,   280,   658,
    16,    18,     0,   389,   280,    28,   432,   280,   176,   179,
   212,   264,   513,   175,     0,   280,   280,   280,   280,     0,
   649,   651,   656,     0,     0,   389,   438,     0,     0,   195,
   200,   199,   198,   197,   196,     0,   280,   193,   194,   280,
     0,     0,     0,     0,     0,   280,   519,   280,     0,     0,
     0,   512,   463,   280,   454,   455,   456,   457,     0,   458,
   459,   280,   461,   280,   460,   462,   524,   280,   280,   188,
   189,     0,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   239,
   245,   242,   551,   280,     0,   647,    39,     0,   525,   543,
   554,   644,     0,   511,   280,     0,     0,     0,   549,    40,
   471,   475,   485,   496,   497,   495,     0,     0,    41,    22,
   280,   432,   389,   280,   524,   545,   280,   268,   143,   389,
     0,   364,     0,   389,     0,   389,     0,   280,   280,   279,
   280,   278,   274,   389,     0,   280,     0,   389,   280,    19,
   429,     0,     0,   415,   430,   280,     0,     0,   518,     0,
   557,     0,   263,     0,   648,   657,   178,   280,   280,     0,
   440,   439,   441,   280,   508,   280,     0,   652,   653,   654,
   655,   650,   515,     0,     0,     0,     0,     0,   643,   389,
   522,   641,     0,     0,   183,     0,   190,     0,     0,     0,
   249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
   259,   215,   216,   217,   220,   219,   222,   223,   225,   226,
   227,   228,   230,   231,   233,   235,   237,   280,   280,   280,
   261,   280,   280,   207,   538,   179,   542,     0,   389,   523,
   555,     0,     0,   493,   479,     0,     0,    24,     0,   529,
   280,   546,   145,   389,   280,   389,   524,   147,   280,   269,
   363,   280,   379,     0,   387,   382,     0,   388,     0,   404,
   407,   401,   403,   284,   280,   280,   658,    15,    30,   280,
   432,   280,    17,   416,   425,   427,    36,   434,   389,   433,
   437,   514,   553,     0,   559,   280,   361,   446,     0,   432,
   442,   280,     0,   213,   389,   280,     0,   520,   521,     0,
     0,     0,   537,     0,   562,   280,   184,   182,   280,   280,
   240,     0,   243,   280,   209,   280,   211,   539,   540,   280,
   280,   280,   560,   280,   280,   389,    44,    26,   530,   533,
   280,   280,   531,   280,   547,     0,   271,   280,   365,   385,
   526,   371,   386,   526,   374,   280,   406,   280,     0,     0,
   280,   280,   280,     0,    32,     0,   280,     0,    81,   431,
   280,   443,   280,     0,   447,   450,   280,     0,   448,     0,
   432,     0,     0,   516,   464,   465,   466,   280,   280,   191,
   186,   187,   246,     0,     0,   541,   556,     0,   280,   280,
   280,   280,   280,   280,   280,   280,   280,     0,   176,   179,
   177,   192,   212,   201,   218,   221,   224,   229,   232,   234,
   236,   238,   241,     0,   565,   564,   573,   582,   592,   594,
   598,   601,   604,   609,   612,   614,   616,   618,   620,   622,
   626,   567,   175,     0,    23,    46,   107,    44,   534,   535,
   280,   532,    21,   280,   285,   389,   377,   526,   389,   378,
   526,   400,   405,   280,     0,   277,   280,   287,   275,   280,
     0,   389,    81,    34,     0,   426,   428,    37,   114,   435,
   409,     0,   280,   443,   410,   444,   558,   476,     0,   451,
   449,   452,     0,     0,   185,     0,   565,   280,   208,   210,
   646,     0,     0,   195,   200,   199,   198,   197,   196,   193,
   194,   280,   280,   280,   188,   189,     0,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   280,   280,   239,   623,   242,   480,     0,   474,
    25,    54,   101,   117,   105,   121,   122,   123,   124,   125,
   128,   129,    45,   107,    83,   106,   389,   389,    87,    46,
   536,   280,     0,   391,   389,   389,   390,   389,   389,   389,
   408,   280,   290,     0,   285,    12,    31,    33,    81,    29,
   658,   108,   119,   112,    82,   114,    85,   113,   432,   436,
   411,   412,   280,   445,   453,     0,   204,     0,   524,   247,
   645,   178,   280,     0,   183,     0,     0,     0,     0,   627,
   628,   629,   630,   631,   632,   633,   634,   635,   636,   637,
   215,   216,   217,   220,   219,   222,   223,   225,   226,   227,
   228,   230,   231,   233,   235,   237,   619,   280,   621,   280,
   473,    47,    51,     0,   389,    99,   658,    84,   138,     0,
    88,    27,   285,   280,   389,     0,   280,   392,   380,   389,
   383,   389,   402,   288,   280,   658,    35,     0,   389,    99,
   658,    86,   280,   477,   280,     0,   642,   639,   213,   280,
   184,   182,   280,   280,     0,   566,    48,     0,     0,   389,
    94,    95,    96,    97,    98,   658,    89,    99,     0,     0,
     0,   154,   118,   163,   658,     0,   153,     0,   130,   135,
   134,   133,   132,   131,   136,   137,   140,     0,   270,   280,
   394,   280,   280,   389,   397,     0,   372,     0,   375,   289,
   291,     0,    38,   658,   658,   120,   658,   152,   280,     0,
   205,   203,   638,   525,     0,   186,   187,   624,     0,     0,
     0,    58,    59,    69,    67,     0,    56,    76,     0,    63,
    66,     0,    68,     0,    99,     0,   100,    93,    91,    92,
     0,   157,     0,     0,     0,     0,     0,   150,     0,     0,
   166,   173,   658,   165,     0,   280,   286,   280,   280,     0,
   395,   280,   381,     0,   384,     0,    13,   116,   116,   151,
   478,   563,   185,   280,     0,     0,    66,     0,    72,    53,
    55,    61,    60,    62,     0,     0,     0,     0,     0,   116,
    90,   116,   158,   155,   162,   161,     0,   159,   160,   164,
   149,     0,   169,     0,     0,     0,     0,     0,   658,   272,
   398,   389,   393,   280,   373,   376,   109,   115,   111,   625,
    50,    78,    77,     0,    73,     0,     0,    70,     0,    74,
    75,     0,   102,   104,   156,   170,   167,     0,   171,   172,
   174,   127,   280,     0,   396,   399,     0,    57,    71,    64,
   168,   139,   126,   280,    65,   141,     0,     0,     0
};

static const short yydefgoto[] = {  1227,
    82,    83,    84,    85,   122,   320,   321,    86,   667,   778,
   322,   803,   919,    87,   699,   921,   904,    89,   776,   777,
   881,   882,   982,  1027,  1028,   983,   984,  1096,  1097,  1098,
  1155,  1099,  1100,  1101,  1102,  1194,   808,   809,   893,   925,
   894,  1036,  1037,  1109,  1038,  1039,   895,   985,   986,   927,
  1009,  1010,  1187,  1188,   987,   928,  1011,   897,  1224,  1213,
   898,  1057,   899,  1048,  1125,    90,   289,   453,   455,    91,
  1043,  1076,  1044,  1167,  1045,  1122,  1123,   162,   163,   526,
   164,   936,   165,   166,   425,   564,   167,   168,   169,   170,
   171,   172,   173,   174,   175,   176,   558,   177,   560,   178,
   559,   828,   179,   207,   494,   333,   290,    93,   678,   784,
   115,   606,    94,   316,   181,   287,   116,   117,   903,   799,
   914,    96,    97,    98,    99,   347,   291,   461,   101,   297,
   102,   788,  1134,   791,  1136,   681,  1066,   684,  1068,   103,
   906,   907,  1063,  1064,   104,   689,   599,   600,   813,   119,
   483,   112,   113,   106,   614,   615,   484,   485,   486,   701,
   620,   348,   819,   815,   503,   372,   373,   208,   228,   209,
   210,   374,   933,  1080,   212,   664,   213,   214,   215,   216,
   183,   430,   375,   376,   488,   637,   377,   335,   514,   378,
   188,   379,   570,   786,   999,   221,   583,   521,   429,   190,
   584,   585,   380,   191,   192,   381,   661,   624,   382,   224,
   383,   387,   719,   755,   879,   756,   757,   758,   759,   760,
   761,   762,   763,   764,   765,   766,   767,   768,   769,   770,
   771,   978,  1144,   772,  1084,   384,   385,   197,   386,   294,
   334,   200,   109
};

static const short yypact[] = {  2240,
-32768,   108,  6007,-32768,  6677,-32768,   697,  3211,  3591,  3591,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   431,-32768,-32768,
-32768,  2416,-32768,-32768,-32768,   355,-32768,-32768,  5623,-32768,
   114,-32768,-32768,-32768,    74,  6512,  6512,-32768,  6512,   140,
   149,-32768,   766,-32768,-32768,   697,-32768,-32768,-32768,-32768,
-32768,-32768,   108,-32768,-32768,   191,-32768,   140,-32768,-32768,
-32768,  6007,-32768,   217,-32768,  4477,-32768,   225,   234,   253,
-32768,   268,   697,   306,   319,   762,-32768,  2790,  4477,  4477,
  4477,  4477,  4477,  4477,-32768,  4703,  4703,   398,-32768,   393,
   425,   434,   445,   413,   219,  5070,-32768,   450,   456,-32768,
   486,-32768,   905,   898,-32768,-32768,-32768,  1049,   423,   577,
   723,   752,   488,   508,   487,   521,    67,-32768,-32768,   325,
-32768,  3738,   468,   502,-32768,-32768,-32768,-32768,   615,  3358,
-32768,  5070,-32768,  3738,-32768,  3738,-32768,-32768,   580,   636,
-32768,   620,-32768,  2979,   486,   647,   344,   599,  3401,-32768,
  3591,-32768,-32768,-32768,  6272,-32768,-32768,-32768,-32768,   656,
   676,-32768,  3591,  3591,  3738,-32768,-32768,   629,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   687,   708,-32768,-32768,-32768,
   140,  5466,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   722,   477,-32768,-32768,   697,   697,    59,-32768,   355,-32768,
-32768,-32768,-32768,   749,-32768,-32768,   758,   724,   477,   114,
-32768,   540,   759,-32768,   697,-32768,   255,  4477,-32768,-32768,
-32768,-32768,-32768,-32768,   768,  4477,  4477,  4477,   797,   770,
-32768,-32768,-32768,   516,   464,  6141,   296,   786,   800,-32768,
-32768,-32768,-32768,-32768,-32768,   816,  4477,-32768,-32768,  4477,
   828,   838,   879,   886,   891,  4477,-32768,  1718,   693,   693,
   693,-32768,-32768,  5070,-32768,-32768,-32768,-32768,   892,-32768,
-32768,  5070,-32768,  5070,-32768,-32768,-32768,  1451,  4477,-32768,
-32768,    96,  4477,  4477,  4477,  4477,  4477,  4477,  4477,  4477,
  4477,  4477,  4477,  4477,  4477,  4477,  4477,  4477,  4477,  4477,
  4477,  4477,  4477,  4477,  4477,  4477,  4477,  4477,  4477,-32768,
-32768,-32768,-32768,  4477,   716,-32768,-32768,  2601,-32768,-32768,
   910,-32768,   913,-32768,  4477,   505,   901,   920,-32768,-32768,
-32768,-32768,  6272,-32768,-32768,-32768,  3168,   954,-32768,-32768,
  4477,    68,  3840,   477,   949,-32768,   477,-32768,   570,  6677,
   896,   972,   992,   998,  1006,   998,   697,  1035,   477,-32768,
   477,-32768,-32768,-32768,   912,  1025,  1037,-32768,   477,   540,
-32768,   697,  1047,-32768,  1045,   697,   279,  1059,-32768,   333,
  1079,   385,  1079,  1069,-32768,-32768,-32768,-32768,  2008,  1078,
   587,-32768,   627,  4477,-32768,-32768,  1085,-32768,-32768,-32768,
-32768,-32768,-32768,  1109,  1116,   948,   957,   963,-32768,  3840,
-32768,-32768,  1139,  1134,-32768,   412,-32768,    99,   697,   697,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1049,  1049,   423,   423,   577,   577,
   577,   577,   723,   723,   752,   488,   508,  4477,  4477,  4477,
-32768,  4929,  4940,-32768,-32768,  5855,-32768,  3548,  4024,-32768,
-32768,  1137,   426,-32768,-32768,  1138,  1140,-32768,  1141,-32768,
  2110,-32768,-32768,  4208,  4392,-32768,   949,-32768,-32768,  1146,
-32768,-32768,  1144,  1151,-32768,  1152,  1157,-32768,   843,-32768,
  1148,-32768,-32768,-32768,   191,-32768,   406,-32768,-32768,  4477,
   358,   477,-32768,-32768,  1156,-32768,-32768,  1176,  6677,-32768,
-32768,-32768,-32768,  1158,-32768,   797,-32768,-32768,  1155,   556,
   627,  2412,  1160,-32768,-32768,-32768,  1164,-32768,-32768,  1099,
  1100,  1102,-32768,  1165,-32768,  4477,-32768,-32768,-32768,-32768,
   487,   914,   521,  4477,-32768,  4477,-32768,-32768,-32768,  4435,
  5070,  4477,-32768,  5178,  4477,-32768,-32768,-32768,-32768,-32768,
  4618,  4661,-32768,  4844,-32768,  1166,-32768,-32768,-32768,-32768,
-32768,  1175,-32768,-32768,  1177,-32768,   697,-32768,   697,  1178,
  2040,-32768,-32768,  1171,-32768,  1180,-32768,   348,-32768,-32768,
   697,   614,  5070,  1182,-32768,-32768,   137,  1181,-32768,  1183,
   109,  1186,  1184,-32768,-32768,-32768,-32768,  4477,  5178,-32768,
-32768,-32768,-32768,  1187,  1189,-32768,-32768,   452,  4477,  4477,
  4477,  4477,  4477,  4477,  4477,  4703,  4703,  1179,   504,   575,
   582,  1077,  1033,   604,  1081,   918,   981,   850,  1024,  1173,
  1169,  1185,  1161,    90,  1190,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   612,   660,-32768,-32768,  1326,-32768,-32768,-32768,
  4887,-32768,-32768,-32768,-32768,  6599,-32768,-32768,  6599,-32768,
-32768,-32768,-32768,  4477,  1054,-32768,  2040,-32768,-32768,  2040,
  1123,-32768,-32768,-32768,  1193,-32768,-32768,-32768,  1429,-32768,
   355,  1195,-32768,   539,-32768,   627,-32768,-32768,  1196,-32768,
-32768,-32768,  1197,   697,-32768,   695,  1201,  4477,-32768,-32768,
  1202,   729,  1205,   782,   798,   830,   853,   874,   885,   893,
   895,  4477,  1633,  4477,   902,   909,   155,  4477,  4477,  4477,
  4477,  4477,  4477,  4477,  4477,  4477,  4477,  4477,  4477,  4477,
  4477,  4477,  4477,  4477,  4477,  4477,  4477,  4477,  4477,  4477,
  4477,  4477,  4477,  4477,  4477,-32768,  4477,-32768,  1211,  1215,
-32768,  1057,    24,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1066,-32768,-32768,-32768,-32768,  1030,-32768,
-32768,  2040,   583,-32768,   140,  5701,-32768,  6599,  5701,  6599,
-32768,-32768,-32768,  1098,-32768,-32768,-32768,-32768,-32768,-32768,
   114,   300,-32768,-32768,-32768,  1080,-32768,-32768,   189,-32768,
-32768,-32768,  3694,-32768,-32768,   638,-32768,  1220,   949,-32768,
-32768,   916,  4477,  1221,   945,   946,   240,   697,   697,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   947,   970,   971,   858,   993,   523,   673,   410,   489,   622,
   662,   467,   652,   427,   254,   336,   487,  4477,   521,  5178,
-32768,-32768,  1065,  1067,  6403,    57,    81,-32768,-32768,   866,
-32768,-32768,-32768,-32768,-32768,  1228,   366,-32768,-32768,  5701,
-32768,  5701,-32768,-32768,  1979,   764,-32768,  1159,  6403,    57,
    81,-32768,   755,-32768,-32768,   697,-32768,  1061,  1021,-32768,
  1022,  1023,-32768,-32768,  1101,-32768,-32768,  1073,   101,  5309,
-32768,-32768,-32768,-32768,-32768,   840,-32768,    57,   944,    55,
    55,-32768,-32768,   285,   987,  1167,-32768,   151,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1001,-32768,   477,
-32768,-32768,  1232,-32768,  1235,  1236,-32768,  1239,-32768,-32768,
-32768,  1188,-32768,  5151,   840,-32768,   987,-32768,   654,  1229,
-32768,-32768,-32768,-32768,  1238,  1032,  1034,-32768,   101,   101,
   156,-32768,-32768,-32768,-32768,  1194,   101,-32768,  1104,-32768,
   370,  1237,-32768,  1198,    57,  1199,-32768,-32768,-32768,-32768,
   705,   285,    85,   697,   697,    55,  1204,-32768,   151,   151,
-32768,   543,  1052,-32768,   151,-32768,-32768,  4477,   366,  1250,
-32768,-32768,-32768,  1249,-32768,  1251,-32768,  1200,  1200,-32768,
-32768,-32768,  1043,  4477,  1207,  1113,   711,   156,   370,-32768,
-32768,-32768,-32768,-32768,   101,    41,   697,   697,   101,  1200,
-32768,  1200,-32768,-32768,-32768,   285,  1245,-32768,-32768,   285,
-32768,   792,   543,   823,   697,   697,   151,  1208,  1052,-32768,
-32768,-32768,-32768,  4477,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   101,-32768,   711,  1256,-32768,  1248,-32768,
-32768,  1259,-32768,-32768,-32768,-32768,-32768,  1254,-32768,-32768,
   543,-32768,-32768,  1209,-32768,-32768,  1264,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1290,  1293,-32768
};

static const short yypgoto[] = {-32768,
-32768,  1216,-32768,-32768,-32768,-32768,  -391,  -105,-32768,-32768,
   974,-32768,-32768,-32768,-32768,-32768,   107,-32768,   522,-32768,
   405,-32768,-32768,-32768,-32768,-32768,-32768,  -897,-32768,-32768,
-32768,  -931,-32768,  -943,-32768,-32768,  -709,-32768,-32768,-32768,
  -696,   299,   201,-32768,-32768,   272,   417,-32768,-32768,   386,
-32768,-32768,  -863,  -674,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -884,   141,   303,  -959,   194,-32768,  -647,   475,
  1234,-32768,-32768,  -590,-32768,-32768,    11,  -363,  -402,  -245,
  -350,  -348,  -371,  -352,  -471,  -483,-32768,  -578,-32768,   -24,
-32768,-32768,   928,  1332,  -610,  -360,    15,-32768,-32768,-32768,
  -465,-32768,-32768,-32768,     0,  -226,   849,-32768,  -811,  -716,
-32768,-32768,-32768,-32768,-32768,-32768,    80,   740,-32768,   585,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   967,
  -699,  -611,-32768,   204,-32768,-32768,   645,   648,   524,    13,
  -376,  1224,-32768,     8,-32768,-32768,  -584,-32768,-32768,-32768,
   640,  -233,   995,-32768,  -496,   193,-32768,  1329,-32768,  1120,
-32768,  1041,-32768,-32768,-32768,-32768,   -39,-32768,-32768,-32768,
-32768,    63,  1231,  1362,-32768,-32768,  1616,-32768,-32768,  -354,
-32768,   969,   264,  -551,  -582,-32768,   829,-32768,-32768,   922,
   -87,  -420,   127,-32768,   221,    84,-32768,-32768,   170,-32768,
   211,-32768,-32768,   632,-32768,   373,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1686,-32768,-32768,  1731,  -311,
   188,   446,-32768
};


#define	YYLAST		6866


static const short yytable[] = {    95,
   309,   292,    95,   604,   631,   513,   547,   548,   475,   114,
   229,   230,   105,   515,    92,   704,   742,   231,   232,   233,
   234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   545,   546,   708,   556,   257,   258,   259,
   260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
   270,   271,   272,   273,   553,   554,   557,  1198,   555,   462,
   184,   742,   481,   744,   284,   579,   653,   467,  1040,   100,
   913,    95,   118,   915,   121,   754,   651,   613,  1041,   909,
   577,   193,   578,   918,   105,   477,    92,   295,   293,   301,
   588,   332,   896,  1006,  1040,    95,    88,   421,  1040,  -103,
  -103,  1164,   926,   481,  1041,   314,   315,   317,  1041,   424,
   312,   323,   422,   529,  1090,   648,   823,   443,   744,   325,
   876,   293,   789,   822,  1091,   222,   222,   346,   629,   530,
   754,     2,  1031,  1032,   356,   877,  1147,  1149,   660,   350,
   351,   352,   353,   354,   355,  1111,  1112,  -280,  1146,  1172,
  1173,   100,   499,   672,   437,   549,   550,   551,   552,   441,
     2,   442,  1033,  1034,  1119,   296,   296,   194,   296,  1148,
   753,  1058,   948,   446,  1120,   993,  1035,   107,    88,  1091,
   107,  1145,   752,   481,   107,   199,   199,   199,   949,  1151,
   349,   324,   991,   346,  1196,   816,  -103,  -103,  1000,  1007,
  1002,   313,  -389,   706,  -389,   110,   111,  1211,   195,   896,
   697,   193,  -389,  1197,   366,   367,  1199,  1202,  1166,   223,
   223,  1170,   515,   303,   696,   753,   908,    76,  1042,   910,
   327,    76,    77,   123,   426,    79,    80,   752,   336,   694,
  -389,  -389,  -389,   477,  -389,  -389,   432,   337,   433,   481,
   424,   746,  1217,    76,  1042,   193,  1022,    76,  1042,   107,
  1165,   710,   635,   193,  -615,  1189,   338,   193,  -615,   193,
  1092,  1093,   417,    76,  1094,   451,  1095,   448,  1071,  1166,
   301,   339,   750,   107,   998,   693,  1203,   998,  1204,   424,
   745,    95,   460,   497,   463,   465,   456,   194,   193,   107,
  1113,   751,  1114,   748,   459,   749,   746,   816,    95,  -280,
   107,   499,  1014,   341,   323,   199,  1001,   346,  1115,     2,
   222,   474,   742,    76,  1121,   222,   342,   222,    76,  1094,
   569,   332,   423,   199,   708,   424,   500,   750,   195,   222,
   222,   194,   806,   424,   501,   745,  -617,   623,   462,   194,
  -617,   439,   481,   194,   424,   194,   751,   346,   748,   199,
   749,  -389,  -389,  -389,   418,  -389,  -389,   199,  -281,   199,
   286,   199,   695,   199,   431,  -110,  -110,  1062,   998,   744,
   998,   199,   195,   979,   194,  1156,   199,  1157,   199,     2,
   195,   754,   713,   977,   195,   424,   195,   441,   361,   625,
   199,   199,   199,  1158,   542,   543,   544,  1067,   747,  1069,
   724,   360,   725,   293,   223,   498,   332,   365,   692,   223,
  -605,   223,   646,   911,  -605,   195,   647,  -389,  -389,  -389,
   362,  -389,  -389,   223,   223,   108,   424,  -613,   108,   363,
   663,  -613,   124,    95,   407,   408,    95,   456,   409,   410,
   364,   966,   967,   594,  -667,   597,   586,   603,    95,   589,
    95,  -661,   424,   747,   332,   610,   831,  -665,   323,   415,
   416,   423,  -110,  -110,   424,   619,   325,  -610,   497,   107,
   567,  -610,   107,   107,   107,   833,   753,   627,   964,   965,
   500,   975,   633,   411,   412,   460,   107,  -662,   752,  -606,
     2,   193,   107,  -606,   634,  -667,   417,   413,   414,   972,
   973,   976,   439,   974,  -570,   424,   419,   108,  -570,   497,
    76,    77,   123,   496,    79,    80,   424,   409,   410,   498,
  -389,  -389,  -389,  -602,  -389,  -389,   418,  -602,    76,    77,
   123,   108,    79,    80,   407,   408,   516,   517,   518,   427,
   481,   199,  -280,  -281,   499,   476,   519,   326,  1174,   199,
  1175,   199,     2,   222,   522,   420,   523,   746,   340,  -389,
   706,  -389,   631,   456,  1018,   332,  1176,  -389,   676,  -389,
  -389,   460,  -389,  -498,  1127,  -569,   811,   194,   456,  -569,
   994,  -664,  -571,   995,   690,   691,  -571,   332,   750,  1008,
  -280,   323,   499,  -667,  -667,   199,   745,  -667,  -667,   325,
   968,   969,   970,   971,  -591,   409,   410,   751,  -591,   748,
   633,   749,  -568,   428,   199,   460,  -568,  -280,   195,   499,
   199,   107,  -607,   435,   107,   582,  -607,     2,   721,   722,
  -280,   193,   632,   346,   107,   346,   107,   434,   107,    76,
    77,   123,  1015,    79,    80,  1016,   107,   223,  -663,   107,
   409,   410,  -611,   107,   444,  1046,  -611,   785,  -440,   499,
   424,   298,  -608,   300,   880,   792,  -608,   794,   411,   412,
   440,   800,   801,  -603,  1072,   445,   805,  -603,   702,  1078,
   619,   812,   413,   414,   407,   408,   500,   199,   811,   814,
   409,   410,   582,   450,   501,   424,   107,   107,  1104,   938,
   449,    76,    77,   123,  1106,    79,    80,   931,   346,  1163,
  1113,   452,  1114,  1117,   747,  1195,  1156,   194,  1157,   458,
   834,   835,   836,   837,   838,   839,   473,   108,  1115,   424,
   464,   466,   468,   942,  1158,   199,   199,   562,   563,   411,
   412,   582,  1138,  1139,   108,  1140,   470,  1181,   199,   332,
   326,   199,   199,   413,   414,   472,   582,   675,   195,   343,
   499,   293,   478,   902,   995,   328,  1085,   495,     2,   489,
   139,   140,   141,   142,   143,   144,    76,    77,   123,   107,
    79,    80,  -585,   940,   415,   416,  -585,   145,   146,   147,
   504,  1178,   930,   812,  -262,   633,  1206,  1174,  -590,  1175,
   328,   814,  -590,  1216,   505,   139,   140,   141,   142,   143,
   144,   148,   305,   306,   307,  1176,    76,    77,   123,   506,
    79,    80,   145,   146,   147,   508,  1040,   199,   199,  1207,
  -589,   773,   675,   727,  -589,   509,  1041,   293,   199,   199,
  1105,   199,   686,   687,   675,   905,   148,  1214,   905,   961,
   962,   963,   157,  -588,   107,    76,   107,  -588,  -600,    76,
    77,   123,  -600,    79,    80,   107,   866,   867,   107,   107,
   199,   404,   405,   406,  -587,   817,   510,  1030,  -587,   108,
   868,   869,   108,   511,   996,  -586,   773,   157,   512,  -586,
   520,  1003,   601,  -583,   108,  -584,   108,  -583,   571,  -584,
   393,  1074,  -580,   572,   326,   574,  -580,   616,   388,  -581,
   389,   621,  -389,  -581,   424,   723,  -572,    76,    77,   123,
  -572,    79,    80,   575,    76,   329,   330,   160,  -389,   862,
   863,   390,   391,  1019,   394,   395,   396,   397,   398,   399,
   400,   401,   402,   403,   576,  -575,   646,  -595,   199,  -575,
  1021,  -595,   587,   309,   649,   650,   189,   220,   220,    76,
   329,   330,   160,   591,  1049,   905,  1050,   905,   905,   905,
  -596,  -597,   592,  1059,  -596,  -597,    95,  1051,  1052,   608,
  1053,   107,  1054,  1055,   293,    76,  1042,  1116,  1165,  1065,
   593,   107,   812,  -599,  1081,  1056,  -280,  -599,  1126,   460,
  1079,   995,  1086,  1087,   596,   589,   404,   405,   406,   864,
   865,   274,   275,   276,   277,   278,   279,   280,   281,   282,
   283,  -593,  -576,  -574,   456,  -593,  -576,  -574,   182,   211,
   211,   609,  -578,   602,  -579,   848,  -578,   326,  -579,    95,
   611,  1128,  1130,  -577,   299,   618,   302,  -577,   304,   293,
   308,   617,  1177,   912,   687,   310,   870,   871,   812,   905,
   622,   905,   404,   405,   406,   318,   626,   319,   456,   849,
   850,   851,   852,   853,   854,   855,   856,   857,   858,   424,
   843,   630,   844,   332,  -389,   636,   189,   886,   887,   888,
   889,   890,   891,   892,   859,   860,   861,  1004,  1005,  1190,
  -389,   424,  1088,   845,   846,  1180,    76,  1108,    95,   392,
   638,  1184,   601,   640,   601,   107,   107,   883,   884,   885,
   639,  1065,   641,   807,  1192,  1193,   621,   108,   642,   644,
   189,   922,   923,   924,  1152,  1153,  1154,   645,   189,   332,
   662,   665,   189,   680,   189,   668,   666,   773,   677,   682,
   688,   683,   220,   438,  1047,   685,   698,   220,   182,   220,
   700,   705,   703,   711,   107,   714,   715,   716,   718,   717,
   783,   220,   220,   189,   787,   796,   790,   802,  1047,   818,
   107,   872,   842,   107,   804,   820,   824,   873,   825,   821,
   916,   829,  1222,   830,   878,   875,  1103,   920,   929,   941,
   934,   935,   182,  1226,   874,   939,  1110,  1047,  1047,   943,
   182,   980,   981,   -52,   182,  1124,   182,  1017,   185,   217,
   217,  1020,   -49,  1029,   211,  1061,  1073,   107,  1083,   211,
  1089,   211,  1129,  1141,  1118,  1133,  1132,   454,  1135,   108,
  1159,   457,  1143,   211,   211,   182,   107,  1183,  1185,   937,
  1186,  1205,   884,  1218,  1219,  1137,  1103,  1103,  1103,   469,
  1221,  1150,   471,  1220,  1103,  1160,  1162,   507,  1225,  1228,
   479,  1171,  1229,   482,  1191,  1212,  1223,   285,   480,   900,
  1047,   107,   107,  1047,   992,  1161,  1124,  1124,  1075,  1107,
   988,  1012,  1124,  1077,  1208,   527,   107,   946,  1179,   605,
   531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
   541,   679,  1182,   795,   793,  1103,   311,   932,   227,   180,
   810,   502,  1103,   447,   107,   107,  1103,  1142,   643,   568,
   827,   561,  1026,     0,     0,   524,     0,     0,     0,   331,
     0,  1047,   107,   107,  1124,     0,     0,     0,   185,   186,
   218,   218,   331,   331,   331,   331,   331,   331,     0,   358,
   359,  1103,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1023,  1024,     0,   189,   883,   884,   885,
     0,     0,     0,   886,   887,   888,   889,   890,   891,   892,
     0,     0,   185,     0,     0,   220,     0,     0,   482,     0,
   185,     0,     0,     0,   185,   590,   185,     0,     0,     0,
   595,     0,   598,     0,   217,     0,     0,     0,     0,   217,
   607,   217,   108,     0,   612,     0,     0,     0,     0,     0,
     0,     0,     0,   217,   217,   185,     0,     0,   108,     0,
     0,  1082,     0,     0,     0,     0,     0,   344,   182,   345,
     0,     0,     0,     0,   328,   525,     0,     0,     0,   139,
   140,   141,   142,   143,   144,     0,     0,   211,     0,     0,
     0,     0,     0,     0,     0,     0,   145,   146,   147,   186,
   922,   923,   924,     0,     0,   108,   886,   887,   888,   889,
   890,   891,   892,   180,     0,     0,     0,     0,     0,     0,
   148,   180,     0,     0,   108,   180,     0,   180,     0,     0,
     0,     0,     0,     0,     0,   436,   189,     0,     0,     0,
     0,     0,     0,   186,     0,     0,     0,     0,     0,     0,
     0,   186,   590,     0,     0,   186,   180,   186,     0,  1168,
  1169,   157,     0,     0,     0,   218,     0,     0,     0,     0,
   218,     0,   218,   720,   108,     0,     0,   482,     0,     0,
     0,     0,     0,     0,   218,   218,   186,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   707,     0,     0,   331,
     0,   712,  1200,  1201,     0,     0,     0,     0,   182,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   798,     0,
  1209,  1210,     0,   187,   219,   219,     0,     0,     0,     0,
     0,     0,   775,    76,   329,   330,   160,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,     0,     0,     0,   328,   945,   185,   487,
     0,   139,   140,   141,   142,   143,   144,   490,   491,   492,
   493,     0,     0,     0,     0,     0,     0,   217,   145,   146,
   147,     0,     0,     0,   331,     0,     0,     0,   487,     0,
     0,     0,     0,   196,   225,   225,     0,     0,     0,   487,
     0,     0,   148,     0,     0,     0,     0,     0,   847,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   528,     0,     0,     0,   798,     0,     0,   798,     0,     0,
     0,     0,   331,     0,     0,     0,  -524,   331,   198,   226,
   226,   368,     0,   157,     0,     0,   139,   140,   141,   142,
   143,   144,     0,   187,     0,     0,     0,     0,     0,   180,
     0,     0,     0,   145,   146,   147,   573,     0,   917,   944,
   527,     0,     0,     0,     0,   950,   951,   952,   953,   954,
   955,   956,   957,   958,   959,   960,     0,   148,     0,   186,
     0,   331,     0,   331,     0,   655,   657,   187,   185,     0,
     0,     0,     0,     0,     0,   187,     0,     0,   218,   187,
     0,   187,     0,     0,     0,    76,   329,   330,   160,   219,
     0,     0,     0,   196,   219,     0,   219,     0,   157,   798,
     0,     0,     0,     0,     0,     0,     0,     0,   219,   219,
   187,     0,     0,   331,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   989,   990,   331,     0,   196,   198,     0,
     0,   997,     0,     0,     0,   196,     0,     0,     0,   196,
     0,   196,     0,     0,     0,     0,     0,     0,     0,   225,
   652,     0,     0,     0,   225,  1013,   225,   743,     0,   180,
    76,   329,   330,   160,     0,     0,     0,     0,   225,   225,
   196,     0,   198,     0,     0,     0,     0,     0,     0,     0,
   198,     0,     0,     0,   198,     0,   198,     0,     0,   186,
     0,     0,   798,     0,   226,     0,     0,     0,     0,   226,
     0,   226,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   743,   226,   226,   198,     0,   493,     0,     0,
     0,  1060,     0,   331,   331,   331,   331,   331,   331,   840,
   841,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   487,     0,   487,     0,     0,
     0,     0,     0,   728,     0,     0,   774,   797,  1070,     0,
     0,     0,   328,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   145,   146,   147,   331,     0,     0,
  1131,   328,     0,     0,   628,     0,   139,   140,   141,   142,
   143,   144,     0,   187,     0,     0,     0,     0,   148,   826,
     0,     0,     0,   145,   146,   147,     0,     0,   797,     0,
   832,   331,   219,   328,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,   148,     0,     0,
     0,     0,     0,     0,     0,   145,   146,   147,     0,   157,
     0,     0,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   148,
   331,     0,     0,   196,     0,   126,   127,   128,   157,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -524,   669,
     0,     0,   225,   368,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,  1215,     0,
   157,     0,     0,     0,     0,   145,   146,   147,   198,     0,
     0,    76,   329,   330,   160,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   947,   331,   226,     0,   148,
     0,     0,     0,   187,     0,     0,     0,     0,     0,     0,
    76,   329,   330,   160,     0,     0,     0,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,   743,     0,     0,   156,     0,     0,     0,
   157,     0,    76,   329,   330,   160,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    -1,
     1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   196,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  -280,   493,     0,     0,     0,     0,     0,
     0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     3,   369,     0,     0,   370,     0,
     0,   371,    76,   158,   159,   160,   161,    80,   198,     0,
     0,     0,     0,     0,     0,     0,  -389,  -389,  -389,  1025,
     4,     0,     0,     0,     5,     6,     7,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     8,     9,
    10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
     0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,   331,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,   331,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    -2,     1,   331,     0,     0,
     0,     0,    76,    77,    78,     0,    79,    80,    81,     0,
     0,     0,     0,     0,     0,   328,     0,     0,   709,  -280,
   139,   140,   141,   142,   143,   144,     0,     0,     0,     2,
     0,     0,     0,     0,     0,     0,     0,   145,   146,   147,
     3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   148,  -389,  -389,  -389,     0,     4,     0,     0,     0,
     5,     6,     7,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     8,     9,    10,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   157,    11,    12,    13,     0,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,     0,     0,     0,    76,   329,   330,   160,    76,    77,
    78,   125,    79,    80,    81,     0,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   137,  -524,
   565,     0,     0,     0,   138,     0,     0,     0,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,  -280,  -280,     0,     3,   145,   146,   147,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  -389,  -389,  -389,
   148,     4,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   156,    11,    12,
    13,   157,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
     0,     0,     0,    76,   158,   566,   160,   161,    80,    81,
   125,     0,     0,     0,     0,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   137,  -524,     0,
     0,     0,     0,   138,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,  -280,  -280,     0,     0,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  -280,  -280,  -280,   148,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   156,  -280,  -280,  -280,
   157,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,     0,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,     0,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,     0,     0,     0,     0,     0,
     0,     0,    76,   158,   159,   160,   161,    80,  -280,   201,
     0,     0,     0,     0,   126,   127,   128,     0,     0,   202,
   131,   132,   133,   134,   135,   136,   203,  -524,  -528,     0,
     0,     0,   204,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
  -280,  -280,     0,     0,   145,   146,   147,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  -280,  -280,  -280,   148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   156,  -280,  -280,  -280,   157,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
     0,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,     0,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,     0,     0,     0,     0,     0,     0,
     0,    76,   158,   159,   160,   205,   206,  -280,   201,     0,
     0,     0,     0,   126,   127,   128,     0,     0,   202,   131,
   132,   133,   134,   135,   136,   203,  -472,  -472,     0,     0,
     0,   204,  -472,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -280,
  -280,   125,     0,   145,   146,   147,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   137,  -524,
     0,     0,     0,     0,   138,     0,     0,   148,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,  -280,  -280,     0,     0,   145,   146,   147,  -472,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
   148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   149,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
     0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    76,   158,   159,   160,   205,   206,     0,     0,   125,     0,
     0,     0,     0,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -524,     0,     0,     0,
     0,   138,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,    76,   158,   159,   160,   161,    80,  -280,
  -280,   201,     0,   145,   146,   147,   126,   127,   128,     0,
     0,   202,   131,   132,   133,   134,   135,   136,   203,  -524,
  -528,     0,     0,     0,   204,     0,     0,   148,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,  -280,  -280,     0,     0,   145,   146,   147,  -499,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
   148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  -468,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
     0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    76,   158,   159,   160,   161,    80,     0,     0,   125,     0,
     0,     0,     0,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -524,   658,     0,     0,
     0,   138,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,    76,   158,   159,   160,   205,   206,  -280,
  -280,   201,     0,   145,   146,   147,   126,   127,   128,     0,
     0,   202,   131,   132,   133,   134,   135,   136,   203,  -524,
  -528,     0,     0,     0,   204,     0,     0,   148,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,  -280,  -280,     0,     0,   145,   146,   147,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
   148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
     0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   328,  -262,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
    76,   158,   159,   160,   161,    80,     0,     0,   125,   145,
   146,   147,     0,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -524,     0,     0,     0,
     0,   138,     0,   148,     0,     0,   139,   140,   141,   142,
   143,   144,     0,    76,   158,   159,   160,   205,   206,  -280,
  -280,     0,     0,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   157,     0,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,   126,   127,   128,   157,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -524,   580,
     0,     0,     0,   368,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,    76,   329,   330,   160,
     0,  -280,  -280,     0,     3,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    76,   158,   159,   160,   161,    80,     0,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   581,    11,    12,    13,
   157,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,   369,     0,     0,   370,     0,
     0,   371,    76,   158,   566,   160,   161,    80,    81,   126,
   127,   128,     0,   129,   130,   131,   132,   133,   134,   135,
   136,   203,  -524,   659,     0,     0,     0,   368,     0,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,     0,     0,  -280,  -280,     0,     3,   145,
   146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   148,     4,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   150,   151,   152,   153,
   154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
   156,    11,    12,    13,   157,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   369,
     0,     0,   370,     0,     0,   371,    76,   158,   566,   160,
   161,    80,    81,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -524,   670,     0,     0,
     0,   368,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -280,
  -280,     0,     3,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   148,     4,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   671,    11,    12,    13,   157,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,     0,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,   369,     0,     0,   370,     0,     0,   371,
    76,   158,   566,   160,   161,    80,    81,   126,   127,   128,
     0,   129,   130,   131,   132,   133,   134,   135,   136,   203,
  -524,   673,     0,     0,     0,   368,     0,     0,     0,     0,
   139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   145,   146,   147,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   203,  -524,   726,     0,     0,     0,   368,     0,
     0,   148,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   145,   146,   147,     0,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   674,     0,
   328,     0,   157,     0,   148,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   145,   146,   147,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,   148,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   369,     0,     0,
   370,     0,     0,   371,    76,   158,   159,   160,   161,    80,
     0,     0,     0,     0,     0,     0,     0,   157,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   369,     0,     0,   370,     0,     0,   371,    76,   158,   159,
   160,   161,    80,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -524,   779,     0,     0,
     0,   368,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,    76,
   329,   330,   160,   145,   146,   147,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   203,  -524,
   780,     0,     0,     0,   368,     0,     0,   148,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   145,   146,   147,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,   357,     0,   157,     0,
   148,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   145,   146,
   147,     0,     0,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   781,     0,     0,
     0,   157,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   369,     0,     0,   370,     0,     0,   371,
    76,   158,   159,   160,   161,    80,     0,     0,     0,     0,
     0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   369,     0,     0,   370,
     0,     0,   371,    76,   158,   159,   160,   161,    80,   126,
   127,   128,     0,   129,   130,   131,   132,   133,   134,   135,
   136,   203,  -524,   782,     0,     0,     0,   368,     0,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,     0,     0,    76,   329,   330,   160,   145,
   146,   147,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   203,  -524,   901,     0,     0,     0,
   368,     0,     0,   148,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   145,   146,   147,     0,   150,   151,   152,   153,
   154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
   156,     0,   654,     0,   157,     0,   148,   139,   140,   141,
   142,   143,   144,   656,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,   145,   146,   147,     0,     0,   150,
   151,   152,   153,   154,   155,   145,   146,   147,     0,     0,
     0,     0,     0,   156,     0,     0,     0,   157,   148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
     0,     0,   370,     0,     0,   371,    76,   158,   159,   160,
   161,    80,     0,     0,     0,     0,     0,     0,     0,   157,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   369,     0,     0,   370,     0,     0,   371,    76,
   158,   159,   160,   161,    80,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -524,     0,
     0,     0,     0,   368,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,    76,   329,   330,   160,   145,   146,   147,     0,     0,
     0,     0,    76,   329,   330,   160,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,   293,     0,
     0,     0,     0,     0,     0,     0,   156,     0,     0,     0,
   157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
     0,   729,     0,     0,     0,     0,   730,   731,   732,   733,
   734,   735,     0,     0,     0,     0,     0,  -389,  -389,  -389,
     0,     4,     0,   145,   736,   737,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   369,     0,   738,   370,     0,
     0,   371,    76,   158,   159,   160,   161,    80,    11,    12,
    13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,   157,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,   293,     0,     0,     0,
     0,     0,     0,     0,     0,   120,     0,     0,     0,    81,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     3,     0,     0,     0,     0,     0,     0,
    76,   739,   740,   741,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  -658,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    11,    12,    13,     0,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,  -146,     0,     0,     0,     0,  -146,
     0,     0,     0,   120,     0,     0,     0,    81,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    11,    12,    13,     0,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,   288,     0,     0,     0,     0,     0,     0,     0,     0,
   120,     0,     0,     0,    81,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  -527,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   120,    11,    12,
    13,    81,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,  -665,     0,     0,     0,
     0,     0,     0,     0,     0,   120,     0,     0,     0,    81,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -667,  -667,  -667,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  -667,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  -667,  -667,  -667,     0,  -667,  -667,  -667,  -667,
  -667,  -667,  -667,  -667,  -667,  -667,     0,  -667,  -667,  -667,
  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
  -667,  -667,     0,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
  -280,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     2,     0,     0,  -667,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    11,    12,    13,     0,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,     0,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,  -206,  -206,     0,     0,     0,     0,     0,    76,
    77,    78,     0,    79,    80,    81,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
    13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,     3,     0,     0,     0,
     0,     0,     0,     0,     0,   120,     0,     0,     0,    81,
     0,     0,     0,     0,     0,     0,     0,     0,  -389,  -389,
  -389,     0,     4,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
    12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,     3,     0,     0,
     0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
    81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,  -389,  -389,
  -389,     0,     0,     0,     0,     0,     0,   120,     0,     0,
     0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
    12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,     8,     9,    10,
     0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
    81,     0,     0,     0,     0,     0,    11,    12,    13,     0,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   120,    11,    12,    13,    81,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,     0,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   120,     0,     0,     0,    81
};

static const short yycheck[] = {     0,
   106,    89,     3,   469,   501,   366,   409,   410,   320,     2,
    11,    12,     0,   368,     0,   626,   664,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,   407,   408,   630,   418,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,   415,   416,   419,    27,   417,   303,
     8,   719,     5,   664,    75,   452,   560,    19,    24,     0,
   797,    82,     3,   800,     5,   664,   558,   479,    34,   789,
   451,     8,    25,   803,    82,   322,    82,    24,    18,   100,
   455,   126,   777,   915,    24,   106,     0,    41,    24,    86,
    87,    27,   809,     5,    34,   116,   117,   118,    34,    21,
   113,   122,    56,    28,    24,    27,   711,   215,   719,   122,
    41,    18,   684,    25,    34,     9,    10,   138,   499,    44,
   719,    34,    86,    87,   145,    56,  1090,  1091,   569,   139,
   140,   141,   142,   143,   144,  1040,  1041,    18,  1090,  1119,
  1120,    82,    26,   584,   204,   411,   412,   413,   414,   209,
    34,   211,   116,   117,    24,    96,    97,     8,    99,    24,
   664,   993,    28,   223,    34,   902,   130,     0,    82,    34,
     3,  1089,   664,     5,     7,     8,     9,    10,    44,  1097,
   138,   122,   899,   204,  1148,   702,   183,   184,   908,   919,
   910,    21,    24,    25,    26,   108,   109,  1177,     8,   894,
   612,   138,    34,  1155,     6,     7,   186,  1159,  1113,     9,
    10,  1116,   587,    85,   611,   719,   788,   183,   184,   791,
    24,   183,   184,   185,   182,   187,   188,   719,    24,   610,
   183,   184,   185,   480,   187,   188,   194,    24,   196,     5,
    21,   664,  1194,   183,   184,   182,    27,   183,   184,    82,
   186,   632,   506,   190,    21,  1139,    24,   194,    25,   196,
   180,   181,    29,   183,   184,   286,   186,   225,  1005,  1174,
   291,    24,   664,   106,   906,   607,  1160,   909,  1162,    21,
   664,   302,   303,    25,   305,   306,   292,   138,   225,   122,
    26,   664,    28,   664,   302,   664,   719,   814,   319,    24,
   133,    26,   933,    18,   325,   138,   909,   328,    44,    34,
   204,   319,   980,   183,   184,   209,    18,   211,   183,   184,
   428,   366,    18,   156,   929,    21,   347,   719,   138,   223,
   224,   182,     5,    21,   347,   719,    21,    25,   592,   190,
    25,    18,     5,   194,    21,   196,   719,   368,   719,   182,
   719,   183,   184,   185,    39,   187,   188,   190,    24,   192,
    26,   194,    25,   196,   192,    86,    87,    22,  1000,   980,
  1002,   204,   182,   877,   225,    26,   209,    28,   211,    34,
   190,   980,   636,   875,   194,    21,   196,   447,    16,    25,
   223,   224,   225,    44,   404,   405,   406,  1000,   664,  1002,
   654,    24,   656,    18,   204,   346,   451,    15,    23,   209,
    21,   211,    21,   794,    25,   225,    25,   183,   184,   185,
    16,   187,   188,   223,   224,     0,    21,    21,     3,    16,
    25,    25,     7,   454,    32,    33,   457,   443,    49,    50,
    16,   864,   865,   464,    34,   466,   454,   468,   469,   457,
   471,    22,    21,   719,   499,   476,    25,    22,   479,    53,
    54,    18,   183,   184,    21,   486,   479,    21,    25,   302,
   428,    25,   305,   306,   307,   729,   980,   498,   862,   863,
   501,   873,   503,    37,    38,   506,   319,    22,   980,    21,
    34,   428,   325,    25,   504,    85,    29,    51,    52,   870,
   871,   874,    18,   872,    21,    21,    40,    82,    25,    25,
   183,   184,   185,    18,   187,   188,    21,    49,    50,   460,
   183,   184,   185,    21,   187,   188,    39,    25,   183,   184,
   185,   106,   187,   188,    32,    33,   369,   370,   371,    92,
     5,   374,    24,    24,    26,    26,   374,   122,    26,   382,
    28,   384,    34,   447,   382,    55,   384,   980,   133,    24,
    25,    26,  1079,   569,   939,   610,    44,    18,   589,    34,
    21,   592,    23,    92,  1060,    21,   702,   428,   584,    25,
    18,    22,    21,    21,   605,   606,    25,   632,   980,   921,
    24,   612,    26,   183,   184,   428,   980,   187,   188,   612,
   866,   867,   868,   869,    21,    49,    50,   980,    25,   980,
   631,   980,    21,    19,   447,   636,    25,    24,   428,    26,
   453,   454,    21,    24,   457,   453,    25,    34,   649,   650,
    24,   568,    26,   654,   467,   656,   469,    22,   471,   183,
   184,   185,    25,   187,   188,    28,   479,   447,    22,   482,
    49,    50,    21,   486,    19,   987,    25,   678,    25,    26,
    21,    97,    21,    99,    25,   686,    25,   688,    37,    38,
    92,   692,   693,    21,  1006,    20,   697,    25,   619,  1011,
   701,   702,    51,    52,    32,    33,   707,   520,   814,   702,
    49,    50,   520,    27,   707,    21,   529,   530,  1030,    25,
    92,   183,   184,   185,  1036,   187,   188,   189,   729,    25,
    26,    24,    28,  1045,   980,    25,    26,   568,    28,    18,
   730,   731,   732,   733,   734,   735,    23,   302,    44,    21,
   305,   306,   307,    25,    44,   568,   569,    42,    43,    37,
    38,   569,  1074,  1075,   319,  1077,    18,  1128,   581,   794,
   325,   584,   585,    51,    52,    18,   584,   585,   568,    18,
    26,    18,    24,   784,    21,    24,  1020,    18,    34,    22,
    29,    30,    31,    32,    33,    34,   183,   184,   185,   612,
   187,   188,    21,   828,    53,    54,    25,    46,    47,    48,
    25,  1123,   813,   814,    18,   816,    25,    26,    21,    28,
    24,   814,    25,  1184,    25,    29,    30,    31,    32,    33,
    34,    70,    67,    68,    69,    44,   183,   184,   185,    24,
   187,   188,    46,    47,    48,    18,    24,   660,   661,    27,
    21,   664,   660,   661,    25,    18,    34,    18,   671,   672,
    21,   674,    20,    21,   672,   786,    70,  1179,   789,   859,
   860,   861,   111,    21,   687,   183,   689,    25,    21,   183,
   184,   185,    25,   187,   188,   698,    37,    38,   701,   702,
   703,    34,    35,    36,    21,   703,    18,   985,    25,   454,
    51,    52,   457,    18,   905,    21,   719,   111,    18,    25,
    19,   912,   467,    21,   469,    21,   471,    25,     9,    25,
    23,  1009,    21,    11,   479,    25,    25,   482,    24,    21,
    26,   486,    28,    25,    21,    22,    21,   183,   184,   185,
    25,   187,   188,    24,   183,   184,   185,   186,    44,    32,
    33,    47,    48,   943,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    11,    21,    21,    21,   781,    25,
    25,    25,    24,  1079,   529,   530,     8,     9,    10,   183,
   184,   185,   186,    88,   119,   906,   121,   908,   909,   910,
    21,    21,    21,   994,    25,    25,   997,   132,   133,    88,
   135,   814,   137,   138,    18,   183,   184,    21,   186,   997,
    19,   824,  1013,    21,  1015,   150,    19,    25,    18,  1020,
  1013,    21,  1023,  1024,    19,  1013,    34,    35,    36,    49,
    50,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    21,    21,    21,  1030,    25,    25,    25,     8,     9,
    10,    27,    21,    19,    21,    23,    25,   612,    25,  1060,
    24,  1062,  1063,    21,    98,    21,   100,    25,   102,    18,
   104,    25,    21,    20,    21,   109,    53,    54,  1079,  1000,
    22,  1002,    34,    35,    36,   119,    18,   121,  1074,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    21,
    24,    24,    26,  1128,    28,    21,   138,    78,    79,    80,
    81,    82,    83,    84,    34,    35,    36,    20,    21,  1144,
    44,    21,    22,    47,    48,  1126,   183,   184,  1129,   163,
    22,  1132,   687,   186,   689,   948,   949,    72,    73,    74,
    25,  1129,   186,   698,    32,    33,   701,   702,   186,    11,
   182,    72,    73,    74,    51,    52,    53,    24,   190,  1184,
    24,    24,   194,    20,   196,    25,    27,   980,    23,    19,
    23,    20,   204,   205,   987,    19,    21,   209,   138,   211,
     5,    27,    25,    24,   997,    22,    88,    88,    24,    88,
    25,   223,   224,   225,    20,    18,    20,    27,  1011,    18,
  1013,    29,    24,  1016,    25,    25,    21,    39,    25,    27,
    88,    25,  1213,    25,    25,    55,  1029,    25,    24,    18,
    25,    25,   182,  1224,    40,    25,  1039,  1040,  1041,    25,
   190,    21,    18,   177,   194,  1048,   196,    18,     8,     9,
    10,    21,   178,   177,   204,    18,    88,  1060,   188,   209,
   178,   211,    21,    25,    88,    20,    22,   291,    20,   814,
    24,   295,    25,   223,   224,   225,  1079,    18,    20,   824,
    20,    27,    73,    18,    27,    88,  1089,  1090,  1091,   313,
    27,    88,   316,    25,  1097,    88,    88,   360,    25,     0,
   324,    88,     0,   327,    88,    88,    88,    82,   325,   778,
  1113,  1114,  1115,  1116,   900,  1105,  1119,  1120,  1010,  1038,
   894,   926,  1125,  1011,  1174,   388,  1129,   843,  1125,   471,
   393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
   403,   592,  1129,   689,   687,  1148,   113,   814,    10,     8,
   701,   347,  1155,   224,  1157,  1158,  1159,  1084,   520,   428,
   719,   424,   980,    -1,    -1,   387,    -1,    -1,    -1,   126,
    -1,  1174,  1175,  1176,  1177,    -1,    -1,    -1,   138,     8,
     9,    10,   139,   140,   141,   142,   143,   144,    -1,   146,
   147,  1194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   948,   949,    -1,   428,    72,    73,    74,
    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
    -1,    -1,   182,    -1,    -1,   447,    -1,    -1,   452,    -1,
   190,    -1,    -1,    -1,   194,   459,   196,    -1,    -1,    -1,
   464,    -1,   466,    -1,   204,    -1,    -1,    -1,    -1,   209,
   474,   211,   997,    -1,   478,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   223,   224,   225,    -1,    -1,  1013,    -1,
    -1,  1016,    -1,    -1,    -1,    -1,    -1,   136,   428,   138,
    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,   447,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,   138,
    72,    73,    74,    -1,    -1,  1060,    78,    79,    80,    81,
    82,    83,    84,   182,    -1,    -1,    -1,    -1,    -1,    -1,
    70,   190,    -1,    -1,  1079,   194,    -1,   196,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   204,   568,    -1,    -1,    -1,
    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   190,   586,    -1,    -1,   194,   225,   196,    -1,  1114,
  1115,   111,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
   209,    -1,   211,   646,  1129,    -1,    -1,   611,    -1,    -1,
    -1,    -1,    -1,    -1,   223,   224,   225,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   630,    -1,    -1,   366,
    -1,   635,  1157,  1158,    -1,    -1,    -1,    -1,   568,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   691,    -1,
  1175,  1176,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,
    -1,    -1,   666,   183,   184,   185,   186,   404,   405,   406,
   407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
   417,   418,   419,    -1,    -1,    -1,    24,    25,   428,   328,
    -1,    29,    30,    31,    32,    33,    34,   336,   337,   338,
   339,    -1,    -1,    -1,    -1,    -1,    -1,   447,    46,    47,
    48,    -1,    -1,    -1,   451,    -1,    -1,    -1,   357,    -1,
    -1,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,   368,
    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,   742,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   389,    -1,    -1,    -1,   797,    -1,    -1,   800,    -1,    -1,
    -1,    -1,   499,    -1,    -1,    -1,    19,   504,     8,     9,
    10,    24,    -1,   111,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,   138,    -1,    -1,    -1,    -1,    -1,   428,
    -1,    -1,    -1,    46,    47,    48,   435,    -1,   802,   842,
   843,    -1,    -1,    -1,    -1,   848,   849,   850,   851,   852,
   853,   854,   855,   856,   857,   858,    -1,    70,    -1,   428,
    -1,   558,    -1,   560,    -1,   562,   563,   182,   568,    -1,
    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,   447,   194,
    -1,   196,    -1,    -1,    -1,   183,   184,   185,   186,   204,
    -1,    -1,    -1,   138,   209,    -1,   211,    -1,   111,   902,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,   224,
   225,    -1,    -1,   610,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   897,   898,   632,    -1,   182,   138,    -1,
    -1,   905,    -1,    -1,    -1,   190,    -1,    -1,    -1,   194,
    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
   559,    -1,    -1,    -1,   209,   929,   211,   664,    -1,   568,
   183,   184,   185,   186,    -1,    -1,    -1,    -1,   223,   224,
   225,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   190,    -1,    -1,    -1,   194,    -1,   196,    -1,    -1,   568,
    -1,    -1,  1005,    -1,   204,    -1,    -1,    -1,    -1,   209,
    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   719,   223,   224,   225,    -1,   626,    -1,    -1,
    -1,   995,    -1,   730,   731,   732,   733,   734,   735,   736,
   737,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   654,    -1,   656,    -1,    -1,
    -1,    -1,    -1,   662,    -1,    -1,   665,    19,    20,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    46,    47,    48,   794,    -1,    -1,
  1064,    24,    -1,    -1,    27,    -1,    29,    30,    31,    32,
    33,    34,    -1,   428,    -1,    -1,    -1,    -1,    70,   718,
    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    19,    -1,
   729,   828,   447,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,   111,
    -1,    -1,   859,   860,   861,   862,   863,   864,   865,   866,
   867,   868,   869,   870,   871,   872,   873,   874,   875,    70,
   877,    -1,    -1,   428,    -1,     6,     7,     8,   111,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,   447,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,  1182,    -1,
   111,    -1,    -1,    -1,    -1,    46,    47,    48,   428,    -1,
    -1,   183,   184,   185,   186,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   844,   943,   447,    -1,    70,
    -1,    -1,    -1,   568,    -1,    -1,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,   980,    -1,    -1,   107,    -1,    -1,    -1,
   111,    -1,   183,   184,   185,   186,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,
     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   568,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    24,   933,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    45,   176,    -1,    -1,   179,    -1,
    -1,   182,   183,   184,   185,   186,   187,   188,   568,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,   978,
    71,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,
    -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,  1128,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,  1144,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,     0,     1,  1184,    -1,    -1,
    -1,    -1,   183,   184,   185,    -1,   187,   188,   189,    -1,
    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    24,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    70,    67,    68,    69,    -1,    71,    -1,    -1,    -1,
    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   111,   108,   109,   110,    -1,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    -1,    -1,    -1,   183,   184,   185,   186,   183,   184,
   185,     1,   187,   188,   189,    -1,     6,     7,     8,    -1,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    42,    43,    -1,    45,    46,    47,    48,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,
   110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     1,    -1,    -1,    -1,    -1,     6,     7,     8,    -1,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    42,    43,    -1,    -1,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
    -1,    -1,   183,   184,   185,   186,   187,   188,   189,     1,
    -1,    -1,    -1,    -1,     6,     7,     8,    -1,    -1,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    42,    43,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,   111,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   183,   184,   185,   186,   187,   188,   189,     1,    -1,
    -1,    -1,    -1,     6,     7,     8,    -1,    -1,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    25,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
    43,     1,    -1,    46,    47,    48,     6,     7,     8,    -1,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    -1,    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    42,    43,    -1,    -1,    46,    47,    48,    92,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    92,    93,    94,    95,    96,    97,    98,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,   187,   188,    -1,    -1,     1,    -1,
    -1,    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,   183,   184,   185,   186,   187,   188,    42,
    43,     1,    -1,    46,    47,    48,     6,     7,     8,    -1,
    -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    42,    43,    -1,    -1,    46,    47,    48,    92,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    92,    93,    94,    95,    96,    97,    98,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,   187,   188,    -1,    -1,     1,    -1,
    -1,    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,   183,   184,   185,   186,   187,   188,    42,
    43,     1,    -1,    46,    47,    48,     6,     7,     8,    -1,
    -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    42,    43,    -1,    -1,    46,    47,    48,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
   183,   184,   185,   186,   187,   188,    -1,    -1,     1,    46,
    47,    48,    -1,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    24,    -1,    70,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,   183,   184,   185,   186,   187,   188,    42,
    43,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   111,    -1,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,     6,     7,     8,   111,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,   183,   184,   185,   186,
    -1,    42,    43,    -1,    45,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,   187,   188,    -1,    -1,    -1,    -1,
    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,
   111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,   176,    -1,    -1,   179,    -1,
    -1,   182,   183,   184,   185,   186,   187,   188,   189,     6,
     7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    45,    46,
    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
    -1,    -1,   179,    -1,    -1,   182,   183,   184,   185,   186,
   187,   188,   189,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
    43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
   113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
   123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
   133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,   176,    -1,    -1,   179,    -1,    -1,   182,
   183,   184,   185,   186,   187,   188,   189,     6,     7,     8,
    -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    70,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    46,    47,    48,    -1,    93,    94,    95,    96,    97,    98,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
    24,    -1,   111,    -1,    70,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    46,    47,    48,    -1,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    70,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
   179,    -1,    -1,   182,   183,   184,   185,   186,   187,   188,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   176,    -1,    -1,   179,    -1,    -1,   182,   183,   184,   185,
   186,   187,   188,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
   184,   185,   186,    46,    47,    48,     6,     7,     8,    -1,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    24,    -1,   111,    -1,
    70,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
    48,    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
    -1,   111,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   176,    -1,    -1,   179,    -1,    -1,   182,
   183,   184,   185,   186,   187,   188,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,   179,
    -1,    -1,   182,   183,   184,   185,   186,   187,   188,     6,
     7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,    46,
    47,    48,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    46,    47,    48,    -1,    93,    94,    95,    96,
    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   107,    -1,    24,    -1,   111,    -1,    70,    29,    30,    31,
    32,    33,    34,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    46,    47,    48,    -1,    -1,    93,
    94,    95,    96,    97,    98,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
    -1,    -1,   179,    -1,    -1,   182,   183,   184,   185,   186,
   187,   188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   176,    -1,    -1,   179,    -1,    -1,   182,   183,
   184,   185,   186,   187,   188,     6,     7,     8,    -1,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   183,   184,   185,   186,    46,    47,    48,    -1,    -1,
    -1,    -1,   183,   184,   185,   186,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    93,    94,    95,    96,    97,    98,    18,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
    -1,    71,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   176,    -1,    70,   179,    -1,
    -1,   182,   183,   184,   185,   186,   187,   188,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,   111,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    18,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,   189,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    19,    -1,    -1,    -1,    -1,    24,
    -1,    -1,    -1,   185,    -1,    -1,    -1,   189,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,   108,   109,
   110,   189,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    22,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,   189,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    34,    -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,    42,    43,    -1,    -1,    -1,    -1,    -1,   183,
   184,   185,    -1,   187,   188,   189,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    45,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,   189,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
    69,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
   109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,    45,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,
   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    67,    68,
    69,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
   109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,    89,    90,    91,
    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,
   189,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   185,   108,   109,   110,   189,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   185,    -1,    -1,    -1,   189
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
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-7].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-7].ntyp), yyvsp[-4].entrylist));
     context_popLoc ();

     //     printf("Done nameDeclBase\n");
   ;
    break;}
case 28:
#line 344 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 29:
#line 346 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 30:
#line 348 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 31:
#line 350 "cgrammar.y"
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
#line 366 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 33:
#line 369 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 34:
#line 377 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 35:
#line 380 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 36:
#line 387 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); ;
    break;}
case 37:
#line 388 "cgrammar.y"
{ clearCurrentParams (); ;
    break;}
case 38:
#line 389 "cgrammar.y"
{ declareCIter (yyvsp[-8].cname, yyvsp[-6].entrylist); ;
    break;}
case 39:
#line 392 "cgrammar.y"
{ exprNode_checkMacroBody (yyvsp[-1].expr); ;
    break;}
case 40:
#line 393 "cgrammar.y"
{ exprNode_checkIterBody (yyvsp[-1].expr); ;
    break;}
case 41:
#line 394 "cgrammar.y"
{ exprNode_checkIterEnd (yyvsp[-1].expr); ;
    break;}
case 42:
#line 395 "cgrammar.y"
{ exprChecks_checkEmptyMacroBody (); ;
    break;}
case 43:
#line 398 "cgrammar.y"
{ declareFunction (yyvsp[0].ntyp); ;
    break;}
case 44:
#line 401 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 45:
#line 402 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 46:
#line 408 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 47:
#line 409 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 49:
#line 417 "cgrammar.y"
{
  DPRINTF ( ("doing optGlobEnsuresConstraintsAux\n") );
context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 

;
    break;}
case 50:
#line 423 "cgrammar.y"
{
  setEnsuresConstraints (yyvsp[-1].conL);
  exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
  DPRINTF (("done optGlobBufConstraintsAux\n"));;
    break;}
case 52:
#line 433 "cgrammar.y"
{
  DPRINTF ( ("doing optGlobBufConstraintsAux\n") );
context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 

;
    break;}
case 53:
#line 439 "cgrammar.y"
{
  setFunctionConstraints (yyvsp[-1].conL);
  exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
  DPRINTF (("done optGlobBufConstraintsAux\n"));;
    break;}
case 55:
#line 448 "cgrammar.y"
{ yyval.conL = constraintList_add (yyvsp[0].conL, yyvsp[-1].con); ;
    break;}
case 56:
#line 449 "cgrammar.y"
{constraintList c; c = constraintList_new(); c = constraintList_add (c, yyvsp[0].con); yyval.conL = c;
    break;}
case 57:
#line 452 "cgrammar.y"
{
 yyval.con = makeConstraintParse3 (yyvsp[-3].conE, yyvsp[-2].tok, yyvsp[-1].conE);
 DPRINTF(("Done BufConstraint1\n")); ;
    break;}
case 64:
#line 467 "cgrammar.y"
{yyval.conE = constraintExpr_parseMakeUnaryOp (yyvsp[-3].tok, yyvsp[-1].conE);  DPRINTF( ("Got BufConstraintExpr UNary Op ") ); ;
    break;}
case 65:
#line 468 "cgrammar.y"
{
   DPRINTF( ("Got BufConstraintExpr BINary Op ") );
   yyval.conE = constraintExpr_parseMakeBinaryOp (yyvsp[-3].conE, yyvsp[-2].tok, yyvsp[-1].conE); ;
    break;}
case 66:
#line 473 "cgrammar.y"
{ yyval.conE =  constraintExpr_makeTermsRef(yyvsp[0].sr);;
    break;}
case 67:
#line 474 "cgrammar.y"
{  char *t; int c;
  t =  cstring_toCharsSafe (exprNode_unparse(yyvsp[0].expr));
  c = atoi( t );
  yyval.conE = constraintExpr_makeIntLiteral (c);
;
    break;}
case 68:
#line 482 "cgrammar.y"
{
   yyval.sr =
     checkbufferConstraintClausesId (yyvsp[0].entry);;
    break;}
case 69:
#line 485 "cgrammar.y"
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 70:
#line 487 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 71:
#line 488 "cgrammar.y"
{
     char *t; int c;
  t =  cstring_toCharsSafe (exprNode_unparse(yyvsp[-1].expr));
  c = atoi( t );
   yyval.sr = sRef_makeArrayFetchKnown(yyvsp[-3].sr, c); ;
    break;}
case 72:
#line 493 "cgrammar.y"
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 73:
#line 494 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 74:
#line 495 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 75:
#line 497 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 79:
#line 523 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 80:
#line 524 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 81:
#line 534 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 82:
#line 535 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 89:
#line 550 "cgrammar.y"
{ ; ;
    break;}
case 90:
#line 551 "cgrammar.y"
{ ; ;
    break;}
case 91:
#line 554 "cgrammar.y"
{ globListAdd (yyvsp[0].sr, yyvsp[-1].tquallist); ;
    break;}
case 92:
#line 557 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); ;
    break;}
case 93:
#line 558 "cgrammar.y"
{ yyval.sr = globListUnrecognized (yyvsp[0].cname); ;
    break;}
case 94:
#line 561 "cgrammar.y"
{ yyval.typequal = qual_createUndef (); ;
    break;}
case 95:
#line 562 "cgrammar.y"
{ yyval.typequal = qual_createKilled (); ;
    break;}
case 96:
#line 563 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 97:
#line 564 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 98:
#line 565 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 99:
#line 568 "cgrammar.y"
{ yyval.tquallist = qualList_undefined; ;
    break;}
case 100:
#line 569 "cgrammar.y"
{ yyval.tquallist = qualList_add (yyvsp[0].tquallist, yyvsp[-1].typequal); ;
    break;}
case 101:
#line 572 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 102:
#line 574 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 103:
#line 575 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 104:
#line 577 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 105:
#line 579 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 108:
#line 586 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 109:
#line 588 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 110:
#line 589 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 111:
#line 591 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 112:
#line 593 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 117:
#line 605 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 118:
#line 610 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 119:
#line 618 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 120:
#line 623 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 130:
#line 647 "cgrammar.y"
{ yyval.sck = SP_ISONLY; ;
    break;}
case 131:
#line 648 "cgrammar.y"
{ yyval.sck = SP_ISOBSERVER; ;
    break;}
case 132:
#line 649 "cgrammar.y"
{ yyval.sck = SP_ISEXPOSED; ;
    break;}
case 133:
#line 650 "cgrammar.y"
{ yyval.sck = SP_ISDEPENDENT; ;
    break;}
case 134:
#line 651 "cgrammar.y"
{ yyval.sck = SP_ISOWNED; ;
    break;}
case 135:
#line 652 "cgrammar.y"
{ yyval.sck = SP_ISSHARED; ;
    break;}
case 136:
#line 653 "cgrammar.y"
{ yyval.sck = SP_ISNULL; ;
    break;}
case 137:
#line 654 "cgrammar.y"
{ yyval.sck = SP_ISNOTNULL; ;
    break;}
case 138:
#line 658 "cgrammar.y"
{
     context_setProtectVars (); 
     enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 139:
#line 664 "cgrammar.y"
{ 
     setFunctionSpecialClause (yyvsp[-6].tok, yyvsp[-3].srset, yyvsp[-1].tok); 
     exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 140:
#line 671 "cgrammar.y"
{
      context_setProtectVars (); 
      enterParamsTemp (); 
      sRef_setGlobalScopeSafe (); 
    ;
    break;}
case 141:
#line 677 "cgrammar.y"
{ 
      setFunctionStateSpecialClause (yyvsp[-7].tok, yyvsp[-5].sck, yyvsp[-3].srset, yyvsp[-1].tok); 
      exitParamsTemp ();
      sRef_clearGlobalScopeSafe (); 
      context_releaseVars ();
    ;
    break;}
case 142:
#line 686 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 143:
#line 692 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 144:
#line 695 "cgrammar.y"
{ checkDoneParams (); context_enterInnerContext (); ;
    break;}
case 145:
#line 697 "cgrammar.y"
{  
     exprNode_checkFunctionBody (yyvsp[0].expr); yyval.expr = yyvsp[0].expr; 
     context_exitInner (yyvsp[0].expr); 
   ;
    break;}
case 146:
#line 702 "cgrammar.y"
{ doneParams (); context_enterInnerContext (); ;
    break;}
case 147:
#line 704 "cgrammar.y"
{
     context_exitInner (yyvsp[0].expr);
     exprNode_checkFunctionBody (yyvsp[0].expr); 
     yyval.expr = yyvsp[0].expr; /* old style */ 
   ;
    break;}
case 148:
#line 712 "cgrammar.y"
{ 
     context_setFunctionDefined (exprNode_loc (yyvsp[0].expr)); 
     /* exprNode_checkFunction (context_getHeader (), $2); */
     /* DRL 8 8 2000 */
     
     context_exitFunction ();
   ;
    break;}
case 149:
#line 721 "cgrammar.y"
{ yyval.srset = yyvsp[-2].srset; ;
    break;}
case 150:
#line 722 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 151:
#line 725 "cgrammar.y"
{ yyval.srset = yyvsp[-1].srset; ;
    break;}
case 152:
#line 726 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 153:
#line 729 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); checkModifiesId (yyvsp[0].entry); ;
    break;}
case 154:
#line 730 "cgrammar.y"
{ yyval.sr = fixModifiesId (yyvsp[0].cname); ;
    break;}
case 155:
#line 731 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-2].sr, sRef_undefined); ;
    break;}
case 156:
#line 732 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-3].sr, yyvsp[-1].sr); ;
    break;}
case 157:
#line 733 "cgrammar.y"
{ yyval.sr = modListPointer (yyvsp[0].sr); ;
    break;}
case 158:
#line 734 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 159:
#line 735 "cgrammar.y"
{ yyval.sr = modListFieldAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 160:
#line 736 "cgrammar.y"
{ yyval.sr = modListArrowAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 161:
#line 740 "cgrammar.y"
{ yyval.sr = yyvsp[0].sr; ;
    break;}
case 162:
#line 741 "cgrammar.y"
{ yyval.sr = sRef_makeUnknown (); /* sRef_makeConstant ($1); ? */ ;
    break;}
case 163:
#line 745 "cgrammar.y"
{ yyval.srset = sRefSet_single (yyvsp[0].sr); ;
    break;}
case 164:
#line 746 "cgrammar.y"
{ yyval.srset = sRefSet_insert (yyvsp[-2].srset, yyvsp[0].sr); ;
    break;}
case 165:
#line 750 "cgrammar.y"
{ yyval.sr = checkSpecClausesId (yyvsp[0].entry); ;
    break;}
case 166:
#line 752 "cgrammar.y"
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 167:
#line 753 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 168:
#line 754 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-3].sr); ;
    break;}
case 169:
#line 755 "cgrammar.y"
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 170:
#line 756 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 171:
#line 757 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 172:
#line 759 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 173:
#line 764 "cgrammar.y"
{ if (sRef_isValid (yyvsp[0].sr)) { yyval.srset = sRefSet_single (yyvsp[0].sr); } 
      else { yyval.srset = sRefSet_undefined; } 
    ;
    break;}
case 174:
#line 768 "cgrammar.y"
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
#line 779 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (yyvsp[0].entry); ;
    break;}
case 176:
#line 780 "cgrammar.y"
{ yyval.expr = exprNode_fromUIO (yyvsp[0].cname); ;
    break;}
case 177:
#line 781 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 178:
#line 782 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 179:
#line 783 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (coerceId (yyvsp[0].cname)); ;
    break;}
case 180:
#line 784 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 182:
#line 788 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 183:
#line 789 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 184:
#line 790 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 185:
#line 791 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 186:
#line 792 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 187:
#line 793 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 188:
#line 794 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 189:
#line 795 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 190:
#line 798 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 191:
#line 799 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 193:
#line 803 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 194:
#line 804 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 195:
#line 805 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 196:
#line 806 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 197:
#line 807 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 198:
#line 808 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 199:
#line 809 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 200:
#line 810 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 201:
#line 811 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 202:
#line 812 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 203:
#line 815 "cgrammar.y"
{ yyval.cstringlist = cstringList_add (yyvsp[-2].cstringlist, yyvsp[0].cname); ;
    break;}
case 204:
#line 816 "cgrammar.y"
{ yyval.cstringlist = cstringList_single (yyvsp[0].cname); ;
    break;}
case 205:
#line 820 "cgrammar.y"
{ yyval.expr = exprNode_offsetof (yyvsp[-5].qtyp, yyvsp[-2].cstringlist); ;
    break;}
case 206:
#line 823 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 207:
#line 824 "cgrammar.y"
{ context_sizeofReleaseVars (); yyval.expr = yyvsp[0].expr; ;
    break;}
case 208:
#line 827 "cgrammar.y"
{ yyval.expr = exprNode_sizeofType (yyvsp[-1].qtyp); ;
    break;}
case 209:
#line 828 "cgrammar.y"
{ yyval.expr = exprNode_sizeofExpr (yyvsp[0].expr); ;
    break;}
case 210:
#line 829 "cgrammar.y"
{ yyval.expr = exprNode_alignofType (yyvsp[-1].qtyp); ;
    break;}
case 211:
#line 830 "cgrammar.y"
{ yyval.expr = exprNode_alignofExpr (yyvsp[0].expr); ;
    break;}
case 213:
#line 835 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 215:
#line 839 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 216:
#line 840 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 217:
#line 841 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 219:
#line 845 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 220:
#line 846 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 222:
#line 850 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 223:
#line 851 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 225:
#line 855 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 226:
#line 856 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 227:
#line 857 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 228:
#line 858 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 230:
#line 862 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 231:
#line 863 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 233:
#line 867 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 235:
#line 871 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 237:
#line 876 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 239:
#line 881 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); 
     context_enterAndClause (yyvsp[-1].expr); 
   ;
    break;}
case 240:
#line 885 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitAndClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 242:
#line 893 "cgrammar.y"
{ 
     exprNode_produceGuards (yyvsp[-1].expr);
     context_enterOrClause (yyvsp[-1].expr); 
   ;
    break;}
case 243:
#line 898 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitOrClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 245:
#line 905 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 246:
#line 906 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 247:
#line 907 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); context_exitClause (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 249:
#line 911 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 250:
#line 912 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 251:
#line 913 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 252:
#line 914 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 253:
#line 915 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 254:
#line 916 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 255:
#line 917 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 256:
#line 918 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 257:
#line 919 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 258:
#line 920 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 259:
#line 921 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 261:
#line 925 "cgrammar.y"
{ yyval.expr = exprNode_comma (yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 262:
#line 928 "cgrammar.y"
{ yyval.expr = exprNode_undefined; ;
    break;}
case 265:
#line 937 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 266:
#line 938 "cgrammar.y"
{ doVaDcl (); yyval.expr = exprNode_makeError (); ;
    break;}
case 267:
#line 939 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 268:
#line 942 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 269:
#line 956 "cgrammar.y"
{
               setProcessingVars (yyvsp[-3].qtyp); 
     processNamedDecl (yyvsp[-1].ntyp); ;
    break;}
case 270:
#line 959 "cgrammar.y"
{ unsetProcessingVars (); yyval.expr = yyvsp[-2].expr; ;
    break;}
case 271:
#line 961 "cgrammar.y"
{ setProcessingVars (yyvsp[-4].qtyp); processNamedDecl (yyvsp[-2].ntyp); 
        ;
    break;}
case 272:
#line 964 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-2].expr, exprNode_makeInitialization (yyvsp[-8].ntyp, yyvsp[-3].expr)); 
     unsetProcessingVars ();
   ;
    break;}
case 273:
#line 968 "cgrammar.y"
{ processNamedDecl (yyvsp[-1].ntyp); yyval.expr = exprNode_makeError (); ;
    break;}
case 274:
#line 969 "cgrammar.y"
{ processNamedDecl (yyvsp[-2].ntyp); ;
    break;}
case 275:
#line 970 "cgrammar.y"
{ yyval.expr = exprNode_makeInitialization (yyvsp[-5].ntyp, yyvsp[0].expr); ;
    break;}
case 276:
#line 974 "cgrammar.y"
{ setProcessingTypedef (yyvsp[0].qtyp); ;
    break;}
case 277:
#line 975 "cgrammar.y"
{ unsetProcessingTypedef (); ;
    break;}
case 278:
#line 976 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 279:
#line 977 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 280:
#line 980 "cgrammar.y"
{ g_expectingTypeName = TRUE; ;
    break;}
case 281:
#line 983 "cgrammar.y"
{ g_expectingTypeName = TRUE; context_pushLoc (); ;
    break;}
case 282:
#line 986 "cgrammar.y"
{ ; ;
    break;}
case 283:
#line 989 "cgrammar.y"
{ ; ;
    break;}
case 284:
#line 990 "cgrammar.y"
{ ; ;
    break;}
case 285:
#line 993 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 286:
#line 994 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 287:
#line 997 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 288:
#line 998 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-2].tok, yyvsp[-1].alist); ;
    break;}
case 289:
#line 999 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-3].tok, yyvsp[-2].alist); ;
    break;}
case 290:
#line 1004 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 291:
#line 1006 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 292:
#line 1014 "cgrammar.y"
{ setStorageClass (SCEXTERN); yyval.typequal = qual_createExtern (); ;
    break;}
case 293:
#line 1015 "cgrammar.y"
{ yyval.typequal = qual_createInline (); ;
    break;}
case 294:
#line 1016 "cgrammar.y"
{ setStorageClass (SCSTATIC); yyval.typequal = qual_createStatic (); ;
    break;}
case 295:
#line 1017 "cgrammar.y"
{ yyval.typequal = qual_createAuto (); ;
    break;}
case 296:
#line 1018 "cgrammar.y"
{ yyval.typequal = qual_createRegister (); ;
    break;}
case 297:
#line 1021 "cgrammar.y"
{ yyval.typequal = qual_createConst (); ;
    break;}
case 298:
#line 1022 "cgrammar.y"
{ yyval.typequal = qual_createVolatile (); ;
    break;}
case 299:
#line 1023 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 300:
#line 1024 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 301:
#line 1025 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 302:
#line 1026 "cgrammar.y"
{ yyval.typequal = qual_createSpecial (); ;
    break;}
case 303:
#line 1027 "cgrammar.y"
{ yyval.typequal = qual_createOwned (); ;
    break;}
case 304:
#line 1028 "cgrammar.y"
{ yyval.typequal = qual_createDependent (); ;
    break;}
case 305:
#line 1029 "cgrammar.y"
{ yyval.typequal = qual_createYield (); ;
    break;}
case 306:
#line 1030 "cgrammar.y"
{ yyval.typequal = qual_createTemp (); ;
    break;}
case 307:
#line 1031 "cgrammar.y"
{ yyval.typequal = qual_createOnly (); ;
    break;}
case 308:
#line 1032 "cgrammar.y"
{ yyval.typequal = qual_createKeep (); ;
    break;}
case 309:
#line 1033 "cgrammar.y"
{ yyval.typequal = qual_createKept (); ;
    break;}
case 310:
#line 1034 "cgrammar.y"
{ yyval.typequal = qual_createShared (); ;
    break;}
case 311:
#line 1035 "cgrammar.y"
{ yyval.typequal = qual_createUnique (); ;
    break;}
case 312:
#line 1036 "cgrammar.y"
{ yyval.typequal = qual_createExits (); ;
    break;}
case 313:
#line 1037 "cgrammar.y"
{ yyval.typequal = qual_createMayExit (); ;
    break;}
case 314:
#line 1038 "cgrammar.y"
{ yyval.typequal = qual_createTrueExit (); ;
    break;}
case 315:
#line 1039 "cgrammar.y"
{ yyval.typequal = qual_createFalseExit (); ;
    break;}
case 316:
#line 1040 "cgrammar.y"
{ yyval.typequal = qual_createNeverExit (); ;
    break;}
case 317:
#line 1041 "cgrammar.y"
{ yyval.typequal = qual_createNull (); ;
    break;}
case 318:
#line 1042 "cgrammar.y"
{ yyval.typequal = qual_createRelNull (); ;
    break;}
case 319:
#line 1043 "cgrammar.y"
{ yyval.typequal = qual_createReturned (); ;
    break;}
case 320:
#line 1044 "cgrammar.y"
{ yyval.typequal = qual_createExposed (); ;
    break;}
case 321:
#line 1045 "cgrammar.y"
{ yyval.typequal = qual_createObserver (); ;
    break;}
case 322:
#line 1046 "cgrammar.y"
{ yyval.typequal = qual_createChecked (); ;
    break;}
case 323:
#line 1047 "cgrammar.y"
{ yyval.typequal = qual_createCheckMod (); ;
    break;}
case 324:
#line 1048 "cgrammar.y"
{ yyval.typequal = qual_createUnchecked (); ;
    break;}
case 325:
#line 1049 "cgrammar.y"
{ yyval.typequal = qual_createCheckedStrict (); ;
    break;}
case 326:
#line 1050 "cgrammar.y"
{ yyval.typequal = qual_createTrueNull (); ;
    break;}
case 327:
#line 1051 "cgrammar.y"
{ yyval.typequal = qual_createFalseNull (); ;
    break;}
case 328:
#line 1052 "cgrammar.y"
{ yyval.typequal = qual_createUnused (); ;
    break;}
case 329:
#line 1053 "cgrammar.y"
{ yyval.typequal = qual_createExternal (); ;
    break;}
case 330:
#line 1054 "cgrammar.y"
{ yyval.typequal = qual_createSef (); ;
    break;}
case 331:
#line 1055 "cgrammar.y"
{ yyval.typequal = qual_createAbstract (); ;
    break;}
case 332:
#line 1056 "cgrammar.y"
{ yyval.typequal = qual_createConcrete (); ;
    break;}
case 333:
#line 1057 "cgrammar.y"
{ yyval.typequal = qual_createMutable (); ;
    break;}
case 334:
#line 1058 "cgrammar.y"
{ yyval.typequal = qual_createImmutable (); ;
    break;}
case 335:
#line 1059 "cgrammar.y"
{ yyval.typequal = qual_createNotNull (); ;
    break;}
case 336:
#line 1060 "cgrammar.y"
{ yyval.typequal = qual_createRefCounted (); ;
    break;}
case 337:
#line 1061 "cgrammar.y"
{ yyval.typequal = qual_createRefs (); ;
    break;}
case 338:
#line 1062 "cgrammar.y"
{ yyval.typequal = qual_createKillRef (); ;
    break;}
case 339:
#line 1063 "cgrammar.y"
{ yyval.typequal = qual_createRelDef (); ;
    break;}
case 340:
#line 1064 "cgrammar.y"
{ yyval.typequal = qual_createNewRef (); ;
    break;}
case 341:
#line 1065 "cgrammar.y"
{ yyval.typequal = qual_createTempRef (); ;
    break;}
case 342:
#line 1066 "cgrammar.y"
{ yyval.typequal = qual_createNullTerminated (); ;
    break;}
case 343:
#line 1072 "cgrammar.y"
{ yyval.typequal = qual_createShort (); ;
    break;}
case 344:
#line 1073 "cgrammar.y"
{ yyval.typequal = qual_createLong (); ;
    break;}
case 345:
#line 1074 "cgrammar.y"
{ yyval.typequal = qual_createSigned (); ;
    break;}
case 346:
#line 1075 "cgrammar.y"
{ yyval.typequal = qual_createUnsigned (); ;
    break;}
case 353:
#line 1084 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 354:
#line 1085 "cgrammar.y"
{ yyval.ctyp = ctype_anyintegral; ;
    break;}
case 355:
#line 1086 "cgrammar.y"
{ yyval.ctyp = ctype_unsignedintegral; ;
    break;}
case 356:
#line 1087 "cgrammar.y"
{ yyval.ctyp = ctype_signedintegral; ;
    break;}
case 360:
#line 1091 "cgrammar.y"
{ yyval.ctyp = ctype_fromQual (yyvsp[-1].typequal); ;
    break;}
case 361:
#line 1095 "cgrammar.y"
{ yyval.qtyp = qtype_resolve (yyvsp[-1].qtyp); ;
    break;}
case 362:
#line 1098 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 363:
#line 1100 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-3].qtyp, yyvsp[-1].qtyp); ;
    break;}
case 365:
#line 1105 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-2].qtyp, yyvsp[0].qtyp); ;
    break;}
case 366:
#line 1108 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 367:
#line 1109 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 368:
#line 1110 "cgrammar.y"
{ yyval.qtyp = qtype_combine (yyvsp[0].qtyp, yyvsp[-1].ctyp); ;
    break;}
case 369:
#line 1113 "cgrammar.y"
{ yyval.qtyp = qtype_unknown (); ;
    break;}
case 370:
#line 1114 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 371:
#line 1117 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 372:
#line 1119 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 373:
#line 1121 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 374:
#line 1122 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 375:
#line 1124 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 376:
#line 1126 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 377:
#line 1128 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 378:
#line 1130 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 379:
#line 1131 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 380:
#line 1133 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 381:
#line 1135 "cgrammar.y"
{ yyval.ctyp = declareUnnamedStruct (yyvsp[-3].flist); ;
    break;}
case 382:
#line 1136 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 383:
#line 1138 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 384:
#line 1140 "cgrammar.y"
{ yyval.ctyp = declareUnnamedUnion (yyvsp[-3].flist); ;
    break;}
case 385:
#line 1142 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedStruct (uentryList_new ()); ;
    break;}
case 386:
#line 1144 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedUnion (uentryList_new ()); ;
    break;}
case 387:
#line 1145 "cgrammar.y"
{ yyval.ctyp = handleStruct (yyvsp[-1].cname); ;
    break;}
case 388:
#line 1146 "cgrammar.y"
{ yyval.ctyp = handleUnion (yyvsp[-1].cname); ;
    break;}
case 389:
#line 1149 "cgrammar.y"
{ g_expectingTypeName = FALSE; ;
    break;}
case 391:
#line 1153 "cgrammar.y"
{ yyval.flist = uentryList_undefined; /* bogus! */ ;
    break;}
case 392:
#line 1154 "cgrammar.y"
{ yyval.flist = uentryList_mergeFields (yyvsp[-1].flist, yyvsp[0].flist); ;
    break;}
case 393:
#line 1158 "cgrammar.y"
{ yyval.flist = fixUentryList (yyvsp[-2].ntyplist, yyvsp[-4].qtyp); ;
    break;}
case 394:
#line 1160 "cgrammar.y"
{ yyval.flist = fixUnnamedDecl (yyvsp[-2].qtyp); ;
    break;}
case 395:
#line 1164 "cgrammar.y"
{ yyval.ntyplist = idDeclList_singleton (yyvsp[-1].ntyp); ;
    break;}
case 396:
#line 1166 "cgrammar.y"
{ yyval.ntyplist = idDeclList_add (yyvsp[-3].ntyplist, yyvsp[-1].ntyp); ;
    break;}
case 397:
#line 1169 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; ;
    break;}
case 398:
#line 1170 "cgrammar.y"
{ yyval.ntyp = idDecl_undefined; ;
    break;}
case 399:
#line 1171 "cgrammar.y"
{ yyval.ntyp = yyvsp[-3].ntyp; ;
    break;}
case 400:
#line 1176 "cgrammar.y"
{ yyval.ctyp = declareUnnamedEnum (yyvsp[-2].enumnamelist); ;
    break;}
case 401:
#line 1177 "cgrammar.y"
{ context_pushLoc (); ;
    break;}
case 402:
#line 1178 "cgrammar.y"
{ context_popLoc (); yyval.ctyp = declareEnum (yyvsp[-5].cname, yyvsp[-2].enumnamelist); ;
    break;}
case 403:
#line 1179 "cgrammar.y"
{ yyval.ctyp = handleEnum (yyvsp[-1].cname); ;
    break;}
case 404:
#line 1183 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_single (yyvsp[0].cname); ;
    break;}
case 405:
#line 1185 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_push (yyvsp[-2].enumnamelist, yyvsp[0].cname); ;
    break;}
case 407:
#line 1190 "cgrammar.y"
{ uentry ue = uentry_makeEnumConstant (yyvsp[0].cname, ctype_unknown);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[0].cname;
   ;
    break;}
case 408:
#line 1195 "cgrammar.y"
{ uentry ue = uentry_makeEnumInitializedConstant (yyvsp[-3].cname, ctype_unknown, yyvsp[0].expr);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[-3].cname; 
   ;
    break;}
case 410:
#line 1202 "cgrammar.y"
{ yyval.ntyp = idDecl_create (cstring_undefined, qtype_create (yyvsp[0].ctyp)); ;
    break;}
case 411:
#line 1204 "cgrammar.y"
{ 
     qtype qt = qtype_unknown ();

     qtype_adjustPointers (yyvsp[-1].count, qt);
     yyval.ntyp = idDecl_create (cstring_copy (LastIdentifier ()), qt);
   ;
    break;}
case 412:
#line 1211 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 414:
#line 1216 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 415:
#line 1219 "cgrammar.y"
{ yyval.entrylist = handleParamTypeList (yyvsp[0].entrylist); ;
    break;}
case 416:
#line 1220 "cgrammar.y"
{ yyval.entrylist = handleParamIdList (yyvsp[0].entrylist); ;
    break;}
case 417:
#line 1223 "cgrammar.y"
{ /* ignored for now */; ;
    break;}
case 418:
#line 1224 "cgrammar.y"
{ ; ;
    break;}
case 419:
#line 1227 "cgrammar.y"
{ ; ;
    break;}
case 420:
#line 1228 "cgrammar.y"
{ ; ;
    break;}
case 421:
#line 1231 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 422:
#line 1232 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 423:
#line 1233 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 424:
#line 1234 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 426:
#line 1238 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 427:
#line 1241 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 428:
#line 1242 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 429:
#line 1245 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeElipsisMarker ()); ;
    break;}
case 431:
#line 1247 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 432:
#line 1250 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 433:
#line 1250 "cgrammar.y"
{ yyval.entrylist = uentryList_single (yyvsp[0].oentry); ;
    break;}
case 434:
#line 1251 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 435:
#line 1252 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-3].entrylist, yyvsp[0].oentry); ;
    break;}
case 436:
#line 1256 "cgrammar.y"
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
#line 1268 "cgrammar.y"
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
#line 1284 "cgrammar.y"
{ yyval.qtyp = qtype_newBase (yyvsp[-1].qtyp, yyvsp[0].ctyp); ;
    break;}
case 440:
#line 1287 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[0].count, ctype_unknown); ;
    break;}
case 442:
#line 1289 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[-1].count, yyvsp[0].ctyp); ;
    break;}
case 443:
#line 1292 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 445:
#line 1297 "cgrammar.y"
{ yyval.ctyp = ctype_expectFunction (yyvsp[-1].ctyp); ;
    break;}
case 446:
#line 1298 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 447:
#line 1300 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (ctype_unknown, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 448:
#line 1301 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (yyvsp[-2].ctyp); ;
    break;}
case 449:
#line 1303 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (yyvsp[-3].ctyp, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 450:
#line 1305 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (ctype_unknown, uentryList_makeMissingParams ()); ;
    break;}
case 451:
#line 1307 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (ctype_unknown, yyvsp[-1].entrylist); ;
    break;}
case 452:
#line 1309 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (yyvsp[-3].ctyp, uentryList_makeMissingParams ()); ;
    break;}
case 453:
#line 1311 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (yyvsp[-4].ctyp, yyvsp[-1].entrylist); ;
    break;}
case 463:
#line 1326 "cgrammar.y"
{yyval.expr = yyvsp[0].expr; printf ("Doing stmt lclintassertion\n"); ;
    break;}
case 464:
#line 1330 "cgrammar.y"
{ printf(" QSETBUFFERSIZE id CCONSTANT HEllo World\n");  uentry_setBufferSize(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 465:
#line 1332 "cgrammar.y"
{ printf(" QSETSTRINGLENGTH id CCONSTANT HEllo World\n");  uentry_setStringLength(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 466:
#line 1334 "cgrammar.y"
{printf(" QTESTINRANGE\n");  uentry_testInRange(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 467:
#line 1340 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[0].cname); ;
    break;}
case 468:
#line 1345 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 471:
#line 1353 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 472:
#line 1357 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 473:
#line 1359 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr); ;
    break;}
case 474:
#line 1361 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 475:
#line 1363 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 476:
#line 1367 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 477:
#line 1367 "cgrammar.y"
{ context_sizeofReleaseVars (); ;
    break;}
case 478:
#line 1369 "cgrammar.y"
{ yyval.expr = exprNode_forPred (yyvsp[-7].expr, yyvsp[-5].expr, yyvsp[-2].expr); 
     context_enterForClause (yyvsp[-5].expr); ;
    break;}
case 479:
#line 1374 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-2].entry); ;
    break;}
case 480:
#line 1376 "cgrammar.y"
{ yyval.expr = exprNode_iterStart (yyvsp[-5].entry, yyvsp[-1].alist); ;
    break;}
case 481:
#line 1377 "cgrammar.y"
{ yyval.expr = exprNode_createId (yyvsp[0].entry); ;
    break;}
case 485:
#line 1383 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 493:
#line 1391 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 494:
#line 1392 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 495:
#line 1396 "cgrammar.y"
{ /* don't: context_exitTrueClause ($1, $2); */
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 496:
#line 1401 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 497:
#line 1404 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 508:
#line 1419 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 510:
#line 1421 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 511:
#line 1424 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[-1].cname); ;
    break;}
case 512:
#line 1425 "cgrammar.y"
{ yyval.expr = exprNode_notReached (yyvsp[0].expr); ;
    break;}
case 513:
#line 1431 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 514:
#line 1432 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, FALSE); ;
    break;}
case 515:
#line 1433 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 516:
#line 1434 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, TRUE); ;
    break;}
case 517:
#line 1437 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 518:
#line 1438 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, FALSE); ;
    break;}
case 519:
#line 1439 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 520:
#line 1440 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, TRUE); ;
    break;}
case 521:
#line 1443 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 522:
#line 1445 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; context_exitInner (yyvsp[0].expr); ;
    break;}
case 523:
#line 1448 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 524:
#line 1451 "cgrammar.y"
{ context_enterInnerContext (); ;
    break;}
case 525:
#line 1454 "cgrammar.y"
{ context_exitInnerPlain (); ;
    break;}
case 526:
#line 1457 "cgrammar.y"
{ context_enterStructInnerContext (); ;
    break;}
case 527:
#line 1460 "cgrammar.y"
{ context_exitStructInnerContext (); ;
    break;}
case 528:
#line 1463 "cgrammar.y"
{ context_exitInnerSafe (); ;
    break;}
case 529:
#line 1466 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 530:
#line 1467 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_createTok (yyvsp[0].tok)); ;
    break;}
case 531:
#line 1468 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 532:
#line 1470 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 533:
#line 1471 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 534:
#line 1473 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 535:
#line 1475 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 536:
#line 1477 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (exprNode_concat (yyvsp[-3].expr, yyvsp[-2].expr), 
							lltok_getLoc (yyvsp[-1].tok))); 
   ;
    break;}
case 537:
#line 1484 "cgrammar.y"
{ yyval.expr = exprNode_makeBlock (yyvsp[0].expr); ;
    break;}
case 538:
#line 1488 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 539:
#line 1490 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 540:
#line 1492 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 541:
#line 1494 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 543:
#line 1498 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 544:
#line 1501 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 545:
#line 1502 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 546:
#line 1505 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 547:
#line 1506 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 548:
#line 1509 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 549:
#line 1510 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 550:
#line 1513 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 551:
#line 1514 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 552:
#line 1515 "cgrammar.y"
{ yyval.expr = exprNode_checkExpr (yyvsp[0].expr); ;
    break;}
case 553:
#line 1519 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 554:
#line 1527 "cgrammar.y"
{ 
     context_exitTrueClause (yyvsp[-1].expr, yyvsp[0].expr);
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 555:
#line 1531 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-2].expr); ;
    break;}
case 556:
#line 1532 "cgrammar.y"
{
     context_exitClause (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr);
     yyval.expr = exprNode_ifelse (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr); 
   ;
    break;}
case 557:
#line 1536 "cgrammar.y"
{ context_enterSwitch (yyvsp[0].expr); ;
    break;}
case 558:
#line 1537 "cgrammar.y"
{ yyval.expr = exprNode_switch (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 559:
#line 1541 "cgrammar.y"
{ yyval.expr = exprNode_whilePred (yyvsp[-1].expr); context_enterWhileClause (yyvsp[-1].expr); ;
    break;}
case 560:
#line 1545 "cgrammar.y"
{ yyval.expr = exprNode_whilePred(yyvsp[-1].expr); ;
    break;}
case 561:
#line 1548 "cgrammar.y"
{ context_enterIterClause (); ;
    break;}
case 562:
#line 1549 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-3].entry); ;
    break;}
case 563:
#line 1552 "cgrammar.y"
{ 
     yyval.expr = exprNode_iter (yyvsp[-9].entry, yyvsp[-4].alist, yyvsp[-2].expr, yyvsp[-1].entry); 

   ;
    break;}
case 564:
#line 1558 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 565:
#line 1559 "cgrammar.y"
{ nextIterParam (); ;
    break;}
case 566:
#line 1560 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-3].alist, yyvsp[0].expr); ;
    break;}
case 567:
#line 1563 "cgrammar.y"
{ yyval.expr = exprNode_iterExpr (yyvsp[0].expr); ;
    break;}
case 568:
#line 1564 "cgrammar.y"
{ yyval.expr = exprNode_iterId (yyvsp[0].entry); ;
    break;}
case 569:
#line 1565 "cgrammar.y"
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
case 570:
#line 1576 "cgrammar.y"
{ yyval.expr = exprNode_iterNewId (yyvsp[0].cname); ;
    break;}
case 572:
#line 1584 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 574:
#line 1588 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 575:
#line 1589 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 576:
#line 1590 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 577:
#line 1592 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 578:
#line 1593 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 579:
#line 1594 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 580:
#line 1595 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 581:
#line 1596 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 583:
#line 1600 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 584:
#line 1601 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 585:
#line 1602 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 586:
#line 1603 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 587:
#line 1604 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 588:
#line 1605 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 589:
#line 1606 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 590:
#line 1607 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 591:
#line 1608 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 593:
#line 1612 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 595:
#line 1616 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 596:
#line 1617 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 597:
#line 1618 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 599:
#line 1622 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 600:
#line 1623 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 602:
#line 1627 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 603:
#line 1628 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 605:
#line 1632 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 606:
#line 1633 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 607:
#line 1634 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 608:
#line 1635 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 610:
#line 1639 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 611:
#line 1640 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 613:
#line 1644 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 615:
#line 1648 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 617:
#line 1653 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 619:
#line 1657 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 621:
#line 1661 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 623:
#line 1665 "cgrammar.y"
{ context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 624:
#line 1666 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 625:
#line 1667 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 627:
#line 1671 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 628:
#line 1672 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 629:
#line 1673 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 630:
#line 1674 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 631:
#line 1675 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 632:
#line 1676 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 633:
#line 1677 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 634:
#line 1678 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 635:
#line 1679 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 636:
#line 1680 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 637:
#line 1681 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 638:
#line 1684 "cgrammar.y"
{ yyval.entry = yyvsp[0].entry; ;
    break;}
case 639:
#line 1685 "cgrammar.y"
{ yyval.entry = uentry_undefined; ;
    break;}
case 640:
#line 1688 "cgrammar.y"
{ context_enterDoWhileClause (); yyval.tok = yyvsp[0].tok; ;
    break;}
case 641:
#line 1692 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 642:
#line 1694 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr), yyvsp[0].tok); ;
    break;}
case 643:
#line 1696 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 644:
#line 1699 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 645:
#line 1701 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr), yyvsp[0].tok); ;
    break;}
case 646:
#line 1703 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 647:
#line 1704 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 648:
#line 1707 "cgrammar.y"
{ yyval.expr = exprNode_goto (yyvsp[-1].cname); ;
    break;}
case 649:
#line 1708 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-1].tok, BADTOK); ;
    break;}
case 650:
#line 1710 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-2].tok, QINNERCONTINUE); ;
    break;}
case 651:
#line 1711 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, BADTOK); ;
    break;}
case 652:
#line 1712 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSWITCHBREAK); ;
    break;}
case 653:
#line 1713 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QLOOPBREAK); ;
    break;}
case 654:
#line 1714 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QINNERBREAK); ;
    break;}
case 655:
#line 1715 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSAFEBREAK); ;
    break;}
case 656:
#line 1716 "cgrammar.y"
{ yyval.expr = exprNode_nullReturn (yyvsp[-1].tok); ;
    break;}
case 657:
#line 1717 "cgrammar.y"
{ yyval.expr = exprNode_return (yyvsp[-1].expr); ;
    break;}
case 659:
#line 1721 "cgrammar.y"
{ ; ;
    break;}
case 662:
#line 1728 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 663:
#line 1729 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 664:
#line 1730 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 665:
#line 1731 "cgrammar.y"
{ yyval.cname = yyvsp[0].cname; ;
    break;}
case 667:
#line 1735 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
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
#line 1737 "cgrammar.y"


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
  





