
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
#define	QSETSTRINGLENGTH	432
#define	QTESTINRANGE	433
#define	IDENTIFIER	434
#define	NEW_IDENTIFIER	435
#define	TYPE_NAME_OR_ID	436
#define	CCONSTANT	437
#define	ITER_NAME	438
#define	ITER_ENDNAME	439
#define	TYPE_NAME	440

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



#define	YYFINAL		1173
#define	YYFLAG		-32768
#define	YYNTBASE	186

#define YYTRANSLATE(x) ((unsigned)(x) <= 440 ? yytranslate[x] : 414)

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
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     3,     5,     8,    11,    13,    15,    17,    19,
    21,    23,    32,    44,    45,    51,    53,    57,    59,    62,
    64,    71,    75,    82,    83,    90,    91,    99,   101,   108,
   112,   119,   120,   127,   128,   136,   137,   138,   149,   153,
   157,   161,   164,   166,   167,   170,   171,   174,   176,   179,
   181,   184,   186,   189,   191,   195,   198,   200,   202,   204,
   206,   208,   210,   212,   213,   216,   217,   224,   225,   232,
   234,   236,   237,   238,   244,   245,   251,   253,   255,   256,
   258,   259,   260,   264,   265,   269,   271,   273,   275,   277,
   279,   281,   283,   285,   287,   289,   291,   293,   295,   297,
   299,   301,   303,   304,   312,   313,   322,   324,   328,   329,
   333,   334,   338,   341,   345,   348,   351,   353,   355,   357,
   361,   366,   369,   373,   377,   381,   383,   385,   387,   391,
   393,   395,   399,   404,   407,   411,   415,   419,   421,   425,
   427,   429,   431,   435,   437,   439,   441,   446,   450,   455,
   462,   468,   474,   477,   480,   482,   486,   488,   491,   494,
   497,   500,   503,   506,   509,   512,   514,   516,   520,   522,
   532,   533,   537,   542,   545,   550,   553,   555,   560,   562,
   566,   570,   574,   576,   580,   584,   586,   590,   594,   596,
   600,   604,   608,   612,   614,   618,   622,   624,   628,   630,
   634,   636,   640,   642,   643,   648,   650,   651,   656,   658,
   659,   660,   668,   670,   674,   678,   682,   686,   690,   694,
   698,   702,   706,   710,   714,   716,   720,   721,   723,   725,
   727,   729,   731,   735,   736,   746,   747,   759,   762,   763,
   770,   771,   779,   784,   789,   790,   791,   794,   796,   801,
   802,   807,   809,   813,   818,   820,   824,   826,   828,   830,
   832,   834,   837,   840,   843,   846,   849,   852,   855,   858,
   861,   864,   867,   870,   873,   876,   879,   882,   885,   888,
   891,   894,   897,   900,   903,   906,   909,   912,   915,   918,
   921,   924,   927,   930,   933,   936,   939,   942,   945,   948,
   951,   954,   957,   960,   963,   966,   969,   972,   974,   976,
   978,   980,   983,   986,   989,   992,   995,   998,  1001,  1004,
  1007,  1010,  1013,  1016,  1019,  1022,  1026,  1028,  1033,  1035,
  1039,  1042,  1045,  1048,  1049,  1051,  1052,  1053,  1065,  1066,
  1067,  1079,  1086,  1093,  1094,  1095,  1106,  1107,  1108,  1119,
  1125,  1131,  1136,  1141,  1142,  1144,  1146,  1149,  1155,  1159,
  1162,  1167,  1169,  1173,  1178,  1185,  1186,  1195,  1200,  1202,
  1206,  1209,  1211,  1216,  1218,  1220,  1223,  1226,  1228,  1231,
  1233,  1236,  1238,  1240,  1242,  1245,  1247,  1250,  1253,  1257,
  1259,  1263,  1265,  1269,  1271,  1273,  1277,  1278,  1281,  1282,
  1287,  1292,  1294,  1296,  1299,  1301,  1303,  1306,  1307,  1309,
  1315,  1318,  1322,  1326,  1331,  1335,  1340,  1345,  1351,  1353,
  1355,  1357,  1359,  1361,  1363,  1365,  1367,  1369,  1371,  1376,
  1381,  1386,  1389,  1391,  1393,  1395,  1398,  1401,  1409,  1416,
  1419,  1420,  1421,  1432,  1433,  1440,  1442,  1444,  1446,  1448,
  1451,  1453,  1455,  1457,  1459,  1461,  1463,  1465,  1469,  1471,
  1474,  1477,  1480,  1482,  1484,  1486,  1488,  1490,  1492,  1494,
  1496,  1498,  1500,  1504,  1506,  1508,  1511,  1514,  1515,  1520,
  1521,  1527,  1528,  1532,  1533,  1538,  1542,  1545,  1549,  1550,
  1551,  1552,  1553,  1554,  1556,  1559,  1562,  1566,  1569,  1573,
  1577,  1582,  1585,  1588,  1592,  1596,  1601,  1603,  1606,  1608,
  1611,  1613,  1616,  1618,  1621,  1623,  1626,  1628,  1633,  1636,
  1637,  1643,  1644,  1651,  1656,  1661,  1662,  1663,  1674,  1676,
  1677,  1682,  1684,  1686,  1688,  1690,  1692,  1696,  1698,  1703,
  1707,  1712,  1719,  1725,  1731,  1734,  1737,  1739,  1742,  1745,
  1748,  1751,  1754,  1757,  1760,  1763,  1765,  1767,  1772,  1774,
  1778,  1782,  1786,  1788,  1792,  1796,  1798,  1802,  1806,  1808,
  1812,  1816,  1820,  1824,  1826,  1830,  1834,  1836,  1840,  1842,
  1846,  1848,  1852,  1854,  1858,  1860,  1864,  1866,  1867,  1868,
  1876,  1878,  1882,  1886,  1890,  1894,  1898,  1902,  1906,  1910,
  1914,  1918,  1922,  1924,  1925,  1927,  1930,  1938,  1941,  1944,
  1952,  1959,  1962,  1966,  1969,  1973,  1976,  1980,  1984,  1988,
  1992,  1995,  1999,  2000,  2002,  2004,  2006,  2008,  2010,  2012,
  2014,  2016
};

