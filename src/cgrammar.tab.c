
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
#define	IDENTIFIER	431
#define	NEW_IDENTIFIER	432
#define	TYPE_NAME_OR_ID	433
#define	CCONSTANT	434
#define	ITER_NAME	435
#define	ITER_ENDNAME	436
#define	TYPE_NAME	437

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



#define	YYFINAL		1160
#define	YYFLAG		-32768
#define	YYNTBASE	183

#define YYTRANSLATE(x) ((unsigned)(x) <= 437 ? yytranslate[x] : 410)

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
   176,   177,   178,   179,   180,   181,   182
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
  1355,  1357,  1359,  1361,  1363,  1365,  1367,  1369,  1371,  1373,
  1375,  1378,  1381,  1389,  1396,  1399,  1400,  1401,  1412,  1413,
  1420,  1422,  1424,  1426,  1428,  1431,  1433,  1435,  1437,  1439,
  1441,  1443,  1445,  1449,  1451,  1454,  1457,  1460,  1462,  1464,
  1466,  1468,  1470,  1472,  1474,  1476,  1478,  1480,  1484,  1486,
  1488,  1491,  1494,  1495,  1500,  1501,  1507,  1508,  1512,  1513,
  1518,  1522,  1525,  1529,  1530,  1531,  1532,  1533,  1534,  1536,
  1539,  1542,  1546,  1549,  1553,  1557,  1562,  1565,  1568,  1572,
  1576,  1581,  1583,  1586,  1588,  1591,  1593,  1596,  1598,  1601,
  1603,  1606,  1608,  1613,  1616,  1617,  1623,  1624,  1631,  1636,
  1641,  1642,  1643,  1654,  1656,  1657,  1662,  1664,  1666,  1668,
  1670,  1672,  1676,  1678,  1683,  1687,  1692,  1699,  1705,  1711,
  1714,  1717,  1719,  1722,  1725,  1728,  1731,  1734,  1737,  1740,
  1743,  1745,  1747,  1752,  1754,  1758,  1762,  1766,  1768,  1772,
  1776,  1778,  1782,  1786,  1788,  1792,  1796,  1800,  1804,  1806,
  1810,  1814,  1816,  1820,  1822,  1826,  1828,  1832,  1834,  1838,
  1840,  1844,  1846,  1847,  1848,  1856,  1858,  1862,  1866,  1870,
  1874,  1878,  1882,  1886,  1890,  1894,  1898,  1902,  1904,  1905,
  1907,  1910,  1918,  1921,  1924,  1932,  1939,  1942,  1946,  1949,
  1953,  1956,  1960,  1964,  1968,  1972,  1975,  1979,  1980,  1982,
  1984,  1986,  1988,  1990,  1992,  1994,  1996
};

static const short yyrhs[] = {    -1,
   184,     0,   185,     0,   184,   185,     0,   237,   406,     0,
   186,     0,   187,     0,   197,     0,   200,     0,   274,     0,
     1,     0,    75,   294,   307,   317,   307,   406,   282,    88,
     0,    75,   294,   307,   317,   307,    23,   282,   287,   286,
   406,    88,     0,     0,    76,   188,   189,   406,    88,     0,
   190,     0,   294,   307,   190,     0,   194,     0,   321,   194,
     0,   408,     0,   282,    24,   307,   317,   282,    25,     0,
   191,    26,    27,     0,   191,    26,   282,   273,    27,   307,
     0,     0,   191,   283,    24,    25,   192,   202,     0,     0,
   191,   283,    24,   318,    25,   193,   202,     0,   408,     0,
   282,    24,   307,   190,   282,    25,     0,   194,    26,    27,
     0,   194,    26,   282,   273,    27,   307,     0,     0,   194,
   283,    24,    25,   195,   204,     0,     0,   194,   283,    24,
   318,    25,   196,   204,     0,     0,     0,    77,   408,    24,
   318,    25,   198,   204,   199,   406,    88,     0,    89,   347,
    92,     0,    90,   334,    92,     0,    91,   335,    92,     0,
    89,    92,     0,   233,     0,     0,   203,   206,     0,     0,
   205,   207,     0,   214,     0,   208,   214,     0,   217,     0,
   208,   217,     0,   230,     0,   230,   208,     0,   210,     0,
   209,    21,   210,     0,   213,   211,     0,   407,     0,   177,
     0,    86,     0,    87,     0,   116,     0,   117,     0,   130,
     0,     0,   212,   213,     0,     0,    72,   215,   367,   406,
    88,   220,     0,     0,    72,   216,   209,   406,    88,   220,
     0,    74,     0,   221,     0,     0,     0,    72,   218,   367,
   406,   220,     0,     0,    72,   219,   209,   406,   220,     0,
    74,     0,   223,     0,     0,   221,     0,     0,     0,    73,
   222,   238,     0,     0,    73,   224,   239,     0,    78,     0,
    79,     0,    80,     0,    81,     0,    82,     0,    88,     0,
    88,     0,    83,     0,    84,     0,   119,     0,   137,     0,
   135,     0,   133,     0,   132,     0,   121,     0,   138,     0,
   150,     0,     0,   225,   307,   231,   244,   406,   227,   282,
     0,     0,   228,   307,   229,   232,   244,   406,   226,   282,
     0,   317,     0,   294,   307,   317,     0,     0,    19,   235,
   363,     0,     0,   367,   236,   356,     0,   201,   234,     0,
   242,   406,    88,     0,   406,    88,     0,   242,   406,     0,
   406,     0,   407,     0,   177,     0,   240,    26,    27,     0,
   240,    26,   241,    27,     0,    34,   240,     0,    24,   240,
    25,     0,   240,    28,   408,     0,   240,    44,   408,     0,
   240,     0,   179,     0,   240,     0,   242,    21,   240,     0,
   407,     0,   177,     0,   243,    26,    27,     0,   243,    26,
   241,    27,     0,    34,   243,     0,    24,   243,    25,     0,
   243,    28,   408,     0,   243,    44,   408,     0,   243,     0,
   244,    21,   243,     0,   407,     0,   177,     0,   179,     0,
    24,   271,    25,     0,   178,     0,   111,     0,   245,     0,
   246,    26,   271,    27,     0,   246,    24,    25,     0,   246,
    24,   247,    25,     0,    70,    24,   270,    21,   329,    25,
     0,   246,   307,    28,   408,   282,     0,   246,   307,    44,
   408,   282,     0,   246,    47,     0,   246,    48,     0,   270,
     0,   247,    21,   270,     0,   246,     0,    47,   248,     0,
    48,   248,     0,    29,   254,     0,    34,   254,     0,    33,
   254,     0,    32,   254,     0,    31,   254,     0,    30,   254,
     0,   251,     0,   250,     0,   249,    28,   408,     0,   408,
     0,    46,   282,    24,   329,   307,    21,   249,    25,   282,
     0,     0,   282,   252,   253,     0,    42,    24,   329,    25,
     0,    42,   248,     0,    43,    24,   329,    25,     0,    43,
   248,     0,   248,     0,    24,   329,    25,   254,     0,   254,
     0,   255,    34,   254,     0,   255,    35,   254,     0,   255,
    36,   254,     0,   255,     0,   256,    33,   255,     0,   256,
    32,   255,     0,   256,     0,   257,    49,   256,     0,   257,
    50,   256,     0,   257,     0,   258,    37,   257,     0,   258,
    38,   257,     0,   258,    51,   257,     0,   258,    52,   257,
     0,   258,     0,   259,    53,   258,     0,   259,    54,   258,
     0,   259,     0,   260,    29,   259,     0,   260,     0,   261,
    39,   260,     0,   261,     0,   262,    40,   261,     0,   262,
     0,     0,   263,    55,   264,   262,     0,   263,     0,     0,
   265,    56,   266,   263,     0,   265,     0,     0,     0,   265,
    41,   268,   271,    22,   269,   267,     0,   267,     0,   248,
    23,   270,     0,   248,    57,   270,     0,   248,    58,   270,
     0,   248,    59,   270,     0,   248,    60,   270,     0,   248,
    61,   270,     0,   248,    62,   270,     0,   248,    63,   270,
     0,   248,    64,   270,     0,   248,    65,   270,     0,   248,
    66,   270,     0,   270,     0,   271,    21,   270,     0,     0,
   271,     0,   267,     0,   275,     0,    71,     0,   280,     0,
   294,   282,    18,     0,     0,   294,   307,   317,   307,   276,
   282,   286,    18,   282,     0,     0,   294,   307,   317,   307,
    23,   277,   282,   287,   286,    18,   282,     0,   317,   307,
     0,     0,   317,   307,    23,   279,   282,   287,     0,     0,
    45,   294,   281,   307,   284,   282,    18,     0,    45,   294,
   282,    18,     0,    45,   284,   282,    18,     0,     0,     0,
   285,   282,     0,   278,     0,   284,    21,   307,   278,     0,
     0,   286,    21,   307,   278,     0,   270,     0,    19,   288,
    20,     0,    19,   288,    21,    20,     0,   287,     0,   288,
    21,   287,     0,   112,     0,   110,     0,   113,     0,   114,
     0,   115,     0,   108,   282,     0,   109,   282,     0,   116,
   282,     0,   117,   282,     0,   130,   282,     0,   131,   282,
     0,   132,   282,     0,   133,   282,     0,   118,   282,     0,
   120,   282,     0,   119,   282,     0,   128,   282,     0,   129,
   282,     0,   121,   282,     0,   123,   282,     0,   139,   282,
     0,   140,   282,     0,   142,   282,     0,   143,   282,     0,
   141,   282,     0,   136,   282,     0,   151,   282,     0,   134,
   282,     0,   135,   282,     0,   137,   282,     0,   124,   282,
     0,   127,   282,     0,   125,   282,     0,   126,   282,     0,
   156,   282,     0,   157,   282,     0,   148,   282,     0,   158,
   282,     0,   149,   282,     0,   152,   282,     0,   153,   282,
     0,   154,   282,     0,   155,   282,     0,   150,   282,     0,
   159,   282,     0,   160,   282,     0,   163,   282,     0,   164,
   282,     0,   161,   282,     0,   162,   282,     0,   175,   282,
     0,   147,     0,   144,     0,   145,     0,   146,     0,   165,
   307,     0,   167,   307,     0,   166,   307,     0,   168,   307,
     0,   169,   307,     0,   170,   307,     0,   171,   307,     0,
   172,   307,     0,   173,   307,     0,   174,   307,     0,   409,
   307,     0,   298,   307,     0,   312,   307,     0,   291,   307,
     0,   282,   294,   282,     0,   296,     0,   296,    85,   295,
    88,     0,   329,     0,   329,    21,   295,     0,   289,   297,
     0,   290,   297,     0,   292,   297,     0,     0,   294,     0,
     0,     0,   307,    67,   408,   282,    19,   299,   360,   308,
   361,   300,    20,     0,     0,     0,   307,    68,   408,   282,
    19,   301,   360,   308,   361,   302,    20,     0,   307,    67,
   408,   282,    19,    20,     0,   307,    68,   408,   282,    19,
    20,     0,     0,     0,   307,    67,   282,    19,   303,   360,
   308,   361,   304,    20,     0,     0,     0,   307,    68,   282,
    19,   305,   360,   308,   361,   306,    20,     0,   307,    67,
   282,    19,    20,     0,   307,    68,   282,    19,    20,     0,
   307,    67,   408,   307,     0,   307,    68,   408,   307,     0,
     0,   309,     0,   200,     0,   308,   309,     0,   294,   307,
   310,   282,    18,     0,   294,   282,    18,     0,   311,   307,
     0,   310,    21,   311,   307,     0,   317,     0,    22,   282,
   273,     0,   317,    22,   282,   273,     0,   307,    69,    19,
   314,    20,   282,     0,     0,   307,    69,   408,    19,   313,
   314,    20,   282,     0,   307,    69,   408,   282,     0,   315,
     0,   314,    21,   315,     0,   314,    21,     0,   408,     0,
   408,    23,   282,   273,     0,   191,     0,   331,     0,   321,
   182,     0,   321,   316,     0,   191,     0,   321,   191,     0,
   324,     0,   307,   322,     0,   108,     0,   109,     0,   319,
     0,   320,   319,     0,    34,     0,    34,   320,     0,    34,
   321,     0,    34,   320,   321,     0,   323,     0,   323,    21,
     5,     0,   408,     0,   323,    21,   408,     0,     5,     0,
   325,     0,   325,    21,     5,     0,     0,   326,   328,     0,
     0,   325,    21,   327,   328,     0,   282,   294,   316,   282,
     0,   408,     0,   293,     0,   293,   330,     0,   321,     0,
   332,     0,   321,   332,     0,     0,   332,     0,   282,    24,
   307,   330,    25,     0,    26,    27,     0,    26,   273,    27,
     0,   332,    26,    27,     0,   332,    26,   273,    27,     0,
   282,    24,    25,     0,   282,    24,   324,    25,     0,   332,
   282,    24,    25,     0,   332,   282,    24,   324,    25,     0,
   349,     0,   350,     0,   353,     0,   356,     0,   369,     0,
   372,     0,   403,     0,   377,     0,   405,     0,   336,     0,
   334,     0,   343,     0,   336,   343,     0,   376,   336,     0,
   402,   348,    11,    24,   271,    25,    18,     0,   402,   348,
    11,    24,   271,    25,     0,   338,   343,     0,     0,     0,
    13,    24,   272,    18,   272,    18,   339,   272,   340,    25,
     0,     0,   180,   358,    24,   342,   380,    25,     0,   181,
     0,   349,     0,   350,     0,   353,     0,   345,   367,     0,
   345,     0,   346,     0,   369,     0,   344,     0,   337,     0,
   341,     0,   405,     0,    24,   343,    25,     0,     1,     0,
   371,   343,     0,   358,    19,     0,   362,    20,     0,   348,
     0,   366,     0,   349,     0,   350,     0,   353,     0,   357,
     0,   370,     0,   372,     0,   377,     0,   404,     0,    24,
   348,    25,     0,   405,     0,     1,     0,   408,    22,     0,
   107,   333,     0,     0,     6,   273,   351,    22,     0,     0,
    98,     6,   273,   352,    22,     0,     0,     7,   354,    22,
     0,     0,    98,     7,   355,    22,     0,    24,   356,    25,
     0,   358,   364,     0,   358,   365,   359,     0,     0,     0,
     0,     0,     0,    20,     0,   107,    20,     0,   368,    20,
     0,   368,   107,    20,     0,   367,    20,     0,   367,   107,
    20,     0,   367,   368,    20,     0,   367,   368,   107,    20,
     0,    19,   363,     0,    19,    20,     0,    19,   366,    20,
     0,    19,   367,    20,     0,    19,   367,   368,    20,     0,
   348,     0,   366,   348,     0,   274,     0,   367,   274,     0,
   333,     0,   368,   333,     0,    18,     0,   271,    18,     0,
    18,     0,   271,    18,     0,   271,     0,     8,    24,   271,
    25,     0,   371,   333,     0,     0,   371,   333,     9,   373,
   333,     0,     0,    10,    24,   271,   374,    25,   333,     0,
    11,    24,   271,    25,     0,    11,    24,   271,    25,     0,
     0,     0,   180,   378,   358,    24,   379,   380,    25,   356,
   401,   359,     0,   382,     0,     0,   380,   381,    21,   382,
     0,   400,     0,   407,     0,   178,     0,   177,     0,   179,
     0,    24,   271,    25,     0,   383,     0,   246,    26,   271,
    27,     0,   246,    24,    25,     0,   246,    24,   247,    25,
     0,    70,    24,   270,    21,   329,    25,     0,   246,   307,
    28,   408,   282,     0,   246,   307,    44,   408,   282,     0,
   246,    47,     0,   246,    48,     0,   384,     0,    47,   248,
     0,    48,   248,     0,    29,   254,     0,    34,   254,     0,
    33,   254,     0,    32,   254,     0,    31,   254,     0,    30,
   254,     0,   251,     0,   385,     0,    24,   329,    25,   254,
     0,   386,     0,   255,    34,   254,     0,   255,    35,   254,
     0,   255,    36,   254,     0,   387,     0,   256,    33,   255,
     0,   256,    32,   255,     0,   388,     0,   257,    49,   256,
     0,   257,    50,   256,     0,   389,     0,   258,    37,   257,
     0,   258,    38,   257,     0,   258,    51,   257,     0,   258,
    52,   257,     0,   390,     0,   259,    53,   258,     0,   259,
    54,   258,     0,   391,     0,   260,    29,   259,     0,   392,
     0,   261,    39,   260,     0,   393,     0,   262,    40,   261,
     0,   394,     0,   263,    55,   262,     0,   395,     0,   265,
    56,   263,     0,   396,     0,     0,     0,   265,    41,   398,
   271,    22,   399,   267,     0,   397,     0,   248,    23,   270,
     0,   248,    57,   270,     0,   248,    58,   270,     0,   248,
    59,   270,     0,   248,    60,   270,     0,   248,    61,   270,
     0,   248,    62,   270,     0,   248,    63,   270,     0,   248,
    64,   270,     0,   248,    65,   270,     0,   248,    66,   270,
     0,   181,     0,     0,    12,     0,   375,   333,     0,   402,
   333,    11,    24,   271,    25,    18,     0,   338,   333,     0,
   375,   348,     0,   402,   348,    11,    24,   271,    25,    18,
     0,   402,   348,    11,    24,   271,    25,     0,   338,   348,
     0,    14,   408,    18,     0,    15,    18,     0,    97,    15,
    18,     0,    16,    18,     0,    93,    16,    18,     0,    94,
    16,    18,     0,    95,    16,    18,     0,    96,    16,    18,
     0,    17,    18,     0,    17,   271,    18,     0,     0,    18,
     0,   176,     0,   177,     0,   180,     0,   181,     0,   407,
     0,   178,     0,   182,     0,   178,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   234,   235,   238,   239,   242,   243,   244,   245,   246,   247,
   248,   251,   253,   257,   257,   262,   268,   272,   273,   277,
   278,   280,   282,   298,   302,   309,   313,   319,   320,   322,
   324,   340,   344,   351,   355,   361,   363,   363,   367,   368,
   369,   370,   373,   376,   377,   380,   381,   384,   385,   388,
   389,   392,   393,   396,   397,   400,   403,   404,   407,   408,
   409,   410,   411,   414,   415,   418,   418,   421,   421,   424,
   428,   429,   432,   432,   435,   435,   438,   442,   443,   446,
   447,   450,   456,   463,   469,   476,   477,   478,   479,   480,
   483,   486,   489,   490,   493,   494,   495,   496,   497,   498,
   499,   500,   503,   509,   516,   522,   531,   537,   541,   543,
   547,   550,   557,   565,   566,   569,   570,   573,   574,   575,
   576,   577,   578,   579,   580,   584,   585,   589,   590,   593,
   595,   597,   598,   599,   600,   601,   603,   607,   611,   623,
   624,   625,   626,   627,   628,   631,   632,   633,   634,   635,
   636,   637,   638,   639,   642,   643,   646,   647,   648,   649,
   650,   651,   652,   653,   654,   655,   656,   659,   660,   663,
   667,   668,   671,   672,   673,   674,   677,   678,   682,   683,
   684,   685,   688,   689,   690,   693,   694,   695,   698,   699,
   700,   701,   702,   705,   706,   707,   710,   711,   714,   715,
   719,   720,   723,   724,   729,   735,   736,   742,   748,   749,
   749,   751,   754,   755,   756,   757,   758,   759,   760,   761,
   762,   763,   764,   765,   768,   769,   772,   773,   776,   781,
   782,   783,   786,   799,   803,   804,   807,   812,   813,   813,
   818,   819,   820,   821,   824,   827,   830,   833,   834,   837,
   838,   841,   842,   843,   847,   849,   858,   859,   860,   861,
   862,   865,   866,   867,   868,   869,   870,   871,   872,   873,
   874,   875,   876,   877,   878,   879,   880,   881,   882,   883,
   884,   885,   886,   887,   888,   889,   890,   891,   892,   893,
   894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
   904,   905,   906,   907,   908,   909,   910,   913,   914,   915,
   916,   919,   920,   921,   922,   923,   924,   925,   926,   927,
   928,   929,   930,   931,   932,   935,   939,   940,   944,   945,
   949,   950,   951,   954,   955,   958,   960,   962,   963,   965,
   967,   968,   970,   972,   974,   976,   977,   979,   981,   982,
   984,   986,   987,   990,   993,   994,   995,   998,  1000,  1004,
  1006,  1010,  1011,  1012,  1016,  1018,  1018,  1020,  1023,  1025,
  1027,  1030,  1035,  1042,  1043,  1044,  1051,  1055,  1056,  1060,
  1061,  1064,  1065,  1068,  1069,  1072,  1073,  1074,  1075,  1078,
  1079,  1082,  1083,  1086,  1087,  1088,  1091,  1091,  1092,  1093,
  1096,  1108,  1124,  1125,  1128,  1129,  1130,  1133,  1134,  1137,
  1139,  1140,  1141,  1142,  1143,  1145,  1147,  1149,  1155,  1156,
  1157,  1158,  1159,  1160,  1161,  1162,  1163,  1166,  1169,  1172,
  1173,  1177,  1179,  1181,  1183,  1187,  1188,  1190,  1194,  1196,
  1198,  1201,  1202,  1203,  1204,  1205,  1206,  1207,  1208,  1209,
  1210,  1211,  1212,  1213,  1216,  1222,  1225,  1228,  1229,  1232,
  1233,  1234,  1235,  1236,  1237,  1238,  1239,  1240,  1241,  1242,
  1245,  1246,  1252,  1253,  1254,  1255,  1258,  1259,  1260,  1261,
  1264,  1265,  1269,  1272,  1275,  1278,  1281,  1284,  1287,  1288,
  1289,  1290,  1292,  1293,  1295,  1297,  1304,  1308,  1310,  1312,
  1314,  1318,  1319,  1322,  1323,  1326,  1327,  1330,  1331,  1334,
  1335,  1336,  1339,  1347,  1352,  1353,  1357,  1358,  1361,  1366,
  1369,  1370,  1371,  1379,  1380,  1380,  1384,  1385,  1386,  1397,
  1404,  1405,  1408,  1409,  1410,  1411,  1412,  1414,  1415,  1416,
  1417,  1420,  1421,  1422,  1423,  1424,  1425,  1426,  1427,  1428,
  1429,  1432,  1433,  1436,  1437,  1438,  1439,  1442,  1443,  1444,
  1447,  1448,  1449,  1452,  1453,  1454,  1455,  1456,  1459,  1460,
  1461,  1464,  1465,  1468,  1469,  1473,  1474,  1477,  1478,  1481,
  1482,  1485,  1486,  1487,  1488,  1491,  1492,  1493,  1494,  1495,
  1496,  1497,  1498,  1499,  1500,  1501,  1502,  1505,  1506,  1509,
  1512,  1514,  1516,  1520,  1521,  1523,  1525,  1528,  1529,  1530,
  1532,  1533,  1534,  1535,  1536,  1537,  1538,  1541,  1542,  1545,
  1548,  1549,  1550,  1551,  1552,  1555,  1556
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
"IDENTIFIER","NEW_IDENTIFIER","TYPE_NAME_OR_ID","CCONSTANT","ITER_NAME","ITER_ENDNAME",
"TYPE_NAME","file","externalDefs","externalDef","constantDecl","fcnDecl","@1",
"plainFcn","plainNamedDecl","namedDeclBase","@2","@3","plainNamedDeclBase","@4",
"@5","iterDecl","@6","@7","macroDef","fcnDefHdr","optGlobMods","@8","optPlainGlobMods",
"@9","optGlobModsRest","optPlainGlobModsRest","specialClauses","globIdList",
"globIdListExpr","globId","globQual","optGlobQuals","optGlobModsAux","@10","@11",
"optPlainGlobModsAux","@12","@13","optMods","fcnMods","@14","fcnPlainMods","@15",
"specialTag","endStateTag","endSpecialTag","stateSpecialClause","specialClauseType",
"specialClause","@16","@17","fcnDefHdrAux","fcnBody","@18","@19","fcnDef","locModifies",
"locPlainModifies","modListExpr","mExpr","modList","specClauseListExpr","specClauseList",
"primaryExpr","postfixExpr","argumentExprList","unaryExpr","fieldDesignator",
"offsetofExpr","sizeofExpr","@20","sizeofExprAux","castExpr","timesExpr","plusExpr",
"shiftExpr","relationalExpr","equalityExpr","bitandExpr","xorExpr","bitorExpr",
"andExpr","@21","orExpr","@22","conditionalExpr","@23","@24","assignExpr","expr",
"optExpr","constantExpr","initializer","instanceDecl","@25","@26","namedInitializer",
"@27","typeDecl","@28","IsType","PushType","namedInitializerList","namedInitializerListAux",
"optDeclarators","init","initList","storageSpecifier","typeQualifier","typeModifier",
"typeSpecifier","completeType","completeTypeSpecifier","altType","completeTypeSpecifierAux",
"optCompleteType","suSpc","@29","@30","@31","@32","@33","@34","@35","@36","NotType",
"structDeclList","structDecl","structNamedDeclList","structNamedDecl","enumSpc",
"@37","enumeratorList","enumerator","optNamedDecl","namedDecl","genericParamList",
"innerMods","innerModsList","pointers","paramIdList","idList","paramTypeList",
"paramList","@38","@39","paramDecl","typeExpression","abstractDecl","optAbstractDeclBase",
"abstractDeclBase","stmt","iterBody","endBody","iterDefStmtList","iterDefIterationStmt",
"forPred","@40","@41","partialIterStmt","@42","iterDefStmt","iterSelectionStmt",
"openScope","closeScope","macroBody","stmtErr","labeledStmt","caseStmt","@43",
"@44","defaultStmt","@45","@46","compoundStmt","compoundStmtErr","CreateInnerScope",
"DeleteInnerScope","CreateStructInnerScope","DeleteStructInnerScope","DeleteInnerScopeSafe",
"compoundStmtRest","compoundStmtAux","compoundStmtAuxErr","stmtListErr","initializerList",
"stmtList","expressionStmt","expressionStmtErr","ifPred","selectionStmt","@47",
"@48","whilePred","iterWhilePred","iterStmt","@49","@50","iterArgList","@51",
"iterArgExpr","primaryIterExpr","postfixIterExpr","unaryIterExpr","castIterExpr",
"timesIterExpr","plusIterExpr","shiftIterExpr","relationalIterExpr","equalityIterExpr",
"bitandIterExpr","xorIterExpr","bitorIterExpr","andIterExpr","orIterExpr","conditionalIterExpr",
"@52","@53","assignIterExpr","endIter","doHeader","iterationStmt","iterationStmtErr",
"jumpStmt","optSemi","id","newId","typeName", NULL
};
#endif

