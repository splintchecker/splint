
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



#define	YYFINAL		1214
#define	YYFLAG		-32768
#define	YYNTBASE	190

#define YYTRANSLATE(x) ((unsigned)(x) <= 444 ? yytranslate[x] : 433)

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
   236,   238,   239,   242,   243,   246,   248,   251,   253,   256,
   258,   261,   263,   267,   270,   272,   274,   276,   278,   280,
   282,   284,   285,   288,   289,   296,   297,   304,   306,   308,
   309,   310,   316,   317,   323,   325,   327,   328,   330,   331,
   332,   336,   337,   341,   343,   345,   347,   349,   351,   353,
   355,   357,   359,   361,   363,   365,   367,   369,   371,   373,
   375,   376,   384,   385,   394,   396,   400,   401,   405,   406,
   410,   413,   417,   420,   423,   425,   427,   429,   433,   438,
   441,   445,   449,   453,   455,   457,   459,   463,   465,   467,
   471,   476,   479,   483,   487,   491,   493,   497,   499,   501,
   503,   507,   509,   511,   513,   518,   522,   527,   534,   540,
   546,   549,   552,   554,   558,   560,   563,   566,   569,   572,
   575,   578,   581,   584,   586,   588,   592,   594,   604,   605,
   609,   614,   617,   622,   625,   627,   632,   634,   638,   642,
   646,   648,   652,   656,   658,   662,   666,   668,   672,   676,
   680,   684,   686,   690,   694,   696,   700,   702,   706,   708,
   712,   714,   715,   720,   722,   723,   728,   730,   731,   732,
   740,   742,   746,   750,   754,   758,   762,   766,   770,   774,
   778,   782,   786,   788,   792,   793,   795,   797,   799,   801,
   803,   807,   808,   818,   819,   831,   834,   835,   842,   843,
   851,   856,   861,   862,   863,   866,   868,   873,   874,   879,
   881,   885,   890,   892,   896,   898,   900,   902,   904,   906,
   909,   912,   915,   918,   921,   924,   927,   930,   933,   936,
   939,   942,   945,   948,   951,   954,   957,   960,   963,   966,
   969,   972,   975,   978,   981,   984,   987,   990,   993,   996,
   999,  1002,  1005,  1008,  1011,  1014,  1017,  1020,  1023,  1026,
  1029,  1032,  1035,  1038,  1041,  1044,  1046,  1048,  1050,  1052,
  1055,  1058,  1061,  1064,  1067,  1070,  1073,  1076,  1079,  1082,
  1085,  1088,  1091,  1094,  1098,  1100,  1105,  1107,  1111,  1114,
  1117,  1120,  1121,  1123,  1124,  1125,  1137,  1138,  1139,  1151,
  1158,  1165,  1166,  1167,  1178,  1179,  1180,  1191,  1197,  1203,
  1208,  1213,  1214,  1216,  1218,  1221,  1227,  1231,  1234,  1239,
  1241,  1245,  1250,  1257,  1258,  1267,  1272,  1274,  1278,  1281,
  1283,  1288,  1290,  1292,  1295,  1298,  1300,  1303,  1305,  1308,
  1310,  1312,  1314,  1317,  1319,  1322,  1325,  1329,  1331,  1335,
  1337,  1341,  1343,  1345,  1349,  1350,  1353,  1354,  1359,  1364,
  1366,  1368,  1371,  1373,  1375,  1378,  1379,  1381,  1387,  1390,
  1394,  1398,  1403,  1407,  1412,  1417,  1423,  1425,  1427,  1429,
  1431,  1433,  1435,  1437,  1439,  1441,  1443,  1448,  1453,  1458,
  1461,  1463,  1465,  1467,  1470,  1473,  1481,  1488,  1491,  1492,
  1493,  1504,  1505,  1512,  1514,  1516,  1518,  1520,  1523,  1525,
  1527,  1529,  1531,  1533,  1535,  1537,  1541,  1543,  1546,  1549,
  1552,  1554,  1556,  1558,  1560,  1562,  1564,  1566,  1568,  1570,
  1572,  1576,  1578,  1580,  1583,  1586,  1587,  1592,  1593,  1599,
  1600,  1604,  1605,  1610,  1614,  1617,  1621,  1622,  1623,  1624,
  1625,  1626,  1628,  1631,  1634,  1638,  1641,  1645,  1649,  1654,
  1657,  1660,  1664,  1668,  1673,  1675,  1678,  1680,  1683,  1685,
  1688,  1690,  1693,  1695,  1698,  1700,  1705,  1708,  1709,  1715,
  1716,  1723,  1728,  1733,  1734,  1735,  1746,  1748,  1749,  1754,
  1756,  1758,  1760,  1762,  1764,  1768,  1770,  1775,  1779,  1784,
  1791,  1797,  1803,  1806,  1809,  1811,  1814,  1817,  1820,  1823,
  1826,  1829,  1832,  1835,  1837,  1839,  1844,  1846,  1850,  1854,
  1858,  1860,  1864,  1868,  1870,  1874,  1878,  1880,  1884,  1888,
  1892,  1896,  1898,  1902,  1906,  1908,  1912,  1914,  1918,  1920,
  1924,  1926,  1930,  1932,  1936,  1938,  1939,  1940,  1948,  1950,
  1954,  1958,  1962,  1966,  1970,  1974,  1978,  1982,  1986,  1990,
  1994,  1996,  1997,  1999,  2002,  2010,  2013,  2016,  2024,  2031,
  2034,  2038,  2041,  2045,  2048,  2052,  2056,  2060,  2064,  2067,
  2071,  2072,  2074,  2076,  2078,  2080,  2082,  2084,  2086,  2088
};

static const short yyrhs[] = {    -1,
   191,     0,   192,     0,   191,   192,     0,   259,   429,     0,
   193,     0,   194,     0,   204,     0,   207,     0,   296,     0,
     1,     0,    75,   316,   329,   339,   329,   429,   304,    88,
     0,    75,   316,   329,   339,   329,    23,   304,   309,   308,
   429,    88,     0,     0,    76,   195,   196,   429,    88,     0,
   197,     0,   316,   329,   197,     0,   201,     0,   343,   201,
     0,   431,     0,   304,    24,   329,   339,   304,    25,     0,
   198,    26,    27,     0,   198,    26,   304,   295,    27,   329,
     0,     0,   198,   305,    24,    25,   199,   209,   211,     0,
     0,   198,   305,    24,   340,    25,   200,   209,   211,     0,
   431,     0,   304,    24,   329,   197,   304,    25,     0,   201,
    26,    27,     0,   201,    26,   304,   295,    27,   329,     0,
     0,   201,   305,    24,    25,   202,   226,     0,     0,   201,
   305,    24,   340,    25,   203,   226,     0,     0,     0,    77,
   431,    24,   340,    25,   205,   226,   206,   429,    88,     0,
    89,   370,    92,     0,    90,   357,    92,     0,    91,   358,
    92,     0,    89,    92,     0,   255,     0,     0,   210,   228,
     0,     0,   212,   213,     0,   216,   214,     0,     0,   215,
   178,   218,    88,     0,     0,     0,   217,   177,   218,    88,
     0,     0,   219,   218,     0,   219,     0,   222,   221,   222,
    18,     0,   180,     0,   181,     0,    52,     0,    51,     0,
    53,     0,   223,     0,   224,    24,   222,    25,     0,    24,
   222,   225,   222,    25,     0,   430,     0,   184,     0,   186,
     0,   220,     0,    33,     0,    32,     0,     0,     0,   229,
     0,     0,   227,   229,     0,   236,     0,   230,   236,     0,
   239,     0,   230,   239,     0,   252,     0,   252,   230,     0,
   232,     0,   231,    21,   232,     0,   235,   233,     0,   430,
     0,   184,     0,    86,     0,    87,     0,   116,     0,   117,
     0,   130,     0,     0,   234,   235,     0,     0,    72,   237,
   390,   429,    88,   242,     0,     0,    72,   238,   231,   429,
    88,   242,     0,    74,     0,   243,     0,     0,     0,    72,
   240,   390,   429,   242,     0,     0,    72,   241,   231,   429,
   242,     0,    74,     0,   245,     0,     0,   243,     0,     0,
     0,    73,   244,   260,     0,     0,    73,   246,   261,     0,
    78,     0,    79,     0,    80,     0,    81,     0,    82,     0,
    88,     0,    88,     0,    83,     0,    84,     0,   119,     0,
   137,     0,   135,     0,   133,     0,   132,     0,   121,     0,
   138,     0,   150,     0,     0,   247,   329,   253,   266,   429,
   249,   304,     0,     0,   250,   329,   251,   254,   266,   429,
   248,   304,     0,   339,     0,   316,   329,   339,     0,     0,
    19,   257,   386,     0,     0,   390,   258,   379,     0,   208,
   256,     0,   264,   429,    88,     0,   429,    88,     0,   264,
   429,     0,   429,     0,   430,     0,   184,     0,   262,    26,
    27,     0,   262,    26,   263,    27,     0,    34,   262,     0,
    24,   262,    25,     0,   262,    28,   431,     0,   262,    44,
   431,     0,   262,     0,   186,     0,   262,     0,   264,    21,
   262,     0,   430,     0,   184,     0,   265,    26,    27,     0,
   265,    26,   263,    27,     0,    34,   265,     0,    24,   265,
    25,     0,   265,    28,   431,     0,   265,    44,   431,     0,
   265,     0,   266,    21,   265,     0,   430,     0,   184,     0,
   186,     0,    24,   293,    25,     0,   185,     0,   111,     0,
   267,     0,   268,    26,   293,    27,     0,   268,    24,    25,
     0,   268,    24,   269,    25,     0,    70,    24,   292,    21,
   351,    25,     0,   268,   329,    28,   431,   304,     0,   268,
   329,    44,   431,   304,     0,   268,    47,     0,   268,    48,
     0,   292,     0,   269,    21,   292,     0,   268,     0,    47,
   270,     0,    48,   270,     0,    29,   276,     0,    34,   276,
     0,    33,   276,     0,    32,   276,     0,    31,   276,     0,
    30,   276,     0,   273,     0,   272,     0,   271,    28,   431,
     0,   431,     0,    46,   304,    24,   351,   329,    21,   271,
    25,   304,     0,     0,   304,   274,   275,     0,    42,    24,
   351,    25,     0,    42,   270,     0,    43,    24,   351,    25,
     0,    43,   270,     0,   270,     0,    24,   351,    25,   276,
     0,   276,     0,   277,    34,   276,     0,   277,    35,   276,
     0,   277,    36,   276,     0,   277,     0,   278,    33,   277,
     0,   278,    32,   277,     0,   278,     0,   279,    49,   278,
     0,   279,    50,   278,     0,   279,     0,   280,    37,   279,
     0,   280,    38,   279,     0,   280,    51,   279,     0,   280,
    52,   279,     0,   280,     0,   281,    53,   280,     0,   281,
    54,   280,     0,   281,     0,   282,    29,   281,     0,   282,
     0,   283,    39,   282,     0,   283,     0,   284,    40,   283,
     0,   284,     0,     0,   285,    55,   286,   284,     0,   285,
     0,     0,   287,    56,   288,   285,     0,   287,     0,     0,
     0,   287,    41,   290,   293,    22,   291,   289,     0,   289,
     0,   270,    23,   292,     0,   270,    57,   292,     0,   270,
    58,   292,     0,   270,    59,   292,     0,   270,    60,   292,
     0,   270,    61,   292,     0,   270,    62,   292,     0,   270,
    63,   292,     0,   270,    64,   292,     0,   270,    65,   292,
     0,   270,    66,   292,     0,   292,     0,   293,    21,   292,
     0,     0,   293,     0,   289,     0,   297,     0,    71,     0,
   302,     0,   316,   304,    18,     0,     0,   316,   329,   339,
   329,   298,   304,   308,    18,   304,     0,     0,   316,   329,
   339,   329,    23,   299,   304,   309,   308,    18,   304,     0,
   339,   329,     0,     0,   339,   329,    23,   301,   304,   309,
     0,     0,    45,   316,   303,   329,   306,   304,    18,     0,
    45,   316,   304,    18,     0,    45,   306,   304,    18,     0,
     0,     0,   307,   304,     0,   300,     0,   306,    21,   329,
   300,     0,     0,   308,    21,   329,   300,     0,   292,     0,
    19,   310,    20,     0,    19,   310,    21,    20,     0,   309,
     0,   310,    21,   309,     0,   112,     0,   110,     0,   113,
     0,   114,     0,   115,     0,   108,   304,     0,   109,   304,
     0,   116,   304,     0,   117,   304,     0,   130,   304,     0,
   131,   304,     0,   132,   304,     0,   133,   304,     0,   118,
   304,     0,   120,   304,     0,   119,   304,     0,   128,   304,
     0,   129,   304,     0,   121,   304,     0,   123,   304,     0,
   139,   304,     0,   140,   304,     0,   142,   304,     0,   143,
   304,     0,   141,   304,     0,   136,   304,     0,   151,   304,
     0,   134,   304,     0,   135,   304,     0,   137,   304,     0,
   124,   304,     0,   127,   304,     0,   125,   304,     0,   126,
   304,     0,   156,   304,     0,   157,   304,     0,   148,   304,
     0,   158,   304,     0,   149,   304,     0,   152,   304,     0,
   153,   304,     0,   154,   304,     0,   155,   304,     0,   150,
   304,     0,   159,   304,     0,   160,   304,     0,   163,   304,
     0,   164,   304,     0,   161,   304,     0,   162,   304,     0,
   175,   304,     0,   147,     0,   144,     0,   145,     0,   146,
     0,   165,   329,     0,   167,   329,     0,   166,   329,     0,
   168,   329,     0,   169,   329,     0,   170,   329,     0,   171,
   329,     0,   172,   329,     0,   173,   329,     0,   174,   329,
     0,   432,   329,     0,   320,   329,     0,   334,   329,     0,
   313,   329,     0,   304,   316,   304,     0,   318,     0,   318,
    85,   317,    88,     0,   351,     0,   351,    21,   317,     0,
   311,   319,     0,   312,   319,     0,   314,   319,     0,     0,
   316,     0,     0,     0,   329,    67,   431,   304,    19,   321,
   383,   330,   384,   322,    20,     0,     0,     0,   329,    68,
   431,   304,    19,   323,   383,   330,   384,   324,    20,     0,
   329,    67,   431,   304,    19,    20,     0,   329,    68,   431,
   304,    19,    20,     0,     0,     0,   329,    67,   304,    19,
   325,   383,   330,   384,   326,    20,     0,     0,     0,   329,
    68,   304,    19,   327,   383,   330,   384,   328,    20,     0,
   329,    67,   304,    19,    20,     0,   329,    68,   304,    19,
    20,     0,   329,    67,   431,   329,     0,   329,    68,   431,
   329,     0,     0,   331,     0,   207,     0,   330,   331,     0,
   316,   329,   332,   304,    18,     0,   316,   304,    18,     0,
   333,   329,     0,   332,    21,   333,   329,     0,   339,     0,
    22,   304,   295,     0,   339,    22,   304,   295,     0,   329,
    69,    19,   336,    20,   304,     0,     0,   329,    69,   431,
    19,   335,   336,    20,   304,     0,   329,    69,   431,   304,
     0,   337,     0,   336,    21,   337,     0,   336,    21,     0,
   431,     0,   431,    23,   304,   295,     0,   198,     0,   353,
     0,   343,   189,     0,   343,   338,     0,   198,     0,   343,
   198,     0,   346,     0,   329,   344,     0,   108,     0,   109,
     0,   341,     0,   342,   341,     0,    34,     0,    34,   342,
     0,    34,   343,     0,    34,   342,   343,     0,   345,     0,
   345,    21,     5,     0,   431,     0,   345,    21,   431,     0,
     5,     0,   347,     0,   347,    21,     5,     0,     0,   348,
   350,     0,     0,   347,    21,   349,   350,     0,   304,   316,
   338,   304,     0,   431,     0,   315,     0,   315,   352,     0,
   343,     0,   354,     0,   343,   354,     0,     0,   354,     0,
   304,    24,   329,   352,    25,     0,    26,    27,     0,    26,
   295,    27,     0,   354,    26,    27,     0,   354,    26,   295,
    27,     0,   304,    24,    25,     0,   304,    24,   346,    25,
     0,   354,   304,    24,    25,     0,   354,   304,    24,   346,
    25,     0,   372,     0,   373,     0,   376,     0,   379,     0,
   392,     0,   395,     0,   426,     0,   400,     0,   428,     0,
   356,     0,   176,   430,   186,    88,     0,   179,   430,   186,
    88,     0,   182,   430,   186,    88,     0,    22,   431,     0,
   359,     0,   357,     0,   366,     0,   359,   366,     0,   399,
   359,     0,   425,   371,    11,    24,   293,    25,    18,     0,
   425,   371,    11,    24,   293,    25,     0,   361,   366,     0,
     0,     0,    13,    24,   294,    18,   294,    18,   362,   294,
   363,    25,     0,     0,   187,   381,    24,   365,   403,    25,
     0,   188,     0,   372,     0,   373,     0,   376,     0,   368,
   390,     0,   368,     0,   369,     0,   392,     0,   367,     0,
   360,     0,   364,     0,   428,     0,    24,   366,    25,     0,
     1,     0,   394,   366,     0,   381,    19,     0,   385,    20,
     0,   371,     0,   389,     0,   372,     0,   373,     0,   376,
     0,   380,     0,   393,     0,   395,     0,   400,     0,   427,
     0,    24,   371,    25,     0,   428,     0,     1,     0,   431,
    22,     0,   107,   355,     0,     0,     6,   295,   374,    22,
     0,     0,    98,     6,   295,   375,    22,     0,     0,     7,
   377,    22,     0,     0,    98,     7,   378,    22,     0,    24,
   379,    25,     0,   381,   387,     0,   381,   388,   382,     0,
     0,     0,     0,     0,     0,    20,     0,   107,    20,     0,
   391,    20,     0,   391,   107,    20,     0,   390,    20,     0,
   390,   107,    20,     0,   390,   391,    20,     0,   390,   391,
   107,    20,     0,    19,   386,     0,    19,    20,     0,    19,
   389,    20,     0,    19,   390,    20,     0,    19,   390,   391,
    20,     0,   371,     0,   389,   371,     0,   296,     0,   390,
   296,     0,   355,     0,   391,   355,     0,    18,     0,   293,
    18,     0,    18,     0,   293,    18,     0,   293,     0,     8,
    24,   293,    25,     0,   394,   355,     0,     0,   394,   355,
     9,   396,   355,     0,     0,    10,    24,   293,   397,    25,
   355,     0,    11,    24,   293,    25,     0,    11,    24,   293,
    25,     0,     0,     0,   187,   401,   381,    24,   402,   403,
    25,   379,   424,   382,     0,   405,     0,     0,   403,   404,
    21,   405,     0,   423,     0,   430,     0,   185,     0,   184,
     0,   186,     0,    24,   293,    25,     0,   406,     0,   268,
    26,   293,    27,     0,   268,    24,    25,     0,   268,    24,
   269,    25,     0,    70,    24,   292,    21,   351,    25,     0,
   268,   329,    28,   431,   304,     0,   268,   329,    44,   431,
   304,     0,   268,    47,     0,   268,    48,     0,   407,     0,
    47,   270,     0,    48,   270,     0,    29,   276,     0,    34,
   276,     0,    33,   276,     0,    32,   276,     0,    31,   276,
     0,    30,   276,     0,   273,     0,   408,     0,    24,   351,
    25,   276,     0,   409,     0,   277,    34,   276,     0,   277,
    35,   276,     0,   277,    36,   276,     0,   410,     0,   278,
    33,   277,     0,   278,    32,   277,     0,   411,     0,   279,
    49,   278,     0,   279,    50,   278,     0,   412,     0,   280,
    37,   279,     0,   280,    38,   279,     0,   280,    51,   279,
     0,   280,    52,   279,     0,   413,     0,   281,    53,   280,
     0,   281,    54,   280,     0,   414,     0,   282,    29,   281,
     0,   415,     0,   283,    39,   282,     0,   416,     0,   284,
    40,   283,     0,   417,     0,   285,    55,   284,     0,   418,
     0,   287,    56,   285,     0,   419,     0,     0,     0,   287,
    41,   421,   293,    22,   422,   289,     0,   420,     0,   270,
    23,   292,     0,   270,    57,   292,     0,   270,    58,   292,
     0,   270,    59,   292,     0,   270,    60,   292,     0,   270,
    61,   292,     0,   270,    62,   292,     0,   270,    63,   292,
     0,   270,    64,   292,     0,   270,    65,   292,     0,   270,
    66,   292,     0,   188,     0,     0,    12,     0,   398,   355,
     0,   425,   355,    11,    24,   293,    25,    18,     0,   361,
   355,     0,   398,   371,     0,   425,   371,    11,    24,   293,
    25,    18,     0,   425,   371,    11,    24,   293,    25,     0,
   361,   371,     0,    14,   431,    18,     0,    15,    18,     0,
    97,    15,    18,     0,    16,    18,     0,    93,    16,    18,
     0,    94,    16,    18,     0,    95,    16,    18,     0,    96,
    16,    18,     0,    17,    18,     0,    17,   293,    18,     0,
     0,    18,     0,   183,     0,   184,     0,   187,     0,   188,
     0,   430,     0,   185,     0,   189,     0,   185,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   261,   262,   265,   266,   269,   270,   271,   272,   273,   274,
   275,   278,   280,   284,   284,   289,   295,   299,   300,   304,
   305,   307,   309,   313,   316,   324,   327,   336,   337,   339,
   341,   357,   361,   368,   372,   378,   380,   380,   384,   385,
   386,   387,   390,   393,   394,   400,   401,   405,   409,   414,
   421,   425,   430,   437,   440,   441,   444,   449,   450,   453,
   454,   455,   458,   459,   460,   465,   467,   468,   479,   483,
   484,   489,   490,   500,   501,   504,   505,   508,   509,   512,
   513,   516,   517,   520,   523,   524,   527,   528,   529,   530,
   531,   534,   535,   538,   538,   541,   541,   544,   548,   549,
   552,   552,   555,   555,   558,   562,   563,   566,   567,   570,
   576,   583,   589,   596,   597,   598,   599,   600,   603,   606,
   609,   610,   613,   614,   615,   616,   617,   618,   619,   620,
   623,   629,   636,   642,   651,   657,   661,   663,   667,   670,
   677,   687,   688,   691,   692,   695,   696,   697,   698,   699,
   700,   701,   702,   706,   707,   711,   712,   715,   717,   719,
   720,   721,   722,   723,   725,   729,   733,   745,   746,   747,
   748,   749,   750,   753,   754,   755,   756,   757,   758,   759,
   760,   761,   764,   765,   768,   769,   770,   771,   772,   773,
   774,   775,   776,   777,   778,   781,   782,   785,   789,   790,
   793,   794,   795,   796,   799,   800,   804,   805,   806,   807,
   810,   811,   812,   815,   816,   817,   820,   821,   822,   823,
   824,   827,   828,   829,   832,   833,   836,   837,   841,   842,
   845,   846,   851,   857,   858,   864,   870,   871,   871,   873,
   876,   877,   878,   879,   880,   881,   882,   883,   884,   885,
   886,   887,   890,   891,   894,   895,   898,   903,   904,   905,
   908,   921,   925,   926,   929,   934,   935,   935,   940,   941,
   942,   943,   946,   949,   952,   955,   956,   959,   960,   963,
   964,   965,   969,   971,   980,   981,   982,   983,   984,   987,
   988,   989,   990,   991,   992,   993,   994,   995,   996,   997,
   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,
  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,
  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
  1028,  1029,  1030,  1031,  1032,  1038,  1039,  1040,  1041,  1044,
  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,
  1055,  1056,  1057,  1060,  1064,  1065,  1069,  1070,  1074,  1075,
  1076,  1079,  1080,  1083,  1085,  1087,  1088,  1090,  1092,  1093,
  1095,  1097,  1099,  1101,  1102,  1104,  1106,  1107,  1109,  1111,
  1112,  1115,  1118,  1119,  1120,  1123,  1125,  1129,  1131,  1135,
  1136,  1137,  1141,  1143,  1143,  1145,  1148,  1150,  1152,  1155,
  1160,  1167,  1168,  1169,  1176,  1180,  1181,  1185,  1186,  1189,
  1190,  1193,  1194,  1197,  1198,  1199,  1200,  1203,  1204,  1207,
  1208,  1211,  1212,  1213,  1216,  1216,  1217,  1218,  1221,  1233,
  1249,  1250,  1253,  1254,  1255,  1258,  1259,  1262,  1264,  1265,
  1267,  1268,  1270,  1272,  1274,  1276,  1282,  1283,  1284,  1285,
  1286,  1287,  1288,  1289,  1290,  1292,  1296,  1298,  1300,  1306,
  1311,  1314,  1317,  1318,  1322,  1324,  1326,  1328,  1332,  1333,
  1335,  1339,  1341,  1343,  1346,  1347,  1348,  1349,  1350,  1351,
  1352,  1353,  1354,  1355,  1356,  1357,  1358,  1361,  1367,  1370,
  1373,  1374,  1377,  1378,  1379,  1380,  1381,  1382,  1383,  1384,
  1385,  1386,  1387,  1390,  1391,  1397,  1398,  1399,  1400,  1403,
  1404,  1405,  1406,  1409,  1410,  1414,  1417,  1420,  1423,  1426,
  1429,  1432,  1433,  1434,  1435,  1437,  1438,  1440,  1442,  1449,
  1453,  1455,  1457,  1459,  1463,  1464,  1467,  1468,  1471,  1472,
  1475,  1476,  1479,  1480,  1481,  1484,  1492,  1497,  1498,  1502,
  1503,  1506,  1511,  1514,  1515,  1516,  1524,  1525,  1525,  1529,
  1530,  1531,  1542,  1549,  1550,  1553,  1554,  1555,  1556,  1557,
  1559,  1560,  1561,  1562,  1565,  1566,  1567,  1568,  1569,  1570,
  1571,  1572,  1573,  1574,  1577,  1578,  1581,  1582,  1583,  1584,
  1587,  1588,  1589,  1592,  1593,  1594,  1597,  1598,  1599,  1600,
  1601,  1604,  1605,  1606,  1609,  1610,  1613,  1614,  1618,  1619,
  1622,  1623,  1626,  1627,  1630,  1631,  1632,  1633,  1636,  1637,
  1638,  1639,  1640,  1641,  1642,  1643,  1644,  1645,  1646,  1647,
  1650,  1651,  1654,  1657,  1659,  1661,  1665,  1666,  1668,  1670,
  1673,  1674,  1675,  1677,  1678,  1679,  1680,  1681,  1682,  1683,
  1686,  1687,  1690,  1693,  1694,  1695,  1696,  1697,  1700,  1701
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
"BufUnaryOp","BufBinaryOp","optPlainGlobMods","@13","optGlobModsRest","optPlainGlobModsRest",
"specialClauses","globIdList","globIdListExpr","globId","globQual","optGlobQuals",
"optGlobModsAux","@14","@15","optPlainGlobModsAux","@16","@17","optMods","fcnMods",
"@18","fcnPlainMods","@19","specialTag","endStateTag","endSpecialTag","stateSpecialClause",
"specialClauseType","specialClause","@20","@21","fcnDefHdrAux","fcnBody","@22",
"@23","fcnDef","locModifies","locPlainModifies","modListExpr","mExpr","modList",
"specClauseListExpr","specClauseList","primaryExpr","postfixExpr","argumentExprList",
"unaryExpr","fieldDesignator","offsetofExpr","sizeofExpr","@24","sizeofExprAux",
"castExpr","timesExpr","plusExpr","shiftExpr","relationalExpr","equalityExpr",
"bitandExpr","xorExpr","bitorExpr","andExpr","@25","orExpr","@26","conditionalExpr",
"@27","@28","assignExpr","expr","optExpr","constantExpr","initializer","instanceDecl",
"@29","@30","namedInitializer","@31","typeDecl","@32","IsType","PushType","namedInitializerList",
"namedInitializerListAux","optDeclarators","init","initList","storageSpecifier",
"typeQualifier","typeModifier","typeSpecifier","completeType","completeTypeSpecifier",
"altType","completeTypeSpecifierAux","optCompleteType","suSpc","@33","@34","@35",
"@36","@37","@38","@39","@40","NotType","structDeclList","structDecl","structNamedDeclList",
"structNamedDecl","enumSpc","@41","enumeratorList","enumerator","optNamedDecl",
"namedDecl","genericParamList","innerMods","innerModsList","pointers","paramIdList",
"idList","paramTypeList","paramList","@42","@43","paramDecl","typeExpression",
"abstractDecl","optAbstractDeclBase","abstractDeclBase","stmt","lclintassertion",
"iterBody","endBody","iterDefStmtList","iterDefIterationStmt","forPred","@44",
"@45","partialIterStmt","@46","iterDefStmt","iterSelectionStmt","openScope",
"closeScope","macroBody","stmtErr","labeledStmt","caseStmt","@47","@48","defaultStmt",
"@49","@50","compoundStmt","compoundStmtErr","CreateInnerScope","DeleteInnerScope",
"CreateStructInnerScope","DeleteStructInnerScope","DeleteInnerScopeSafe","compoundStmtRest",
"compoundStmtAux","compoundStmtAuxErr","stmtListErr","initializerList","stmtList",
"expressionStmt","expressionStmtErr","ifPred","selectionStmt","@51","@52","whilePred",
"iterWhilePred","iterStmt","@53","@54","iterArgList","@55","iterArgExpr","primaryIterExpr",
"postfixIterExpr","unaryIterExpr","castIterExpr","timesIterExpr","plusIterExpr",
"shiftIterExpr","relationalIterExpr","equalityIterExpr","bitandIterExpr","xorIterExpr",
"bitorIterExpr","andIterExpr","orIterExpr","conditionalIterExpr","@56","@57",
"assignIterExpr","endIter","doHeader","iterationStmt","iterationStmtErr","jumpStmt",
"optSemi","id","newId","typeName", NULL
};
#endif