static const short yyrhs[] = {    -1,
   187,     0,   188,     0,   187,   188,     0,   240,   410,     0,
   189,     0,   190,     0,   200,     0,   203,     0,   277,     0,
     1,     0,    75,   297,   310,   320,   310,   410,   285,    88,
     0,    75,   297,   310,   320,   310,    23,   285,   290,   289,
   410,    88,     0,     0,    76,   191,   192,   410,    88,     0,
   193,     0,   297,   310,   193,     0,   197,     0,   324,   197,
     0,   412,     0,   285,    24,   310,   320,   285,    25,     0,
   194,    26,    27,     0,   194,    26,   285,   276,    27,   310,
     0,     0,   194,   286,    24,    25,   195,   205,     0,     0,
   194,   286,    24,   321,    25,   196,   205,     0,   412,     0,
   285,    24,   310,   193,   285,    25,     0,   197,    26,    27,
     0,   197,    26,   285,   276,    27,   310,     0,     0,   197,
   286,    24,    25,   198,   207,     0,     0,   197,   286,    24,
   321,    25,   199,   207,     0,     0,     0,    77,   412,    24,
   321,    25,   201,   207,   202,   410,    88,     0,    89,   351,
    92,     0,    90,   338,    92,     0,    91,   339,    92,     0,
    89,    92,     0,   236,     0,     0,   206,   209,     0,     0,
   208,   210,     0,   217,     0,   211,   217,     0,   220,     0,
   211,   220,     0,   233,     0,   233,   211,     0,   213,     0,
   212,    21,   213,     0,   216,   214,     0,   411,     0,   180,
     0,    86,     0,    87,     0,   116,     0,   117,     0,   130,
     0,     0,   215,   216,     0,     0,    72,   218,   371,   410,
    88,   223,     0,     0,    72,   219,   212,   410,    88,   223,
     0,    74,     0,   224,     0,     0,     0,    72,   221,   371,
   410,   223,     0,     0,    72,   222,   212,   410,   223,     0,
    74,     0,   226,     0,     0,   224,     0,     0,     0,    73,
   225,   241,     0,     0,    73,   227,   242,     0,    78,     0,
    79,     0,    80,     0,    81,     0,    82,     0,    88,     0,
    88,     0,    83,     0,    84,     0,   119,     0,   137,     0,
   135,     0,   133,     0,   132,     0,   121,     0,   138,     0,
   150,     0,     0,   228,   310,   234,   247,   410,   230,   285,
     0,     0,   231,   310,   232,   235,   247,   410,   229,   285,
     0,   320,     0,   297,   310,   320,     0,     0,    19,   238,
   367,     0,     0,   371,   239,   360,     0,   204,   237,     0,
   245,   410,    88,     0,   410,    88,     0,   245,   410,     0,
   410,     0,   411,     0,   180,     0,   243,    26,    27,     0,
   243,    26,   244,    27,     0,    34,   243,     0,    24,   243,
    25,     0,   243,    28,   412,     0,   243,    44,   412,     0,
   243,     0,   182,     0,   243,     0,   245,    21,   243,     0,
   411,     0,   180,     0,   246,    26,    27,     0,   246,    26,
   244,    27,     0,    34,   246,     0,    24,   246,    25,     0,
   246,    28,   412,     0,   246,    44,   412,     0,   246,     0,
   247,    21,   246,     0,   411,     0,   180,     0,   182,     0,
    24,   274,    25,     0,   181,     0,   111,     0,   248,     0,
   249,    26,   274,    27,     0,   249,    24,    25,     0,   249,
    24,   250,    25,     0,    70,    24,   273,    21,   332,    25,
     0,   249,   310,    28,   412,   285,     0,   249,   310,    44,
   412,   285,     0,   249,    47,     0,   249,    48,     0,   273,
     0,   250,    21,   273,     0,   249,     0,    47,   251,     0,
    48,   251,     0,    29,   257,     0,    34,   257,     0,    33,
   257,     0,    32,   257,     0,    31,   257,     0,    30,   257,
     0,   254,     0,   253,     0,   252,    28,   412,     0,   412,
     0,    46,   285,    24,   332,   310,    21,   252,    25,   285,
     0,     0,   285,   255,   256,     0,    42,    24,   332,    25,
     0,    42,   251,     0,    43,    24,   332,    25,     0,    43,
   251,     0,   251,     0,    24,   332,    25,   257,     0,   257,
     0,   258,    34,   257,     0,   258,    35,   257,     0,   258,
    36,   257,     0,   258,     0,   259,    33,   258,     0,   259,
    32,   258,     0,   259,     0,   260,    49,   259,     0,   260,
    50,   259,     0,   260,     0,   261,    37,   260,     0,   261,
    38,   260,     0,   261,    51,   260,     0,   261,    52,   260,
     0,   261,     0,   262,    53,   261,     0,   262,    54,   261,
     0,   262,     0,   263,    29,   262,     0,   263,     0,   264,
    39,   263,     0,   264,     0,   265,    40,   264,     0,   265,
     0,     0,   266,    55,   267,   265,     0,   266,     0,     0,
   268,    56,   269,   266,     0,   268,     0,     0,     0,   268,
    41,   271,   274,    22,   272,   270,     0,   270,     0,   251,
    23,   273,     0,   251,    57,   273,     0,   251,    58,   273,
     0,   251,    59,   273,     0,   251,    60,   273,     0,   251,
    61,   273,     0,   251,    62,   273,     0,   251,    63,   273,
     0,   251,    64,   273,     0,   251,    65,   273,     0,   251,
    66,   273,     0,   273,     0,   274,    21,   273,     0,     0,
   274,     0,   270,     0,   278,     0,    71,     0,   283,     0,
   297,   285,    18,     0,     0,   297,   310,   320,   310,   279,
   285,   289,    18,   285,     0,     0,   297,   310,   320,   310,
    23,   280,   285,   290,   289,    18,   285,     0,   320,   310,
     0,     0,   320,   310,    23,   282,   285,   290,     0,     0,
    45,   297,   284,   310,   287,   285,    18,     0,    45,   297,
   285,    18,     0,    45,   287,   285,    18,     0,     0,     0,
   288,   285,     0,   281,     0,   287,    21,   310,   281,     0,
     0,   289,    21,   310,   281,     0,   273,     0,    19,   291,
    20,     0,    19,   291,    21,    20,     0,   290,     0,   291,
    21,   290,     0,   112,     0,   110,     0,   113,     0,   114,
     0,   115,     0,   108,   285,     0,   109,   285,     0,   116,
   285,     0,   117,   285,     0,   130,   285,     0,   131,   285,
     0,   132,   285,     0,   133,   285,     0,   118,   285,     0,
   120,   285,     0,   119,   285,     0,   128,   285,     0,   129,
   285,     0,   121,   285,     0,   123,   285,     0,   139,   285,
     0,   140,   285,     0,   142,   285,     0,   143,   285,     0,
   141,   285,     0,   136,   285,     0,   151,   285,     0,   134,
   285,     0,   135,   285,     0,   137,   285,     0,   124,   285,
     0,   127,   285,     0,   125,   285,     0,   126,   285,     0,
   156,   285,     0,   157,   285,     0,   148,   285,     0,   158,
   285,     0,   149,   285,     0,   152,   285,     0,   153,   285,
     0,   154,   285,     0,   155,   285,     0,   150,   285,     0,
   159,   285,     0,   160,   285,     0,   163,   285,     0,   164,
   285,     0,   161,   285,     0,   162,   285,     0,   175,   285,
     0,   147,     0,   144,     0,   145,     0,   146,     0,   165,
   310,     0,   167,   310,     0,   166,   310,     0,   168,   310,
     0,   169,   310,     0,   170,   310,     0,   171,   310,     0,
   172,   310,     0,   173,   310,     0,   174,   310,     0,   413,
   310,     0,   301,   310,     0,   315,   310,     0,   294,   310,
     0,   285,   297,   285,     0,   299,     0,   299,    85,   298,
    88,     0,   332,     0,   332,    21,   298,     0,   292,   300,
     0,   293,   300,     0,   295,   300,     0,     0,   297,     0,
     0,     0,   310,    67,   412,   285,    19,   302,   364,   311,
   365,   303,    20,     0,     0,     0,   310,    68,   412,   285,
    19,   304,   364,   311,   365,   305,    20,     0,   310,    67,
   412,   285,    19,    20,     0,   310,    68,   412,   285,    19,
    20,     0,     0,     0,   310,    67,   285,    19,   306,   364,
   311,   365,   307,    20,     0,     0,     0,   310,    68,   285,
    19,   308,   364,   311,   365,   309,    20,     0,   310,    67,
   285,    19,    20,     0,   310,    68,   285,    19,    20,     0,
   310,    67,   412,   310,     0,   310,    68,   412,   310,     0,
     0,   312,     0,   203,     0,   311,   312,     0,   297,   310,
   313,   285,    18,     0,   297,   285,    18,     0,   314,   310,
     0,   313,    21,   314,   310,     0,   320,     0,    22,   285,
   276,     0,   320,    22,   285,   276,     0,   310,    69,    19,
   317,    20,   285,     0,     0,   310,    69,   412,    19,   316,
   317,    20,   285,     0,   310,    69,   412,   285,     0,   318,
     0,   317,    21,   318,     0,   317,    21,     0,   412,     0,
   412,    23,   285,   276,     0,   194,     0,   334,     0,   324,
   185,     0,   324,   319,     0,   194,     0,   324,   194,     0,
   327,     0,   310,   325,     0,   108,     0,   109,     0,   322,
     0,   323,   322,     0,    34,     0,    34,   323,     0,    34,
   324,     0,    34,   323,   324,     0,   326,     0,   326,    21,
     5,     0,   412,     0,   326,    21,   412,     0,     5,     0,
   328,     0,   328,    21,     5,     0,     0,   329,   331,     0,
     0,   328,    21,   330,   331,     0,   285,   297,   319,   285,
     0,   412,     0,   296,     0,   296,   333,     0,   324,     0,
   335,     0,   324,   335,     0,     0,   335,     0,   285,    24,
   310,   333,    25,     0,    26,    27,     0,    26,   276,    27,
     0,   335,    26,    27,     0,   335,    26,   276,    27,     0,
   285,    24,    25,     0,   285,    24,   327,    25,     0,   335,
   285,    24,    25,     0,   335,   285,    24,   327,    25,     0,
   353,     0,   354,     0,   357,     0,   360,     0,   373,     0,
   376,     0,   407,     0,   381,     0,   409,     0,   337,     0,
   176,   411,   182,    88,     0,   177,   411,   182,    88,     0,
   178,   411,   182,    88,     0,    22,   412,     0,   340,     0,
   338,     0,   347,     0,   340,   347,     0,   380,   340,     0,
   406,   352,    11,    24,   274,    25,    18,     0,   406,   352,
    11,    24,   274,    25,     0,   342,   347,     0,     0,     0,
    13,    24,   275,    18,   275,    18,   343,   275,   344,    25,
     0,     0,   183,   362,    24,   346,   384,    25,     0,   184,
     0,   353,     0,   354,     0,   357,     0,   349,   371,     0,
   349,     0,   350,     0,   373,     0,   348,     0,   341,     0,
   345,     0,   409,     0,    24,   347,    25,     0,     1,     0,
   375,   347,     0,   362,    19,     0,   366,    20,     0,   352,
     0,   370,     0,   353,     0,   354,     0,   357,     0,   361,
     0,   374,     0,   376,     0,   381,     0,   408,     0,    24,
   352,    25,     0,   409,     0,     1,     0,   412,    22,     0,
   107,   336,     0,     0,     6,   276,   355,    22,     0,     0,
    98,     6,   276,   356,    22,     0,     0,     7,   358,    22,
     0,     0,    98,     7,   359,    22,     0,    24,   360,    25,
     0,   362,   368,     0,   362,   369,   363,     0,     0,     0,
     0,     0,     0,    20,     0,   107,    20,     0,   372,    20,
     0,   372,   107,    20,     0,   371,    20,     0,   371,   107,
    20,     0,   371,   372,    20,     0,   371,   372,   107,    20,
     0,    19,   367,     0,    19,    20,     0,    19,   370,    20,
     0,    19,   371,    20,     0,    19,   371,   372,    20,     0,
   352,     0,   370,   352,     0,   277,     0,   371,   277,     0,
   336,     0,   372,   336,     0,    18,     0,   274,    18,     0,
    18,     0,   274,    18,     0,   274,     0,     8,    24,   274,
    25,     0,   375,   336,     0,     0,   375,   336,     9,   377,
   336,     0,     0,    10,    24,   274,   378,    25,   336,     0,
    11,    24,   274,    25,     0,    11,    24,   274,    25,     0,
     0,     0,   183,   382,   362,    24,   383,   384,    25,   360,
   405,   363,     0,   386,     0,     0,   384,   385,    21,   386,
     0,   404,     0,   411,     0,   181,     0,   180,     0,   182,
     0,    24,   274,    25,     0,   387,     0,   249,    26,   274,
    27,     0,   249,    24,    25,     0,   249,    24,   250,    25,
     0,    70,    24,   273,    21,   332,    25,     0,   249,   310,
    28,   412,   285,     0,   249,   310,    44,   412,   285,     0,
   249,    47,     0,   249,    48,     0,   388,     0,    47,   251,
     0,    48,   251,     0,    29,   257,     0,    34,   257,     0,
    33,   257,     0,    32,   257,     0,    31,   257,     0,    30,
   257,     0,   254,     0,   389,     0,    24,   332,    25,   257,
     0,   390,     0,   258,    34,   257,     0,   258,    35,   257,
     0,   258,    36,   257,     0,   391,     0,   259,    33,   258,
     0,   259,    32,   258,     0,   392,     0,   260,    49,   259,
     0,   260,    50,   259,     0,   393,     0,   261,    37,   260,
     0,   261,    38,   260,     0,   261,    51,   260,     0,   261,
    52,   260,     0,   394,     0,   262,    53,   261,     0,   262,
    54,   261,     0,   395,     0,   263,    29,   262,     0,   396,
     0,   264,    39,   263,     0,   397,     0,   265,    40,   264,
     0,   398,     0,   266,    55,   265,     0,   399,     0,   268,
    56,   266,     0,   400,     0,     0,     0,   268,    41,   402,
   274,    22,   403,   270,     0,   401,     0,   251,    23,   273,
     0,   251,    57,   273,     0,   251,    58,   273,     0,   251,
    59,   273,     0,   251,    60,   273,     0,   251,    61,   273,
     0,   251,    62,   273,     0,   251,    63,   273,     0,   251,
    64,   273,     0,   251,    65,   273,     0,   251,    66,   273,
     0,   184,     0,     0,    12,     0,   379,   336,     0,   406,
   336,    11,    24,   274,    25,    18,     0,   342,   336,     0,
   379,   352,     0,   406,   352,    11,    24,   274,    25,    18,
     0,   406,   352,    11,    24,   274,    25,     0,   342,   352,
     0,    14,   412,    18,     0,    15,    18,     0,    97,    15,
    18,     0,    16,    18,     0,    93,    16,    18,     0,    94,
    16,    18,     0,    95,    16,    18,     0,    96,    16,    18,
     0,    17,    18,     0,    17,   274,    18,     0,     0,    18,
     0,   179,     0,   180,     0,   183,     0,   184,     0,   411,
     0,   181,     0,   185,     0,   181,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   241,   242,   245,   246,   249,   250,   251,   252,   253,   254,
   255,   258,   260,   264,   264,   269,   275,   279,   280,   284,
   285,   287,   289,   293,   297,   304,   308,   314,   315,   317,
   319,   335,   339,   346,   350,   356,   358,   358,   362,   363,
   364,   365,   368,   371,   372,   375,   376,   379,   380,   383,
   384,   387,   388,   391,   392,   395,   398,   399,   402,   403,
   404,   405,   406,   409,   410,   413,   413,   416,   416,   419,
   423,   424,   427,   427,   430,   430,   433,   437,   438,   441,
   442,   445,   451,   458,   464,   471,   472,   473,   474,   475,
   478,   481,   484,   485,   488,   489,   490,   491,   492,   493,
   494,   495,   498,   504,   511,   517,   526,   532,   536,   538,
   542,   545,   552,   560,   561,   564,   565,   568,   569,   570,
   571,   572,   573,   574,   575,   579,   580,   584,   585,   588,
   590,   592,   593,   594,   595,   596,   598,   602,   606,   618,
   619,   620,   621,   622,   623,   626,   627,   628,   629,   630,
   631,   632,   633,   634,   637,   638,   641,   642,   643,   644,
   645,   646,   647,   648,   649,   650,   651,   654,   655,   658,
   662,   663,   666,   667,   668,   669,   672,   673,   677,   678,
   679,   680,   683,   684,   685,   688,   689,   690,   693,   694,
   695,   696,   697,   700,   701,   702,   705,   706,   709,   710,
   714,   715,   718,   719,   724,   730,   731,   737,   743,   744,
   744,   746,   749,   750,   751,   752,   753,   754,   755,   756,
   757,   758,   759,   760,   763,   764,   767,   768,   771,   776,
   777,   778,   781,   794,   798,   799,   802,   807,   808,   808,
   813,   814,   815,   816,   819,   822,   825,   828,   829,   832,
   833,   836,   837,   838,   842,   844,   853,   854,   855,   856,
   857,   860,   861,   862,   863,   864,   865,   866,   867,   868,
   869,   870,   871,   872,   873,   874,   875,   876,   877,   878,
   879,   880,   881,   882,   883,   884,   885,   886,   887,   888,
   889,   890,   891,   892,   893,   894,   895,   896,   897,   898,
   899,   900,   901,   902,   903,   904,   905,   911,   912,   913,
   914,   917,   918,   919,   920,   921,   922,   923,   924,   925,
   926,   927,   928,   929,   930,   933,   937,   938,   942,   943,
   947,   948,   949,   952,   953,   956,   958,   960,   961,   963,
   965,   966,   968,   970,   972,   974,   975,   977,   979,   980,
   982,   984,   985,   988,   991,   992,   993,   996,   998,  1002,
  1004,  1008,  1009,  1010,  1014,  1016,  1016,  1018,  1021,  1023,
  1025,  1028,  1033,  1040,  1041,  1042,  1049,  1053,  1054,  1058,
  1059,  1062,  1063,  1066,  1067,  1070,  1071,  1072,  1073,  1076,
  1077,  1080,  1081,  1084,  1085,  1086,  1089,  1089,  1090,  1091,
  1094,  1106,  1122,  1123,  1126,  1127,  1128,  1131,  1132,  1135,
  1137,  1138,  1140,  1141,  1143,  1145,  1147,  1149,  1155,  1156,
  1157,  1158,  1159,  1160,  1161,  1162,  1163,  1165,  1169,  1171,
  1173,  1179,  1184,  1187,  1190,  1191,  1195,  1197,  1199,  1201,
  1205,  1206,  1208,  1212,  1214,  1216,  1219,  1220,  1221,  1222,
  1223,  1224,  1225,  1226,  1227,  1228,  1229,  1230,  1231,  1234,
  1240,  1243,  1246,  1247,  1250,  1251,  1252,  1253,  1254,  1255,
  1256,  1257,  1258,  1259,  1260,  1263,  1264,  1270,  1271,  1272,
  1273,  1276,  1277,  1278,  1279,  1282,  1283,  1287,  1290,  1293,
  1296,  1299,  1302,  1305,  1306,  1307,  1308,  1310,  1311,  1313,
  1315,  1322,  1326,  1328,  1330,  1332,  1336,  1337,  1340,  1341,
  1344,  1345,  1348,  1349,  1352,  1353,  1354,  1357,  1365,  1370,
  1371,  1375,  1376,  1379,  1384,  1387,  1388,  1389,  1397,  1398,
  1398,  1402,  1403,  1404,  1415,  1422,  1423,  1426,  1427,  1428,
  1429,  1430,  1432,  1433,  1434,  1435,  1438,  1439,  1440,  1441,
  1442,  1443,  1444,  1445,  1446,  1447,  1450,  1451,  1454,  1455,
  1456,  1457,  1460,  1461,  1462,  1465,  1466,  1467,  1470,  1471,
  1472,  1473,  1474,  1477,  1478,  1479,  1482,  1483,  1486,  1487,
  1491,  1492,  1495,  1496,  1499,  1500,  1503,  1504,  1505,  1506,
  1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,  1517,  1518,
  1519,  1520,  1523,  1524,  1527,  1530,  1532,  1534,  1538,  1539,
  1541,  1543,  1546,  1547,  1548,  1550,  1551,  1552,  1553,  1554,
  1555,  1556,  1559,  1560,  1563,  1566,  1567,  1568,  1569,  1570,
  1573,  1574
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
"QSETBUFFERSIZE","QSETSTRINGLENGTH","QTESTINRANGE","IDENTIFIER","NEW_IDENTIFIER",
"TYPE_NAME_OR_ID","CCONSTANT","ITER_NAME","ITER_ENDNAME","TYPE_NAME","file",
"externalDefs","externalDef","constantDecl","fcnDecl","@1","plainFcn","plainNamedDecl",
"namedDeclBase","@2","@3","plainNamedDeclBase","@4","@5","iterDecl","@6","@7",
"macroDef","fcnDefHdr","optGlobMods","@8","optPlainGlobMods","@9","optGlobModsRest",
"optPlainGlobModsRest","specialClauses","globIdList","globIdListExpr","globId",
"globQual","optGlobQuals","optGlobModsAux","@10","@11","optPlainGlobModsAux",
"@12","@13","optMods","fcnMods","@14","fcnPlainMods","@15","specialTag","endStateTag",
"endSpecialTag","stateSpecialClause","specialClauseType","specialClause","@16",
"@17","fcnDefHdrAux","fcnBody","@18","@19","fcnDef","locModifies","locPlainModifies",
"modListExpr","mExpr","modList","specClauseListExpr","specClauseList","primaryExpr",
"postfixExpr","argumentExprList","unaryExpr","fieldDesignator","offsetofExpr",
"sizeofExpr","@20","sizeofExprAux","castExpr","timesExpr","plusExpr","shiftExpr",
"relationalExpr","equalityExpr","bitandExpr","xorExpr","bitorExpr","andExpr",
"@21","orExpr","@22","conditionalExpr","@23","@24","assignExpr","expr","optExpr",
"constantExpr","initializer","instanceDecl","@25","@26","namedInitializer","@27",
"typeDecl","@28","IsType","PushType","namedInitializerList","namedInitializerListAux",
"optDeclarators","init","initList","storageSpecifier","typeQualifier","typeModifier",
"typeSpecifier","completeType","completeTypeSpecifier","altType","completeTypeSpecifierAux",
"optCompleteType","suSpc","@29","@30","@31","@32","@33","@34","@35","@36","NotType",
"structDeclList","structDecl","structNamedDeclList","structNamedDecl","enumSpc",
"@37","enumeratorList","enumerator","optNamedDecl","namedDecl","genericParamList",
"innerMods","innerModsList","pointers","paramIdList","idList","paramTypeList",
"paramList","@38","@39","paramDecl","typeExpression","abstractDecl","optAbstractDeclBase",
"abstractDeclBase","stmt","lclintassertion","iterBody","endBody","iterDefStmtList",
"iterDefIterationStmt","forPred","@40","@41","partialIterStmt","@42","iterDefStmt",
"iterSelectionStmt","openScope","closeScope","macroBody","stmtErr","labeledStmt",
"caseStmt","@43","@44","defaultStmt","@45","@46","compoundStmt","compoundStmtErr",
"CreateInnerScope","DeleteInnerScope","CreateStructInnerScope","DeleteStructInnerScope",
"DeleteInnerScopeSafe","compoundStmtRest","compoundStmtAux","compoundStmtAuxErr",
"stmtListErr","initializerList","stmtList","expressionStmt","expressionStmtErr",
"ifPred","selectionStmt","@47","@48","whilePred","iterWhilePred","iterStmt",
"@49","@50","iterArgList","@51","iterArgExpr","primaryIterExpr","postfixIterExpr",
"unaryIterExpr","castIterExpr","timesIterExpr","plusIterExpr","shiftIterExpr",
"relationalIterExpr","equalityIterExpr","bitandIterExpr","xorIterExpr","bitorIterExpr",
"andIterExpr","orIterExpr","conditionalIterExpr","@52","@53","assignIterExpr",
"endIter","doHeader","iterationStmt","iterationStmtErr","jumpStmt","optSemi",
"id","newId","typeName", NULL
};
#endif

static const short yyr1[] = {     0,
   186,   186,   187,   187,   188,   188,   188,   188,   188,   188,
   188,   189,   189,   191,   190,   192,   192,   193,   193,   194,
   194,   194,   194,   195,   194,   196,   194,   197,   197,   197,
   197,   198,   197,   199,   197,   201,   202,   200,   203,   203,
   203,   203,   204,   206,   205,   208,   207,   209,   209,   210,
   210,   211,   211,   212,   212,   213,   214,   214,   215,   215,
   215,   215,   215,   216,   216,   218,   217,   219,   217,   217,
   217,   217,   221,   220,   222,   220,   220,   220,   220,   223,
   223,   225,   224,   227,   226,   228,   228,   228,   228,   228,
   229,   230,   231,   231,   232,   232,   232,   232,   232,   232,
   232,   232,   234,   233,   235,   233,   236,   236,   238,   237,
   239,   237,   240,   241,   241,   242,   242,   243,   243,   243,
   243,   243,   243,   243,   243,   244,   244,   245,   245,   246,
   246,   246,   246,   246,   246,   246,   246,   247,   247,   248,
   248,   248,   248,   248,   248,   249,   249,   249,   249,   249,
   249,   249,   249,   249,   250,   250,   251,   251,   251,   251,
   251,   251,   251,   251,   251,   251,   251,   252,   252,   253,
   255,   254,   256,   256,   256,   256,   257,   257,   258,   258,
   258,   258,   259,   259,   259,   260,   260,   260,   261,   261,
   261,   261,   261,   262,   262,   262,   263,   263,   264,   264,
   265,   265,   266,   267,   266,   268,   269,   268,   270,   271,
   272,   270,   273,   273,   273,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   274,   274,   275,   275,   276,   277,
   277,   277,   278,   279,   278,   280,   278,   281,   282,   281,
   284,   283,   283,   283,   285,   286,   287,   288,   288,   289,
   289,   290,   290,   290,   291,   291,   292,   292,   292,   292,
   292,   293,   293,   293,   293,   293,   293,   293,   293,   293,
   293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
   293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
   293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
   293,   293,   293,   293,   293,   293,   293,   294,   294,   294,
   294,   295,   295,   295,   295,   295,   295,   295,   295,   295,
   295,   295,   295,   295,   295,   296,   297,   297,   298,   298,
   299,   299,   299,   300,   300,   302,   303,   301,   304,   305,
   301,   301,   301,   306,   307,   301,   308,   309,   301,   301,
   301,   301,   301,   310,   311,   311,   311,   312,   312,   313,
   313,   314,   314,   314,   315,   316,   315,   315,   317,   317,
   317,   318,   318,   319,   319,   319,   319,   320,   320,   321,
   321,   322,   322,   323,   323,   324,   324,   324,   324,   325,
   325,   326,   326,   327,   327,   327,   329,   328,   330,   328,
   331,   331,   332,   332,   333,   333,   333,   334,   334,   335,
   335,   335,   335,   335,   335,   335,   335,   335,   336,   336,
   336,   336,   336,   336,   336,   336,   336,   336,   337,   337,
   337,    -1,   338,   339,   340,   340,   341,   341,   341,   341,
   343,   344,   342,   346,   345,   345,   347,   347,   347,   347,
   347,   347,   347,   347,   347,   347,   347,   347,   347,   348,
   349,   350,   351,   351,   352,   352,   352,   352,   352,   352,
   352,   352,   352,   352,   352,   353,   353,   355,   354,   356,
   354,   358,   357,   359,   357,   360,   360,   361,   362,   363,
   364,   365,   366,   367,   367,   367,   367,   367,   367,   367,
   367,   368,   369,   369,   369,   369,   370,   370,   371,   371,
   372,   372,   373,   373,   374,   374,   374,   375,   376,   377,
   376,   378,   376,   379,   380,   382,   383,   381,   384,   385,
   384,   386,   386,   386,   386,   387,   387,   388,   388,   388,
   388,   388,   388,   388,   388,   388,   389,   389,   389,   389,
   389,   389,   389,   389,   389,   389,   390,   390,   391,   391,
   391,   391,   392,   392,   392,   393,   393,   393,   394,   394,
   394,   394,   394,   395,   395,   395,   396,   396,   397,   397,
   398,   398,   399,   399,   400,   400,   401,   402,   403,   401,
   404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
   404,   404,   405,   405,   406,   407,   407,   407,   408,   408,
   408,   408,   409,   409,   409,   409,   409,   409,   409,   409,
   409,   409,   410,   410,   411,   412,   412,   412,   412,   412,
   413,   413
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     2,     1,     1,     1,     1,     1,
     1,     8,    11,     0,     5,     1,     3,     1,     2,     1,
     6,     3,     6,     0,     6,     0,     7,     1,     6,     3,
     6,     0,     6,     0,     7,     0,     0,    10,     3,     3,
     3,     2,     1,     0,     2,     0,     2,     1,     2,     1,
     2,     1,     2,     1,     3,     2,     1,     1,     1,     1,
     1,     1,     1,     0,     2,     0,     6,     0,     6,     1,
     1,     0,     0,     5,     0,     5,     1,     1,     0,     1,
     0,     0,     3,     0,     3,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     0,     7,     0,     8,     1,     3,     0,     3,
     0,     3,     2,     3,     2,     2,     1,     1,     1,     3,
     4,     2,     3,     3,     3,     1,     1,     1,     3,     1,
     1,     3,     4,     2,     3,     3,     3,     1,     3,     1,
     1,     1,     3,     1,     1,     1,     4,     3,     4,     6,
     5,     5,     2,     2,     1,     3,     1,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     1,     3,     1,     9,
     0,     3,     4,     2,     4,     2,     1,     4,     1,     3,
     3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
     3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
     1,     3,     1,     0,     4,     1,     0,     4,     1,     0,
     0,     7,     1,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     1,     3,     0,     1,     1,     1,
     1,     1,     3,     0,     9,     0,    11,     2,     0,     6,
     0,     7,     4,     4,     0,     0,     2,     1,     4,     0,
     4,     1,     3,     4,     1,     3,     1,     1,     1,     1,
     1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
     1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     3,     1,     4,     1,     3,
     2,     2,     2,     0,     1,     0,     0,    11,     0,     0,
    11,     6,     6,     0,     0,    10,     0,     0,    10,     5,
     5,     4,     4,     0,     1,     1,     2,     5,     3,     2,
     4,     1,     3,     4,     6,     0,     8,     4,     1,     3,
     2,     1,     4,     1,     1,     2,     2,     1,     2,     1,
     2,     1,     1,     1,     2,     1,     2,     2,     3,     1,
     3,     1,     3,     1,     1,     3,     0,     2,     0,     4,
     4,     1,     1,     2,     1,     1,     2,     0,     1,     5,
     2,     3,     3,     4,     3,     4,     4,     5,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
     4,     2,     1,     1,     1,     2,     2,     7,     6,     2,
     0,     0,    10,     0,     6,     1,     1,     1,     1,     2,
     1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
     2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     3,     1,     1,     2,     2,     0,     4,     0,
     5,     0,     3,     0,     4,     3,     2,     3,     0,     0,
     0,     0,     0,     1,     2,     2,     3,     2,     3,     3,
     4,     2,     2,     3,     3,     4,     1,     2,     1,     2,
     1,     2,     1,     2,     1,     2,     1,     4,     2,     0,
     5,     0,     6,     4,     4,     0,     0,    10,     1,     0,
     4,     1,     1,     1,     1,     1,     3,     1,     4,     3,
     4,     6,     5,     5,     2,     2,     1,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     1,     4,     1,     3,
     3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
     3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
     1,     3,     1,     3,     1,     3,     1,     0,     0,     7,
     1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     1,     0,     1,     2,     7,     2,     2,     7,
     6,     2,     3,     2,     3,     2,     3,     3,     3,     3,
     2,     3,     0,     1,     1,     1,     1,     1,     1,     1,
     1,     1
};