static const short yyr1[] = {     0,
   183,   183,   184,   184,   185,   185,   185,   185,   185,   185,
   185,   186,   186,   188,   187,   189,   189,   190,   190,   191,
   191,   191,   191,   192,   191,   193,   191,   194,   194,   194,
   194,   195,   194,   196,   194,   198,   199,   197,   200,   200,
   200,   200,   201,   203,   202,   205,   204,   206,   206,   207,
   207,   208,   208,   209,   209,   210,   211,   211,   212,   212,
   212,   212,   212,   213,   213,   215,   214,   216,   214,   214,
   214,   214,   218,   217,   219,   217,   217,   217,   217,   220,
   220,   222,   221,   224,   223,   225,   225,   225,   225,   225,
   226,   227,   228,   228,   229,   229,   229,   229,   229,   229,
   229,   229,   231,   230,   232,   230,   233,   233,   235,   234,
   236,   234,   237,   238,   238,   239,   239,   240,   240,   240,
   240,   240,   240,   240,   240,   241,   241,   242,   242,   243,
   243,   243,   243,   243,   243,   243,   243,   244,   244,   245,
   245,   245,   245,   245,   245,   246,   246,   246,   246,   246,
   246,   246,   246,   246,   247,   247,   248,   248,   248,   248,
   248,   248,   248,   248,   248,   248,   248,   249,   249,   250,
   252,   251,   253,   253,   253,   253,   254,   254,   255,   255,
   255,   255,   256,   256,   256,   257,   257,   257,   258,   258,
   258,   258,   258,   259,   259,   259,   260,   260,   261,   261,
   262,   262,   263,   264,   263,   265,   266,   265,   267,   268,
   269,   267,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   270,   271,   271,   272,   272,   273,   274,
   274,   274,   275,   276,   275,   277,   275,   278,   279,   278,
   281,   280,   280,   280,   282,   283,   284,   285,   285,   286,
   286,   287,   287,   287,   288,   288,   289,   289,   289,   289,
   289,   290,   290,   290,   290,   290,   290,   290,   290,   290,
   290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
   290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
   290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
   290,   290,   290,   290,   290,   290,   290,   291,   291,   291,
   291,   292,   292,   292,   292,   292,   292,   292,   292,   292,
   292,   292,   292,   292,   292,   293,   294,   294,   295,   295,
   296,   296,   296,   297,   297,   299,   300,   298,   301,   302,
   298,   298,   298,   303,   304,   298,   305,   306,   298,   298,
   298,   298,   298,   307,   308,   308,   308,   309,   309,   310,
   310,   311,   311,   311,   312,   313,   312,   312,   314,   314,
   314,   315,   315,   316,   316,   316,   316,   317,   317,   318,
   318,   319,   319,   320,   320,   321,   321,   321,   321,   322,
   322,   323,   323,   324,   324,   324,   326,   325,   327,   325,
   328,   328,   329,   329,   330,   330,   330,   331,   331,   332,
   332,   332,   332,   332,   332,   332,   332,   332,   333,   333,
   333,   333,   333,   333,   333,   333,   333,   334,   335,   336,
   336,   337,   337,   337,   337,   339,   340,   338,   342,   341,
   341,   343,   343,   343,   343,   343,   343,   343,   343,   343,
   343,   343,   343,   343,   344,   345,   346,   347,   347,   348,
   348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
   349,   349,   351,   350,   352,   350,   354,   353,   355,   353,
   356,   356,   357,   358,   359,   360,   361,   362,   363,   363,
   363,   363,   363,   363,   363,   363,   364,   365,   365,   365,
   365,   366,   366,   367,   367,   368,   368,   369,   369,   370,
   370,   370,   371,   372,   373,   372,   374,   372,   375,   376,
   378,   379,   377,   380,   381,   380,   382,   382,   382,   382,
   383,   383,   384,   384,   384,   384,   384,   384,   384,   384,
   384,   385,   385,   385,   385,   385,   385,   385,   385,   385,
   385,   386,   386,   387,   387,   387,   387,   388,   388,   388,
   389,   389,   389,   390,   390,   390,   390,   390,   391,   391,
   391,   392,   392,   393,   393,   394,   394,   395,   395,   396,
   396,   397,   398,   399,   397,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   401,   401,   402,
   403,   403,   403,   404,   404,   404,   404,   405,   405,   405,
   405,   405,   405,   405,   405,   405,   405,   406,   406,   407,
   408,   408,   408,   408,   408,   409,   409
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
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
    11,   386,   354,   231,   354,    14,     0,     0,     0,     0,
   245,   245,   258,   257,   259,   260,   261,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   309,   310,   311,   308,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   354,   354,   354,   354,   354,   354,
   354,   354,   354,   354,   245,   620,   621,   625,   622,   623,
   626,     0,     3,     6,     7,   378,     8,     9,   354,    43,
   618,    10,   230,   232,     0,   334,   334,   354,   334,   354,
   327,   354,     0,   354,   107,   245,   624,    20,   354,   382,
   383,   384,   387,   388,   248,   245,   245,   241,   354,   627,
   354,   354,   625,     0,   470,   245,   477,     0,     0,     0,
   600,     0,     0,     0,     0,   245,   510,     0,   245,   245,
   245,   245,   245,   245,   245,   245,   245,     0,    42,     0,
     0,     0,     0,     0,     0,   245,   145,   141,   144,   142,
   521,   146,   157,   177,   167,   166,   179,   183,   186,   189,
   194,   197,   199,   201,   203,   206,   209,   213,   225,   512,
   171,     0,     0,   502,   460,   461,   462,   463,     0,     0,
   464,   245,   465,     0,   466,     0,   467,   469,   140,     0,
   454,     0,   508,     0,   484,   441,     0,     0,     0,   450,
     0,   451,   430,   449,   446,   447,   442,   443,   444,     0,
     0,   448,     0,     0,     0,   452,   429,     0,   262,   263,
   264,   265,   270,   272,   271,   275,   276,   287,   289,   290,
   288,   273,   274,   266,   267,   268,   269,   284,   285,   282,
   286,   277,   278,   281,   279,   280,   293,   295,   300,   283,
   296,   297,   298,   299,   291,   292,   294,   301,   302,   305,
   306,   303,   304,   312,   314,   313,   315,   316,   317,   318,
   319,   320,   321,   307,     4,   245,     0,   109,   113,   504,
   354,   354,   619,     5,   354,   335,   331,   332,   325,   333,
     0,   245,   245,   323,   245,   245,     0,   324,   379,   322,
   385,   389,   354,     0,   247,   354,     0,   238,   245,   618,
    16,    18,     0,   354,   245,    28,   397,   245,   141,   144,
   177,   229,   473,   140,     0,   245,   245,   245,   245,     0,
   609,   611,   616,     0,     0,   354,   403,     0,     0,   160,
   165,   164,   163,   162,   161,     0,   245,   158,   159,   245,
     0,     0,     0,     0,     0,   245,   479,   245,   472,   245,
   419,   420,   421,   422,     0,   423,   424,   245,   426,   245,
   425,   427,   484,   245,   245,   153,   154,     0,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   204,   210,   207,   511,   245,
     0,   607,    39,     0,   485,   503,   514,   604,     0,   471,
   245,     0,     0,     0,   509,    40,   431,   435,   445,   456,
   457,   455,     0,     0,    41,    22,   245,   397,   354,   245,
   484,   505,   245,   233,   108,   354,     0,   329,     0,   354,
     0,   354,     0,   245,   245,   244,   245,   243,   239,   354,
     0,   245,     0,   354,   245,    19,   394,     0,     0,   380,
   395,   245,     0,     0,   478,     0,   517,     0,   228,     0,
   608,   617,   143,   245,   245,     0,   405,   404,   406,   245,
   468,   245,     0,   612,   613,   614,   615,   610,   475,     0,
     0,   603,   354,   482,   601,     0,     0,   148,     0,   155,
     0,     0,     0,   214,   215,   216,   217,   218,   219,   220,
   221,   222,   223,   224,   180,   181,   182,   185,   184,   187,
   188,   190,   191,   192,   193,   195,   196,   198,   200,   202,
   245,   245,   245,   226,   245,   245,   172,   498,   144,   502,
     0,   354,   483,   515,     0,     0,   453,   439,     0,     0,
    24,     0,   489,   245,   506,   110,   354,   245,   354,   484,
   112,   245,   234,   328,   245,   344,     0,   352,   347,     0,
   353,     0,   369,   372,   366,   368,   249,   245,   245,   618,
    15,    30,   245,   397,   245,    17,   381,   390,   392,    36,
   399,   354,   398,   402,   474,   513,     0,   519,   245,   326,
   411,     0,   397,   407,   245,     0,   178,   354,   245,     0,
   480,   481,   497,     0,   522,   245,   149,   147,   245,   245,
   205,     0,   208,   245,   174,   245,   176,   499,   500,   245,
   245,   245,   520,   245,   245,   354,    44,    26,   490,   493,
   245,   245,   491,   245,   507,     0,   236,   245,   330,   350,
   486,   336,   351,   486,   339,   245,   371,   245,     0,     0,
   245,   245,   245,     0,    32,     0,   245,     0,    46,   396,
   245,   408,   245,     0,   412,   415,   245,     0,   413,     0,
   397,     0,     0,   476,   245,   245,   156,   151,   152,   211,
     0,     0,   501,   516,     0,   245,   245,   245,   245,   245,
   245,   245,   245,   245,     0,   141,   144,   142,   157,   177,
   166,   183,   186,   189,   194,   197,   199,   201,   203,   206,
     0,   525,   524,   533,   542,   552,   554,   558,   561,   564,
   569,   572,   574,   576,   578,   580,   582,   586,   527,   140,
     0,    23,    25,    72,    44,   494,   495,   245,   492,    21,
   245,   250,   354,   342,   486,   354,   343,   486,   365,   370,
   245,     0,   242,   245,   252,   240,   245,     0,   354,    46,
    34,     0,   391,   393,    37,    79,   400,   374,     0,   245,
   408,   375,   409,   518,   436,     0,   416,   414,   417,     0,
     0,   150,     0,   525,   245,   173,   175,   606,     0,     0,
   160,   165,   164,   163,   162,   161,   158,   159,   245,   245,
   245,   153,   154,     0,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   204,   583,   207,   440,     0,   434,    66,    82,    70,
    86,    87,    88,    89,    90,    93,    94,    45,    72,    48,
    71,   354,   354,    52,    27,   496,   245,     0,   356,   354,
   354,   355,   354,   354,   354,   373,   245,   255,     0,   250,
    12,    31,    33,    46,    29,   618,    73,    84,    77,    47,
    79,    50,    78,   397,   401,   376,   377,   245,   410,   418,
     0,   169,     0,   484,   212,   605,   143,   245,     0,   148,
     0,     0,     0,     0,   587,   588,   589,   590,   591,   592,
   593,   594,   595,   596,   597,   180,   181,   182,   185,   184,
   187,   188,   190,   191,   192,   193,   195,   196,   198,   200,
   202,   579,   245,   581,   245,   433,   354,    64,   618,    49,
   103,     0,    53,   250,   245,   354,     0,   245,   357,   345,
   354,   348,   354,   367,   253,   245,   618,    35,     0,   354,
    64,   618,    51,   245,   437,   245,     0,   602,   599,   178,
   245,   149,   147,   245,   245,     0,   526,   354,    59,    60,
    61,    62,    63,   618,    54,    64,     0,     0,     0,   119,
    83,   128,   618,     0,   118,     0,    95,   100,    99,    98,
    97,    96,   101,   102,   105,     0,   235,   245,   359,   245,
   245,   354,   362,     0,   337,     0,   340,   254,   256,     0,
    38,   618,   618,    85,   618,   117,   245,     0,   170,   168,
   598,   485,     0,   151,   152,   584,     0,    64,     0,    65,
    58,    56,    57,     0,   122,     0,     0,     0,     0,     0,
   115,     0,     0,   131,   138,   618,   130,     0,   245,   251,
   245,   245,     0,   360,   245,   346,     0,   349,     0,    13,
    81,    81,   116,   438,   523,   150,   245,    81,    55,    81,
   123,   120,   127,   126,     0,   124,   125,   129,   114,     0,
   134,     0,     0,     0,     0,     0,   618,   237,   363,   354,
   358,   245,   338,   341,    74,    80,    76,   585,    67,    69,
   121,   135,   132,     0,   136,   137,   139,    92,   245,     0,
   361,   364,   133,   104,    91,   245,   106,     0,     0,     0
};