static const short yyr1[] = {     0,
   190,   190,   191,   191,   192,   192,   192,   192,   192,   192,
   192,   193,   193,   195,   194,   196,   196,   197,   197,   198,
   198,   198,   198,   199,   198,   200,   198,   201,   201,   201,
   201,   202,   201,   203,   201,   205,   206,   204,   207,   207,
   207,   207,   208,   210,   209,   212,   211,   213,   215,   214,
   214,   217,   216,   216,   218,   218,   219,   220,   220,   221,
   221,   221,   222,   222,   222,   223,   223,   223,   224,   225,
   225,    -1,    -1,   227,   226,   228,   228,   229,   229,   230,
   230,   231,   231,   232,   233,   233,   234,   234,   234,   234,
   234,   235,   235,   237,   236,   238,   236,   236,   236,   236,
   240,   239,   241,   239,   239,   239,   239,   242,   242,   244,
   243,   246,   245,   247,   247,   247,   247,   247,   248,   249,
   250,   250,   251,   251,   251,   251,   251,   251,   251,   251,
   253,   252,   254,   252,   255,   255,   257,   256,   258,   256,
   259,   260,   260,   261,   261,   262,   262,   262,   262,   262,
   262,   262,   262,   263,   263,   264,   264,   265,   265,   265,
   265,   265,   265,   265,   265,   266,   266,   267,   267,   267,
   267,   267,   267,   268,   268,   268,   268,   268,   268,   268,
   268,   268,   269,   269,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   270,   270,   271,   271,   272,   274,   273,
   275,   275,   275,   275,   276,   276,   277,   277,   277,   277,
   278,   278,   278,   279,   279,   279,   280,   280,   280,   280,
   280,   281,   281,   281,   282,   282,   283,   283,   284,   284,
   285,   286,   285,   287,   288,   287,   289,   290,   291,   289,
   292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
   292,   292,   293,   293,   294,   294,   295,   296,   296,   296,
   297,   298,   297,   299,   297,   300,   301,   300,   303,   302,
   302,   302,   304,   305,   306,   307,   307,   308,   308,   309,
   309,   309,   310,   310,   311,   311,   311,   311,   311,   312,
   312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
   312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
   312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
   312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
   312,   312,   312,   312,   312,   313,   313,   313,   313,   314,
   314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
   314,   314,   314,   315,   316,   316,   317,   317,   318,   318,
   318,   319,   319,   321,   322,   320,   323,   324,   320,   320,
   320,   325,   326,   320,   327,   328,   320,   320,   320,   320,
   320,   329,   330,   330,   330,   331,   331,   332,   332,   333,
   333,   333,   334,   335,   334,   334,   336,   336,   336,   337,
   337,   338,   338,   338,   338,   339,   339,   340,   340,   341,
   341,   342,   342,   343,   343,   343,   343,   344,   344,   345,
   345,   346,   346,   346,   348,   347,   349,   347,   350,   350,
   351,   351,   352,   352,   352,   353,   353,   354,   354,   354,
   354,   354,   354,   354,   354,   354,   355,   355,   355,   355,
   355,   355,   355,   355,   355,   355,   356,   356,   356,    -1,
   357,   358,   359,   359,   360,   360,   360,   360,   362,   363,
   361,   365,   364,   364,   366,   366,   366,   366,   366,   366,
   366,   366,   366,   366,   366,   366,   366,   367,   368,   369,
   370,   370,   371,   371,   371,   371,   371,   371,   371,   371,
   371,   371,   371,   372,   372,   374,   373,   375,   373,   377,
   376,   378,   376,   379,   379,   380,   381,   382,   383,   384,
   385,   386,   386,   386,   386,   386,   386,   386,   386,   387,
   388,   388,   388,   388,   389,   389,   390,   390,   391,   391,
   392,   392,   393,   393,   393,   394,   395,   396,   395,   397,
   395,   398,   399,   401,   402,   400,   403,   404,   403,   405,
   405,   405,   405,   406,   406,   407,   407,   407,   407,   407,
   407,   407,   407,   407,   408,   408,   408,   408,   408,   408,
   408,   408,   408,   408,   409,   409,   410,   410,   410,   410,
   411,   411,   411,   412,   412,   412,   413,   413,   413,   413,
   413,   414,   414,   414,   415,   415,   416,   416,   417,   417,
   418,   418,   419,   419,   420,   421,   422,   420,   423,   423,
   423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
   424,   424,   425,   426,   426,   426,   427,   427,   427,   427,
   428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
   429,   429,   430,   431,   431,   431,   431,   431,   432,   432
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     2,     1,     1,     1,     1,     1,
     1,     8,    11,     0,     5,     1,     3,     1,     2,     1,
     6,     3,     6,     0,     7,     0,     8,     1,     6,     3,
     6,     0,     6,     0,     7,     0,     0,    10,     3,     3,
     3,     2,     1,     0,     2,     0,     2,     2,     0,     4,
     0,     0,     4,     0,     2,     1,     4,     1,     1,     1,
     1,     1,     1,     4,     5,     1,     1,     1,     1,     1,
     1,     0,     2,     0,     2,     1,     2,     1,     2,     1,
     2,     1,     3,     2,     1,     1,     1,     1,     1,     1,
     1,     0,     2,     0,     6,     0,     6,     1,     1,     0,
     0,     5,     0,     5,     1,     1,     0,     1,     0,     0,
     3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     0,     7,     0,     8,     1,     3,     0,     3,     0,     3,
     2,     3,     2,     2,     1,     1,     1,     3,     4,     2,
     3,     3,     3,     1,     1,     1,     3,     1,     1,     3,
     4,     2,     3,     3,     3,     1,     3,     1,     1,     1,
     3,     1,     1,     1,     4,     3,     4,     6,     5,     5,
     2,     2,     1,     3,     1,     2,     2,     2,     2,     2,
     2,     2,     2,     1,     1,     3,     1,     9,     0,     3,
     4,     2,     4,     2,     1,     4,     1,     3,     3,     3,
     1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
     3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
     1,     0,     4,     1,     0,     4,     1,     0,     0,     7,
     1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     1,     3,     0,     1,     1,     1,     1,     1,
     3,     0,     9,     0,    11,     2,     0,     6,     0,     7,
     4,     4,     0,     0,     2,     1,     4,     0,     4,     1,
     3,     4,     1,     3,     1,     1,     1,     1,     1,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     1,     1,     1,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     3,     1,     4,     1,     3,     2,     2,
     2,     0,     1,     0,     0,    11,     0,     0,    11,     6,
     6,     0,     0,    10,     0,     0,    10,     5,     5,     4,
     4,     0,     1,     1,     2,     5,     3,     2,     4,     1,
     3,     4,     6,     0,     8,     4,     1,     3,     2,     1,
     4,     1,     1,     2,     2,     1,     2,     1,     2,     1,
     1,     1,     2,     1,     2,     2,     3,     1,     3,     1,
     3,     1,     1,     3,     0,     2,     0,     4,     4,     1,
     1,     2,     1,     1,     2,     0,     1,     5,     2,     3,
     3,     4,     3,     4,     4,     5,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     4,     4,     4,     2,
     1,     1,     1,     2,     2,     7,     6,     2,     0,     0,
    10,     0,     6,     1,     1,     1,     1,     2,     1,     1,
     1,     1,     1,     1,     1,     3,     1,     2,     2,     2,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     3,     1,     1,     2,     2,     0,     4,     0,     5,     0,
     3,     0,     4,     3,     2,     3,     0,     0,     0,     0,
     0,     1,     2,     2,     3,     2,     3,     3,     4,     2,
     2,     3,     3,     4,     1,     2,     1,     2,     1,     2,
     1,     2,     1,     2,     1,     4,     2,     0,     5,     0,
     6,     4,     4,     0,     0,    10,     1,     0,     4,     1,
     1,     1,     1,     1,     3,     1,     4,     3,     4,     6,
     5,     5,     2,     2,     1,     2,     2,     2,     2,     2,
     2,     2,     2,     1,     1,     4,     1,     3,     3,     3,
     1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
     3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
     1,     3,     1,     3,     1,     0,     0,     7,     1,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     1,     0,     1,     2,     7,     2,     2,     7,     6,     2,
     3,     2,     3,     2,     3,     3,     3,     3,     2,     3,
     0,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     0,
    11,   414,   382,   259,   382,    14,     0,     0,     0,     0,
   273,   273,   286,   285,   287,   288,   289,   273,   273,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
   273,   273,   273,   337,   338,   339,   336,   273,   273,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   382,   382,   382,   382,   382,   382,
   382,   382,   382,   382,   273,   653,   654,   658,   655,   656,
   659,     0,     3,     6,     7,   406,     8,     9,   382,    43,
   651,    10,   258,   260,     0,   362,   362,   382,   362,   382,
   355,   382,     0,   382,   135,   273,   657,    20,   382,   410,
   411,   412,   415,   416,   276,   273,   273,   269,   382,   660,
   382,   382,   658,     0,   503,   273,   510,     0,     0,     0,
   633,     0,     0,     0,     0,   273,   543,     0,   273,   273,
   273,   273,   273,   273,   273,   273,   273,     0,    42,     0,
     0,     0,     0,     0,     0,   273,   173,   169,   172,   170,
   554,   174,   185,   205,   195,   194,   207,   211,   214,   217,
   222,   225,   227,   229,   231,   234,   237,   241,   253,   545,
   199,     0,     0,   535,   493,   494,   495,   496,     0,     0,
   497,   273,   498,     0,   499,     0,   500,   502,   168,     0,
   487,     0,   541,     0,   517,   474,     0,     0,     0,   483,
     0,   484,   463,   482,   479,   480,   475,   476,   477,     0,
     0,   481,     0,     0,     0,   485,   462,     0,   290,   291,
   292,   293,   298,   300,   299,   303,   304,   315,   317,   318,
   316,   301,   302,   294,   295,   296,   297,   312,   313,   310,
   314,   305,   306,   309,   307,   308,   321,   323,   328,   311,
   324,   325,   326,   327,   319,   320,   322,   329,   330,   333,
   334,   331,   332,   340,   342,   341,   343,   344,   345,   346,
   347,   348,   349,   335,     4,   273,     0,   137,   141,   537,
   382,   382,   652,     5,   382,   363,   359,   360,   353,   361,
     0,   273,   273,   351,   273,   273,     0,   352,   407,   350,
   413,   417,   382,     0,   275,   382,     0,   266,   273,   651,
    16,    18,     0,   382,   273,    28,   425,   273,   169,   172,
   205,   257,   506,   168,     0,   273,   273,   273,   273,     0,
   642,   644,   649,     0,     0,   382,   431,     0,     0,   188,
   193,   192,   191,   190,   189,     0,   273,   186,   187,   273,
     0,     0,     0,     0,     0,   273,   512,   273,     0,     0,
     0,   505,   456,   273,   447,   448,   449,   450,     0,   451,
   452,   273,   454,   273,   453,   455,   517,   273,   273,   181,
   182,     0,   273,   273,   273,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   273,   232,
   238,   235,   544,   273,     0,   640,    39,     0,   518,   536,
   547,   637,     0,   504,   273,     0,     0,     0,   542,    40,
   464,   468,   478,   489,   490,   488,     0,     0,    41,    22,
   273,   425,   382,   273,   517,   538,   273,   261,   136,   382,
     0,   357,     0,   382,     0,   382,     0,   273,   273,   272,
   273,   271,   267,   382,     0,   273,     0,   382,   273,    19,
   422,     0,     0,   408,   423,   273,     0,     0,   511,     0,
   550,     0,   256,     0,   641,   650,   171,   273,   273,     0,
   433,   432,   434,   273,   501,   273,     0,   645,   646,   647,
   648,   643,   508,     0,     0,     0,     0,     0,   636,   382,
   515,   634,     0,     0,   176,     0,   183,     0,     0,     0,
   242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
   252,   208,   209,   210,   213,   212,   215,   216,   218,   219,
   220,   221,   223,   224,   226,   228,   230,   273,   273,   273,
   254,   273,   273,   200,   531,   172,   535,     0,   382,   516,
   548,     0,     0,   486,   472,     0,     0,    24,     0,   522,
   273,   539,   138,   382,   273,   382,   517,   140,   273,   262,
   356,   273,   372,     0,   380,   375,     0,   381,     0,   397,
   400,   394,   396,   277,   273,   273,   651,    15,    30,   273,
   425,   273,    17,   409,   418,   420,    36,   427,   382,   426,
   430,   507,   546,     0,   552,   273,   354,   439,     0,   425,
   435,   273,     0,   206,   382,   273,     0,   513,   514,     0,
     0,     0,   530,     0,   555,   273,   177,   175,   273,   273,
   233,     0,   236,   273,   202,   273,   204,   532,   533,   273,
   273,   273,   553,   273,   273,   382,    44,    26,   523,   526,
   273,   273,   524,   273,   540,     0,   264,   273,   358,   378,
   519,   364,   379,   519,   367,   273,   399,   273,     0,     0,
   273,   273,   273,     0,    32,     0,   273,     0,    74,   424,
   273,   436,   273,     0,   440,   443,   273,     0,   441,     0,
   425,     0,     0,   509,   457,   458,   459,   273,   273,   184,
   179,   180,   239,     0,     0,   534,   549,     0,   273,   273,
   273,   273,   273,   273,   273,   273,   273,     0,   169,   172,
   170,   185,   205,   194,   211,   214,   217,   222,   225,   227,
   229,   231,   234,     0,   558,   557,   566,   575,   585,   587,
   591,   594,   597,   602,   605,   607,   609,   611,   613,   615,
   619,   560,   168,     0,    23,    46,   100,    44,   527,   528,
   273,   525,    21,   273,   278,   382,   370,   519,   382,   371,
   519,   393,   398,   273,     0,   270,   273,   280,   268,   273,
     0,   382,    74,    34,     0,   419,   421,    37,   107,   428,
   402,     0,   273,   436,   403,   437,   551,   469,     0,   444,
   442,   445,     0,     0,   178,     0,   558,   273,   201,   203,
   639,     0,     0,   188,   193,   192,   191,   190,   189,   186,
   187,   273,   273,   273,   181,   182,     0,   273,   273,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   232,   616,   235,   473,     0,   467,
    25,    54,    94,   110,    98,   114,   115,   116,   117,   118,
   121,   122,    45,   100,    76,    99,   382,   382,    80,    46,
   529,   273,     0,   384,   382,   382,   383,   382,   382,   382,
   401,   273,   283,     0,   278,    12,    31,    33,    74,    29,
   651,   101,   112,   105,    75,   107,    78,   106,   425,   429,
   404,   405,   273,   438,   446,     0,   197,     0,   517,   240,
   638,   171,   273,     0,   176,     0,     0,     0,     0,   620,
   621,   622,   623,   624,   625,   626,   627,   628,   629,   630,
   208,   209,   210,   213,   212,   215,   216,   218,   219,   220,
   221,   223,   224,   226,   228,   230,   612,   273,   614,   273,
   466,    47,    51,     0,   382,    92,   651,    77,   131,     0,
    81,    27,   278,   273,   382,     0,   273,   385,   373,   382,
   376,   382,   395,   281,   273,   651,    35,     0,   382,    92,
   651,    79,   273,   470,   273,     0,   635,   632,   206,   273,
   177,   175,   273,   273,     0,   559,    48,     0,     0,   382,
    87,    88,    89,    90,    91,   651,    82,    92,     0,     0,
     0,   147,   111,   156,   651,     0,   146,     0,   123,   128,
   127,   126,   125,   124,   129,   130,   133,     0,   263,   273,
   387,   273,   273,   382,   390,     0,   365,     0,   368,   282,
   284,     0,    38,   651,   651,   113,   651,   145,   273,     0,
   198,   196,   631,   518,     0,   179,   180,   617,     0,     0,
    58,    59,    67,    68,     0,    56,    69,     0,    63,     0,
    66,     0,    92,     0,    93,    86,    84,    85,     0,   150,
     0,     0,     0,     0,     0,   143,     0,     0,   159,   166,
   651,   158,     0,   273,   279,   273,   273,     0,   388,   273,
   374,     0,   377,     0,    13,   109,   109,   144,   471,   556,
   178,   273,     0,     0,    53,    55,    61,    60,    62,     0,
     0,   109,    83,   109,   151,   148,   155,   154,     0,   152,
   153,   157,   142,     0,   162,     0,     0,     0,     0,     0,
   651,   265,   391,   382,   386,   273,   366,   369,   102,   108,
   104,   618,    50,    71,    70,     0,     0,     0,    95,    97,
   149,   163,   160,     0,   164,   165,   167,   120,   273,     0,
   389,   392,     0,    57,    64,   161,   132,   119,   273,    65,
   134,     0,     0,     0
};

