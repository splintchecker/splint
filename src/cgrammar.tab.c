
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
#define	IDENTIFIER	430
#define	NEW_IDENTIFIER	431
#define	TYPE_NAME_OR_ID	432
#define	CCONSTANT	433
#define	ITER_NAME	434
#define	ITER_ENDNAME	435
#define	TYPE_NAME	436

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



#define	YYFINAL		1158
#define	YYFLAG		-32768
#define	YYNTBASE	182

#define YYTRANSLATE(x) ((unsigned)(x) <= 436 ? yytranslate[x] : 409)

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
   176,   177,   178,   179,   180,   181
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
   951,   954,   957,   960,   963,   966,   969,   971,   973,   975,
   977,   980,   983,   986,   989,   992,   995,   998,  1001,  1004,
  1007,  1010,  1013,  1016,  1019,  1023,  1025,  1030,  1032,  1036,
  1039,  1042,  1045,  1046,  1048,  1049,  1050,  1062,  1063,  1064,
  1076,  1083,  1090,  1091,  1092,  1103,  1104,  1105,  1116,  1122,
  1128,  1133,  1138,  1139,  1141,  1143,  1146,  1152,  1156,  1159,
  1164,  1166,  1170,  1175,  1182,  1183,  1192,  1197,  1199,  1203,
  1206,  1208,  1213,  1215,  1217,  1220,  1223,  1225,  1228,  1230,
  1233,  1235,  1237,  1239,  1242,  1244,  1247,  1250,  1254,  1256,
  1260,  1262,  1266,  1268,  1270,  1274,  1275,  1278,  1279,  1284,
  1289,  1291,  1293,  1296,  1298,  1300,  1303,  1304,  1306,  1312,
  1315,  1319,  1323,  1328,  1332,  1337,  1342,  1348,  1350,  1352,
  1354,  1356,  1358,  1360,  1362,  1364,  1366,  1368,  1370,  1372,
  1375,  1378,  1386,  1393,  1396,  1397,  1398,  1409,  1410,  1417,
  1419,  1421,  1423,  1425,  1428,  1430,  1432,  1434,  1436,  1438,
  1440,  1442,  1446,  1448,  1451,  1454,  1457,  1459,  1461,  1463,
  1465,  1467,  1469,  1471,  1473,  1475,  1477,  1481,  1483,  1485,
  1488,  1491,  1492,  1497,  1498,  1504,  1505,  1509,  1510,  1515,
  1519,  1522,  1526,  1527,  1528,  1529,  1530,  1531,  1533,  1536,
  1539,  1543,  1546,  1550,  1554,  1559,  1562,  1565,  1569,  1573,
  1578,  1580,  1583,  1585,  1588,  1590,  1593,  1595,  1598,  1600,
  1603,  1605,  1610,  1613,  1614,  1620,  1621,  1628,  1633,  1638,
  1639,  1640,  1651,  1653,  1654,  1659,  1661,  1663,  1665,  1667,
  1669,  1673,  1675,  1680,  1684,  1689,  1696,  1702,  1708,  1711,
  1714,  1716,  1719,  1722,  1725,  1728,  1731,  1734,  1737,  1740,
  1742,  1744,  1749,  1751,  1755,  1759,  1763,  1765,  1769,  1773,
  1775,  1779,  1783,  1785,  1789,  1793,  1797,  1801,  1803,  1807,
  1811,  1813,  1817,  1819,  1823,  1825,  1829,  1831,  1835,  1837,
  1841,  1843,  1844,  1845,  1853,  1855,  1859,  1863,  1867,  1871,
  1875,  1879,  1883,  1887,  1891,  1895,  1899,  1901,  1902,  1904,
  1907,  1915,  1918,  1921,  1929,  1936,  1939,  1943,  1946,  1950,
  1953,  1957,  1961,  1965,  1969,  1972,  1976,  1977,  1979,  1981,
  1983,  1985,  1987,  1989,  1991,  1993
};