static const short yydefgoto[] = {  1158,
    82,    83,    84,    85,   122,   320,   321,    86,   657,   765,
   322,   790,   904,    87,   689,   906,   889,    89,   763,   764,
   795,   796,   878,   910,   879,  1014,  1015,  1072,  1016,  1017,
   880,   967,   968,   912,   990,   991,  1135,  1136,   969,   913,
   992,   882,  1156,  1149,   883,  1035,   884,  1026,  1088,    90,
   289,   449,   451,    91,  1021,  1054,  1022,  1115,  1023,  1085,
  1086,   162,   163,   519,   164,   921,   165,   166,   421,   557,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   551,   177,   553,   178,   552,   815,   179,   207,   490,   333,
   290,    93,   668,   771,   115,   599,    94,   316,   181,   287,
   116,   117,   888,   786,   899,    96,    97,    98,    99,   347,
   291,   457,   101,   297,   102,   775,  1097,   778,  1099,   671,
  1044,   674,  1046,   103,   891,   892,  1041,  1042,   104,   679,
   592,   593,   800,   119,   479,   112,   113,   106,   607,   608,
   480,   481,   482,   691,   613,   348,   806,   802,   499,   369,
   208,   228,   209,   210,   370,   918,  1058,   212,   654,   213,
   214,   215,   216,   183,   426,   371,   372,   484,   630,   373,
   335,   510,   374,   188,   375,   563,   773,   980,   221,   576,
   514,   425,   190,   577,   578,   376,   191,   192,   377,   651,
   617,   378,   224,   379,   383,   706,   742,   866,   743,   744,
   745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
   755,   756,   757,   758,   963,  1107,   759,  1062,   380,   381,
   197,   382,   294,   334,   200,   109
};

static const short yypact[] = {  1939,
-32768,   336,  5570,-32768,  6381,-32768,   592,  2889,  3255,  3255,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   420,-32768,-32768,
-32768,  2122,-32768,-32768,-32768,   148,-32768,-32768,  5154,-32768,
   109,-32768,-32768,-32768,   170,  6220,  6220,-32768,  6220,   213,
   158,-32768,   730,-32768,-32768,   592,-32768,-32768,-32768,-32768,
-32768,-32768,   336,-32768,-32768,   234,-32768,   213,-32768,-32768,
-32768,  5570,-32768,   252,-32768,  5581,-32768,   270,   289,   309,
-32768,   319,   592,   355,   391,  1018,-32768,  2482,  5581,  5581,
  5581,  5581,  5581,  5581,-32768,  5732,  5732,   392,-32768,   408,
   441,   450,   469,   453,   277,  4608,-32768,   468,   499,-32768,
   504,-32768,   758,   871,-32768,-32768,-32768,  1010,   555,   665,
   329,   738,   507,   512,   498,   501,   143,-32768,-32768,   133,
-32768,  3395,   474,   479,-32768,-32768,-32768,-32768,   560,  3029,
-32768,  4608,-32768,  3395,-32768,  3395,-32768,-32768,   573,   582,
-32768,   612,-32768,  2664,   504,   590,   477,   550,  3072,-32768,
  3255,-32768,-32768,-32768,  5977,-32768,-32768,-32768,-32768,   633,
   647,-32768,  3255,  3255,  3395,-32768,-32768,   580,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   652,   650,-32768,-32768,-32768,
   213,  4997,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   676,    68,-32768,-32768,   592,   592,   293,-32768,   148,-32768,
-32768,-32768,-32768,   683,-32768,-32768,   689,   663,    68,   109,
-32768,   364,   703,-32768,   592,-32768,    -1,  5581,-32768,-32768,
-32768,-32768,-32768,-32768,   719,  5581,  5581,  5581,  1481,   729,
-32768,-32768,-32768,   485,   681,  5846,   305,   739,   751,-32768,
-32768,-32768,-32768,-32768,-32768,   759,  5581,-32768,-32768,  5581,
   786,   820,   822,   827,   842,  5581,-32768,  4867,-32768,  4608,
-32768,-32768,-32768,-32768,   843,-32768,-32768,  4608,-32768,  4608,
-32768,-32768,-32768,  1509,  5581,-32768,-32768,    98,  5581,  5581,
  5581,  5581,  5581,  5581,  5581,  5581,  5581,  5581,  5581,  5581,
  5581,  5581,  5581,  5581,  5581,  5581,  5581,  5581,  5581,  5581,
  5581,  5581,  5581,  5581,  5581,-32768,-32768,-32768,-32768,  5581,
   768,-32768,-32768,  2300,-32768,-32768,   858,-32768,   881,-32768,
  5581,   705,   844,   878,-32768,-32768,-32768,-32768,  5977,-32768,
-32768,-32768,  2846,   899,-32768,-32768,  5581,   181,  3497,    68,
   893,-32768,    68,-32768,   342,  6381,   864,   961,   968,   981,
  1044,   981,   592,  1048,    68,-32768,    68,-32768,-32768,-32768,
   924,  1002,  1013,-32768,    68,   364,-32768,   592,  1031,-32768,
  1022,   592,   244,  1052,-32768,   427,  1059,   458,  1059,  1086,
-32768,-32768,-32768,-32768,  1685,  1060,   411,-32768,   425,  5581,
-32768,-32768,  1078,-32768,-32768,-32768,-32768,-32768,-32768,  1087,
  1083,-32768,  3497,-32768,-32768,  1099,  1088,-32768,   516,-32768,
   123,   592,   592,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1010,  1010,   555,
   555,   665,   665,   665,   665,   329,   329,   738,   507,   512,
  5581,  5581,  5581,-32768,  5743,  5763,-32768,-32768,  5341,-32768,
  3212,  3674,-32768,-32768,  1106,   588,-32768,-32768,  1107,  1105,
-32768,  1108,-32768,  4028,-32768,-32768,  3851,  4071,-32768,   893,
-32768,-32768,  1111,-32768,-32768,  1115,  1117,-32768,  1118,  1121,
-32768,   800,-32768,  1114,-32768,-32768,-32768,   234,-32768,   303,
-32768,-32768,  5581,   377,    68,-32768,-32768,  1122,-32768,-32768,
  1137,  6381,-32768,-32768,-32768,-32768,  1125,-32768,  1481,-32768,
-32768,  1119,   685,   425,  1768,  1130,-32768,-32768,-32768,  1140,
-32768,-32768,-32768,  1135,-32768,  5581,-32768,-32768,-32768,-32768,
   498,   806,   501,  5581,-32768,  5581,-32768,-32768,-32768,  4207,
  4608,  5581,-32768,  5774,  5581,-32768,-32768,-32768,-32768,-32768,
  4250,  4386,-32768,  4429,-32768,  1139,-32768,-32768,-32768,-32768,
-32768,  1145,-32768,-32768,  1147,-32768,   592,-32768,   592,  1150,
  5498,-32768,-32768,  1144,-32768,  1148,-32768,    39,-32768,-32768,
   592,   637,  4608,  1154,-32768,-32768,   114,  1153,-32768,  1171,
    96,  1181,  1178,-32768,  5581,  5774,-32768,-32768,-32768,-32768,
  1179,  1180,-32768,-32768,   660,  5581,  5581,  5581,  5581,  5581,
  5581,  5581,  5732,  5732,  1151,   725,   756,   791,   824,  1062,
   809,  1026,   914,   836,   565,  1037,  1177,  1170,  1172,  1155,
   194,  1188,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   814,
   826,-32768,-32768,  1109,-32768,-32768,-32768,  4565,-32768,-32768,
-32768,-32768,  6310,-32768,-32768,  6310,-32768,-32768,-32768,-32768,
  5581,  1066,-32768,  5498,-32768,-32768,  5498,  1126,-32768,-32768,
-32768,  1191,-32768,-32768,-32768,  1152,-32768,   148,  1193,-32768,
   353,-32768,   425,-32768,-32768,  1197,-32768,-32768,-32768,  1198,
   592,-32768,   828,  1203,  5581,-32768,-32768,  1200,   833,  1213,
   856,   857,   884,   890,   891,   933,   938,   939,  5581,  3424,
  5581,   940,   945,   190,  5581,  5581,  5581,  5581,  5581,  5581,
  5581,  5581,  5581,  5581,  5581,  5581,  5581,  5581,  5581,  5581,
  5581,  5581,  5581,  5581,  5581,  5581,  5581,  5581,  5581,  5581,
  5581,  5581,-32768,  5581,-32768,  1219,  1223,   -14,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1005,-32768,
-32768,-32768,-32768,   860,-32768,-32768,  5498,   543,-32768,   213,
  5225,-32768,  6310,  5225,  6310,-32768,-32768,-32768,  1081,-32768,
-32768,-32768,-32768,-32768,-32768,   109,    21,-32768,-32768,-32768,
  1024,-32768,-32768,   396,-32768,-32768,-32768,  5024,-32768,-32768,
   598,-32768,  1224,   893,-32768,-32768,   946,  5581,  1222,   964,
   982,   376,   592,   592,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   985,   992,   993,   956,   963,
   495,   589,   668,   699,   704,   740,   804,   862,   659,   586,
    74,   498,  5581,   501,  5774,-32768,  6108,   503,    91,-32768,
-32768,  1020,-32768,-32768,-32768,-32768,  1226,    97,-32768,-32768,
  5225,-32768,  5225,-32768,-32768,  1788,   632,-32768,  1157,  6108,
   503,    91,-32768,   478,-32768,-32768,   592,-32768,  1065,   994,
-32768,  1001,  1007,-32768,-32768,  1072,-32768,  4840,-32768,-32768,
-32768,-32768,-32768,   644,-32768,   503,   930,   113,   113,-32768,
-32768,   235,   734,  1159,-32768,   119,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   801,-32768,    68,-32768,-32768,
  1227,-32768,  1229,  1232,-32768,  1233,-32768,-32768,-32768,  1161,
-32768,  4682,   644,-32768,   734,-32768,   369,  1231,-32768,-32768,
-32768,-32768,  1237,  1009,  1014,-32768,  1166,   503,  1169,-32768,
-32768,-32768,-32768,   139,   235,   169,   592,   592,   113,  1183,
-32768,   119,   119,-32768,   290,   955,-32768,   119,-32768,-32768,
  5581,    97,  1248,-32768,-32768,-32768,  1252,-32768,  1253,-32768,
  1195,  1195,-32768,-32768,-32768,  1033,  5581,  1195,-32768,  1195,
-32768,-32768,-32768,   235,  1249,-32768,-32768,   235,-32768,   452,
   290,   404,   592,   592,   119,  1187,   955,-32768,-32768,-32768,
-32768,  5581,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1251,-32768,-32768,   290,-32768,-32768,  1192,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1279,  1281,-32768
};