static const short yydefact[] = {     0,
    11,   386,   354,   231,   354,    14,     0,     0,     0,     0,
   245,   245,   258,   257,   259,   260,   261,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   309,   310,   311,   308,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   354,   354,   354,   354,   354,   354,
   354,   354,   354,   354,   245,   625,   626,   630,   627,   628,
   631,     0,     3,     6,     7,   378,     8,     9,   354,    43,
   623,    10,   230,   232,     0,   334,   334,   354,   334,   354,
   327,   354,     0,   354,   107,   245,   629,    20,   354,   382,
   383,   384,   387,   388,   248,   245,   245,   241,   354,   632,
   354,   354,   630,     0,   475,   245,   482,     0,     0,     0,
   605,     0,     0,     0,     0,   245,   515,     0,   245,   245,
   245,   245,   245,   245,   245,   245,   245,     0,    42,     0,
     0,     0,     0,     0,     0,   245,   145,   141,   144,   142,
   526,   146,   157,   177,   167,   166,   179,   183,   186,   189,
   194,   197,   199,   201,   203,   206,   209,   213,   225,   517,
   171,     0,     0,   507,   465,   466,   467,   468,     0,     0,
   469,   245,   470,     0,   471,     0,   472,   474,   140,     0,
   459,     0,   513,     0,   489,   446,     0,     0,     0,   455,
     0,   456,   435,   454,   451,   452,   447,   448,   449,     0,
     0,   453,     0,     0,     0,   457,   434,     0,   262,   263,
   264,   265,   270,   272,   271,   275,   276,   287,   289,   290,
   288,   273,   274,   266,   267,   268,   269,   284,   285,   282,
   286,   277,   278,   281,   279,   280,   293,   295,   300,   283,
   296,   297,   298,   299,   291,   292,   294,   301,   302,   305,
   306,   303,   304,   312,   314,   313,   315,   316,   317,   318,
   319,   320,   321,   307,     4,   245,     0,   109,   113,   509,
   354,   354,   624,     5,   354,   335,   331,   332,   325,   333,
     0,   245,   245,   323,   245,   245,     0,   324,   379,   322,
   385,   389,   354,     0,   247,   354,     0,   238,   245,   623,
    16,    18,     0,   354,   245,    28,   397,   245,   141,   144,
   177,   229,   478,   140,     0,   245,   245,   245,   245,     0,
   614,   616,   621,     0,     0,   354,   403,     0,     0,   160,
   165,   164,   163,   162,   161,     0,   245,   158,   159,   245,
     0,     0,     0,     0,     0,   245,   484,   245,     0,     0,
     0,   477,   428,   245,   419,   420,   421,   422,     0,   423,
   424,   245,   426,   245,   425,   427,   489,   245,   245,   153,
   154,     0,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   204,
   210,   207,   516,   245,     0,   612,    39,     0,   490,   508,
   519,   609,     0,   476,   245,     0,     0,     0,   514,    40,
   436,   440,   450,   461,   462,   460,     0,     0,    41,    22,
   245,   397,   354,   245,   489,   510,   245,   233,   108,   354,
     0,   329,     0,   354,     0,   354,     0,   245,   245,   244,
   245,   243,   239,   354,     0,   245,     0,   354,   245,    19,
   394,     0,     0,   380,   395,   245,     0,     0,   483,     0,
   522,     0,   228,     0,   613,   622,   143,   245,   245,     0,
   405,   404,   406,   245,   473,   245,     0,   617,   618,   619,
   620,   615,   480,     0,     0,     0,     0,     0,   608,   354,
   487,   606,     0,     0,   148,     0,   155,     0,     0,     0,
   214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
   224,   180,   181,   182,   185,   184,   187,   188,   190,   191,
   192,   193,   195,   196,   198,   200,   202,   245,   245,   245,
   226,   245,   245,   172,   503,   144,   507,     0,   354,   488,
   520,     0,     0,   458,   444,     0,     0,    24,     0,   494,
   245,   511,   110,   354,   245,   354,   489,   112,   245,   234,
   328,   245,   344,     0,   352,   347,     0,   353,     0,   369,
   372,   366,   368,   249,   245,   245,   623,    15,    30,   245,
   397,   245,    17,   381,   390,   392,    36,   399,   354,   398,
   402,   479,   518,     0,   524,   245,   326,   411,     0,   397,
   407,   245,     0,   178,   354,   245,     0,   485,   486,     0,
     0,     0,   502,     0,   527,   245,   149,   147,   245,   245,
   205,     0,   208,   245,   174,   245,   176,   504,   505,   245,
   245,   245,   525,   245,   245,   354,    44,    26,   495,   498,
   245,   245,   496,   245,   512,     0,   236,   245,   330,   350,
   491,   336,   351,   491,   339,   245,   371,   245,     0,     0,
   245,   245,   245,     0,    32,     0,   245,     0,    46,   396,
   245,   408,   245,     0,   412,   415,   245,     0,   413,     0,
   397,     0,     0,   481,   429,   430,   431,   245,   245,   156,
   151,   152,   211,     0,     0,   506,   521,     0,   245,   245,
   245,   245,   245,   245,   245,   245,   245,     0,   141,   144,
   142,   157,   177,   166,   183,   186,   189,   194,   197,   199,
   201,   203,   206,     0,   530,   529,   538,   547,   557,   559,
   563,   566,   569,   574,   577,   579,   581,   583,   585,   587,
   591,   532,   140,     0,    23,    25,    72,    44,   499,   500,
   245,   497,    21,   245,   250,   354,   342,   491,   354,   343,
   491,   365,   370,   245,     0,   242,   245,   252,   240,   245,
     0,   354,    46,    34,     0,   391,   393,    37,    79,   400,
   374,     0,   245,   408,   375,   409,   523,   441,     0,   416,
   414,   417,     0,     0,   150,     0,   530,   245,   173,   175,
   611,     0,     0,   160,   165,   164,   163,   162,   161,   158,
   159,   245,   245,   245,   153,   154,     0,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   204,   588,   207,   445,     0,   439,
    66,    82,    70,    86,    87,    88,    89,    90,    93,    94,
    45,    72,    48,    71,   354,   354,    52,    27,   501,   245,
     0,   356,   354,   354,   355,   354,   354,   354,   373,   245,
   255,     0,   250,    12,    31,    33,    46,    29,   623,    73,
    84,    77,    47,    79,    50,    78,   397,   401,   376,   377,
   245,   410,   418,     0,   169,     0,   489,   212,   610,   143,
   245,     0,   148,     0,     0,     0,     0,   592,   593,   594,
   595,   596,   597,   598,   599,   600,   601,   602,   180,   181,
   182,   185,   184,   187,   188,   190,   191,   192,   193,   195,
   196,   198,   200,   202,   584,   245,   586,   245,   438,   354,
    64,   623,    49,   103,     0,    53,   250,   245,   354,     0,
   245,   357,   345,   354,   348,   354,   367,   253,   245,   623,
    35,     0,   354,    64,   623,    51,   245,   442,   245,     0,
   607,   604,   178,   245,   149,   147,   245,   245,     0,   531,
   354,    59,    60,    61,    62,    63,   623,    54,    64,     0,
     0,     0,   119,    83,   128,   623,     0,   118,     0,    95,
   100,    99,    98,    97,    96,   101,   102,   105,     0,   235,
   245,   359,   245,   245,   354,   362,     0,   337,     0,   340,
   254,   256,     0,    38,   623,   623,    85,   623,   117,   245,
     0,   170,   168,   603,   490,     0,   151,   152,   589,     0,
    64,     0,    65,    58,    56,    57,     0,   122,     0,     0,
     0,     0,     0,   115,     0,     0,   131,   138,   623,   130,
     0,   245,   251,   245,   245,     0,   360,   245,   346,     0,
   349,     0,    13,    81,    81,   116,   443,   528,   150,   245,
    81,    55,    81,   123,   120,   127,   126,     0,   124,   125,
   129,   114,     0,   134,     0,     0,     0,     0,     0,   623,
   237,   363,   354,   358,   245,   338,   341,    74,    80,    76,
   590,    67,    69,   121,   135,   132,     0,   136,   137,   139,
    92,   245,     0,   361,   364,   133,   104,    91,   245,   106,
     0,     0,     0
};

static const short yydefgoto[] = {  1171,
    82,    83,    84,    85,   122,   320,   321,    86,   667,   778,
   322,   803,   917,    87,   699,   919,   902,    89,   776,   777,
   808,   809,   891,   923,   892,  1027,  1028,  1085,  1029,  1030,
   893,   980,   981,   925,  1003,  1004,  1148,  1149,   982,   926,
  1005,   895,  1169,  1162,   896,  1048,   897,  1039,  1101,    90,
   289,   453,   455,    91,  1034,  1067,  1035,  1128,  1036,  1098,
  1099,   162,   163,   526,   164,   934,   165,   166,   425,   564,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   558,   177,   560,   178,   559,   828,   179,   207,   494,   333,
   290,    93,   678,   784,   115,   606,    94,   316,   181,   287,
   116,   117,   901,   799,   912,    96,    97,    98,    99,   347,
   291,   461,   101,   297,   102,   788,  1110,   791,  1112,   681,
  1057,   684,  1059,   103,   904,   905,  1054,  1055,   104,   689,
   599,   600,   813,   119,   483,   112,   113,   106,   614,   615,
   484,   485,   486,   701,   620,   348,   819,   815,   503,   372,
   373,   208,   228,   209,   210,   374,   931,  1071,   212,   664,
   213,   214,   215,   216,   183,   430,   375,   376,   488,   637,
   377,   335,   514,   378,   188,   379,   570,   786,   993,   221,
   583,   521,   429,   190,   584,   585,   380,   191,   192,   381,
   661,   624,   382,   224,   383,   387,   719,   755,   879,   756,
   757,   758,   759,   760,   761,   762,   763,   764,   765,   766,
   767,   768,   769,   770,   771,   976,  1120,   772,  1075,   384,
   385,   197,   386,   294,   334,   200,   109
};

static const short yypact[] = {  2035,
-32768,    71,  5671,-32768,  6518,-32768,   301,  2991,  3363,  3363,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   325,-32768,-32768,
-32768,  2212,-32768,-32768,-32768,   437,-32768,-32768,  5291,-32768,
   101,-32768,-32768,-32768,   109,  6357,  6357,-32768,  6357,   204,
   108,-32768,   373,-32768,-32768,   301,-32768,-32768,-32768,-32768,
-32768,-32768,    71,-32768,-32768,   196,-32768,   204,-32768,-32768,
-32768,  5671,-32768,   216,-32768,  5835,-32768,   225,   243,   256,
-32768,   263,   301,   283,   291,  1093,-32768,  2578,  5835,  5835,
  5835,  5835,  5835,  5835,-32768,  5860,  5860,   305,-32768,   337,
   462,   575,   592,   326,   159,  4737,-32768,   461,   507,-32768,
   597,-32768,   759,   970,-32768,-32768,-32768,   660,   290,   314,
   481,   355,   400,   589,   600,   591,   100,-32768,-32768,   185,
-32768,  3506,   522,   581,-32768,-32768,-32768,-32768,   661,  3134,
-32768,  4737,-32768,  3506,-32768,  3506,-32768,-32768,   689,   703,
-32768,   722,-32768,  2763,   597,   719,   380,   663,  3177,-32768,
  3363,-32768,-32768,-32768,  6117,-32768,-32768,-32768,-32768,   712,
   732,-32768,  3363,  3363,  3506,-32768,-32768,   668,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   741,   764,-32768,-32768,-32768,
   204,  5134,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   781,   614,-32768,-32768,   301,   301,   -11,-32768,   437,-32768,
-32768,-32768,-32768,   803,-32768,-32768,   809,   754,   614,   101,
-32768,   465,   772,-32768,   301,-32768,   347,  5835,-32768,-32768,
-32768,-32768,-32768,-32768,   815,  5835,  5835,  5835,  1582,   811,
-32768,-32768,-32768,   435,   356,  5986,   199,   833,   838,-32768,
-32768,-32768,-32768,-32768,-32768,   843,  5835,-32768,-32768,  5835,
   852,   854,   860,   910,   916,  5835,-32768,  1809,   682,   682,
   682,-32768,-32768,  4737,-32768,-32768,-32768,-32768,   934,-32768,
-32768,  4737,-32768,  4737,-32768,-32768,-32768,  1034,  5835,-32768,
-32768,   123,  5835,  5835,  5835,  5835,  5835,  5835,  5835,  5835,
  5835,  5835,  5835,  5835,  5835,  5835,  5835,  5835,  5835,  5835,
  5835,  5835,  5835,  5835,  5835,  5835,  5835,  5835,  5835,-32768,
-32768,-32768,-32768,  5835,   506,-32768,-32768,  2393,-32768,-32768,
   892,-32768,   949,-32768,  5835,   407,   867,   940,-32768,-32768,
-32768,-32768,  6117,-32768,-32768,-32768,  2948,   957,-32768,-32768,
  5835,   156,  3608,   614,   951,-32768,   614,-32768,   274,  6518,
   904,   961,   975,   976,   977,   976,   301,   979,   614,-32768,
   614,-32768,-32768,-32768,   915,   978,   982,-32768,   614,   465,
-32768,   301,   983,-32768,   989,   301,   321,   991,-32768,   370,
   990,   382,   990,   998,-32768,-32768,-32768,-32768,  3416,   995,
   488,-32768,   513,  5835,-32768,-32768,  1002,-32768,-32768,-32768,
-32768,-32768,-32768,  1015,  1013,   868,   875,   878,-32768,  3608,
-32768,-32768,  1038,  1032,-32768,   394,-32768,    80,   301,   301,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   660,   660,   290,   290,   314,   314,
   314,   314,   481,   481,   355,   400,   589,  5835,  5835,  5835,
-32768,  5880,  5891,-32768,-32768,  5519,-32768,  3320,  3788,-32768,
-32768,  1037,   413,-32768,-32768,  1049,  1035,-32768,  1050,-32768,
  4148,-32768,-32768,  3968,  4191,-32768,   951,-32768,-32768,  1054,
-32768,-32768,  1059,  1065,-32768,  1071,  1066,-32768,   559,-32768,
  1069,-32768,-32768,-32768,   196,-32768,   320,-32768,-32768,  5835,
   371,   614,-32768,-32768,  1073,-32768,-32768,  1092,  6518,-32768,
-32768,-32768,-32768,  1074,-32768,  1582,-32768,-32768,  1080,   264,
   513,  5003,  1076,-32768,-32768,-32768,  1091,-32768,-32768,  1010,
  1031,  1033,-32768,  1096,-32768,  5835,-32768,-32768,-32768,-32768,
   600,   631,   591,  5835,-32768,  5835,-32768,-32768,-32768,  4330,
  4737,  5835,-32768,  5911,  5835,-32768,-32768,-32768,-32768,-32768,
  4373,  4512,-32768,  4555,-32768,  1103,-32768,-32768,-32768,-32768,
-32768,  1109,-32768,-32768,  1110,-32768,   301,-32768,   301,  1113,
  1913,-32768,-32768,  1105,-32768,  1108,-32768,   361,-32768,-32768,
   301,   778,  4737,  1118,-32768,-32768,   237,  1122,-32768,  1111,
   139,  1135,  1132,-32768,-32768,-32768,-32768,  5835,  5911,-32768,
-32768,-32768,-32768,  1133,  1134,-32768,-32768,   467,  5835,  5835,
  5835,  5835,  5835,  5835,  5835,  5860,  5860,  1136,   535,   546,
   553,  1062,  1123,   560,   911,   672,   806,   836,   887,  1138,
  1125,  1121,  1116,   153,  1140,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   604,   609,-32768,-32768,  1070,-32768,-32768,-32768,
  4694,-32768,-32768,-32768,-32768,  6444,-32768,-32768,  6444,-32768,
-32768,-32768,-32768,  5835,   928,-32768,  1913,-32768,-32768,  1913,
  1084,-32768,-32768,-32768,  1143,-32768,-32768,-32768,  1128,-32768,
   437,  1149,-32768,   655,-32768,   513,-32768,-32768,  1150,-32768,
-32768,-32768,  1151,   301,-32768,   612,  1152,  5835,-32768,-32768,
  1160,   618,  1165,   707,   717,   723,   750,   753,   784,   798,
   807,  5835,  5530,  5835,   826,   829,   132,  5835,  5835,  5835,
  5835,  5835,  5835,  5835,  5835,  5835,  5835,  5835,  5835,  5835,
  5835,  5835,  5835,  5835,  5835,  5835,  5835,  5835,  5835,  5835,
  5835,  5835,  5835,  5835,  5835,-32768,  5835,-32768,  1170,  1174,
    56,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   882,-32768,-32768,-32768,-32768,  1233,-32768,-32768,  1913,
   572,-32768,   204,  5365,-32768,  6444,  5365,  6444,-32768,-32768,
-32768,   946,-32768,-32768,-32768,-32768,-32768,-32768,   101,    62,
-32768,-32768,-32768,   913,-32768,-32768,   570,-32768,-32768,-32768,
  5698,-32768,-32768,   573,-32768,  1176,   951,-32768,-32768,   832,
  5835,  1175,   859,   873,   245,   301,   301,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   874,   881,
   883,   755,   790,   205,   279,   402,   423,   561,   709,   639,
   662,   133,   218,   138,   600,  5835,   591,  5911,-32768,  6248,
   319,   102,-32768,-32768,   792,-32768,-32768,-32768,-32768,  1179,
   443,-32768,-32768,  5365,-32768,  5365,-32768,-32768,  1705,   640,
-32768,  1129,  6248,   319,   102,-32768,   583,-32768,-32768,   301,
-32768,  1039,   891,-32768,   893,   894,-32768,-32768,   952,-32768,
  4976,-32768,-32768,-32768,-32768,-32768,   645,-32768,   319,   810,
    65,    65,-32768,-32768,   231,   650,  1137,-32768,   105,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   664,-32768,
   614,-32768,-32768,  1178,-32768,  1199,  1202,-32768,  1204,-32768,
-32768,-32768,  1144,-32768,  4818,   645,-32768,   650,-32768,   543,
  1201,-32768,-32768,-32768,-32768,  1208,   901,   912,-32768,  1146,
   319,  1147,-32768,-32768,-32768,-32768,   127,   231,   638,   301,
   301,    65,  1148,-32768,   105,   105,-32768,   323,   685,-32768,
   105,-32768,-32768,  5835,   443,  1219,-32768,-32768,-32768,  1220,
-32768,  1237,-32768,  1186,  1186,-32768,-32768,-32768,   914,  5835,
  1186,-32768,  1186,-32768,-32768,-32768,   231,  1234,-32768,-32768,
   231,-32768,   574,   323,   842,   301,   301,   105,  1172,   685,
-32768,-32768,-32768,-32768,  5835,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1235,-32768,-32768,   323,
-32768,-32768,  1180,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1263,  1264,-32768
};