static const short yyrhs[] = {    -1,
   183,     0,   184,     0,   183,   184,     0,   236,   405,     0,
   185,     0,   186,     0,   196,     0,   199,     0,   273,     0,
     1,     0,    75,   293,   306,   316,   306,   405,   281,    88,
     0,    75,   293,   306,   316,   306,    23,   281,   286,   285,
   405,    88,     0,     0,    76,   187,   188,   405,    88,     0,
   189,     0,   293,   306,   189,     0,   193,     0,   320,   193,
     0,   407,     0,   281,    24,   306,   316,   281,    25,     0,
   190,    26,    27,     0,   190,    26,   281,   272,    27,   306,
     0,     0,   190,   282,    24,    25,   191,   201,     0,     0,
   190,   282,    24,   317,    25,   192,   201,     0,   407,     0,
   281,    24,   306,   189,   281,    25,     0,   193,    26,    27,
     0,   193,    26,   281,   272,    27,   306,     0,     0,   193,
   282,    24,    25,   194,   203,     0,     0,   193,   282,    24,
   317,    25,   195,   203,     0,     0,     0,    77,   407,    24,
   317,    25,   197,   203,   198,   405,    88,     0,    89,   346,
    92,     0,    90,   333,    92,     0,    91,   334,    92,     0,
    89,    92,     0,   232,     0,     0,   202,   205,     0,     0,
   204,   206,     0,   213,     0,   207,   213,     0,   216,     0,
   207,   216,     0,   229,     0,   229,   207,     0,   209,     0,
   208,    21,   209,     0,   212,   210,     0,   406,     0,   176,
     0,    86,     0,    87,     0,   116,     0,   117,     0,   130,
     0,     0,   211,   212,     0,     0,    72,   214,   366,   405,
    88,   219,     0,     0,    72,   215,   208,   405,    88,   219,
     0,    74,     0,   220,     0,     0,     0,    72,   217,   366,
   405,   219,     0,     0,    72,   218,   208,   405,   219,     0,
    74,     0,   222,     0,     0,   220,     0,     0,     0,    73,
   221,   237,     0,     0,    73,   223,   238,     0,    78,     0,
    79,     0,    80,     0,    81,     0,    82,     0,    88,     0,
    88,     0,    83,     0,    84,     0,   119,     0,   137,     0,
   135,     0,   133,     0,   132,     0,   121,     0,   138,     0,
   150,     0,     0,   224,   306,   230,   243,   405,   226,   281,
     0,     0,   227,   306,   228,   231,   243,   405,   225,   281,
     0,   316,     0,   293,   306,   316,     0,     0,    19,   234,
   362,     0,     0,   366,   235,   355,     0,   200,   233,     0,
   241,   405,    88,     0,   405,    88,     0,   241,   405,     0,
   405,     0,   406,     0,   176,     0,   239,    26,    27,     0,
   239,    26,   240,    27,     0,    34,   239,     0,    24,   239,
    25,     0,   239,    28,   407,     0,   239,    44,   407,     0,
   239,     0,   178,     0,   239,     0,   241,    21,   239,     0,
   406,     0,   176,     0,   242,    26,    27,     0,   242,    26,
   240,    27,     0,    34,   242,     0,    24,   242,    25,     0,
   242,    28,   407,     0,   242,    44,   407,     0,   242,     0,
   243,    21,   242,     0,   406,     0,   176,     0,   178,     0,
    24,   270,    25,     0,   177,     0,   111,     0,   244,     0,
   245,    26,   270,    27,     0,   245,    24,    25,     0,   245,
    24,   246,    25,     0,    70,    24,   269,    21,   328,    25,
     0,   245,   306,    28,   407,   281,     0,   245,   306,    44,
   407,   281,     0,   245,    47,     0,   245,    48,     0,   269,
     0,   246,    21,   269,     0,   245,     0,    47,   247,     0,
    48,   247,     0,    29,   253,     0,    34,   253,     0,    33,
   253,     0,    32,   253,     0,    31,   253,     0,    30,   253,
     0,   250,     0,   249,     0,   248,    28,   407,     0,   407,
     0,    46,   281,    24,   328,   306,    21,   248,    25,   281,
     0,     0,   281,   251,   252,     0,    42,    24,   328,    25,
     0,    42,   247,     0,    43,    24,   328,    25,     0,    43,
   247,     0,   247,     0,    24,   328,    25,   253,     0,   253,
     0,   254,    34,   253,     0,   254,    35,   253,     0,   254,
    36,   253,     0,   254,     0,   255,    33,   254,     0,   255,
    32,   254,     0,   255,     0,   256,    49,   255,     0,   256,
    50,   255,     0,   256,     0,   257,    37,   256,     0,   257,
    38,   256,     0,   257,    51,   256,     0,   257,    52,   256,
     0,   257,     0,   258,    53,   257,     0,   258,    54,   257,
     0,   258,     0,   259,    29,   258,     0,   259,     0,   260,
    39,   259,     0,   260,     0,   261,    40,   260,     0,   261,
     0,     0,   262,    55,   263,   261,     0,   262,     0,     0,
   264,    56,   265,   262,     0,   264,     0,     0,     0,   264,
    41,   267,   270,    22,   268,   266,     0,   266,     0,   247,
    23,   269,     0,   247,    57,   269,     0,   247,    58,   269,
     0,   247,    59,   269,     0,   247,    60,   269,     0,   247,
    61,   269,     0,   247,    62,   269,     0,   247,    63,   269,
     0,   247,    64,   269,     0,   247,    65,   269,     0,   247,
    66,   269,     0,   269,     0,   270,    21,   269,     0,     0,
   270,     0,   266,     0,   274,     0,    71,     0,   279,     0,
   293,   281,    18,     0,     0,   293,   306,   316,   306,   275,
   281,   285,    18,   281,     0,     0,   293,   306,   316,   306,
    23,   276,   281,   286,   285,    18,   281,     0,   316,   306,
     0,     0,   316,   306,    23,   278,   281,   286,     0,     0,
    45,   293,   280,   306,   283,   281,    18,     0,    45,   293,
   281,    18,     0,    45,   283,   281,    18,     0,     0,     0,
   284,   281,     0,   277,     0,   283,    21,   306,   277,     0,
     0,   285,    21,   306,   277,     0,   269,     0,    19,   287,
    20,     0,    19,   287,    21,    20,     0,   286,     0,   287,
    21,   286,     0,   112,     0,   110,     0,   113,     0,   114,
     0,   115,     0,   108,   281,     0,   109,   281,     0,   116,
   281,     0,   117,   281,     0,   130,   281,     0,   131,   281,
     0,   132,   281,     0,   133,   281,     0,   118,   281,     0,
   120,   281,     0,   119,   281,     0,   128,   281,     0,   129,
   281,     0,   121,   281,     0,   123,   281,     0,   139,   281,
     0,   140,   281,     0,   142,   281,     0,   143,   281,     0,
   141,   281,     0,   136,   281,     0,   151,   281,     0,   134,
   281,     0,   135,   281,     0,   137,   281,     0,   124,   281,
     0,   127,   281,     0,   125,   281,     0,   126,   281,     0,
   156,   281,     0,   157,   281,     0,   148,   281,     0,   158,
   281,     0,   149,   281,     0,   152,   281,     0,   153,   281,
     0,   154,   281,     0,   155,   281,     0,   150,   281,     0,
   159,   281,     0,   160,   281,     0,   163,   281,     0,   164,
   281,     0,   161,   281,     0,   162,   281,     0,   147,     0,
   144,     0,   145,     0,   146,     0,   165,   306,     0,   167,
   306,     0,   166,   306,     0,   168,   306,     0,   169,   306,
     0,   170,   306,     0,   171,   306,     0,   172,   306,     0,
   173,   306,     0,   174,   306,     0,   408,   306,     0,   297,
   306,     0,   311,   306,     0,   290,   306,     0,   281,   293,
   281,     0,   295,     0,   295,    85,   294,    88,     0,   328,
     0,   328,    21,   294,     0,   288,   296,     0,   289,   296,
     0,   291,   296,     0,     0,   293,     0,     0,     0,   306,
    67,   407,   281,    19,   298,   359,   307,   360,   299,    20,
     0,     0,     0,   306,    68,   407,   281,    19,   300,   359,
   307,   360,   301,    20,     0,   306,    67,   407,   281,    19,
    20,     0,   306,    68,   407,   281,    19,    20,     0,     0,
     0,   306,    67,   281,    19,   302,   359,   307,   360,   303,
    20,     0,     0,     0,   306,    68,   281,    19,   304,   359,
   307,   360,   305,    20,     0,   306,    67,   281,    19,    20,
     0,   306,    68,   281,    19,    20,     0,   306,    67,   407,
   306,     0,   306,    68,   407,   306,     0,     0,   308,     0,
   199,     0,   307,   308,     0,   293,   306,   309,   281,    18,
     0,   293,   281,    18,     0,   310,   306,     0,   309,    21,
   310,   306,     0,   316,     0,    22,   281,   272,     0,   316,
    22,   281,   272,     0,   306,    69,    19,   313,    20,   281,
     0,     0,   306,    69,   407,    19,   312,   313,    20,   281,
     0,   306,    69,   407,   281,     0,   314,     0,   313,    21,
   314,     0,   313,    21,     0,   407,     0,   407,    23,   281,
   272,     0,   190,     0,   330,     0,   320,   181,     0,   320,
   315,     0,   190,     0,   320,   190,     0,   323,     0,   306,
   321,     0,   108,     0,   109,     0,   318,     0,   319,   318,
     0,    34,     0,    34,   319,     0,    34,   320,     0,    34,
   319,   320,     0,   322,     0,   322,    21,     5,     0,   407,
     0,   322,    21,   407,     0,     5,     0,   324,     0,   324,
    21,     5,     0,     0,   325,   327,     0,     0,   324,    21,
   326,   327,     0,   281,   293,   315,   281,     0,   407,     0,
   292,     0,   292,   329,     0,   320,     0,   331,     0,   320,
   331,     0,     0,   331,     0,   281,    24,   306,   329,    25,
     0,    26,    27,     0,    26,   272,    27,     0,   331,    26,
    27,     0,   331,    26,   272,    27,     0,   281,    24,    25,
     0,   281,    24,   323,    25,     0,   331,   281,    24,    25,
     0,   331,   281,    24,   323,    25,     0,   348,     0,   349,
     0,   352,     0,   355,     0,   368,     0,   371,     0,   402,
     0,   376,     0,   404,     0,   335,     0,   333,     0,   342,
     0,   335,   342,     0,   375,   335,     0,   401,   347,    11,
    24,   270,    25,    18,     0,   401,   347,    11,    24,   270,
    25,     0,   337,   342,     0,     0,     0,    13,    24,   271,
    18,   271,    18,   338,   271,   339,    25,     0,     0,   179,
   357,    24,   341,   379,    25,     0,   180,     0,   348,     0,
   349,     0,   352,     0,   344,   366,     0,   344,     0,   345,
     0,   368,     0,   343,     0,   336,     0,   340,     0,   404,
     0,    24,   342,    25,     0,     1,     0,   370,   342,     0,
   357,    19,     0,   361,    20,     0,   347,     0,   365,     0,
   348,     0,   349,     0,   352,     0,   356,     0,   369,     0,
   371,     0,   376,     0,   403,     0,    24,   347,    25,     0,
   404,     0,     1,     0,   407,    22,     0,   107,   332,     0,
     0,     6,   272,   350,    22,     0,     0,    98,     6,   272,
   351,    22,     0,     0,     7,   353,    22,     0,     0,    98,
     7,   354,    22,     0,    24,   355,    25,     0,   357,   363,
     0,   357,   364,   358,     0,     0,     0,     0,     0,     0,
    20,     0,   107,    20,     0,   367,    20,     0,   367,   107,
    20,     0,   366,    20,     0,   366,   107,    20,     0,   366,
   367,    20,     0,   366,   367,   107,    20,     0,    19,   362,
     0,    19,    20,     0,    19,   365,    20,     0,    19,   366,
    20,     0,    19,   366,   367,    20,     0,   347,     0,   365,
   347,     0,   273,     0,   366,   273,     0,   332,     0,   367,
   332,     0,    18,     0,   270,    18,     0,    18,     0,   270,
    18,     0,   270,     0,     8,    24,   270,    25,     0,   370,
   332,     0,     0,   370,   332,     9,   372,   332,     0,     0,
    10,    24,   270,   373,    25,   332,     0,    11,    24,   270,
    25,     0,    11,    24,   270,    25,     0,     0,     0,   179,
   377,   357,    24,   378,   379,    25,   355,   400,   358,     0,
   381,     0,     0,   379,   380,    21,   381,     0,   399,     0,
   406,     0,   177,     0,   176,     0,   178,     0,    24,   270,
    25,     0,   382,     0,   245,    26,   270,    27,     0,   245,
    24,    25,     0,   245,    24,   246,    25,     0,    70,    24,
   269,    21,   328,    25,     0,   245,   306,    28,   407,   281,
     0,   245,   306,    44,   407,   281,     0,   245,    47,     0,
   245,    48,     0,   383,     0,    47,   247,     0,    48,   247,
     0,    29,   253,     0,    34,   253,     0,    33,   253,     0,
    32,   253,     0,    31,   253,     0,    30,   253,     0,   250,
     0,   384,     0,    24,   328,    25,   253,     0,   385,     0,
   254,    34,   253,     0,   254,    35,   253,     0,   254,    36,
   253,     0,   386,     0,   255,    33,   254,     0,   255,    32,
   254,     0,   387,     0,   256,    49,   255,     0,   256,    50,
   255,     0,   388,     0,   257,    37,   256,     0,   257,    38,
   256,     0,   257,    51,   256,     0,   257,    52,   256,     0,
   389,     0,   258,    53,   257,     0,   258,    54,   257,     0,
   390,     0,   259,    29,   258,     0,   391,     0,   260,    39,
   259,     0,   392,     0,   261,    40,   260,     0,   393,     0,
   262,    55,   261,     0,   394,     0,   264,    56,   262,     0,
   395,     0,     0,     0,   264,    41,   397,   270,    22,   398,
   266,     0,   396,     0,   247,    23,   269,     0,   247,    57,
   269,     0,   247,    58,   269,     0,   247,    59,   269,     0,
   247,    60,   269,     0,   247,    61,   269,     0,   247,    62,
   269,     0,   247,    63,   269,     0,   247,    64,   269,     0,
   247,    65,   269,     0,   247,    66,   269,     0,   180,     0,
     0,    12,     0,   374,   332,     0,   401,   332,    11,    24,
   270,    25,    18,     0,   337,   332,     0,   374,   347,     0,
   401,   347,    11,    24,   270,    25,    18,     0,   401,   347,
    11,    24,   270,    25,     0,   337,   347,     0,    14,   407,
    18,     0,    15,    18,     0,    97,    15,    18,     0,    16,
    18,     0,    93,    16,    18,     0,    94,    16,    18,     0,
    95,    16,    18,     0,    96,    16,    18,     0,    17,    18,
     0,    17,   270,    18,     0,     0,    18,     0,   175,     0,
   176,     0,   179,     0,   180,     0,   406,     0,   177,     0,
   181,     0,   177,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   232,   233,   236,   237,   240,   241,   242,   243,   244,   245,
   246,   249,   251,   255,   255,   260,   266,   270,   271,   275,
   276,   278,   280,   296,   300,   307,   311,   317,   318,   320,
   322,   338,   342,   349,   353,   359,   361,   361,   365,   366,
   367,   368,   371,   374,   375,   378,   379,   382,   383,   386,
   387,   390,   391,   394,   395,   398,   401,   402,   405,   406,
   407,   408,   409,   412,   413,   416,   416,   419,   419,   422,
   426,   427,   430,   430,   433,   433,   436,   440,   441,   444,
   445,   448,   454,   461,   467,   474,   475,   476,   477,   478,
   481,   484,   487,   488,   491,   492,   493,   494,   495,   496,
   497,   498,   501,   507,   514,   520,   529,   535,   539,   541,
   545,   548,   555,   563,   564,   567,   568,   571,   572,   573,
   574,   575,   576,   577,   578,   582,   583,   587,   588,   591,
   593,   595,   596,   597,   598,   599,   601,   605,   609,   621,
   622,   623,   624,   625,   626,   629,   630,   631,   632,   633,
   634,   635,   636,   637,   640,   641,   644,   645,   646,   647,
   648,   649,   650,   651,   652,   653,   654,   657,   658,   661,
   665,   666,   669,   670,   671,   672,   675,   676,   680,   681,
   682,   683,   686,   687,   688,   691,   692,   693,   696,   697,
   698,   699,   700,   703,   704,   705,   708,   709,   712,   713,
   717,   718,   721,   722,   727,   733,   734,   740,   746,   747,
   747,   749,   752,   753,   754,   755,   756,   757,   758,   759,
   760,   761,   762,   763,   766,   767,   770,   771,   774,   779,
   780,   781,   784,   797,   801,   802,   805,   810,   811,   811,
   816,   817,   818,   819,   822,   825,   828,   831,   832,   835,
   836,   839,   840,   841,   845,   847,   856,   857,   858,   859,
   860,   863,   864,   865,   866,   867,   868,   869,   870,   871,
   872,   873,   874,   875,   876,   877,   878,   879,   880,   881,
   882,   883,   884,   885,   886,   887,   888,   889,   890,   891,
   892,   893,   894,   895,   896,   897,   898,   899,   900,   901,
   902,   903,   904,   905,   906,   907,   910,   911,   912,   913,
   916,   917,   918,   919,   920,   921,   922,   923,   924,   925,
   926,   927,   928,   929,   932,   936,   937,   941,   942,   946,
   947,   948,   951,   952,   955,   957,   959,   960,   962,   964,
   965,   967,   969,   971,   973,   974,   976,   978,   979,   981,
   983,   984,   987,   990,   991,   992,   995,   997,  1001,  1003,
  1007,  1008,  1009,  1013,  1015,  1015,  1017,  1020,  1022,  1024,
  1027,  1032,  1039,  1040,  1041,  1048,  1052,  1053,  1057,  1058,
  1061,  1062,  1065,  1066,  1069,  1070,  1071,  1072,  1075,  1076,
  1079,  1080,  1083,  1084,  1085,  1088,  1088,  1089,  1090,  1093,
  1105,  1121,  1122,  1125,  1126,  1127,  1130,  1131,  1134,  1136,
  1137,  1138,  1139,  1140,  1142,  1144,  1146,  1152,  1153,  1154,
  1155,  1156,  1157,  1158,  1159,  1160,  1163,  1166,  1169,  1170,
  1174,  1176,  1178,  1180,  1184,  1185,  1187,  1191,  1193,  1195,
  1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,
  1208,  1209,  1210,  1213,  1219,  1222,  1225,  1226,  1229,  1230,
  1231,  1232,  1233,  1234,  1235,  1236,  1237,  1238,  1239,  1242,
  1243,  1249,  1250,  1251,  1252,  1255,  1256,  1257,  1258,  1261,
  1262,  1266,  1269,  1272,  1275,  1278,  1281,  1284,  1285,  1286,
  1287,  1289,  1290,  1292,  1294,  1301,  1305,  1307,  1309,  1311,
  1315,  1316,  1319,  1320,  1323,  1324,  1327,  1328,  1331,  1332,
  1333,  1336,  1344,  1349,  1350,  1354,  1355,  1358,  1363,  1366,
  1367,  1368,  1376,  1377,  1377,  1381,  1382,  1383,  1394,  1401,
  1402,  1405,  1406,  1407,  1408,  1409,  1411,  1412,  1413,  1414,
  1417,  1418,  1419,  1420,  1421,  1422,  1423,  1424,  1425,  1426,
  1429,  1430,  1433,  1434,  1435,  1436,  1439,  1440,  1441,  1444,
  1445,  1446,  1449,  1450,  1451,  1452,  1453,  1456,  1457,  1458,
  1461,  1462,  1465,  1466,  1470,  1471,  1474,  1475,  1478,  1479,
  1482,  1483,  1484,  1485,  1488,  1489,  1490,  1491,  1492,  1493,
  1494,  1495,  1496,  1497,  1498,  1499,  1502,  1503,  1506,  1509,
  1511,  1513,  1517,  1518,  1520,  1522,  1525,  1526,  1527,  1529,
  1530,  1531,  1532,  1533,  1534,  1535,  1538,  1539,  1542,  1545,
  1546,  1547,  1548,  1549,  1552,  1553
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
"QINTEGRALTYPE","QUNSIGNEDINTEGRALTYPE","QSIGNEDINTEGRALTYPE","IDENTIFIER","NEW_IDENTIFIER",
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
   182,   182,   183,   183,   184,   184,   184,   184,   184,   184,
   184,   185,   185,   187,   186,   188,   188,   189,   189,   190,
   190,   190,   190,   191,   190,   192,   190,   193,   193,   193,
   193,   194,   193,   195,   193,   197,   198,   196,   199,   199,
   199,   199,   200,   202,   201,   204,   203,   205,   205,   206,
   206,   207,   207,   208,   208,   209,   210,   210,   211,   211,
   211,   211,   211,   212,   212,   214,   213,   215,   213,   213,
   213,   213,   217,   216,   218,   216,   216,   216,   216,   219,
   219,   221,   220,   223,   222,   224,   224,   224,   224,   224,
   225,   226,   227,   227,   228,   228,   228,   228,   228,   228,
   228,   228,   230,   229,   231,   229,   232,   232,   234,   233,
   235,   233,   236,   237,   237,   238,   238,   239,   239,   239,
   239,   239,   239,   239,   239,   240,   240,   241,   241,   242,
   242,   242,   242,   242,   242,   242,   242,   243,   243,   244,
   244,   244,   244,   244,   244,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   246,   246,   247,   247,   247,   247,
   247,   247,   247,   247,   247,   247,   247,   248,   248,   249,
   251,   250,   252,   252,   252,   252,   253,   253,   254,   254,
   254,   254,   255,   255,   255,   256,   256,   256,   257,   257,
   257,   257,   257,   258,   258,   258,   259,   259,   260,   260,
   261,   261,   262,   263,   262,   264,   265,   264,   266,   267,
   268,   266,   269,   269,   269,   269,   269,   269,   269,   269,
   269,   269,   269,   269,   270,   270,   271,   271,   272,   273,
   273,   273,   274,   275,   274,   276,   274,   277,   278,   277,
   280,   279,   279,   279,   281,   282,   283,   284,   284,   285,
   285,   286,   286,   286,   287,   287,   288,   288,   288,   288,
   288,   289,   289,   289,   289,   289,   289,   289,   289,   289,
   289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
   289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
   289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
   289,   289,   289,   289,   289,   289,   290,   290,   290,   290,
   291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
   291,   291,   291,   291,   292,   293,   293,   294,   294,   295,
   295,   295,   296,   296,   298,   299,   297,   300,   301,   297,
   297,   297,   302,   303,   297,   304,   305,   297,   297,   297,
   297,   297,   306,   307,   307,   307,   308,   308,   309,   309,
   310,   310,   310,   311,   312,   311,   311,   313,   313,   313,
   314,   314,   315,   315,   315,   315,   316,   316,   317,   317,
   318,   318,   319,   319,   320,   320,   320,   320,   321,   321,
   322,   322,   323,   323,   323,   325,   324,   326,   324,   327,
   327,   328,   328,   329,   329,   329,   330,   330,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   332,   332,   332,
   332,   332,   332,   332,   332,   332,   333,   334,   335,   335,
   336,   336,   336,   336,   338,   339,   337,   341,   340,   340,
   342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
   342,   342,   342,   343,   344,   345,   346,   346,   347,   347,
   347,   347,   347,   347,   347,   347,   347,   347,   347,   348,
   348,   350,   349,   351,   349,   353,   352,   354,   352,   355,
   355,   356,   357,   358,   359,   360,   361,   362,   362,   362,
   362,   362,   362,   362,   362,   363,   364,   364,   364,   364,
   365,   365,   366,   366,   367,   367,   368,   368,   369,   369,
   369,   370,   371,   372,   371,   373,   371,   374,   375,   377,
   378,   376,   379,   380,   379,   381,   381,   381,   381,   382,
   382,   383,   383,   383,   383,   383,   383,   383,   383,   383,
   384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
   385,   385,   386,   386,   386,   386,   387,   387,   387,   388,
   388,   388,   389,   389,   389,   389,   389,   390,   390,   390,
   391,   391,   392,   392,   393,   393,   394,   394,   395,   395,
   396,   397,   398,   396,   399,   399,   399,   399,   399,   399,
   399,   399,   399,   399,   399,   399,   400,   400,   401,   402,
   402,   402,   403,   403,   403,   403,   404,   404,   404,   404,
   404,   404,   404,   404,   404,   404,   405,   405,   406,   407,
   407,   407,   407,   407,   408,   408
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
     2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     3,     1,     4,     1,     3,     2,
     2,     2,     0,     1,     0,     0,    11,     0,     0,    11,
     6,     6,     0,     0,    10,     0,     0,    10,     5,     5,
     4,     4,     0,     1,     1,     2,     5,     3,     2,     4,
     1,     3,     4,     6,     0,     8,     4,     1,     3,     2,
     1,     4,     1,     1,     2,     2,     1,     2,     1,     2,
     1,     1,     1,     2,     1,     2,     2,     3,     1,     3,
     1,     3,     1,     1,     3,     0,     2,     0,     4,     4,
     1,     1,     2,     1,     1,     2,     0,     1,     5,     2,
     3,     3,     4,     3,     4,     4,     5,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
     2,     7,     6,     2,     0,     0,    10,     0,     6,     1,
     1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
     1,     3,     1,     2,     2,     2,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
     2,     0,     4,     0,     5,     0,     3,     0,     4,     3,
     2,     3,     0,     0,     0,     0,     0,     1,     2,     2,
     3,     2,     3,     3,     4,     2,     2,     3,     3,     4,
     1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
     1,     4,     2,     0,     5,     0,     6,     4,     4,     0,
     0,    10,     1,     0,     4,     1,     1,     1,     1,     1,
     3,     1,     4,     3,     4,     6,     5,     5,     2,     2,
     1,     2,     2,     2,     2,     2,     2,     2,     2,     1,
     1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
     3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
     1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
     1,     0,     0,     7,     1,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     1,     0,     1,     2,
     7,     2,     2,     7,     6,     2,     3,     2,     3,     2,
     3,     3,     3,     3,     2,     3,     0,     1,     1,     1,
     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     0,
    11,   385,   353,   231,   353,    14,     0,     0,     0,     0,
   245,   245,   258,   257,   259,   260,   261,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   308,   309,   310,   307,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   353,   353,   353,   353,   353,   353,
   353,   353,   353,   353,   619,   620,   624,   621,   622,   625,
     0,     3,     6,     7,   377,     8,     9,   353,    43,   617,
    10,   230,   232,     0,   333,   333,   353,   333,   353,   326,
   353,     0,   353,   107,   245,   623,    20,   353,   381,   382,
   383,   386,   387,   248,   245,   245,   241,   353,   626,   353,
   353,   624,     0,   469,   245,   476,     0,     0,     0,   599,
     0,     0,     0,     0,   245,   509,     0,   245,   245,   245,
   245,   245,   245,   245,   245,   245,     0,    42,     0,     0,
     0,     0,     0,     0,   245,   145,   141,   144,   142,   520,
   146,   157,   177,   167,   166,   179,   183,   186,   189,   194,
   197,   199,   201,   203,   206,   209,   213,   225,   511,   171,
     0,     0,   501,   459,   460,   461,   462,     0,     0,   463,
   245,   464,     0,   465,     0,   466,   468,   140,     0,   453,
     0,   507,     0,   483,   440,     0,     0,     0,   449,     0,
   450,   429,   448,   445,   446,   441,   442,   443,     0,     0,
   447,     0,     0,     0,   451,   428,     0,   262,   263,   264,
   265,   270,   272,   271,   275,   276,   287,   289,   290,   288,
   273,   274,   266,   267,   268,   269,   284,   285,   282,   286,
   277,   278,   281,   279,   280,   293,   295,   300,   283,   296,
   297,   298,   299,   291,   292,   294,   301,   302,   305,   306,
   303,   304,   311,   313,   312,   314,   315,   316,   317,   318,
   319,   320,     4,   245,     0,   109,   113,   503,   353,   353,
   618,     5,   353,   334,   330,   331,   324,   332,     0,   245,
   245,   322,   245,   245,     0,   323,   378,   321,   384,   388,
   353,     0,   247,   353,     0,   238,   245,   617,    16,    18,
     0,   353,   245,    28,   396,   245,   141,   144,   177,   229,
   472,   140,     0,   245,   245,   245,   245,     0,   608,   610,
   615,     0,     0,   353,   402,     0,     0,   160,   165,   164,
   163,   162,   161,     0,   245,   158,   159,   245,     0,     0,
     0,     0,     0,   245,   478,   245,   471,   245,   418,   419,
   420,   421,     0,   422,   423,   245,   425,   245,   424,   426,
   483,   245,   245,   153,   154,     0,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   204,   210,   207,   510,   245,     0,   606,
    39,     0,   484,   502,   513,   603,     0,   470,   245,     0,
     0,     0,   508,    40,   430,   434,   444,   455,   456,   454,
     0,     0,    41,    22,   245,   396,   353,   245,   483,   504,
   245,   233,   108,   353,     0,   328,     0,   353,     0,   353,
     0,   245,   245,   244,   245,   243,   239,   353,     0,   245,
     0,   353,   245,    19,   393,     0,     0,   379,   394,   245,
     0,     0,   477,     0,   516,     0,   228,     0,   607,   616,
   143,   245,   245,     0,   404,   403,   405,   245,   467,   245,
     0,   611,   612,   613,   614,   609,   474,     0,     0,   602,
   353,   481,   600,     0,     0,   148,     0,   155,     0,     0,
     0,   214,   215,   216,   217,   218,   219,   220,   221,   222,
   223,   224,   180,   181,   182,   185,   184,   187,   188,   190,
   191,   192,   193,   195,   196,   198,   200,   202,   245,   245,
   245,   226,   245,   245,   172,   497,   144,   501,     0,   353,
   482,   514,     0,     0,   452,   438,     0,     0,    24,     0,
   488,   245,   505,   110,   353,   245,   353,   483,   112,   245,
   234,   327,   245,   343,     0,   351,   346,     0,   352,     0,
   368,   371,   365,   367,   249,   245,   245,   617,    15,    30,
   245,   396,   245,    17,   380,   389,   391,    36,   398,   353,
   397,   401,   473,   512,     0,   518,   245,   325,   410,     0,
   396,   406,   245,     0,   178,   353,   245,     0,   479,   480,
   496,     0,   521,   245,   149,   147,   245,   245,   205,     0,
   208,   245,   174,   245,   176,   498,   499,   245,   245,   245,
   519,   245,   245,   353,    44,    26,   489,   492,   245,   245,
   490,   245,   506,     0,   236,   245,   329,   349,   485,   335,
   350,   485,   338,   245,   370,   245,     0,     0,   245,   245,
   245,     0,    32,     0,   245,     0,    46,   395,   245,   407,
   245,     0,   411,   414,   245,     0,   412,     0,   396,     0,
     0,   475,   245,   245,   156,   151,   152,   211,     0,     0,
   500,   515,     0,   245,   245,   245,   245,   245,   245,   245,
   245,   245,     0,   141,   144,   142,   157,   177,   166,   183,
   186,   189,   194,   197,   199,   201,   203,   206,     0,   524,
   523,   532,   541,   551,   553,   557,   560,   563,   568,   571,
   573,   575,   577,   579,   581,   585,   526,   140,     0,    23,
    25,    72,    44,   493,   494,   245,   491,    21,   245,   250,
   353,   341,   485,   353,   342,   485,   364,   369,   245,     0,
   242,   245,   252,   240,   245,     0,   353,    46,    34,     0,
   390,   392,    37,    79,   399,   373,     0,   245,   407,   374,
   408,   517,   435,     0,   415,   413,   416,     0,     0,   150,
     0,   524,   245,   173,   175,   605,     0,     0,   160,   165,
   164,   163,   162,   161,   158,   159,   245,   245,   245,   153,
   154,     0,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   204,
   582,   207,   439,     0,   433,    66,    82,    70,    86,    87,
    88,    89,    90,    93,    94,    45,    72,    48,    71,   353,
   353,    52,    27,   495,   245,     0,   355,   353,   353,   354,
   353,   353,   353,   372,   245,   255,     0,   250,    12,    31,
    33,    46,    29,   617,    73,    84,    77,    47,    79,    50,
    78,   396,   400,   375,   376,   245,   409,   417,     0,   169,
     0,   483,   212,   604,   143,   245,     0,   148,     0,     0,
     0,     0,   586,   587,   588,   589,   590,   591,   592,   593,
   594,   595,   596,   180,   181,   182,   185,   184,   187,   188,
   190,   191,   192,   193,   195,   196,   198,   200,   202,   578,
   245,   580,   245,   432,   353,    64,   617,    49,   103,     0,
    53,   250,   245,   353,     0,   245,   356,   344,   353,   347,
   353,   366,   253,   245,   617,    35,     0,   353,    64,   617,
    51,   245,   436,   245,     0,   601,   598,   178,   245,   149,
   147,   245,   245,     0,   525,   353,    59,    60,    61,    62,
    63,   617,    54,    64,     0,     0,     0,   119,    83,   128,
   617,     0,   118,     0,    95,   100,    99,    98,    97,    96,
   101,   102,   105,     0,   235,   245,   358,   245,   245,   353,
   361,     0,   336,     0,   339,   254,   256,     0,    38,   617,
   617,    85,   617,   117,   245,     0,   170,   168,   597,   484,
     0,   151,   152,   583,     0,    64,     0,    65,    58,    56,
    57,     0,   122,     0,     0,     0,     0,     0,   115,     0,
     0,   131,   138,   617,   130,     0,   245,   251,   245,   245,
     0,   359,   245,   345,     0,   348,     0,    13,    81,    81,
   116,   437,   522,   150,   245,    81,    55,    81,   123,   120,
   127,   126,     0,   124,   125,   129,   114,     0,   134,     0,
     0,     0,     0,     0,   617,   237,   362,   353,   357,   245,
   337,   340,    74,    80,    76,   584,    67,    69,   121,   135,
   132,     0,   136,   137,   139,    92,   245,     0,   360,   363,
   133,   104,    91,   245,   106,     0,     0,     0
};