static const short yypgoto[] = {-32768,
-32768,  1201,-32768,-32768,-32768,-32768,  -395,  -101,-32768,-32768,
   960,-32768,-32768,-32768,-32768,-32768,    88,-32768,   521,-32768,
  -716,-32768,-32768,-32768,  -715,   296,   220,-32768,-32768,   273,
   415,-32768,-32768,   379,-32768,-32768,  -897,  -698,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  -449,   177,   308,  -954,
   215,-32768,  -567,   472,   929,-32768,-32768,  -565,-32768,-32768,
    17,  -357,  -337,  -331,  -314,  -317,  -397,  -322,  -447,  -540,
-32768,  -551,-32768,  -112,-32768,-32768,  1046,  1025,  -604,  -295,
     1,-32768,-32768,-32768,  -463,-32768,-32768,-32768,     0,  -252,
   845,-32768,  -766,  -664,-32768,-32768,-32768,-32768,-32768,-32768,
   130,   724,-32768,   412,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   853,  -665,  -745,-32768,   218,-32768,-32768,
   638,   634,   515,     8,  -403,  1205,-32768,    65,-32768,-32768,
  -607,-32768,-32768,-32768,   628,  -293,   973,-32768,  -490,   318,
  1311,-32768,  1098,-32768,   584,-32768,-32768,-32768,-32768,   -99,
-32768,-32768,-32768,-32768,   217,  1073,  1176,-32768,-32768,  1283,
-32768,-32768,  -359,-32768,    76,   262,  -538,  -721,-32768,   812,
-32768,-32768,   902,   -83,  -306,   223,-32768,   232,    57,-32768,
-32768,   160,-32768,   214,-32768,-32768,   622,-32768,   380,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1399,-32768,
-32768,  1480,  -229,   182,   426,-32768
};


#define	YYLAST		6563


static const short yytable[] = {    95,
    92,   597,    95,   477,   309,   292,   624,   105,   511,   458,
   229,   230,   643,   332,   694,   698,   549,   231,   232,   233,
   234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   793,   572,   538,   539,   257,   258,   259,
   260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
   270,   271,   272,   273,   193,   881,   114,   540,   541,   473,
   509,   -68,   -68,   903,   284,   542,   543,   544,   545,   606,
   911,    95,    92,   189,   220,   220,   729,    88,   731,   105,
   471,   581,   550,   810,  -577,   548,   546,   547,  -577,   301,
   477,     2,   741,   641,   433,    95,   -75,   -75,   293,   437,
   894,   438,   414,   740,  1018,   314,   315,   317,  1040,   898,
   809,   323,   900,   442,  1019,   522,   293,  1120,  1121,   100,
     2,   439,   118,   987,   121,   776,  1018,   346,   729,   495,
   731,   523,  1082,   420,   356,   979,  1019,     2,   979,   638,
   419,   570,  1083,   420,   741,   350,   351,   352,   353,   354,
   355,   -68,   -68,  1111,  1076,   740,  1077,   194,   973,    88,
  1147,  -246,   982,   286,  -354,  -354,  -354,   312,  -354,  -354,
   881,   107,  1078,   417,   107,   477,   325,   988,   107,   199,
   199,   199,  1018,   295,   193,  1112,   -75,   -75,   418,   622,
   686,   803,  1019,   346,  1137,   571,   739,  1036,   628,   687,
  1139,   100,  1140,   189,    76,    77,   123,   933,    79,    80,
   511,   195,   974,   473,   184,   296,   296,   981,   296,   983,
  -245,   222,   222,   934,   863,   979,   893,   979,   193,   895,
   223,   223,   303,    76,    77,   123,   193,    79,    80,   864,
   193,   324,   193,   332,   313,   650,   737,   189,   739,  1045,
  1076,  1047,  1077,   107,   420,   189,    76,  1020,   493,   189,
   662,   189,    76,    77,   123,   327,    79,    80,  1078,   220,
   434,   193,   366,   367,   220,   447,   220,   107,    76,  1020,
   301,   458,   452,   336,    76,  1084,   732,   194,   220,   220,
   189,    95,   456,   107,   459,   461,   698,   684,   737,   455,
   803,   463,   337,   995,   107,  1122,   733,  1123,    95,   199,
   293,  1049,   734,   964,   323,   682,   470,   346,  -245,   700,
   495,   738,   338,  1124,   332,   703,   736,   199,     2,   735,
   562,   194,   339,   437,    76,  1020,   496,  1113,   732,   194,
   711,   195,   712,   194,   349,   194,  -354,  -354,  -354,  -354,
  -354,  -354,  -354,   199,  -354,   407,   408,   346,   733,     2,
   683,   199,   341,   199,   734,   199,  -245,   199,   495,   409,
   410,   477,   332,   738,   194,   199,     2,  -246,   736,   472,
   199,   735,   199,  -405,   495,   195,   420,   729,   422,   731,
   477,   685,  1003,   195,   199,   199,   199,   195,   342,   195,
   428,   497,   429,   741,   962,   360,   535,   536,   537,  -354,
   696,  -354,   820,   361,   740,   108,   222,  1018,   108,  -354,
  1143,   222,   124,   222,  -245,   223,   495,  1019,   195,   452,
   223,   444,   223,   110,   111,   222,   222,   420,  -245,    95,
   625,   616,    95,  -627,   223,   223,   362,   579,   517,   587,
   582,   590,   960,   596,    95,   363,    95,   365,    76,    77,
   123,   603,    79,    80,   323,   494,  1142,  1122,   420,  1123,
   193,   612,   618,   107,   364,   896,   107,   107,   107,  -621,
   332,   949,   950,   620,   435,  1124,   496,   420,   626,   189,
   107,   456,   492,   495,  -627,   420,   107,   108,   298,   427,
   300,     2,   332,   951,   952,  -562,   627,   739,   220,  -562,
  -625,   953,   954,   955,   956,  -622,   403,   404,    76,    77,
   123,   108,    79,    80,   916,   413,   636,   415,   961,   325,
   637,   959,   957,   958,    76,    77,   123,   326,    79,    80,
   414,   199,  -354,  -354,  -354,   416,  -354,  -354,   340,   199,
   975,   199,   452,   976,   999,   423,   624,   737,  1074,  1075,
  -458,  -354,  -354,  -354,  1090,  -354,  -354,   452,   424,    76,
  1020,   666,  1113,   194,   456,   494,   403,   404,  1009,  1010,
   798,   182,   211,   211,  -624,  -627,  -627,   680,   681,  -627,
  -627,   853,   854,   430,   323,   199,  -575,   732,   420,  -563,
  -575,  -623,   653,  -563,   413,   855,   856,   193,  1011,  1012,
   403,   404,   996,   626,   199,   997,  1114,   733,   456,  1118,
   199,   107,  1013,   734,   107,   431,   189,   195,   708,   709,
   560,   436,   738,   346,   107,   346,   107,   736,   107,   293,
   735,   440,   976,    76,    77,   123,   107,    79,    80,   107,
  -245,   293,   495,   107,  1068,   222,   441,   772,   332,   325,
     2,   445,  1114,   448,   223,   779,   989,   781,   446,  -573,
   420,   787,   788,  -573,   818,   469,   792,   512,  -565,   477,
   612,   799,  -565,   454,   199,   515,   496,   516,   419,   798,
   466,   420,   925,   107,   107,   493,   468,  1063,  -354,   696,
  -354,   411,   412,   405,   406,   346,   405,   406,  -354,  -566,
   194,   182,   435,  -566,  -567,   420,   474,   108,  -567,   493,
   460,   462,   464,   821,   822,   823,   824,   825,   826,  1024,
   485,   692,   199,   199,   108,  -530,   491,   405,   406,  -530,
   326,   293,   405,   406,  1079,   199,   801,  1050,   199,   199,
  -568,   497,  1056,   500,  -568,   182,   575,    76,    77,   123,
   887,    79,    80,   182,   195,   501,  -529,   182,  1067,   182,
  -529,   384,   502,   385,  1069,  -354,   107,   211,   405,   406,
   411,   412,   211,  1080,   211,  1129,   305,   306,   307,   915,
   799,  -354,   626,   504,   386,   387,   211,   211,   182,   555,
   556,  -531,    76,    77,   123,  -531,    79,    80,  1089,   676,
   677,   976,  1101,  1102,  -570,  1103,   420,   710,  -570,  -551,
   575,   199,   199,  -551,  -528,   760,  1152,   505,  -528,   506,
   407,   408,   199,   199,   507,   199,   420,   830,   420,   831,
   867,  -354,   923,   420,   409,   410,  1126,   927,   107,   508,
   107,   513,   946,   947,   948,   801,   564,  -354,   567,   107,
   832,   833,   107,   107,   199,   108,  -545,  -550,   108,   575,
  -545,  -550,  -571,  1008,   851,   852,  -571,   760,   594,   977,
   108,   565,   108,   389,   575,   665,   984,  1150,   407,   408,
   326,   568,   890,   609,  -549,   890,  1052,   614,  -549,   569,
  -548,  -547,   409,   410,  -548,  -547,   580,   274,   275,   276,
   277,   278,   279,   280,   281,   282,   283,   390,   391,   392,
   393,   394,   395,   396,   397,   398,   399,   871,   872,   873,
   874,   875,   876,   877,  1000,   849,   850,   639,   640,   199,
   299,   584,   302,  -546,   304,   309,   308,  -546,  -543,  -544,
  -540,   310,  -543,  -544,  -540,  -541,  -532,   665,   714,  -541,
  -532,   318,   293,   319,  1037,  1125,  -560,    95,   332,   665,
  -560,   585,   107,  -559,  -535,  1043,   586,  -559,  -535,   400,
   401,   402,   107,   799,  1138,  1059,   400,   401,   402,  -245,
   456,   582,   636,  1064,  1065,  -555,  1002,   182,   452,  -555,
   804,   601,  -556,  -557,  -553,   388,  -556,  -557,  -553,   332,
   890,  -536,   890,   890,   890,  -536,   211,  -534,   602,  -538,
   326,  -534,   180,  -538,  -539,   343,   604,    95,  -539,  1091,
  1093,   328,   611,   400,   401,   402,   139,   140,   141,   142,
   143,   144,   452,  -537,   331,   610,   799,  -537,  1057,   846,
   847,   848,   589,   145,   146,   147,   595,   331,   331,   331,
   331,   331,   331,   615,   358,   359,   868,   869,   870,   420,
   185,   217,   217,   623,   835,   897,   677,   148,  1128,   857,
   858,    95,   420,  1066,  1132,   907,   908,   909,   629,  1043,
   985,   986,   594,   619,   594,    76,  1071,   632,   631,   634,
   890,   635,   890,   794,   107,   107,   614,   108,   836,   837,
   838,   839,   840,   841,   842,   843,   844,   845,   157,   652,
   655,   656,   658,   667,   670,   672,   678,   673,  1027,   675,
  1028,   690,   688,   450,   182,   695,   760,   453,  1154,   693,
  1025,  1029,  1030,   701,  1031,  1157,  1032,  1033,   705,   107,
   344,   704,   345,   770,   774,   465,   777,   783,   467,  1034,
   789,   805,   791,  1025,   829,   107,   475,   807,   107,   478,
   868,   869,   870,   186,   218,   218,   871,   872,   873,   874,
   875,   876,   877,    76,   329,   330,   160,   808,  1073,  1025,
  1025,   811,   812,   816,   817,   859,   180,  1087,   860,   862,
   185,   861,   865,   901,   180,   905,   914,   926,   180,   107,
   180,   919,   920,   907,   908,   909,   108,   924,   432,   871,
   872,   873,   874,   875,   876,   877,   922,   928,   107,   965,
   966,   998,  1001,  1039,  1051,  1061,  1081,  1092,  1100,   180,
  1095,  1096,  1098,  1108,   185,  1104,  1110,  1025,   107,   107,
  1025,  1106,   185,  1087,  1087,  1131,   185,   869,   185,  1087,
  1119,  1133,  1134,   107,  1148,  1141,   217,  1153,  1159,  1155,
  1160,   217,   285,   217,   476,   885,  1053,  1109,  1070,   993,
   187,   219,   219,   970,   331,   217,   217,   185,  1144,  1055,
   478,   931,  1127,  1025,   107,   107,  1087,   583,   669,  1130,
   780,   598,   588,   186,   591,   917,   782,   311,   797,   498,
   227,   443,   600,  1105,   633,   561,   605,   814,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,  1007,     0,     0,     0,     0,     0,
     0,     0,   483,     0,     0,     0,     0,   186,  1004,  1005,
   486,   487,   488,   489,     0,   186,     0,     0,     0,   186,
     0,   186,     0,     0,     0,   331,     0,     0,     0,   218,
     0,   483,     0,     0,   218,     0,   218,     0,     0,     0,
     0,     0,   483,     0,     0,     0,     0,     0,   218,   218,
   186,     0,     0,   108,     0,   503,   196,   225,   225,   521,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
   187,     0,  1060,   331,     0,     0,     0,     0,   331,   520,
     0,   583,     0,     0,   524,   525,   526,   527,   528,   529,
   530,   531,   532,   533,   534,     0,     0,     0,   180,     0,
     0,     0,     0,     0,     0,   566,   478,     0,     0,     0,
     0,     0,     0,   108,   187,   554,     0,     0,     0,     0,
     0,     0,   187,     0,     0,   697,   187,     0,   187,   331,
   702,   331,   108,   645,   647,     0,   219,   198,   226,   226,
     0,   219,     0,   219,     0,     0,   185,     0,  -227,     0,
     0,     0,  1116,  1117,   328,   219,   219,   187,   762,   139,
   140,   141,   142,   143,   144,   217,     0,   108,     0,     0,
     0,     0,     0,     0,     0,     0,   145,   146,   147,     0,
     0,   331,   328,   518,     0,     0,   196,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,  1145,  1146,
   148,     0,     0,   331,   145,   146,   147,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   642,     0,   148,     0,
   196,   834,   730,     0,     0,   180,     0,     0,   196,     0,
     0,   157,   196,     0,   196,     0,     0,     0,     0,   186,
     0,     0,   225,     0,     0,     0,     0,   225,     0,   225,
     0,     0,     0,     0,     0,     0,     0,   198,   218,   157,
     0,   225,   225,   196,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   185,   730,     0,     0,     0,     0,     0,
     0,   902,     0,   489,     0,   331,   331,   331,   331,   331,
   331,   827,   828,     0,     0,     0,    76,   329,   330,   160,
     0,   198,     0,     0,     0,     0,     0,     0,   483,   198,
   483,     0,     0,   198,     0,   198,   715,     0,     0,   761,
     0,   707,     0,   226,    76,   329,   330,   160,   226,     0,
   226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   226,   226,   198,     0,   187,     0,   328,   331,
     0,   621,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,   219,   785,     0,     0,   813,
   145,   146,   147,     0,   971,   972,   186,     0,     0,     0,
   819,     0,   978,   331,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   148,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   994,     0,     0,     0,
     0,     0,     0,     0,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   328,   331,     0,   699,   157,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,   784,  1048,     0,     0,
     0,   328,     0,   145,   146,   147,   139,   140,   141,   142,
   143,   144,   196,     0,     0,     0,     0,     0,  1038,   785,
     0,     0,   785,   145,   146,   147,     0,   148,     0,     0,
     0,   225,     0,   187,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   932,   331,   148,     0,     0,
    76,   329,   330,   160,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   929,   520,     0,     0,   157,     0,
   935,   936,   937,   938,   939,   940,   941,   942,   943,   944,
   945,     0,     0,   730,  1094,     0,     0,     0,   157,     0,
     0,     0,     0,   198,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   226,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   785,     0,     0,     0,     0,     0,    -1,     1,
     0,     0,   489,    76,   329,   330,   160,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
     0,     0,  -245,    76,   329,   330,   160,     0,     0,     0,
     0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  1151,     3,     0,     0,     0,  1006,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  -354,  -354,  -354,     0,     4,
     0,     0,     0,     5,     6,     7,     0,     0,     0,   331,
     0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
     0,   785,     0,     0,     0,   331,     0,     0,     0,     0,
   198,     0,     0,     0,     0,     0,    11,    12,    13,     0,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
   331,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    76,    77,    78,     0,    79,    80,
    81,    -2,     1,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  -245,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  -354,  -354,
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
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
   125,    79,    80,    81,     0,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   137,  -484,   558,
     0,     0,     0,   138,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,  -245,  -245,     0,     3,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  -354,  -354,  -354,   148,
     4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   156,    11,    12,    13,
   157,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,   158,   559,   160,   161,
    80,    81,   125,     0,     0,     0,     0,   126,   127,   128,
     0,   129,   130,   131,   132,   133,   134,   135,   136,   137,
  -484,     0,     0,     0,     0,   138,     0,     0,     0,     0,
   139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
     0,     0,     0,  -245,  -245,     0,     0,   145,   146,   147,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  -245,  -245,
  -245,   148,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   156,  -245,
  -245,  -245,   157,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,     0,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,     0,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,    76,   158,   159,
   160,   161,    80,  -245,   201,     0,     0,     0,     0,   126,
   127,   128,     0,     0,   202,   131,   132,   133,   134,   135,
   136,   203,  -484,  -488,     0,     0,     0,   204,     0,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,     0,     0,  -245,  -245,     0,     0,   145,
   146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  -245,  -245,  -245,   148,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   150,   151,   152,   153,
   154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
   156,  -245,  -245,  -245,   157,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,     0,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,     0,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,    76,
   158,   159,   160,   205,   206,  -245,   201,     0,     0,     0,
     0,   126,   127,   128,     0,     0,   202,   131,   132,   133,
   134,   135,   136,   203,  -432,  -432,     0,     0,     0,   204,
  -432,     0,     0,     0,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     0,     0,     0,     0,  -245,  -245,   125,
     0,   145,   146,   147,   126,   127,   128,     0,   129,   130,
   131,   132,   133,   134,   135,   136,   137,  -484,     0,     0,
     0,     0,   138,     0,     0,   148,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
  -245,  -245,     0,     0,   145,   146,   147,  -432,   150,   151,
   152,   153,   154,   155,     0,     0,     0,     0,     0,     0,
     0,     0,   156,     0,     0,     0,   157,     0,   148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   149,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   156,     0,     0,     0,   157,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    76,   158,   159,   160,   205,   206,     0,     0,   125,
     0,     0,     0,     0,   126,   127,   128,     0,   129,   130,
   131,   132,   133,   134,   135,   136,   137,  -484,     0,     0,
     0,     0,   138,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,    76,   158,   159,   160,   161,    80,
  -245,  -245,   201,     0,   145,   146,   147,   126,   127,   128,
     0,     0,   202,   131,   132,   133,   134,   135,   136,   203,
  -484,  -488,     0,     0,     0,   204,     0,     0,   148,     0,
   139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
     0,     0,     0,  -245,  -245,     0,     0,   145,   146,   147,
  -459,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   156,     0,     0,     0,   157,
     0,   148,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  -428,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
     0,     0,   157,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    76,   158,   159,   160,   161,    80,
     0,     0,   125,     0,     0,     0,     0,   126,   127,   128,
     0,   129,   130,   131,   132,   133,   134,   135,   136,   137,
  -484,   648,     0,     0,     0,   138,     0,     0,     0,     0,
   139,   140,   141,   142,   143,   144,     0,    76,   158,   159,
   160,   205,   206,  -245,  -245,   201,     0,   145,   146,   147,
   126,   127,   128,     0,     0,   202,   131,   132,   133,   134,
   135,   136,   203,  -484,  -488,     0,     0,     0,   204,     0,
     0,   148,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -245,  -245,     0,     0,
   145,   146,   147,     0,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
     0,     0,   157,     0,   148,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    76,   158,   159,
   160,   161,    80,     0,     0,   125,     0,     0,     0,     0,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   137,  -484,     0,     0,     0,     0,   138,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
    76,   158,   159,   160,   205,   206,  -245,  -245,     0,     0,
   145,   146,   147,     0,     0,     0,     0,   328,   930,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,     0,   148,     0,     0,     0,     0,   145,
   146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,   148,     0,     0,     0,     0,     0,     0,
     0,   156,   126,   127,   128,   157,   129,   130,   131,   132,
   133,   134,   135,   136,   203,  -484,   573,     0,     0,     0,
   368,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,   157,     0,     0,     0,  -245,  -245,
     0,     3,   145,   146,   147,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   148,     4,     0,     0,
    76,   158,   159,   160,   161,    80,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,    76,
   329,   330,   160,   574,    11,    12,    13,   157,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,     0,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    76,   158,   559,   160,   161,    80,    81,   126,
   127,   128,     0,   129,   130,   131,   132,   133,   134,   135,
   136,   203,  -484,   649,     0,     0,     0,   368,     0,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,     0,     0,  -245,  -245,     0,     3,   145,
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
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
   158,   559,   160,   161,    80,    81,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   203,  -484,
   660,     0,     0,     0,   368,     0,     0,     0,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,  -245,  -245,     0,     3,   145,   146,   147,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   148,     4,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   661,    11,    12,
    13,   157,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,   158,   559,   160,
   161,    80,    81,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -484,   659,     0,     0,
     0,   368,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   146,   147,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   203,  -484,
   663,     0,     0,     0,   368,     0,     0,   148,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   145,   146,   147,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
   148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   664,     0,     0,
     0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    76,   158,   159,   160,   161,    80,     0,
     0,     0,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   203,  -484,   713,     0,     0,     0,
   368,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,    76,   158,   159,   160,
   161,    80,   145,   146,   147,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -484,   766,
     0,     0,     0,   368,     0,     0,   148,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   145,   146,   147,     0,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   156,     0,     0,     0,   157,     0,   148,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   156,     0,     0,     0,
   157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    76,   158,   159,   160,   161,    80,     0,     0,
     0,   126,   127,   128,     0,   129,   130,   131,   132,   133,
   134,   135,   136,   203,  -484,   767,     0,     0,     0,   368,
     0,     0,     0,     0,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     0,     0,    76,   158,   159,   160,   161,
    80,   145,   146,   147,   126,   127,   128,     0,   129,   130,
   131,   132,   133,   134,   135,   136,   203,  -484,   769,     0,
     0,     0,   368,     0,     0,   148,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   145,   146,   147,     0,   150,   151,
   152,   153,   154,   155,     0,     0,     0,     0,     0,     0,
     0,     0,   768,     0,     0,     0,   157,     0,   148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   156,     0,     0,     0,   157,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    76,   158,   159,   160,   161,    80,     0,     0,     0,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   203,  -484,   886,     0,     0,     0,   368,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,    76,   158,   159,   160,   161,    80,
   145,   146,   147,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -484,     0,     0,     0,
     0,   368,     0,     0,   148,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   146,   147,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   293,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    76,   158,   159,   160,   161,    80,     0,     0,  -354,  -354,
  -354,     0,     4,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    76,   158,   159,   160,   161,    80,    11,
    12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,   293,     0,   120,
     0,     0,     0,    81,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     3,  -484,     0,     0,     0,     0,
   368,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     4,     0,   145,   146,   147,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  -618,     0,     0,
     0,     0,     0,     0,     0,     0,   148,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
     0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,   157,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,  -111,     0,   120,     0,     0,
  -111,    81,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     3,    76,   329,   330,   160,     0,   328,  -227,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     4,     0,   145,
   146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   148,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    11,    12,    13,     0,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,   157,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,   288,     0,   120,     0,     0,     0,    81,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     3,    76,
   329,   330,   160,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  -487,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    11,    12,    13,     0,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
     0,   120,    11,    12,    13,    81,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,  -625,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     0,     0,   120,     0,     0,     0,    81,  -627,  -627,  -627,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  -627,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  -627,  -627,
  -627,     0,  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,
  -627,  -627,     0,  -627,  -627,  -627,  -627,  -627,  -627,  -627,
  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,     0,  -627,
  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,
  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,
  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,
  -627,  -627,  -627,  -627,  -627,  -627,   784,     0,     0,     0,
     0,   328,  -627,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  -245,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     2,   328,     0,     0,     0,   157,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   145,   146,   147,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    76,   329,   330,   160,    11,    12,    13,
     0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,   157,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,    77,    78,     0,    79,
    80,    81,     0,     0,     0,   357,    76,   329,   330,   160,
   139,   140,   141,   142,   143,   144,   644,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     0,     0,     0,     0,     0,     0,   646,     0,   145,   146,
   147,   139,   140,   141,   142,   143,   144,   716,     0,     0,
     0,   148,   717,   718,   719,   720,   721,   722,   145,   146,
   147,     0,   148,     0,     0,     0,     0,     0,     0,   145,
   723,   724,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   157,   725,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   157,     0,     0,  -171,  -171,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    76,   329,   330,
   160,     0,     0,     0,     0,     0,     0,     0,    76,   329,
   330,   160,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    76,   329,
   330,   160,     0,     0,     0,     0,     0,     0,     0,    76,
   726,   727,   728,    11,    12,    13,     0,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,     3,     0,   120,     0,     0,     0,    81,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
    74,    75,     3,     0,   120,     0,     0,     0,    81,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
    73,    74,    75,     0,     0,   120,  -354,  -354,  -354,    81,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
     0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,     0,     0,   120,     8,     9,
    10,    81,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
     0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,     0,     0,   120,    11,    12,
    13,    81,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,     0,     0,   120,     0,
     0,     0,    81
};