static const short yydefgoto[] = {  1212,
    82,    83,    84,    85,   122,   320,   321,    86,   667,   778,
   322,   803,   919,    87,   699,   921,   904,    89,   776,   777,
   881,   882,   982,  1027,  1028,   983,   984,  1095,  1096,  1097,
  1150,  1098,  1099,  1100,  1186,   808,   809,   893,   925,   894,
  1036,  1037,  1107,  1038,  1039,   895,   985,   986,   927,  1009,
  1010,  1179,  1180,   987,   928,  1011,   897,  1209,  1199,   898,
  1057,   899,  1048,  1123,    90,   289,   453,   455,    91,  1043,
  1076,  1044,  1159,  1045,  1120,  1121,   162,   163,   526,   164,
   936,   165,   166,   425,   564,   167,   168,   169,   170,   171,
   172,   173,   174,   175,   176,   558,   177,   560,   178,   559,
   828,   179,   207,   494,   333,   290,    93,   678,   784,   115,
   606,    94,   316,   181,   287,   116,   117,   903,   799,   914,
    96,    97,    98,    99,   347,   291,   461,   101,   297,   102,
   788,  1132,   791,  1134,   681,  1066,   684,  1068,   103,   906,
   907,  1063,  1064,   104,   689,   599,   600,   813,   119,   483,
   112,   113,   106,   614,   615,   484,   485,   486,   701,   620,
   348,   819,   815,   503,   372,   373,   208,   228,   209,   210,
   374,   933,  1080,   212,   664,   213,   214,   215,   216,   183,
   430,   375,   376,   488,   637,   377,   335,   514,   378,   188,
   379,   570,   786,   999,   221,   583,   521,   429,   190,   584,
   585,   380,   191,   192,   381,   661,   624,   382,   224,   383,
   387,   719,   755,   879,   756,   757,   758,   759,   760,   761,
   762,   763,   764,   765,   766,   767,   768,   769,   770,   771,
   978,  1142,   772,  1084,   384,   385,   197,   386,   294,   334,
   200,   109
};

static const short yypact[] = {  1967,
-32768,   135,  5675,-32768,  6518,-32768,   578,  1881,  3275,  3275,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   396,-32768,-32768,
-32768,  2143,-32768,-32768,-32768,   107,-32768,-32768,  5291,-32768,
   184,-32768,-32768,-32768,    89,  6353,  6353,-32768,  6353,   206,
    35,-32768,   969,-32768,-32768,   578,-32768,-32768,-32768,-32768,
-32768,-32768,   135,-32768,-32768,   310,-32768,   206,-32768,-32768,
-32768,  5675,-32768,   340,-32768,  5837,-32768,   386,   394,   413,
-32768,   423,   578,   330,   455,  1693,-32768,  2517,  5837,  5837,
  5837,  5837,  5837,  5837,-32768,  5848,  5848,   434,-32768,   479,
   538,   544,   560,   463,   171,  4738,-32768,   478,   504,-32768,
   556,-32768,   837,  1023,-32768,-32768,-32768,  1014,   481,   568,
   404,   793,   557,   549,   554,   571,   111,-32768,-32768,   297,
-32768,  3318,   597,   607,-32768,-32768,-32768,-32768,   663,  2938,
-32768,  4738,-32768,  3318,-32768,  3318,-32768,-32768,   688,   704,
-32768,   710,-32768,  2706,   556,   706,   336,   651,  3085,-32768,
  3275,-32768,-32768,-32768,  6113,-32768,-32768,-32768,-32768,   732,
   739,-32768,  3275,  3275,  3318,-32768,-32768,   662,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   737,   756,-32768,-32768,-32768,
   206,  5134,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   768,   666,-32768,-32768,   578,   578,    25,-32768,   107,-32768,
-32768,-32768,-32768,   771,-32768,-32768,   776,   774,   666,   184,
-32768,   129,   775,-32768,   578,-32768,    69,  5837,-32768,-32768,
-32768,-32768,-32768,-32768,   785,  5837,  5837,  5837,  1837,   792,
-32768,-32768,-32768,   411,   283,  5982,   493,   796,   805,-32768,
-32768,-32768,-32768,-32768,-32768,   814,  5837,-32768,-32768,  5837,
   844,   846,   865,   874,   876,  5837,-32768,  1338,   658,   658,
   658,-32768,-32768,  4738,-32768,-32768,-32768,-32768,   836,-32768,
-32768,  4738,-32768,  4738,-32768,-32768,-32768,  4102,  5837,-32768,
-32768,   179,  5837,  5837,  5837,  5837,  5837,  5837,  5837,  5837,
  5837,  5837,  5837,  5837,  5837,  5837,  5837,  5837,  5837,  5837,
  5837,  5837,  5837,  5837,  5837,  5837,  5837,  5837,  5837,-32768,
-32768,-32768,-32768,  5837,   905,-32768,-32768,  2328,-32768,-32768,
   877,-32768,   895,-32768,  5837,   428,   872,   891,-32768,-32768,
-32768,-32768,  6113,-32768,-32768,-32768,  2895,   963,-32768,-32768,
  5837,   374,  3465,   666,   907,-32768,   666,-32768,   462,  6518,
   893,   902,   934,   972,   995,   972,   578,  1033,   666,-32768,
   666,-32768,-32768,-32768,   911,   935,  1003,-32768,   666,   129,
-32768,   578,  1029,-32768,  1044,   578,   154,  1039,-32768,   194,
  1049,   256,  1049,  1056,-32768,-32768,-32768,-32768,  4328,  1067,
   224,-32768,   264,  5837,-32768,-32768,  1088,-32768,-32768,-32768,
-32768,-32768,-32768,  1101,  1096,   939,   945,   970,-32768,  3465,
-32768,-32768,  1143,  1131,-32768,   382,-32768,   293,   578,   578,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1014,  1014,   481,   481,   568,   568,
   568,   568,   404,   404,   793,   557,   549,  5837,  5837,  5837,
-32768,  5868,  5879,-32768,-32768,  5523,-32768,  3128,  3649,-32768,
-32768,  1133,   542,-32768,-32768,  1134,  1135,-32768,  1136,-32768,
  4017,-32768,-32768,  3833,  4060,-32768,   907,-32768,-32768,  1137,
-32768,-32768,  1144,  1147,-32768,  1148,  1150,-32768,   637,-32768,
  1149,-32768,-32768,-32768,   310,-32768,   183,-32768,-32768,  5837,
   381,   666,-32768,-32768,  1153,-32768,-32768,  1165,  6518,-32768,
-32768,-32768,-32768,  1152,-32768,  1837,-32768,-32768,  1151,   690,
   264,  4554,  1155,-32768,-32768,-32768,  1161,-32768,-32768,  1097,
  1110,  1115,-32768,  1163,-32768,  5837,-32768,-32768,-32768,-32768,
   554,  1008,   571,  5837,-32768,  5837,-32768,-32768,-32768,  4243,
  4738,  5837,-32768,  5899,  5837,-32768,-32768,-32768,-32768,-32768,
  4286,  4469,-32768,  4512,-32768,  1164,-32768,-32768,-32768,-32768,
-32768,  1184,-32768,-32768,  1185,-32768,   578,-32768,   578,  1188,
  2139,-32768,-32768,  1181,-32768,  1186,-32768,    81,-32768,-32768,
   578,   734,  4738,  1192,-32768,-32768,   317,  1187,-32768,  1189,
    98,  1194,  1198,-32768,-32768,-32768,-32768,  5837,  5899,-32768,
-32768,-32768,-32768,  1200,  1201,-32768,-32768,   604,  5837,  5837,
  5837,  5837,  5837,  5837,  5837,  5848,  5848,  1193,   766,   784,
   794,   956,  1692,   797,  1042,  1000,   990,   570,  1047,  1190,
  1174,  1191,  1172,   254,  1203,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   815,   857,-32768,-32768,  1024,-32768,-32768,-32768,
  4695,-32768,-32768,-32768,-32768,  6440,-32768,-32768,  6440,-32768,
-32768,-32768,-32768,  5837,  1099,-32768,  2139,-32768,-32768,  2139,
  1142,-32768,-32768,-32768,  1208,-32768,-32768,-32768,  1457,-32768,
   107,  1210,-32768,   590,-32768,   264,-32768,-32768,  1211,-32768,
-32768,-32768,  1214,   578,-32768,   868,  1216,  5837,-32768,-32768,
  1217,   879,  1219,   886,   888,   899,   912,   913,   915,   918,
   920,  5837,  5004,  5837,   942,   943,   214,  5837,  5837,  5837,
  5837,  5837,  5837,  5837,  5837,  5837,  5837,  5837,  5837,  5837,
  5837,  5837,  5837,  5837,  5837,  5837,  5837,  5837,  5837,  5837,
  5837,  5837,  5837,  5837,  5837,-32768,  5837,-32768,  1221,  1227,
-32768,  1069,    49,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1021,-32768,-32768,-32768,-32768,  1113,-32768,
-32768,  2139,   484,-32768,   206,  5369,-32768,  6440,  5369,  6440,
-32768,-32768,-32768,  1108,-32768,-32768,-32768,-32768,-32768,-32768,
   184,   469,-32768,-32768,-32768,  1040,-32768,-32768,   548,-32768,
-32768,-32768,  5550,-32768,-32768,   516,-32768,  1229,   907,-32768,
-32768,   944,  5837,  1228,   950,   951,   510,   578,   578,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   958,   967,   968,   835,  1022,   383,   760,   109,   440,   442,
   654,   609,   806,   550,   698,   255,   554,  5837,   571,  5899,
-32768,-32768,  1070,  1073,  6244,    57,    55,-32768,-32768,   823,
-32768,-32768,-32768,-32768,-32768,  1233,    87,-32768,-32768,  5369,
-32768,  5369,-32768,-32768,   152,   581,-32768,  1166,  6244,    57,
    55,-32768,   561,-32768,-32768,   578,-32768,  1064,   980,-32768,
   985,   986,-32768,-32768,  1112,-32768,-32768,  1077,   620,  4977,
-32768,-32768,-32768,-32768,-32768,   614,-32768,    57,   861,    95,
    95,-32768,-32768,   327,   669,  1169,-32768,   156,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   687,-32768,   666,
-32768,-32768,  1237,-32768,  1238,  1239,-32768,  1241,-32768,-32768,
-32768,  1175,-32768,  4819,   614,-32768,   669,-32768,   355,  1240,
-32768,-32768,-32768,-32768,  1244,   991,   996,-32768,   620,   620,
-32768,-32768,-32768,-32768,  1182,   620,-32768,  1065,-32768,  1247,
-32768,  1195,    57,  1196,-32768,-32768,-32768,-32768,   639,   327,
   586,   578,   578,    95,  1197,-32768,   156,   156,-32768,   615,
   700,-32768,   156,-32768,-32768,  5837,    87,  1255,-32768,-32768,
-32768,  1242,-32768,  1254,-32768,  1204,  1204,-32768,-32768,-32768,
  1001,  5837,  1202,  1103,-32768,-32768,-32768,-32768,-32768,   620,
   620,  1204,-32768,  1204,-32768,-32768,-32768,   327,  1252,-32768,
-32768,   327,-32768,   727,   615,   642,   578,   578,   156,  1206,
   700,-32768,-32768,-32768,-32768,  5837,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   620,  1262,  1256,-32768,-32768,
-32768,-32768,-32768,  1261,-32768,-32768,   615,-32768,-32768,  1209,
-32768,-32768,  1257,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1289,  1301,-32768
};