static const short yydefgoto[] = {  1156,
    81,    82,    83,    84,   121,   318,   319,    85,   655,   763,
   320,   788,   902,    86,   687,   904,   887,    88,   761,   762,
   793,   794,   876,   908,   877,  1012,  1013,  1070,  1014,  1015,
   878,   965,   966,   910,   988,   989,  1133,  1134,   967,   911,
   990,   880,  1154,  1147,   881,  1033,   882,  1024,  1086,    89,
   287,   447,   449,    90,  1019,  1052,  1020,  1113,  1021,  1083,
  1084,   161,   162,   517,   163,   919,   164,   165,   419,   555,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
   549,   176,   551,   177,   550,   813,   178,   206,   488,   331,
   288,    92,   666,   769,   114,   597,    93,   314,   180,   285,
   115,   116,   886,   784,   897,    95,    96,    97,    98,   345,
   289,   455,   100,   295,   101,   773,  1095,   776,  1097,   669,
  1042,   672,  1044,   102,   889,   890,  1039,  1040,   103,   677,
   590,   591,   798,   118,   477,   111,   112,   105,   605,   606,
   478,   479,   480,   689,   611,   346,   804,   800,   497,   367,
   207,   227,   208,   209,   368,   916,  1056,   211,   652,   212,
   213,   214,   215,   182,   424,   369,   370,   482,   628,   371,
   333,   508,   372,   187,   373,   561,   771,   978,   220,   574,
   512,   423,   189,   575,   576,   374,   190,   191,   375,   649,
   615,   376,   223,   377,   381,   704,   740,   864,   741,   742,
   743,   744,   745,   746,   747,   748,   749,   750,   751,   752,
   753,   754,   755,   756,   961,  1105,   757,  1060,   378,   379,
   196,   380,   292,   332,   199,   108
};

static const short yypact[] = {  2004,
-32768,   118,  5457,-32768,  6254,-32768,   781,  2949,  3313,  3313,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   460,-32768,-32768,-32768,
  2186,-32768,-32768,-32768,   350,-32768,-32768,  5201,-32768,   123,
-32768,-32768,-32768,   145,  6095,  6095,-32768,  6095,   176,    51,
-32768,   557,-32768,-32768,   781,-32768,-32768,-32768,-32768,-32768,
-32768,   118,-32768,-32768,   183,-32768,   176,-32768,-32768,-32768,
  5457,-32768,   208,-32768,  5072,-32768,   264,   271,   330,-32768,
   345,   781,   257,   366,  1104,-32768,  2544,  5072,  5072,  5072,
  5072,  5072,  5072,-32768,  5611,  5611,   382,-32768,   400,   429,
   436,   441,   451,   326,  4659,-32768,   483,   496,-32768,   501,
-32768,   502,   884,-32768,-32768,-32768,   747,   601,   724,   650,
   807,   498,   459,   492,   485,   121,-32768,-32768,   313,-32768,
  3452,   477,   482,-32768,-32768,-32768,-32768,   533,  3088,-32768,
  4659,-32768,  3452,-32768,  3452,-32768,-32768,   569,   584,-32768,
   577,-32768,  2725,   501,   596,   338,   576,  3131,-32768,  3313,
-32768,-32768,-32768,  5854,-32768,-32768,-32768,-32768,   656,   657,
-32768,  3313,  3313,  3452,-32768,-32768,   592,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   664,   673,-32768,-32768,-32768,   176,  5045,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   690,   559,
-32768,-32768,   781,   781,    76,-32768,   350,-32768,-32768,-32768,
-32768,   695,-32768,-32768,   697,   680,   559,   123,-32768,   373,
   693,-32768,   781,-32768,    91,  5072,-32768,-32768,-32768,-32768,
-32768,-32768,   711,  5072,  5072,  5072,  1907,   735,-32768,-32768,
-32768,   469,   443,  5724,   186,   718,   741,-32768,-32768,-32768,
-32768,-32768,-32768,   737,  5072,-32768,-32768,  5072,   768,   770,
   777,   784,   802,  5072,-32768,  1933,-32768,  4659,-32768,-32768,
-32768,-32768,   812,-32768,-32768,  4659,-32768,  4659,-32768,-32768,
-32768,  3481,  5072,-32768,-32768,   106,  5072,  5072,  5072,  5072,
  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,
  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,
  5072,  5072,  5072,-32768,-32768,-32768,-32768,  5072,   842,-32768,
-32768,  2363,-32768,-32768,   828,-32768,   840,-32768,  5072,   629,
   814,   830,-32768,-32768,-32768,-32768,  5854,-32768,-32768,-32768,
  2906,   847,-32768,-32768,  5072,    97,  3554,   559,   851,-32768,
   559,-32768,   284,  6254,   778,   856,   868,   878,   886,   878,
   781,   900,   559,-32768,   559,-32768,-32768,-32768,   806,   905,
   929,-32768,   559,   373,-32768,   781,   912,-32768,   919,   781,
    98,   940,-32768,   446,   946,   512,   946,   951,-32768,-32768,
-32768,-32768,  1472,   948,   404,-32768,   450,  5072,-32768,-32768,
   954,-32768,-32768,-32768,-32768,-32768,-32768,   955,   957,-32768,
  3554,-32768,-32768,   975,   969,-32768,   537,-32768,   371,   781,
   781,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   747,   747,   601,   601,   724,
   724,   724,   724,   650,   650,   807,   498,   459,  5072,  5072,
  5072,-32768,  5622,  5642,-32768,-32768,  5387,-32768,  3270,  3730,
-32768,-32768,   974,   561,-32768,-32768,   977,   984,-32768,   989,
-32768,  4082,-32768,-32768,  3906,  4125,-32768,   851,-32768,-32768,
   965,-32768,-32768,  1006,  1022,-32768,  1011,  1028,-32768,   882,
-32768,  1000,-32768,-32768,-32768,   183,-32768,   137,-32768,-32768,
  5072,   171,   559,-32768,-32768,  1044,-32768,-32768,  1070,  6254,
-32768,-32768,-32768,-32768,  1052,-32768,  1907,-32768,-32768,  1061,
   723,   450,  4217,  1056,-32768,-32768,-32768,  1067,-32768,-32768,
-32768,  1071,-32768,  5072,-32768,-32768,-32768,-32768,   492,   888,
   485,  5072,-32768,  5072,-32768,-32768,-32768,  4260,  4659,  5072,
-32768,  5653,  5072,-32768,-32768,-32768,-32768,-32768,  4303,  4438,
-32768,  4481,-32768,  1069,-32768,-32768,-32768,-32768,-32768,  1076,
-32768,-32768,  1077,-32768,   781,-32768,   781,  1087,  3366,-32768,
-32768,  1081,-32768,  1084,-32768,   103,-32768,-32768,   781,   736,
  4659,  1092,-32768,-32768,   309,  1086,-32768,  1085,   126,  1093,
  1088,-32768,  5072,  5653,-32768,-32768,-32768,-32768,  1094,  1095,
-32768,-32768,   563,  5072,  5072,  5072,  5072,  5072,  5072,  5072,
  5611,  5611,  1097,   587,   631,   634,   761,  1125,   642,   783,
   963,  1003,   726,  1015,  1089,  1078,  1083,  1074,   201,  1099,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   684,   685,-32768,
-32768,  1157,-32768,-32768,-32768,  4616,-32768,-32768,-32768,-32768,
  6184,-32768,-32768,  6184,-32768,-32768,-32768,-32768,  5072,  1051,
-32768,  3366,-32768,-32768,  3366,  1037,-32768,-32768,-32768,  1105,
-32768,-32768,-32768,  1306,-32768,   350,  1107,-32768,   692,-32768,
   450,-32768,-32768,  1114,-32768,-32768,-32768,  1115,   781,-32768,
   704,  1124,  5072,-32768,-32768,  1135,   719,  1130,   720,   725,
   779,   817,   819,   825,   831,   857,  5072,  4395,  5072,   875,
   913,   139,  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,
  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,
  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,  5072,
-32768,  5072,-32768,  1111,  1138,    72,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   987,-32768,-32768,-32768,
-32768,   845,-32768,-32768,  3366,   478,-32768,   176,  5271,-32768,
  6184,  5271,  6184,-32768,-32768,-32768,  1053,-32768,-32768,-32768,
-32768,-32768,-32768,   123,   138,-32768,-32768,-32768,   990,-32768,
-32768,   636,-32768,-32768,-32768,  4916,-32768,-32768,   514,-32768,
  1139,   851,-32768,-32768,   938,  5072,  1140,   964,   966,   390,
   781,   781,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   985,   988,   991,   543,   983,   212,   456,
   354,   360,   393,   522,   398,   811,   132,   408,   260,   492,
  5072,   485,  5653,-32768,  5984,    62,   122,-32768,-32768,   833,
-32768,-32768,-32768,-32768,  1141,   327,-32768,-32768,  5271,-32768,
  5271,-32768,-32768,  3227,   571,-32768,  1072,  5984,    62,   122,
-32768,   617,-32768,-32768,   781,-32768,   992,   999,-32768,  1004,
  1007,-32768,-32768,  1062,-32768,  4889,-32768,-32768,-32768,-32768,
-32768,   628,-32768,    62,   916,    60,    60,-32768,-32768,   266,
   665,  1079,-32768,   140,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   709,-32768,   559,-32768,-32768,  1143,-32768,
  1146,  1149,-32768,  1150,-32768,-32768,-32768,  1090,-32768,  4732,
   628,-32768,   665,-32768,   579,  1148,-32768,-32768,-32768,-32768,
  1151,  1012,  1023,-32768,  1091,    62,  1108,-32768,-32768,-32768,
-32768,   117,   266,   381,   781,   781,    60,  1109,-32768,   140,
   140,-32768,   336,   750,-32768,   140,-32768,-32768,  5072,   327,
  1153,-32768,-32768,-32768,  1155,-32768,  1161,-32768,  1119,  1119,
-32768,-32768,-32768,  1025,  5072,  1119,-32768,  1119,-32768,-32768,
-32768,   266,  1166,-32768,-32768,   266,-32768,   457,   336,   445,
   781,   781,   140,  1112,   750,-32768,-32768,-32768,-32768,  5072,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1168,-32768,-32768,   336,-32768,-32768,  1113,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1177,  1199,-32768
};

static const short yypgoto[] = {-32768,
-32768,  1123,-32768,-32768,-32768,-32768,  -388,  -100,-32768,-32768,
   883,-32768,-32768,-32768,-32768,-32768,   112,-32768,   447,-32768,
  -679,-32768,-32768,-32768,  -693,   219,   147,-32768,-32768,   203,
   341,-32768,-32768,   310,-32768,-32768,  -918,  -659,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  -890,   100,   232,  -942,
   141,-32768,  -586,   397,   961,-32768,-32768,  -580,-32768,-32768,
   581,  -334,  -333,  -332,  -331,  -346,  -365,  -315,  -532,  -538,
-32768,  -572,-32768,  -115,-32768,-32768,  1073,  1068,  -534,  -358,
     1,-32768,-32768,-32768,  -461,-32768,-32768,-32768,     0,  -274,
   767,-32768,  -765,  -694,-32768,-32768,-32768,-32768,-32768,-32768,
   165,   651,-32768,   414,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   756,  -674,  -782,-32768,   143,-32768,-32768,
   565,   568,   452,     8,  -401,  1132,-32768,    42,-32768,-32768,
  -552,-32768,-32768,-32768,   556,  -287,   907,-32768,  -488,   467,
  1240,-32768,  1030,-32768,   392,-32768,-32768,-32768,-32768,   -97,
-32768,-32768,-32768,-32768,   172,  1133,  1411,-32768,-32768,  1435,
-32768,-32768,  -357,-32768,  1336,   194,  -568,  -806,-32768,   745,
-32768,-32768,   836,   -84,  -306,     6,-32768,   119,    69,-32768,
-32768,   251,-32768,   476,-32768,-32768,   555,-32768,   297,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1556,-32768,
-32768,  1646,  -120,   231,    90,-32768
};


#define	YYLAST		6435