static const short yycheck[] = {     0,
     0,   465,     3,     5,   106,    89,   497,     0,   368,   303,
    11,    12,   553,   126,   619,   623,   414,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,     5,   448,   403,   404,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,     8,   764,     2,   405,   406,   322,
   366,    86,    87,   790,    75,   407,   408,   409,   410,   475,
   796,    82,    82,     8,     9,    10,   654,     0,   654,    82,
   320,   451,   415,   701,    21,   413,   411,   412,    25,   100,
     5,    34,   654,   551,   204,   106,    86,    87,    18,   209,
   776,   211,    39,   654,    24,   116,   117,   118,    22,   784,
    25,   122,   787,   223,    34,    28,    18,  1082,  1083,     0,
    34,   215,     3,   900,     5,   674,    24,   138,   706,    26,
   706,    44,    24,    21,   145,   891,    34,    34,   894,    27,
    18,   447,    34,    21,   706,   139,   140,   141,   142,   143,
   144,   176,   177,    25,    26,   706,    28,     8,   884,    82,
  1125,    24,   894,    26,   176,   177,   178,   113,   180,   181,
   879,     0,    44,    41,     3,     5,   122,   904,     7,     8,
     9,    10,    24,    24,   138,    27,   176,   177,    56,   495,
   604,   692,    34,   204,  1102,    25,   654,   974,   502,   605,
  1108,    82,  1110,   138,   176,   177,   178,    28,   180,   181,
   580,     8,   887,   476,     8,    96,    97,   893,    99,   895,
    18,     9,    10,    44,    41,   981,   775,   983,   182,   778,
     9,    10,    85,   176,   177,   178,   190,   180,   181,    56,
   194,   122,   196,   366,    21,   562,   654,   182,   706,   981,
    26,   983,    28,    82,    21,   190,   176,   177,    25,   194,
   577,   196,   176,   177,   178,    24,   180,   181,    44,   204,
   205,   225,     6,     7,   209,   286,   211,   106,   176,   177,
   291,   585,   292,    24,   176,   177,   654,   138,   223,   224,
   225,   302,   303,   122,   305,   306,   914,   603,   706,   302,
   801,    19,    24,   918,   133,    26,   654,    28,   319,   138,
    18,   986,   654,   864,   325,    23,   319,   328,    24,   625,
    26,   654,    24,    44,   447,   629,   654,   156,    34,   654,
   424,   182,    24,   443,   176,   177,   347,   179,   706,   190,
   644,   138,   646,   194,   138,   196,   176,   177,   178,    18,
   180,   181,    21,   182,    23,    37,    38,   368,   706,    34,
   600,   190,    18,   192,   706,   194,    24,   196,    26,    51,
    52,     5,   495,   706,   225,   204,    34,    24,   706,    26,
   209,   706,   211,    25,    26,   182,    21,   965,   182,   965,
     5,    25,    27,   190,   223,   224,   225,   194,    18,   196,
   194,   347,   196,   965,   862,    24,   400,   401,   402,    24,
    25,    26,   716,    16,   965,     0,   204,    24,     3,    34,
    27,   209,     7,   211,    24,   204,    26,    34,   225,   439,
   209,   225,   211,   108,   109,   223,   224,    21,    24,   450,
    26,    25,   453,    34,   223,   224,    16,   450,   383,   460,
   453,   462,   860,   464,   465,    16,   467,    15,   176,   177,
   178,   472,   180,   181,   475,   346,    25,    26,    21,    28,
   424,   482,    25,   302,    16,   781,   305,   306,   307,    22,
   603,   849,   850,   494,    18,    44,   497,    21,   499,   424,
   319,   502,    18,    26,    85,    21,   325,    82,    97,   192,
    99,    34,   625,   851,   852,    21,   500,   965,   443,    25,
    22,   853,   854,   855,   856,    22,    32,    33,   176,   177,
   178,   106,   180,   181,   182,    29,    21,    40,   861,   475,
    25,   859,   857,   858,   176,   177,   178,   122,   180,   181,
    39,   370,   176,   177,   178,    55,   180,   181,   133,   378,
    18,   380,   562,    21,   924,    92,  1057,   965,  1018,  1019,
    92,   176,   177,   178,  1038,   180,   181,   577,    19,   176,
   177,   582,   179,   424,   585,   456,    32,    33,    86,    87,
   692,     8,     9,    10,    22,   176,   177,   598,   599,   180,
   181,    37,    38,    22,   605,   424,    21,   965,    21,    21,
    25,    22,    25,    25,    29,    51,    52,   561,   116,   117,
    32,    33,    25,   624,   443,    28,  1076,   965,   629,  1079,
   449,   450,   130,   965,   453,    24,   561,   424,   639,   640,
   424,    92,   965,   644,   463,   646,   465,   965,   467,    18,
   965,    19,    21,   176,   177,   178,   475,   180,   181,   478,
    24,    18,    26,   482,    21,   443,    20,   668,   781,   605,
    34,    92,  1122,    24,   443,   676,   906,   678,    27,    21,
    21,   682,   683,    25,    25,    23,   687,   370,    21,     5,
   691,   692,    25,    18,   513,   378,   697,   380,    18,   801,
    18,    21,   815,   522,   523,    25,    18,  1001,    24,    25,
    26,    53,    54,    49,    50,   716,    49,    50,    34,    21,
   561,   138,    18,    25,    21,    21,    24,   302,    25,    25,
   305,   306,   307,   717,   718,   719,   720,   721,   722,   969,
    22,   612,   561,   562,   319,    21,    18,    49,    50,    25,
   325,    18,    49,    50,    21,   574,   692,   987,   577,   578,
    21,   697,   992,    25,    25,   182,   449,   176,   177,   178,
   771,   180,   181,   190,   561,    25,    21,   194,  1008,   196,
    25,    24,    24,    26,  1014,    28,   605,   204,    49,    50,
    53,    54,   209,  1023,   211,  1091,    67,    68,    69,   800,
   801,    44,   803,    18,    47,    48,   223,   224,   225,    42,
    43,    21,   176,   177,   178,    25,   180,   181,    18,    20,
    21,    21,  1052,  1053,    21,  1055,    21,    22,    25,    21,
   513,   650,   651,    25,    21,   654,  1132,    18,    25,    18,
    37,    38,   661,   662,    18,   664,    21,    24,    21,    26,
    25,    28,    25,    21,    51,    52,  1086,    25,   677,    18,
   679,    19,   846,   847,   848,   801,     9,    44,    25,   688,
    47,    48,   691,   692,   693,   450,    21,    21,   453,   562,
    25,    25,    21,   967,    49,    50,    25,   706,   463,   890,
   465,    11,   467,    23,   577,   578,   897,  1127,    37,    38,
   475,    24,   773,   478,    21,   776,   990,   482,    25,    11,
    21,    21,    51,    52,    25,    25,    24,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    78,    79,    80,
    81,    82,    83,    84,   928,    32,    33,   522,   523,   768,
    98,    88,   100,    21,   102,  1057,   104,    25,    21,    21,
    21,   109,    25,    25,    25,    21,    21,   650,   651,    25,
    25,   119,    18,   121,   975,    21,    21,   978,  1091,   662,
    25,    21,   801,    21,    21,   978,    19,    25,    25,    34,
    35,    36,   811,   994,  1107,   996,    34,    35,    36,    19,
  1001,   994,    21,  1004,  1005,    21,    25,   424,  1008,    25,
   693,    88,    21,    21,    21,   163,    25,    25,    25,  1132,
   891,    21,   893,   894,   895,    25,   443,    21,    27,    21,
   605,    25,     8,    25,    21,    18,    24,  1038,    25,  1040,
  1041,    24,    21,    34,    35,    36,    29,    30,    31,    32,
    33,    34,  1052,    21,   126,    25,  1057,    25,   994,    34,
    35,    36,    19,    46,    47,    48,    19,   139,   140,   141,
   142,   143,   144,    22,   146,   147,    72,    73,    74,    21,
     8,     9,    10,    24,    23,    20,    21,    70,  1089,    53,
    54,  1092,    21,    22,  1095,    72,    73,    74,    21,  1092,
    20,    21,   677,    18,   679,   176,   177,    25,    22,    11,
   981,    24,   983,   688,   933,   934,   691,   692,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,   111,    24,
    24,    27,    25,    23,    20,    19,    23,    20,   119,    19,
   121,     5,    21,   291,   561,    27,   965,   295,  1149,    25,
   969,   132,   133,    24,   135,  1156,   137,   138,    24,   978,
   136,    22,   138,    25,    20,   313,    20,    18,   316,   150,
    27,    18,    25,   992,    24,   994,   324,    25,   997,   327,
    72,    73,    74,     8,     9,    10,    78,    79,    80,    81,
    82,    83,    84,   176,   177,   178,   179,    27,  1017,  1018,
  1019,    21,    25,    25,    25,    29,   182,  1026,    39,    55,
   138,    40,    25,    88,   190,    25,    24,    18,   194,  1038,
   196,    25,    25,    72,    73,    74,   801,    25,   204,    78,
    79,    80,    81,    82,    83,    84,   811,    25,  1057,    21,
    18,    18,    21,    18,    88,   181,    88,    21,    88,   225,
    22,    20,    20,    88,   182,    25,    88,  1076,  1077,  1078,
  1079,    25,   190,  1082,  1083,    18,   194,    73,   196,  1088,
    88,    20,    20,  1092,    88,    27,   204,    27,     0,    88,
     0,   209,    82,   211,   325,   765,   991,  1068,  1016,   911,
     8,     9,    10,   879,   366,   223,   224,   225,  1122,   992,
   448,   830,  1088,  1122,  1123,  1124,  1125,   455,   585,  1092,
   677,   467,   460,   138,   462,   801,   679,   113,   691,   347,
    10,   224,   470,  1062,   513,   424,   474,   706,   400,   401,
   402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
   412,   413,   414,   415,   965,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   328,    -1,    -1,    -1,    -1,   182,   933,   934,
   336,   337,   338,   339,    -1,   190,    -1,    -1,    -1,   194,
    -1,   196,    -1,    -1,    -1,   447,    -1,    -1,    -1,   204,
    -1,   357,    -1,    -1,   209,    -1,   211,    -1,    -1,    -1,
    -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,   223,   224,
   225,    -1,    -1,   978,    -1,   360,     8,     9,    10,   385,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   994,
   138,    -1,   997,   495,    -1,    -1,    -1,    -1,   500,   384,
    -1,   579,    -1,    -1,   389,   390,   391,   392,   393,   394,
   395,   396,   397,   398,   399,    -1,    -1,    -1,   424,    -1,
    -1,    -1,    -1,    -1,    -1,   431,   604,    -1,    -1,    -1,
    -1,    -1,    -1,  1038,   182,   420,    -1,    -1,    -1,    -1,
    -1,    -1,   190,    -1,    -1,   623,   194,    -1,   196,   551,
   628,   553,  1057,   555,   556,    -1,   204,     8,     9,    10,
    -1,   209,    -1,   211,    -1,    -1,   424,    -1,    18,    -1,
    -1,    -1,  1077,  1078,    24,   223,   224,   225,   656,    29,
    30,    31,    32,    33,    34,   443,    -1,  1092,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
    -1,   603,    24,    25,    -1,    -1,   138,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    -1,  1123,  1124,
    70,    -1,    -1,   625,    46,    47,    48,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   552,    -1,    70,    -1,
   182,   729,   654,    -1,    -1,   561,    -1,    -1,   190,    -1,
    -1,   111,   194,    -1,   196,    -1,    -1,    -1,    -1,   424,
    -1,    -1,   204,    -1,    -1,    -1,    -1,   209,    -1,   211,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   443,   111,
    -1,   223,   224,   225,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   561,   706,    -1,    -1,    -1,    -1,    -1,
    -1,   789,    -1,   619,    -1,   717,   718,   719,   720,   721,
   722,   723,   724,    -1,    -1,    -1,   176,   177,   178,   179,
    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,   644,   190,
   646,    -1,    -1,   194,    -1,   196,   652,    -1,    -1,   655,
    -1,   636,    -1,   204,   176,   177,   178,   179,   209,    -1,
   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   223,   224,   225,    -1,   424,    -1,    24,   781,
    -1,    27,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,   443,   681,    -1,    -1,   705,
    46,    47,    48,    -1,   882,   883,   561,    -1,    -1,    -1,
   716,    -1,   890,   815,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   914,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   846,   847,   848,   849,   850,   851,
   852,   853,   854,   855,   856,   857,   858,   859,   860,   861,
   862,    24,   864,    -1,    27,   111,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    19,    20,    -1,    -1,
    -1,    24,    -1,    46,    47,    48,    29,    30,    31,    32,
    33,    34,   424,    -1,    -1,    -1,    -1,    -1,   976,   784,
    -1,    -1,   787,    46,    47,    48,    -1,    70,    -1,    -1,
    -1,   443,    -1,   561,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   831,   928,    70,    -1,    -1,
   176,   177,   178,   179,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   829,   830,    -1,    -1,   111,    -1,
   835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
   845,    -1,    -1,   965,  1042,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   443,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   887,    -1,    -1,    -1,    -1,    -1,     0,     1,
    -1,    -1,   918,   176,   177,   178,   179,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   561,
    -1,    -1,    24,   176,   177,   178,   179,    -1,    -1,    -1,
    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1130,    45,    -1,    -1,    -1,   963,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    71,
    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,  1091,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
    -1,   986,    -1,    -1,    -1,  1107,    -1,    -1,    -1,    -1,
   561,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
  1132,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,   176,   177,   178,    -1,   180,   181,
   182,     0,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
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
   169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     1,   180,   181,   182,    -1,     6,     7,     8,    -1,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    42,    43,    -1,    45,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
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
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,     1,    -1,    -1,    -1,    -1,     6,     7,     8,
    -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    47,    48,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,
   109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,   180,   181,   182,     1,    -1,    -1,    -1,    -1,     6,
     7,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
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
   177,   178,   179,   180,   181,   182,     1,    -1,    -1,    -1,
    -1,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
    25,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,     1,
    -1,    46,    47,    48,     6,     7,     8,    -1,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
    -1,    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    42,    43,    -1,    -1,    46,    47,    48,    92,    93,    94,
    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    92,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   176,   177,   178,   179,   180,   181,    -1,    -1,     1,
    -1,    -1,    -1,    -1,     6,     7,     8,    -1,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    -1,   176,   177,   178,   179,   180,   181,
    42,    43,     1,    -1,    46,    47,    48,     6,     7,     8,
    -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    47,    48,
    92,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,
    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    92,    93,    94,    95,    96,    97,    98,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   176,   177,   178,   179,   180,   181,
    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,     7,     8,
    -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
    29,    30,    31,    32,    33,    34,    -1,   176,   177,   178,
   179,   180,   181,    42,    43,     1,    -1,    46,    47,    48,
     6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    70,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
    46,    47,    48,    -1,    93,    94,    95,    96,    97,    98,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
    -1,    -1,   111,    -1,    70,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,   178,
   179,   180,   181,    -1,    -1,     1,    -1,    -1,    -1,    -1,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
   176,   177,   178,   179,   180,   181,    42,    43,    -1,    -1,
    46,    47,    48,    -1,    -1,    -1,    -1,    24,    25,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    46,
    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
    96,    97,    98,    70,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,     6,     7,     8,   111,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,   111,    -1,    -1,    -1,    42,    43,
    -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,
   176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,   176,
   177,   178,   179,   107,   108,   109,   110,   111,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,     6,
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
   177,   178,   179,   180,   181,   182,     6,     7,     8,    -1,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    42,    43,    -1,    45,    46,    47,    48,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   182,     6,     7,     8,    -1,    10,    11,    12,
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
    -1,    -1,    -1,   176,   177,   178,   179,   180,   181,    -1,
    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,   176,   177,   178,   179,
   180,   181,    46,    47,    48,     6,     7,     8,    -1,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    93,
    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    70,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   176,   177,   178,   179,   180,   181,    -1,    -1,
    -1,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,   176,   177,   178,   179,   180,
   181,    46,    47,    48,     6,     7,     8,    -1,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
    -1,    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    93,    94,
    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   176,   177,   178,   179,   180,   181,    -1,    -1,    -1,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,   176,   177,   178,   179,   180,   181,
    46,    47,    48,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   176,   177,   178,   179,   180,   181,    -1,    -1,    67,    68,
    69,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   176,   177,   178,   179,   180,   181,   108,
   109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,    18,    -1,   178,
    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    45,    19,    -1,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    71,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,
    -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,   111,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,    19,    -1,   178,    -1,    -1,
    24,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    45,   176,   177,   178,   179,    -1,    24,    25,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    46,
    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,   111,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,    19,    -1,   178,    -1,    -1,    -1,   182,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,   176,
   177,   178,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
    -1,   178,   108,   109,   110,   182,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    22,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    -1,    -1,   178,    -1,    -1,    -1,   182,    67,    68,    69,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    19,    -1,    -1,    -1,
    -1,    24,   182,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    34,    24,    -1,    -1,    -1,   111,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   176,   177,   178,   179,   108,   109,   110,
    -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,   111,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,   176,   177,   178,    -1,   180,
   181,   182,    -1,    -1,    -1,    24,   176,   177,   178,   179,
    29,    30,    31,    32,    33,    34,    24,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    46,    47,    48,
    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    46,    47,
    48,    29,    30,    31,    32,    33,    34,    24,    -1,    -1,
    -1,    70,    29,    30,    31,    32,    33,    34,    46,    47,
    48,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    46,
    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   111,    70,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   111,    -1,    -1,    42,    43,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,   178,
   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,
   178,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,
   178,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
   177,   178,   179,   108,   109,   110,    -1,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    45,    -1,   178,    -1,    -1,    -1,   182,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
   174,   175,    45,    -1,   178,    -1,    -1,    -1,   182,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
   173,   174,   175,    -1,    -1,   178,    67,    68,    69,   182,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,
    -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,    -1,    -1,   178,    89,    90,
    91,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,
    -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,    -1,    -1,   178,   108,   109,
   110,   182,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    -1,    -1,   178,    -1,
    -1,    -1,   182
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
#line 242 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 6:
#line 243 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 7:
#line 244 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 8:
#line 245 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 9:
#line 246 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 10:
#line 247 "cgrammar.y"
{ uentry_checkDecl (); exprNode_free (yyvsp[0].expr); ;
    break;}
case 11:
#line 248 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 12:
#line 252 "cgrammar.y"
{ checkConstant (yyvsp[-6].qtyp, yyvsp[-4].ntyp); ;
    break;}
case 13:
#line 254 "cgrammar.y"
{ checkValueConstant (yyvsp[-9].qtyp, yyvsp[-7].ntyp, yyvsp[-3].expr) ; ;
    break;}
case 14:
#line 257 "cgrammar.y"
{ context_enterFunctionDecl (); ;
    break;}
case 15:
#line 258 "cgrammar.y"
{ declareStaticFunction (yyvsp[-2].ntyp); context_quietExitFunction (); 
     context_exitFunctionDecl (); ;
    break;}
case 16:
#line 263 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 17:
#line 269 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 19:
#line 274 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 20:
#line 277 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 21:
#line 279 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 22:
#line 281 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 23:
#line 283 "cgrammar.y"
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
case 24:
#line 299 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 25:
#line 302 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 26:
#line 310 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 27:
#line 313 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 28:
#line 319 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 29:
#line 321 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 30:
#line 323 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 31:
#line 325 "cgrammar.y"
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
#line 341 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 33:
#line 344 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 34:
#line 352 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 35:
#line 355 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 36:
#line 362 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); ;
    break;}