static const short yypgoto[] = {-32768,
-32768,  1220,-32768,-32768,-32768,-32768,  -395,  -102,-32768,-32768,
   978,-32768,-32768,-32768,-32768,-32768,    78,-32768,   526,-32768,
   405,-32768,-32768,-32768,-32768,-32768,-32768,  -981,-32768,-32768,
-32768,  -676,-32768,-32768,-32768,  -698,-32768,-32768,-32768,  -711,
   298,   207,-32768,-32768,   271,   417,-32768,-32768,   387,-32768,
-32768,  -998,  -700,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  -950,   146,   307,  -976,   198,-32768,  -648,   494,   733,
-32768,-32768,  -617,-32768,-32768,     7,  -342,  -341,  -318,  -335,
  -347,  -403,  -352,  -473,  -472,-32768,  -592,-32768,  -117,-32768,
-32768,   932,  1082,  -612,  -359,     1,-32768,-32768,-32768,  -467,
-32768,-32768,-32768,     0,  -277,   851,-32768,  -804,  -635,-32768,
-32768,-32768,-32768,-32768,-32768,   163,   744,-32768,   277,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   324,  -690,
  -805,-32768,   197,-32768,-32768,   653,   659,   533,     5,  -406,
  1235,-32768,    15,-32768,-32768,  -554,-32768,-32768,-32768,   648,
  -295,  1004,-32768,  -488,   450,-32768,  1342,-32768,  1129,-32768,
  1290,-32768,-32768,-32768,-32768,   -97,-32768,-32768,-32768,-32768,
   117,  1366,  1434,-32768,-32768,  1473,-32768,-32768,  -358,-32768,
   977,   274,  -560,  -713,-32768,   839,-32768,-32768,   927,   -83,
  -184,   216,-32768,   273,   102,-32768,-32768,   162,-32768,   322,
-32768,-32768,   641,-32768,   393,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1510,-32768,-32768,  1624,   -79,   227,
   366,-32768
};


#define	YYLAST		6707


static const short yytable[] = {    95,
    92,   604,    95,   309,   105,   292,   513,   462,   332,   515,
   229,   230,   631,   704,   556,   742,   114,   231,   232,   233,
   234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   467,   477,   579,   744,   257,   258,   259,
   260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
   270,   271,   272,   273,   545,   546,   557,   547,   548,   555,
   742,   754,   293,   481,   284,   708,   896,    88,  1040,   553,
   554,    95,    92,   613,   651,   806,   105,   653,  1041,  1109,
  1110,   577,   549,   550,   551,   552,   588,   926,   909,   301,
   998,   744,   481,   998,   918,    95,   437,  1143,  1062,   193,
  1006,   441,   295,   442,  1146,   314,   315,   317,  1040,   303,
     2,   323,   822,   789,   184,   446,   754,   312,  1041,  -598,
  -274,   443,   286,  -598,   -96,   -96,   325,   346,  1181,   629,
  1164,  1165,  1031,  1032,   356,   350,   351,   352,   353,   354,
   355,   421,  -274,  1189,   476,  1190,   823,   409,   410,    88,
  1158,   913,   100,  1162,   915,   118,   422,   121,     2,   194,
   797,  1070,  1033,  1034,   424,   328,   366,   367,   497,  1117,
   139,   140,   141,   142,   143,   144,  1035,   991,  1058,  1118,
   752,   753,  1197,   896,   998,  1001,   998,   145,   146,   147,
   293,   293,   477,   346,   696,   692,   529,    76,    77,   123,
   635,    79,    80,   816,   424,  1158,   697,  1000,   623,  1002,
  1007,   148,   530,  -273,   222,   222,   107,   908,   515,   107,
   910,   -96,   -96,   107,   199,   199,   199,    76,  1042,   193,
   475,   948,   110,   111,   100,   752,   753,  -273,   332,   499,
   694,  -382,  -382,  -382,   349,  -382,  -382,   949,   296,   296,
   750,   296,   157,    76,    77,   123,   993,    79,    80,    76,
    77,   123,   710,    79,    80,  -610,   424,    76,  1042,  -610,
   625,   223,   223,   193,   324,   451,  1067,  -273,  1069,   632,
   301,   193,   456,   418,   876,   193,   462,   193,   426,   194,
   423,    95,   460,   424,   463,   465,   459,   497,   107,   877,
   432,   751,   433,   424,   423,   750,   749,   424,    95,   648,
  1014,   745,   746,   474,   323,   816,   193,   346,   748,   195,
   313,   742,   107,   332,    76,   329,   330,   160,    76,  1119,
   713,   448,   499,   194,   569,   747,   500,   341,   107,   441,
     2,   194,  1111,   439,  1112,   194,   424,   194,   724,   107,
   725,   501,   744,   327,   199,   108,   751,   346,   108,  1071,
  1113,   749,   124,   298,   708,   300,   745,   746,   481,  -433,
   499,   332,   199,   748,   660,   481,   194,   754,   274,   275,
   276,   277,   278,   279,   280,   281,   282,   283,   578,   672,
   747,   977,   646,  -595,   979,   695,   647,  -595,   199,   336,
   542,   543,   544,  1144,   407,   408,   199,   337,   199,   222,
   199,   299,   199,   302,   222,   304,   222,   308,   496,  -660,
   199,   424,   310,   833,   911,   199,   338,   199,   222,   222,
   411,   412,   318,   456,   319,   439,   339,   108,   424,   199,
   199,   199,   497,    95,   413,   414,    95,   360,   586,   195,
  -599,   589,  -600,   594,  -599,   597,  -600,   603,    95,   975,
    95,   108,   342,  1187,  1188,   610,   223,   365,   323,  -382,
  -660,   223,  -382,   223,  -382,   619,   392,   326,   409,   410,
   409,   410,   332,   325,   361,   223,   223,   627,   340,  -654,
   500,   994,   633,   195,   995,   460,   752,   753,   498,  1203,
   634,   195,   407,   408,   332,   195,  -273,   195,   499,   964,
   965,   976,   966,   967,   974,  -658,     2,   693,   107,   193,
   424,   107,   107,   107,   972,   973,  1022,    76,    77,   123,
  1015,    79,    80,  1016,   567,   107,   195,   968,   969,   970,
   971,   107,   481,   362,  -103,  -103,  -382,  -382,  -382,   363,
  -382,  -382,   424,  -382,  -382,  -382,   663,  -382,  -382,   456,
  -606,  -382,   706,  -382,  -606,   364,   750,  -655,  -660,  -660,
  1018,  -382,  -660,  -660,   456,   417,   499,   418,   676,   194,
   631,   460,  1125,   419,     2,   516,   517,   518,   293,   811,
   199,   995,   415,   416,   690,   691,   866,   867,   199,  1040,
   199,   323,  1156,  -273,   454,   499,   409,   410,   457,  1041,
   868,   869,   498,     2,   424,   420,   325,   751,   831,  -603,
   633,   293,   749,  -603,  1103,   460,   469,   745,   746,   471,
  1166,   431,  1167,  1090,   748,   411,   412,   479,   721,   722,
   482,  -103,  -103,   346,   199,   346,   686,   687,  1168,   413,
   414,   747,   222,  1155,  1111,  1040,  1112,   108,  1193,   193,
   464,   466,   468,   199,  -601,  1041,   332,   785,  -601,   199,
   107,   428,  1113,   107,   108,   792,   293,   794,   427,  1114,
   326,   800,   801,   107,   481,   107,   805,   107,  -491,     2,
   619,   812,   409,   410,  1124,   107,   500,   995,   107,  -657,
   940,   811,   107,  -382,   706,  -382,   814,   293,  -608,   223,
  1169,   501,  -608,  -382,  1085,   434,   417,  -656,   346,   194,
  -382,  -382,  -382,   435,  -382,  -382,   834,   835,   836,   837,
   838,   839,   440,    76,    77,   123,   199,    79,    80,   195,
   444,  1192,  1166,   449,  1167,   107,   107,  -273,   445,   499,
    76,    77,   123,   450,    79,    80,  1173,     2,    76,  1042,
  1168,  1157,    76,    77,   123,   482,    79,    80,   931,   452,
  -596,   702,   590,   902,  -596,   458,  -563,   595,   470,   598,
  -563,   407,   408,   472,   199,   199,   473,   607,   478,  1091,
  1092,   612,    76,  1093,  -562,  1094,   489,   199,  -562,   495,
   199,   199,   930,   812,  -564,   633,  1202,  -584,  -564,   108,
   504,  -584,   108,   519,    76,  1042,  -604,  1157,   814,   505,
  -604,   522,   601,   523,   108,  -561,   108,   506,   107,  -561,
    76,  1008,   411,   412,   326,   415,   416,   616,    76,    77,
   123,   621,    79,    80,   520,  -593,   413,   414,   331,  -593,
   388,   508,   389,   509,  -382,   961,   962,   963,   404,   405,
   406,   331,   331,   331,   331,   331,   331,   424,   358,   359,
  -382,   880,   510,   390,   391,   571,   199,   199,   424,   195,
   773,   511,   938,   512,   649,   650,   574,   199,   199,   424,
   199,  1030,   582,   942,   996,   572,  -578,  1046,  -583,   590,
  -578,  1003,  -583,   107,   575,   107,    76,    77,   123,  -582,
    79,    80,   592,  -582,   107,  1074,  1072,   107,   107,   199,
   587,  1078,  -581,  -580,   482,  -579,  -581,  -580,  -576,  -579,
  -577,  1049,  -576,  1050,  -577,   773,   562,   563,   905,  1019,
  1102,   905,   593,   707,  1051,  1052,  1104,  1053,   712,  1054,
  1055,   609,  -573,  -574,  -565,  1115,  -573,  -574,  -565,   582,
  -568,   646,  1056,   576,  -568,  1021,   309,   326,  -588,   843,
   591,   844,  -588,  -382,   189,   220,   220,  -589,  -590,   775,
  -273,  -589,  -590,  1059,  1136,  1137,    95,  1138,   608,  -382,
  -586,  1065,   845,   846,  -586,  -569,  -567,   199,   332,  -569,
  -567,  -571,   812,   596,  1081,  -571,  -572,   589,   582,   460,
  -572,  -570,  1086,  1087,  1182,  -570,   611,  1079,   424,   723,
   456,   862,   863,   582,   675,   305,   306,   307,   864,   865,
   107,  1170,  -592,    76,  1106,   393,  -592,   404,   405,   406,
   107,   602,   601,   617,   601,   404,   405,   406,   332,    95,
   622,  1126,  1128,   807,   618,   847,   621,   108,   905,   424,
   905,   905,   905,   626,   456,   859,   860,   861,   812,   394,
   395,   396,   397,   398,   399,   400,   401,   402,   403,   180,
   630,  1200,   883,   884,   885,   883,   884,   885,   331,   870,
   871,   886,   887,   888,   889,   890,   891,   892,   636,   675,
   727,   922,   923,   924,   189,  1147,  1148,  1149,   912,   687,
   639,   675,   638,  1172,   640,   917,    95,  1004,  1005,  1176,
   641,  1065,   424,  1088,  1184,  1185,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   817,   644,   645,   642,   662,   665,   189,   677,
   668,   666,   905,   680,   905,   682,   189,   683,   685,   700,
   189,   688,   189,   698,   107,   107,   703,   705,   711,   108,
   220,   438,   714,   331,   715,   220,   718,   220,   783,   937,
   886,   887,   888,   889,   890,   891,   892,   716,  1207,   220,
   220,   189,   717,   787,   790,   796,   773,   802,  1211,   818,
   804,   820,   873,  1047,   824,   821,   842,   344,   872,   345,
   989,   990,   825,   107,   829,   830,   875,   878,   997,   916,
   874,   331,   920,   929,   941,   934,   331,  1047,   935,   107,
   939,   980,   107,   943,   981,   -52,  1017,   -49,  1020,  1029,
  1061,  1083,  1013,  1073,  1089,  1101,  1116,  1127,  1131,  1130,
  1133,  1177,  1135,   180,  1139,  1108,  1047,  1047,  1141,  1145,
  1151,   180,  1175,  1178,  1122,   180,   884,   180,  1191,  1204,
  1205,  1210,  1152,  1154,  1163,   436,   107,  1206,  1213,  1183,
   331,   507,   331,  1198,   655,   657,  1208,   182,   211,   211,
  1214,   285,   480,   900,   992,   107,   180,  1075,  1105,  1153,
   988,  1194,  1012,  1023,  1024,  1101,  1101,  1077,  1060,   527,
  1171,   605,  1101,  1174,   531,   532,   533,   534,   535,   536,
   537,   538,   539,   540,   541,   679,   946,  1047,   107,   107,
  1047,   795,   331,  1122,  1122,   793,   932,   311,   810,  1122,
   502,   227,   447,   107,   568,   561,  -517,  1140,   643,   827,
     0,   368,   108,   524,   331,     0,   139,   140,   141,   142,
   143,   144,  1026,   185,   217,   217,  1101,  1101,   108,     0,
     0,  1082,     0,   145,   146,   147,     0,  1129,     0,     0,
     0,     0,  1047,   107,   107,  1122,   743,     0,     0,     0,
     0,     0,     0,     0,   189,     0,     0,   148,     0,   487,
     0,     0,  1101,     0,     0,     0,     0,   490,   491,   492,
   493,     0,     0,   220,     0,   108,     0,   182,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   487,     0,
     0,   186,   218,   218,   108,     0,     0,     0,   157,   487,
     0,   743,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   331,   331,   331,   331,   331,   331,   840,   841,
   528,   182,     0,     0,     0,     0,     0,  1160,  1161,   182,
   187,   219,   219,   182,     0,   182,     0,     0,     0,     0,
     0,     0,   108,   211,     0,     0,     0,  1201,   211,     0,
   211,     0,     0,   185,     0,     0,     0,     0,     0,   180,
     0,     0,   211,   211,   182,     0,   573,   196,   225,   225,
    76,   329,   330,   160,     0,     0,   331,     0,   922,   923,
   924,     0,  1195,  1196,   886,   887,   888,   889,   890,   891,
   892,     0,     0,     0,   189,     0,     0,   185,     0,     0,
     0,     0,     0,     0,     0,   185,     0,     0,     0,   185,
   331,   185,     0,     0,     0,     0,     0,     0,     0,   217,
     0,   186,     0,     0,   217,     0,   217,   720,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   217,   217,
   185,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,     0,   331,
   187,     0,     0,     0,     0,   186,     0,     0,     0,     0,
     0,     0,   798,   186,     0,     0,     0,   186,     0,   186,
     0,   198,   226,   226,     0,     0,     0,   218,     0,     0,
   652,     0,   218,     0,   218,     0,     0,   196,     0,   180,
     0,     0,     0,     0,   187,     0,   218,   218,   186,     0,
     0,     0,   187,     0,     0,     0,   187,     0,   187,     0,
     0,     0,     0,     0,     0,   331,   219,     0,     0,     0,
     0,   219,     0,   219,     0,     0,     0,     0,     0,     0,
     0,   196,     0,     0,     0,   219,   219,   187,     0,   196,
     0,     0,     0,   196,     0,   196,     0,   493,     0,     0,
   343,     0,   743,   225,   848,     0,   328,   182,   225,     0,
   225,   139,   140,   141,   142,   143,   144,     0,   798,     0,
     0,   798,   225,   225,   196,   487,   211,   487,   145,   146,
   147,     0,     0,   728,     0,     0,   774,     0,   849,   850,
   851,   852,   853,   854,   855,   856,   857,   858,     0,     0,
     0,   198,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   944,   527,     0,     0,     0,     0,   950,
   951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
     0,     0,     0,   185,     0,     0,     0,     0,     0,   826,
     0,     0,     0,   157,     0,   198,     0,     0,     0,     0,
   832,     0,   217,   198,     0,     0,     0,   198,     0,   198,
     0,     0,     0,     0,     0,     0,     0,   226,     0,     0,
     0,     0,   226,   798,   226,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   226,   226,   198,     0,
     0,     0,     0,     0,  -255,     0,     0,   182,   331,     0,
   328,   186,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,   331,    76,   329,   330,   160,     0,
   218,   125,   145,   146,   147,     0,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   137,  -517,
   187,     0,     0,     0,   138,     0,   148,     0,   331,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,   219,
     0,     0,  -273,  -273,     0,   947,   145,   146,   147,     0,
     0,     0,     0,   185,     0,     0,   798,   196,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   157,     0,     0,
   148,     0,     0,     0,     0,     0,   225,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    -1,     1,     0,     0,
     0,     0,   149,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
  -273,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     2,   186,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     3,     0,     0,   493,     0,     0,     0,     0,    76,
   329,   330,   160,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  -382,  -382,  -382,     0,     4,     0,     0,
   187,     5,     6,     7,     0,     0,     0,     0,     0,     0,
     0,   198,     0,     0,     0,     8,     9,    10,     0,  1025,
     0,     0,     0,    76,   158,   159,   160,   161,    80,     0,
   226,     0,     0,     0,    11,    12,    13,   196,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,     0,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    -2,     1,     0,     0,     0,     0,     0,    76,
    77,    78,     0,    79,    80,    81,     0,   797,     0,     0,
     0,     0,   328,     0,     0,     0,  -273,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     2,     0,     0,     0,
     0,     0,     0,     0,   145,   146,   147,     3,     0,     0,
     0,   198,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   148,  -382,
  -382,  -382,     0,     4,     0,     0,     0,     5,     6,     7,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
    11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,     0,     0,
     0,    76,   329,   330,   160,    76,    77,    78,   125,    79,
    80,    81,     0,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -517,   565,     0,     0,
     0,   138,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -273,
  -273,     0,     3,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  -382,  -382,  -382,   148,     4,     0,
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
    73,    74,    75,     0,     0,     0,     0,     0,     0,     0,
    76,   158,   566,   160,   161,    80,    81,   125,     0,     0,
     0,     0,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   137,  -517,     0,     0,     0,     0,
   138,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,  -273,  -273,
     0,     0,   145,   146,   147,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  -273,  -273,  -273,   148,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   156,  -273,  -273,  -273,   157,  -273,  -273,
  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,     0,  -273,
  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
  -273,  -273,  -273,  -273,     0,  -273,  -273,  -273,  -273,  -273,
  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
  -273,  -273,     0,     0,     0,     0,     0,     0,     0,    76,
   158,   159,   160,   161,    80,  -273,   201,     0,     0,     0,
     0,   126,   127,   128,     0,     0,   202,   131,   132,   133,
   134,   135,   136,   203,  -517,  -521,     0,     0,     0,   204,
     0,     0,     0,     0,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     0,     0,     0,     0,  -273,  -273,     0,
     0,   145,   146,   147,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  -273,  -273,  -273,   148,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   150,   151,
   152,   153,   154,   155,     0,     0,     0,     0,     0,     0,
     0,     0,   156,  -273,  -273,  -273,   157,  -273,  -273,  -273,
  -273,  -273,  -273,  -273,  -273,  -273,  -273,     0,  -273,  -273,
  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
  -273,  -273,  -273,     0,  -273,  -273,  -273,  -273,  -273,  -273,
  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
  -273,     0,     0,     0,     0,     0,     0,     0,    76,   158,
   159,   160,   205,   206,  -273,   201,     0,     0,     0,     0,
   126,   127,   128,     0,     0,   202,   131,   132,   133,   134,
   135,   136,   203,  -465,  -465,     0,     0,     0,   204,  -465,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -273,  -273,   125,     0,
   145,   146,   147,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -517,     0,     0,     0,
     0,   138,     0,     0,   148,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -273,
  -273,     0,     0,   145,   146,   147,  -465,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  -492,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    76,   158,   159,
   160,   205,   206,     0,     0,   201,     0,     0,     0,     0,
   126,   127,   128,     0,     0,   202,   131,   132,   133,   134,
   135,   136,   203,  -517,  -521,     0,     0,     0,   204,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
    76,   158,   159,   160,   161,    80,  -273,  -273,   125,     0,
   145,   146,   147,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -517,   658,     0,     0,
     0,   138,     0,     0,   148,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -273,
  -273,     0,     0,   145,   146,   147,  -461,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    76,   158,   159,
   160,   205,   206,     0,     0,   201,     0,     0,     0,     0,
   126,   127,   128,     0,     0,   202,   131,   132,   133,   134,
   135,   136,   203,  -517,  -521,     0,     0,     0,   204,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
    76,   158,   159,   160,   161,    80,  -273,  -273,   125,     0,
   145,   146,   147,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -517,     0,     0,     0,
     0,   138,     0,     0,   148,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -273,
  -273,     0,     0,   145,   146,   147,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    76,   158,   159,
   160,   205,   206,     0,     0,     0,     0,     0,     0,     0,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   203,  -517,   580,     0,     0,     0,   368,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
    76,   158,   159,   160,   161,    80,  -273,  -273,     0,     3,
   145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   148,     4,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   581,    11,    12,    13,   157,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
   369,     0,     0,   370,     0,     0,   371,    76,   158,   566,
   160,   161,    80,    81,   126,   127,   128,     0,   129,   130,
   131,   132,   133,   134,   135,   136,   203,  -517,   659,     0,
     0,     0,   368,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
  -273,  -273,     0,     3,   145,   146,   147,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   148,     4,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   156,    11,    12,    13,   157,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,   369,     0,     0,   370,     0,     0,
   371,    76,   158,   566,   160,   161,    80,    81,   126,   127,
   128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
   203,  -517,   670,     0,     0,     0,   368,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,  -273,  -273,     0,     3,   145,   146,
   147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   148,     4,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   671,
    11,    12,    13,   157,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,   369,     0,
     0,   370,     0,     0,   371,    76,   158,   566,   160,   161,
    80,    81,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   203,  -517,   669,     0,     0,     0,
   368,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   145,   146,   147,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -517,   673,
     0,     0,     0,   368,     0,     0,   148,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   145,   146,   147,     0,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   156,     0,   328,   525,   157,     0,   148,
   139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   145,   146,   147,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   674,     0,     0,     0,
   157,   148,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   369,     0,     0,   370,     0,     0,   371,    76,
   158,   159,   160,   161,    80,     0,     0,     0,     0,     0,
     0,     0,   157,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   369,     0,     0,   370,     0,
     0,   371,    76,   158,   159,   160,   161,    80,   126,   127,
   128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
   203,  -517,   726,     0,     0,     0,   368,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,    76,   329,   330,   160,   145,   146,
   147,   126,   127,   128,     0,   129,   130,   131,   132,   133,
   134,   135,   136,   203,  -517,   779,     0,     0,     0,   368,
     0,     0,   148,     0,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   145,   146,   147,     0,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     0,   328,     0,   157,   628,   148,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   146,   147,     0,     0,   150,   151,
   152,   153,   154,   155,     0,     0,     0,     0,     0,     0,
     0,     0,   156,     0,     0,     0,   157,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
     0,   370,     0,     0,   371,    76,   158,   159,   160,   161,
    80,     0,     0,     0,     0,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   369,     0,     0,   370,     0,     0,   371,    76,   158,
   159,   160,   161,    80,   126,   127,   128,     0,   129,   130,
   131,   132,   133,   134,   135,   136,   203,  -517,   780,     0,
     0,     0,   368,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
    76,   329,   330,   160,   145,   146,   147,   126,   127,   128,
     0,   129,   130,   131,   132,   133,   134,   135,   136,   203,
  -517,   782,     0,     0,     0,   368,     0,     0,   148,     0,
   139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   145,   146,   147,
     0,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   781,     0,   328,     0,   157,
   709,   148,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   145,
   146,   147,     0,     0,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
     0,     0,   157,   148,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   369,     0,     0,   370,     0,     0,
   371,    76,   158,   159,   160,   161,    80,     0,     0,     0,
     0,     0,     0,     0,   157,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   369,     0,     0,
   370,     0,     0,   371,    76,   158,   159,   160,   161,    80,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   203,  -517,   901,     0,     0,     0,   368,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,    76,   329,   330,   160,
   145,   146,   147,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -517,     0,     0,     0,
     0,   368,     0,     0,   148,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   146,   147,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,   293,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     3,     0,     0,     0,     0,     0,     0,
   369,     0,     0,   370,     0,     0,   371,    76,   158,   159,
   160,   161,    80,     0,     0,  -382,  -382,  -382,     0,     4,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   369,     0,     0,   370,     0,     0,   371,
    76,   158,   159,   160,   161,    80,    11,    12,    13,     0,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,   293,     0,     0,     0,     0,     0,
     0,     0,     0,   120,     0,     0,     0,    81,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     3,     0,     0,     0,     0,     0,   328,   945,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     4,     0,   145,
   146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  -651,     0,     0,     0,     0,     0,
     0,     0,     0,   148,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    11,    12,    13,     0,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,   157,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,  -139,     0,     0,     0,     0,  -139,     0,     0,
     0,   120,     0,     0,     0,    81,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
     0,     0,     0,     0,     0,     0,    76,   329,   330,   160,
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
     0,     0,     0,     0,     0,     0,     0,     0,   120,     0,
     0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  -520,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
    13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   120,    11,    12,    13,    81,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,  -658,     0,     0,     0,     0,     0,
     0,     0,     0,   120,     0,     0,     0,    81,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   328,  -255,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,  -660,
  -660,  -660,     0,     0,     0,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  -660,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  -660,  -660,  -660,     0,  -660,  -660,  -660,  -660,  -660,  -660,
  -660,  -660,  -660,  -660,     0,  -660,  -660,  -660,  -660,  -660,
  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
   157,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,
  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -660,  -273,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
     0,  -660,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    76,   329,   330,   160,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    11,    12,    13,     0,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     0,     0,     0,     0,     0,     0,     0,    76,    77,    78,
   328,    79,    80,    81,     0,   139,   140,   141,   142,   143,
   144,   357,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,   145,   146,   147,     0,     0,     0,     0,     0,
     0,   654,     0,   145,   146,   147,   139,   140,   141,   142,
   143,   144,   656,     0,     0,     0,   148,   139,   140,   141,
   142,   143,   144,   145,   146,   147,     0,   148,     0,     0,
     0,     0,   729,     0,   145,   146,   147,   730,   731,   732,
   733,   734,   735,     0,     0,     0,     0,   148,     0,     0,
     0,     0,     0,     0,   145,   736,   737,   157,   148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   738,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
   329,   330,   160,  -199,  -199,     0,     0,     0,     0,     0,
    76,   329,   330,   160,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    76,   329,   330,   160,     0,     0,     0,     0,     0,     0,
     0,    76,   329,   330,   160,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    76,   739,   740,   741,     0,     0,     0,     0,    11,
    12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,     3,     0,     0,
     0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
    81,     0,     0,     0,     0,     0,     0,     0,     0,  -382,
  -382,  -382,     0,     4,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,     3,     0,
     0,     0,     0,     0,     0,     0,     0,   120,     0,     0,
     0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
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
    67,    68,    69,    70,    71,    72,    73,    74,    75,  -382,
  -382,  -382,     0,     0,     0,     0,     0,     0,   120,     0,
     0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,     8,     9,
    10,     0,     0,     0,     0,     0,     0,   120,     0,     0,
     0,    81,     0,     0,     0,     0,     0,    11,    12,    13,
     0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   120,    11,    12,    13,    81,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,     0,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   120,     0,     0,     0,    81
};