static const short yypgoto[] = {-32768,
-32768,  1184,-32768,-32768,-32768,-32768,  -465,  -105,-32768,-32768,
   942,-32768,-32768,-32768,-32768,-32768,   128,-32768,   492,-32768,
  -699,-32768,-32768,-32768,  -735,   267,   195,-32768,-32768,   252,
   390,-32768,-32768,   362,-32768,-32768,  -765,  -680,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  -907,   150,   286,  -981,
   191,-32768,  -592,   451,   837,-32768,-32768,  -588,-32768,-32768,
   111,  -340,  -365,  -303,  -346,  -334,  -371,  -331,  -541,  -457,
-32768,  -585,-32768,   -49,-32768,-32768,   950,  1197,  -617,  -364,
     4,-32768,-32768,-32768,  -464,-32768,-32768,-32768,     0,  -306,
   825,-32768,  -763,  -716,-32768,-32768,-32768,-32768,-32768,-32768,
    93,   705,-32768,   711,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   974,  -695,  -767,-32768,   194,-32768,-32768,
   611,   615,   489,    13,  -406,  1191,-32768,     8,-32768,-32768,
  -565,-32768,-32768,-32768,   608,  -232,   958,-32768,  -494,  -126,
-32768,  1308,-32768,  1095,-32768,  1221,-32768,-32768,-32768,-32768,
  -131,-32768,-32768,-32768,-32768,    82,  1298,  1399,-32768,-32768,
  1452,-32768,-32768,  -353,-32768,   727,   246,  -572,  -794,-32768,
   800,-32768,-32768,   899,   -83,  -370,   222,-32768,   251,    83,
-32768,-32768,   175,-32768,   193,-32768,-32768,   603,-32768,   350,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1463,
-32768,-32768,  1710,  -235,   188,   414,-32768
};


#define	YYLAST		6703