case 37:
#line 363 "cgrammar.y"
{ clearCurrentParams (); ;
    break;}
case 38:
#line 364 "cgrammar.y"
{ declareCIter (yyvsp[-8].cname, yyvsp[-6].entrylist); ;
    break;}
case 39:
#line 367 "cgrammar.y"
{ exprNode_checkMacroBody (yyvsp[-1].expr); ;
    break;}
case 40:
#line 368 "cgrammar.y"
{ exprNode_checkIterBody (yyvsp[-1].expr); ;
    break;}
case 41:
#line 369 "cgrammar.y"
{ exprNode_checkIterEnd (yyvsp[-1].expr); ;
    break;}
case 42:
#line 370 "cgrammar.y"
{ exprChecks_checkEmptyMacroBody (); ;
    break;}
case 43:
#line 373 "cgrammar.y"
{ declareFunction (yyvsp[0].ntyp); ;
    break;}
case 44:
#line 376 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 45:
#line 377 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 46:
#line 380 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 47:
#line 381 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 54:
#line 396 "cgrammar.y"
{ ; ;
    break;}
case 55:
#line 397 "cgrammar.y"
{ ; ;
    break;}
case 56:
#line 400 "cgrammar.y"
{ globListAdd (yyvsp[0].sr, yyvsp[-1].tquallist); ;
    break;}
case 57:
#line 403 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); ;
    break;}
case 58:
#line 404 "cgrammar.y"
{ yyval.sr = globListUnrecognized (yyvsp[0].cname); ;
    break;}
case 59:
#line 407 "cgrammar.y"
{ yyval.typequal = qual_createUndef (); ;
    break;}
case 60:
#line 408 "cgrammar.y"
{ yyval.typequal = qual_createKilled (); ;
    break;}
case 61:
#line 409 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 62:
#line 410 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 63:
#line 411 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 64:
#line 414 "cgrammar.y"
{ yyval.tquallist = qualList_undefined; ;
    break;}
case 65:
#line 415 "cgrammar.y"
{ yyval.tquallist = qualList_add (yyvsp[0].tquallist, yyvsp[-1].typequal); ;
    break;}
case 66:
#line 418 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 67:
#line 420 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 68:
#line 421 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 69:
#line 423 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 70:
#line 425 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 73:
#line 432 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 74:
#line 434 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 75:
#line 435 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 76:
#line 437 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 77:
#line 439 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 82:
#line 451 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 83:
#line 456 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 84:
#line 464 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 85:
#line 469 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 95:
#line 493 "cgrammar.y"
{ yyval.sck = SP_ISONLY; ;
    break;}
case 96:
#line 494 "cgrammar.y"
{ yyval.sck = SP_ISOBSERVER; ;
    break;}
case 97:
#line 495 "cgrammar.y"
{ yyval.sck = SP_ISEXPOSED; ;
    break;}
case 98:
#line 496 "cgrammar.y"
{ yyval.sck = SP_ISDEPENDENT; ;
    break;}
case 99:
#line 497 "cgrammar.y"
{ yyval.sck = SP_ISOWNED; ;
    break;}
case 100:
#line 498 "cgrammar.y"
{ yyval.sck = SP_ISSHARED; ;
    break;}
case 101:
#line 499 "cgrammar.y"
{ yyval.sck = SP_ISNULL; ;
    break;}
case 102:
#line 500 "cgrammar.y"
{ yyval.sck = SP_ISNOTNULL; ;
    break;}