static const short yycheck[] = {     0,
     0,   469,     3,   106,     0,    89,   366,   303,   126,   368,
    11,    12,   501,   626,   418,   664,     2,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    19,   322,   452,   664,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,   407,   408,   419,   409,   410,   417,
   719,   664,    18,     5,    75,   630,   777,     0,    24,   415,
   416,    82,    82,   479,   558,     5,    82,   560,    34,  1040,
  1041,   451,   411,   412,   413,   414,   455,   809,   789,   100,
   906,   719,     5,   909,   803,   106,   204,  1089,    22,     8,
   915,   209,    24,   211,  1096,   116,   117,   118,    24,    85,
    34,   122,    25,   684,     8,   223,   719,   113,    34,    21,
    24,   215,    26,    25,    86,    87,   122,   138,  1137,   499,
  1117,  1118,    86,    87,   145,   139,   140,   141,   142,   143,
   144,    41,    24,  1152,    26,  1154,   711,    49,    50,    82,
  1111,   797,     0,  1114,   800,     3,    56,     5,    34,     8,
    19,    20,   116,   117,    21,    24,     6,     7,    25,    24,
    29,    30,    31,    32,    33,    34,   130,   899,   993,    34,
   664,   664,  1169,   894,  1000,   909,  1002,    46,    47,    48,
    18,    18,   480,   204,   611,    23,    28,   183,   184,   185,
   506,   187,   188,   702,    21,  1166,   612,   908,    25,   910,
   919,    70,    44,    18,     9,    10,     0,   788,   587,     3,
   791,   183,   184,     7,     8,     9,    10,   183,   184,   138,
   320,    28,   108,   109,    82,   719,   719,    24,   366,    26,
   610,   183,   184,   185,   138,   187,   188,    44,    96,    97,
   664,    99,   111,   183,   184,   185,   902,   187,   188,   183,
   184,   185,   632,   187,   188,    21,    21,   183,   184,    25,
    25,     9,    10,   182,   122,   286,  1000,    24,  1002,    26,
   291,   190,   292,    39,    41,   194,   592,   196,   182,   138,
    18,   302,   303,    21,   305,   306,   302,    25,    82,    56,
   194,   664,   196,    21,    18,   719,   664,    21,   319,    27,
   933,   664,   664,   319,   325,   814,   225,   328,   664,     8,
    21,   980,   106,   451,   183,   184,   185,   186,   183,   184,
   636,   225,    26,   182,   428,   664,   347,    18,   122,   447,
    34,   190,    26,    18,    28,   194,    21,   196,   654,   133,
   656,   347,   980,    24,   138,     0,   719,   368,     3,  1005,
    44,   719,     7,    97,   929,    99,   719,   719,     5,    25,
    26,   499,   156,   719,   569,     5,   225,   980,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    25,   584,
   719,   875,    21,    21,   877,    25,    25,    25,   182,    24,
   404,   405,   406,  1090,    32,    33,   190,    24,   192,   204,
   194,    98,   196,   100,   209,   102,   211,   104,    18,    34,
   204,    21,   109,   729,   794,   209,    24,   211,   223,   224,
    37,    38,   119,   443,   121,    18,    24,    82,    21,   223,
   224,   225,    25,   454,    51,    52,   457,    24,   454,   138,
    21,   457,    21,   464,    25,   466,    25,   468,   469,   873,
   471,   106,    18,  1150,  1151,   476,   204,    15,   479,    18,
    85,   209,    21,   211,    23,   486,   163,   122,    49,    50,
    49,    50,   610,   479,    16,   223,   224,   498,   133,    22,
   501,    18,   503,   182,    21,   506,   980,   980,   346,  1186,
   504,   190,    32,    33,   632,   194,    24,   196,    26,   862,
   863,   874,   864,   865,   872,    22,    34,   607,   302,   428,
    21,   305,   306,   307,   870,   871,    27,   183,   184,   185,
    25,   187,   188,    28,   428,   319,   225,   866,   867,   868,
   869,   325,     5,    16,    86,    87,   183,   184,   185,    16,
   187,   188,    21,   183,   184,   185,    25,   187,   188,   569,
    21,    24,    25,    26,    25,    16,   980,    22,   183,   184,
   939,    34,   187,   188,   584,    29,    26,    39,   589,   428,
  1079,   592,  1060,    40,    34,   369,   370,   371,    18,   702,
   374,    21,    53,    54,   605,   606,    37,    38,   382,    24,
   384,   612,    27,    24,   291,    26,    49,    50,   295,    34,
    51,    52,   460,    34,    21,    55,   612,   980,    25,    21,
   631,    18,   980,    25,    21,   636,   313,   980,   980,   316,
    26,   192,    28,    24,   980,    37,    38,   324,   649,   650,
   327,   183,   184,   654,   428,   656,    20,    21,    44,    51,
    52,   980,   447,    25,    26,    24,    28,   302,    27,   568,
   305,   306,   307,   447,    21,    34,   794,   678,    25,   453,
   454,    19,    44,   457,   319,   686,    18,   688,    92,    21,
   325,   692,   693,   467,     5,   469,   697,   471,    92,    34,
   701,   702,    49,    50,    18,   479,   707,    21,   482,    22,
   828,   814,   486,    24,    25,    26,   702,    18,    21,   447,
    21,   707,    25,    34,  1020,    22,    29,    22,   729,   568,
   183,   184,   185,    24,   187,   188,   730,   731,   732,   733,
   734,   735,    92,   183,   184,   185,   520,   187,   188,   428,
    19,    25,    26,    92,    28,   529,   530,    24,    20,    26,
   183,   184,   185,    27,   187,   188,  1126,    34,   183,   184,
    44,   186,   183,   184,   185,   452,   187,   188,   189,    24,
    21,   619,   459,   784,    25,    18,    21,   464,    18,   466,
    25,    32,    33,    18,   568,   569,    23,   474,    24,   180,
   181,   478,   183,   184,    21,   186,    22,   581,    25,    18,
   584,   585,   813,   814,    21,   816,  1176,    21,    25,   454,
    25,    25,   457,   374,   183,   184,    21,   186,   814,    25,
    25,   382,   467,   384,   469,    21,   471,    24,   612,    25,
   183,   921,    37,    38,   479,    53,    54,   482,   183,   184,
   185,   486,   187,   188,    19,    21,    51,    52,   126,    25,
    24,    18,    26,    18,    28,   859,   860,   861,    34,    35,
    36,   139,   140,   141,   142,   143,   144,    21,   146,   147,
    44,    25,    18,    47,    48,     9,   660,   661,    21,   568,
   664,    18,    25,    18,   529,   530,    25,   671,   672,    21,
   674,   985,   453,    25,   905,    11,    21,   987,    21,   586,
    25,   912,    25,   687,    24,   689,   183,   184,   185,    21,
   187,   188,    21,    25,   698,  1009,  1006,   701,   702,   703,
    24,  1011,    21,    21,   611,    21,    25,    25,    21,    25,
    21,   119,    25,   121,    25,   719,    42,    43,   786,   943,
  1030,   789,    19,   630,   132,   133,  1036,   135,   635,   137,
   138,    27,    21,    21,    21,  1045,    25,    25,    25,   520,
    21,    21,   150,    11,    25,    25,  1079,   612,    21,    24,
    88,    26,    25,    28,     8,     9,    10,    21,    21,   666,
    19,    25,    25,   994,  1074,  1075,   997,  1077,    88,    44,
    21,   997,    47,    48,    25,    21,    21,   781,  1126,    25,
    25,    21,  1013,    19,  1015,    25,    21,  1013,   569,  1020,
    25,    21,  1023,  1024,  1142,    25,    24,  1013,    21,    22,
  1030,    32,    33,   584,   585,    67,    68,    69,    49,    50,
   814,  1121,    21,   183,   184,    23,    25,    34,    35,    36,
   824,    19,   687,    25,   689,    34,    35,    36,  1176,  1060,
    22,  1062,  1063,   698,    21,   742,   701,   702,   906,    21,
   908,   909,   910,    18,  1074,    34,    35,    36,  1079,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,     8,
    24,  1171,    72,    73,    74,    72,    73,    74,   366,    53,
    54,    78,    79,    80,    81,    82,    83,    84,    21,   660,
   661,    72,    73,    74,   138,    51,    52,    53,    20,    21,
    25,   672,    22,  1124,   186,   802,  1127,    20,    21,  1130,
   186,  1127,    21,    22,    32,    33,   404,   405,   406,   407,
   408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
   418,   419,   703,    11,    24,   186,    24,    24,   182,    23,
    25,    27,  1000,    20,  1002,    19,   190,    20,    19,     5,
   194,    23,   196,    21,   948,   949,    25,    27,    24,   814,
   204,   205,    22,   451,    88,   209,    24,   211,    25,   824,
    78,    79,    80,    81,    82,    83,    84,    88,  1199,   223,
   224,   225,    88,    20,    20,    18,   980,    27,  1209,    18,
    25,    25,    39,   987,    21,    27,    24,   136,    29,   138,
   897,   898,    25,   997,    25,    25,    55,    25,   905,    88,
    40,   499,    25,    24,    18,    25,   504,  1011,    25,  1013,
    25,    21,  1016,    25,    18,   177,    18,   178,    21,   177,
    18,   188,   929,    88,   178,  1029,    88,    21,    20,    22,
    20,    20,    88,   182,    25,  1039,  1040,  1041,    25,    88,
    24,   190,    18,    20,  1048,   194,    73,   196,    27,    18,
    25,    25,    88,    88,    88,   204,  1060,    27,     0,    88,
   558,   360,   560,    88,   562,   563,    88,     8,     9,    10,
     0,    82,   325,   778,   900,  1079,   225,  1010,  1038,  1103,
   894,  1166,   926,   948,   949,  1089,  1090,  1011,   995,   388,
  1123,   471,  1096,  1127,   393,   394,   395,   396,   397,   398,
   399,   400,   401,   402,   403,   592,   843,  1111,  1112,  1113,
  1114,   689,   610,  1117,  1118,   687,   814,   113,   701,  1123,
   347,    10,   224,  1127,   428,   424,    19,  1084,   520,   719,
    -1,    24,   997,   387,   632,    -1,    29,    30,    31,    32,
    33,    34,   980,     8,     9,    10,  1150,  1151,  1013,    -1,
    -1,  1016,    -1,    46,    47,    48,    -1,  1064,    -1,    -1,
    -1,    -1,  1166,  1167,  1168,  1169,   664,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   428,    -1,    -1,    70,    -1,   328,
    -1,    -1,  1186,    -1,    -1,    -1,    -1,   336,   337,   338,
   339,    -1,    -1,   447,    -1,  1060,    -1,   138,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,
    -1,     8,     9,    10,  1079,    -1,    -1,    -1,   111,   368,
    -1,   719,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   730,   731,   732,   733,   734,   735,   736,   737,
   389,   182,    -1,    -1,    -1,    -1,    -1,  1112,  1113,   190,
     8,     9,    10,   194,    -1,   196,    -1,    -1,    -1,    -1,
    -1,    -1,  1127,   204,    -1,    -1,    -1,  1174,   209,    -1,
   211,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,   428,
    -1,    -1,   223,   224,   225,    -1,   435,     8,     9,    10,
   183,   184,   185,   186,    -1,    -1,   794,    -1,    72,    73,
    74,    -1,  1167,  1168,    78,    79,    80,    81,    82,    83,
    84,    -1,    -1,    -1,   568,    -1,    -1,   182,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,   194,
   828,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
    -1,   138,    -1,    -1,   209,    -1,   211,   646,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,   224,
   225,   859,   860,   861,   862,   863,   864,   865,   866,   867,
   868,   869,   870,   871,   872,   873,   874,   875,    -1,   877,
   138,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,
    -1,    -1,   691,   190,    -1,    -1,    -1,   194,    -1,   196,
    -1,     8,     9,    10,    -1,    -1,    -1,   204,    -1,    -1,
   559,    -1,   209,    -1,   211,    -1,    -1,   138,    -1,   568,
    -1,    -1,    -1,    -1,   182,    -1,   223,   224,   225,    -1,
    -1,    -1,   190,    -1,    -1,    -1,   194,    -1,   196,    -1,
    -1,    -1,    -1,    -1,    -1,   943,   204,    -1,    -1,    -1,
    -1,   209,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   182,    -1,    -1,    -1,   223,   224,   225,    -1,   190,
    -1,    -1,    -1,   194,    -1,   196,    -1,   626,    -1,    -1,
    18,    -1,   980,   204,    23,    -1,    24,   428,   209,    -1,
   211,    29,    30,    31,    32,    33,    34,    -1,   797,    -1,
    -1,   800,   223,   224,   225,   654,   447,   656,    46,    47,
    48,    -1,    -1,   662,    -1,    -1,   665,    -1,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
    -1,   138,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   842,   843,    -1,    -1,    -1,    -1,   848,
   849,   850,   851,   852,   853,   854,   855,   856,   857,   858,
    -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,    -1,   718,
    -1,    -1,    -1,   111,    -1,   182,    -1,    -1,    -1,    -1,
   729,    -1,   447,   190,    -1,    -1,    -1,   194,    -1,   196,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,
    -1,    -1,   209,   902,   211,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   223,   224,   225,    -1,
    -1,    -1,    -1,    -1,    18,    -1,    -1,   568,  1126,    -1,
    24,   428,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,  1142,   183,   184,   185,   186,    -1,
   447,     1,    46,    47,    48,    -1,     6,     7,     8,    -1,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   428,    -1,    -1,    -1,    24,    -1,    70,    -1,  1176,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,   447,
    -1,    -1,    42,    43,    -1,   844,    46,    47,    48,    -1,
    -1,    -1,    -1,   568,    -1,    -1,  1005,   428,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
    70,    -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,    -1,
    -1,    -1,    92,    93,    94,    95,    96,    97,    98,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
    24,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    34,   568,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    45,    -1,    -1,   933,    -1,    -1,    -1,    -1,   183,
   184,   185,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    67,    68,    69,    -1,    71,    -1,    -1,
   568,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   428,    -1,    -1,    -1,    89,    90,    91,    -1,   978,
    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,    -1,
   447,    -1,    -1,    -1,   108,   109,   110,   568,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,     0,     1,    -1,    -1,    -1,    -1,    -1,   183,
   184,   185,    -1,   187,   188,   189,    -1,    19,    -1,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    24,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    46,    47,    48,    45,    -1,    -1,
    -1,   568,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    67,
    68,    69,    -1,    71,    -1,    -1,    -1,    75,    76,    77,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
   108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
    -1,   183,   184,   185,   186,   183,   184,   185,     1,   187,
   188,   189,    -1,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
    43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    -1,
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
   173,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,   187,   188,   189,     1,    -1,    -1,
    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    67,    68,    69,    70,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
   184,   185,   186,   187,   188,   189,     1,    -1,    -1,    -1,
    -1,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
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
   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,
   185,   186,   187,   188,   189,     1,    -1,    -1,    -1,    -1,
     6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    25,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,     1,    -1,
    46,    47,    48,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
    43,    -1,    -1,    46,    47,    48,    92,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,
   186,   187,   188,    -1,    -1,     1,    -1,    -1,    -1,    -1,
     6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
   183,   184,   185,   186,   187,   188,    42,    43,     1,    -1,
    46,    47,    48,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
    43,    -1,    -1,    46,    47,    48,    92,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,
   186,   187,   188,    -1,    -1,     1,    -1,    -1,    -1,    -1,
     6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
   183,   184,   185,   186,   187,   188,    42,    43,     1,    -1,
    46,    47,    48,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
    43,    -1,    -1,    46,    47,    48,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,
   186,   187,   188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
   183,   184,   185,   186,   187,   188,    42,    43,    -1,    45,
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
   176,    -1,    -1,   179,    -1,    -1,   182,   183,   184,   185,
   186,   187,   188,   189,     6,     7,     8,    -1,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    42,    43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
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
   172,   173,   174,   175,   176,    -1,    -1,   179,    -1,    -1,
   182,   183,   184,   185,   186,   187,   188,   189,     6,     7,
     8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    42,    43,    -1,    45,    46,    47,
    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
   108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,   176,    -1,
    -1,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
   188,   189,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    46,    47,    48,     6,     7,     8,    -1,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    93,
    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,    -1,    24,    25,   111,    -1,    70,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
   111,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   176,    -1,    -1,   179,    -1,    -1,   182,   183,
   184,   185,   186,   187,   188,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,   179,    -1,
    -1,   182,   183,   184,   185,   186,   187,   188,     6,     7,
     8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   183,   184,   185,   186,    46,    47,
    48,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
    -1,    -1,    70,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    46,    47,    48,    -1,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
    -1,    24,    -1,   111,    27,    70,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    93,    94,
    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,    -1,    -1,    -1,   111,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
    -1,   179,    -1,    -1,   182,   183,   184,   185,   186,   187,
   188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   176,    -1,    -1,   179,    -1,    -1,   182,   183,   184,
   185,   186,   187,   188,     6,     7,     8,    -1,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,    46,    47,    48,     6,     7,     8,
    -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,    -1,    24,    -1,   111,
    27,    70,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
    47,    48,    -1,    -1,    93,    94,    95,    96,    97,    98,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
    -1,    -1,   111,    70,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   176,    -1,    -1,   179,    -1,    -1,
   182,   183,   184,   185,   186,   187,   188,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
   179,    -1,    -1,   182,   183,   184,   185,   186,   187,   188,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,
    46,    47,    48,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    93,    94,    95,    96,    97,    98,    18,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
   176,    -1,    -1,   179,    -1,    -1,   182,   183,   184,   185,
   186,   187,   188,    -1,    -1,    67,    68,    69,    -1,    71,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   176,    -1,    -1,   179,    -1,    -1,   182,
   183,   184,   185,   186,   187,   188,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    18,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   185,    -1,    -1,    -1,   189,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    45,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    46,
    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,   111,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,
    -1,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,
    -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   185,   108,   109,   110,   189,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    22,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   185,    -1,    -1,    -1,   189,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    67,
    68,    69,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
   111,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    24,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   183,   184,   185,   186,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,
    24,   187,   188,   189,    -1,    29,    30,    31,    32,    33,
    34,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
    -1,    24,    -1,    46,    47,    48,    29,    30,    31,    32,
    33,    34,    24,    -1,    -1,    -1,    70,    29,    30,    31,
    32,    33,    34,    46,    47,    48,    -1,    70,    -1,    -1,
    -1,    -1,    24,    -1,    46,    47,    48,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    46,    47,    48,   111,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
   184,   185,   186,    42,    43,    -1,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   183,   184,   185,   186,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   183,   184,   185,   186,    -1,    -1,    -1,    -1,   108,
   109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,    45,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,
   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
    68,    69,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    45,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
   167,   168,   169,   170,   171,   172,   173,   174,   175,    67,
    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,
    -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    89,    90,
    91,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,
    -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   185,   108,   109,   110,   189,   112,
   113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
   123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
   133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   185,    -1,    -1,    -1,   189
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
#line 269 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 6:
#line 270 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 7:
#line 271 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 8:
#line 272 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 9:
#line 273 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 10:
#line 274 "cgrammar.y"
{ uentry_checkDecl (); exprNode_free (yyvsp[0].expr); ;
    break;}
case 11:
#line 275 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 12:
#line 279 "cgrammar.y"
{ checkConstant (yyvsp[-6].qtyp, yyvsp[-4].ntyp); ;
    break;}
case 13:
#line 281 "cgrammar.y"
{ checkValueConstant (yyvsp[-9].qtyp, yyvsp[-7].ntyp, yyvsp[-3].expr) ; ;
    break;}
case 14:
#line 284 "cgrammar.y"
{ context_enterFunctionDecl (); ;
    break;}
case 15:
#line 285 "cgrammar.y"
{ declareStaticFunction (yyvsp[-2].ntyp); context_quietExitFunction (); 
     context_exitFunctionDecl (); ;
    break;}
case 16:
#line 290 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 17:
#line 296 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 19:
#line 301 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 20:
#line 304 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 21:
#line 306 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 22:
#line 308 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 23:
#line 310 "cgrammar.y"
{ 
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ctype_makeFixedArray (idDecl_getCtype (yyvsp[-5].ntyp), exprNode_getLongValue (yyvsp[-2].expr)));
   ;
    break;}