static const short yytable[] = {    94,
    91,   595,    94,   290,   307,   507,   622,   104,   509,   330,
   228,   229,   641,   456,   221,   221,   639,   230,   231,   232,
   233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
   243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
   253,   254,   255,   113,   570,   471,   547,   256,   257,   258,
   259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
   269,   270,   271,   272,   546,   727,   536,   537,   696,   538,
   539,   729,   540,   541,   542,   543,   192,   544,   545,   739,
    94,    91,   692,  1016,   604,   980,   568,   896,   104,   107,
   898,   579,   107,  1017,   461,   475,   123,   548,   299,   892,
   909,   475,   879,   774,    94,   431,   977,   791,   901,   977,
   435,    87,   436,   738,   312,   313,   315,   727,   418,   737,
   321,   569,   491,   729,   440,  1072,  1073,   222,   222,   437,
   475,   739,   985,   520,   620,   301,   344,  1118,  1119,   291,
   291,  1109,  1074,   354,  1075,  1016,   808,  1007,  1008,   521,
   807,     2,  -572,   310,   291,  1017,  -572,   -68,   -68,   680,
  1076,   415,   323,  1080,    99,   738,   931,   117,   293,   120,
   107,   737,  1043,  1081,  1045,   475,   416,  1009,  1010,   183,
  1145,  1135,   932,  1112,   409,   410,  1116,  1137,   971,  1138,
   972,  1011,    87,  -245,   107,   683,   977,   469,   977,   471,
   684,   801,   344,   311,   891,   192,  1034,   893,   221,  -245,
   324,   493,   626,   221,   685,   221,   979,   879,   981,     2,
   509,   338,   986,   -75,   -75,   109,   110,   221,   221,  1112,
   106,   325,  -561,   106,    75,  1018,  -561,   106,   198,   198,
   198,   861,   682,   401,   402,    99,   -68,   -68,   330,   192,
    75,    76,   122,   648,    78,    79,   862,   192,   193,   294,
   294,   192,   294,   192,   698,  -353,  -353,  -353,   660,  -353,
  -353,  -353,  -353,  -353,   339,  -353,  -353,    75,    76,   122,
  -576,    78,    79,   445,  -576,   322,   735,   334,   299,  1047,
   450,  1074,   192,  1075,   335,   456,    75,  1018,   412,    94,
   454,  -353,   457,   459,  -353,   734,  -353,   453,   347,  1076,
   801,   106,   -75,   -75,    75,  1082,    94,   730,   731,   732,
   733,   222,   321,   962,   468,   344,   222,   960,   222,   330,
   417,   364,   365,   418,   493,   106,   736,   560,   735,   701,
   222,   222,     2,   435,   494,  -353,  -353,  -353,  1038,  -353,
  -353,   106,   420,   336,   709,   433,   710,   734,   418,   696,
     2,  1120,   106,  1121,   426,   344,   427,   198,   337,   730,
   731,   732,   733,  -246,  -564,   284,   727,   330,  -564,  1122,
  -565,   993,   729,   340,  -565,   198,   495,   193,   736,   107,
   739,   418,   458,   460,   462,   442,  -246,   636,   470,   181,
   210,   210,   403,   404,  1016,   358,   107,  1110,   403,   404,
   418,   198,   324,  -566,  1017,   359,  1001,  -566,  -569,   198,
   894,   198,  -569,   198,   738,   198,   818,  -245,  -574,   493,
   737,   193,  -574,   198,   405,   406,   411,   450,   198,   193,
   198,   403,   404,   193,   360,   193,   221,    94,   407,   408,
    94,   361,   198,   198,   198,   577,   362,   585,   580,   588,
   417,   594,    94,   418,    94,   363,   418,   491,  1016,   601,
   614,  1141,   321,  -245,   193,   623,  -562,   681,  1017,   610,
  -562,  1140,  1120,   194,  1121,   330,   490,   401,   402,   418,
   192,   618,   958,  -626,   494,   973,   624,   412,   974,   454,
  1122,    75,    76,   122,  -620,    78,    79,   330,   492,   296,
   957,   298,   947,   948,   323,   949,   950,  -624,   951,   952,
   953,   954,  -621,   955,   956,   382,   411,   383,   181,  -353,
   106,   413,   418,   106,   106,   106,   616,   107,   994,   414,
   107,   995,  -567,   959,  -626,  -353,  -567,   106,   384,   385,
   592,   422,   107,   106,   107,    75,  1018,   634,  1111,   222,
   450,   635,   324,  -559,   997,   607,   622,  -559,   421,   612,
   403,   404,   181,  -457,  1088,   450,   398,   399,   400,   664,
   181,   418,   454,   418,   181,   651,   181,   816,   291,   796,
  -623,   974,     2,   558,   210,   678,   679,   735,   198,   210,
   429,   210,   321,  -404,   493,   428,   198,  -529,   198,   637,
   638,  -529,   194,   210,   210,   181,   734,  -622,   492,    75,
  1018,   624,  1111,   303,   304,   305,   454,   192,   730,   731,
   732,   733,   401,   402,  -626,  -626,   706,   707,  -626,  -626,
   475,   344,   493,   344,   323,   291,   433,   736,  1066,   418,
     2,  -528,   198,   491,  -530,  -528,   194,   425,  -530,  -353,
   694,  -353,  -550,   330,   194,   770,  -550,   434,   194,  -353,
   194,   198,   193,   777,   438,   779,   439,   198,   106,   785,
   786,   106,   291,   443,   790,  1077,   405,   406,   610,   797,
   444,   106,   324,   106,   494,   106,   446,   923,   796,   194,
   407,   408,   467,   106,  -527,   418,   106,   452,  -527,   865,
   106,  1061,   464,   344,   466,  -245,   472,   493,   348,   349,
   350,   351,   352,   353,   418,     2,  1087,   475,   921,   974,
  1127,   799,   483,    75,    76,   122,   495,    78,    79,   418,
  -544,   198,   498,   925,  -544,  -549,  -353,   694,  -353,  -549,
   106,   106,   489,    75,    76,   122,  -353,    78,    79,  -245,
   500,   493,   851,   852,   592,   499,   592,   291,   885,     2,
  1123,  1150,   403,   404,   690,   792,   853,   854,   612,   107,
   398,   399,   400,   987,   828,   502,   829,   503,  -353,   198,
   198,    75,    76,   122,   504,    78,    79,   913,   797,  -548,
   624,   505,   198,  -548,  -353,   198,   198,   830,   831,   193,
  -353,  -353,  -353,   181,  -353,  -353,   844,   845,   846,   506,
   273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
   511,  -570,   210,   106,   510,  -570,   562,  -547,   565,  -546,
   799,  -547,   513,  -546,   514,  -545,  1022,   405,   406,  -545,
   563,  -542,   297,   566,   300,  -542,   302,   567,   306,   409,
   410,   407,   408,   308,  1048,   582,    75,    76,   122,  1054,
    78,    79,   914,   316,   578,   317,   583,  -543,   198,   198,
  1006,  -543,   758,   553,   554,  1065,   584,   975,   107,   198,
   198,  1067,   198,   599,   982,  -539,  -245,   194,   920,  -539,
  1078,   674,   675,  1050,   587,   106,   387,   106,   418,   708,
    75,    76,   122,   573,    78,    79,   106,   386,   593,   106,
   106,   198,   869,   870,   871,   872,   873,   874,   875,  1099,
  1100,   600,  1101,  -540,   758,   888,   608,  -540,   888,   609,
   388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
   181,  1025,   602,  1026,   307,    75,    76,   122,  -531,    78,
    79,   613,  -531,  1124,  1027,  1028,   418,  1029,   617,  1030,
  1031,   621,  1035,   330,   627,    94,   629,   573,   533,   534,
   535,   630,  1032,  1041,  -534,   632,   634,   665,  -534,  1136,
  1000,   797,   633,  1057,   847,   848,   198,   650,   454,   580,
   653,  1062,  1063,  -558,  1148,  -554,   450,  -558,  -555,  -554,
   654,  -556,  -555,   656,   330,  -556,   398,   399,   400,  -552,
  1002,  1003,   676,  -552,  -535,   668,   573,  -533,  -535,   106,
   671,  -533,  -537,  1055,   194,    94,  -537,  1089,  1091,   106,
   670,   573,   663,  -538,   448,  -536,   673,  -538,   451,  -536,
   450,   849,   850,   888,   797,   888,   888,   888,   866,   867,
   868,   905,   906,   907,   686,   107,   463,   855,   856,   465,
   895,   675,   983,   984,   688,   179,   691,   473,   625,   699,
   476,   107,   418,  1064,  1058,   329,  1126,   693,   702,    94,
    75,  1069,  1130,   768,   703,   772,   775,  1041,   329,   329,
   329,   329,   329,   329,   781,   356,   357,   787,   789,   803,
   805,   806,   810,   809,   663,   712,   858,   857,   814,   815,
   827,   341,   859,   863,   899,   107,   663,   326,   860,   903,
   912,   963,   138,   139,   140,   141,   142,   143,   917,   918,
   184,   216,   216,   888,   107,   888,  1152,   833,   922,   144,
   145,   146,   924,  1155,   926,   964,   996,   802,  1037,  1049,
   999,   106,   106,  1090,  1114,  1115,  1079,  1093,  1094,  1096,
  1129,  1059,  1102,   147,  1131,  1104,  1157,  1098,  1106,   107,
  1132,   834,   835,   836,   837,   838,   839,   840,   841,   842,
   843,   867,  1139,   758,  1151,  1108,  1117,  1023,  1158,  1146,
  1153,   476,   342,   283,   343,   474,   106,  1051,   581,   883,
  1143,  1144,  1107,   586,   156,   589,  1068,   968,   991,  1142,
  1023,  1053,   106,   598,   929,   106,  1125,   603,   866,   867,
   868,   596,  1128,   667,   869,   870,   871,   872,   873,   874,
   875,   780,   778,   309,   795,  1071,  1023,  1023,   179,   226,
   915,   496,   441,  1103,  1085,   631,   179,   559,   812,  1005,
   179,     0,   179,     0,     0,     0,   106,     0,     0,   184,
   430,     0,     0,     0,     0,     0,     0,     0,    75,   327,
   328,   159,     0,     0,     0,   106,     0,     0,     0,     0,
     0,   179,     0,     0,     0,   819,   820,   821,   822,   823,
   824,     0,     0,     0,  1023,   106,   106,  1023,     0,     0,
  1085,  1085,     0,   184,     0,     0,  1085,     0,     0,     0,
   106,   184,     0,     0,   329,   184,     0,   184,     0,     0,
     0,     0,   581,     0,     0,   216,     0,     0,     0,     0,
   216,     0,   216,   188,   219,   219,     0,     0,     0,     0,
  1023,   106,   106,  1085,   216,   216,   184,   476,   329,   329,
   329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
   329,   329,   329,   329,     0,     0,   695,   905,   906,   907,
     0,   700,     0,   869,   870,   871,   872,   873,   874,   875,
     0,     0,     0,   481,     0,     0,     0,     0,     0,     0,
     0,   484,   485,   486,   487,   329,     0,     0,     0,   760,
     0,     0,     0,     0,     0,     0,     0,     0,   185,   217,
   217,     0,   481,     0,   944,   945,   946,     0,     0,     0,
   501,     0,     0,   481,     0,     0,     0,     0,     0,     0,
     0,     0,   186,   218,   218,     0,     0,     0,     0,     0,
   519,     0,     0,   329,   518,     0,     0,     0,   329,   522,
   523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     0,     0,   188,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   832,     0,     0,     0,     0,     0,     0,   179,
   552,     0,     0,     0,     0,   326,   564,     0,   619,     0,
   138,   139,   140,   141,   142,   143,   998,     0,     0,   329,
     0,   329,     0,   643,   645,     0,   188,   144,   145,   146,
     0,     0,     0,     0,   188,     0,     0,     0,   188,     0,
   188,     0,     0,     0,     0,     0,     0,     0,   219,   432,
     0,   147,   900,   219,     0,   219,     0,   185,     0,     0,
     0,     0,     0,     0,   184,     0,     0,   219,   219,   188,
     0,   329,     0,   195,   224,   224,     0,     0,     0,     0,
     0,   186,     0,   216,     0,     0,     0,     0,     0,     0,
     0,     0,   156,   329,     0,     0,     0,     0,     0,     0,
     0,   185,     0,     0,     0,     0,     0,     0,     0,   185,
     0,     0,     0,   185,     0,   185,     0,     0,     0,     0,
     0,     0,   728,   217,     0,   186,     0,   640,   217,     0,
   217,     0,     0,   186,     0,     0,   179,   186,     0,   186,
     0,     0,   217,   217,   185,   969,   970,   218,     0,     0,
     0,     0,   218,   976,   218,     0,    75,   327,   328,   159,
     0,     0,     0,   197,   225,   225,   218,   218,   186,     0,
     0,     0,     0,     0,   728,     0,     0,   992,     0,     0,
     0,     0,     0,     0,     0,   329,   329,   329,   329,   329,
   329,   825,   826,     0,   487,     0,     0,     0,     0,     0,
     0,   184,   195,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   705,     0,     0,   481,
     0,   481,     0,     0,     0,     0,   515,   713,     0,     0,
   759,     0,     0,     0,     0,     0,     0,     0,     0,  1036,
     0,     0,     0,     0,     0,     0,   195,     0,     0,   329,
     0,     0,     0,     0,   195,     0,     0,     0,   195,     0,
   195,   783,     0,     0,     0,     0,     0,   188,   224,     0,
     0,     0,     0,   224,     0,   224,     0,     0,     0,     0,
   811,     0,     0,   329,     0,     0,   219,   224,   224,   195,
     0,   817,   197,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1092,     0,     0,     0,     0,
     0,     0,     0,     0,   329,   329,   329,   329,   329,   329,
   329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
   329,     0,   329,     0,     0,     0,   197,     0,     0,     0,
     0,     0,   185,     0,   197,     0,     0,     0,   197,     0,
   197,     0,     0,     0,     0,     0,     0,     0,   225,     0,
     0,   217,     0,   225,   783,   225,   186,   783,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   225,   225,   197,
     0,     0,     0,     0,     0,   218,     0,     0,     0,     0,
     0,     0,     0,  1149,     0,     0,   329,     0,     0,     0,
     0,     0,     0,     0,   188,     0,   930,     0,     0,   927,
   518,     0,     0,     0,     0,   933,   934,   935,   936,   937,
   938,   939,   940,   941,   942,   943,     0,     0,     0,     0,
     0,     0,     0,   728,  -227,     0,     0,     0,     0,     0,
   326,     0,     0,     0,     0,   138,   139,   140,   141,   142,
   143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -483,   144,   145,   146,     0,   366,   783,     0,     0,
     0,   138,   139,   140,   141,   142,   143,     0,     0,   185,
     0,     0,     0,     0,     0,     0,   147,   195,   144,   145,
   146,     0,     0,   487,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   186,     0,     0,   224,     0,     0,     0,
     0,     0,   147,    -1,     1,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  -245,  1004,     0,
     0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
     0,     0,     0,   156,     0,     0,     0,     0,     3,   329,
     0,     0,     0,     0,     0,     0,   783,     0,     0,     0,
     0,     0,     0,     0,     0,   329,     0,   197,     0,     0,
  -353,  -353,  -353,     0,     4,     0,     0,     0,     5,     6,
     7,    75,   327,   328,   159,     0,   225,     0,     0,     0,
   329,     0,     8,     9,    10,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    75,   327,   328,
   159,    11,    12,    13,   195,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,     0,    78,    79,    80,    -2,     1,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   197,     0,     0,     0,     0,  -245,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  -353,  -353,  -353,     0,     4,     0,     0,     0,
     5,     6,     7,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     8,     9,    10,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    11,    12,    13,     0,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    76,    77,   124,    78,    79,    80,     0,   125,   126,
   127,     0,   128,   129,   130,   131,   132,   133,   134,   135,
   136,  -483,   556,     0,     0,     0,   137,     0,     0,     0,
     0,   138,   139,   140,   141,   142,   143,     0,     0,     0,
     0,     0,     0,     0,  -245,  -245,     0,     3,   144,   145,
   146,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  -353,
  -353,  -353,   147,     4,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   149,   150,   151,   152,   153,
   154,     0,     0,     0,     0,     0,     0,     0,     0,   155,
    11,    12,    13,   156,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,   157,   557,
   159,   160,    79,    80,   124,     0,     0,     0,     0,   125,
   126,   127,     0,   128,   129,   130,   131,   132,   133,   134,
   135,   136,  -483,     0,     0,     0,     0,   137,     0,     0,
     0,     0,   138,   139,   140,   141,   142,   143,     0,     0,
     0,     0,     0,     0,     0,  -245,  -245,     0,     0,   144,
   145,   146,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  -245,  -245,  -245,   147,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   149,   150,   151,   152,
   153,   154,     0,     0,     0,     0,     0,     0,     0,     0,
   155,  -245,  -245,  -245,   156,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,     0,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,     0,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,    75,   157,
   158,   159,   160,    79,  -245,   200,     0,     0,     0,     0,
   125,   126,   127,     0,     0,   201,   130,   131,   132,   133,
   134,   135,   202,  -483,  -487,     0,     0,     0,   203,     0,
     0,     0,     0,   138,   139,   140,   141,   142,   143,     0,
     0,     0,     0,     0,     0,     0,  -245,  -245,     0,     0,
   144,   145,   146,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -245,  -245,  -245,   147,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   149,   150,   151,
   152,   153,   154,     0,     0,     0,     0,     0,     0,     0,
     0,   155,  -245,  -245,  -245,   156,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,     0,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,     0,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,    75,
   157,   158,   159,   204,   205,  -245,   200,     0,     0,     0,
     0,   125,   126,   127,     0,     0,   201,   130,   131,   132,
   133,   134,   135,   202,  -431,  -431,     0,     0,     0,   203,
  -431,     0,     0,     0,   138,   139,   140,   141,   142,   143,
     0,     0,     0,     0,     0,     0,     0,  -245,  -245,   124,
     0,   144,   145,   146,   125,   126,   127,     0,   128,   129,
   130,   131,   132,   133,   134,   135,   136,  -483,     0,     0,
     0,     0,   137,     0,     0,   147,     0,   138,   139,   140,
   141,   142,   143,     0,     0,     0,     0,     0,     0,     0,
  -245,  -245,     0,     0,   144,   145,   146,  -431,   149,   150,
   151,   152,   153,   154,     0,     0,     0,     0,     0,     0,
     0,     0,   155,     0,     0,     0,   156,     0,   147,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   148,   149,   150,   151,   152,   153,   154,     0,     0,     0,
     0,     0,     0,     0,     0,   155,     0,     0,     0,   156,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    75,   157,   158,   159,   204,   205,     0,     0,   124,     0,
     0,     0,     0,   125,   126,   127,     0,   128,   129,   130,
   131,   132,   133,   134,   135,   136,  -483,     0,     0,     0,
     0,   137,     0,     0,     0,     0,   138,   139,   140,   141,
   142,   143,     0,    75,   157,   158,   159,   160,    79,  -245,
  -245,   200,     0,   144,   145,   146,   125,   126,   127,     0,
     0,   201,   130,   131,   132,   133,   134,   135,   202,  -483,
  -487,     0,     0,     0,   203,     0,     0,   147,     0,   138,
   139,   140,   141,   142,   143,     0,     0,     0,     0,     0,
     0,     0,  -245,  -245,     0,     0,   144,   145,   146,  -458,
   149,   150,   151,   152,   153,   154,     0,     0,     0,     0,
     0,     0,     0,     0,   155,     0,     0,     0,   156,     0,
   147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  -427,   149,   150,   151,   152,   153,   154,     0,
     0,     0,     0,     0,     0,     0,     0,   155,     0,     0,
     0,   156,     0,     0,     0,   782,  1046,     0,     0,     0,
   326,     0,     0,     0,     0,   138,   139,   140,   141,   142,
   143,     0,    75,   157,   158,   159,   160,    79,     0,     0,
   124,     0,   144,   145,   146,   125,   126,   127,     0,   128,
   129,   130,   131,   132,   133,   134,   135,   136,  -483,   646,
     0,     0,     0,   137,     0,     0,   147,     0,   138,   139,
   140,   141,   142,   143,     0,    75,   157,   158,   159,   204,
   205,  -245,  -245,   200,     0,   144,   145,   146,   125,   126,
   127,     0,     0,   201,   130,   131,   132,   133,   134,   135,
   202,  -483,  -487,     0,     0,     0,   203,   156,     0,   147,
     0,   138,   139,   140,   141,   142,   143,     0,     0,     0,
     0,     0,     0,     0,  -245,  -245,     0,     0,   144,   145,
   146,     0,   149,   150,   151,   152,   153,   154,     0,     0,
     0,     0,     0,     0,     0,     0,   155,     0,     0,     0,
   156,     0,   147,     0,   782,     0,     0,     0,     0,   326,
     0,     0,     0,     0,   138,   139,   140,   141,   142,   143,
     0,    75,   327,   328,   159,   149,   150,   151,   152,   153,
   154,   144,   145,   146,     0,     0,     0,     0,     0,   155,
     0,     0,     0,   156,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   147,     0,     0,     0,     0,
     0,     0,     0,     0,    75,   157,   158,   159,   160,    79,
     0,     0,   124,     0,     0,     0,     0,   125,   126,   127,
     0,   128,   129,   130,   131,   132,   133,   134,   135,   136,
  -483,     0,     0,     0,     0,   137,   156,     0,     0,     0,
   138,   139,   140,   141,   142,   143,     0,    75,   157,   158,
   159,   204,   205,  -245,  -245,     0,     0,   144,   145,   146,
     0,     0,     0,     0,   326,   516,     0,     0,     0,   138,
   139,   140,   141,   142,   143,     0,     0,     0,     0,     0,
     0,   147,     0,     0,     0,     0,   144,   145,   146,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    75,   327,   328,   159,   149,   150,   151,   152,   153,   154,
   147,     0,     0,     0,     0,     0,     0,     0,   155,   125,
   126,   127,   156,   128,   129,   130,   131,   132,   133,   134,
   135,   202,  -483,   571,     0,     0,     0,   366,     0,     0,
     0,     0,   138,   139,   140,   141,   142,   143,     0,     0,
     0,   156,     0,     0,     0,  -245,  -245,     0,     3,   144,
   145,   146,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   147,     4,     0,    75,   157,   158,   159,
   160,    79,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   149,   150,   151,   152,
   153,   154,     0,     0,     0,    75,   327,   328,   159,     0,
   572,    11,    12,    13,   156,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   157,
   557,   159,   160,    79,    80,   125,   126,   127,     0,   128,
   129,   130,   131,   132,   133,   134,   135,   202,  -483,   647,
     0,     0,     0,   366,     0,     0,     0,     0,   138,   139,
   140,   141,   142,   143,     0,     0,     0,     0,     0,     0,
     0,  -245,  -245,     0,     3,   144,   145,   146,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
     4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   149,   150,   151,   152,   153,   154,     0,     0,
     0,     0,     0,     0,     0,     0,   155,    11,    12,    13,
   156,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,   157,   557,   159,   160,    79,
    80,   125,   126,   127,     0,   128,   129,   130,   131,   132,
   133,   134,   135,   202,  -483,   658,     0,     0,     0,   366,
     0,     0,     0,     0,   138,   139,   140,   141,   142,   143,
     0,     0,     0,     0,     0,     0,     0,  -245,  -245,     0,
     3,   144,   145,   146,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   147,     4,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   149,   150,
   151,   152,   153,   154,     0,     0,     0,     0,     0,     0,
     0,     0,   659,    11,    12,    13,   156,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,   157,   557,   159,   160,    79,    80,   125,   126,   127,
     0,   128,   129,   130,   131,   132,   133,   134,   135,   202,
  -483,   657,     0,     0,     0,   366,     0,     0,     0,     0,
   138,   139,   140,   141,   142,   143,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   144,   145,   146,
   125,   126,   127,     0,   128,   129,   130,   131,   132,   133,
   134,   135,   202,  -483,   661,     0,     0,     0,   366,     0,
     0,   147,     0,   138,   139,   140,   141,   142,   143,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   144,   145,   146,     0,   149,   150,   151,   152,   153,   154,
     0,     0,     0,     0,     0,     0,     0,     0,   155,     0,
     0,     0,   156,     0,   147,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   149,   150,   151,
   152,   153,   154,     0,     0,     0,     0,     0,     0,     0,
     0,   662,     0,     0,     0,   156,     0,     0,     0,     0,
   326,     0,     0,   697,     0,   138,   139,   140,   141,   142,
   143,     0,     0,     0,     0,     0,    75,   157,   158,   159,
   160,    79,   144,   145,   146,   125,   126,   127,     0,   128,
   129,   130,   131,   132,   133,   134,   135,   202,  -483,   711,
     0,     0,     0,   366,     0,     0,   147,     0,   138,   139,
   140,   141,   142,   143,     0,     0,     0,     0,     0,    75,
   157,   158,   159,   160,    79,   144,   145,   146,   125,   126,
   127,     0,   128,   129,   130,   131,   132,   133,   134,   135,
   202,  -483,   764,     0,     0,     0,   366,   156,     0,   147,
     0,   138,   139,   140,   141,   142,   143,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
   146,     0,   149,   150,   151,   152,   153,   154,     0,     0,
     0,     0,     0,     0,     0,     0,   155,     0,     0,     0,
   156,     0,   147,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    75,   327,   328,   159,   149,   150,   151,   152,   153,
   154,     0,     0,     0,     0,     0,     0,     0,     0,   155,
     0,     0,     0,   156,     0,     0,     0,     0,   326,   928,
     0,     0,     0,   138,   139,   140,   141,   142,   143,     0,
     0,     0,     0,     0,    75,   157,   158,   159,   160,    79,
   144,   145,   146,   125,   126,   127,     0,   128,   129,   130,
   131,   132,   133,   134,   135,   202,  -483,   765,     0,     0,
     0,   366,     0,     0,   147,     0,   138,   139,   140,   141,
   142,   143,     0,     0,     0,     0,     0,    75,   157,   158,
   159,   160,    79,   144,   145,   146,   125,   126,   127,     0,
   128,   129,   130,   131,   132,   133,   134,   135,   202,  -483,
   767,     0,     0,     0,   366,   156,     0,   147,     0,   138,
   139,   140,   141,   142,   143,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   144,   145,   146,     0,
   149,   150,   151,   152,   153,   154,     0,     0,     0,     0,
     0,     0,     0,     0,   766,     0,     0,     0,   156,     0,
   147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
   327,   328,   159,   149,   150,   151,   152,   153,   154,     0,
     0,     0,     0,     0,     0,     0,     0,   155,     0,     0,
     0,   156,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    75,   157,   158,   159,   160,    79,     0,     0,
     0,   125,   126,   127,     0,   128,   129,   130,   131,   132,
   133,   134,   135,   202,  -483,   884,     0,     0,     0,   366,
     0,     0,     0,     0,   138,   139,   140,   141,   142,   143,
     0,     0,     0,     0,     0,    75,   157,   158,   159,   160,
    79,   144,   145,   146,   125,   126,   127,     0,   128,   129,
   130,   131,   132,   133,   134,   135,   202,  -483,     0,     0,
     0,     0,   366,     0,     0,   147,     0,   138,   139,   140,
   141,   142,   143,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   144,   145,   146,     0,   149,   150,
   151,   152,   153,   154,     0,     0,     0,     0,     0,     0,
     0,     0,   155,     0,     0,     0,   156,     0,   147,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   291,
     0,   149,   150,   151,   152,   153,   154,     0,     0,     0,
     0,     0,     0,     0,     0,   155,     0,     0,     0,   156,
     0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    75,   157,   158,   159,   160,    79,     0,     0,  -353,  -353,
  -353,     0,     4,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    75,   157,   158,   159,   160,    79,    11,
    12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,   291,     0,   119,     0,
     0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     3,     0,     0,     0,     0,     0,   326,
  -227,     0,     0,     0,   138,   139,   140,   141,   142,   143,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
     0,   144,   145,   146,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  -617,     0,     0,     0,
     0,     0,     0,     0,     0,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    11,    12,    13,     0,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,   156,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,  -111,     0,   119,     0,     0,  -111,    80,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
    75,   327,   328,   159,     0,   326,     0,     0,     0,     0,
   138,   139,   140,   141,   142,   143,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     4,     0,   144,   145,   146,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   147,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    11,    12,    13,     0,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,   156,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,   286,
     0,   119,     0,     0,     0,    80,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     3,    75,   327,   328,   159,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  -486,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
    13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,     0,     0,   119,    11,    12,
    13,    80,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,  -624,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,     0,     0,   119,     0,     0,
     0,    80,     0,  -626,  -626,  -626,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -626,     0,     0,     0,     0,     0,     0,     0,     0,
  -245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     2,     0,     0,     0,  -626,  -626,  -626,     0,  -626,  -626,
  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,     0,  -626,
  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
  -626,  -626,  -626,  -626,     0,  -626,  -626,  -626,  -626,  -626,
  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
  -626,     0,     0,     0,    11,    12,    13,  -626,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,     0,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    76,    77,   355,    78,    79,    80,     0,   138,
   139,   140,   141,   142,   143,   642,     0,     0,     0,     0,
   138,   139,   140,   141,   142,   143,   144,   145,   146,     0,
     0,     0,     0,     0,     0,   644,     0,   144,   145,   146,
   138,   139,   140,   141,   142,   143,   714,     0,     0,     0,
   147,   715,   716,   717,   718,   719,   720,   144,   145,   146,
     0,   147,     0,     0,     0,     0,     0,     0,   144,   721,
   722,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   147,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   156,   723,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   156,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   156,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   156,     0,  -171,  -171,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    75,   327,   328,   159,     0,
     0,     0,     0,     0,     0,     0,    75,   327,   328,   159,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    75,   327,   328,   159,
     0,     0,     0,     0,     0,     0,     0,    75,   724,   725,
   726,    11,    12,    13,     0,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,     3,     0,
   119,     0,     0,     0,    80,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  -353,  -353,  -353,     0,     4,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    11,    12,    13,     0,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,     3,     0,
   119,     0,     0,     0,    80,     0,     0,     0,     0,     0,
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
    67,    68,    69,    70,    71,    72,    73,    74,     0,     0,
   119,  -353,  -353,  -353,    80,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    11,    12,    13,     0,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,     0,
     0,   119,     8,     9,    10,    80,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    11,    12,    13,     0,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,     0,     0,
   119,    11,    12,    13,    80,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,     0,     0,
   119,     0,     0,     0,    80
};