static const short yytable[] = {    95,
   309,   513,    95,    92,   604,   292,   631,   467,   704,   114,
   229,   230,   105,   613,   515,   477,   651,   231,   232,   233,
   234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   547,   548,   579,   556,   257,   258,   259,
   260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
   270,   271,   272,   273,   708,   431,   545,   546,   553,   554,
   462,   742,   437,   924,   284,   744,   332,   441,   754,   442,
   911,    95,   555,   913,   475,    92,   577,   557,  1031,   184,
   193,   446,   100,   907,   105,   118,   894,   121,  1032,   301,
   424,   588,   653,   916,     2,    95,   648,   549,   550,   551,
   552,   789,   995,  1133,  1134,   314,   315,   317,   293,   293,
   312,   323,   752,  1087,  1088,  1031,   742,    88,  1095,   325,
   744,   443,   295,   754,   629,  1032,   992,   346,  1096,   992,
   421,   -68,   -68,   481,   356,   823,   697,   -75,   -75,  1000,
   529,  1124,  1089,  -578,  1090,   422,  1160,  -578,  -582,   946,
   481,   986,  -582,   822,   366,   367,   530,    76,    77,   123,
  1091,    79,    80,   477,   100,   947,   418,   752,   110,   111,
   578,  1127,   194,   987,  1131,   415,   416,   107,   296,   296,
   107,   296,   303,   876,   107,   199,   199,   199,   660,  1058,
   195,  1060,   423,   346,   696,   424,   753,   816,   877,    88,
   994,   894,   996,   672,   324,   906,   313,  1001,   908,   349,
   193,  -245,  -245,  1049,   499,  -567,   992,  1127,   992,  -567,
   222,   222,     2,   515,   -68,   -68,   407,   408,  -580,   327,
   -75,   -75,  -580,    76,  1033,   694,   417,   519,   336,   350,
   351,   352,   353,   354,   355,   522,  1089,   523,  1090,   223,
   223,   753,   499,   426,   193,   424,   337,   710,   481,   107,
     2,  1016,   193,   635,  1091,   432,   193,   433,   193,   338,
    76,  1033,  1062,    76,  1097,   451,   339,  -354,   706,  -354,
   301,  -354,   750,   107,  -354,   456,  -354,  -354,   746,  -568,
   341,    95,   460,  -568,   463,   465,   448,   193,   342,   107,
   407,   408,   194,  1008,   459,   441,   332,   748,    95,   816,
   107,   407,   408,   745,   323,   199,   582,   346,   360,   749,
   195,   474,   751,   975,  -354,  -354,  -354,   293,  -354,  -354,
   365,   424,   692,   199,   569,   497,   500,   750,  1135,  1150,
  1136,   481,   361,   746,   501,  1152,   194,  1153,  -632,   462,
   747,   708,   409,   410,   194,   806,  1137,   346,   194,   199,
   194,   693,   748,   423,   195,   481,   424,   199,   745,   199,
   497,   199,   195,   199,   749,   742,   195,   751,   195,   744,
   424,   199,   754,   582,   623,   695,   199,   439,   199,   194,
   424,   332,   424,   713,  1022,  1023,   625,   415,   416,  -632,
   199,   199,   199,   108,   646,   747,   108,   195,   647,   977,
   124,   724,  -570,   725,   439,   222,  -570,   424,   417,   909,
   222,   497,   222,   424,  1024,  1025,   752,   663,   498,   305,
   306,   307,   582,  -571,   222,   222,   456,  -571,  1026,   332,
   409,   410,   496,    95,   223,   424,    95,   582,   675,   223,
  -246,   223,   286,   594,  1053,   597,   586,   603,    95,   589,
    95,   409,   410,   223,   223,   610,     2,   362,   323,    76,
    77,   123,  -626,    79,    80,   619,   325,   424,  -246,   107,
   476,   831,   107,   107,   107,   108,   833,   627,   964,   965,
   500,   973,   633,  -632,  -632,   460,   107,  -632,  -632,   567,
   193,  -245,   107,   499,   542,   543,   544,   411,   412,   108,
   753,   962,   963,   970,   971,  -354,  -354,  -354,  -630,  -354,
  -354,   413,   414,   675,   727,   326,  -245,   972,   632,    76,
    77,   123,   974,    79,    80,   675,   340,   562,   563,  -354,
  -354,  -354,   498,  -354,  -354,  -535,   516,   517,   518,  -535,
   332,   199,   966,   967,   968,   969,  -534,  -405,   499,   199,
  -534,   199,   456,  -536,   481,   631,   817,  -536,   686,   687,
  -556,  -572,   332,  1012,  -556,  -572,  1103,   456,   676,   988,
   363,   460,   989,  -354,   706,  -354,   811,  1009,  1155,  1135,
  1010,  1136,   194,  -354,   690,   691,   750,   364,   499,   409,
   410,   323,   746,   427,   634,   199,     2,  1137,  -627,   325,
   195,    76,    77,   123,  -533,    79,    80,   418,  -533,   424,
   633,   748,   424,   880,   199,   460,   936,   745,   424,   419,
   199,   107,   940,   749,   107,   420,   751,     2,   721,   722,
   193,   424,   723,   346,   107,   346,   107,   293,   107,  -575,
   989,  1031,   293,  -575,  1125,  1081,   107,   293,   222,   107,
  1092,  1032,  -463,   107,   747,   411,   412,   785,  -245,   428,
   499,  1102,  -576,  1002,   989,   792,  -576,   794,     2,   413,
   414,   800,   801,   404,   405,   406,   805,   223,   411,   412,
   619,   812,   293,   862,   863,  1138,   500,   199,   811,   814,
  -629,   702,   413,   414,   501,   108,   107,   107,   464,   466,
   468,    76,    77,   123,   434,    79,    80,  -550,   346,  -573,
   444,  -550,   108,  -573,   189,   220,   220,  -555,   326,  1142,
  -628,  -555,   194,  -554,   332,   435,  1037,  -554,  -354,  -354,
  -354,   445,  -354,  -354,   440,   199,   199,   409,   410,   449,
   195,    76,    77,   123,  1063,    79,    80,   450,   199,  1069,
  -553,   199,   199,  -552,  -553,  -565,   473,  -552,   938,  -565,
  1165,  1076,   388,   900,   389,  1080,  -354,   452,   404,   405,
   406,  1082,    76,    77,   123,   478,    79,    80,   458,   107,
  1093,  -245,  -354,   499,  -551,   390,   391,   298,  -551,   300,
  -564,     2,   928,   812,  -564,   633,    76,  1033,  -548,  1126,
   470,   814,  -548,   404,   405,   406,   472,  -549,   495,  1114,
  1115,  -549,  1116,    76,    77,   123,   489,    79,    80,   929,
   834,   835,   836,   837,   838,   839,  -545,   199,   199,  -546,
  -545,   773,  -537,  -546,   864,   865,  -537,   504,   199,   199,
    76,   199,   505,  1139,   189,  1031,   506,   108,  1156,   508,
   108,   509,   866,   867,   107,  1032,   107,   510,   903,  -540,
   601,   903,   108,  -540,   108,   107,   868,   869,   107,   107,
   199,   574,   326,   646,  -560,   616,  1021,  1015,  -560,   621,
   571,  -561,   990,  -562,  1163,  -561,   773,  -562,   189,   997,
  1040,  -558,  1041,  -541,  -539,  -558,   189,  -541,  -539,  1065,
   189,  -543,   189,  1042,  1043,  -543,  1044,   511,  1045,  1046,
   220,   438,  -544,   512,  -542,   220,  -544,   220,  -542,   870,
   871,  1047,   649,   650,   859,   860,   861,   910,   687,   220,
   220,   189,   520,   881,   882,   883,    76,    77,   123,   572,
    79,    80,   331,   575,   309,   998,   999,   576,   199,   959,
   960,   961,   424,  1079,   587,   331,   331,   331,   331,   331,
   331,   592,   358,   359,   920,   921,   922,  1050,    76,  1084,
    95,   591,   393,   593,  -245,   596,   903,   602,   903,   903,
   903,   107,   608,  1056,   609,   611,   812,   617,  1072,   618,
   424,   107,   622,   460,  1070,   626,  1077,  1078,   630,   589,
    76,  1033,   636,  1126,   456,   326,   394,   395,   396,   397,
   398,   399,   400,   401,   402,   403,   638,   639,   274,   275,
   276,   277,   278,   279,   280,   281,   282,   283,   644,   640,
    95,  1013,  1104,  1106,   332,   645,   641,   328,   525,   642,
   662,   666,   139,   140,   141,   142,   143,   144,   456,   812,
  1151,   299,   665,   302,   668,   304,   677,   308,   680,   145,
   146,   147,   310,   682,   685,   843,   903,   844,   903,  -354,
   683,   688,   318,   698,   319,   332,   700,   715,   703,   711,
   601,  1141,   601,   148,    95,  -354,   705,  1145,   845,   846,
   343,   807,   714,   524,   621,   108,   328,  1056,   716,   718,
   717,   139,   140,   141,   142,   143,   144,   783,   787,   790,
   796,   802,   804,   107,   107,   818,   392,   821,   145,   146,
   147,   881,   882,   883,   157,   848,   820,   884,   885,   886,
   887,   888,   889,   890,   189,   824,   825,   829,   830,   842,
   874,  1167,   148,   873,   878,   773,   872,   918,  1170,  1038,
   875,   914,   927,   220,   932,   933,   937,   939,   107,   849,
   850,   851,   852,   853,   854,   855,   856,   857,   858,   941,
   978,   979,  1038,  1011,   107,  1014,  1052,   107,  1105,   920,
   921,   922,   331,   157,   180,   884,   885,   886,   887,   888,
   889,   890,    76,   329,   330,   160,  1064,  1086,  1038,  1038,
  1108,  1109,  1074,  1111,  1094,  1117,  1100,   108,   182,   211,
   211,  1113,  1119,  1121,  1123,  1132,  1144,   935,   107,  1146,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,  1147,   107,   882,  1161,
  1154,  1166,  1172,  1173,   454,   285,   480,  1168,   457,   898,
  1066,    76,   329,   330,   160,  1122,  1038,   107,   107,  1038,
  1083,   983,  1100,  1100,  1157,  1006,   469,   331,  1100,   471,
  1068,  1140,   107,   944,   189,   605,   679,   479,  1143,   795,
   482,   793,   930,   311,   502,   185,   217,   217,   810,   507,
   884,   885,   886,   887,   888,   889,   890,   227,   447,   643,
  1118,   827,  1038,   107,   107,  1100,   568,  1020,     0,     0,
     0,     0,   344,     0,   345,   331,     0,   527,     0,     0,
   331,     0,   531,   532,   533,   534,   535,   536,   537,   538,
   539,   540,   541,     0,     0,     0,     0,     0,   182,  1017,
  1018,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   561,     0,     0,     0,     0,   180,     0,
     0,     0,     0,     0,     0,     0,   180,     0,     0,     0,
   180,     0,   180,     0,   331,     0,   331,     0,   655,   657,
   436,     0,   182,     0,   108,     0,   186,   218,   218,     0,
   182,     0,     0,     0,   182,     0,   182,     0,     0,     0,
   108,   180,     0,  1073,   211,   482,     0,     0,     0,   211,
     0,   211,   590,     0,     0,   185,     0,   595,     0,   598,
     0,     0,     0,   211,   211,   182,   331,   607,     0,     0,
     0,   612,     0,     0,     0,     0,     0,     0,     0,   187,
   219,   219,     0,     0,   108,     0,     0,     0,   331,     0,
   196,   225,   225,     0,     0,     0,     0,     0,     0,   185,
     0,     0,     0,   108,     0,     0,     0,   185,     0,     0,
     0,   185,     0,   185,     0,     0,     0,     0,     0,     0,
   743,   217,     0,  1129,  1130,     0,   217,     0,   217,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   108,     0,
   217,   217,   185,     0,   487,     0,     0,     0,     0,     0,
     0,     0,   490,   491,   492,   493,   186,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1158,
  1159,     0,     0,   487,     0,   743,     0,     0,     0,   590,
     0,     0,     0,     0,   487,     0,   331,   331,   331,   331,
   331,   331,   840,   841,     0,     0,     0,     0,     0,     0,
   186,     0,     0,     0,   482,   528,     0,     0,   186,   187,
     0,     0,   186,     0,   186,   720,     0,     0,     0,  -227,
   196,     0,   218,   707,     0,   328,     0,   218,   712,   218,
   139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
     0,   218,   218,   186,   180,     0,     0,   145,   146,   147,
   331,   573,     0,   187,     0,     0,     0,     0,     0,   775,
   798,   187,     0,     0,   196,   187,     0,   187,   182,     0,
     0,   148,   196,     0,     0,   219,   196,     0,   196,     0,
   219,     0,   219,     0,   331,     0,   225,   211,     0,     0,
     0,   225,     0,   225,   219,   219,   187,     0,     0,     0,
     0,     0,     0,     0,     0,   225,   225,   196,     0,     0,
     0,     0,   157,     0,     0,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,     0,   331,     0,   847,     0,   198,   226,   226,
     0,     0,     0,   797,  1061,   185,     0,     0,   328,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,   217,     0,   798,     0,     0,   798,
   145,   146,   147,     0,     0,   652,     0,     0,     0,     0,
    76,   329,   330,   160,   180,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   148,   915,     0,   331,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   182,     0,
     0,   942,   527,     0,     0,     0,     0,   948,   949,   950,
   951,   952,   953,   954,   955,   956,   957,   958,     0,     0,
     0,     0,     0,     0,   743,   157,     0,     0,     0,     0,
     0,     0,   493,     0,     0,     0,   186,  -489,     0,     0,
     0,     0,   368,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,   218,     0,   198,     0,   798,
   487,     0,   487,     0,   145,   146,   147,     0,   728,     0,
     0,   774,     0,     0,     0,   185,     0,     0,   984,   985,
     0,     0,     0,     0,     0,     0,   991,     0,   148,   187,
     0,     0,     0,    76,   329,   330,   160,     0,     0,     0,
   196,   198,     0,     0,     0,     0,     0,     0,   219,   198,
  1007,     0,     0,   198,     0,   198,     0,     0,     0,   225,
     0,     0,     0,   226,   826,     0,     0,     0,   226,   157,
   226,     0,     0,     0,     0,   832,     0,     0,     0,     0,
     0,   797,   226,   226,   198,     0,   328,     0,     0,     0,
   331,   139,   140,   141,   142,   143,   144,     0,   798,     0,
     0,     0,     0,     0,     0,     0,   331,     0,   145,   146,
   147,     0,  1051,     0,     0,     0,   186,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   331,   148,     0,     0,     0,     0,    76,   329,   330,
   160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   187,
     0,     0,     0,   157,     0,     0,     0,     0,  1107,     0,
   196,     0,     0,     0,    -1,     1,     0,     0,     0,     0,
   945,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  -245,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    76,   329,   330,   160,     0,     0,     0,     0,     0,
     0,  -354,  -354,  -354,     0,     4,     0,     0,     0,     5,
     6,     7,     0,     0,     0,     0,  1164,     0,     0,     0,
     0,     0,     0,     8,     9,    10,     0,   493,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,     0,     0,
     0,     0,    11,    12,    13,     0,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,   226,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,  1019,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     0,    -2,     1,    76,    77,    78,     0,    79,    80,    81,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  -245,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,  -354,  -354,
  -354,     0,     4,     0,     0,     0,     5,     6,     7,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
    12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,     0,     0,     0,
    76,    77,    78,   125,    79,    80,    81,     0,   126,   127,
   128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
   137,  -489,   565,     0,     0,     0,   138,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,  -245,  -245,     0,     3,   145,   146,
   147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  -354,
  -354,  -354,   148,     4,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   156,
    11,    12,    13,   157,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,     0,     0,
     0,    76,   158,   566,   160,   161,    80,    81,   125,     0,
     0,     0,     0,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -489,     0,     0,     0,
     0,   138,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -245,
  -245,     0,     0,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  -245,  -245,  -245,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,  -245,  -245,  -245,   157,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,     0,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,     0,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,     0,     0,     0,    76,   158,   159,   160,
   161,    80,  -245,   201,     0,     0,     0,     0,   126,   127,
   128,     0,     0,   202,   131,   132,   133,   134,   135,   136,
   203,  -489,  -493,     0,     0,     0,   204,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,  -245,  -245,     0,     0,   145,   146,
   147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  -245,
  -245,  -245,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   156,
  -245,  -245,  -245,   157,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,     0,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
     0,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,     0,     0,
     0,    76,   158,   159,   160,   205,   206,  -245,   201,     0,
     0,     0,     0,   126,   127,   128,     0,     0,   202,   131,
   132,   133,   134,   135,   136,   203,  -437,  -437,     0,     0,
     0,   204,  -437,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -245,
  -245,   125,     0,   145,   146,   147,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   137,  -489,
     0,     0,     0,     0,   138,     0,     0,   148,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,  -245,  -245,     0,     0,   145,   146,   147,  -437,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
   148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   149,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
     0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    76,   158,   159,   160,
   205,   206,     0,     0,   125,     0,     0,     0,     0,   126,
   127,   128,     0,   129,   130,   131,   132,   133,   134,   135,
   136,   137,  -489,     0,     0,     0,     0,   138,     0,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,    76,
   158,   159,   160,   161,    80,  -245,  -245,   201,     0,   145,
   146,   147,   126,   127,   128,     0,     0,   202,   131,   132,
   133,   134,   135,   136,   203,  -489,  -493,     0,     0,     0,
   204,     0,     0,   148,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,  -245,  -245,
     0,     0,   145,   146,   147,  -464,   150,   151,   152,   153,
   154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
   156,     0,     0,     0,   157,     0,   148,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  -433,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   156,     0,     0,     0,   157,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    76,   158,   159,   160,   161,    80,     0,     0,
   125,     0,     0,     0,     0,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   137,  -489,   658,
     0,     0,     0,   138,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,    76,   158,   159,   160,   205,
   206,  -245,  -245,   201,     0,   145,   146,   147,   126,   127,
   128,     0,     0,   202,   131,   132,   133,   134,   135,   136,
   203,  -489,  -493,     0,     0,     0,   204,     0,     0,   148,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,  -245,  -245,     0,     0,   145,   146,
   147,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   156,     0,     0,     0,
   157,     0,   148,     0,     0,     0,     0,     0,     0,   328,
     0,     0,   628,     0,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     0,     0,   150,   151,   152,   153,   154,
   155,   145,   146,   147,     0,     0,     0,     0,     0,   156,
     0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   148,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    76,   158,
   159,   160,   161,    80,     0,     0,   125,     0,     0,     0,
     0,   126,   127,   128,     0,   129,   130,   131,   132,   133,
   134,   135,   136,   137,  -489,     0,   157,     0,     0,   138,
     0,     0,     0,     0,   139,   140,   141,   142,   143,   144,
     0,    76,   158,   159,   160,   205,   206,  -245,  -245,     0,
     0,   145,   146,   147,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   148,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    76,   329,   330,   160,   150,   151,
   152,   153,   154,   155,     0,     0,     0,     0,     0,     0,
     0,     0,   156,   126,   127,   128,   157,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -489,   580,     0,     0,
     0,   368,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -245,
  -245,     0,     3,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   148,     4,     0,
     0,     0,     0,     0,    76,   158,   159,   160,   161,    80,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   581,    11,    12,    13,   157,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,     0,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,   369,   370,   371,    76,   158,   566,   160,
   161,    80,    81,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -489,   659,     0,     0,
     0,   368,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -245,
  -245,     0,     3,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   148,     4,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,    11,    12,    13,   157,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,     0,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,   369,   370,   371,    76,   158,   566,   160,
   161,    80,    81,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -489,   670,     0,     0,
     0,   368,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -245,
  -245,     0,     3,   145,   146,   147,     0,     0,     0,     0,
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
    73,    74,    75,   369,   370,   371,    76,   158,   566,   160,
   161,    80,    81,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -489,   669,     0,     0,
     0,   368,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   146,   147,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   203,  -489,
   673,     0,     0,     0,   368,     0,     0,   148,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   145,   146,   147,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
   148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   674,     0,     0,
     0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   369,   370,   371,    76,   158,   159,   160,
   161,    80,     0,     0,     0,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -489,   726,
     0,     0,     0,   368,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,   369,   370,   371,    76,
   158,   159,   160,   161,    80,   145,   146,   147,   126,   127,
   128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
   203,  -489,   779,     0,     0,     0,   368,     0,     0,   148,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   145,   146,
   147,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   156,     0,     0,     0,
   157,     0,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   369,   370,   371,    76,   158,
   159,   160,   161,    80,     0,     0,     0,   126,   127,   128,
     0,   129,   130,   131,   132,   133,   134,   135,   136,   203,
  -489,   780,     0,     0,     0,   368,     0,     0,     0,     0,
   139,   140,   141,   142,   143,   144,     0,     0,   369,   370,
   371,    76,   158,   159,   160,   161,    80,   145,   146,   147,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   203,  -489,   782,     0,     0,     0,   368,     0,
     0,   148,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   145,   146,   147,     0,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   781,     0,
     0,     0,   157,     0,   148,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   369,   370,   371,
    76,   158,   159,   160,   161,    80,     0,     0,     0,   126,
   127,   128,     0,   129,   130,   131,   132,   133,   134,   135,
   136,   203,  -489,   899,     0,     0,     0,   368,     0,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
   369,   370,   371,    76,   158,   159,   160,   161,    80,   145,
   146,   147,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   203,  -489,     0,     0,     0,     0,
   368,     0,     0,   148,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   145,   146,   147,     0,   150,   151,   152,   153,
   154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
   156,     0,     0,     0,   157,     0,   148,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   150,
   151,   152,   153,   154,   155,   293,     0,     0,     0,     0,
     0,     0,     0,   156,     0,     0,     0,   157,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     3,     0,     0,     0,     0,     0,     0,   369,
   370,   371,    76,   158,   159,   160,   161,    80,     0,     0,
     0,     0,     0,     0,  -354,  -354,  -354,     0,     4,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   369,   370,   371,    76,   158,   159,   160,   161,
    80,     0,     0,     0,     0,    11,    12,    13,     0,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,     0,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,   293,     0,     0,     0,     0,   120,     0,
     0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     3,     0,     0,     0,     0,     0,   328,     0,     0,   709,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     4,     0,   145,   146,
   147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  -623,     0,     0,     0,     0,     0,     0,
     0,     0,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    11,    12,    13,     0,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,   157,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,     0,  -111,     0,     0,     0,   120,  -111,     0,     0,
    81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
     0,    76,   329,   330,   160,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    11,    12,    13,     0,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   288,
     0,     0,     0,     0,   120,     0,     0,     0,    81,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  -492,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
    13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
     0,   120,    11,    12,    13,    81,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
  -630,     0,     0,     0,     0,   120,     0,     0,     0,    81,
     0,     0,     0,   328,   943,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,  -632,  -632,  -632,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     0,     0,     0,  -632,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  -632,  -632,  -632,     0,
  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,
   157,  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,
  -632,  -632,  -632,  -632,  -632,  -632,     0,  -632,  -632,  -632,
  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,
  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,
  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,  -632,
  -632,  -632,  -632,  -632,  -245,     0,     0,     0,     0,     0,
     0,     0,     0,  -632,     2,     0,     0,     0,    76,   329,
   330,   160,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   328,  -227,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
    13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,   157,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,     0,     0,     0,    76,
    77,    78,     0,    79,    80,    81,     0,     0,   328,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,    76,   329,   330,   160,
   145,   146,   147,   357,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   654,   148,   145,   146,   147,   139,   140,
   141,   142,   143,   144,   656,     0,     0,     0,     0,   139,
   140,   141,   142,   143,   144,   145,   146,   147,     0,   148,
     0,     0,     0,     0,   729,     0,   145,   146,   147,   730,
   731,   732,   733,   734,   735,   157,     0,     0,     0,   148,
     0,     0,     0,     0,     0,     0,   145,   736,   737,     0,
   148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   738,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    76,   329,   330,   160,     0,     0,     0,
     0,   157,     0,     0,     0,     0,     0,  -171,  -171,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    76,   329,
   330,   160,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    76,   329,
   330,   160,     0,     0,     0,     0,     0,     0,     0,    76,
   329,   330,   160,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
   739,   740,   741,    11,    12,    13,     0,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,     3,     0,     0,     0,     0,   120,     0,     0,     0,
    81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  -354,  -354,  -354,     0,     4,     0,     0,
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
    74,    75,     3,     0,     0,     0,     0,   120,     0,     0,
     0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    11,    12,    13,     0,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,     0,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,  -354,  -354,  -354,     0,     0,   120,     0,
     0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    11,    12,    13,     0,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,     0,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,     8,     9,    10,     0,     0,   120,     0,     0,
     0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    11,    12,    13,     0,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
     0,     0,     0,     0,   120,    11,    12,    13,    81,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,     0,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,     0,     0,     0,     0,     0,   120,     0,
     0,     0,    81
};