case 24:
#line 314 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 25:
#line 317 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 26:
#line 325 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 27:
#line 328 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-7].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-7].ntyp), yyvsp[-4].entrylist));
     context_popLoc ();

     //     printf("Done nameDeclBase\n");
   ;
    break;}
case 28:
#line 336 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 29:
#line 338 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 30:
#line 340 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 31:
#line 342 "cgrammar.y"
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
#line 358 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 33:
#line 361 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 34:
#line 369 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 35:
#line 372 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 36:
#line 379 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); ;
    break;}
case 37:
#line 380 "cgrammar.y"
{ clearCurrentParams (); ;
    break;}
case 38:
#line 381 "cgrammar.y"
{ declareCIter (yyvsp[-8].cname, yyvsp[-6].entrylist); ;
    break;}
case 39:
#line 384 "cgrammar.y"
{ exprNode_checkMacroBody (yyvsp[-1].expr); ;
    break;}
case 40:
#line 385 "cgrammar.y"
{ exprNode_checkIterBody (yyvsp[-1].expr); ;
    break;}
case 41:
#line 386 "cgrammar.y"
{ exprNode_checkIterEnd (yyvsp[-1].expr); ;
    break;}
case 42:
#line 387 "cgrammar.y"
{ exprChecks_checkEmptyMacroBody (); ;
    break;}
case 43:
#line 390 "cgrammar.y"
{ declareFunction (yyvsp[0].ntyp); ;
    break;}
case 44:
#line 393 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 45:
#line 394 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 46:
#line 400 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 47:
#line 401 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 49:
#line 409 "cgrammar.y"
{
  DPRINTF ( ("doing optGlobEnsuresConstraintsAux\n") );
context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 

;
    break;}
case 50:
#line 415 "cgrammar.y"
{
  setEnsuresConstraints (yyvsp[-1].sr);
  exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
  DPRINTF (("done optGlobBufConstraintsAux\n"));;
    break;}
case 52:
#line 425 "cgrammar.y"
{
  DPRINTF ( ("doing optGlobBufConstraintsAux\n") );
context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 

;
    break;}
case 53:
#line 431 "cgrammar.y"
{
  setFunctionConstraints (yyvsp[-1].sr);
  exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
  DPRINTF (("done optGlobBufConstraintsAux\n"));;
    break;}
case 55:
#line 440 "cgrammar.y"
{ yyval.sr = constraintList_add (yyvsp[0].sr, yyvsp[-1].sr); ;
    break;}
case 56:
#line 441 "cgrammar.y"
{constraintList c; c = constraintList_new(); c = constraintList_add (c, yyvsp[0].sr); yyval.sr = c;
    break;}
case 57:
#line 444 "cgrammar.y"
{
 yyval.sr = makeConstraintParse3 (yyvsp[-3].sr, yyvsp[-2].tok, yyvsp[-1].sr);
 DPRINTF(("Done BufConstraint1\n")); ;
    break;}
case 64:
#line 459 "cgrammar.y"
{yyval.sr = constraintExpr_parseMakeUnaryOp (yyvsp[-3].tok, yyvsp[-1].sr);  DPRINTF( ("Got BufConstraintExpr UNary Op ") ); ;
    break;}
case 65:
#line 460 "cgrammar.y"
{
   DPRINTF( ("Got BufConstraintExpr BINary Op ") );
   yyval.sr = constraintExpr_parseMakeBinaryOp (yyvsp[-3].sr, yyvsp[-2].tok, yyvsp[-1].sr); ;
    break;}
case 66:
#line 465 "cgrammar.y"
{ /* $$ = constraintExpr_makeTermsRef (checkSpecClausesId ($1)); */
 yyval.sr = constraintExpr_makeTermsRef (checkbufferConstraintClausesId (yyvsp[0].entry));;
    break;}
case 67:
#line 467 "cgrammar.y"
{ yyval.sr = constraintExpr_makeTermsRef(fixSpecClausesId (yyvsp[0].cname) ); ;
    break;}
case 68:
#line 468 "cgrammar.y"
{  char *t; int c;
  t =  cstring_toCharsSafe (exprNode_unparse(yyvsp[0].expr));
  c = atoi( t );
  yyval.sr = constraintExpr_makeIntLiteral (c);
;
    break;}
case 72:
#line 489 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 73:
#line 490 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 74:
#line 500 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 75:
#line 501 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 82:
#line 516 "cgrammar.y"
{ ; ;
    break;}