static const short yycheck[] = {     0,
     0,   463,     3,    88,   105,   364,   495,     0,   366,   125,
    11,    12,   551,   301,     9,    10,   549,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,     2,   446,   320,   412,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,   411,   652,   401,   402,   621,   403,
   404,   652,   405,   406,   407,   408,     8,   409,   410,   652,
    81,    81,   617,    24,   473,   892,   445,   782,    81,     0,
   785,   449,     3,    34,    19,     5,     7,   413,    99,   774,
   794,     5,   762,   672,   105,   203,   889,     5,   788,   892,
   208,     0,   210,   652,   115,   116,   117,   704,    21,   652,
   121,    25,    25,   704,   222,  1016,  1017,     9,    10,   214,
     5,   704,   898,    28,   493,    85,   137,  1080,  1081,    18,
    18,    25,    26,   144,    28,    24,   699,    86,    87,    44,
    25,    34,    21,   112,    18,    34,    25,    86,    87,    23,
    44,    41,   121,    24,     0,   704,    28,     3,    24,     5,
    81,   704,   979,    34,   981,     5,    56,   116,   117,     8,
  1123,  1100,    44,  1074,    53,    54,  1077,  1106,   882,  1108,
   885,   130,    81,    18,   105,    25,   979,   318,   981,   474,
   602,   690,   203,    21,   773,   137,   972,   776,   203,    24,
   121,    26,   500,   208,   603,   210,   891,   877,   893,    34,
   578,   132,   902,    86,    87,   108,   109,   222,   223,  1120,
     0,    24,    21,     3,   175,   176,    25,     7,     8,     9,
    10,    41,   601,    32,    33,    81,   175,   176,   364,   181,
   175,   176,   177,   560,   179,   180,    56,   189,     8,    95,
    96,   193,    98,   195,   623,   175,   176,   177,   575,   179,
   180,   175,   176,   177,    18,   179,   180,   175,   176,   177,
    21,   179,   180,   284,    25,   121,   652,    24,   289,   984,
   290,    26,   224,    28,    24,   583,   175,   176,    39,   300,
   301,    18,   303,   304,    21,   652,    23,   300,   137,    44,
   799,    81,   175,   176,   175,   176,   317,   652,   652,   652,
   652,   203,   323,   862,   317,   326,   208,   860,   210,   445,
    18,     6,     7,    21,    26,   105,   652,   422,   704,   627,
   222,   223,    34,   441,   345,   175,   176,   177,    22,   179,
   180,   121,   181,    24,   642,    18,   644,   704,    21,   912,
    34,    26,   132,    28,   193,   366,   195,   137,    24,   704,
   704,   704,   704,    24,    21,    26,   963,   493,    25,    44,
    21,   916,   963,    18,    25,   155,   345,   137,   704,   300,
   963,    21,   303,   304,   305,   224,    24,    27,    26,     8,
     9,    10,    49,    50,    24,    24,   317,    27,    49,    50,
    21,   181,   323,    21,    34,    16,    27,    25,    21,   189,
   779,   191,    25,   193,   963,   195,   714,    24,    21,    26,
   963,   181,    25,   203,    37,    38,    29,   437,   208,   189,
   210,    49,    50,   193,    16,   195,   441,   448,    51,    52,
   451,    16,   222,   223,   224,   448,    16,   458,   451,   460,
    18,   462,   463,    21,   465,    15,    21,    25,    24,   470,
    25,    27,   473,    24,   224,    26,    21,   598,    34,   480,
    25,    25,    26,     8,    28,   601,    18,    32,    33,    21,
   422,   492,   858,    34,   495,    18,   497,    39,    21,   500,
    44,   175,   176,   177,    22,   179,   180,   623,   344,    96,
   857,    98,   847,   848,   473,   849,   850,    22,   851,   852,
   853,   854,    22,   855,   856,    24,    29,    26,   137,    28,
   300,    40,    21,   303,   304,   305,    25,   448,    25,    55,
   451,    28,    21,   859,    85,    44,    25,   317,    47,    48,
   461,    19,   463,   323,   465,   175,   176,    21,   178,   441,
   560,    25,   473,    21,   922,   476,  1055,    25,    92,   480,
    49,    50,   181,    92,  1036,   575,    34,    35,    36,   580,
   189,    21,   583,    21,   193,    25,   195,    25,    18,   690,
    22,    21,    34,   422,   203,   596,   597,   963,   368,   208,
    24,   210,   603,    25,    26,    22,   376,    21,   378,   520,
   521,    25,   137,   222,   223,   224,   963,    22,   454,   175,
   176,   622,   178,    67,    68,    69,   627,   559,   963,   963,
   963,   963,    32,    33,   175,   176,   637,   638,   179,   180,
     5,   642,    26,   644,   603,    18,    18,   963,    21,    21,
    34,    21,   422,    25,    21,    25,   181,   191,    25,    24,
    25,    26,    21,   779,   189,   666,    25,    92,   193,    34,
   195,   441,   422,   674,    19,   676,    20,   447,   448,   680,
   681,   451,    18,    92,   685,    21,    37,    38,   689,   690,
    27,   461,   603,   463,   695,   465,    24,   813,   799,   224,
    51,    52,    23,   473,    21,    21,   476,    18,    25,    25,
   480,   999,    18,   714,    18,    24,    24,    26,   138,   139,
   140,   141,   142,   143,    21,    34,    18,     5,    25,    21,
  1089,   690,    22,   175,   176,   177,   695,   179,   180,    21,
    21,   511,    25,    25,    25,    21,    24,    25,    26,    25,
   520,   521,    18,   175,   176,   177,    34,   179,   180,    24,
    24,    26,    37,    38,   675,    25,   677,    18,   769,    34,
    21,  1130,    49,    50,   610,   686,    51,    52,   689,   690,
    34,    35,    36,   904,    24,    18,    26,    18,    28,   559,
   560,   175,   176,   177,    18,   179,   180,   798,   799,    21,
   801,    18,   572,    25,    44,   575,   576,    47,    48,   559,
   175,   176,   177,   422,   179,   180,    34,    35,    36,    18,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    19,    21,   441,   603,   368,    25,     9,    21,    25,    21,
   799,    25,   376,    25,   378,    21,   967,    37,    38,    25,
    11,    21,    97,    24,    99,    25,   101,    11,   103,    53,
    54,    51,    52,   108,   985,    88,   175,   176,   177,   990,
   179,   180,   181,   118,    24,   120,    21,    21,   648,   649,
   965,    25,   652,    42,    43,  1006,    19,   888,   799,   659,
   660,  1012,   662,    88,   895,    21,    19,   422,   809,    25,
  1021,    20,    21,   988,    19,   675,    23,   677,    21,    22,
   175,   176,   177,   447,   179,   180,   686,   162,    19,   689,
   690,   691,    78,    79,    80,    81,    82,    83,    84,  1050,
  1051,    27,  1053,    21,   704,   771,    25,    25,   774,    21,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
   559,   119,    24,   121,  1055,   175,   176,   177,    21,   179,
   180,    22,    25,  1084,   132,   133,    21,   135,    18,   137,
   138,    24,   973,  1089,    21,   976,    22,   511,   398,   399,
   400,    25,   150,   976,    21,    11,    21,    23,    25,  1105,
    25,   992,    24,   994,    32,    33,   766,    24,   999,   992,
    24,  1002,  1003,    21,  1125,    21,  1006,    25,    21,    25,
    27,    21,    25,    25,  1130,    25,    34,    35,    36,    21,
   931,   932,    23,    25,    21,    20,   560,    21,    25,   799,
    20,    25,    21,   992,   559,  1036,    25,  1038,  1039,   809,
    19,   575,   576,    21,   289,    21,    19,    25,   293,    25,
  1050,    49,    50,   889,  1055,   891,   892,   893,    72,    73,
    74,    72,    73,    74,    21,   976,   311,    53,    54,   314,
    20,    21,    20,    21,     5,     8,    25,   322,   498,    24,
   325,   992,    21,    22,   995,   125,  1087,    27,    22,  1090,
   175,   176,  1093,    25,    24,    20,    20,  1090,   138,   139,
   140,   141,   142,   143,    18,   145,   146,    27,    25,    18,
    25,    27,    25,    21,   648,   649,    39,    29,    25,    25,
    24,    18,    40,    25,    88,  1036,   660,    24,    55,    25,
    24,    21,    29,    30,    31,    32,    33,    34,    25,    25,
     8,     9,    10,   979,  1055,   981,  1147,    23,    25,    46,
    47,    48,    18,  1154,    25,    18,    18,   691,    18,    88,
    21,   931,   932,    21,  1075,  1076,    88,    22,    20,    20,
    18,   180,    25,    70,    20,    25,     0,    88,    88,  1090,
    20,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    73,    27,   963,    27,    88,    88,   967,     0,    88,
    88,   446,   135,    81,   137,   323,   976,   989,   453,   763,
  1121,  1122,  1066,   458,   111,   460,  1014,   877,   909,  1120,
   990,   990,   992,   468,   828,   995,  1086,   472,    72,    73,
    74,   465,  1090,   583,    78,    79,    80,    81,    82,    83,
    84,   677,   675,   112,   689,  1015,  1016,  1017,   181,    10,
   799,   345,   223,  1060,  1024,   511,   189,   422,   704,   963,
   193,    -1,   195,    -1,    -1,    -1,  1036,    -1,    -1,   137,
   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,   176,
   177,   178,    -1,    -1,    -1,  1055,    -1,    -1,    -1,    -1,
    -1,   224,    -1,    -1,    -1,   715,   716,   717,   718,   719,
   720,    -1,    -1,    -1,  1074,  1075,  1076,  1077,    -1,    -1,
  1080,  1081,    -1,   181,    -1,    -1,  1086,    -1,    -1,    -1,
  1090,   189,    -1,    -1,   364,   193,    -1,   195,    -1,    -1,
    -1,    -1,   577,    -1,    -1,   203,    -1,    -1,    -1,    -1,
   208,    -1,   210,     8,     9,    10,    -1,    -1,    -1,    -1,
  1120,  1121,  1122,  1123,   222,   223,   224,   602,   398,   399,
   400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
   410,   411,   412,   413,    -1,    -1,   621,    72,    73,    74,
    -1,   626,    -1,    78,    79,    80,    81,    82,    83,    84,
    -1,    -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   334,   335,   336,   337,   445,    -1,    -1,    -1,   654,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,
    10,    -1,   355,    -1,   844,   845,   846,    -1,    -1,    -1,
   358,    -1,    -1,   366,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
   383,    -1,    -1,   493,   382,    -1,    -1,    -1,   498,   387,
   388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   727,    -1,    -1,    -1,    -1,    -1,    -1,   422,
   418,    -1,    -1,    -1,    -1,    24,   429,    -1,    27,    -1,
    29,    30,    31,    32,    33,    34,   926,    -1,    -1,   549,
    -1,   551,    -1,   553,   554,    -1,   181,    46,    47,    48,
    -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,   193,    -1,
   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
    -1,    70,   787,   208,    -1,   210,    -1,   137,    -1,    -1,
    -1,    -1,    -1,    -1,   422,    -1,    -1,   222,   223,   224,
    -1,   601,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,
    -1,   137,    -1,   441,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   111,   623,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
    -1,    -1,    -1,   193,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,   652,   203,    -1,   181,    -1,   550,   208,    -1,
   210,    -1,    -1,   189,    -1,    -1,   559,   193,    -1,   195,
    -1,    -1,   222,   223,   224,   880,   881,   203,    -1,    -1,
    -1,    -1,   208,   888,   210,    -1,   175,   176,   177,   178,
    -1,    -1,    -1,     8,     9,    10,   222,   223,   224,    -1,
    -1,    -1,    -1,    -1,   704,    -1,    -1,   912,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   715,   716,   717,   718,   719,
   720,   721,   722,    -1,   617,    -1,    -1,    -1,    -1,    -1,
    -1,   559,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   634,    -1,    -1,   642,
    -1,   644,    -1,    -1,    -1,    -1,   381,   650,    -1,    -1,
   653,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   974,
    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,   779,
    -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,   193,    -1,
   195,   679,    -1,    -1,    -1,    -1,    -1,   422,   203,    -1,
    -1,    -1,    -1,   208,    -1,   210,    -1,    -1,    -1,    -1,
   703,    -1,    -1,   813,    -1,    -1,   441,   222,   223,   224,
    -1,   714,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1040,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   844,   845,   846,   847,   848,   849,
   850,   851,   852,   853,   854,   855,   856,   857,   858,   859,
   860,    -1,   862,    -1,    -1,    -1,   181,    -1,    -1,    -1,
    -1,    -1,   422,    -1,   189,    -1,    -1,    -1,   193,    -1,
   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,
    -1,   441,    -1,   208,   782,   210,   422,   785,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,   223,   224,
    -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  1128,    -1,    -1,   926,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   559,    -1,   829,    -1,    -1,   827,
   828,    -1,    -1,    -1,    -1,   833,   834,   835,   836,   837,
   838,   839,   840,   841,   842,   843,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   963,    18,    -1,    -1,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    19,    46,    47,    48,    -1,    24,   885,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,   559,
    -1,    -1,    -1,    -1,    -1,    -1,    70,   422,    46,    47,
    48,    -1,    -1,   916,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   559,    -1,    -1,   441,    -1,    -1,    -1,
    -1,    -1,    70,     0,     1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,   961,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    45,  1089,
    -1,    -1,    -1,    -1,    -1,    -1,   984,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1105,    -1,   422,    -1,    -1,
    67,    68,    69,    -1,    71,    -1,    -1,    -1,    75,    76,
    77,   175,   176,   177,   178,    -1,   441,    -1,    -1,    -1,
  1130,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,   176,   177,
   178,   108,   109,   110,   559,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,    -1,   179,   180,   181,     0,     1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   559,    -1,    -1,    -1,    -1,    24,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    67,    68,    69,    -1,    71,    -1,    -1,    -1,
    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,     1,   179,   180,   181,    -1,     6,     7,
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
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,     1,    -1,    -1,    -1,    -1,     6,
     7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,
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
   177,   178,   179,   180,   181,     1,    -1,    -1,    -1,    -1,
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
   176,   177,   178,   179,   180,   181,     1,    -1,    -1,    -1,
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
   175,   176,   177,   178,   179,   180,    -1,    -1,     1,    -1,
    -1,    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,   175,   176,   177,   178,   179,   180,    42,
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
    -1,   111,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,   175,   176,   177,   178,   179,   180,    -1,    -1,
     1,    -1,    46,    47,    48,     6,     7,     8,    -1,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,    29,    30,
    31,    32,    33,    34,    -1,   175,   176,   177,   178,   179,
   180,    42,    43,     1,    -1,    46,    47,    48,     6,     7,
     8,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,   111,    -1,    70,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    47,
    48,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
   111,    -1,    70,    -1,    19,    -1,    -1,    -1,    -1,    24,
    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
    -1,   175,   176,   177,   178,    93,    94,    95,    96,    97,
    98,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,   107,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   175,   176,   177,   178,   179,   180,
    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,     7,     8,
    -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    -1,    -1,    -1,    -1,    24,   111,    -1,    -1,    -1,
    29,    30,    31,    32,    33,    34,    -1,   175,   176,   177,
   178,   179,   180,    42,    43,    -1,    -1,    46,    47,    48,
    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    70,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   175,   176,   177,   178,    93,    94,    95,    96,    97,    98,
    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,     6,
     7,     8,   111,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,   111,    -1,    -1,    -1,    42,    43,    -1,    45,    46,
    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    70,    71,    -1,   175,   176,   177,   178,
   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
    97,    98,    -1,    -1,    -1,   175,   176,   177,   178,    -1,
   107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,     6,     7,     8,    -1,    10,
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
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,     6,     7,     8,
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
    -1,    -1,   111,    -1,    70,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
    24,    -1,    -1,    27,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,   175,   176,   177,   178,
   179,   180,    46,    47,    48,     6,     7,     8,    -1,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,   175,
   176,   177,   178,   179,   180,    46,    47,    48,     6,     7,
     8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,   111,    -1,    70,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
    48,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
   111,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   175,   176,   177,   178,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    24,    25,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,   175,   176,   177,   178,   179,   180,
    46,    47,    48,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,   175,   176,   177,
   178,   179,   180,    46,    47,    48,     6,     7,     8,    -1,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    -1,    -1,    -1,    24,   111,    -1,    70,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
   176,   177,   178,    93,    94,    95,    96,    97,    98,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   175,   176,   177,   178,   179,   180,    -1,    -1,
    -1,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,   175,   176,   177,   178,   179,
   180,    46,    47,    48,     6,     7,     8,    -1,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
    -1,    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    93,    94,
    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   175,   176,   177,   178,   179,   180,    -1,    -1,    67,    68,
    69,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   175,   176,   177,   178,   179,   180,   108,
   109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,    18,    -1,   177,    -1,
    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    24,
    25,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,   111,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,    19,    -1,   177,    -1,    -1,    24,   181,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
   175,   176,   177,   178,    -1,    24,    -1,    -1,    -1,    -1,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    71,    -1,    46,    47,    48,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   111,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,    19,
    -1,   177,    -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    45,   175,   176,   177,   178,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,    -1,    -1,   177,   108,   109,
   110,   181,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    22,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,    -1,    -1,   177,    -1,    -1,
    -1,   181,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    34,    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,    -1,    -1,    -1,   108,   109,   110,   181,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   177,    24,   179,   180,   181,    -1,    29,
    30,    31,    32,    33,    34,    24,    -1,    -1,    -1,    -1,
    29,    30,    31,    32,    33,    34,    46,    47,    48,    -1,
    -1,    -1,    -1,    -1,    -1,    24,    -1,    46,    47,    48,
    29,    30,    31,    32,    33,    34,    24,    -1,    -1,    -1,
    70,    29,    30,    31,    32,    33,    34,    46,    47,    48,
    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   111,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   111,    -1,    42,    43,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   175,   176,   177,   178,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   175,   176,   177,   178,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   175,   176,   177,   178,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,   176,   177,
   178,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,    45,    -1,
   177,    -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    67,    68,    69,    -1,    71,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,    45,    -1,
   177,    -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,
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
   167,   168,   169,   170,   171,   172,   173,   174,    -1,    -1,
   177,    67,    68,    69,   181,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,    -1,
    -1,   177,    89,    90,    91,   181,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,    -1,    -1,
   177,   108,   109,   110,   181,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,    -1,    -1,
   177,    -1,    -1,    -1,   181
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/misc/bison.simple"

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

#line 196 "/usr/share/misc/bison.simple"

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
#line 240 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 6:
#line 241 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 7:
#line 242 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 8:
#line 243 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 9:
#line 244 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 10:
#line 245 "cgrammar.y"
{ uentry_checkDecl (); exprNode_free (yyvsp[0].expr); ;
    break;}
case 11:
#line 246 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 12:
#line 250 "cgrammar.y"
{ checkConstant (yyvsp[-6].qtyp, yyvsp[-4].ntyp); ;
    break;}
case 13:
#line 252 "cgrammar.y"
{ checkValueConstant (yyvsp[-9].qtyp, yyvsp[-7].ntyp, yyvsp[-3].expr) ; ;
    break;}
case 14:
#line 255 "cgrammar.y"
{ context_enterFunctionDecl (); ;
    break;}
case 15:
#line 256 "cgrammar.y"
{ declareStaticFunction (yyvsp[-2].ntyp); context_quietExitFunction (); 
     context_exitFunctionDecl (); ;
    break;}
case 16:
#line 261 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 17:
#line 267 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 19:
#line 272 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 20:
#line 275 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 21:
#line 277 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 22:
#line 279 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 23:
#line 281 "cgrammar.y"
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
#line 297 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 25:
#line 300 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 26:
#line 308 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 27:
#line 311 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 28:
#line 317 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 29:
#line 319 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 30:
#line 321 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 31:
#line 323 "cgrammar.y"
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
#line 339 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 33:
#line 342 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 34:
#line 350 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 35:
#line 353 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 36:
#line 360 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); ;
    break;}