static const short yycheck[] = {     0,
   106,   366,     3,     0,   469,    89,   501,    19,   626,     2,
    11,    12,     0,   479,   368,   322,   558,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,   409,   410,   452,   418,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,   630,   192,   407,   408,   415,   416,
   303,   664,   204,   809,    75,   664,   126,   209,   664,   211,
   797,    82,   417,   800,   320,    82,   451,   419,    24,     8,
     8,   223,     0,   789,    82,     3,   777,     5,    34,   100,
    21,   455,   560,   803,    34,   106,    27,   411,   412,   413,
   414,   684,   907,  1095,  1096,   116,   117,   118,    18,    18,
   113,   122,   664,  1031,  1032,    24,   719,     0,    24,   122,
   719,   215,    24,   719,   499,    34,   904,   138,    34,   907,
    41,    86,    87,     5,   145,   711,   612,    86,    87,   913,
    28,    25,    26,    21,    28,    56,  1138,    25,    21,    28,
     5,   897,    25,    25,     6,     7,    44,   179,   180,   181,
    44,   183,   184,   480,    82,    44,    39,   719,   108,   109,
    25,  1089,     8,   900,  1092,    53,    54,     0,    96,    97,
     3,    99,    85,    41,     7,     8,     9,    10,   569,   994,
     8,   996,    18,   204,   611,    21,   664,   702,    56,    82,
   906,   892,   908,   584,   122,   788,    21,   917,   791,   138,
   138,    18,    24,   987,    26,    21,   994,  1135,   996,    25,
     9,    10,    34,   587,   179,   180,    32,    33,    21,    24,
   179,   180,    25,   179,   180,   610,    29,   374,    24,   139,
   140,   141,   142,   143,   144,   382,    26,   384,    28,     9,
    10,   719,    26,   182,   182,    21,    24,   632,     5,    82,
    34,    27,   190,   506,    44,   194,   194,   196,   196,    24,
   179,   180,   999,   179,   180,   286,    24,    24,    25,    26,
   291,    18,   664,   106,    21,   292,    23,    34,   664,    21,
    18,   302,   303,    25,   305,   306,   225,   225,    18,   122,
    32,    33,   138,   931,   302,   447,   366,   664,   319,   814,
   133,    32,    33,   664,   325,   138,   453,   328,    24,   664,
   138,   319,   664,   875,   179,   180,   181,    18,   183,   184,
    15,    21,    23,   156,   428,    25,   347,   719,    26,  1115,
    28,     5,    16,   719,   347,  1121,   182,  1123,    34,   592,
   664,   927,    49,    50,   190,     5,    44,   368,   194,   182,
   196,   607,   719,    18,   182,     5,    21,   190,   719,   192,
    25,   194,   190,   196,   719,   978,   194,   719,   196,   978,
    21,   204,   978,   520,    25,    25,   209,    18,   211,   225,
    21,   451,    21,   636,    86,    87,    25,    53,    54,    85,
   223,   224,   225,     0,    21,   719,     3,   225,    25,   877,
     7,   654,    21,   656,    18,   204,    25,    21,    29,   794,
   209,    25,   211,    21,   116,   117,   978,    25,   346,    67,
    68,    69,   569,    21,   223,   224,   443,    25,   130,   499,
    49,    50,    18,   454,   204,    21,   457,   584,   585,   209,
    24,   211,    26,   464,    22,   466,   454,   468,   469,   457,
   471,    49,    50,   223,   224,   476,    34,    16,   479,   179,
   180,   181,    22,   183,   184,   486,   479,    21,    24,   302,
    26,    25,   305,   306,   307,    82,   729,   498,   864,   865,
   501,   873,   503,   179,   180,   506,   319,   183,   184,   428,
   428,    24,   325,    26,   404,   405,   406,    37,    38,   106,
   978,   862,   863,   870,   871,   179,   180,   181,    22,   183,
   184,    51,    52,   660,   661,   122,    24,   872,    26,   179,
   180,   181,   874,   183,   184,   672,   133,    42,    43,   179,
   180,   181,   460,   183,   184,    21,   369,   370,   371,    25,
   610,   374,   866,   867,   868,   869,    21,    25,    26,   382,
    25,   384,   569,    21,     5,  1070,   703,    25,    20,    21,
    21,    21,   632,   937,    25,    25,  1051,   584,   589,    18,
    16,   592,    21,    24,    25,    26,   702,    25,    25,    26,
    28,    28,   428,    34,   605,   606,   978,    16,    26,    49,
    50,   612,   978,    92,   504,   428,    34,    44,    22,   612,
   428,   179,   180,   181,    21,   183,   184,    39,    25,    21,
   631,   978,    21,    25,   447,   636,    25,   978,    21,    40,
   453,   454,    25,   978,   457,    55,   978,    34,   649,   650,
   568,    21,    22,   654,   467,   656,   469,    18,   471,    21,
    21,    24,    18,    25,    27,    21,   479,    18,   447,   482,
    21,    34,    92,   486,   978,    37,    38,   678,    24,    19,
    26,    18,    21,   919,    21,   686,    25,   688,    34,    51,
    52,   692,   693,    34,    35,    36,   697,   447,    37,    38,
   701,   702,    18,    32,    33,    21,   707,   520,   814,   702,
    22,   619,    51,    52,   707,   302,   529,   530,   305,   306,
   307,   179,   180,   181,    22,   183,   184,    21,   729,    21,
    19,    25,   319,    25,     8,     9,    10,    21,   325,  1104,
    22,    25,   568,    21,   794,    24,   982,    25,   179,   180,
   181,    20,   183,   184,    92,   568,   569,    49,    50,    92,
   568,   179,   180,   181,  1000,   183,   184,    27,   581,  1005,
    21,   584,   585,    21,    25,    21,    23,    25,   828,    25,
  1145,  1014,    24,   784,    26,  1021,    28,    24,    34,    35,
    36,  1027,   179,   180,   181,    24,   183,   184,    18,   612,
  1036,    24,    44,    26,    21,    47,    48,    97,    25,    99,
    21,    34,   813,   814,    25,   816,   179,   180,    21,   182,
    18,   814,    25,    34,    35,    36,    18,    21,    18,  1065,
  1066,    25,  1068,   179,   180,   181,    22,   183,   184,   185,
   730,   731,   732,   733,   734,   735,    21,   660,   661,    21,
    25,   664,    21,    25,    49,    50,    25,    25,   671,   672,
   179,   674,    25,  1099,   138,    24,    24,   454,    27,    18,
   457,    18,    37,    38,   687,    34,   689,    18,   786,    21,
   467,   789,   469,    25,   471,   698,    51,    52,   701,   702,
   703,    25,   479,    21,    21,   482,   980,    25,    25,   486,
     9,    21,   903,    21,  1140,    25,   719,    25,   182,   910,
   119,    21,   121,    21,    21,    25,   190,    25,    25,  1003,
   194,    21,   196,   132,   133,    25,   135,    18,   137,   138,
   204,   205,    21,    18,    21,   209,    25,   211,    25,    53,
    54,   150,   529,   530,    34,    35,    36,    20,    21,   223,
   224,   225,    19,    72,    73,    74,   179,   180,   181,    11,
   183,   184,   126,    24,  1070,    20,    21,    11,   781,   859,
   860,   861,    21,    22,    24,   139,   140,   141,   142,   143,
   144,    21,   146,   147,    72,    73,    74,   988,   179,   180,
   991,    88,    23,    19,    19,    19,   904,    19,   906,   907,
   908,   814,    88,   991,    27,    24,  1007,    25,  1009,    21,
    21,   824,    22,  1014,  1007,    18,  1017,  1018,    24,  1007,
   179,   180,    21,   182,  1021,   612,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    22,    25,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    11,   182,
  1051,   941,  1053,  1054,  1104,    24,   182,    24,    25,   182,
    24,    27,    29,    30,    31,    32,    33,    34,  1065,  1070,
  1120,    98,    24,   100,    25,   102,    23,   104,    20,    46,
    47,    48,   109,    19,    19,    24,   994,    26,   996,    28,
    20,    23,   119,    21,   121,  1145,     5,    88,    25,    24,
   687,  1102,   689,    70,  1105,    44,    27,  1108,    47,    48,
    18,   698,    22,   387,   701,   702,    24,  1105,    88,    24,
    88,    29,    30,    31,    32,    33,    34,    25,    20,    20,
    18,    27,    25,   946,   947,    18,   163,    27,    46,    47,
    48,    72,    73,    74,   111,    23,    25,    78,    79,    80,
    81,    82,    83,    84,   428,    21,    25,    25,    25,    24,
    40,  1162,    70,    39,    25,   978,    29,    25,  1169,   982,
    55,    88,    24,   447,    25,    25,    25,    18,   991,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    25,
    21,    18,  1005,    18,  1007,    21,    18,  1010,    21,    72,
    73,    74,   366,   111,     8,    78,    79,    80,    81,    82,
    83,    84,   179,   180,   181,   182,    88,  1030,  1031,  1032,
    22,    20,   184,    20,    88,    25,  1039,   814,     8,     9,
    10,    88,    25,    88,    88,    88,    18,   824,  1051,    20,
   404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
   414,   415,   416,   417,   418,   419,    20,  1070,    73,    88,
    27,    27,     0,     0,   291,    82,   325,    88,   295,   778,
  1004,   179,   180,   181,   182,  1081,  1089,  1090,  1091,  1092,
  1029,   892,  1095,  1096,  1135,   924,   313,   451,  1101,   316,
  1005,  1101,  1105,   843,   568,   471,   592,   324,  1105,   689,
   327,   687,   814,   113,   347,     8,     9,    10,   701,   360,
    78,    79,    80,    81,    82,    83,    84,    10,   224,   520,
  1075,   719,  1135,  1136,  1137,  1138,   428,   978,    -1,    -1,
    -1,    -1,   136,    -1,   138,   499,    -1,   388,    -1,    -1,
   504,    -1,   393,   394,   395,   396,   397,   398,   399,   400,
   401,   402,   403,    -1,    -1,    -1,    -1,    -1,   138,   946,
   947,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,   182,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,
   194,    -1,   196,    -1,   558,    -1,   560,    -1,   562,   563,
   204,    -1,   182,    -1,   991,    -1,     8,     9,    10,    -1,
   190,    -1,    -1,    -1,   194,    -1,   196,    -1,    -1,    -1,
  1007,   225,    -1,  1010,   204,   452,    -1,    -1,    -1,   209,
    -1,   211,   459,    -1,    -1,   138,    -1,   464,    -1,   466,
    -1,    -1,    -1,   223,   224,   225,   610,   474,    -1,    -1,
    -1,   478,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
     9,    10,    -1,    -1,  1051,    -1,    -1,    -1,   632,    -1,
     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,   182,
    -1,    -1,    -1,  1070,    -1,    -1,    -1,   190,    -1,    -1,
    -1,   194,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
   664,   204,    -1,  1090,  1091,    -1,   209,    -1,   211,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1105,    -1,
   223,   224,   225,    -1,   328,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   336,   337,   338,   339,   138,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1136,
  1137,    -1,    -1,   357,    -1,   719,    -1,    -1,    -1,   586,
    -1,    -1,    -1,    -1,   368,    -1,   730,   731,   732,   733,
   734,   735,   736,   737,    -1,    -1,    -1,    -1,    -1,    -1,
   182,    -1,    -1,    -1,   611,   389,    -1,    -1,   190,   138,
    -1,    -1,   194,    -1,   196,   646,    -1,    -1,    -1,    18,
   138,    -1,   204,   630,    -1,    24,    -1,   209,   635,   211,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
    -1,   223,   224,   225,   428,    -1,    -1,    46,    47,    48,
   794,   435,    -1,   182,    -1,    -1,    -1,    -1,    -1,   666,
   691,   190,    -1,    -1,   182,   194,    -1,   196,   428,    -1,
    -1,    70,   190,    -1,    -1,   204,   194,    -1,   196,    -1,
   209,    -1,   211,    -1,   828,    -1,   204,   447,    -1,    -1,
    -1,   209,    -1,   211,   223,   224,   225,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   223,   224,   225,    -1,    -1,
    -1,    -1,   111,    -1,    -1,   859,   860,   861,   862,   863,
   864,   865,   866,   867,   868,   869,   870,   871,   872,   873,
   874,   875,    -1,   877,    -1,   742,    -1,     8,     9,    10,
    -1,    -1,    -1,    19,    20,   428,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,   447,    -1,   797,    -1,    -1,   800,
    46,    47,    48,    -1,    -1,   559,    -1,    -1,    -1,    -1,
   179,   180,   181,   182,   568,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    70,   802,    -1,   941,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   568,    -1,
    -1,   842,   843,    -1,    -1,    -1,    -1,   848,   849,   850,
   851,   852,   853,   854,   855,   856,   857,   858,    -1,    -1,
    -1,    -1,    -1,    -1,   978,   111,    -1,    -1,    -1,    -1,
    -1,    -1,   626,    -1,    -1,    -1,   428,    19,    -1,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,   447,    -1,   138,    -1,   900,
   654,    -1,   656,    -1,    46,    47,    48,    -1,   662,    -1,
    -1,   665,    -1,    -1,    -1,   568,    -1,    -1,   895,   896,
    -1,    -1,    -1,    -1,    -1,    -1,   903,    -1,    70,   428,
    -1,    -1,    -1,   179,   180,   181,   182,    -1,    -1,    -1,
   428,   182,    -1,    -1,    -1,    -1,    -1,    -1,   447,   190,
   927,    -1,    -1,   194,    -1,   196,    -1,    -1,    -1,   447,
    -1,    -1,    -1,   204,   718,    -1,    -1,    -1,   209,   111,
   211,    -1,    -1,    -1,    -1,   729,    -1,    -1,    -1,    -1,
    -1,    19,   223,   224,   225,    -1,    24,    -1,    -1,    -1,
  1104,    29,    30,    31,    32,    33,    34,    -1,   999,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,  1120,    -1,    46,    47,
    48,    -1,   989,    -1,    -1,    -1,   568,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1145,    70,    -1,    -1,    -1,    -1,   179,   180,   181,
   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   568,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,  1055,    -1,
   568,    -1,    -1,    -1,     0,     1,    -1,    -1,    -1,    -1,
   844,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   179,   180,   181,   182,    -1,    -1,    -1,    -1,    -1,
    -1,    67,    68,    69,    -1,    71,    -1,    -1,    -1,    75,
    76,    77,    -1,    -1,    -1,    -1,  1143,    -1,    -1,    -1,
    -1,    -1,    -1,    89,    90,    91,    -1,   931,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,
    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,   447,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   976,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    -1,     0,     1,   179,   180,   181,    -1,   183,   184,   185,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   568,    67,    68,
    69,    -1,    71,    -1,    -1,    -1,    75,    76,    77,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
   109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
   179,   180,   181,     1,   183,   184,   185,    -1,     6,     7,
     8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    42,    43,    -1,    45,    46,    47,
    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
    68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
   108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
    -1,   179,   180,   181,   182,   183,   184,   185,     1,    -1,
    -1,    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
    43,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,    -1,
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
   173,   174,   175,    -1,    -1,    -1,   179,   180,   181,   182,
   183,   184,   185,     1,    -1,    -1,    -1,    -1,     6,     7,
     8,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    47,
    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
   108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
    -1,   179,   180,   181,   182,   183,   184,   185,     1,    -1,
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
    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,
   183,   184,    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,
     7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,   179,
   180,   181,   182,   183,   184,    42,    43,     1,    -1,    46,
    47,    48,     6,     7,     8,    -1,    -1,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
    -1,    -1,    46,    47,    48,    92,    93,    94,    95,    96,
    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   107,    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   179,   180,   181,   182,   183,   184,    -1,    -1,
     1,    -1,    -1,    -1,    -1,     6,     7,     8,    -1,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,   179,   180,   181,   182,   183,
   184,    42,    43,     1,    -1,    46,    47,    48,     6,     7,
     8,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    70,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    47,
    48,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
   111,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    24,
    -1,    -1,    27,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,
    98,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,   107,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,
   181,   182,   183,   184,    -1,    -1,     1,    -1,    -1,    -1,
    -1,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    -1,   111,    -1,    -1,    24,
    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
    -1,   179,   180,   181,   182,   183,   184,    42,    43,    -1,
    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   179,   180,   181,   182,    93,    94,
    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,     6,     7,     8,   111,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
    43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,
    -1,    -1,    -1,    -1,   179,   180,   181,   182,   183,   184,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
   113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
   123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
   133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,     6,     7,     8,    -1,    10,    11,    12,
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
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,     6,     7,     8,    -1,    10,    11,    12,
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
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,     6,     7,     8,    -1,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   176,   177,   178,   179,   180,   181,   182,
   183,   184,    -1,    -1,    -1,     6,     7,     8,    -1,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,   176,   177,   178,   179,
   180,   181,   182,   183,   184,    46,    47,    48,     6,     7,
     8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    70,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
    48,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
   111,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   176,   177,   178,   179,   180,
   181,   182,   183,   184,    -1,    -1,    -1,     6,     7,     8,
    -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
    29,    30,    31,    32,    33,    34,    -1,    -1,   176,   177,
   178,   179,   180,   181,   182,   183,   184,    46,    47,    48,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    70,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    46,    47,    48,    -1,    93,    94,    95,    96,    97,    98,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
    -1,    -1,   111,    -1,    70,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,   178,
   179,   180,   181,   182,   183,   184,    -1,    -1,    -1,     6,
     7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
   176,   177,   178,   179,   180,   181,   182,   183,   184,    46,
    47,    48,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    46,    47,    48,    -1,    93,    94,    95,    96,
    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   107,    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
    94,    95,    96,    97,    98,    18,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,   176,
   177,   178,   179,   180,   181,   182,   183,   184,    -1,    -1,
    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    71,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   176,   177,   178,   179,   180,   181,   182,   183,
   184,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,
   113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
   123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
   133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,    18,    -1,    -1,    -1,    -1,   181,    -1,
    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    45,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    46,    47,
    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,   111,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    -1,    19,    -1,    -1,    -1,   181,    24,    -1,    -1,
   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
    -1,   179,   180,   181,   182,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,    19,
    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
    -1,   181,   108,   109,   110,   185,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    22,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
   111,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    24,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   185,    34,    -1,    -1,    -1,   179,   180,
   181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    24,    25,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,   111,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,   179,
   180,   181,    -1,   183,   184,   185,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,
    46,    47,    48,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    24,    70,    46,    47,    48,    29,    30,
    31,    32,    33,    34,    24,    -1,    -1,    -1,    -1,    29,
    30,    31,    32,    33,    34,    46,    47,    48,    -1,    70,
    -1,    -1,    -1,    -1,    24,    -1,    46,    47,    48,    29,
    30,    31,    32,    33,    34,   111,    -1,    -1,    -1,    70,
    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   179,   180,   181,   182,    -1,    -1,    -1,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,
   181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,
   181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
   180,   181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
   180,   181,   182,   108,   109,   110,    -1,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    45,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,
   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    67,    68,    69,    -1,    71,    -1,    -1,
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
   174,   175,    45,    -1,    -1,    -1,    -1,   181,    -1,    -1,
    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,
   113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
   123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
   133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,    67,    68,    69,    -1,    -1,   181,    -1,
    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,    89,    90,    91,    -1,    -1,   181,    -1,    -1,
    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
    -1,    -1,    -1,    -1,   181,   108,   109,   110,   185,   112,
   113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
   123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
   133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,
    -1,    -1,   185
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
#line 249 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 6:
#line 250 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 7:
#line 251 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 8:
#line 252 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 9:
#line 253 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 10:
#line 254 "cgrammar.y"
{ uentry_checkDecl (); exprNode_free (yyvsp[0].expr); ;
    break;}
case 11:
#line 255 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 12:
#line 259 "cgrammar.y"
{ checkConstant (yyvsp[-6].qtyp, yyvsp[-4].ntyp); ;
    break;}
case 13:
#line 261 "cgrammar.y"
{ checkValueConstant (yyvsp[-9].qtyp, yyvsp[-7].ntyp, yyvsp[-3].expr) ; ;
    break;}
case 14:
#line 264 "cgrammar.y"
{ context_enterFunctionDecl (); ;
    break;}
case 15:
#line 265 "cgrammar.y"
{ declareStaticFunction (yyvsp[-2].ntyp); context_quietExitFunction (); 
     context_exitFunctionDecl (); ;
    break;}
case 16:
#line 270 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 17:
#line 276 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 19:
#line 281 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 20:
#line 284 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 21:
#line 286 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 22:
#line 288 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 23:
#line 290 "cgrammar.y"
{ 
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ctype_makeFixedArray (idDecl_getCtype (yyvsp[-5].ntyp), exprNode_getLongValue (yyvsp[-2].expr)));
   ;
    break;}
case 24:
#line 294 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 25:
#line 297 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 26:
#line 305 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 27:
#line 308 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 28:
#line 314 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 29:
#line 316 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 30:
#line 318 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 31:
#line 320 "cgrammar.y"
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
#line 336 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 33:
#line 339 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 34:
#line 347 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 35:
#line 350 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 36:
#line 357 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); ;
    break;}
case 37:
#line 358 "cgrammar.y"
{ clearCurrentParams (); ;
    break;}
case 38:
#line 359 "cgrammar.y"
{ declareCIter (yyvsp[-8].cname, yyvsp[-6].entrylist); ;
    break;}
case 39:
#line 362 "cgrammar.y"
{ exprNode_checkMacroBody (yyvsp[-1].expr); ;
    break;}
case 40:
#line 363 "cgrammar.y"
{ exprNode_checkIterBody (yyvsp[-1].expr); ;
    break;}
case 41:
#line 364 "cgrammar.y"
{ exprNode_checkIterEnd (yyvsp[-1].expr); ;
    break;}
case 42:
#line 365 "cgrammar.y"
{ exprChecks_checkEmptyMacroBody (); ;
    break;}
case 43:
#line 368 "cgrammar.y"
{ declareFunction (yyvsp[0].ntyp); ;
    break;}
case 44:
#line 371 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 45:
#line 372 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 46:
#line 375 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 47:
#line 376 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 54:
#line 391 "cgrammar.y"
{ ; ;
    break;}
case 55:
#line 392 "cgrammar.y"
{ ; ;
    break;}
case 56:
#line 395 "cgrammar.y"
{ globListAdd (yyvsp[0].sr, yyvsp[-1].tquallist); ;
    break;}
case 57:
#line 398 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); ;
    break;}
case 58:
#line 399 "cgrammar.y"
{ yyval.sr = globListUnrecognized (yyvsp[0].cname); ;
    break;}
case 59:
#line 402 "cgrammar.y"
{ yyval.typequal = qual_createUndef (); ;
    break;}
case 60:
#line 403 "cgrammar.y"
{ yyval.typequal = qual_createKilled (); ;
    break;}
case 61:
#line 404 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 62:
#line 405 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 63:
#line 406 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 64:
#line 409 "cgrammar.y"
{ yyval.tquallist = qualList_undefined; ;
    break;}