case 83:
#line 517 "cgrammar.y"
{ ; ;
    break;}
case 84:
#line 520 "cgrammar.y"
{ globListAdd (yyvsp[0].sr, yyvsp[-1].tquallist); ;
    break;}
case 85:
#line 523 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); ;
    break;}
case 86:
#line 524 "cgrammar.y"
{ yyval.sr = globListUnrecognized (yyvsp[0].cname); ;
    break;}
case 87:
#line 527 "cgrammar.y"
{ yyval.typequal = qual_createUndef (); ;
    break;}
case 88:
#line 528 "cgrammar.y"
{ yyval.typequal = qual_createKilled (); ;
    break;}
case 89:
#line 529 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 90:
#line 530 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 91:
#line 531 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 92:
#line 534 "cgrammar.y"
{ yyval.tquallist = qualList_undefined; ;
    break;}
case 93:
#line 535 "cgrammar.y"
{ yyval.tquallist = qualList_add (yyvsp[0].tquallist, yyvsp[-1].typequal); ;
    break;}
case 94:
#line 538 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 95:
#line 540 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 96:
#line 541 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 97:
#line 543 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 98:
#line 545 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 101:
#line 552 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 102:
#line 554 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 103:
#line 555 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 104:
#line 557 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 105:
#line 559 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 110:
#line 571 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 111:
#line 576 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 112:
#line 584 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 113:
#line 589 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 123:
#line 613 "cgrammar.y"
{ yyval.sck = SP_ISONLY; ;
    break;}
case 124:
#line 614 "cgrammar.y"
{ yyval.sck = SP_ISOBSERVER; ;
    break;}
case 125:
#line 615 "cgrammar.y"
{ yyval.sck = SP_ISEXPOSED; ;
    break;}
case 126:
#line 616 "cgrammar.y"
{ yyval.sck = SP_ISDEPENDENT; ;
    break;}
case 127:
#line 617 "cgrammar.y"
{ yyval.sck = SP_ISOWNED; ;
    break;}
case 128:
#line 618 "cgrammar.y"
{ yyval.sck = SP_ISSHARED; ;
    break;}
case 129:
#line 619 "cgrammar.y"
{ yyval.sck = SP_ISNULL; ;
    break;}
case 130:
#line 620 "cgrammar.y"
{ yyval.sck = SP_ISNOTNULL; ;
    break;}
case 131:
#line 624 "cgrammar.y"
{
     context_setProtectVars (); 
     enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 132:
#line 630 "cgrammar.y"
{ 
     setFunctionSpecialClause (yyvsp[-6].tok, yyvsp[-3].srset, yyvsp[-1].tok); 
     exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 133:
#line 637 "cgrammar.y"
{
      context_setProtectVars (); 
      enterParamsTemp (); 
      sRef_setGlobalScopeSafe (); 
    ;
    break;}
case 134:
#line 643 "cgrammar.y"
{ 
      setFunctionStateSpecialClause (yyvsp[-7].tok, yyvsp[-5].sck, yyvsp[-3].srset, yyvsp[-1].tok); 
      exitParamsTemp ();
      sRef_clearGlobalScopeSafe (); 
      context_releaseVars ();
    ;
    break;}
case 135:
#line 652 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 136:
#line 658 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 137:
#line 661 "cgrammar.y"
{ checkDoneParams (); context_enterInnerContext (); ;
    break;}
case 138:
#line 663 "cgrammar.y"
{  
     exprNode_checkFunctionBody (yyvsp[0].expr); yyval.expr = yyvsp[0].expr; 
     context_exitInner (yyvsp[0].expr); 
   ;
    break;}
case 139:
#line 668 "cgrammar.y"
{ doneParams (); context_enterInnerContext (); ;
    break;}
case 140:
#line 670 "cgrammar.y"
{
     context_exitInner (yyvsp[0].expr);
     exprNode_checkFunctionBody (yyvsp[0].expr); 
     yyval.expr = yyvsp[0].expr; /* old style */ 
   ;
    break;}
case 141:
#line 678 "cgrammar.y"
{ 
     context_setFunctionDefined (exprNode_loc (yyvsp[0].expr)); 
     /* exprNode_checkFunction (context_getHeader (), $2); */
     /* DRL 8 8 2000 */
     
     context_exitFunction ();
   ;
    break;}
case 142:
#line 687 "cgrammar.y"
{ yyval.srset = yyvsp[-2].srset; ;
    break;}
case 143:
#line 688 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 144:
#line 691 "cgrammar.y"
{ yyval.srset = yyvsp[-1].srset; ;
    break;}
case 145:
#line 692 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 146:
#line 695 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); checkModifiesId (yyvsp[0].entry); ;
    break;}
case 147:
#line 696 "cgrammar.y"
{ yyval.sr = fixModifiesId (yyvsp[0].cname); ;
    break;}
case 148:
#line 697 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-2].sr, sRef_undefined); ;
    break;}
case 149:
#line 698 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-3].sr, yyvsp[-1].sr); ;
    break;}
case 150:
#line 699 "cgrammar.y"
{ yyval.sr = modListPointer (yyvsp[0].sr); ;
    break;}
case 151:
#line 700 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 152:
#line 701 "cgrammar.y"
{ yyval.sr = modListFieldAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 153:
#line 702 "cgrammar.y"
{ yyval.sr = modListArrowAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 154:
#line 706 "cgrammar.y"
{ yyval.sr = yyvsp[0].sr; ;
    break;}
case 155:
#line 707 "cgrammar.y"
{ yyval.sr = sRef_makeUnknown (); /* sRef_makeConstant ($1); ? */ ;
    break;}
case 156:
#line 711 "cgrammar.y"
{ yyval.srset = sRefSet_single (yyvsp[0].sr); ;
    break;}
case 157:
#line 712 "cgrammar.y"
{ yyval.srset = sRefSet_insert (yyvsp[-2].srset, yyvsp[0].sr); ;
    break;}
case 158:
#line 716 "cgrammar.y"
{ yyval.sr = checkSpecClausesId (yyvsp[0].entry); ;
    break;}
case 159:
#line 718 "cgrammar.y"
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 160:
#line 719 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 161:
#line 720 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-3].sr); ;
    break;}
case 162:
#line 721 "cgrammar.y"
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 163:
#line 722 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 164:
#line 723 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 165:
#line 725 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 166:
#line 730 "cgrammar.y"
{ if (sRef_isValid (yyvsp[0].sr)) { yyval.srset = sRefSet_single (yyvsp[0].sr); } 
      else { yyval.srset = sRefSet_undefined; } 
    ;
    break;}
case 167:
#line 734 "cgrammar.y"
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
case 168:
#line 745 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (yyvsp[0].entry); ;
    break;}
case 169:
#line 746 "cgrammar.y"
{ yyval.expr = exprNode_fromUIO (yyvsp[0].cname); ;
    break;}
case 170:
#line 747 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 171:
#line 748 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 172:
#line 749 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (coerceId (yyvsp[0].cname)); ;
    break;}
case 173:
#line 750 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 175:
#line 754 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 176:
#line 755 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 177:
#line 756 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 178:
#line 757 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 179:
#line 758 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 180:
#line 759 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 181:
#line 760 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 182:
#line 761 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 183:
#line 764 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 184:
#line 765 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 186:
#line 769 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 187:
#line 770 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 188:
#line 771 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 189:
#line 772 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 190:
#line 773 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 191:
#line 774 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 192:
#line 775 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 193:
#line 776 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 194:
#line 777 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 195:
#line 778 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 196:
#line 781 "cgrammar.y"
{ yyval.cstringlist = cstringList_add (yyvsp[-2].cstringlist, yyvsp[0].cname); ;
    break;}
case 197:
#line 782 "cgrammar.y"
{ yyval.cstringlist = cstringList_single (yyvsp[0].cname); ;
    break;}
case 198:
#line 786 "cgrammar.y"
{ yyval.expr = exprNode_offsetof (yyvsp[-5].qtyp, yyvsp[-2].cstringlist); ;
    break;}
case 199:
#line 789 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 200:
#line 790 "cgrammar.y"
{ context_sizeofReleaseVars (); yyval.expr = yyvsp[0].expr; ;
    break;}
case 201:
#line 793 "cgrammar.y"
{ yyval.expr = exprNode_sizeofType (yyvsp[-1].qtyp); ;
    break;}
case 202:
#line 794 "cgrammar.y"
{ yyval.expr = exprNode_sizeofExpr (yyvsp[0].expr); ;
    break;}
case 203:
#line 795 "cgrammar.y"
{ yyval.expr = exprNode_alignofType (yyvsp[-1].qtyp); ;
    break;}
case 204:
#line 796 "cgrammar.y"
{ yyval.expr = exprNode_alignofExpr (yyvsp[0].expr); ;
    break;}
case 206:
#line 801 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 208:
#line 805 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 209:
#line 806 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 210:
#line 807 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 212:
#line 811 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 213:
#line 812 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 215:
#line 816 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 216:
#line 817 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 218:
#line 821 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 219:
#line 822 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 220:
#line 823 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 221:
#line 824 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 223:
#line 828 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 224:
#line 829 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 226:
#line 833 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 228:
#line 837 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 230:
#line 842 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 232:
#line 847 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); 
     context_enterAndClause (yyvsp[-1].expr); 
   ;
    break;}
case 233:
#line 851 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitAndClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 235:
#line 859 "cgrammar.y"
{ 
     exprNode_produceGuards (yyvsp[-1].expr);
     context_enterOrClause (yyvsp[-1].expr); 
   ;
    break;}
case 236:
#line 864 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitOrClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 238:
#line 871 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 239:
#line 872 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 240:
#line 873 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); context_exitClause (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 242:
#line 877 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 243:
#line 878 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 244:
#line 879 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 245:
#line 880 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 246:
#line 881 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 247:
#line 882 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 248:
#line 883 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 249:
#line 884 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 250:
#line 885 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 251:
#line 886 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 252:
#line 887 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 254:
#line 891 "cgrammar.y"
{ yyval.expr = exprNode_comma (yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 255:
#line 894 "cgrammar.y"
{ yyval.expr = exprNode_undefined; ;
    break;}
case 258:
#line 903 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 259:
#line 904 "cgrammar.y"
{ doVaDcl (); yyval.expr = exprNode_makeError (); ;
    break;}
case 260:
#line 905 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 261:
#line 908 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 262:
#line 922 "cgrammar.y"
{
               setProcessingVars (yyvsp[-3].qtyp); 
     processNamedDecl (yyvsp[-1].ntyp); ;
    break;}
case 263:
#line 925 "cgrammar.y"
{ unsetProcessingVars (); yyval.expr = yyvsp[-2].expr; ;
    break;}
case 264:
#line 927 "cgrammar.y"
{ setProcessingVars (yyvsp[-4].qtyp); processNamedDecl (yyvsp[-2].ntyp); 
        ;
    break;}
case 265:
#line 930 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-2].expr, exprNode_makeInitialization (yyvsp[-8].ntyp, yyvsp[-3].expr)); 
     unsetProcessingVars ();
   ;
    break;}
case 266:
#line 934 "cgrammar.y"
{ processNamedDecl (yyvsp[-1].ntyp); yyval.expr = exprNode_makeError (); ;
    break;}
case 267:
#line 935 "cgrammar.y"
{ processNamedDecl (yyvsp[-2].ntyp); ;
    break;}
case 268:
#line 936 "cgrammar.y"
{ yyval.expr = exprNode_makeInitialization (yyvsp[-5].ntyp, yyvsp[0].expr); ;
    break;}
case 269:
#line 940 "cgrammar.y"
{ setProcessingTypedef (yyvsp[0].qtyp); ;
    break;}
case 270:
#line 941 "cgrammar.y"
{ unsetProcessingTypedef (); ;
    break;}
case 271:
#line 942 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 272:
#line 943 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 273:
#line 946 "cgrammar.y"
{ g_expectingTypeName = TRUE; ;
    break;}
case 274:
#line 949 "cgrammar.y"
{ g_expectingTypeName = TRUE; context_pushLoc (); ;
    break;}
case 275:
#line 952 "cgrammar.y"
{ ; ;
    break;}
case 276:
#line 955 "cgrammar.y"
{ ; ;
    break;}
case 277:
#line 956 "cgrammar.y"
{ ; ;
    break;}
case 278:
#line 959 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 279:
#line 960 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 280:
#line 963 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 281:
#line 964 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-2].tok, yyvsp[-1].alist); ;
    break;}
case 282:
#line 965 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-3].tok, yyvsp[-2].alist); ;
    break;}
case 283:
#line 970 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 284:
#line 972 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 285:
#line 980 "cgrammar.y"
{ setStorageClass (SCEXTERN); yyval.typequal = qual_createExtern (); ;
    break;}
case 286:
#line 981 "cgrammar.y"
{ yyval.typequal = qual_createInline (); ;
    break;}
case 287:
#line 982 "cgrammar.y"
{ setStorageClass (SCSTATIC); yyval.typequal = qual_createStatic (); ;
    break;}
case 288:
#line 983 "cgrammar.y"
{ yyval.typequal = qual_createAuto (); ;
    break;}
case 289:
#line 984 "cgrammar.y"
{ yyval.typequal = qual_createRegister (); ;
    break;}
case 290:
#line 987 "cgrammar.y"
{ yyval.typequal = qual_createConst (); ;
    break;}
case 291:
#line 988 "cgrammar.y"
{ yyval.typequal = qual_createVolatile (); ;
    break;}
case 292:
#line 989 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 293:
#line 990 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 294:
#line 991 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 295:
#line 992 "cgrammar.y"
{ yyval.typequal = qual_createSpecial (); ;
    break;}
case 296:
#line 993 "cgrammar.y"
{ yyval.typequal = qual_createOwned (); ;
    break;}
case 297:
#line 994 "cgrammar.y"
{ yyval.typequal = qual_createDependent (); ;
    break;}
case 298:
#line 995 "cgrammar.y"
{ yyval.typequal = qual_createYield (); ;
    break;}
case 299:
#line 996 "cgrammar.y"
{ yyval.typequal = qual_createTemp (); ;
    break;}
case 300:
#line 997 "cgrammar.y"
{ yyval.typequal = qual_createOnly (); ;
    break;}
case 301:
#line 998 "cgrammar.y"
{ yyval.typequal = qual_createKeep (); ;
    break;}
case 302:
#line 999 "cgrammar.y"
{ yyval.typequal = qual_createKept (); ;
    break;}
case 303:
#line 1000 "cgrammar.y"
{ yyval.typequal = qual_createShared (); ;
    break;}
case 304:
#line 1001 "cgrammar.y"
{ yyval.typequal = qual_createUnique (); ;
    break;}
case 305:
#line 1002 "cgrammar.y"
{ yyval.typequal = qual_createExits (); ;
    break;}
case 306:
#line 1003 "cgrammar.y"
{ yyval.typequal = qual_createMayExit (); ;
    break;}
case 307:
#line 1004 "cgrammar.y"
{ yyval.typequal = qual_createTrueExit (); ;
    break;}
case 308:
#line 1005 "cgrammar.y"
{ yyval.typequal = qual_createFalseExit (); ;
    break;}
case 309:
#line 1006 "cgrammar.y"
{ yyval.typequal = qual_createNeverExit (); ;
    break;}
case 310:
#line 1007 "cgrammar.y"
{ yyval.typequal = qual_createNull (); ;
    break;}
case 311:
#line 1008 "cgrammar.y"
{ yyval.typequal = qual_createRelNull (); ;
    break;}
case 312:
#line 1009 "cgrammar.y"
{ yyval.typequal = qual_createReturned (); ;
    break;}
case 313:
#line 1010 "cgrammar.y"
{ yyval.typequal = qual_createExposed (); ;
    break;}
case 314:
#line 1011 "cgrammar.y"
{ yyval.typequal = qual_createObserver (); ;
    break;}
case 315:
#line 1012 "cgrammar.y"
{ yyval.typequal = qual_createChecked (); ;
    break;}
case 316:
#line 1013 "cgrammar.y"
{ yyval.typequal = qual_createCheckMod (); ;
    break;}
case 317:
#line 1014 "cgrammar.y"
{ yyval.typequal = qual_createUnchecked (); ;
    break;}
case 318:
#line 1015 "cgrammar.y"
{ yyval.typequal = qual_createCheckedStrict (); ;
    break;}
case 319:
#line 1016 "cgrammar.y"
{ yyval.typequal = qual_createTrueNull (); ;
    break;}
case 320:
#line 1017 "cgrammar.y"
{ yyval.typequal = qual_createFalseNull (); ;
    break;}
case 321:
#line 1018 "cgrammar.y"
{ yyval.typequal = qual_createUnused (); ;
    break;}
case 322:
#line 1019 "cgrammar.y"
{ yyval.typequal = qual_createExternal (); ;
    break;}
case 323:
#line 1020 "cgrammar.y"
{ yyval.typequal = qual_createSef (); ;
    break;}
case 324:
#line 1021 "cgrammar.y"
{ yyval.typequal = qual_createAbstract (); ;
    break;}
case 325:
#line 1022 "cgrammar.y"
{ yyval.typequal = qual_createConcrete (); ;
    break;}
case 326:
#line 1023 "cgrammar.y"
{ yyval.typequal = qual_createMutable (); ;
    break;}
case 327:
#line 1024 "cgrammar.y"
{ yyval.typequal = qual_createImmutable (); ;
    break;}
case 328:
#line 1025 "cgrammar.y"
{ yyval.typequal = qual_createNotNull (); ;
    break;}
case 329:
#line 1026 "cgrammar.y"
{ yyval.typequal = qual_createRefCounted (); ;
    break;}
case 330:
#line 1027 "cgrammar.y"
{ yyval.typequal = qual_createRefs (); ;
    break;}
case 331:
#line 1028 "cgrammar.y"
{ yyval.typequal = qual_createKillRef (); ;
    break;}
case 332:
#line 1029 "cgrammar.y"
{ yyval.typequal = qual_createRelDef (); ;
    break;}
case 333:
#line 1030 "cgrammar.y"
{ yyval.typequal = qual_createNewRef (); ;
    break;}
case 334:
#line 1031 "cgrammar.y"
{ yyval.typequal = qual_createTempRef (); ;
    break;}
case 335:
#line 1032 "cgrammar.y"
{ yyval.typequal = qual_createNullTerminated (); ;
    break;}