case 37:
#line 361 "cgrammar.y"
{ clearCurrentParams (); ;
    break;}
case 38:
#line 362 "cgrammar.y"
{ declareCIter (yyvsp[-8].cname, yyvsp[-6].entrylist); ;
    break;}
case 39:
#line 365 "cgrammar.y"
{ exprNode_checkMacroBody (yyvsp[-1].expr); ;
    break;}
case 40:
#line 366 "cgrammar.y"
{ exprNode_checkIterBody (yyvsp[-1].expr); ;
    break;}
case 41:
#line 367 "cgrammar.y"
{ exprNode_checkIterEnd (yyvsp[-1].expr); ;
    break;}
case 42:
#line 368 "cgrammar.y"
{ exprChecks_checkEmptyMacroBody (); ;
    break;}
case 43:
#line 371 "cgrammar.y"
{ declareFunction (yyvsp[0].ntyp); ;
    break;}
case 44:
#line 374 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 45:
#line 375 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 46:
#line 378 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 47:
#line 379 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 54:
#line 394 "cgrammar.y"
{ ; ;
    break;}
case 55:
#line 395 "cgrammar.y"
{ ; ;
    break;}
case 56:
#line 398 "cgrammar.y"
{ globListAdd (yyvsp[0].sr, yyvsp[-1].tquallist); ;
    break;}
case 57:
#line 401 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); ;
    break;}
case 58:
#line 402 "cgrammar.y"
{ yyval.sr = globListUnrecognized (yyvsp[0].cname); ;
    break;}
case 59:
#line 405 "cgrammar.y"
{ yyval.typequal = qual_createUndef (); ;
    break;}
case 60:
#line 406 "cgrammar.y"
{ yyval.typequal = qual_createKilled (); ;
    break;}
case 61:
#line 407 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 62:
#line 408 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 63:
#line 409 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 64:
#line 412 "cgrammar.y"
{ yyval.tquallist = qualList_undefined; ;
    break;}
case 65:
#line 413 "cgrammar.y"
{ yyval.tquallist = qualList_add (yyvsp[0].tquallist, yyvsp[-1].typequal); ;
    break;}