case 65:
#line 410 "cgrammar.y"
{ yyval.tquallist = qualList_add (yyvsp[0].tquallist, yyvsp[-1].typequal); ;
    break;}
case 66:
#line 413 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 67:
#line 415 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 68:
#line 416 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 69:
#line 418 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 70:
#line 420 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 73:
#line 427 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 74:
#line 429 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 75:
#line 430 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 76:
#line 432 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 77:
#line 434 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 82:
#line 446 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 83:
#line 451 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 84:
#line 459 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 85:
#line 464 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 95:
#line 488 "cgrammar.y"
{ yyval.sck = SP_ISONLY; ;
    break;}
case 96:
#line 489 "cgrammar.y"
{ yyval.sck = SP_ISOBSERVER; ;
    break;}
case 97:
#line 490 "cgrammar.y"
{ yyval.sck = SP_ISEXPOSED; ;
    break;}
case 98:
#line 491 "cgrammar.y"
{ yyval.sck = SP_ISDEPENDENT; ;
    break;}
case 99:
#line 492 "cgrammar.y"
{ yyval.sck = SP_ISOWNED; ;
    break;}
case 100:
#line 493 "cgrammar.y"
{ yyval.sck = SP_ISSHARED; ;
    break;}
case 101:
#line 494 "cgrammar.y"
{ yyval.sck = SP_ISNULL; ;
    break;}
case 102:
#line 495 "cgrammar.y"
{ yyval.sck = SP_ISNOTNULL; ;
    break;}
case 103:
#line 499 "cgrammar.y"
{
     context_setProtectVars (); 
     enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 104:
#line 505 "cgrammar.y"
{ 
     setFunctionSpecialClause (yyvsp[-6].tok, yyvsp[-3].srset, yyvsp[-1].tok); 
     exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 105:
#line 512 "cgrammar.y"
{
      context_setProtectVars (); 
      enterParamsTemp (); 
      sRef_setGlobalScopeSafe (); 
    ;
    break;}
case 106:
#line 518 "cgrammar.y"
{ 
      setFunctionStateSpecialClause (yyvsp[-7].tok, yyvsp[-5].sck, yyvsp[-3].srset, yyvsp[-1].tok); 
      exitParamsTemp ();
      sRef_clearGlobalScopeSafe (); 
      context_releaseVars ();
    ;
    break;}
case 107:
#line 527 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 108:
#line 533 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 109:
#line 536 "cgrammar.y"
{ checkDoneParams (); context_enterInnerContext (); ;
    break;}
case 110:
#line 538 "cgrammar.y"
{  
     exprNode_checkFunctionBody (yyvsp[0].expr); yyval.expr = yyvsp[0].expr; 
     context_exitInner (yyvsp[0].expr); 
   ;
    break;}
case 111:
#line 543 "cgrammar.y"
{ doneParams (); context_enterInnerContext (); ;
    break;}
case 112:
#line 545 "cgrammar.y"
{
     context_exitInner (yyvsp[0].expr);
     exprNode_checkFunctionBody (yyvsp[0].expr); 
     yyval.expr = yyvsp[0].expr; /* old style */ 
   ;
    break;}
case 113:
#line 553 "cgrammar.y"
{ 
     context_setFunctionDefined (exprNode_loc (yyvsp[0].expr)); 
     exprNode_checkFunction (context_getHeader (), yyvsp[0].expr); 
     context_exitFunction ();
   ;
    break;}
case 114:
#line 560 "cgrammar.y"
{ yyval.srset = yyvsp[-2].srset; ;
    break;}
case 115:
#line 561 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 116:
#line 564 "cgrammar.y"
{ yyval.srset = yyvsp[-1].srset; ;
    break;}
case 117:
#line 565 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 118:
#line 568 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); checkModifiesId (yyvsp[0].entry); ;
    break;}
case 119:
#line 569 "cgrammar.y"
{ yyval.sr = fixModifiesId (yyvsp[0].cname); ;
    break;}
case 120:
#line 570 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-2].sr, sRef_undefined); ;
    break;}
case 121:
#line 571 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-3].sr, yyvsp[-1].sr); ;
    break;}
case 122:
#line 572 "cgrammar.y"
{ yyval.sr = modListPointer (yyvsp[0].sr); ;
    break;}
case 123:
#line 573 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 124:
#line 574 "cgrammar.y"
{ yyval.sr = modListFieldAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 125:
#line 575 "cgrammar.y"
{ yyval.sr = modListArrowAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 126:
#line 579 "cgrammar.y"
{ yyval.sr = yyvsp[0].sr; ;
    break;}
case 127:
#line 580 "cgrammar.y"
{ yyval.sr = sRef_makeUnknown (); /* sRef_makeConstant ($1); ? */ ;
    break;}
case 128:
#line 584 "cgrammar.y"
{ yyval.srset = sRefSet_single (yyvsp[0].sr); ;
    break;}
case 129:
#line 585 "cgrammar.y"
{ yyval.srset = sRefSet_insert (yyvsp[-2].srset, yyvsp[0].sr); ;
    break;}
case 130:
#line 589 "cgrammar.y"
{ yyval.sr = checkSpecClausesId (yyvsp[0].entry); ;
    break;}
case 131:
#line 591 "cgrammar.y"
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 132:
#line 592 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 133:
#line 593 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-3].sr); ;
    break;}
case 134:
#line 594 "cgrammar.y"
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 135:
#line 595 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 136:
#line 596 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 137:
#line 598 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 138:
#line 603 "cgrammar.y"
{ if (sRef_isValid (yyvsp[0].sr)) { yyval.srset = sRefSet_single (yyvsp[0].sr); } 
      else { yyval.srset = sRefSet_undefined; } 
    ;
    break;}
case 139:
#line 607 "cgrammar.y"
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
case 140:
#line 618 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (yyvsp[0].entry); ;
    break;}
case 141:
#line 619 "cgrammar.y"
{ yyval.expr = exprNode_fromUIO (yyvsp[0].cname); ;
    break;}
case 142:
#line 620 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 143:
#line 621 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 144:
#line 622 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (coerceId (yyvsp[0].cname)); ;
    break;}
case 145:
#line 623 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 147:
#line 627 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 148:
#line 628 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 149:
#line 629 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 150:
#line 630 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 151:
#line 631 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 152:
#line 632 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 153:
#line 633 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 154:
#line 634 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 155:
#line 637 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 156:
#line 638 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 158:
#line 642 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 159:
#line 643 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 160:
#line 644 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 161:
#line 645 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 162:
#line 646 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 163:
#line 647 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 164:
#line 648 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 165:
#line 649 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 166:
#line 650 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 167:
#line 651 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 168:
#line 654 "cgrammar.y"
{ yyval.cstringlist = cstringList_add (yyvsp[-2].cstringlist, yyvsp[0].cname); ;
    break;}
case 169:
#line 655 "cgrammar.y"
{ yyval.cstringlist = cstringList_single (yyvsp[0].cname); ;
    break;}
case 170:
#line 659 "cgrammar.y"
{ yyval.expr = exprNode_offsetof (yyvsp[-5].qtyp, yyvsp[-2].cstringlist); ;
    break;}
case 171:
#line 662 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 172:
#line 663 "cgrammar.y"
{ context_sizeofReleaseVars (); yyval.expr = yyvsp[0].expr; ;
    break;}
case 173:
#line 666 "cgrammar.y"
{ yyval.expr = exprNode_sizeofType (yyvsp[-1].qtyp); ;
    break;}
case 174:
#line 667 "cgrammar.y"
{ yyval.expr = exprNode_sizeofExpr (yyvsp[0].expr); ;
    break;}
case 175:
#line 668 "cgrammar.y"
{ yyval.expr = exprNode_alignofType (yyvsp[-1].qtyp); ;
    break;}
case 176:
#line 669 "cgrammar.y"
{ yyval.expr = exprNode_alignofExpr (yyvsp[0].expr); ;
    break;}
case 178:
#line 674 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 180:
#line 678 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 181:
#line 679 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 182:
#line 680 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 184:
#line 684 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 185:
#line 685 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 187:
#line 689 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 188:
#line 690 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 190:
#line 694 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 191:
#line 695 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 192:
#line 696 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 193:
#line 697 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 195:
#line 701 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 196:
#line 702 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 198:
#line 706 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 200:
#line 710 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 202:
#line 715 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 204:
#line 720 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); 
     context_enterAndClause (yyvsp[-1].expr); 
   ;
    break;}
case 205:
#line 724 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitAndClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 207:
#line 732 "cgrammar.y"
{ 
     exprNode_produceGuards (yyvsp[-1].expr);
     context_enterOrClause (yyvsp[-1].expr); 
   ;
    break;}
case 208:
#line 737 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitOrClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 210:
#line 744 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 211:
#line 745 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 212:
#line 746 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); context_exitClause (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 214:
#line 750 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 215:
#line 751 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 216:
#line 752 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 217:
#line 753 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 218:
#line 754 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 219:
#line 755 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 220:
#line 756 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 221:
#line 757 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 222:
#line 758 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 223:
#line 759 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 224:
#line 760 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 226:
#line 764 "cgrammar.y"
{ yyval.expr = exprNode_comma (yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 227:
#line 767 "cgrammar.y"
{ yyval.expr = exprNode_undefined; ;
    break;}
case 230:
#line 776 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 231:
#line 777 "cgrammar.y"
{ doVaDcl (); yyval.expr = exprNode_makeError (); ;
    break;}
case 232:
#line 778 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 233:
#line 781 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 234:
#line 795 "cgrammar.y"
{
               setProcessingVars (yyvsp[-3].qtyp); 
     processNamedDecl (yyvsp[-1].ntyp); ;
    break;}
case 235:
#line 798 "cgrammar.y"
{ unsetProcessingVars (); yyval.expr = yyvsp[-2].expr; ;
    break;}
case 236:
#line 800 "cgrammar.y"
{ setProcessingVars (yyvsp[-4].qtyp); processNamedDecl (yyvsp[-2].ntyp); 
        ;
    break;}
case 237:
#line 803 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-2].expr, exprNode_makeInitialization (yyvsp[-8].ntyp, yyvsp[-3].expr)); 
     unsetProcessingVars ();
   ;
    break;}
case 238:
#line 807 "cgrammar.y"
{ processNamedDecl (yyvsp[-1].ntyp); yyval.expr = exprNode_makeError (); ;
    break;}
case 239:
#line 808 "cgrammar.y"
{ processNamedDecl (yyvsp[-2].ntyp); ;
    break;}
case 240:
#line 809 "cgrammar.y"
{ yyval.expr = exprNode_makeInitialization (yyvsp[-5].ntyp, yyvsp[0].expr); ;
    break;}
case 241:
#line 813 "cgrammar.y"
{ setProcessingTypedef (yyvsp[0].qtyp); ;
    break;}
case 242:
#line 814 "cgrammar.y"
{ unsetProcessingTypedef (); ;
    break;}
case 243:
#line 815 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 244:
#line 816 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 245:
#line 819 "cgrammar.y"
{ g_expectingTypeName = TRUE; ;
    break;}
case 246:
#line 822 "cgrammar.y"
{ g_expectingTypeName = TRUE; context_pushLoc (); ;
    break;}
case 247:
#line 825 "cgrammar.y"
{ ; ;
    break;}
case 248:
#line 828 "cgrammar.y"
{ ; ;
    break;}
case 249:
#line 829 "cgrammar.y"
{ ; ;
    break;}
case 250:
#line 832 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 251:
#line 833 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 252:
#line 836 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 253:
#line 837 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-2].tok, yyvsp[-1].alist); ;
    break;}
case 254:
#line 838 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-3].tok, yyvsp[-2].alist); ;
    break;}
case 255:
#line 843 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 256:
#line 845 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 257:
#line 853 "cgrammar.y"
{ setStorageClass (SCEXTERN); yyval.typequal = qual_createExtern (); ;
    break;}
case 258:
#line 854 "cgrammar.y"
{ yyval.typequal = qual_createInline (); ;
    break;}
case 259:
#line 855 "cgrammar.y"
{ setStorageClass (SCSTATIC); yyval.typequal = qual_createStatic (); ;
    break;}
case 260:
#line 856 "cgrammar.y"
{ yyval.typequal = qual_createAuto (); ;
    break;}
case 261:
#line 857 "cgrammar.y"
{ yyval.typequal = qual_createRegister (); ;
    break;}
case 262:
#line 860 "cgrammar.y"
{ yyval.typequal = qual_createConst (); ;
    break;}
case 263:
#line 861 "cgrammar.y"
{ yyval.typequal = qual_createVolatile (); ;
    break;}
case 264:
#line 862 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 265:
#line 863 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 266:
#line 864 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 267:
#line 865 "cgrammar.y"
{ yyval.typequal = qual_createSpecial (); ;
    break;}
case 268:
#line 866 "cgrammar.y"
{ yyval.typequal = qual_createOwned (); ;
    break;}
case 269:
#line 867 "cgrammar.y"
{ yyval.typequal = qual_createDependent (); ;
    break;}
case 270:
#line 868 "cgrammar.y"
{ yyval.typequal = qual_createYield (); ;
    break;}
case 271:
#line 869 "cgrammar.y"
{ yyval.typequal = qual_createTemp (); ;
    break;}
case 272:
#line 870 "cgrammar.y"
{ yyval.typequal = qual_createOnly (); ;
    break;}
case 273:
#line 871 "cgrammar.y"
{ yyval.typequal = qual_createKeep (); ;
    break;}
case 274:
#line 872 "cgrammar.y"
{ yyval.typequal = qual_createKept (); ;
    break;}
case 275:
#line 873 "cgrammar.y"
{ yyval.typequal = qual_createShared (); ;
    break;}
case 276:
#line 874 "cgrammar.y"
{ yyval.typequal = qual_createUnique (); ;
    break;}
case 277:
#line 875 "cgrammar.y"
{ yyval.typequal = qual_createExits (); ;
    break;}
case 278:
#line 876 "cgrammar.y"
{ yyval.typequal = qual_createMayExit (); ;
    break;}
case 279:
#line 877 "cgrammar.y"
{ yyval.typequal = qual_createTrueExit (); ;
    break;}
case 280:
#line 878 "cgrammar.y"
{ yyval.typequal = qual_createFalseExit (); ;
    break;}
case 281:
#line 879 "cgrammar.y"
{ yyval.typequal = qual_createNeverExit (); ;
    break;}
case 282:
#line 880 "cgrammar.y"
{ yyval.typequal = qual_createNull (); ;
    break;}
case 283:
#line 881 "cgrammar.y"
{ yyval.typequal = qual_createRelNull (); ;
    break;}
case 284:
#line 882 "cgrammar.y"
{ yyval.typequal = qual_createReturned (); ;
    break;}
case 285:
#line 883 "cgrammar.y"
{ yyval.typequal = qual_createExposed (); ;
    break;}
case 286:
#line 884 "cgrammar.y"
{ yyval.typequal = qual_createObserver (); ;
    break;}
case 287:
#line 885 "cgrammar.y"
{ yyval.typequal = qual_createChecked (); ;
    break;}
case 288:
#line 886 "cgrammar.y"
{ yyval.typequal = qual_createCheckMod (); ;
    break;}
case 289:
#line 887 "cgrammar.y"
{ yyval.typequal = qual_createUnchecked (); ;
    break;}
case 290:
#line 888 "cgrammar.y"
{ yyval.typequal = qual_createCheckedStrict (); ;
    break;}
case 291:
#line 889 "cgrammar.y"
{ yyval.typequal = qual_createTrueNull (); ;
    break;}
case 292:
#line 890 "cgrammar.y"
{ yyval.typequal = qual_createFalseNull (); ;
    break;}
case 293:
#line 891 "cgrammar.y"
{ yyval.typequal = qual_createUnused (); ;
    break;}
case 294:
#line 892 "cgrammar.y"
{ yyval.typequal = qual_createExternal (); ;
    break;}
case 295:
#line 893 "cgrammar.y"
{ yyval.typequal = qual_createSef (); ;
    break;}
case 296:
#line 894 "cgrammar.y"
{ yyval.typequal = qual_createAbstract (); ;
    break;}
case 297:
#line 895 "cgrammar.y"
{ yyval.typequal = qual_createConcrete (); ;
    break;}
case 298:
#line 896 "cgrammar.y"
{ yyval.typequal = qual_createMutable (); ;
    break;}
case 299:
#line 897 "cgrammar.y"
{ yyval.typequal = qual_createImmutable (); ;
    break;}
case 300:
#line 898 "cgrammar.y"
{ yyval.typequal = qual_createNotNull (); ;
    break;}
case 301:
#line 899 "cgrammar.y"
{ yyval.typequal = qual_createRefCounted (); ;
    break;}
case 302:
#line 900 "cgrammar.y"
{ yyval.typequal = qual_createRefs (); ;
    break;}
case 303:
#line 901 "cgrammar.y"
{ yyval.typequal = qual_createKillRef (); ;
    break;}
case 304:
#line 902 "cgrammar.y"
{ yyval.typequal = qual_createRelDef (); ;
    break;}
case 305:
#line 903 "cgrammar.y"
{ yyval.typequal = qual_createNewRef (); ;
    break;}
case 306:
#line 904 "cgrammar.y"
{ yyval.typequal = qual_createTempRef (); ;
    break;}
case 307:
#line 905 "cgrammar.y"
{ yyval.typequal = qual_createNullTerminated (); ;
    break;}
case 308:
#line 911 "cgrammar.y"
{ yyval.typequal = qual_createShort (); ;
    break;}
case 309:
#line 912 "cgrammar.y"
{ yyval.typequal = qual_createLong (); ;
    break;}
case 310:
#line 913 "cgrammar.y"
{ yyval.typequal = qual_createSigned (); ;
    break;}
case 311:
#line 914 "cgrammar.y"
{ yyval.typequal = qual_createUnsigned (); ;
    break;}