case 103:
#line 504 "cgrammar.y"
{
     context_setProtectVars (); 
     enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 104:
#line 510 "cgrammar.y"
{ 
     setFunctionSpecialClause (yyvsp[-6].tok, yyvsp[-3].srset, yyvsp[-1].tok); 
     exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 105:
#line 517 "cgrammar.y"
{
      context_setProtectVars (); 
      enterParamsTemp (); 
      sRef_setGlobalScopeSafe (); 
    ;
    break;}
case 106:
#line 523 "cgrammar.y"
{ 
      setFunctionStateSpecialClause (yyvsp[-7].tok, yyvsp[-5].sck, yyvsp[-3].srset, yyvsp[-1].tok); 
      exitParamsTemp ();
      sRef_clearGlobalScopeSafe (); 
      context_releaseVars ();
    ;
    break;}
case 107:
#line 532 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 108:
#line 538 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 109:
#line 541 "cgrammar.y"
{ checkDoneParams (); context_enterInnerContext (); ;
    break;}
case 110:
#line 543 "cgrammar.y"
{  
     exprNode_checkFunctionBody (yyvsp[0].expr); yyval.expr = yyvsp[0].expr; 
     context_exitInner (yyvsp[0].expr); 
   ;
    break;}
case 111:
#line 548 "cgrammar.y"
{ doneParams (); context_enterInnerContext (); ;
    break;}
case 112:
#line 550 "cgrammar.y"
{
     context_exitInner (yyvsp[0].expr);
     exprNode_checkFunctionBody (yyvsp[0].expr); 
     yyval.expr = yyvsp[0].expr; /* old style */ 
   ;
    break;}
case 113:
#line 558 "cgrammar.y"
{ 
     context_setFunctionDefined (exprNode_loc (yyvsp[0].expr)); 
     exprNode_checkFunction (context_getHeader (), yyvsp[0].expr); 
     context_exitFunction ();
   ;
    break;}
case 114:
#line 565 "cgrammar.y"
{ yyval.srset = yyvsp[-2].srset; ;
    break;}
case 115:
#line 566 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 116:
#line 569 "cgrammar.y"
{ yyval.srset = yyvsp[-1].srset; ;
    break;}
case 117:
#line 570 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 118:
#line 573 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); checkModifiesId (yyvsp[0].entry); ;
    break;}
case 119:
#line 574 "cgrammar.y"
{ yyval.sr = fixModifiesId (yyvsp[0].cname); ;
    break;}
case 120:
#line 575 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-2].sr, sRef_undefined); ;
    break;}
case 121:
#line 576 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-3].sr, yyvsp[-1].sr); ;
    break;}
case 122:
#line 577 "cgrammar.y"
{ yyval.sr = modListPointer (yyvsp[0].sr); ;
    break;}
case 123:
#line 578 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 124:
#line 579 "cgrammar.y"
{ yyval.sr = modListFieldAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 125:
#line 580 "cgrammar.y"
{ yyval.sr = modListArrowAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 126:
#line 584 "cgrammar.y"
{ yyval.sr = yyvsp[0].sr; ;
    break;}
case 127:
#line 585 "cgrammar.y"
{ yyval.sr = sRef_makeUnknown (); /* sRef_makeConstant ($1); ? */ ;
    break;}
case 128:
#line 589 "cgrammar.y"
{ yyval.srset = sRefSet_single (yyvsp[0].sr); ;
    break;}
case 129:
#line 590 "cgrammar.y"
{ yyval.srset = sRefSet_insert (yyvsp[-2].srset, yyvsp[0].sr); ;
    break;}
case 130:
#line 594 "cgrammar.y"
{ yyval.sr = checkSpecClausesId (yyvsp[0].entry); ;
    break;}
case 131:
#line 596 "cgrammar.y"
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 132:
#line 597 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 133:
#line 598 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-3].sr); ;
    break;}
case 134:
#line 599 "cgrammar.y"
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 135:
#line 600 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 136:
#line 601 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 137:
#line 603 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 138:
#line 608 "cgrammar.y"
{ if (sRef_isValid (yyvsp[0].sr)) { yyval.srset = sRefSet_single (yyvsp[0].sr); } 
      else { yyval.srset = sRefSet_undefined; } 
    ;
    break;}
case 139:
#line 612 "cgrammar.y"
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
#line 623 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (yyvsp[0].entry); ;
    break;}
case 141:
#line 624 "cgrammar.y"
{ yyval.expr = exprNode_fromUIO (yyvsp[0].cname); ;
    break;}
case 142:
#line 625 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 143:
#line 626 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 144:
#line 627 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (coerceId (yyvsp[0].cname)); ;
    break;}
case 145:
#line 628 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 147:
#line 632 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 148:
#line 633 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 149:
#line 634 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 150:
#line 635 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 151:
#line 636 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 152:
#line 637 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 153:
#line 638 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 154:
#line 639 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 155:
#line 642 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 156:
#line 643 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 158:
#line 647 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 159:
#line 648 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 160:
#line 649 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 161:
#line 650 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 162:
#line 651 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 163:
#line 652 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 164:
#line 653 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 165:
#line 654 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 166:
#line 655 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 167:
#line 656 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 168:
#line 659 "cgrammar.y"
{ yyval.cstringlist = cstringList_add (yyvsp[-2].cstringlist, yyvsp[0].cname); ;
    break;}
case 169:
#line 660 "cgrammar.y"
{ yyval.cstringlist = cstringList_single (yyvsp[0].cname); ;
    break;}
case 170:
#line 664 "cgrammar.y"
{ yyval.expr = exprNode_offsetof (yyvsp[-5].qtyp, yyvsp[-2].cstringlist); ;
    break;}
case 171:
#line 667 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 172:
#line 668 "cgrammar.y"
{ context_sizeofReleaseVars (); yyval.expr = yyvsp[0].expr; ;
    break;}
case 173:
#line 671 "cgrammar.y"
{ yyval.expr = exprNode_sizeofType (yyvsp[-1].qtyp); ;
    break;}
case 174:
#line 672 "cgrammar.y"
{ yyval.expr = exprNode_sizeofExpr (yyvsp[0].expr); ;
    break;}
case 175:
#line 673 "cgrammar.y"
{ yyval.expr = exprNode_alignofType (yyvsp[-1].qtyp); ;
    break;}
case 176:
#line 674 "cgrammar.y"
{ yyval.expr = exprNode_alignofExpr (yyvsp[0].expr); ;
    break;}
case 178:
#line 679 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 180:
#line 683 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 181:
#line 684 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 182:
#line 685 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 184:
#line 689 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 185:
#line 690 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 187:
#line 694 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 188:
#line 695 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 190:
#line 699 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 191:
#line 700 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 192:
#line 701 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 193:
#line 702 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 195:
#line 706 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 196:
#line 707 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 198:
#line 711 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 200:
#line 715 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 202:
#line 720 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 204:
#line 725 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); 
     context_enterAndClause (yyvsp[-1].expr); 
   ;
    break;}
case 205:
#line 729 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitAndClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 207:
#line 737 "cgrammar.y"
{ 
     exprNode_produceGuards (yyvsp[-1].expr);
     context_enterOrClause (yyvsp[-1].expr); 
   ;
    break;}
case 208:
#line 742 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitOrClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 210:
#line 749 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 211:
#line 750 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 212:
#line 751 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); context_exitClause (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 214:
#line 755 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 215:
#line 756 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 216:
#line 757 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 217:
#line 758 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 218:
#line 759 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 219:
#line 760 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 220:
#line 761 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 221:
#line 762 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 222:
#line 763 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 223:
#line 764 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 224:
#line 765 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 226:
#line 769 "cgrammar.y"
{ yyval.expr = exprNode_comma (yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 227:
#line 772 "cgrammar.y"
{ yyval.expr = exprNode_undefined; ;
    break;}
case 230:
#line 781 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 231:
#line 782 "cgrammar.y"
{ doVaDcl (); yyval.expr = exprNode_makeError (); ;
    break;}
case 232:
#line 783 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 233:
#line 786 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 234:
#line 800 "cgrammar.y"
{
               setProcessingVars (yyvsp[-3].qtyp); 
     processNamedDecl (yyvsp[-1].ntyp); ;
    break;}
case 235:
#line 803 "cgrammar.y"
{ unsetProcessingVars (); yyval.expr = yyvsp[-2].expr; ;
    break;}
case 236:
#line 805 "cgrammar.y"
{ setProcessingVars (yyvsp[-4].qtyp); processNamedDecl (yyvsp[-2].ntyp); 
        ;
    break;}
case 237:
#line 808 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-2].expr, exprNode_makeInitialization (yyvsp[-8].ntyp, yyvsp[-3].expr)); 
     unsetProcessingVars ();
   ;
    break;}
case 238:
#line 812 "cgrammar.y"
{ processNamedDecl (yyvsp[-1].ntyp); yyval.expr = exprNode_makeError (); ;
    break;}
case 239:
#line 813 "cgrammar.y"
{ processNamedDecl (yyvsp[-2].ntyp); ;
    break;}
case 240:
#line 814 "cgrammar.y"
{ yyval.expr = exprNode_makeInitialization (yyvsp[-5].ntyp, yyvsp[0].expr); ;
    break;}
case 241:
#line 818 "cgrammar.y"
{ setProcessingTypedef (yyvsp[0].qtyp); ;
    break;}
case 242:
#line 819 "cgrammar.y"
{ unsetProcessingTypedef (); ;
    break;}
case 243:
#line 820 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 244:
#line 821 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 245:
#line 824 "cgrammar.y"
{ g_expectingTypeName = TRUE; ;
    break;}
case 246:
#line 827 "cgrammar.y"
{ g_expectingTypeName = TRUE; context_pushLoc (); ;
    break;}
case 247:
#line 830 "cgrammar.y"
{ ; ;
    break;}
case 248:
#line 833 "cgrammar.y"
{ ; ;
    break;}
case 249:
#line 834 "cgrammar.y"
{ ; ;
    break;}
case 250:
#line 837 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 251:
#line 838 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 252:
#line 841 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 253:
#line 842 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-2].tok, yyvsp[-1].alist); ;
    break;}
case 254:
#line 843 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-3].tok, yyvsp[-2].alist); ;
    break;}
case 255:
#line 848 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 256:
#line 850 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 257:
#line 858 "cgrammar.y"
{ setStorageClass (SCEXTERN); yyval.typequal = qual_createExtern (); ;
    break;}
case 258:
#line 859 "cgrammar.y"
{ yyval.typequal = qual_createInline (); ;
    break;}
case 259:
#line 860 "cgrammar.y"
{ setStorageClass (SCSTATIC); yyval.typequal = qual_createStatic (); ;
    break;}
case 260:
#line 861 "cgrammar.y"
{ yyval.typequal = qual_createAuto (); ;
    break;}
case 261:
#line 862 "cgrammar.y"
{ yyval.typequal = qual_createRegister (); ;
    break;}
case 262:
#line 865 "cgrammar.y"
{ yyval.typequal = qual_createConst (); ;
    break;}
case 263:
#line 866 "cgrammar.y"
{ yyval.typequal = qual_createVolatile (); ;
    break;}
case 264:
#line 867 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 265:
#line 868 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 266:
#line 869 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 267:
#line 870 "cgrammar.y"
{ yyval.typequal = qual_createSpecial (); ;
    break;}
case 268:
#line 871 "cgrammar.y"
{ yyval.typequal = qual_createOwned (); ;
    break;}
case 269:
#line 872 "cgrammar.y"
{ yyval.typequal = qual_createDependent (); ;
    break;}
case 270:
#line 873 "cgrammar.y"
{ yyval.typequal = qual_createYield (); ;
    break;}
case 271:
#line 874 "cgrammar.y"
{ yyval.typequal = qual_createTemp (); ;
    break;}
case 272:
#line 875 "cgrammar.y"
{ yyval.typequal = qual_createOnly (); ;
    break;}
case 273:
#line 876 "cgrammar.y"
{ yyval.typequal = qual_createKeep (); ;
    break;}
case 274:
#line 877 "cgrammar.y"
{ yyval.typequal = qual_createKept (); ;
    break;}
case 275:
#line 878 "cgrammar.y"
{ yyval.typequal = qual_createShared (); ;
    break;}
case 276:
#line 879 "cgrammar.y"
{ yyval.typequal = qual_createUnique (); ;
    break;}
case 277:
#line 880 "cgrammar.y"
{ yyval.typequal = qual_createExits (); ;
    break;}
case 278:
#line 881 "cgrammar.y"
{ yyval.typequal = qual_createMayExit (); ;
    break;}
case 279:
#line 882 "cgrammar.y"
{ yyval.typequal = qual_createTrueExit (); ;
    break;}
case 280:
#line 883 "cgrammar.y"
{ yyval.typequal = qual_createFalseExit (); ;
    break;}
case 281:
#line 884 "cgrammar.y"
{ yyval.typequal = qual_createNeverExit (); ;
    break;}
case 282:
#line 885 "cgrammar.y"
{ yyval.typequal = qual_createNull (); ;
    break;}
case 283:
#line 886 "cgrammar.y"
{ yyval.typequal = qual_createRelNull (); ;
    break;}
case 284:
#line 887 "cgrammar.y"
{ yyval.typequal = qual_createReturned (); ;
    break;}
case 285:
#line 888 "cgrammar.y"
{ yyval.typequal = qual_createExposed (); ;
    break;}
case 286:
#line 889 "cgrammar.y"
{ yyval.typequal = qual_createObserver (); ;
    break;}
case 287:
#line 890 "cgrammar.y"
{ yyval.typequal = qual_createChecked (); ;
    break;}
case 288:
#line 891 "cgrammar.y"
{ yyval.typequal = qual_createCheckMod (); ;
    break;}
case 289:
#line 892 "cgrammar.y"
{ yyval.typequal = qual_createUnchecked (); ;
    break;}
case 290:
#line 893 "cgrammar.y"
{ yyval.typequal = qual_createCheckedStrict (); ;
    break;}
case 291:
#line 894 "cgrammar.y"
{ yyval.typequal = qual_createTrueNull (); ;
    break;}
case 292:
#line 895 "cgrammar.y"
{ yyval.typequal = qual_createFalseNull (); ;
    break;}
case 293:
#line 896 "cgrammar.y"
{ yyval.typequal = qual_createUnused (); ;
    break;}
case 294:
#line 897 "cgrammar.y"
{ yyval.typequal = qual_createExternal (); ;
    break;}
case 295:
#line 898 "cgrammar.y"
{ yyval.typequal = qual_createSef (); ;
    break;}
case 296:
#line 899 "cgrammar.y"
{ yyval.typequal = qual_createAbstract (); ;
    break;}
case 297:
#line 900 "cgrammar.y"
{ yyval.typequal = qual_createConcrete (); ;
    break;}
case 298:
#line 901 "cgrammar.y"
{ yyval.typequal = qual_createMutable (); ;
    break;}
case 299:
#line 902 "cgrammar.y"
{ yyval.typequal = qual_createImmutable (); ;
    break;}
case 300:
#line 903 "cgrammar.y"
{ yyval.typequal = qual_createNotNull (); ;
    break;}
case 301:
#line 904 "cgrammar.y"
{ yyval.typequal = qual_createRefCounted (); ;
    break;}
case 302:
#line 905 "cgrammar.y"
{ yyval.typequal = qual_createRefs (); ;
    break;}
case 303:
#line 906 "cgrammar.y"
{ yyval.typequal = qual_createKillRef (); ;
    break;}
case 304:
#line 907 "cgrammar.y"
{ yyval.typequal = qual_createRelDef (); ;
    break;}
case 305:
#line 908 "cgrammar.y"
{ yyval.typequal = qual_createNewRef (); ;
    break;}
case 306:
#line 909 "cgrammar.y"
{ yyval.typequal = qual_createTempRef (); ;
    break;}
case 307:
#line 910 "cgrammar.y"
{ yyval.typequal = qual_createNullTerminated (); ;
    break;}
case 308:
#line 913 "cgrammar.y"
{ yyval.typequal = qual_createShort (); ;
    break;}
case 309:
#line 914 "cgrammar.y"
{ yyval.typequal = qual_createLong (); ;
    break;}
case 310:
#line 915 "cgrammar.y"
{ yyval.typequal = qual_createSigned (); ;
    break;}
case 311:
#line 916 "cgrammar.y"
{ yyval.typequal = qual_createUnsigned (); ;
    break;}
case 318:
#line 925 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 319:
#line 926 "cgrammar.y"
{ yyval.ctyp = ctype_anyintegral; ;
    break;}
case 320:
#line 927 "cgrammar.y"
{ yyval.ctyp = ctype_unsignedintegral; ;
    break;}