case 66:
#line 416 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 67:
#line 418 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 68:
#line 419 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 69:
#line 421 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 70:
#line 423 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 73:
#line 430 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 74:
#line 432 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 75:
#line 433 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 76:
#line 435 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 77:
#line 437 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 82:
#line 449 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 83:
#line 454 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 84:
#line 462 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 85:
#line 467 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 95:
#line 491 "cgrammar.y"
{ yyval.sck = SP_ISONLY; ;
    break;}
case 96:
#line 492 "cgrammar.y"
{ yyval.sck = SP_ISOBSERVER; ;
    break;}
case 97:
#line 493 "cgrammar.y"
{ yyval.sck = SP_ISEXPOSED; ;
    break;}
case 98:
#line 494 "cgrammar.y"
{ yyval.sck = SP_ISDEPENDENT; ;
    break;}
case 99:
#line 495 "cgrammar.y"
{ yyval.sck = SP_ISOWNED; ;
    break;}
case 100:
#line 496 "cgrammar.y"
{ yyval.sck = SP_ISSHARED; ;
    break;}
case 101:
#line 497 "cgrammar.y"
{ yyval.sck = SP_ISNULL; ;
    break;}
case 102:
#line 498 "cgrammar.y"
{ yyval.sck = SP_ISNOTNULL; ;
    break;}
case 103:
#line 502 "cgrammar.y"
{
     context_setProtectVars (); 
     enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 104:
#line 508 "cgrammar.y"
{ 
     setFunctionSpecialClause (yyvsp[-6].tok, yyvsp[-3].srset, yyvsp[-1].tok); 
     exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 105:
#line 515 "cgrammar.y"
{
      context_setProtectVars (); 
      enterParamsTemp (); 
      sRef_setGlobalScopeSafe (); 
    ;
    break;}
case 106:
#line 521 "cgrammar.y"
{ 
      setFunctionStateSpecialClause (yyvsp[-7].tok, yyvsp[-5].sck, yyvsp[-3].srset, yyvsp[-1].tok); 
      exitParamsTemp ();
      sRef_clearGlobalScopeSafe (); 
      context_releaseVars ();
    ;
    break;}
case 107:
#line 530 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 108:
#line 536 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 109:
#line 539 "cgrammar.y"
{ checkDoneParams (); context_enterInnerContext (); ;
    break;}
case 110:
#line 541 "cgrammar.y"
{  
     exprNode_checkFunctionBody (yyvsp[0].expr); yyval.expr = yyvsp[0].expr; 
     context_exitInner (yyvsp[0].expr); 
   ;
    break;}
case 111:
#line 546 "cgrammar.y"
{ doneParams (); context_enterInnerContext (); ;
    break;}
case 112:
#line 548 "cgrammar.y"
{
     context_exitInner (yyvsp[0].expr);
     exprNode_checkFunctionBody (yyvsp[0].expr); 
     yyval.expr = yyvsp[0].expr; /* old style */ 
   ;
    break;}
case 113:
#line 556 "cgrammar.y"
{ 
     context_setFunctionDefined (exprNode_loc (yyvsp[0].expr)); 
     exprNode_checkFunction (context_getHeader (), yyvsp[0].expr); 
     context_exitFunction ();
   ;
    break;}
case 114:
#line 563 "cgrammar.y"
{ yyval.srset = yyvsp[-2].srset; ;
    break;}
case 115:
#line 564 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 116:
#line 567 "cgrammar.y"
{ yyval.srset = yyvsp[-1].srset; ;
    break;}
case 117:
#line 568 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 118:
#line 571 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); checkModifiesId (yyvsp[0].entry); ;
    break;}
case 119:
#line 572 "cgrammar.y"
{ yyval.sr = fixModifiesId (yyvsp[0].cname); ;
    break;}
case 120:
#line 573 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-2].sr, sRef_undefined); ;
    break;}
case 121:
#line 574 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-3].sr, yyvsp[-1].sr); ;
    break;}
case 122:
#line 575 "cgrammar.y"
{ yyval.sr = modListPointer (yyvsp[0].sr); ;
    break;}
case 123:
#line 576 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 124:
#line 577 "cgrammar.y"
{ yyval.sr = modListFieldAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 125:
#line 578 "cgrammar.y"
{ yyval.sr = modListArrowAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 126:
#line 582 "cgrammar.y"
{ yyval.sr = yyvsp[0].sr; ;
    break;}
case 127:
#line 583 "cgrammar.y"
{ yyval.sr = sRef_makeUnknown (); /* sRef_makeConstant ($1); ? */ ;
    break;}
case 128:
#line 587 "cgrammar.y"
{ yyval.srset = sRefSet_single (yyvsp[0].sr); ;
    break;}
case 129:
#line 588 "cgrammar.y"
{ yyval.srset = sRefSet_insert (yyvsp[-2].srset, yyvsp[0].sr); ;
    break;}
case 130:
#line 592 "cgrammar.y"
{ yyval.sr = checkSpecClausesId (yyvsp[0].entry); ;
    break;}
case 131:
#line 594 "cgrammar.y"
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 132:
#line 595 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 133:
#line 596 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-3].sr); ;
    break;}
case 134:
#line 597 "cgrammar.y"
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 135:
#line 598 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 136:
#line 599 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 137:
#line 601 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 138:
#line 606 "cgrammar.y"
{ if (sRef_isValid (yyvsp[0].sr)) { yyval.srset = sRefSet_single (yyvsp[0].sr); } 
      else { yyval.srset = sRefSet_undefined; } 
    ;
    break;}
case 139:
#line 610 "cgrammar.y"
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
#line 621 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (yyvsp[0].entry); ;
    break;}
case 141:
#line 622 "cgrammar.y"
{ yyval.expr = exprNode_fromUIO (yyvsp[0].cname); ;
    break;}
case 143:
#line 624 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 144:
#line 625 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (coerceId (yyvsp[0].cname)); ;
    break;}
case 145:
#line 626 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 147:
#line 630 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 148:
#line 631 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 149:
#line 632 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 150:
#line 633 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 151:
#line 634 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 152:
#line 635 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 153:
#line 636 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 154:
#line 637 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 155:
#line 640 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 156:
#line 641 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 158:
#line 645 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 159:
#line 646 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 160:
#line 647 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 161:
#line 648 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 162:
#line 649 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 163:
#line 650 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 164:
#line 651 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 165:
#line 652 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 166:
#line 653 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 167:
#line 654 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 168:
#line 657 "cgrammar.y"
{ yyval.cstringlist = cstringList_add (yyvsp[-2].cstringlist, yyvsp[0].cname); ;
    break;}
case 169:
#line 658 "cgrammar.y"
{ yyval.cstringlist = cstringList_single (yyvsp[0].cname); ;
    break;}
case 170:
#line 662 "cgrammar.y"
{ yyval.expr = exprNode_offsetof (yyvsp[-5].qtyp, yyvsp[-2].cstringlist); ;
    break;}
case 171:
#line 665 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 172:
#line 666 "cgrammar.y"
{ context_sizeofReleaseVars (); yyval.expr = yyvsp[0].expr; ;
    break;}
case 173:
#line 669 "cgrammar.y"
{ yyval.expr = exprNode_sizeofType (yyvsp[-1].qtyp); ;
    break;}
case 174:
#line 670 "cgrammar.y"
{ yyval.expr = exprNode_sizeofExpr (yyvsp[0].expr); ;
    break;}
case 175:
#line 671 "cgrammar.y"
{ yyval.expr = exprNode_alignofType (yyvsp[-1].qtyp); ;
    break;}
case 176:
#line 672 "cgrammar.y"
{ yyval.expr = exprNode_alignofExpr (yyvsp[0].expr); ;
    break;}
case 178:
#line 677 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 180:
#line 681 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 181:
#line 682 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 182:
#line 683 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 184:
#line 687 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 185:
#line 688 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 187:
#line 692 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 188:
#line 693 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 190:
#line 697 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 191:
#line 698 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 192:
#line 699 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 193:
#line 700 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 195:
#line 704 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 196:
#line 705 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 198:
#line 709 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 200:
#line 713 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 202:
#line 718 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 204:
#line 723 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); 
     context_enterAndClause (yyvsp[-1].expr); 
   ;
    break;}
case 205:
#line 727 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitAndClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 207:
#line 735 "cgrammar.y"
{ 
     exprNode_produceGuards (yyvsp[-1].expr);
     context_enterOrClause (yyvsp[-1].expr); 
   ;
    break;}
case 208:
#line 740 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitOrClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 210:
#line 747 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 211:
#line 748 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 212:
#line 749 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); context_exitClause (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 214:
#line 753 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 215:
#line 754 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 216:
#line 755 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 217:
#line 756 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 218:
#line 757 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 219:
#line 758 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 220:
#line 759 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 221:
#line 760 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 222:
#line 761 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 223:
#line 762 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 224:
#line 763 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 226:
#line 767 "cgrammar.y"
{ yyval.expr = exprNode_comma (yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 227:
#line 770 "cgrammar.y"
{ yyval.expr = exprNode_undefined; ;
    break;}
case 230:
#line 779 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 231:
#line 780 "cgrammar.y"
{ doVaDcl (); yyval.expr = exprNode_makeError (); ;
    break;}
case 232:
#line 781 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 233:
#line 784 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 234:
#line 798 "cgrammar.y"
{
               setProcessingVars (yyvsp[-3].qtyp); 
     processNamedDecl (yyvsp[-1].ntyp); ;
    break;}
case 235:
#line 801 "cgrammar.y"
{ unsetProcessingVars (); yyval.expr = yyvsp[-2].expr; ;
    break;}
case 236:
#line 803 "cgrammar.y"
{ setProcessingVars (yyvsp[-4].qtyp); processNamedDecl (yyvsp[-2].ntyp); 
        ;
    break;}
case 237:
#line 806 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-2].expr, exprNode_makeInitialization (yyvsp[-8].ntyp, yyvsp[-3].expr)); 
     unsetProcessingVars ();
   ;
    break;}
case 238:
#line 810 "cgrammar.y"
{ processNamedDecl (yyvsp[-1].ntyp); yyval.expr = exprNode_makeError (); ;
    break;}
case 239:
#line 811 "cgrammar.y"
{ processNamedDecl (yyvsp[-2].ntyp); ;
    break;}
case 240:
#line 812 "cgrammar.y"
{ yyval.expr = exprNode_makeInitialization (yyvsp[-5].ntyp, yyvsp[0].expr); ;
    break;}
case 241:
#line 816 "cgrammar.y"
{ setProcessingTypedef (yyvsp[0].qtyp); ;
    break;}
case 242:
#line 817 "cgrammar.y"
{ unsetProcessingTypedef (); ;
    break;}
case 243:
#line 818 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 244:
#line 819 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 245:
#line 822 "cgrammar.y"
{ g_expectingTypeName = TRUE; ;
    break;}
case 246:
#line 825 "cgrammar.y"
{ g_expectingTypeName = TRUE; context_pushLoc (); ;
    break;}
case 247:
#line 828 "cgrammar.y"
{ ; ;
    break;}
case 248:
#line 831 "cgrammar.y"
{ ; ;
    break;}
case 249:
#line 832 "cgrammar.y"
{ ; ;
    break;}
case 250:
#line 835 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 251:
#line 836 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 253:
#line 840 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-2].tok, yyvsp[-1].alist); ;
    break;}
case 254:
#line 841 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-3].tok, yyvsp[-2].alist); ;
    break;}
case 255:
#line 846 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 256:
#line 848 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 257:
#line 856 "cgrammar.y"
{ setStorageClass (SCEXTERN); yyval.typequal = qual_createExtern (); ;
    break;}
case 258:
#line 857 "cgrammar.y"
{ yyval.typequal = qual_createInline (); ;
    break;}
case 259:
#line 858 "cgrammar.y"
{ setStorageClass (SCSTATIC); yyval.typequal = qual_createStatic (); ;
    break;}
case 260:
#line 859 "cgrammar.y"
{ yyval.typequal = qual_createAuto (); ;
    break;}
case 261:
#line 860 "cgrammar.y"
{ yyval.typequal = qual_createRegister (); ;
    break;}
case 262:
#line 863 "cgrammar.y"
{ yyval.typequal = qual_createConst (); ;
    break;}
case 263:
#line 864 "cgrammar.y"
{ yyval.typequal = qual_createVolatile (); ;
    break;}
case 264:
#line 865 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 265:
#line 866 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 266:
#line 867 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 267:
#line 868 "cgrammar.y"
{ yyval.typequal = qual_createSpecial (); ;
    break;}
case 268:
#line 869 "cgrammar.y"
{ yyval.typequal = qual_createOwned (); ;
    break;}
case 269:
#line 870 "cgrammar.y"
{ yyval.typequal = qual_createDependent (); ;
    break;}
case 270:
#line 871 "cgrammar.y"
{ yyval.typequal = qual_createYield (); ;
    break;}
case 271:
#line 872 "cgrammar.y"
{ yyval.typequal = qual_createTemp (); ;
    break;}
case 272:
#line 873 "cgrammar.y"
{ yyval.typequal = qual_createOnly (); ;
    break;}
case 273:
#line 874 "cgrammar.y"
{ yyval.typequal = qual_createKeep (); ;
    break;}
case 274:
#line 875 "cgrammar.y"
{ yyval.typequal = qual_createKept (); ;
    break;}
case 275:
#line 876 "cgrammar.y"
{ yyval.typequal = qual_createShared (); ;
    break;}
case 276:
#line 877 "cgrammar.y"
{ yyval.typequal = qual_createUnique (); ;
    break;}
case 277:
#line 878 "cgrammar.y"
{ yyval.typequal = qual_createExits (); ;
    break;}
case 278:
#line 879 "cgrammar.y"
{ yyval.typequal = qual_createMayExit (); ;
    break;}
case 279:
#line 880 "cgrammar.y"
{ yyval.typequal = qual_createTrueExit (); ;
    break;}
case 280:
#line 881 "cgrammar.y"
{ yyval.typequal = qual_createFalseExit (); ;
    break;}
case 281:
#line 882 "cgrammar.y"
{ yyval.typequal = qual_createNeverExit (); ;
    break;}
case 282:
#line 883 "cgrammar.y"
{ yyval.typequal = qual_createNull (); ;
    break;}
case 283:
#line 884 "cgrammar.y"
{ yyval.typequal = qual_createRelNull (); ;
    break;}
case 284:
#line 885 "cgrammar.y"
{ yyval.typequal = qual_createReturned (); ;
    break;}
case 285:
#line 886 "cgrammar.y"
{ yyval.typequal = qual_createExposed (); ;
    break;}
case 286:
#line 887 "cgrammar.y"
{ yyval.typequal = qual_createObserver (); ;
    break;}
case 287:
#line 888 "cgrammar.y"
{ yyval.typequal = qual_createChecked (); ;
    break;}
case 288:
#line 889 "cgrammar.y"
{ yyval.typequal = qual_createCheckMod (); ;
    break;}
case 289:
#line 890 "cgrammar.y"
{ yyval.typequal = qual_createUnchecked (); ;
    break;}
case 290:
#line 891 "cgrammar.y"
{ yyval.typequal = qual_createCheckedStrict (); ;
    break;}
case 291:
#line 892 "cgrammar.y"
{ yyval.typequal = qual_createTrueNull (); ;
    break;}
case 292:
#line 893 "cgrammar.y"
{ yyval.typequal = qual_createFalseNull (); ;
    break;}
case 293:
#line 894 "cgrammar.y"
{ yyval.typequal = qual_createUnused (); ;
    break;}
case 294:
#line 895 "cgrammar.y"
{ yyval.typequal = qual_createExternal (); ;
    break;}
case 295:
#line 896 "cgrammar.y"
{ yyval.typequal = qual_createSef (); ;
    break;}
case 296:
#line 897 "cgrammar.y"
{ yyval.typequal = qual_createAbstract (); ;
    break;}
case 297:
#line 898 "cgrammar.y"
{ yyval.typequal = qual_createConcrete (); ;
    break;}
case 298:
#line 899 "cgrammar.y"
{ yyval.typequal = qual_createMutable (); ;
    break;}
case 299:
#line 900 "cgrammar.y"
{ yyval.typequal = qual_createImmutable (); ;
    break;}
case 300:
#line 901 "cgrammar.y"
{ yyval.typequal = qual_createNotNull (); ;
    break;}
case 301:
#line 902 "cgrammar.y"
{ yyval.typequal = qual_createRefCounted (); ;
    break;}
case 302:
#line 903 "cgrammar.y"
{ yyval.typequal = qual_createRefs (); ;
    break;}
case 303:
#line 904 "cgrammar.y"
{ yyval.typequal = qual_createKillRef (); ;
    break;}
case 304:
#line 905 "cgrammar.y"
{ yyval.typequal = qual_createRelDef (); ;
    break;}
case 305:
#line 906 "cgrammar.y"
{ yyval.typequal = qual_createNewRef (); ;
    break;}
case 306:
#line 907 "cgrammar.y"
{ yyval.typequal = qual_createTempRef (); ;
    break;}
case 307:
#line 910 "cgrammar.y"
{ yyval.typequal = qual_createShort (); ;
    break;}
case 308:
#line 911 "cgrammar.y"
{ yyval.typequal = qual_createLong (); ;
    break;}
case 309:
#line 912 "cgrammar.y"
{ yyval.typequal = qual_createSigned (); ;
    break;}