case 336:
#line 1038 "cgrammar.y"
{ yyval.typequal = qual_createShort (); ;
    break;}
case 337:
#line 1039 "cgrammar.y"
{ yyval.typequal = qual_createLong (); ;
    break;}
case 338:
#line 1040 "cgrammar.y"
{ yyval.typequal = qual_createSigned (); ;
    break;}
case 339:
#line 1041 "cgrammar.y"
{ yyval.typequal = qual_createUnsigned (); ;
    break;}
case 346:
#line 1050 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 347:
#line 1051 "cgrammar.y"
{ yyval.ctyp = ctype_anyintegral; ;
    break;}
case 348:
#line 1052 "cgrammar.y"
{ yyval.ctyp = ctype_unsignedintegral; ;
    break;}
case 349:
#line 1053 "cgrammar.y"
{ yyval.ctyp = ctype_signedintegral; ;
    break;}
case 353:
#line 1057 "cgrammar.y"
{ yyval.ctyp = ctype_fromQual (yyvsp[-1].typequal); ;
    break;}
case 354:
#line 1061 "cgrammar.y"
{ yyval.qtyp = qtype_resolve (yyvsp[-1].qtyp); ;
    break;}
case 355:
#line 1064 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 356:
#line 1066 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-3].qtyp, yyvsp[-1].qtyp); ;
    break;}
case 358:
#line 1071 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-2].qtyp, yyvsp[0].qtyp); ;
    break;}
case 359:
#line 1074 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 360:
#line 1075 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 361:
#line 1076 "cgrammar.y"
{ yyval.qtyp = qtype_combine (yyvsp[0].qtyp, yyvsp[-1].ctyp); ;
    break;}
case 362:
#line 1079 "cgrammar.y"
{ yyval.qtyp = qtype_unknown (); ;
    break;}
case 363:
#line 1080 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 364:
#line 1083 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 365:
#line 1085 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 366:
#line 1087 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 367:
#line 1088 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 368:
#line 1090 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 369:
#line 1092 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 370:
#line 1094 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 371:
#line 1096 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 372:
#line 1097 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 373:
#line 1099 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 374:
#line 1101 "cgrammar.y"
{ yyval.ctyp = declareUnnamedStruct (yyvsp[-3].flist); ;
    break;}
case 375:
#line 1102 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 376:
#line 1104 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 377:
#line 1106 "cgrammar.y"
{ yyval.ctyp = declareUnnamedUnion (yyvsp[-3].flist); ;
    break;}
case 378:
#line 1108 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedStruct (uentryList_new ()); ;
    break;}
case 379:
#line 1110 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedUnion (uentryList_new ()); ;
    break;}
case 380:
#line 1111 "cgrammar.y"
{ yyval.ctyp = handleStruct (yyvsp[-1].cname); ;
    break;}
case 381:
#line 1112 "cgrammar.y"
{ yyval.ctyp = handleUnion (yyvsp[-1].cname); ;
    break;}
case 382:
#line 1115 "cgrammar.y"
{ g_expectingTypeName = FALSE; ;
    break;}
case 384:
#line 1119 "cgrammar.y"
{ yyval.flist = uentryList_undefined; /* bogus! */ ;
    break;}
case 385:
#line 1120 "cgrammar.y"
{ yyval.flist = uentryList_mergeFields (yyvsp[-1].flist, yyvsp[0].flist); ;
    break;}
case 386:
#line 1124 "cgrammar.y"
{ yyval.flist = fixUentryList (yyvsp[-2].ntyplist, yyvsp[-4].qtyp); ;
    break;}
case 387:
#line 1126 "cgrammar.y"
{ yyval.flist = fixUnnamedDecl (yyvsp[-2].qtyp); ;
    break;}
case 388:
#line 1130 "cgrammar.y"
{ yyval.ntyplist = idDeclList_singleton (yyvsp[-1].ntyp); ;
    break;}
case 389:
#line 1132 "cgrammar.y"
{ yyval.ntyplist = idDeclList_add (yyvsp[-3].ntyplist, yyvsp[-1].ntyp); ;
    break;}
case 390:
#line 1135 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; ;
    break;}
case 391:
#line 1136 "cgrammar.y"
{ yyval.ntyp = idDecl_undefined; ;
    break;}
case 392:
#line 1137 "cgrammar.y"
{ yyval.ntyp = yyvsp[-3].ntyp; ;
    break;}
case 393:
#line 1142 "cgrammar.y"
{ yyval.ctyp = declareUnnamedEnum (yyvsp[-2].enumnamelist); ;
    break;}
case 394:
#line 1143 "cgrammar.y"
{ context_pushLoc (); ;
    break;}
case 395:
#line 1144 "cgrammar.y"
{ context_popLoc (); yyval.ctyp = declareEnum (yyvsp[-5].cname, yyvsp[-2].enumnamelist); ;
    break;}
case 396:
#line 1145 "cgrammar.y"
{ yyval.ctyp = handleEnum (yyvsp[-1].cname); ;
    break;}
case 397:
#line 1149 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_single (yyvsp[0].cname); ;
    break;}
case 398:
#line 1151 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_push (yyvsp[-2].enumnamelist, yyvsp[0].cname); ;
    break;}
case 400:
#line 1156 "cgrammar.y"
{ uentry ue = uentry_makeEnumConstant (yyvsp[0].cname, ctype_unknown);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[0].cname;
   ;
    break;}
case 401:
#line 1161 "cgrammar.y"
{ uentry ue = uentry_makeEnumInitializedConstant (yyvsp[-3].cname, ctype_unknown, yyvsp[0].expr);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[-3].cname; 
   ;
    break;}
case 403:
#line 1168 "cgrammar.y"
{ yyval.ntyp = idDecl_create (cstring_undefined, qtype_create (yyvsp[0].ctyp)); ;
    break;}
case 404:
#line 1170 "cgrammar.y"
{ 
     qtype qt = qtype_unknown ();

     qtype_adjustPointers (yyvsp[-1].count, qt);
     yyval.ntyp = idDecl_create (cstring_copy (LastIdentifier ()), qt);
   ;
    break;}
case 405:
#line 1177 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 407:
#line 1182 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 408:
#line 1185 "cgrammar.y"
{ yyval.entrylist = handleParamTypeList (yyvsp[0].entrylist); ;
    break;}
case 409:
#line 1186 "cgrammar.y"
{ yyval.entrylist = handleParamIdList (yyvsp[0].entrylist); ;
    break;}
case 410:
#line 1189 "cgrammar.y"
{ /* ignored for now */; ;
    break;}
case 411:
#line 1190 "cgrammar.y"
{ ; ;
    break;}
case 412:
#line 1193 "cgrammar.y"
{ ; ;
    break;}
case 413:
#line 1194 "cgrammar.y"
{ ; ;
    break;}
case 414:
#line 1197 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 415:
#line 1198 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 416:
#line 1199 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 417:
#line 1200 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 419:
#line 1204 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 420:
#line 1207 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 421:
#line 1208 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 422:
#line 1211 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeElipsisMarker ()); ;
    break;}
case 424:
#line 1213 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 425:
#line 1216 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 426:
#line 1216 "cgrammar.y"
{ yyval.entrylist = uentryList_single (yyvsp[0].oentry); ;
    break;}
case 427:
#line 1217 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 428:
#line 1218 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-3].entrylist, yyvsp[0].oentry); ;
    break;}
case 429:
#line 1222 "cgrammar.y"
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
case 430:
#line 1234 "cgrammar.y"
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
case 432:
#line 1250 "cgrammar.y"
{ yyval.qtyp = qtype_newBase (yyvsp[-1].qtyp, yyvsp[0].ctyp); ;
    break;}
case 433:
#line 1253 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[0].count, ctype_unknown); ;
    break;}
case 435:
#line 1255 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[-1].count, yyvsp[0].ctyp); ;
    break;}
case 436:
#line 1258 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 438:
#line 1263 "cgrammar.y"
{ yyval.ctyp = ctype_expectFunction (yyvsp[-1].ctyp); ;
    break;}
case 439:
#line 1264 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 440:
#line 1266 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (ctype_unknown, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 441:
#line 1267 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (yyvsp[-2].ctyp); ;
    break;}
case 442:
#line 1269 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (yyvsp[-3].ctyp, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 443:
#line 1271 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (ctype_unknown, uentryList_makeMissingParams ()); ;
    break;}
case 444:
#line 1273 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (ctype_unknown, yyvsp[-1].entrylist); ;
    break;}
case 445:
#line 1275 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (yyvsp[-3].ctyp, uentryList_makeMissingParams ()); ;
    break;}
case 446:
#line 1277 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (yyvsp[-4].ctyp, yyvsp[-1].entrylist); ;
    break;}
case 456:
#line 1292 "cgrammar.y"
{yyval.expr = yyvsp[0].expr; printf ("Doing stmt lclintassertion\n"); ;
    break;}
case 457:
#line 1296 "cgrammar.y"
{ printf(" QSETBUFFERSIZE id CCONSTANT HEllo World\n");  uentry_setBufferSize(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 458:
#line 1298 "cgrammar.y"
{ printf(" QSETSTRINGLENGTH id CCONSTANT HEllo World\n");  uentry_setStringLength(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 459:
#line 1300 "cgrammar.y"
{printf(" QTESTINRANGE\n");  uentry_testInRange(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 460:
#line 1306 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[0].cname); ;
    break;}
case 461:
#line 1311 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 464:
#line 1319 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 465:
#line 1323 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 466:
#line 1325 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr); ;
    break;}
case 467:
#line 1327 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 468:
#line 1329 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 469:
#line 1333 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 470:
#line 1333 "cgrammar.y"
{ context_sizeofReleaseVars (); ;
    break;}
case 471:
#line 1335 "cgrammar.y"
{ yyval.expr = exprNode_forPred (yyvsp[-7].expr, yyvsp[-5].expr, yyvsp[-2].expr); 
     context_enterForClause (yyvsp[-5].expr); ;
    break;}
case 472:
#line 1340 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-2].entry); ;
    break;}
case 473:
#line 1342 "cgrammar.y"
{ yyval.expr = exprNode_iterStart (yyvsp[-5].entry, yyvsp[-1].alist); ;
    break;}
case 474:
#line 1343 "cgrammar.y"
{ yyval.expr = exprNode_createId (yyvsp[0].entry); ;
    break;}
case 478:
#line 1349 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 486:
#line 1357 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 487:
#line 1358 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 488:
#line 1362 "cgrammar.y"
{ /* don't: context_exitTrueClause ($1, $2); */
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 489:
#line 1367 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 490:
#line 1370 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 501:
#line 1385 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 503:
#line 1387 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 504:
#line 1390 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[-1].cname); ;
    break;}
case 505:
#line 1391 "cgrammar.y"
{ yyval.expr = exprNode_notReached (yyvsp[0].expr); ;
    break;}
case 506:
#line 1397 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 507:
#line 1398 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, FALSE); ;
    break;}
case 508:
#line 1399 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 509:
#line 1400 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, TRUE); ;
    break;}
case 510:
#line 1403 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 511:
#line 1404 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, FALSE); ;
    break;}
case 512:
#line 1405 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 513:
#line 1406 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, TRUE); ;
    break;}
case 514:
#line 1409 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 515:
#line 1411 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; context_exitInner (yyvsp[0].expr); ;
    break;}
case 516:
#line 1414 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 517:
#line 1417 "cgrammar.y"
{ context_enterInnerContext (); ;
    break;}
case 518:
#line 1420 "cgrammar.y"
{ context_exitInnerPlain (); ;
    break;}
case 519:
#line 1423 "cgrammar.y"
{ context_enterStructInnerContext (); ;
    break;}
case 520:
#line 1426 "cgrammar.y"
{ context_exitStructInnerContext (); ;
    break;}
case 521:
#line 1429 "cgrammar.y"
{ context_exitInnerSafe (); ;
    break;}
case 522:
#line 1432 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 523:
#line 1433 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_createTok (yyvsp[0].tok)); ;
    break;}
case 524:
#line 1434 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 525:
#line 1436 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 526:
#line 1437 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 527:
#line 1439 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 528:
#line 1441 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 529:
#line 1443 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (exprNode_concat (yyvsp[-3].expr, yyvsp[-2].expr), 
							lltok_getLoc (yyvsp[-1].tok))); 
   ;
    break;}
case 530:
#line 1450 "cgrammar.y"
{ yyval.expr = exprNode_makeBlock (yyvsp[0].expr); ;
    break;}
case 531:
#line 1454 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 532:
#line 1456 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 533:
#line 1458 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 534:
#line 1460 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 536:
#line 1464 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 537:
#line 1467 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 538:
#line 1468 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 539:
#line 1471 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 540:
#line 1472 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 541:
#line 1475 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 542:
#line 1476 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 543:
#line 1479 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 544:
#line 1480 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 545:
#line 1481 "cgrammar.y"
{ yyval.expr = exprNode_checkExpr (yyvsp[0].expr); ;
    break;}
case 546:
#line 1485 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 547:
#line 1493 "cgrammar.y"
{ 
     context_exitTrueClause (yyvsp[-1].expr, yyvsp[0].expr);
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 548:
#line 1497 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-2].expr); ;
    break;}
case 549:
#line 1498 "cgrammar.y"
{
     context_exitClause (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr);
     yyval.expr = exprNode_ifelse (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr); 
   ;
    break;}
case 550:
#line 1502 "cgrammar.y"
{ context_enterSwitch (yyvsp[0].expr); ;
    break;}
case 551:
#line 1503 "cgrammar.y"
{ yyval.expr = exprNode_switch (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 552:
#line 1507 "cgrammar.y"
{ yyval.expr = exprNode_whilePred (yyvsp[-1].expr); context_enterWhileClause (yyvsp[-1].expr); ;
    break;}
case 553:
#line 1511 "cgrammar.y"
{ yyval.expr = exprNode_whilePred(yyvsp[-1].expr); ;
    break;}
case 554:
#line 1514 "cgrammar.y"
{ context_enterIterClause (); ;
    break;}
case 555:
#line 1515 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-3].entry); ;
    break;}
case 556:
#line 1518 "cgrammar.y"
{ 
     yyval.expr = exprNode_iter (yyvsp[-9].entry, yyvsp[-4].alist, yyvsp[-2].expr, yyvsp[-1].entry); 

   ;
    break;}
case 557:
#line 1524 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 558:
#line 1525 "cgrammar.y"
{ nextIterParam (); ;
    break;}
case 559:
#line 1526 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-3].alist, yyvsp[0].expr); ;
    break;}
case 560:
#line 1529 "cgrammar.y"
{ yyval.expr = exprNode_iterExpr (yyvsp[0].expr); ;
    break;}
case 561:
#line 1530 "cgrammar.y"
{ yyval.expr = exprNode_iterId (yyvsp[0].entry); ;
    break;}
case 562:
#line 1531 "cgrammar.y"
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
case 563:
#line 1542 "cgrammar.y"
{ yyval.expr = exprNode_iterNewId (yyvsp[0].cname); ;
    break;}
case 565:
#line 1550 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 567:
#line 1554 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 568:
#line 1555 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 569:
#line 1556 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 570:
#line 1558 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 571:
#line 1559 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 572:
#line 1560 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 573:
#line 1561 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 574:
#line 1562 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 576:
#line 1566 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 577:
#line 1567 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 578:
#line 1568 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 579:
#line 1569 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 580:
#line 1570 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 581:
#line 1571 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 582:
#line 1572 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 583:
#line 1573 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 584:
#line 1574 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 586:
#line 1578 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 588:
#line 1582 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 589:
#line 1583 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 590:
#line 1584 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 592:
#line 1588 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 593:
#line 1589 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 595:
#line 1593 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 596:
#line 1594 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 598:
#line 1598 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 599:
#line 1599 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 600:
#line 1600 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 601:
#line 1601 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 603:
#line 1605 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 604:
#line 1606 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 606:
#line 1610 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 608:
#line 1614 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 610:
#line 1619 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 612:
#line 1623 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 614:
#line 1627 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 616:
#line 1631 "cgrammar.y"
{ context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 617:
#line 1632 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 618:
#line 1633 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 620:
#line 1637 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 621:
#line 1638 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 622:
#line 1639 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 623:
#line 1640 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 624:
#line 1641 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 625:
#line 1642 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 626:
#line 1643 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 627:
#line 1644 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 628:
#line 1645 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 629:
#line 1646 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 630:
#line 1647 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 631:
#line 1650 "cgrammar.y"
{ yyval.entry = yyvsp[0].entry; ;
    break;}
case 632:
#line 1651 "cgrammar.y"
{ yyval.entry = uentry_undefined; ;
    break;}
case 633:
#line 1654 "cgrammar.y"
{ context_enterDoWhileClause (); yyval.tok = yyvsp[0].tok; ;
    break;}
case 634:
#line 1658 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 635:
#line 1660 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr), yyvsp[0].tok); ;
    break;}
case 636:
#line 1662 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 637:
#line 1665 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 638:
#line 1667 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr), yyvsp[0].tok); ;
    break;}
case 639:
#line 1669 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 640:
#line 1670 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 641:
#line 1673 "cgrammar.y"
{ yyval.expr = exprNode_goto (yyvsp[-1].cname); ;
    break;}
case 642:
#line 1674 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-1].tok, BADTOK); ;
    break;}
case 643:
#line 1676 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-2].tok, QINNERCONTINUE); ;
    break;}
case 644:
#line 1677 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, BADTOK); ;
    break;}
case 645:
#line 1678 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSWITCHBREAK); ;
    break;}
case 646:
#line 1679 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QLOOPBREAK); ;
    break;}
case 647:
#line 1680 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QINNERBREAK); ;
    break;}
case 648:
#line 1681 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSAFEBREAK); ;
    break;}
case 649:
#line 1682 "cgrammar.y"
{ yyval.expr = exprNode_nullReturn (yyvsp[-1].tok); ;
    break;}
case 650:
#line 1683 "cgrammar.y"
{ yyval.expr = exprNode_return (yyvsp[-1].expr); ;
    break;}
case 652:
#line 1687 "cgrammar.y"
{ ; ;
    break;}
case 655:
#line 1694 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 656:
#line 1695 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 657:
#line 1696 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 658:
#line 1697 "cgrammar.y"
{ yyval.cname = yyvsp[0].cname; ;
    break;}
case 660:
#line 1701 "cgrammar.y"
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
#line 1703 "cgrammar.y"


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
  