case 318:
#line 923 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 319:
#line 924 "cgrammar.y"
{ yyval.ctyp = ctype_anyintegral; ;
    break;}
case 320:
#line 925 "cgrammar.y"
{ yyval.ctyp = ctype_unsignedintegral; ;
    break;}
case 321:
#line 926 "cgrammar.y"
{ yyval.ctyp = ctype_signedintegral; ;
    break;}
case 325:
#line 930 "cgrammar.y"
{ yyval.ctyp = ctype_fromQual (yyvsp[-1].typequal); ;
    break;}
case 326:
#line 934 "cgrammar.y"
{ yyval.qtyp = qtype_resolve (yyvsp[-1].qtyp); ;
    break;}
case 327:
#line 937 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 328:
#line 939 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-3].qtyp, yyvsp[-1].qtyp); ;
    break;}
case 330:
#line 944 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-2].qtyp, yyvsp[0].qtyp); ;
    break;}
case 331:
#line 947 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 332:
#line 948 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 333:
#line 949 "cgrammar.y"
{ yyval.qtyp = qtype_combine (yyvsp[0].qtyp, yyvsp[-1].ctyp); ;
    break;}
case 334:
#line 952 "cgrammar.y"
{ yyval.qtyp = qtype_unknown (); ;
    break;}
case 335:
#line 953 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 336:
#line 956 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 337:
#line 958 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 338:
#line 960 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 339:
#line 961 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 340:
#line 963 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 341:
#line 965 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 342:
#line 967 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 343:
#line 969 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 344:
#line 970 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 345:
#line 972 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 346:
#line 974 "cgrammar.y"
{ yyval.ctyp = declareUnnamedStruct (yyvsp[-3].flist); ;
    break;}
case 347:
#line 975 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 348:
#line 977 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 349:
#line 979 "cgrammar.y"
{ yyval.ctyp = declareUnnamedUnion (yyvsp[-3].flist); ;
    break;}
case 350:
#line 981 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedStruct (uentryList_new ()); ;
    break;}
case 351:
#line 983 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedUnion (uentryList_new ()); ;
    break;}
case 352:
#line 984 "cgrammar.y"
{ yyval.ctyp = handleStruct (yyvsp[-1].cname); ;
    break;}
case 353:
#line 985 "cgrammar.y"
{ yyval.ctyp = handleUnion (yyvsp[-1].cname); ;
    break;}
case 354:
#line 988 "cgrammar.y"
{ g_expectingTypeName = FALSE; ;
    break;}
case 356:
#line 992 "cgrammar.y"
{ yyval.flist = uentryList_undefined; /* bogus! */ ;
    break;}
case 357:
#line 993 "cgrammar.y"
{ yyval.flist = uentryList_mergeFields (yyvsp[-1].flist, yyvsp[0].flist); ;
    break;}
case 358:
#line 997 "cgrammar.y"
{ yyval.flist = fixUentryList (yyvsp[-2].ntyplist, yyvsp[-4].qtyp); ;
    break;}
case 359:
#line 999 "cgrammar.y"
{ yyval.flist = fixUnnamedDecl (yyvsp[-2].qtyp); ;
    break;}
case 360:
#line 1003 "cgrammar.y"
{ yyval.ntyplist = idDeclList_singleton (yyvsp[-1].ntyp); ;
    break;}
case 361:
#line 1005 "cgrammar.y"
{ yyval.ntyplist = idDeclList_add (yyvsp[-3].ntyplist, yyvsp[-1].ntyp); ;
    break;}
case 362:
#line 1008 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; ;
    break;}
case 363:
#line 1009 "cgrammar.y"
{ yyval.ntyp = idDecl_undefined; ;
    break;}
case 364:
#line 1010 "cgrammar.y"
{ yyval.ntyp = yyvsp[-3].ntyp; ;
    break;}
case 365:
#line 1015 "cgrammar.y"
{ yyval.ctyp = declareUnnamedEnum (yyvsp[-2].enumnamelist); ;
    break;}
case 366:
#line 1016 "cgrammar.y"
{ context_pushLoc (); ;
    break;}
case 367:
#line 1017 "cgrammar.y"
{ context_popLoc (); yyval.ctyp = declareEnum (yyvsp[-5].cname, yyvsp[-2].enumnamelist); ;
    break;}
case 368:
#line 1018 "cgrammar.y"
{ yyval.ctyp = handleEnum (yyvsp[-1].cname); ;
    break;}
case 369:
#line 1022 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_single (yyvsp[0].cname); ;
    break;}
case 370:
#line 1024 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_push (yyvsp[-2].enumnamelist, yyvsp[0].cname); ;
    break;}
case 372:
#line 1029 "cgrammar.y"
{ uentry ue = uentry_makeEnumConstant (yyvsp[0].cname, ctype_unknown);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[0].cname;
   ;
    break;}
case 373:
#line 1034 "cgrammar.y"
{ uentry ue = uentry_makeEnumInitializedConstant (yyvsp[-3].cname, ctype_unknown, yyvsp[0].expr);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[-3].cname; 
   ;
    break;}
case 375:
#line 1041 "cgrammar.y"
{ yyval.ntyp = idDecl_create (cstring_undefined, qtype_create (yyvsp[0].ctyp)); ;
    break;}
case 376:
#line 1043 "cgrammar.y"
{ 
     qtype qt = qtype_unknown ();

     qtype_adjustPointers (yyvsp[-1].count, qt);
     yyval.ntyp = idDecl_create (cstring_copy (LastIdentifier ()), qt);
   ;
    break;}
case 377:
#line 1050 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 379:
#line 1055 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 380:
#line 1058 "cgrammar.y"
{ yyval.entrylist = handleParamTypeList (yyvsp[0].entrylist); ;
    break;}
case 381:
#line 1059 "cgrammar.y"
{ yyval.entrylist = handleParamIdList (yyvsp[0].entrylist); ;
    break;}
case 382:
#line 1062 "cgrammar.y"
{ /* ignored for now */; ;
    break;}
case 383:
#line 1063 "cgrammar.y"
{ ; ;
    break;}
case 384:
#line 1066 "cgrammar.y"
{ ; ;
    break;}
case 385:
#line 1067 "cgrammar.y"
{ ; ;
    break;}
case 386:
#line 1070 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 387:
#line 1071 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 388:
#line 1072 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 389:
#line 1073 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 391:
#line 1077 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 392:
#line 1080 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 393:
#line 1081 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 394:
#line 1084 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeElipsisMarker ()); ;
    break;}
case 396:
#line 1086 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 397:
#line 1089 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 398:
#line 1089 "cgrammar.y"
{ yyval.entrylist = uentryList_single (yyvsp[0].oentry); ;
    break;}
case 399:
#line 1090 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 400:
#line 1091 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-3].entrylist, yyvsp[0].oentry); ;
    break;}
case 401:
#line 1095 "cgrammar.y"
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
case 402:
#line 1107 "cgrammar.y"
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
case 404:
#line 1123 "cgrammar.y"
{ yyval.qtyp = qtype_newBase (yyvsp[-1].qtyp, yyvsp[0].ctyp); ;
    break;}
case 405:
#line 1126 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[0].count, ctype_unknown); ;
    break;}
case 407:
#line 1128 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[-1].count, yyvsp[0].ctyp); ;
    break;}
case 408:
#line 1131 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 410:
#line 1136 "cgrammar.y"
{ yyval.ctyp = ctype_expectFunction (yyvsp[-1].ctyp); ;
    break;}
case 411:
#line 1137 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 412:
#line 1139 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (ctype_unknown, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 413:
#line 1140 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (yyvsp[-2].ctyp); ;
    break;}
case 414:
#line 1142 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (yyvsp[-3].ctyp, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 415:
#line 1144 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (ctype_unknown, uentryList_makeMissingParams ()); ;
    break;}
case 416:
#line 1146 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (ctype_unknown, yyvsp[-1].entrylist); ;
    break;}
case 417:
#line 1148 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (yyvsp[-3].ctyp, uentryList_makeMissingParams ()); ;
    break;}
case 418:
#line 1150 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (yyvsp[-4].ctyp, yyvsp[-1].entrylist); ;
    break;}
case 428:
#line 1165 "cgrammar.y"
{yyval.expr = yyvsp[0].expr; printf ("Doing stmt lclintassertion\n"); ;
    break;}
case 429:
#line 1169 "cgrammar.y"
{ printf(" QSETBUFFERSIZE id CCONSTANT HEllo World\n");  uentry_setBufferSize(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 430:
#line 1171 "cgrammar.y"
{ printf(" QSETSTRINGLENGTH id CCONSTANT HEllo World\n");  uentry_setStringLength(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 431:
#line 1173 "cgrammar.y"
{printf(" QTESTINRANGE\n");  uentry_testInRange(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 432:
#line 1179 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[0].cname); ;
    break;}
case 433:
#line 1184 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 436:
#line 1192 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 437:
#line 1196 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 438:
#line 1198 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr); ;
    break;}
case 439:
#line 1200 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 440:
#line 1202 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 441:
#line 1206 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 442:
#line 1206 "cgrammar.y"
{ context_sizeofReleaseVars (); ;
    break;}
case 443:
#line 1208 "cgrammar.y"
{ yyval.expr = exprNode_forPred (yyvsp[-7].expr, yyvsp[-5].expr, yyvsp[-2].expr); 
     context_enterForClause (yyvsp[-5].expr); ;
    break;}
case 444:
#line 1213 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-2].entry); ;
    break;}
case 445:
#line 1215 "cgrammar.y"
{ yyval.expr = exprNode_iterStart (yyvsp[-5].entry, yyvsp[-1].alist); ;
    break;}
case 446:
#line 1216 "cgrammar.y"
{ yyval.expr = exprNode_createId (yyvsp[0].entry); ;
    break;}
case 450:
#line 1222 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 458:
#line 1230 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 459:
#line 1231 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 460:
#line 1235 "cgrammar.y"
{ /* don't: context_exitTrueClause ($1, $2); */
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 461:
#line 1240 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 462:
#line 1243 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 473:
#line 1258 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 475:
#line 1260 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 476:
#line 1263 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[-1].cname); ;
    break;}
case 477:
#line 1264 "cgrammar.y"
{ yyval.expr = exprNode_notReached (yyvsp[0].expr); ;
    break;}
case 478:
#line 1270 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 479:
#line 1271 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, FALSE); ;
    break;}
case 480:
#line 1272 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 481:
#line 1273 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, TRUE); ;
    break;}
case 482:
#line 1276 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 483:
#line 1277 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, FALSE); ;
    break;}
case 484:
#line 1278 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 485:
#line 1279 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, TRUE); ;
    break;}
case 486:
#line 1282 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 487:
#line 1284 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; context_exitInner (yyvsp[0].expr); ;
    break;}
case 488:
#line 1287 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 489:
#line 1290 "cgrammar.y"
{ context_enterInnerContext (); ;
    break;}
case 490:
#line 1293 "cgrammar.y"
{ context_exitInnerPlain (); ;
    break;}
case 491:
#line 1296 "cgrammar.y"
{ context_enterStructInnerContext (); ;
    break;}
case 492:
#line 1299 "cgrammar.y"
{ context_exitStructInnerContext (); ;
    break;}
case 493:
#line 1302 "cgrammar.y"
{ context_exitInnerSafe (); ;
    break;}
case 494:
#line 1305 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 495:
#line 1306 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_createTok (yyvsp[0].tok)); ;
    break;}
case 496:
#line 1307 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 497:
#line 1309 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 498:
#line 1310 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 499:
#line 1312 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 500:
#line 1314 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 501:
#line 1316 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (exprNode_concat (yyvsp[-3].expr, yyvsp[-2].expr), 
							lltok_getLoc (yyvsp[-1].tok))); 
   ;
    break;}
case 502:
#line 1323 "cgrammar.y"
{ yyval.expr = exprNode_makeBlock (yyvsp[0].expr); ;
    break;}
case 503:
#line 1327 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 504:
#line 1329 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 505:
#line 1331 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 506:
#line 1333 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 508:
#line 1337 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 509:
#line 1340 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 510:
#line 1341 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 511:
#line 1344 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 512:
#line 1345 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 513:
#line 1348 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 514:
#line 1349 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr); ;
    break;}
case 515:
#line 1352 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 516:
#line 1353 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr); ;
    break;}
case 517:
#line 1354 "cgrammar.y"
{ yyval.expr = exprNode_checkExpr (yyvsp[0].expr); ;
    break;}
case 518:
#line 1358 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 519:
#line 1366 "cgrammar.y"
{ 
     context_exitTrueClause (yyvsp[-1].expr, yyvsp[0].expr);
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 520:
#line 1370 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-2].expr); ;
    break;}
case 521:
#line 1371 "cgrammar.y"
{
     context_exitClause (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr);
     yyval.expr = exprNode_ifelse (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr); 
   ;
    break;}
case 522:
#line 1375 "cgrammar.y"
{ context_enterSwitch (yyvsp[0].expr); ;
    break;}
case 523:
#line 1376 "cgrammar.y"
{ yyval.expr = exprNode_switch (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 524:
#line 1380 "cgrammar.y"
{ yyval.expr = exprNode_whilePred (yyvsp[-1].expr); context_enterWhileClause (yyvsp[-1].expr); ;
    break;}
case 525:
#line 1384 "cgrammar.y"
{ yyval.expr = exprNode_whilePred(yyvsp[-1].expr); ;
    break;}
case 526:
#line 1387 "cgrammar.y"
{ context_enterIterClause (); ;
    break;}
case 527:
#line 1388 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-3].entry); ;
    break;}
case 528:
#line 1391 "cgrammar.y"
{ 
     yyval.expr = exprNode_iter (yyvsp[-9].entry, yyvsp[-4].alist, yyvsp[-2].expr, yyvsp[-1].entry); 

   ;
    break;}
case 529:
#line 1397 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 530:
#line 1398 "cgrammar.y"
{ nextIterParam (); ;
    break;}
case 531:
#line 1399 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-3].alist, yyvsp[0].expr); ;
    break;}
case 532:
#line 1402 "cgrammar.y"
{ yyval.expr = exprNode_iterExpr (yyvsp[0].expr); ;
    break;}
case 533:
#line 1403 "cgrammar.y"
{ yyval.expr = exprNode_iterId (yyvsp[0].entry); ;
    break;}
case 534:
#line 1404 "cgrammar.y"
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
case 535:
#line 1415 "cgrammar.y"
{ yyval.expr = exprNode_iterNewId (yyvsp[0].cname); ;
    break;}
case 537:
#line 1423 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 539:
#line 1427 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 540:
#line 1428 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 541:
#line 1429 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 542:
#line 1431 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 543:
#line 1432 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 544:
#line 1433 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 545:
#line 1434 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 546:
#line 1435 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 548:
#line 1439 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 549:
#line 1440 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 550:
#line 1441 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 551:
#line 1442 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 552:
#line 1443 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 553:
#line 1444 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 554:
#line 1445 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 555:
#line 1446 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 556:
#line 1447 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 558:
#line 1451 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 560:
#line 1455 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 561:
#line 1456 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 562:
#line 1457 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 564:
#line 1461 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 565:
#line 1462 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 567:
#line 1466 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 568:
#line 1467 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 570:
#line 1471 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 571:
#line 1472 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 572:
#line 1473 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 573:
#line 1474 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 575:
#line 1478 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 576:
#line 1479 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 578:
#line 1483 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 580:
#line 1487 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 582:
#line 1492 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 584:
#line 1496 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 586:
#line 1500 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 588:
#line 1504 "cgrammar.y"
{ context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 589:
#line 1505 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 590:
#line 1506 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 592:
#line 1510 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 593:
#line 1511 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 594:
#line 1512 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 595:
#line 1513 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 596:
#line 1514 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 597:
#line 1515 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 598:
#line 1516 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 599:
#line 1517 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 600:
#line 1518 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 601:
#line 1519 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 602:
#line 1520 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 603:
#line 1523 "cgrammar.y"
{ yyval.entry = yyvsp[0].entry; ;
    break;}
case 604:
#line 1524 "cgrammar.y"
{ yyval.entry = uentry_undefined; ;
    break;}
case 605:
#line 1527 "cgrammar.y"
{ context_enterDoWhileClause (); yyval.tok = yyvsp[0].tok; ;
    break;}
case 606:
#line 1531 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 607:
#line 1533 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr)); ;
    break;}
case 608:
#line 1535 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 609:
#line 1538 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 610:
#line 1540 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr)); ;
    break;}
case 611:
#line 1542 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 612:
#line 1543 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 613:
#line 1546 "cgrammar.y"
{ yyval.expr = exprNode_goto (yyvsp[-1].cname); ;
    break;}
case 614:
#line 1547 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-1].tok, BADTOK); ;
    break;}
case 615:
#line 1549 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-2].tok, QINNERCONTINUE); ;
    break;}
case 616:
#line 1550 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, BADTOK); ;
    break;}
case 617:
#line 1551 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSWITCHBREAK); ;
    break;}
case 618:
#line 1552 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QLOOPBREAK); ;
    break;}
case 619:
#line 1553 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QINNERBREAK); ;
    break;}
case 620:
#line 1554 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSAFEBREAK); ;
    break;}
case 621:
#line 1555 "cgrammar.y"
{ yyval.expr = exprNode_nullReturn (yyvsp[-1].tok); ;
    break;}
case 622:
#line 1556 "cgrammar.y"
{ yyval.expr = exprNode_return (yyvsp[-1].expr); ;
    break;}
case 624:
#line 1560 "cgrammar.y"
{ ; ;
    break;}
case 627:
#line 1567 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 628:
#line 1568 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 629:
#line 1569 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 630:
#line 1570 "cgrammar.y"
{ yyval.cname = yyvsp[0].cname; ;
    break;}
case 632:
#line 1574 "cgrammar.y"
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
#line 1576 "cgrammar.y"


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
  