case 310:
#line 913 "cgrammar.y"
{ yyval.typequal = qual_createUnsigned (); ;
    break;}
case 317:
#line 922 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 318:
#line 923 "cgrammar.y"
{ yyval.ctyp = ctype_anyintegral; ;
    break;}
case 319:
#line 924 "cgrammar.y"
{ yyval.ctyp = ctype_unsignedintegral; ;
    break;}
case 320:
#line 925 "cgrammar.y"
{ yyval.ctyp = ctype_signedintegral; ;
    break;}
case 324:
#line 929 "cgrammar.y"
{ yyval.ctyp = ctype_fromQual (yyvsp[-1].typequal); ;
    break;}
case 325:
#line 933 "cgrammar.y"
{ yyval.qtyp = qtype_resolve (yyvsp[-1].qtyp); ;
    break;}
case 326:
#line 936 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 327:
#line 938 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-3].qtyp, yyvsp[-1].qtyp); ;
    break;}
case 329:
#line 943 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-2].qtyp, yyvsp[0].qtyp); ;
    break;}
case 330:
#line 946 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 331:
#line 947 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 332:
#line 948 "cgrammar.y"
{ yyval.qtyp = qtype_combine (yyvsp[0].qtyp, yyvsp[-1].ctyp); ;
    break;}
case 333:
#line 951 "cgrammar.y"
{ yyval.qtyp = qtype_unknown (); ;
    break;}
case 334:
#line 952 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 335:
#line 955 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 336:
#line 957 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 337:
#line 959 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 338:
#line 960 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 339:
#line 962 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 340:
#line 964 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 341:
#line 966 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 342:
#line 968 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 343:
#line 969 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 344:
#line 971 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 345:
#line 973 "cgrammar.y"
{ yyval.ctyp = declareUnnamedStruct (yyvsp[-3].flist); ;
    break;}
case 346:
#line 974 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 347:
#line 976 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 348:
#line 978 "cgrammar.y"
{ yyval.ctyp = declareUnnamedUnion (yyvsp[-3].flist); ;
    break;}
case 349:
#line 980 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedStruct (uentryList_new ()); ;
    break;}
case 350:
#line 982 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedUnion (uentryList_new ()); ;
    break;}
case 351:
#line 983 "cgrammar.y"
{ yyval.ctyp = handleStruct (yyvsp[-1].cname); ;
    break;}
case 352:
#line 984 "cgrammar.y"
{ yyval.ctyp = handleUnion (yyvsp[-1].cname); ;
    break;}
case 353:
#line 987 "cgrammar.y"
{ g_expectingTypeName = FALSE; ;
    break;}
case 355:
#line 991 "cgrammar.y"
{ yyval.flist = uentryList_undefined; /* bogus! */ ;
    break;}
case 356:
#line 992 "cgrammar.y"
{ yyval.flist = uentryList_mergeFields (yyvsp[-1].flist, yyvsp[0].flist); ;
    break;}
case 357:
#line 996 "cgrammar.y"
{ yyval.flist = fixUentryList (yyvsp[-2].ntyplist, yyvsp[-4].qtyp); ;
    break;}
case 358:
#line 998 "cgrammar.y"
{ yyval.flist = fixUnnamedDecl (yyvsp[-2].qtyp); ;
    break;}
case 359:
#line 1002 "cgrammar.y"
{ yyval.ntyplist = idDeclList_singleton (yyvsp[-1].ntyp); ;
    break;}
case 360:
#line 1004 "cgrammar.y"
{ yyval.ntyplist = idDeclList_add (yyvsp[-3].ntyplist, yyvsp[-1].ntyp); ;
    break;}
case 361:
#line 1007 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; ;
    break;}
case 362:
#line 1008 "cgrammar.y"
{ yyval.ntyp = idDecl_undefined; ;
    break;}
case 363:
#line 1009 "cgrammar.y"
{ yyval.ntyp = yyvsp[-3].ntyp; ;
    break;}
case 364:
#line 1014 "cgrammar.y"
{ yyval.ctyp = declareUnnamedEnum (yyvsp[-2].enumnamelist); ;
    break;}
case 365:
#line 1015 "cgrammar.y"
{ context_pushLoc (); ;
    break;}
case 366:
#line 1016 "cgrammar.y"
{ context_popLoc (); yyval.ctyp = declareEnum (yyvsp[-5].cname, yyvsp[-2].enumnamelist); ;
    break;}
case 367:
#line 1017 "cgrammar.y"
{ yyval.ctyp = handleEnum (yyvsp[-1].cname); ;
    break;}
case 368:
#line 1021 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_single (yyvsp[0].cname); ;
    break;}
case 369:
#line 1023 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_push (yyvsp[-2].enumnamelist, yyvsp[0].cname); ;
    break;}
case 371:
#line 1028 "cgrammar.y"
{ uentry ue = uentry_makeEnumConstant (yyvsp[0].cname, ctype_unknown);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[0].cname;
   ;
    break;}
case 372:
#line 1033 "cgrammar.y"
{ uentry ue = uentry_makeEnumInitializedConstant (yyvsp[-3].cname, ctype_unknown, yyvsp[0].expr);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[-3].cname; 
   ;
    break;}
case 374:
#line 1040 "cgrammar.y"
{ yyval.ntyp = idDecl_create (cstring_undefined, qtype_create (yyvsp[0].ctyp)); ;
    break;}
case 375:
#line 1042 "cgrammar.y"
{ 
     qtype qt = qtype_unknown ();

     qtype_adjustPointers (yyvsp[-1].count, qt);
     yyval.ntyp = idDecl_create (cstring_copy (LastIdentifier ()), qt);
   ;
    break;}
case 376:
#line 1049 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 378:
#line 1054 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 379:
#line 1057 "cgrammar.y"
{ yyval.entrylist = handleParamTypeList (yyvsp[0].entrylist); ;
    break;}
case 380:
#line 1058 "cgrammar.y"
{ yyval.entrylist = handleParamIdList (yyvsp[0].entrylist); ;
    break;}
case 381:
#line 1061 "cgrammar.y"
{ /* ignored for now */; ;
    break;}
case 382:
#line 1062 "cgrammar.y"
{ ; ;
    break;}
case 383:
#line 1065 "cgrammar.y"
{ ; ;
    break;}
case 384:
#line 1066 "cgrammar.y"
{ ; ;
    break;}
case 385:
#line 1069 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 386:
#line 1070 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 387:
#line 1071 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 388:
#line 1072 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 390:
#line 1076 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 391:
#line 1079 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 392:
#line 1080 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 393:
#line 1083 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeElipsisMarker ()); ;
    break;}
case 395:
#line 1085 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 396:
#line 1088 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 397:
#line 1088 "cgrammar.y"
{ yyval.entrylist = uentryList_single (yyvsp[0].oentry); ;
    break;}
case 398:
#line 1089 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 399:
#line 1090 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-3].entrylist, yyvsp[0].oentry); ;
    break;}
case 400:
#line 1094 "cgrammar.y"
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
case 401:
#line 1106 "cgrammar.y"
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
case 403:
#line 1122 "cgrammar.y"
{ yyval.qtyp = qtype_newBase (yyvsp[-1].qtyp, yyvsp[0].ctyp); ;
    break;}
case 404:
#line 1125 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[0].count, ctype_unknown); ;
    break;}
case 406:
#line 1127 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[-1].count, yyvsp[0].ctyp); ;
    break;}
case 407:
#line 1130 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 409:
#line 1135 "cgrammar.y"
{ yyval.ctyp = ctype_expectFunction (yyvsp[-1].ctyp); ;
    break;}
case 410:
#line 1136 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 411:
#line 1137 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 412:
#line 1138 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (yyvsp[-2].ctyp); ;
    break;}
case 413:
#line 1139 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (yyvsp[-3].ctyp); ;
    break;}
case 414:
#line 1141 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (ctype_unknown, uentryList_makeMissingParams ()); ;
    break;}
case 415:
#line 1143 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (ctype_unknown, yyvsp[-1].entrylist); ;
    break;}
case 416:
#line 1145 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (yyvsp[-3].ctyp, uentryList_makeMissingParams ()); ;
    break;}
case 417:
#line 1147 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (yyvsp[-4].ctyp, yyvsp[-1].entrylist); ;
    break;}
case 427:
#line 1163 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 430:
#line 1171 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 431:
#line 1175 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 432:
#line 1177 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr); ;
    break;}
case 433:
#line 1179 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 434:
#line 1181 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 435:
#line 1185 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 436:
#line 1185 "cgrammar.y"
{ context_sizeofReleaseVars (); ;
    break;}
case 437:
#line 1187 "cgrammar.y"
{ yyval.expr = exprNode_forPred (yyvsp[-7].expr, yyvsp[-5].expr, yyvsp[-2].expr); 
     context_enterForClause (yyvsp[-5].expr); ;
    break;}
case 438:
#line 1192 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-2].entry); ;
    break;}
case 439:
#line 1194 "cgrammar.y"
{ yyval.expr = exprNode_iterStart (yyvsp[-5].entry, yyvsp[-1].alist); ;
    break;}
case 440:
#line 1195 "cgrammar.y"
{ yyval.expr = exprNode_createId (yyvsp[0].entry); ;
    break;}
case 444:
#line 1201 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 452:
#line 1209 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 453:
#line 1210 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 454:
#line 1214 "cgrammar.y"
{ /* don't: context_exitTrueClause ($1, $2); */
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 455:
#line 1219 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 456:
#line 1222 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 467:
#line 1237 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 469:
#line 1239 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 470:
#line 1242 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[-1].cname); ;
    break;}
case 471:
#line 1243 "cgrammar.y"
{ yyval.expr = exprNode_notReached (yyvsp[0].expr); ;
    break;}
case 472:
#line 1249 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 473:
#line 1250 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, FALSE); ;
    break;}
case 474:
#line 1251 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 475:
#line 1252 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, TRUE); ;
    break;}
case 476:
#line 1255 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 477:
#line 1256 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, FALSE); ;
    break;}
case 478:
#line 1257 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 479:
#line 1258 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, TRUE); ;
    break;}
case 480:
#line 1261 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 481:
#line 1263 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; context_exitInner (yyvsp[0].expr); ;
    break;}
case 482:
#line 1266 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 483:
#line 1269 "cgrammar.y"
{ context_enterInnerContext (); ;
    break;}
case 484:
#line 1272 "cgrammar.y"
{ context_exitInnerPlain (); ;
    break;}
case 485:
#line 1275 "cgrammar.y"
{ context_enterStructInnerContext (); ;
    break;}
case 486:
#line 1278 "cgrammar.y"
{ context_exitStructInnerContext (); ;
    break;}
case 487:
#line 1281 "cgrammar.y"
{ context_exitInnerSafe (); ;
    break;}
case 488:
#line 1284 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 489:
#line 1285 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_createTok (yyvsp[0].tok)); ;
    break;}
case 490:
#line 1286 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 491:
#line 1288 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 492:
#line 1289 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 493:
#line 1291 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 494:
#line 1293 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 495:
#line 1295 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (exprNode_concat (yyvsp[-3].expr, yyvsp[-2].expr), 
							lltok_getLoc (yyvsp[-1].tok))); 
   ;
    break;}
case 496:
#line 1302 "cgrammar.y"
{ yyval.expr = exprNode_makeBlock (yyvsp[0].expr); ;
    break;}
case 497:
#line 1306 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 498:
#line 1308 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 499:
#line 1310 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 500:
#line 1312 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 502:
#line 1316 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 503:
#line 1319 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 504:
#line 1320 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 505:
#line 1323 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 506:
#line 1324 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 507:
#line 1327 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 508:
#line 1328 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr); ;
    break;}
case 509:
#line 1331 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 510:
#line 1332 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr); ;
    break;}
case 511:
#line 1333 "cgrammar.y"
{ yyval.expr = exprNode_checkExpr (yyvsp[0].expr); ;
    break;}
case 512:
#line 1337 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 513:
#line 1345 "cgrammar.y"
{ 
     context_exitTrueClause (yyvsp[-1].expr, yyvsp[0].expr);
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 514:
#line 1349 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-2].expr); ;
    break;}
case 515:
#line 1350 "cgrammar.y"
{
     context_exitClause (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr);
     yyval.expr = exprNode_ifelse (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr); 
   ;
    break;}
case 516:
#line 1354 "cgrammar.y"
{ context_enterSwitch (yyvsp[0].expr); ;
    break;}
case 517:
#line 1355 "cgrammar.y"
{ yyval.expr = exprNode_switch (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 518:
#line 1359 "cgrammar.y"
{ yyval.expr = exprNode_whilePred (yyvsp[-1].expr); context_enterWhileClause (yyvsp[-1].expr); ;
    break;}
case 519:
#line 1363 "cgrammar.y"
{ yyval.expr = exprNode_whilePred(yyvsp[-1].expr); ;
    break;}
case 520:
#line 1366 "cgrammar.y"
{ context_enterIterClause (); ;
    break;}
case 521:
#line 1367 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-3].entry); ;
    break;}
case 522:
#line 1370 "cgrammar.y"
{ 
     yyval.expr = exprNode_iter (yyvsp[-9].entry, yyvsp[-4].alist, yyvsp[-2].expr, yyvsp[-1].entry); 

   ;
    break;}
case 523:
#line 1376 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 524:
#line 1377 "cgrammar.y"
{ nextIterParam (); ;
    break;}
case 525:
#line 1378 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-3].alist, yyvsp[0].expr); ;
    break;}
case 526:
#line 1381 "cgrammar.y"
{ yyval.expr = exprNode_iterExpr (yyvsp[0].expr); ;
    break;}
case 527:
#line 1382 "cgrammar.y"
{ yyval.expr = exprNode_iterId (yyvsp[0].entry); ;
    break;}
case 528:
#line 1383 "cgrammar.y"
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
case 529:
#line 1394 "cgrammar.y"
{ yyval.expr = exprNode_iterNewId (yyvsp[0].cname); ;
    break;}
case 531:
#line 1402 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 533:
#line 1406 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 534:
#line 1407 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 535:
#line 1408 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 536:
#line 1410 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 537:
#line 1411 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 538:
#line 1412 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 539:
#line 1413 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 540:
#line 1414 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 542:
#line 1418 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 543:
#line 1419 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 544:
#line 1420 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 545:
#line 1421 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 546:
#line 1422 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 547:
#line 1423 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 548:
#line 1424 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 549:
#line 1425 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 550:
#line 1426 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 552:
#line 1430 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 554:
#line 1434 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 555:
#line 1435 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 556:
#line 1436 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 558:
#line 1440 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 559:
#line 1441 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 561:
#line 1445 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 562:
#line 1446 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 564:
#line 1450 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 565:
#line 1451 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 566:
#line 1452 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 567:
#line 1453 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 569:
#line 1457 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 570:
#line 1458 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 572:
#line 1462 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 574:
#line 1466 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 576:
#line 1471 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 578:
#line 1475 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 580:
#line 1479 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 582:
#line 1483 "cgrammar.y"
{ context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 583:
#line 1484 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 584:
#line 1485 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 586:
#line 1489 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 587:
#line 1490 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 588:
#line 1491 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 589:
#line 1492 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 590:
#line 1493 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 591:
#line 1494 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 592:
#line 1495 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 593:
#line 1496 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 594:
#line 1497 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 595:
#line 1498 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 596:
#line 1499 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 597:
#line 1502 "cgrammar.y"
{ yyval.entry = yyvsp[0].entry; ;
    break;}
case 598:
#line 1503 "cgrammar.y"
{ yyval.entry = uentry_undefined; ;
    break;}
case 599:
#line 1506 "cgrammar.y"
{ context_enterDoWhileClause (); yyval.tok = yyvsp[0].tok; ;
    break;}
case 600:
#line 1510 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 601:
#line 1512 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr)); ;
    break;}
case 602:
#line 1514 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 603:
#line 1517 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 604:
#line 1519 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr)); ;
    break;}
case 605:
#line 1521 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 606:
#line 1522 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 607:
#line 1525 "cgrammar.y"
{ yyval.expr = exprNode_goto (yyvsp[-1].cname); ;
    break;}
case 608:
#line 1526 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-1].tok, BADTOK); ;
    break;}
case 609:
#line 1528 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-2].tok, QINNERCONTINUE); ;
    break;}
case 610:
#line 1529 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, BADTOK); ;
    break;}
case 611:
#line 1530 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSWITCHBREAK); ;
    break;}
case 612:
#line 1531 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QLOOPBREAK); ;
    break;}
case 613:
#line 1532 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QINNERBREAK); ;
    break;}
case 614:
#line 1533 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSAFEBREAK); ;
    break;}
case 615:
#line 1534 "cgrammar.y"
{ yyval.expr = exprNode_nullReturn (yyvsp[-1].tok); ;
    break;}
case 616:
#line 1535 "cgrammar.y"
{ yyval.expr = exprNode_return (yyvsp[-1].expr); ;
    break;}
case 618:
#line 1539 "cgrammar.y"
{ ; ;
    break;}
case 621:
#line 1546 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 622:
#line 1547 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 623:
#line 1548 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 624:
#line 1549 "cgrammar.y"
{ yyval.cname = yyvsp[0].cname; ;
    break;}
case 626:
#line 1553 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 498 "/usr/share/misc/bison.simple"

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
#line 1555 "cgrammar.y"


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