case 321:
#line 928 "cgrammar.y"
{ yyval.ctyp = ctype_signedintegral; ;
    break;}
case 325:
#line 932 "cgrammar.y"
{ yyval.ctyp = ctype_fromQual (yyvsp[-1].typequal); ;
    break;}
case 326:
#line 936 "cgrammar.y"
{ yyval.qtyp = qtype_resolve (yyvsp[-1].qtyp); ;
    break;}
case 327:
#line 939 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 328:
#line 941 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-3].qtyp, yyvsp[-1].qtyp); ;
    break;}
case 330:
#line 946 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-2].qtyp, yyvsp[0].qtyp); ;
    break;}
case 331:
#line 949 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 332:
#line 950 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 333:
#line 951 "cgrammar.y"
{ yyval.qtyp = qtype_combine (yyvsp[0].qtyp, yyvsp[-1].ctyp); ;
    break;}
case 334:
#line 954 "cgrammar.y"
{ yyval.qtyp = qtype_unknown (); ;
    break;}
case 335:
#line 955 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 336:
#line 958 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 337:
#line 960 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 338:
#line 962 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 339:
#line 963 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 340:
#line 965 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 341:
#line 967 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 342:
#line 969 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 343:
#line 971 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 344:
#line 972 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 345:
#line 974 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 346:
#line 976 "cgrammar.y"
{ yyval.ctyp = declareUnnamedStruct (yyvsp[-3].flist); ;
    break;}
case 347:
#line 977 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 348:
#line 979 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 349:
#line 981 "cgrammar.y"
{ yyval.ctyp = declareUnnamedUnion (yyvsp[-3].flist); ;
    break;}
case 350:
#line 983 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedStruct (uentryList_new ()); ;
    break;}
case 351:
#line 985 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedUnion (uentryList_new ()); ;
    break;}
case 352:
#line 986 "cgrammar.y"
{ yyval.ctyp = handleStruct (yyvsp[-1].cname); ;
    break;}
case 353:
#line 987 "cgrammar.y"
{ yyval.ctyp = handleUnion (yyvsp[-1].cname); ;
    break;}
case 354:
#line 990 "cgrammar.y"
{ g_expectingTypeName = FALSE; ;
    break;}
case 356:
#line 994 "cgrammar.y"
{ yyval.flist = uentryList_undefined; /* bogus! */ ;
    break;}
case 357:
#line 995 "cgrammar.y"
{ yyval.flist = uentryList_mergeFields (yyvsp[-1].flist, yyvsp[0].flist); ;
    break;}
case 358:
#line 999 "cgrammar.y"
{ yyval.flist = fixUentryList (yyvsp[-2].ntyplist, yyvsp[-4].qtyp); ;
    break;}
case 359:
#line 1001 "cgrammar.y"
{ yyval.flist = fixUnnamedDecl (yyvsp[-2].qtyp); ;
    break;}
case 360:
#line 1005 "cgrammar.y"
{ yyval.ntyplist = idDeclList_singleton (yyvsp[-1].ntyp); ;
    break;}
case 361:
#line 1007 "cgrammar.y"
{ yyval.ntyplist = idDeclList_add (yyvsp[-3].ntyplist, yyvsp[-1].ntyp); ;
    break;}
case 362:
#line 1010 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; ;
    break;}
case 363:
#line 1011 "cgrammar.y"
{ yyval.ntyp = idDecl_undefined; ;
    break;}
case 364:
#line 1012 "cgrammar.y"
{ yyval.ntyp = yyvsp[-3].ntyp; ;
    break;}
case 365:
#line 1017 "cgrammar.y"
{ yyval.ctyp = declareUnnamedEnum (yyvsp[-2].enumnamelist); ;
    break;}
case 366:
#line 1018 "cgrammar.y"
{ context_pushLoc (); ;
    break;}
case 367:
#line 1019 "cgrammar.y"
{ context_popLoc (); yyval.ctyp = declareEnum (yyvsp[-5].cname, yyvsp[-2].enumnamelist); ;
    break;}
case 368:
#line 1020 "cgrammar.y"
{ yyval.ctyp = handleEnum (yyvsp[-1].cname); ;
    break;}
case 369:
#line 1024 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_single (yyvsp[0].cname); ;
    break;}
case 370:
#line 1026 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_push (yyvsp[-2].enumnamelist, yyvsp[0].cname); ;
    break;}
case 372:
#line 1031 "cgrammar.y"
{ uentry ue = uentry_makeEnumConstant (yyvsp[0].cname, ctype_unknown);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[0].cname;
   ;
    break;}
case 373:
#line 1036 "cgrammar.y"
{ uentry ue = uentry_makeEnumInitializedConstant (yyvsp[-3].cname, ctype_unknown, yyvsp[0].expr);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[-3].cname; 
   ;
    break;}
case 375:
#line 1043 "cgrammar.y"
{ yyval.ntyp = idDecl_create (cstring_undefined, qtype_create (yyvsp[0].ctyp)); ;
    break;}
case 376:
#line 1045 "cgrammar.y"
{ 
     qtype qt = qtype_unknown ();

     qtype_adjustPointers (yyvsp[-1].count, qt);
     yyval.ntyp = idDecl_create (cstring_copy (LastIdentifier ()), qt);
   ;
    break;}
case 377:
#line 1052 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 379:
#line 1057 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 380:
#line 1060 "cgrammar.y"
{ yyval.entrylist = handleParamTypeList (yyvsp[0].entrylist); ;
    break;}
case 381:
#line 1061 "cgrammar.y"
{ yyval.entrylist = handleParamIdList (yyvsp[0].entrylist); ;
    break;}
case 382:
#line 1064 "cgrammar.y"
{ /* ignored for now */; ;
    break;}
case 383:
#line 1065 "cgrammar.y"
{ ; ;
    break;}
case 384:
#line 1068 "cgrammar.y"
{ ; ;
    break;}
case 385:
#line 1069 "cgrammar.y"
{ ; ;
    break;}
case 386:
#line 1072 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 387:
#line 1073 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 388:
#line 1074 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 389:
#line 1075 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 391:
#line 1079 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 392:
#line 1082 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 393:
#line 1083 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 394:
#line 1086 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeElipsisMarker ()); ;
    break;}
case 396:
#line 1088 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 397:
#line 1091 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 398:
#line 1091 "cgrammar.y"
{ yyval.entrylist = uentryList_single (yyvsp[0].oentry); ;
    break;}
case 399:
#line 1092 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 400:
#line 1093 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-3].entrylist, yyvsp[0].oentry); ;
    break;}
case 401:
#line 1097 "cgrammar.y"
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
#line 1109 "cgrammar.y"
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
#line 1125 "cgrammar.y"
{ yyval.qtyp = qtype_newBase (yyvsp[-1].qtyp, yyvsp[0].ctyp); ;
    break;}
case 405:
#line 1128 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[0].count, ctype_unknown); ;
    break;}
case 407:
#line 1130 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[-1].count, yyvsp[0].ctyp); ;
    break;}
case 408:
#line 1133 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 410:
#line 1138 "cgrammar.y"
{ yyval.ctyp = ctype_expectFunction (yyvsp[-1].ctyp); ;
    break;}
case 411:
#line 1139 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 412:
#line 1140 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 413:
#line 1141 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (yyvsp[-2].ctyp); ;
    break;}
case 414:
#line 1142 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (yyvsp[-3].ctyp); ;
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
#line 1166 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 431:
#line 1174 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 432:
#line 1178 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 433:
#line 1180 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr); ;
    break;}
case 434:
#line 1182 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 435:
#line 1184 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 436:
#line 1188 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 437:
#line 1188 "cgrammar.y"
{ context_sizeofReleaseVars (); ;
    break;}
case 438:
#line 1190 "cgrammar.y"
{ yyval.expr = exprNode_forPred (yyvsp[-7].expr, yyvsp[-5].expr, yyvsp[-2].expr); 
     context_enterForClause (yyvsp[-5].expr); ;
    break;}
case 439:
#line 1195 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-2].entry); ;
    break;}
case 440:
#line 1197 "cgrammar.y"
{ yyval.expr = exprNode_iterStart (yyvsp[-5].entry, yyvsp[-1].alist); ;
    break;}
case 441:
#line 1198 "cgrammar.y"
{ yyval.expr = exprNode_createId (yyvsp[0].entry); ;
    break;}
case 445:
#line 1204 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 453:
#line 1212 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 454:
#line 1213 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 455:
#line 1217 "cgrammar.y"
{ /* don't: context_exitTrueClause ($1, $2); */
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 456:
#line 1222 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 457:
#line 1225 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 468:
#line 1240 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 470:
#line 1242 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 471:
#line 1245 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[-1].cname); ;
    break;}
case 472:
#line 1246 "cgrammar.y"
{ yyval.expr = exprNode_notReached (yyvsp[0].expr); ;
    break;}
case 473:
#line 1252 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 474:
#line 1253 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, FALSE); ;
    break;}
case 475:
#line 1254 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 476:
#line 1255 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, TRUE); ;
    break;}
case 477:
#line 1258 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 478:
#line 1259 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, FALSE); ;
    break;}
case 479:
#line 1260 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 480:
#line 1261 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, TRUE); ;
    break;}
case 481:
#line 1264 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 482:
#line 1266 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; context_exitInner (yyvsp[0].expr); ;
    break;}
case 483:
#line 1269 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 484:
#line 1272 "cgrammar.y"
{ context_enterInnerContext (); ;
    break;}
case 485:
#line 1275 "cgrammar.y"
{ context_exitInnerPlain (); ;
    break;}
case 486:
#line 1278 "cgrammar.y"
{ context_enterStructInnerContext (); ;
    break;}
case 487:
#line 1281 "cgrammar.y"
{ context_exitStructInnerContext (); ;
    break;}
case 488:
#line 1284 "cgrammar.y"
{ context_exitInnerSafe (); ;
    break;}
case 489:
#line 1287 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 490:
#line 1288 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_createTok (yyvsp[0].tok)); ;
    break;}
case 491:
#line 1289 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 492:
#line 1291 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 493:
#line 1292 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 494:
#line 1294 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 495:
#line 1296 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 496:
#line 1298 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (exprNode_concat (yyvsp[-3].expr, yyvsp[-2].expr), 
							lltok_getLoc (yyvsp[-1].tok))); 
   ;
    break;}
case 497:
#line 1305 "cgrammar.y"
{ yyval.expr = exprNode_makeBlock (yyvsp[0].expr); ;
    break;}
case 498:
#line 1309 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 499:
#line 1311 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 500:
#line 1313 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 501:
#line 1315 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 503:
#line 1319 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 504:
#line 1322 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 505:
#line 1323 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 506:
#line 1326 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 507:
#line 1327 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 508:
#line 1330 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 509:
#line 1331 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr); ;
    break;}
case 510:
#line 1334 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 511:
#line 1335 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr); ;
    break;}
case 512:
#line 1336 "cgrammar.y"
{ yyval.expr = exprNode_checkExpr (yyvsp[0].expr); ;
    break;}
case 513:
#line 1340 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 514:
#line 1348 "cgrammar.y"
{ 
     context_exitTrueClause (yyvsp[-1].expr, yyvsp[0].expr);
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 515:
#line 1352 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-2].expr); ;
    break;}
case 516:
#line 1353 "cgrammar.y"
{
     context_exitClause (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr);
     yyval.expr = exprNode_ifelse (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr); 
   ;
    break;}
case 517:
#line 1357 "cgrammar.y"
{ context_enterSwitch (yyvsp[0].expr); ;
    break;}
case 518:
#line 1358 "cgrammar.y"
{ yyval.expr = exprNode_switch (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 519:
#line 1362 "cgrammar.y"
{ yyval.expr = exprNode_whilePred (yyvsp[-1].expr); context_enterWhileClause (yyvsp[-1].expr); ;
    break;}
case 520:
#line 1366 "cgrammar.y"
{ yyval.expr = exprNode_whilePred(yyvsp[-1].expr); ;
    break;}
case 521:
#line 1369 "cgrammar.y"
{ context_enterIterClause (); ;
    break;}
case 522:
#line 1370 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-3].entry); ;
    break;}
case 523:
#line 1373 "cgrammar.y"
{ 
     yyval.expr = exprNode_iter (yyvsp[-9].entry, yyvsp[-4].alist, yyvsp[-2].expr, yyvsp[-1].entry); 

   ;
    break;}
case 524:
#line 1379 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 525:
#line 1380 "cgrammar.y"
{ nextIterParam (); ;
    break;}
case 526:
#line 1381 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-3].alist, yyvsp[0].expr); ;
    break;}
case 527:
#line 1384 "cgrammar.y"
{ yyval.expr = exprNode_iterExpr (yyvsp[0].expr); ;
    break;}
case 528:
#line 1385 "cgrammar.y"
{ yyval.expr = exprNode_iterId (yyvsp[0].entry); ;
    break;}
case 529:
#line 1386 "cgrammar.y"
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
case 530:
#line 1397 "cgrammar.y"
{ yyval.expr = exprNode_iterNewId (yyvsp[0].cname); ;
    break;}
case 532:
#line 1405 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 534:
#line 1409 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 535:
#line 1410 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 536:
#line 1411 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 537:
#line 1413 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 538:
#line 1414 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 539:
#line 1415 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 540:
#line 1416 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 541:
#line 1417 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 543:
#line 1421 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 544:
#line 1422 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 545:
#line 1423 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 546:
#line 1424 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 547:
#line 1425 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 548:
#line 1426 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 549:
#line 1427 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 550:
#line 1428 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 551:
#line 1429 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 553:
#line 1433 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 555:
#line 1437 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 556:
#line 1438 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 557:
#line 1439 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 559:
#line 1443 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 560:
#line 1444 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 562:
#line 1448 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 563:
#line 1449 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 565:
#line 1453 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 566:
#line 1454 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 567:
#line 1455 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 568:
#line 1456 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 570:
#line 1460 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 571:
#line 1461 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 573:
#line 1465 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 575:
#line 1469 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 577:
#line 1474 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 579:
#line 1478 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 581:
#line 1482 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 583:
#line 1486 "cgrammar.y"
{ context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 584:
#line 1487 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 585:
#line 1488 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 587:
#line 1492 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 588:
#line 1493 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 589:
#line 1494 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 590:
#line 1495 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 591:
#line 1496 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 592:
#line 1497 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 593:
#line 1498 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 594:
#line 1499 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 595:
#line 1500 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 596:
#line 1501 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 597:
#line 1502 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 598:
#line 1505 "cgrammar.y"
{ yyval.entry = yyvsp[0].entry; ;
    break;}
case 599:
#line 1506 "cgrammar.y"
{ yyval.entry = uentry_undefined; ;
    break;}
case 600:
#line 1509 "cgrammar.y"
{ context_enterDoWhileClause (); yyval.tok = yyvsp[0].tok; ;
    break;}
case 601:
#line 1513 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 602:
#line 1515 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr)); ;
    break;}
case 603:
#line 1517 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 604:
#line 1520 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 605:
#line 1522 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr)); ;
    break;}
case 606:
#line 1524 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 607:
#line 1525 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 608:
#line 1528 "cgrammar.y"
{ yyval.expr = exprNode_goto (yyvsp[-1].cname); ;
    break;}
case 609:
#line 1529 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-1].tok, BADTOK); ;
    break;}
case 610:
#line 1531 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-2].tok, QINNERCONTINUE); ;
    break;}
case 611:
#line 1532 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, BADTOK); ;
    break;}
case 612:
#line 1533 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSWITCHBREAK); ;
    break;}
case 613:
#line 1534 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QLOOPBREAK); ;
    break;}
case 614:
#line 1535 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QINNERBREAK); ;
    break;}
case 615:
#line 1536 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSAFEBREAK); ;
    break;}
case 616:
#line 1537 "cgrammar.y"
{ yyval.expr = exprNode_nullReturn (yyvsp[-1].tok); ;
    break;}
case 617:
#line 1538 "cgrammar.y"
{ yyval.expr = exprNode_return (yyvsp[-1].expr); ;
    break;}
case 619:
#line 1542 "cgrammar.y"
{ ; ;
    break;}
case 622:
#line 1549 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 623:
#line 1550 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 624:
#line 1551 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 625:
#line 1552 "cgrammar.y"
{ yyval.cname = yyvsp[0].cname; ;
    break;}
case 627:
#line 1556 "cgrammar.y"
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
#line 1558 "cgrammar.y"


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
