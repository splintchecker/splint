
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
#define	IDENTIFIER	433
#define	NEW_IDENTIFIER	434
#define	TYPE_NAME_OR_ID	435
#define	CCONSTANT	436
#define	ITER_NAME	437
#define	ITER_ENDNAME	438
#define	TYPE_NAME	439


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



#define	YYFINAL		1169
#define	YYFLAG		-32768
#define	YYNTBASE	185

#define YYTRANSLATE(x) ((unsigned)(x) <= 439 ? yytranslate[x] : 413)

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
   176,   177,   178,   179,   180,   181,   182,   183,   184
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
  1381,  1384,  1386,  1388,  1390,  1393,  1396,  1404,  1411,  1414,
  1415,  1416,  1427,  1428,  1435,  1437,  1439,  1441,  1443,  1446,
  1448,  1450,  1452,  1454,  1456,  1458,  1460,  1464,  1466,  1469,
  1472,  1475,  1477,  1479,  1481,  1483,  1485,  1487,  1489,  1491,
  1493,  1495,  1499,  1501,  1503,  1506,  1509,  1510,  1515,  1516,
  1522,  1523,  1527,  1528,  1533,  1537,  1540,  1544,  1545,  1546,
  1547,  1548,  1549,  1551,  1554,  1557,  1561,  1564,  1568,  1572,
  1577,  1580,  1583,  1587,  1591,  1596,  1598,  1601,  1603,  1606,
  1608,  1611,  1613,  1616,  1618,  1621,  1623,  1628,  1631,  1632,
  1638,  1639,  1646,  1651,  1656,  1657,  1658,  1669,  1671,  1672,
  1677,  1679,  1681,  1683,  1685,  1687,  1691,  1693,  1698,  1702,
  1707,  1714,  1720,  1726,  1729,  1732,  1734,  1737,  1740,  1743,
  1746,  1749,  1752,  1755,  1758,  1760,  1762,  1767,  1769,  1773,
  1777,  1781,  1783,  1787,  1791,  1793,  1797,  1801,  1803,  1807,
  1811,  1815,  1819,  1821,  1825,  1829,  1831,  1835,  1837,  1841,
  1843,  1847,  1849,  1853,  1855,  1859,  1861,  1862,  1863,  1871,
  1873,  1877,  1881,  1885,  1889,  1893,  1897,  1901,  1905,  1909,
  1913,  1917,  1919,  1920,  1922,  1925,  1933,  1936,  1939,  1947,
  1954,  1957,  1961,  1964,  1968,  1971,  1975,  1979,  1983,  1987,
  1990,  1994,  1995,  1997,  1999,  2001,  2003,  2005,  2007,  2009,
  2011
};

static const short yyrhs[] = {    -1,
   186,     0,   187,     0,   186,   187,     0,   239,   409,     0,
   188,     0,   189,     0,   199,     0,   202,     0,   276,     0,
     1,     0,    75,   296,   309,   319,   309,   409,   284,    88,
     0,    75,   296,   309,   319,   309,    23,   284,   289,   288,
   409,    88,     0,     0,    76,   190,   191,   409,    88,     0,
   192,     0,   296,   309,   192,     0,   196,     0,   323,   196,
     0,   411,     0,   284,    24,   309,   319,   284,    25,     0,
   193,    26,    27,     0,   193,    26,   284,   275,    27,   309,
     0,     0,   193,   285,    24,    25,   194,   204,     0,     0,
   193,   285,    24,   320,    25,   195,   204,     0,   411,     0,
   284,    24,   309,   192,   284,    25,     0,   196,    26,    27,
     0,   196,    26,   284,   275,    27,   309,     0,     0,   196,
   285,    24,    25,   197,   206,     0,     0,   196,   285,    24,
   320,    25,   198,   206,     0,     0,     0,    77,   411,    24,
   320,    25,   200,   206,   201,   409,    88,     0,    89,   350,
    92,     0,    90,   337,    92,     0,    91,   338,    92,     0,
    89,    92,     0,   235,     0,     0,   205,   208,     0,     0,
   207,   209,     0,   216,     0,   210,   216,     0,   219,     0,
   210,   219,     0,   232,     0,   232,   210,     0,   212,     0,
   211,    21,   212,     0,   215,   213,     0,   410,     0,   179,
     0,    86,     0,    87,     0,   116,     0,   117,     0,   130,
     0,     0,   214,   215,     0,     0,    72,   217,   370,   409,
    88,   222,     0,     0,    72,   218,   211,   409,    88,   222,
     0,    74,     0,   223,     0,     0,     0,    72,   220,   370,
   409,   222,     0,     0,    72,   221,   211,   409,   222,     0,
    74,     0,   225,     0,     0,   223,     0,     0,     0,    73,
   224,   240,     0,     0,    73,   226,   241,     0,    78,     0,
    79,     0,    80,     0,    81,     0,    82,     0,    88,     0,
    88,     0,    83,     0,    84,     0,   119,     0,   137,     0,
   135,     0,   133,     0,   132,     0,   121,     0,   138,     0,
   150,     0,     0,   227,   309,   233,   246,   409,   229,   284,
     0,     0,   230,   309,   231,   234,   246,   409,   228,   284,
     0,   319,     0,   296,   309,   319,     0,     0,    19,   237,
   366,     0,     0,   370,   238,   359,     0,   203,   236,     0,
   244,   409,    88,     0,   409,    88,     0,   244,   409,     0,
   409,     0,   410,     0,   179,     0,   242,    26,    27,     0,
   242,    26,   243,    27,     0,    34,   242,     0,    24,   242,
    25,     0,   242,    28,   411,     0,   242,    44,   411,     0,
   242,     0,   181,     0,   242,     0,   244,    21,   242,     0,
   410,     0,   179,     0,   245,    26,    27,     0,   245,    26,
   243,    27,     0,    34,   245,     0,    24,   245,    25,     0,
   245,    28,   411,     0,   245,    44,   411,     0,   245,     0,
   246,    21,   245,     0,   410,     0,   179,     0,   181,     0,
    24,   273,    25,     0,   180,     0,   111,     0,   247,     0,
   248,    26,   273,    27,     0,   248,    24,    25,     0,   248,
    24,   249,    25,     0,    70,    24,   272,    21,   331,    25,
     0,   248,   309,    28,   411,   284,     0,   248,   309,    44,
   411,   284,     0,   248,    47,     0,   248,    48,     0,   272,
     0,   249,    21,   272,     0,   248,     0,    47,   250,     0,
    48,   250,     0,    29,   256,     0,    34,   256,     0,    33,
   256,     0,    32,   256,     0,    31,   256,     0,    30,   256,
     0,   253,     0,   252,     0,   251,    28,   411,     0,   411,
     0,    46,   284,    24,   331,   309,    21,   251,    25,   284,
     0,     0,   284,   254,   255,     0,    42,    24,   331,    25,
     0,    42,   250,     0,    43,    24,   331,    25,     0,    43,
   250,     0,   250,     0,    24,   331,    25,   256,     0,   256,
     0,   257,    34,   256,     0,   257,    35,   256,     0,   257,
    36,   256,     0,   257,     0,   258,    33,   257,     0,   258,
    32,   257,     0,   258,     0,   259,    49,   258,     0,   259,
    50,   258,     0,   259,     0,   260,    37,   259,     0,   260,
    38,   259,     0,   260,    51,   259,     0,   260,    52,   259,
     0,   260,     0,   261,    53,   260,     0,   261,    54,   260,
     0,   261,     0,   262,    29,   261,     0,   262,     0,   263,
    39,   262,     0,   263,     0,   264,    40,   263,     0,   264,
     0,     0,   265,    55,   266,   264,     0,   265,     0,     0,
   267,    56,   268,   265,     0,   267,     0,     0,     0,   267,
    41,   270,   273,    22,   271,   269,     0,   269,     0,   250,
    23,   272,     0,   250,    57,   272,     0,   250,    58,   272,
     0,   250,    59,   272,     0,   250,    60,   272,     0,   250,
    61,   272,     0,   250,    62,   272,     0,   250,    63,   272,
     0,   250,    64,   272,     0,   250,    65,   272,     0,   250,
    66,   272,     0,   272,     0,   273,    21,   272,     0,     0,
   273,     0,   269,     0,   277,     0,    71,     0,   282,     0,
   296,   284,    18,     0,     0,   296,   309,   319,   309,   278,
   284,   288,    18,   284,     0,     0,   296,   309,   319,   309,
    23,   279,   284,   289,   288,    18,   284,     0,   319,   309,
     0,     0,   319,   309,    23,   281,   284,   289,     0,     0,
    45,   296,   283,   309,   286,   284,    18,     0,    45,   296,
   284,    18,     0,    45,   286,   284,    18,     0,     0,     0,
   287,   284,     0,   280,     0,   286,    21,   309,   280,     0,
     0,   288,    21,   309,   280,     0,   272,     0,    19,   290,
    20,     0,    19,   290,    21,    20,     0,   289,     0,   290,
    21,   289,     0,   112,     0,   110,     0,   113,     0,   114,
     0,   115,     0,   108,   284,     0,   109,   284,     0,   116,
   284,     0,   117,   284,     0,   130,   284,     0,   131,   284,
     0,   132,   284,     0,   133,   284,     0,   118,   284,     0,
   120,   284,     0,   119,   284,     0,   128,   284,     0,   129,
   284,     0,   121,   284,     0,   123,   284,     0,   139,   284,
     0,   140,   284,     0,   142,   284,     0,   143,   284,     0,
   141,   284,     0,   136,   284,     0,   151,   284,     0,   134,
   284,     0,   135,   284,     0,   137,   284,     0,   124,   284,
     0,   127,   284,     0,   125,   284,     0,   126,   284,     0,
   156,   284,     0,   157,   284,     0,   148,   284,     0,   158,
   284,     0,   149,   284,     0,   152,   284,     0,   153,   284,
     0,   154,   284,     0,   155,   284,     0,   150,   284,     0,
   159,   284,     0,   160,   284,     0,   163,   284,     0,   164,
   284,     0,   161,   284,     0,   162,   284,     0,   175,   284,
     0,   147,     0,   144,     0,   145,     0,   146,     0,   165,
   309,     0,   167,   309,     0,   166,   309,     0,   168,   309,
     0,   169,   309,     0,   170,   309,     0,   171,   309,     0,
   172,   309,     0,   173,   309,     0,   174,   309,     0,   412,
   309,     0,   300,   309,     0,   314,   309,     0,   293,   309,
     0,   284,   296,   284,     0,   298,     0,   298,    85,   297,
    88,     0,   331,     0,   331,    21,   297,     0,   291,   299,
     0,   292,   299,     0,   294,   299,     0,     0,   296,     0,
     0,     0,   309,    67,   411,   284,    19,   301,   363,   310,
   364,   302,    20,     0,     0,     0,   309,    68,   411,   284,
    19,   303,   363,   310,   364,   304,    20,     0,   309,    67,
   411,   284,    19,    20,     0,   309,    68,   411,   284,    19,
    20,     0,     0,     0,   309,    67,   284,    19,   305,   363,
   310,   364,   306,    20,     0,     0,     0,   309,    68,   284,
    19,   307,   363,   310,   364,   308,    20,     0,   309,    67,
   284,    19,    20,     0,   309,    68,   284,    19,    20,     0,
   309,    67,   411,   309,     0,   309,    68,   411,   309,     0,
     0,   311,     0,   202,     0,   310,   311,     0,   296,   309,
   312,   284,    18,     0,   296,   284,    18,     0,   313,   309,
     0,   312,    21,   313,   309,     0,   319,     0,    22,   284,
   275,     0,   319,    22,   284,   275,     0,   309,    69,    19,
   316,    20,   284,     0,     0,   309,    69,   411,    19,   315,
   316,    20,   284,     0,   309,    69,   411,   284,     0,   317,
     0,   316,    21,   317,     0,   316,    21,     0,   411,     0,
   411,    23,   284,   275,     0,   193,     0,   333,     0,   323,
   184,     0,   323,   318,     0,   193,     0,   323,   193,     0,
   326,     0,   309,   324,     0,   108,     0,   109,     0,   321,
     0,   322,   321,     0,    34,     0,    34,   322,     0,    34,
   323,     0,    34,   322,   323,     0,   325,     0,   325,    21,
     5,     0,   411,     0,   325,    21,   411,     0,     5,     0,
   327,     0,   327,    21,     5,     0,     0,   328,   330,     0,
     0,   327,    21,   329,   330,     0,   284,   296,   318,   284,
     0,   411,     0,   295,     0,   295,   332,     0,   323,     0,
   334,     0,   323,   334,     0,     0,   334,     0,   284,    24,
   309,   332,    25,     0,    26,    27,     0,    26,   275,    27,
     0,   334,    26,    27,     0,   334,    26,   275,    27,     0,
   284,    24,    25,     0,   284,    24,   326,    25,     0,   334,
   284,    24,    25,     0,   334,   284,    24,   326,    25,     0,
   352,     0,   353,     0,   356,     0,   359,     0,   372,     0,
   375,     0,   406,     0,   380,     0,   408,     0,   336,     0,
   176,   410,   181,    88,     0,   177,   410,   181,    88,     0,
    22,   411,     0,   339,     0,   337,     0,   346,     0,   339,
   346,     0,   379,   339,     0,   405,   351,    11,    24,   273,
    25,    18,     0,   405,   351,    11,    24,   273,    25,     0,
   341,   346,     0,     0,     0,    13,    24,   274,    18,   274,
    18,   342,   274,   343,    25,     0,     0,   182,   361,    24,
   345,   383,    25,     0,   183,     0,   352,     0,   353,     0,
   356,     0,   348,   370,     0,   348,     0,   349,     0,   372,
     0,   347,     0,   340,     0,   344,     0,   408,     0,    24,
   346,    25,     0,     1,     0,   374,   346,     0,   361,    19,
     0,   365,    20,     0,   351,     0,   369,     0,   352,     0,
   353,     0,   356,     0,   360,     0,   373,     0,   375,     0,
   380,     0,   407,     0,    24,   351,    25,     0,   408,     0,
     1,     0,   411,    22,     0,   107,   335,     0,     0,     6,
   275,   354,    22,     0,     0,    98,     6,   275,   355,    22,
     0,     0,     7,   357,    22,     0,     0,    98,     7,   358,
    22,     0,    24,   359,    25,     0,   361,   367,     0,   361,
   368,   362,     0,     0,     0,     0,     0,     0,    20,     0,
   107,    20,     0,   371,    20,     0,   371,   107,    20,     0,
   370,    20,     0,   370,   107,    20,     0,   370,   371,    20,
     0,   370,   371,   107,    20,     0,    19,   366,     0,    19,
    20,     0,    19,   369,    20,     0,    19,   370,    20,     0,
    19,   370,   371,    20,     0,   351,     0,   369,   351,     0,
   276,     0,   370,   276,     0,   335,     0,   371,   335,     0,
    18,     0,   273,    18,     0,    18,     0,   273,    18,     0,
   273,     0,     8,    24,   273,    25,     0,   374,   335,     0,
     0,   374,   335,     9,   376,   335,     0,     0,    10,    24,
   273,   377,    25,   335,     0,    11,    24,   273,    25,     0,
    11,    24,   273,    25,     0,     0,     0,   182,   381,   361,
    24,   382,   383,    25,   359,   404,   362,     0,   385,     0,
     0,   383,   384,    21,   385,     0,   403,     0,   410,     0,
   180,     0,   179,     0,   181,     0,    24,   273,    25,     0,
   386,     0,   248,    26,   273,    27,     0,   248,    24,    25,
     0,   248,    24,   249,    25,     0,    70,    24,   272,    21,
   331,    25,     0,   248,   309,    28,   411,   284,     0,   248,
   309,    44,   411,   284,     0,   248,    47,     0,   248,    48,
     0,   387,     0,    47,   250,     0,    48,   250,     0,    29,
   256,     0,    34,   256,     0,    33,   256,     0,    32,   256,
     0,    31,   256,     0,    30,   256,     0,   253,     0,   388,
     0,    24,   331,    25,   256,     0,   389,     0,   257,    34,
   256,     0,   257,    35,   256,     0,   257,    36,   256,     0,
   390,     0,   258,    33,   257,     0,   258,    32,   257,     0,
   391,     0,   259,    49,   258,     0,   259,    50,   258,     0,
   392,     0,   260,    37,   259,     0,   260,    38,   259,     0,
   260,    51,   259,     0,   260,    52,   259,     0,   393,     0,
   261,    53,   260,     0,   261,    54,   260,     0,   394,     0,
   262,    29,   261,     0,   395,     0,   263,    39,   262,     0,
   396,     0,   264,    40,   263,     0,   397,     0,   265,    55,
   264,     0,   398,     0,   267,    56,   265,     0,   399,     0,
     0,     0,   267,    41,   401,   273,    22,   402,   269,     0,
   400,     0,   250,    23,   272,     0,   250,    57,   272,     0,
   250,    58,   272,     0,   250,    59,   272,     0,   250,    60,
   272,     0,   250,    61,   272,     0,   250,    62,   272,     0,
   250,    63,   272,     0,   250,    64,   272,     0,   250,    65,
   272,     0,   250,    66,   272,     0,   183,     0,     0,    12,
     0,   378,   335,     0,   405,   335,    11,    24,   273,    25,
    18,     0,   341,   335,     0,   378,   351,     0,   405,   351,
    11,    24,   273,    25,    18,     0,   405,   351,    11,    24,
   273,    25,     0,   341,   351,     0,    14,   411,    18,     0,
    15,    18,     0,    97,    15,    18,     0,    16,    18,     0,
    93,    16,    18,     0,    94,    16,    18,     0,    95,    16,
    18,     0,    96,    16,    18,     0,    17,    18,     0,    17,
   273,    18,     0,     0,    18,     0,   178,     0,   179,     0,
   182,     0,   183,     0,   410,     0,   180,     0,   184,     0,
   180,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   240,   241,   244,   245,   248,   249,   250,   251,   252,   253,
   254,   257,   259,   263,   263,   268,   274,   278,   279,   283,
   284,   286,   288,   304,   308,   315,   319,   325,   326,   328,
   330,   346,   350,   357,   361,   367,   369,   369,   373,   374,
   375,   376,   379,   382,   383,   386,   387,   390,   391,   394,
   395,   398,   399,   402,   403,   406,   409,   410,   413,   414,
   415,   416,   417,   420,   421,   424,   424,   427,   427,   430,
   434,   435,   438,   438,   441,   441,   444,   448,   449,   452,
   453,   456,   462,   469,   475,   482,   483,   484,   485,   486,
   489,   492,   495,   496,   499,   500,   501,   502,   503,   504,
   505,   506,   509,   515,   522,   528,   537,   543,   547,   549,
   553,   556,   563,   571,   572,   575,   576,   579,   580,   581,
   582,   583,   584,   585,   586,   590,   591,   595,   596,   599,
   601,   603,   604,   605,   606,   607,   609,   613,   617,   629,
   630,   631,   632,   633,   634,   637,   638,   639,   640,   641,
   642,   643,   644,   645,   648,   649,   652,   653,   654,   655,
   656,   657,   658,   659,   660,   661,   662,   665,   666,   669,
   673,   674,   677,   678,   679,   680,   683,   684,   688,   689,
   690,   691,   694,   695,   696,   699,   700,   701,   704,   705,
   706,   707,   708,   711,   712,   713,   716,   717,   720,   721,
   725,   726,   729,   730,   735,   741,   742,   748,   754,   755,
   755,   757,   760,   761,   762,   763,   764,   765,   766,   767,
   768,   769,   770,   771,   774,   775,   778,   779,   782,   787,
   788,   789,   792,   805,   809,   810,   813,   818,   819,   819,
   824,   825,   826,   827,   830,   833,   836,   839,   840,   843,
   844,   847,   848,   849,   853,   855,   864,   865,   866,   867,
   868,   871,   872,   873,   874,   875,   876,   877,   878,   879,
   880,   881,   882,   883,   884,   885,   886,   887,   888,   889,
   890,   891,   892,   893,   894,   895,   896,   897,   898,   899,
   900,   901,   902,   903,   904,   905,   906,   907,   908,   909,
   910,   911,   912,   913,   914,   915,   916,   922,   923,   924,
   925,   928,   929,   930,   931,   932,   933,   934,   935,   936,
   937,   938,   939,   940,   941,   944,   948,   949,   953,   954,
   958,   959,   960,   963,   964,   967,   969,   971,   972,   974,
   976,   977,   979,   981,   983,   985,   986,   988,   990,   991,
   993,   995,   996,   999,  1002,  1003,  1004,  1007,  1009,  1013,
  1015,  1019,  1020,  1021,  1025,  1027,  1027,  1029,  1032,  1034,
  1036,  1039,  1044,  1051,  1052,  1053,  1060,  1064,  1065,  1069,
  1070,  1073,  1074,  1077,  1078,  1081,  1082,  1083,  1084,  1087,
  1088,  1091,  1092,  1095,  1096,  1097,  1100,  1100,  1101,  1102,
  1105,  1117,  1133,  1134,  1137,  1138,  1139,  1142,  1143,  1146,
  1148,  1149,  1150,  1151,  1152,  1154,  1156,  1158,  1164,  1165,
  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1174,  1178,  1180,
  1187,  1192,  1195,  1198,  1199,  1203,  1205,  1207,  1209,  1213,
  1214,  1216,  1220,  1222,  1224,  1227,  1228,  1229,  1230,  1231,
  1232,  1233,  1234,  1235,  1236,  1237,  1238,  1239,  1242,  1248,
  1251,  1254,  1255,  1258,  1259,  1260,  1261,  1262,  1263,  1264,
  1265,  1266,  1267,  1268,  1271,  1272,  1278,  1279,  1280,  1281,
  1284,  1285,  1286,  1287,  1290,  1291,  1295,  1298,  1301,  1304,
  1307,  1310,  1313,  1314,  1315,  1316,  1318,  1319,  1321,  1323,
  1330,  1334,  1336,  1338,  1340,  1344,  1345,  1348,  1349,  1352,
  1353,  1356,  1357,  1360,  1361,  1362,  1365,  1373,  1378,  1379,
  1383,  1384,  1387,  1392,  1395,  1396,  1397,  1405,  1406,  1406,
  1410,  1411,  1412,  1423,  1430,  1431,  1434,  1435,  1436,  1437,
  1438,  1440,  1441,  1442,  1443,  1446,  1447,  1448,  1449,  1450,
  1451,  1452,  1453,  1454,  1455,  1458,  1459,  1462,  1463,  1464,
  1465,  1468,  1469,  1470,  1473,  1474,  1475,  1478,  1479,  1480,
  1481,  1482,  1485,  1486,  1487,  1490,  1491,  1494,  1495,  1499,
  1500,  1503,  1504,  1507,  1508,  1511,  1512,  1513,  1514,  1517,
  1518,  1519,  1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,
  1528,  1531,  1532,  1535,  1538,  1540,  1542,  1546,  1547,  1549,
  1551,  1554,  1555,  1556,  1558,  1559,  1560,  1561,  1562,  1563,
  1564,  1567,  1568,  1571,  1574,  1575,  1576,  1577,  1578,  1581,
  1582
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
"QSETBUFFERSIZE","QSETSTRINGLENGTH","IDENTIFIER","NEW_IDENTIFIER","TYPE_NAME_OR_ID",
"CCONSTANT","ITER_NAME","ITER_ENDNAME","TYPE_NAME","file","externalDefs","externalDef",
"constantDecl","fcnDecl","@1","plainFcn","plainNamedDecl","namedDeclBase","@2",
"@3","plainNamedDeclBase","@4","@5","iterDecl","@6","@7","macroDef","fcnDefHdr",
"optGlobMods","@8","optPlainGlobMods","@9","optGlobModsRest","optPlainGlobModsRest",
"specialClauses","globIdList","globIdListExpr","globId","globQual","optGlobQuals",
"optGlobModsAux","@10","@11","optPlainGlobModsAux","@12","@13","optMods","fcnMods",
"@14","fcnPlainMods","@15","specialTag","endStateTag","endSpecialTag","stateSpecialClause",
"specialClauseType","specialClause","@16","@17","fcnDefHdrAux","fcnBody","@18",
"@19","fcnDef","locModifies","locPlainModifies","modListExpr","mExpr","modList",
"specClauseListExpr","specClauseList","primaryExpr","postfixExpr","argumentExprList",
"unaryExpr","fieldDesignator","offsetofExpr","sizeofExpr","@20","sizeofExprAux",
"castExpr","timesExpr","plusExpr","shiftExpr","relationalExpr","equalityExpr",
"bitandExpr","xorExpr","bitorExpr","andExpr","@21","orExpr","@22","conditionalExpr",
"@23","@24","assignExpr","expr","optExpr","constantExpr","initializer","instanceDecl",
"@25","@26","namedInitializer","@27","typeDecl","@28","IsType","PushType","namedInitializerList",
"namedInitializerListAux","optDeclarators","init","initList","storageSpecifier",
"typeQualifier","typeModifier","typeSpecifier","completeType","completeTypeSpecifier",
"altType","completeTypeSpecifierAux","optCompleteType","suSpc","@29","@30","@31",
"@32","@33","@34","@35","@36","NotType","structDeclList","structDecl","structNamedDeclList",
"structNamedDecl","enumSpc","@37","enumeratorList","enumerator","optNamedDecl",
"namedDecl","genericParamList","innerMods","innerModsList","pointers","paramIdList",
"idList","paramTypeList","paramList","@38","@39","paramDecl","typeExpression",
"abstractDecl","optAbstractDeclBase","abstractDeclBase","stmt","lclintassertion",
"iterBody","endBody","iterDefStmtList","iterDefIterationStmt","forPred","@40",
"@41","partialIterStmt","@42","iterDefStmt","iterSelectionStmt","openScope",
"closeScope","macroBody","stmtErr","labeledStmt","caseStmt","@43","@44","defaultStmt",
"@45","@46","compoundStmt","compoundStmtErr","CreateInnerScope","DeleteInnerScope",
"CreateStructInnerScope","DeleteStructInnerScope","DeleteInnerScopeSafe","compoundStmtRest",
"compoundStmtAux","compoundStmtAuxErr","stmtListErr","initializerList","stmtList",
"expressionStmt","expressionStmtErr","ifPred","selectionStmt","@47","@48","whilePred",
"iterWhilePred","iterStmt","@49","@50","iterArgList","@51","iterArgExpr","primaryIterExpr",
"postfixIterExpr","unaryIterExpr","castIterExpr","timesIterExpr","plusIterExpr",
"shiftIterExpr","relationalIterExpr","equalityIterExpr","bitandIterExpr","xorIterExpr",
"bitorIterExpr","andIterExpr","orIterExpr","conditionalIterExpr","@52","@53",
"assignIterExpr","endIter","doHeader","iterationStmt","iterationStmtErr","jumpStmt",
"optSemi","id","newId","typeName", NULL
};
#endif

static const short yyr1[] = {     0,
   185,   185,   186,   186,   187,   187,   187,   187,   187,   187,
   187,   188,   188,   190,   189,   191,   191,   192,   192,   193,
   193,   193,   193,   194,   193,   195,   193,   196,   196,   196,
   196,   197,   196,   198,   196,   200,   201,   199,   202,   202,
   202,   202,   203,   205,   204,   207,   206,   208,   208,   209,
   209,   210,   210,   211,   211,   212,   213,   213,   214,   214,
   214,   214,   214,   215,   215,   217,   216,   218,   216,   216,
   216,   216,   220,   219,   221,   219,   219,   219,   219,   222,
   222,   224,   223,   226,   225,   227,   227,   227,   227,   227,
   228,   229,   230,   230,   231,   231,   231,   231,   231,   231,
   231,   231,   233,   232,   234,   232,   235,   235,   237,   236,
   238,   236,   239,   240,   240,   241,   241,   242,   242,   242,
   242,   242,   242,   242,   242,   243,   243,   244,   244,   245,
   245,   245,   245,   245,   245,   245,   245,   246,   246,   247,
   247,   247,   247,   247,   247,   248,   248,   248,   248,   248,
   248,   248,   248,   248,   249,   249,   250,   250,   250,   250,
   250,   250,   250,   250,   250,   250,   250,   251,   251,   252,
   254,   253,   255,   255,   255,   255,   256,   256,   257,   257,
   257,   257,   258,   258,   258,   259,   259,   259,   260,   260,
   260,   260,   260,   261,   261,   261,   262,   262,   263,   263,
   264,   264,   265,   266,   265,   267,   268,   267,   269,   270,
   271,   269,   272,   272,   272,   272,   272,   272,   272,   272,
   272,   272,   272,   272,   273,   273,   274,   274,   275,   276,
   276,   276,   277,   278,   277,   279,   277,   280,   281,   280,
   283,   282,   282,   282,   284,   285,   286,   287,   287,   288,
   288,   289,   289,   289,   290,   290,   291,   291,   291,   291,
   291,   292,   292,   292,   292,   292,   292,   292,   292,   292,
   292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
   292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
   292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
   292,   292,   292,   292,   292,   292,   292,   293,   293,   293,
   293,   294,   294,   294,   294,   294,   294,   294,   294,   294,
   294,   294,   294,   294,   294,   295,   296,   296,   297,   297,
   298,   298,   298,   299,   299,   301,   302,   300,   303,   304,
   300,   300,   300,   305,   306,   300,   307,   308,   300,   300,
   300,   300,   300,   309,   310,   310,   310,   311,   311,   312,
   312,   313,   313,   313,   314,   315,   314,   314,   316,   316,
   316,   317,   317,   318,   318,   318,   318,   319,   319,   320,
   320,   321,   321,   322,   322,   323,   323,   323,   323,   324,
   324,   325,   325,   326,   326,   326,   328,   327,   329,   327,
   330,   330,   331,   331,   332,   332,   332,   333,   333,   334,
   334,   334,   334,   334,   334,   334,   334,   334,   335,   335,
   335,   335,   335,   335,   335,   335,   335,   335,   336,   336,
    -1,   337,   338,   339,   339,   340,   340,   340,   340,   342,
   343,   341,   345,   344,   344,   346,   346,   346,   346,   346,
   346,   346,   346,   346,   346,   346,   346,   346,   347,   348,
   349,   350,   350,   351,   351,   351,   351,   351,   351,   351,
   351,   351,   351,   351,   352,   352,   354,   353,   355,   353,
   357,   356,   358,   356,   359,   359,   360,   361,   362,   363,
   364,   365,   366,   366,   366,   366,   366,   366,   366,   366,
   367,   368,   368,   368,   368,   369,   369,   370,   370,   371,
   371,   372,   372,   373,   373,   373,   374,   375,   376,   375,
   377,   375,   378,   379,   381,   382,   380,   383,   384,   383,
   385,   385,   385,   385,   386,   386,   387,   387,   387,   387,
   387,   387,   387,   387,   387,   388,   388,   388,   388,   388,
   388,   388,   388,   388,   388,   389,   389,   390,   390,   390,
   390,   391,   391,   391,   392,   392,   392,   393,   393,   393,
   393,   393,   394,   394,   394,   395,   395,   396,   396,   397,
   397,   398,   398,   399,   399,   400,   401,   402,   400,   403,
   403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
   403,   404,   404,   405,   406,   406,   406,   407,   407,   407,
   407,   408,   408,   408,   408,   408,   408,   408,   408,   408,
   408,   409,   409,   410,   411,   411,   411,   411,   411,   412,
   412
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
     2,     1,     1,     1,     2,     2,     7,     6,     2,     0,
     0,    10,     0,     6,     1,     1,     1,     1,     2,     1,
     1,     1,     1,     1,     1,     1,     3,     1,     2,     2,
     2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     3,     1,     1,     2,     2,     0,     4,     0,     5,
     0,     3,     0,     4,     3,     2,     3,     0,     0,     0,
     0,     0,     1,     2,     2,     3,     2,     3,     3,     4,
     2,     2,     3,     3,     4,     1,     2,     1,     2,     1,
     2,     1,     2,     1,     2,     1,     4,     2,     0,     5,
     0,     6,     4,     4,     0,     0,    10,     1,     0,     4,
     1,     1,     1,     1,     1,     3,     1,     4,     3,     4,
     6,     5,     5,     2,     2,     1,     2,     2,     2,     2,
     2,     2,     2,     2,     1,     1,     4,     1,     3,     3,
     3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
     3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
     3,     1,     3,     1,     3,     1,     0,     0,     7,     1,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     1,     0,     1,     2,     7,     2,     2,     7,     6,
     2,     3,     2,     3,     2,     3,     3,     3,     3,     2,
     3,     0,     1,     1,     1,     1,     1,     1,     1,     1,
     1
};

static const short yydefact[] = {     0,
    11,   386,   354,   231,   354,    14,     0,     0,     0,     0,
   245,   245,   258,   257,   259,   260,   261,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   309,   310,   311,   308,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   354,   354,   354,   354,   354,   354,
   354,   354,   354,   354,   245,   624,   625,   629,   626,   627,
   630,     0,     3,     6,     7,   378,     8,     9,   354,    43,
   622,    10,   230,   232,     0,   334,   334,   354,   334,   354,
   327,   354,     0,   354,   107,   245,   628,    20,   354,   382,
   383,   384,   387,   388,   248,   245,   245,   241,   354,   631,
   354,   354,   629,     0,   474,   245,   481,     0,     0,     0,
   604,     0,     0,     0,     0,   245,   514,     0,   245,   245,
   245,   245,   245,   245,   245,   245,   245,     0,    42,     0,
     0,     0,     0,     0,     0,   245,   145,   141,   144,   142,
   525,   146,   157,   177,   167,   166,   179,   183,   186,   189,
   194,   197,   199,   201,   203,   206,   209,   213,   225,   516,
   171,     0,     0,   506,   464,   465,   466,   467,     0,     0,
   468,   245,   469,     0,   470,     0,   471,   473,   140,     0,
   458,     0,   512,     0,   488,   445,     0,     0,     0,   454,
     0,   455,   434,   453,   450,   451,   446,   447,   448,     0,
     0,   452,     0,     0,     0,   456,   433,     0,   262,   263,
   264,   265,   270,   272,   271,   275,   276,   287,   289,   290,
   288,   273,   274,   266,   267,   268,   269,   284,   285,   282,
   286,   277,   278,   281,   279,   280,   293,   295,   300,   283,
   296,   297,   298,   299,   291,   292,   294,   301,   302,   305,
   306,   303,   304,   312,   314,   313,   315,   316,   317,   318,
   319,   320,   321,   307,     4,   245,     0,   109,   113,   508,
   354,   354,   623,     5,   354,   335,   331,   332,   325,   333,
     0,   245,   245,   323,   245,   245,     0,   324,   379,   322,
   385,   389,   354,     0,   247,   354,     0,   238,   245,   622,
    16,    18,     0,   354,   245,    28,   397,   245,   141,   144,
   177,   229,   477,   140,     0,   245,   245,   245,   245,     0,
   613,   615,   620,     0,     0,   354,   403,     0,     0,   160,
   165,   164,   163,   162,   161,     0,   245,   158,   159,   245,
     0,     0,     0,     0,     0,   245,   483,   245,     0,     0,
   476,   428,   245,   419,   420,   421,   422,     0,   423,   424,
   245,   426,   245,   425,   427,   488,   245,   245,   153,   154,
     0,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   204,   210,
   207,   515,   245,     0,   611,    39,     0,   489,   507,   518,
   608,     0,   475,   245,     0,     0,     0,   513,    40,   435,
   439,   449,   460,   461,   459,     0,     0,    41,    22,   245,
   397,   354,   245,   488,   509,   245,   233,   108,   354,     0,
   329,     0,   354,     0,   354,     0,   245,   245,   244,   245,
   243,   239,   354,     0,   245,     0,   354,   245,    19,   394,
     0,     0,   380,   395,   245,     0,     0,   482,     0,   521,
     0,   228,     0,   612,   621,   143,   245,   245,     0,   405,
   404,   406,   245,   472,   245,     0,   616,   617,   618,   619,
   614,   479,     0,     0,     0,     0,   607,   354,   486,   605,
     0,     0,   148,     0,   155,     0,     0,     0,   214,   215,
   216,   217,   218,   219,   220,   221,   222,   223,   224,   180,
   181,   182,   185,   184,   187,   188,   190,   191,   192,   193,
   195,   196,   198,   200,   202,   245,   245,   245,   226,   245,
   245,   172,   502,   144,   506,     0,   354,   487,   519,     0,
     0,   457,   443,     0,     0,    24,     0,   493,   245,   510,
   110,   354,   245,   354,   488,   112,   245,   234,   328,   245,
   344,     0,   352,   347,     0,   353,     0,   369,   372,   366,
   368,   249,   245,   245,   622,    15,    30,   245,   397,   245,
    17,   381,   390,   392,    36,   399,   354,   398,   402,   478,
   517,     0,   523,   245,   326,   411,     0,   397,   407,   245,
     0,   178,   354,   245,     0,   484,   485,     0,     0,   501,
     0,   526,   245,   149,   147,   245,   245,   205,     0,   208,
   245,   174,   245,   176,   503,   504,   245,   245,   245,   524,
   245,   245,   354,    44,    26,   494,   497,   245,   245,   495,
   245,   511,     0,   236,   245,   330,   350,   490,   336,   351,
   490,   339,   245,   371,   245,     0,     0,   245,   245,   245,
     0,    32,     0,   245,     0,    46,   396,   245,   408,   245,
     0,   412,   415,   245,     0,   413,     0,   397,     0,     0,
   480,   429,   430,   245,   245,   156,   151,   152,   211,     0,
     0,   505,   520,     0,   245,   245,   245,   245,   245,   245,
   245,   245,   245,     0,   141,   144,   142,   157,   177,   166,
   183,   186,   189,   194,   197,   199,   201,   203,   206,     0,
   529,   528,   537,   546,   556,   558,   562,   565,   568,   573,
   576,   578,   580,   582,   584,   586,   590,   531,   140,     0,
    23,    25,    72,    44,   498,   499,   245,   496,    21,   245,
   250,   354,   342,   490,   354,   343,   490,   365,   370,   245,
     0,   242,   245,   252,   240,   245,     0,   354,    46,    34,
     0,   391,   393,    37,    79,   400,   374,     0,   245,   408,
   375,   409,   522,   440,     0,   416,   414,   417,     0,     0,
   150,     0,   529,   245,   173,   175,   610,     0,     0,   160,
   165,   164,   163,   162,   161,   158,   159,   245,   245,   245,
   153,   154,     0,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   204,   587,   207,   444,     0,   438,    66,    82,    70,    86,
    87,    88,    89,    90,    93,    94,    45,    72,    48,    71,
   354,   354,    52,    27,   500,   245,     0,   356,   354,   354,
   355,   354,   354,   354,   373,   245,   255,     0,   250,    12,
    31,    33,    46,    29,   622,    73,    84,    77,    47,    79,
    50,    78,   397,   401,   376,   377,   245,   410,   418,     0,
   169,     0,   488,   212,   609,   143,   245,     0,   148,     0,
     0,     0,     0,   591,   592,   593,   594,   595,   596,   597,
   598,   599,   600,   601,   180,   181,   182,   185,   184,   187,
   188,   190,   191,   192,   193,   195,   196,   198,   200,   202,
   583,   245,   585,   245,   437,   354,    64,   622,    49,   103,
     0,    53,   250,   245,   354,     0,   245,   357,   345,   354,
   348,   354,   367,   253,   245,   622,    35,     0,   354,    64,
   622,    51,   245,   441,   245,     0,   606,   603,   178,   245,
   149,   147,   245,   245,     0,   530,   354,    59,    60,    61,
    62,    63,   622,    54,    64,     0,     0,     0,   119,    83,
   128,   622,     0,   118,     0,    95,   100,    99,    98,    97,
    96,   101,   102,   105,     0,   235,   245,   359,   245,   245,
   354,   362,     0,   337,     0,   340,   254,   256,     0,    38,
   622,   622,    85,   622,   117,   245,     0,   170,   168,   602,
   489,     0,   151,   152,   588,     0,    64,     0,    65,    58,
    56,    57,     0,   122,     0,     0,     0,     0,     0,   115,
     0,     0,   131,   138,   622,   130,     0,   245,   251,   245,
   245,     0,   360,   245,   346,     0,   349,     0,    13,    81,
    81,   116,   442,   527,   150,   245,    81,    55,    81,   123,
   120,   127,   126,     0,   124,   125,   129,   114,     0,   134,
     0,     0,     0,     0,     0,   622,   237,   363,   354,   358,
   245,   338,   341,    74,    80,    76,   589,    67,    69,   121,
   135,   132,     0,   136,   137,   139,    92,   245,     0,   361,
   364,   133,   104,    91,   245,   106,     0,     0,     0
};

static const short yydefgoto[] = {  1167,
    82,    83,    84,    85,   122,   320,   321,    86,   664,   774,
   322,   799,   913,    87,   696,   915,   898,    89,   772,   773,
   804,   805,   887,   919,   888,  1023,  1024,  1081,  1025,  1026,
   889,   976,   977,   921,   999,  1000,  1144,  1145,   978,   922,
  1001,   891,  1165,  1158,   892,  1044,   893,  1035,  1097,    90,
   289,   452,   454,    91,  1030,  1063,  1031,  1124,  1032,  1094,
  1095,   162,   163,   524,   164,   930,   165,   166,   424,   562,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   556,   177,   558,   178,   557,   824,   179,   207,   493,   333,
   290,    93,   675,   780,   115,   604,    94,   316,   181,   287,
   116,   117,   897,   795,   908,    96,    97,    98,    99,   347,
   291,   460,   101,   297,   102,   784,  1106,   787,  1108,   678,
  1053,   681,  1055,   103,   900,   901,  1050,  1051,   104,   686,
   597,   598,   809,   119,   482,   112,   113,   106,   612,   613,
   483,   484,   485,   698,   618,   348,   815,   811,   502,   371,
   372,   208,   228,   209,   210,   373,   927,  1067,   212,   661,
   213,   214,   215,   216,   183,   429,   374,   375,   487,   635,
   376,   335,   513,   377,   188,   378,   568,   782,   989,   221,
   581,   519,   428,   190,   582,   583,   379,   191,   192,   380,
   658,   622,   381,   224,   382,   386,   715,   751,   875,   752,
   753,   754,   755,   756,   757,   758,   759,   760,   761,   762,
   763,   764,   765,   766,   767,   972,  1116,   768,  1071,   383,
   384,   197,   385,   294,   334,   200,   109
};

static const short yypact[] = {  2055,
-32768,   113,  5596,-32768,  6439,-32768,   684,  3006,  3376,  3376,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   618,-32768,-32768,
-32768,  2231,-32768,-32768,-32768,   440,-32768,-32768,  5296,-32768,
    89,-32768,-32768,-32768,   111,  6279,  6279,-32768,  6279,   149,
    99,-32768,   420,-32768,-32768,   684,-32768,-32768,-32768,-32768,
-32768,-32768,   113,-32768,-32768,   172,-32768,   149,-32768,-32768,
-32768,  5596,-32768,   199,-32768,  5768,-32768,   217,   250,   257,
-32768,   286,   684,   242,   308,  1173,-32768,  2595,  5768,  5768,
  5768,  5768,  5768,  5768,-32768,  5788,  5788,   324,-32768,   388,
   394,   404,   455,   486,   367,  4743,-32768,   487,   494,-32768,
   505,-32768,   632,  1028,-32768,-32768,-32768,   904,   413,   565,
   397,   596,   507,   512,   506,   518,   103,-32768,-32768,   283,
-32768,  3518,   469,   515,-32768,-32768,-32768,-32768,   613,  3148,
-32768,  4743,-32768,  3518,-32768,  3518,-32768,-32768,   678,   680,
-32768,   688,-32768,  2779,   505,   700,   328,   648,  3191,-32768,
  3376,-32768,-32768,-32768,  6039,-32768,-32768,-32768,-32768,   733,
   738,-32768,  3376,  3376,  3518,-32768,-32768,   691,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   768,   790,-32768,-32768,-32768,
   149,  5139,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   807,   609,-32768,-32768,   684,   684,    28,-32768,   440,-32768,
-32768,-32768,-32768,   809,-32768,-32768,   823,   831,   609,    89,
-32768,   645,   832,-32768,   684,-32768,   294,  5768,-32768,-32768,
-32768,-32768,-32768,-32768,   839,  5768,  5768,  5768,  1841,   853,
-32768,-32768,-32768,   561,   580,  5908,   132,   852,   865,-32768,
-32768,-32768,-32768,-32768,-32768,   884,  5768,-32768,-32768,  5768,
   892,   905,   911,   919,   927,  5768,-32768,  1934,   774,   774,
-32768,-32768,  4743,-32768,-32768,-32768,-32768,   941,-32768,-32768,
  4743,-32768,  4743,-32768,-32768,-32768,  1478,  5768,-32768,-32768,
   157,  5768,  5768,  5768,  5768,  5768,  5768,  5768,  5768,  5768,
  5768,  5768,  5768,  5768,  5768,  5768,  5768,  5768,  5768,  5768,
  5768,  5768,  5768,  5768,  5768,  5768,  5768,  5768,-32768,-32768,
-32768,-32768,  5768,   620,-32768,-32768,  2411,-32768,-32768,   953,
-32768,   956,-32768,  5768,   602,   945,   950,-32768,-32768,-32768,
-32768,  6039,-32768,-32768,-32768,  2963,   967,-32768,-32768,  5768,
   370,  3620,   609,   972,-32768,   609,-32768,   461,  6439,   910,
   981,   985,   987,   992,   987,   684,   999,   609,-32768,   609,
-32768,-32768,-32768,   958,  1006,  1011,-32768,   609,   645,-32768,
   684,  1023,-32768,  1031,   684,   312,  1032,-32768,   338,  1035,
   376,  1035,  1040,-32768,-32768,-32768,-32768,  1734,  1036,   669,
-32768,   750,  5768,-32768,-32768,  1044,-32768,-32768,-32768,-32768,
-32768,-32768,  1045,  1046,   888,   889,-32768,  3620,-32768,-32768,
  1061,  1051,-32768,   422,-32768,   128,   684,   684,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   904,   904,   413,   413,   565,   565,   565,   565,
   397,   397,   596,   507,   512,  5768,  5768,  5768,-32768,  5799,
  5819,-32768,-32768,  5523,-32768,  3333,  3799,-32768,-32768,  1053,
   522,-32768,-32768,  1059,  1057,-32768,  1077,-32768,  4157,-32768,
-32768,  3978,  4200,-32768,   972,-32768,-32768,  1080,-32768,-32768,
  1099,  1098,-32768,  1100,  1102,-32768,   962,-32768,  1110,-32768,
-32768,-32768,   172,-32768,   439,-32768,-32768,  5768,   566,   609,
-32768,-32768,  1101,-32768,-32768,  1118,  6439,-32768,-32768,-32768,
-32768,  1116,-32768,  1841,-32768,-32768,  1132,   138,   750,  3429,
  1136,-32768,-32768,-32768,  1139,-32768,-32768,  1074,  1076,-32768,
  1142,-32768,  5768,-32768,-32768,-32768,-32768,   506,   964,   518,
  5768,-32768,  5768,-32768,-32768,-32768,  4338,  4743,  5768,-32768,
  5830,  5768,-32768,-32768,-32768,-32768,-32768,  4381,  4519,-32768,
  4562,-32768,  1144,-32768,-32768,-32768,-32768,-32768,  1152,-32768,
-32768,  1153,-32768,   684,-32768,   684,  1156,  1955,-32768,-32768,
  1148,-32768,  1155,-32768,   362,-32768,-32768,   684,   917,  4743,
  1159,-32768,-32768,   287,  1163,-32768,  1151,   123,  1175,  1169,
-32768,-32768,-32768,  5768,  5830,-32768,-32768,-32768,-32768,  1183,
  1184,-32768,-32768,   587,  5768,  5768,  5768,  5768,  5768,  5768,
  5768,  5788,  5788,  1174,   601,   623,   647,   804,  1050,   661,
   954,   968,   966,   529,   977,  1181,  1172,  1178,  1157,   178,
  1188,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   702,   708,
-32768,-32768,  1056,-32768,-32768,-32768,  4700,-32768,-32768,-32768,
-32768,  6366,-32768,-32768,  6366,-32768,-32768,-32768,-32768,  5768,
  1019,-32768,  1955,-32768,-32768,  1955,  1134,-32768,-32768,-32768,
  1198,-32768,-32768,-32768,  1229,-32768,   440,  1208,-32768,   797,
-32768,   750,-32768,-32768,  1213,-32768,-32768,-32768,  1214,   684,
-32768,   716,  1215,  5768,-32768,-32768,  1223,   717,  1219,   732,
   740,   748,   769,   786,   801,   808,   819,  5768,  5009,  5768,
   828,   834,   239,  5768,  5768,  5768,  5768,  5768,  5768,  5768,
  5768,  5768,  5768,  5768,  5768,  5768,  5768,  5768,  5768,  5768,
  5768,  5768,  5768,  5768,  5768,  5768,  5768,  5768,  5768,  5768,
  5768,-32768,  5768,-32768,  1226,  1230,    39,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   523,-32768,-32768,
-32768,-32768,  1147,-32768,-32768,  1955,   612,-32768,   149,  5369,
-32768,  6366,  5369,  6366,-32768,-32768,-32768,  1021,-32768,-32768,
-32768,-32768,-32768,-32768,    89,    46,-32768,-32768,-32768,   921,
-32768,-32768,   156,-32768,-32768,-32768,  5757,-32768,-32768,   659,
-32768,  1231,   972,-32768,-32768,   849,  5768,  1232,   876,   877,
   232,   684,   684,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   882,   890,   897,   685,   781,   567,
   676,   390,   405,   482,   485,   640,   875,   371,   501,   499,
   506,  5768,   518,  5830,-32768,  6170,   168,    97,-32768,-32768,
  1049,-32768,-32768,-32768,-32768,  1233,   584,-32768,-32768,  5369,
-32768,  5369,-32768,-32768,   901,   729,-32768,  1164,  6170,   168,
    97,-32768,   552,-32768,-32768,   684,-32768,  1071,   903,-32768,
   925,   933,-32768,-32768,  1022,-32768,  4982,-32768,-32768,-32768,
-32768,-32768,   763,-32768,   168,   883,    90,    90,-32768,-32768,
   326,   787,  1168,-32768,   118,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   851,-32768,   609,-32768,-32768,  1236,
-32768,  1237,  1238,-32768,  1240,-32768,-32768,-32768,  1177,-32768,
  4824,   763,-32768,   787,-32768,    60,  1241,-32768,-32768,-32768,
-32768,  1242,   934,   947,-32768,  1182,   168,  1185,-32768,-32768,
-32768,-32768,   125,   326,    85,   684,   684,    90,  1190,-32768,
   118,   118,-32768,   334,   874,-32768,   118,-32768,-32768,  5768,
   584,  1244,-32768,-32768,-32768,  1243,-32768,  1249,-32768,  1199,
  1199,-32768,-32768,-32768,   948,  5768,  1199,-32768,  1199,-32768,
-32768,-32768,   326,  1256,-32768,-32768,   326,-32768,   150,   334,
   459,   684,   684,   118,  1197,   874,-32768,-32768,-32768,-32768,
  5768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1260,-32768,-32768,   334,-32768,-32768,  1200,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1289,  1291,-32768
};

static const short yypgoto[] = {-32768,
-32768,  1210,-32768,-32768,-32768,-32768,  -398,  -105,-32768,-32768,
   969,-32768,-32768,-32768,-32768,-32768,    83,-32768,   519,-32768,
  -718,-32768,-32768,-32768,  -714,   296,   221,-32768,-32768,   279,
   418,-32768,-32768,   395,-32768,-32768,  -829,  -683,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  -917,   183,   315,  -951,
   222,-32768,  -617,   479,   739,-32768,-32768,  -592,-32768,-32768,
   108,  -399,  -343,  -308,  -338,  -349,  -346,  -372,  -541,  -470,
-32768,  -569,-32768,  -109,-32768,-32768,  1097,   989,  -610,  -321,
     2,-32768,-32768,-32768,  -462,-32768,-32768,-32768,     0,  -250,
   859,-32768,  -796,  -723,-32768,-32768,-32768,-32768,-32768,-32768,
   134,   741,-32768,   116,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   955,  -625,  -746,-32768,   229,-32768,-32768,
   646,   649,   524,     5,  -377,  1222,-32768,    14,-32768,-32768,
  -615,-32768,-32768,-32768,   638,  -235,   990,-32768,  -490,   236,
-32768,  1328,-32768,  1115,-32768,  1225,-32768,-32768,-32768,-32768,
  -115,-32768,-32768,-32768,-32768,   162,  1362,  1473,-32768,-32768,
  1527,-32768,-32768,  -359,-32768,   227,   269,  -584,  -804,-32768,
   824,-32768,-32768,   914,   -85,  -253,    69,-32768,   218,   194,
-32768,-32768,   212,-32768,   343,-32768,-32768,   628,-32768,   374,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1551,
-32768,-32768,  1611,  -219,   189,   258,-32768
};


#define	YYLAST		6623


static const short yytable[] = {    95,
   309,    92,    95,   292,   105,   602,   543,   544,   514,   629,
   229,   230,   705,   701,   648,   114,   332,   231,   232,   233,
   234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   738,   512,   555,   466,   257,   258,   259,
   260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
   270,   271,   272,   273,   545,   546,   553,   461,   740,   907,
   554,   476,   909,   577,   284,   551,   552,   222,   222,   611,
   912,    95,    88,    92,  -405,   498,   105,   650,   436,   890,
   920,   750,   819,   440,   586,   441,   785,   738,   991,   301,
   474,   547,   548,   549,   550,    95,   293,   445,  1027,  1083,
  1084,  1121,   996,  1027,   293,   314,   315,   317,  1028,   748,
  1027,   323,   740,  1028,   -68,   -68,   312,   480,   575,   442,
  1028,   -75,   -75,   100,   295,   325,   118,   346,   121,  1129,
  1130,  1091,   480,   420,   356,   750,     2,   818,   423,  1120,
  1085,  1092,  1086,   988,   645,  -245,   988,   498,   421,   903,
   480,  -354,   703,  -354,    88,     2,  -245,  1123,  1087,   184,
  1127,  -354,   983,   748,  1151,  1131,   627,  1132,   982,  -354,
   703,  -354,  1156,   303,   527,  1054,  1045,  1056,   107,  -354,
   749,   107,   313,  1133,   997,   107,   199,   199,   199,   902,
   528,   193,   904,   346,   890,    76,    77,   123,   812,    79,
    80,   694,   298,  1123,   300,   100,   -68,   -68,   872,   194,
   110,   111,   327,   -75,   -75,   514,   223,   223,   476,   296,
   296,   693,   296,   873,   189,   220,   220,    76,    77,   123,
   336,    79,    80,   988,   749,   988,   350,   351,   352,   353,
   354,   355,   423,  1018,  1019,   324,   332,   108,  1012,   341,
   108,   741,    76,  1029,   124,  1122,   942,    76,  1029,   633,
   107,  1058,   222,   337,    76,  1029,   990,   222,   992,   222,
   338,  1146,   943,  1020,  1021,   450,   691,  1148,   747,  1149,
   301,   222,   222,   455,   107,    76,  1093,  1022,   480,   349,
   422,    95,   459,   423,   462,   464,   458,   705,   707,   339,
   107,   745,   498,   657,   746,   741,  1004,   742,    95,   812,
     2,   107,   744,   473,   323,   342,   199,   346,   669,   971,
   440,   193,   423,  -354,  -354,  -354,   496,  -354,  -354,   108,
   332,   567,   747,   425,   199,   438,   499,   360,   423,   194,
   195,  1085,   743,  1086,   461,   431,   738,   432,   423,  1131,
   500,  1132,   621,   108,   189,   745,   802,   346,   746,  1087,
   199,   742,   366,   367,   480,   193,   744,  1133,   199,   326,
   199,   740,   199,   193,   199,   690,   447,   193,   332,   193,
   340,  -577,   199,   194,   576,  -577,   423,   199,   710,   199,
   623,   194,   973,   361,   750,   194,   743,   194,   189,   362,
  -569,   199,   199,   199,  -569,   720,   189,   721,   193,   363,
   189,   223,   189,   414,   415,  -570,   223,   430,   223,  -570,
   220,   437,   748,   410,   411,   220,   194,   220,   408,   409,
   223,   223,   643,   455,   406,   407,   644,   412,   413,   220,
   220,   189,    95,   408,   409,    95,   293,   584,   958,   959,
   587,   689,   592,  -246,   595,   286,   601,    95,   905,    95,
   364,  -354,  -354,  -354,   608,  -354,  -354,   323,  -354,   497,
   195,  -354,  1027,  -354,   617,  1152,   305,   306,   307,   829,
   107,   325,  1028,   107,   107,   107,   625,   970,   332,   499,
   365,   631,  -571,   749,   459,  -572,  -571,   107,  -625,  -572,
   540,   541,   542,   107,   222,  -629,   960,   961,   968,  -581,
   332,  -579,   969,  -581,   195,  -579,  -626,   966,   967,   416,
   408,   409,   195,   408,   409,   416,   195,   417,   195,    76,
    77,   123,   423,    79,    80,   418,   660,  -354,  -354,  -354,
   417,  -354,  -354,   962,   963,   964,   965,   515,   516,   108,
   426,   199,   463,   465,   467,   862,   863,   195,   455,   199,
   480,   199,   419,  1008,   741,   629,   108,   498,   495,   864,
   865,   423,   326,   455,  1099,     2,   673,  -566,   565,   459,
   692,  -566,   497,   807,   877,   878,   879,   422,   406,   407,
   423,   747,   687,   688,   496,  1049,  -462,   423,   517,   323,
   632,   827,   522,   408,   409,   199,   520,     2,   521,   438,
   193,  -534,   423,   325,   745,  -534,   496,   746,   631,   984,
   742,   427,   985,   459,   199,   744,    76,  1029,   194,  1122,
   199,   107,     2,  -533,   107,   717,   718,  -533,   414,   415,
   346,  -631,   346,   189,   107,   387,   107,   388,   107,  -354,
  -574,   560,   561,   223,  -574,   743,   107,  -535,  -246,   107,
   475,  -535,   220,   107,   781,  -354,   410,   411,   389,   390,
   332,  -555,   788,  1005,   790,  -555,  1006,   580,   796,   797,
   412,   413,  -245,   801,   498,   998,  -567,   617,   808,  -628,
  -567,   433,  -631,   499,   807,  -564,   199,   406,   407,  -564,
   108,   434,   810,   108,   934,   107,   107,   500,   403,   404,
   405,  -627,  -532,   599,   346,   108,  -532,   108,   423,    76,
    77,   123,   876,    79,    80,   326,   423,   423,   614,   439,
   932,   936,   619,  -354,  -354,  -354,   293,  -354,  -354,   985,
   699,   443,  -549,   580,   199,   199,  -549,   444,  1033,   193,
  -554,    76,    77,   123,  -554,    79,    80,   199,  -553,   195,
   199,   199,  -553,  -245,  1072,   630,  1059,   194,  1138,   896,
   293,  1065,   448,  1077,   646,   647,    76,    77,   123,  -552,
    79,    80,   189,  -552,   449,  -631,  -631,  1076,   107,  -631,
  -631,  -563,   580,  1078,   293,  -563,  -551,  1088,   924,   808,
  -551,   631,  1089,   451,   403,   404,   405,   580,   672,  1161,
  -245,  -550,   498,   810,   457,  -550,   469,   839,  -547,   840,
     2,  -354,  -547,   830,   831,   832,   833,   834,   835,  -548,
   471,  1110,  1111,  -548,  1112,   199,   199,  -354,  -544,   769,
   841,   842,  -544,   472,  -545,   477,   199,   199,  -545,   199,
   488,    76,    77,   123,   331,    79,    80,   326,  1098,  -536,
   494,   985,   107,  -536,   107,  1135,   503,   331,   331,   331,
   331,   331,   331,   107,   358,   359,   107,   107,   199,   504,
  1017,   293,   672,   723,  1134,  -575,  -539,   643,   986,  -575,
  -539,  1011,  -559,   769,   672,   993,  -559,   505,   195,   507,
  -560,   410,   411,  1061,  -560,   899,  1159,  -561,   899,   793,
  1057,  -561,   508,  -557,   328,   412,   413,  -557,   509,   139,
   140,   141,   142,   143,   144,   813,   510,   403,   404,   405,
  -245,   599,   498,   599,   511,  -540,   145,   146,   147,  -540,
     2,    76,   803,  -538,  -542,   619,   108,  -538,  -542,   518,
   309,   569,   955,   956,   957,   199,   570,  -543,  -541,   572,
   148,  -543,  -541,   573,    76,    77,   123,   574,    79,    80,
   925,   683,   684,  1046,   423,   719,    95,   855,   856,   857,
   332,  1052,   916,   917,   918,   585,   180,   589,   107,   858,
   859,   590,   808,   591,  1068,  -245,  1147,   587,   107,   459,
   594,   157,  1073,  1074,   860,   861,  1066,   600,   455,   274,
   275,   276,   277,   278,   279,   280,   281,   282,   283,   866,
   867,   332,   607,   899,   609,   899,   899,   899,   906,   684,
   994,   995,   423,  1075,  1009,   606,    95,   615,  1100,  1102,
   392,   616,   299,   620,   302,   423,   304,   624,   308,   628,
    76,  1080,   455,   310,   634,   808,   636,   108,   638,   639,
   637,   641,   844,   318,   642,   319,   659,   931,    76,   329,
   330,   160,   662,   663,   393,   394,   395,   396,   397,   398,
   399,   400,   401,   402,    76,    77,   123,  1137,    79,    80,
    95,   665,   674,  1141,   331,  1052,   845,   846,   847,   848,
   849,   850,   851,   852,   853,   854,   679,   391,   677,   680,
   682,   695,   697,   899,   344,   899,   345,   877,   878,   879,
   107,   107,   685,   880,   881,   882,   883,   884,   885,   886,
   700,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,  1163,   702,   708,
   711,   712,   769,   713,  1166,   714,  1034,  1036,   779,  1037,
   180,   783,   786,   792,   798,   107,   814,   817,   180,   800,
  1038,  1039,   180,  1040,   180,  1041,  1042,   816,   331,  1034,
   343,   107,   435,   821,   107,   820,   328,   838,  1043,  1013,
  1014,   139,   140,   141,   142,   143,   144,   825,   826,   868,
   869,   871,   874,   180,  1082,  1034,  1034,   870,   145,   146,
   147,   910,   914,  1096,   880,   881,   882,   883,   884,   885,
   886,   923,   182,   211,   211,   107,   331,   928,   929,   933,
   935,   331,   148,   937,   108,   453,   974,   975,  1007,   456,
  1048,  1060,  1010,  1070,   107,  1090,  1101,  1105,  1104,  1107,
   108,  1140,  1142,  1069,  1109,  1113,  1115,   468,  1143,  1117,
   470,   878,  1119,  1034,   107,   107,  1034,  1128,   478,  1096,
  1096,   481,  1150,   157,  1157,  1096,  1162,  1164,  1168,   107,
  1169,   285,   894,   479,   331,  1062,   331,  1118,   652,   654,
   916,   917,   918,  1079,   108,   979,   880,   881,   882,   883,
   884,   885,   886,  1153,  1002,  1064,   486,   940,  1136,  1034,
   107,   107,  1096,   108,   489,   490,   491,   492,   603,  1139,
   676,   791,   789,   926,   311,   806,   501,   227,   446,  1114,
   566,   640,   823,  1125,  1126,   486,   331,  1016,     0,     0,
    76,   329,   330,   160,     0,     0,   486,     0,   108,     0,
     0,     0,   182,     0,     0,     0,     0,     0,   331,   185,
   217,   217,     0,     0,     0,     0,   526,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1154,
  1155,     0,     0,     0,     0,     0,     0,     0,     0,   739,
     0,     0,     0,     0,     0,   481,   182,     0,     0,     0,
     0,     0,   588,     0,   182,   180,     0,   593,   182,   596,
   182,     0,   571,     0,     0,     0,     0,   605,   211,     0,
     0,   610,     0,   211,     0,   211,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   211,   211,   182,
     0,     0,     0,   739,     0,     0,   506,     0,     0,     0,
     0,     0,     0,     0,   331,   331,   331,   331,   331,   331,
   836,   837,     0,     0,     0,     0,     0,     0,     0,     0,
   186,   218,   218,   525,     0,     0,     0,     0,   529,   530,
   531,   532,   533,   534,   535,   536,   537,   538,   539,   185,
     0,   328,   523,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,   559,
     0,     0,     0,   145,   146,   147,     0,     0,   331,     0,
     0,     0,     0,     0,   187,   219,   219,     0,   588,     0,
     0,     0,     0,   185,     0,   649,     0,   148,     0,     0,
     0,   185,     0,     0,   180,   185,     0,   185,   196,   225,
   225,     0,   331,   481,     0,   217,     0,     0,     0,     0,
   217,     0,   217,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   704,     0,   217,   217,   185,   709,   157,     0,
     0,     0,     0,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   186,   331,   492,     0,     0,     0,     0,   771,   198,   226,
   226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   486,
     0,   486,     0,     0,     0,     0,     0,   724,     0,     0,
   770,   182,     0,     0,   186,    76,   329,   330,   160,     0,
     0,     0,   186,     0,   187,     0,   186,     0,   186,     0,
   211,     0,     0,     0,     0,   331,   218,     0,     0,     0,
     0,   218,     0,   218,     0,     0,     0,     0,   196,     0,
     0,     0,   843,     0,     0,   218,   218,   186,     0,     0,
     0,     0,   822,     0,     0,     0,     0,     0,   187,     0,
     0,     0,   739,   828,     0,     0,   187,     0,     0,     0,
   187,     0,   187,     0,     0,     0,     0,     0,     0,     0,
   219,     0,   196,     0,     0,   219,     0,   219,     0,   716,
   196,     0,     0,     0,   196,     0,   196,     0,   198,   219,
   219,   187,   911,     0,   225,     0,     0,   328,     0,   225,
   626,   225,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,   225,   225,   196,     0,     0,     0,   145,
   146,   147,     0,     0,   794,     0,     0,     0,   185,     0,
   182,     0,   198,     0,     0,     0,     0,     0,     0,     0,
   198,     0,     0,   148,   198,     0,   198,   217,     0,     0,
     0,     0,     0,     0,   226,     0,     0,     0,     0,   226,
     0,   226,     0,     0,     0,     0,     0,     0,   941,     0,
     0,     0,     0,   226,   226,   198,     0,     0,   331,     0,
     0,     0,     0,     0,   157,   980,   981,     0,     0,     0,
     0,     0,     0,   987,   331,     0,     0,     0,  -227,     0,
     0,     0,     0,     0,   328,     0,     0,     0,     0,   139,
   140,   141,   142,   143,   144,     0,     0,  1003,     0,   331,
     0,     0,     0,     0,     0,     0,   145,   146,   147,   794,
     0,     0,   794,     0,     0,     0,     0,     0,     0,   186,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   148,    76,   329,   330,   160,   492,     0,     0,   218,     0,
     0,     0,     0,     0,     0,     0,     0,   185,     0,     0,
     0,     0,     0,     0,   938,   525,     0,     0,     0,  1047,
   944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
   954,   157,  -488,   187,     0,     0,     0,   368,     0,     0,
  1015,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,   219,   793,     0,     0,     0,   196,   328,   145,
   146,   147,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,   794,     0,     0,     0,   225,     0,     0,     0,
   145,   146,   147,   148,     0,  1103,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    76,   329,
   330,   160,     0,     0,   148,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   198,   186,     0,
     0,     0,     0,     0,   157,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    -1,     1,   226,     0,     0,     0,
     0,     0,     0,     0,     0,   157,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  -245,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
     0,   794,   187,  1160,     0,     0,     0,     0,     0,     3,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    76,   329,   330,   160,     0,   196,     0,     0,     0,
     0,  -354,  -354,  -354,     0,     4,     0,     0,     0,     5,
     6,     7,    76,   329,   330,   160,     0,     0,     0,     0,
     0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    11,    12,    13,     0,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,   198,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    -2,     1,    76,    77,    78,     0,    79,    80,    81,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  -245,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  -354,  -354,  -354,
     0,     4,     0,     0,     0,     5,     6,     7,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
     9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
    13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,     0,     0,    76,    77,
    78,   125,    79,    80,    81,     0,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   137,  -488,
   563,     0,     0,     0,   138,     0,     0,     0,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,  -245,  -245,     0,     3,   145,   146,   147,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  -354,  -354,  -354,
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
    70,    71,    72,    73,    74,    75,     0,     0,    76,   158,
   564,   160,   161,    80,    81,   125,     0,     0,     0,     0,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   137,  -488,     0,     0,     0,     0,   138,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -245,  -245,     0,     0,
   145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -245,  -245,  -245,   148,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,  -245,  -245,  -245,   157,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,     0,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,     0,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
     0,     0,    76,   158,   159,   160,   161,    80,  -245,   201,
     0,     0,     0,     0,   126,   127,   128,     0,     0,   202,
   131,   132,   133,   134,   135,   136,   203,  -488,  -492,     0,
     0,     0,   204,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
  -245,  -245,     0,     0,   145,   146,   147,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  -245,  -245,  -245,   148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   156,  -245,  -245,  -245,   157,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
     0,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,     0,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
  -245,  -245,  -245,  -245,     0,     0,    76,   158,   159,   160,
   205,   206,  -245,   201,     0,     0,     0,     0,   126,   127,
   128,     0,     0,   202,   131,   132,   133,   134,   135,   136,
   203,  -436,  -436,     0,     0,     0,   204,  -436,     0,     0,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,  -245,  -245,   125,     0,   145,   146,
   147,   126,   127,   128,     0,   129,   130,   131,   132,   133,
   134,   135,   136,   137,  -488,     0,     0,     0,     0,   138,
     0,     0,   148,     0,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     0,     0,     0,     0,  -245,  -245,     0,
     0,   145,   146,   147,  -436,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     0,     0,     0,   157,     0,   148,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   149,   150,   151,
   152,   153,   154,   155,     0,     0,     0,     0,     0,     0,
     0,     0,   156,     0,     0,     0,   157,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    76,   158,   159,   160,   205,   206,     0,     0,   125,     0,
     0,     0,     0,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -488,     0,     0,     0,
     0,   138,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,    76,   158,   159,   160,   161,    80,  -245,
  -245,   201,     0,   145,   146,   147,   126,   127,   128,     0,
     0,   202,   131,   132,   133,   134,   135,   136,   203,  -488,
  -492,     0,     0,     0,   204,     0,     0,   148,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,  -245,  -245,     0,     0,   145,   146,   147,  -463,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
   148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  -432,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
     0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    76,   158,   159,   160,   161,
    80,     0,     0,   125,     0,     0,     0,     0,   126,   127,
   128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
   137,  -488,   655,     0,     0,     0,   138,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,     0,    76,   158,
   159,   160,   205,   206,  -245,  -245,   201,     0,   145,   146,
   147,   126,   127,   128,     0,     0,   202,   131,   132,   133,
   134,   135,   136,   203,  -488,  -492,     0,     0,     0,   204,
     0,     0,   148,     0,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     0,     0,     0,     0,  -245,  -245,     0,
     0,   145,   146,   147,     0,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     0,     0,     0,   157,     0,   148,     0,     0,     0,     0,
     0,     0,   328,     0,     0,   706,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,   150,   151,
   152,   153,   154,   155,   145,   146,   147,     0,     0,     0,
     0,     0,   156,     0,     0,     0,   157,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    76,   158,   159,   160,   161,    80,     0,     0,   125,     0,
     0,     0,     0,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -488,     0,     0,   157,
     0,   138,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,    76,   158,   159,   160,   205,   206,  -245,
  -245,     0,     0,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    76,   329,   330,   160,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,   126,   127,   128,   157,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -488,   578,
     0,     0,     0,   368,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,  -245,  -245,     0,     3,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     4,     0,     0,     0,     0,    76,   158,   159,   160,   161,
    80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   579,    11,    12,    13,
   157,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,   369,   370,    76,   158,   564,
   160,   161,    80,    81,   126,   127,   128,     0,   129,   130,
   131,   132,   133,   134,   135,   136,   203,  -488,   656,     0,
     0,     0,   368,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
  -245,  -245,     0,     3,   145,   146,   147,     0,     0,     0,
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
    72,    73,    74,    75,   369,   370,    76,   158,   564,   160,
   161,    80,    81,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -488,   667,     0,     0,
     0,   368,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -245,
  -245,     0,     3,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   148,     4,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   668,    11,    12,    13,   157,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,     0,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,   369,   370,    76,   158,   564,   160,   161,
    80,    81,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   203,  -488,   666,     0,     0,     0,
   368,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   145,   146,   147,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -488,   670,
     0,     0,     0,   368,     0,     0,   148,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   145,   146,   147,     0,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   156,     0,     0,     0,   157,     0,   148,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   671,     0,     0,     0,
   157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   369,   370,    76,   158,   159,   160,   161,    80,
     0,     0,     0,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -488,   722,     0,     0,
     0,   368,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,   369,   370,    76,   158,   159,
   160,   161,    80,   145,   146,   147,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   203,  -488,
   775,     0,     0,     0,   368,     0,     0,   148,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   145,   146,   147,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
   148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
     0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   369,   370,    76,   158,   159,   160,   161,
    80,     0,     0,     0,   126,   127,   128,     0,   129,   130,
   131,   132,   133,   134,   135,   136,   203,  -488,   776,     0,
     0,     0,   368,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,   369,   370,    76,   158,
   159,   160,   161,    80,   145,   146,   147,   126,   127,   128,
     0,   129,   130,   131,   132,   133,   134,   135,   136,   203,
  -488,   778,     0,     0,     0,   368,     0,     0,   148,     0,
   139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   145,   146,   147,
     0,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   777,     0,     0,     0,   157,
     0,   148,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
     0,     0,   157,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   369,   370,    76,   158,   159,   160,
   161,    80,     0,     0,     0,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -488,   895,
     0,     0,     0,   368,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,   369,   370,    76,
   158,   159,   160,   161,    80,   145,   146,   147,   126,   127,
   128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
   203,  -488,     0,     0,     0,     0,   368,     0,     0,   148,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   145,   146,
   147,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   156,     0,     0,     0,
   157,     0,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   150,   151,   152,   153,   154,
   155,   293,     0,     0,     0,     0,     0,     0,     0,   156,
     0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
     0,     0,     0,     0,     0,   369,   370,    76,   158,   159,
   160,   161,    80,     0,     0,     0,     0,     0,     0,     0,
  -354,  -354,  -354,     0,     4,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   369,   370,
    76,   158,   159,   160,   161,    80,     0,     0,     0,     0,
     0,    11,    12,    13,     0,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   293,
     0,     0,     0,   120,     0,     0,     0,    81,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
     0,     0,   328,   939,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     4,     0,   145,   146,   147,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  -622,
     0,     0,     0,     0,     0,     0,     0,     0,   148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
    12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,   157,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,  -111,     0,     0,
     0,   120,  -111,     0,     0,    81,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     3,     0,     0,    76,   329,   330,   160,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
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
    72,    73,    74,    75,   288,     0,     0,     0,   120,     0,
     0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  -491,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    11,    12,    13,     0,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,     0,     0,     0,     0,   120,    11,    12,    13,    81,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,  -629,     0,     0,     0,   120,     0,
     0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  -631,
  -631,  -631,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  -631,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  -245,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
  -631,  -631,  -631,     0,  -631,  -631,  -631,  -631,  -631,  -631,
  -631,  -631,  -631,  -631,     0,  -631,  -631,  -631,  -631,  -631,
  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
     0,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,     0,     0,
     0,     0,     0,    11,    12,    13,  -631,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,     0,     0,    76,    77,    78,     0,    79,    80,    81,
   328,  -227,     0,     0,     0,   139,   140,   141,   142,   143,
   144,   328,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,   145,   146,   147,     0,     0,     0,     0,     0,
     0,   357,     0,   145,   146,   147,   139,   140,   141,   142,
   143,   144,   651,     0,     0,     0,   148,   139,   140,   141,
   142,   143,   144,   145,   146,   147,     0,   148,     0,     0,
     0,     0,   653,     0,   145,   146,   147,   139,   140,   141,
   142,   143,   144,   725,     0,     0,     0,   148,   726,   727,
   728,   729,   730,   731,   145,   146,   147,   157,   148,     0,
     0,     0,     0,     0,     0,   145,   732,   733,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   157,   734,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
     0,     0,     0,     0,    76,   329,   330,   160,     0,     0,
   157,     0,     0,     0,     0,    76,   329,   330,   160,  -171,
  -171,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    76,   329,   330,   160,     0,
     0,     0,     0,     0,     0,     0,    76,   329,   330,   160,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    76,   329,   330,   160,
     0,     0,     0,     0,     0,     0,     0,    76,   735,   736,
   737,     0,     0,     0,     0,    11,    12,    13,     0,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,     0,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,     3,     0,     0,     0,   120,     0,     0,
     0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  -354,  -354,  -354,     0,     4,
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
    72,    73,    74,    75,     3,     0,     0,     0,   120,     0,
     0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
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
    71,    72,    73,    74,    75,  -354,  -354,  -354,     0,   120,
     0,     0,     0,    81,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    11,    12,    13,     0,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,     8,     9,    10,     0,   120,     0,
     0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    11,    12,    13,     0,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,     0,     0,     0,     0,   120,    11,    12,    13,    81,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,     0,     0,     0,     0,   120,     0,
     0,     0,    81
};

static const short yycheck[] = {     0,
   106,     0,     3,    89,     0,   468,   406,   407,   368,   500,
    11,    12,   628,   624,   556,     2,   126,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,   661,   366,   418,    19,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,   408,   409,   416,   303,   661,   793,
   417,   322,   796,   451,    75,   414,   415,     9,    10,   478,
   799,    82,     0,    82,    25,    26,    82,   558,   204,   773,
   805,   661,   708,   209,   454,   211,   681,   715,   903,   100,
   320,   410,   411,   412,   413,   106,    18,   223,    24,  1027,
  1028,    27,   909,    24,    18,   116,   117,   118,    34,   661,
    24,   122,   715,    34,    86,    87,   113,     5,   450,   215,
    34,    86,    87,     0,    24,   122,     3,   138,     5,  1091,
  1092,    24,     5,    41,   145,   715,    34,    25,    21,    25,
    26,    34,    28,   900,    27,    24,   903,    26,    56,   785,
     5,    24,    25,    26,    82,    34,    18,  1085,    44,     8,
  1088,    34,   896,   715,    25,    26,   498,    28,   893,    24,
    25,    26,  1134,    85,    28,   990,   983,   992,     0,    34,
   661,     3,    21,    44,   913,     7,     8,     9,    10,   784,
    44,     8,   787,   204,   888,   178,   179,   180,   699,   182,
   183,   610,    97,  1131,    99,    82,   178,   179,    41,     8,
   108,   109,    24,   178,   179,   585,     9,    10,   479,    96,
    97,   609,    99,    56,     8,     9,    10,   178,   179,   180,
    24,   182,   183,   990,   715,   992,   139,   140,   141,   142,
   143,   144,    21,    86,    87,   122,   366,     0,    27,    18,
     3,   661,   178,   179,     7,   181,    28,   178,   179,   505,
    82,   995,   204,    24,   178,   179,   902,   209,   904,   211,
    24,  1111,    44,   116,   117,   286,   608,  1117,   661,  1119,
   291,   223,   224,   292,   106,   178,   179,   130,     5,   138,
    18,   302,   303,    21,   305,   306,   302,   923,   630,    24,
   122,   661,    26,   567,   661,   715,   927,   661,   319,   810,
    34,   133,   661,   319,   325,    18,   138,   328,   582,   871,
   446,   138,    21,   178,   179,   180,    25,   182,   183,    82,
   450,   427,   715,   182,   156,    18,   347,    24,    21,   138,
     8,    26,   661,    28,   590,   194,   974,   196,    21,    26,
   347,    28,    25,   106,   138,   715,     5,   368,   715,    44,
   182,   715,     6,     7,     5,   182,   715,    44,   190,   122,
   192,   974,   194,   190,   196,   605,   225,   194,   498,   196,
   133,    21,   204,   182,    25,    25,    21,   209,   634,   211,
    25,   190,   873,    16,   974,   194,   715,   196,   182,    16,
    21,   223,   224,   225,    25,   651,   190,   653,   225,    16,
   194,   204,   196,    53,    54,    21,   209,   192,   211,    25,
   204,   205,   974,    37,    38,   209,   225,   211,    49,    50,
   223,   224,    21,   442,    32,    33,    25,    51,    52,   223,
   224,   225,   453,    49,    50,   456,    18,   453,   858,   859,
   456,    23,   463,    24,   465,    26,   467,   468,   790,   470,
    16,   178,   179,   180,   475,   182,   183,   478,    18,   346,
   138,    21,    24,    23,   485,    27,    67,    68,    69,   725,
   302,   478,    34,   305,   306,   307,   497,   870,   608,   500,
    15,   502,    21,   974,   505,    21,    25,   319,    22,    25,
   403,   404,   405,   325,   446,    22,   860,   861,   868,    21,
   630,    21,   869,    25,   182,    25,    22,   866,   867,    29,
    49,    50,   190,    49,    50,    29,   194,    39,   196,   178,
   179,   180,    21,   182,   183,    40,    25,   178,   179,   180,
    39,   182,   183,   862,   863,   864,   865,   369,   370,   302,
    92,   373,   305,   306,   307,    37,    38,   225,   567,   381,
     5,   383,    55,   933,   974,  1066,   319,    26,    18,    51,
    52,    21,   325,   582,  1047,    34,   587,    21,   427,   590,
    25,    25,   459,   699,    72,    73,    74,    18,    32,    33,
    21,   974,   603,   604,    25,    22,    92,    21,   373,   610,
   503,    25,   386,    49,    50,   427,   381,    34,   383,    18,
   427,    21,    21,   610,   974,    25,    25,   974,   629,    18,
   974,    19,    21,   634,   446,   974,   178,   179,   427,   181,
   452,   453,    34,    21,   456,   646,   647,    25,    53,    54,
   651,    34,   653,   427,   466,    24,   468,    26,   470,    28,
    21,    42,    43,   446,    25,   974,   478,    21,    24,   481,
    26,    25,   446,   485,   675,    44,    37,    38,    47,    48,
   790,    21,   683,    25,   685,    25,    28,   452,   689,   690,
    51,    52,    24,   694,    26,   915,    21,   698,   699,    22,
    25,    22,    85,   704,   810,    21,   518,    32,    33,    25,
   453,    24,   699,   456,   824,   527,   528,   704,    34,    35,
    36,    22,    21,   466,   725,   468,    25,   470,    21,   178,
   179,   180,    25,   182,   183,   478,    21,    21,   481,    92,
    25,    25,   485,   178,   179,   180,    18,   182,   183,    21,
   617,    19,    21,   518,   566,   567,    25,    20,   978,   566,
    21,   178,   179,   180,    25,   182,   183,   579,    21,   427,
   582,   583,    25,    24,  1010,    26,   996,   566,  1100,   780,
    18,  1001,    92,    21,   527,   528,   178,   179,   180,    21,
   182,   183,   566,    25,    27,   178,   179,  1017,   610,   182,
   183,    21,   567,  1023,    18,    25,    21,    21,   809,   810,
    25,   812,  1032,    24,    34,    35,    36,   582,   583,  1141,
    24,    21,    26,   810,    18,    25,    18,    24,    21,    26,
    34,    28,    25,   726,   727,   728,   729,   730,   731,    21,
    18,  1061,  1062,    25,  1064,   657,   658,    44,    21,   661,
    47,    48,    25,    23,    21,    24,   668,   669,    25,   671,
    22,   178,   179,   180,   126,   182,   183,   610,    18,    21,
    18,    21,   684,    25,   686,  1095,    25,   139,   140,   141,
   142,   143,   144,   695,   146,   147,   698,   699,   700,    25,
   976,    18,   657,   658,    21,    21,    21,    21,   899,    25,
    25,    25,    21,   715,   669,   906,    25,    24,   566,    18,
    21,    37,    38,   999,    25,   782,  1136,    21,   785,    19,
    20,    25,    18,    21,    24,    51,    52,    25,    18,    29,
    30,    31,    32,    33,    34,   700,    18,    34,    35,    36,
    24,   684,    26,   686,    18,    21,    46,    47,    48,    25,
    34,   178,   695,    21,    21,   698,   699,    25,    25,    19,
  1066,     9,   855,   856,   857,   777,    11,    21,    21,    25,
    70,    25,    25,    24,   178,   179,   180,    11,   182,   183,
   184,    20,    21,   984,    21,    22,   987,    34,    35,    36,
  1100,   987,    72,    73,    74,    24,     8,    88,   810,    32,
    33,    21,  1003,    19,  1005,    19,  1116,  1003,   820,  1010,
    19,   111,  1013,  1014,    49,    50,  1003,    19,  1017,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    53,
    54,  1141,    27,   900,    24,   902,   903,   904,    20,    21,
    20,    21,    21,    22,   937,    88,  1047,    25,  1049,  1050,
    23,    21,    98,    22,   100,    21,   102,    18,   104,    24,
   178,   179,  1061,   109,    21,  1066,    22,   810,   181,   181,
    25,    11,    23,   119,    24,   121,    24,   820,   178,   179,
   180,   181,    24,    27,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,   178,   179,   180,  1098,   182,   183,
  1101,    25,    23,  1104,   366,  1101,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    19,   163,    20,    20,
    19,    21,     5,   990,   136,   992,   138,    72,    73,    74,
   942,   943,    23,    78,    79,    80,    81,    82,    83,    84,
    25,   403,   404,   405,   406,   407,   408,   409,   410,   411,
   412,   413,   414,   415,   416,   417,   418,  1158,    27,    24,
    22,    88,   974,    88,  1165,    24,   978,   119,    25,   121,
   182,    20,    20,    18,    27,   987,    18,    27,   190,    25,
   132,   133,   194,   135,   196,   137,   138,    25,   450,  1001,
    18,  1003,   204,    25,  1006,    21,    24,    24,   150,   942,
   943,    29,    30,    31,    32,    33,    34,    25,    25,    29,
    39,    55,    25,   225,  1026,  1027,  1028,    40,    46,    47,
    48,    88,    25,  1035,    78,    79,    80,    81,    82,    83,
    84,    24,     8,     9,    10,  1047,   498,    25,    25,    25,
    18,   503,    70,    25,   987,   291,    21,    18,    18,   295,
    18,    88,    21,   183,  1066,    88,    21,    20,    22,    20,
  1003,    18,    20,  1006,    88,    25,    25,   313,    20,    88,
   316,    73,    88,  1085,  1086,  1087,  1088,    88,   324,  1091,
  1092,   327,    27,   111,    88,  1097,    27,    88,     0,  1101,
     0,    82,   774,   325,   556,  1000,   558,  1077,   560,   561,
    72,    73,    74,  1025,  1047,   888,    78,    79,    80,    81,
    82,    83,    84,  1131,   920,  1001,   328,   839,  1097,  1131,
  1132,  1133,  1134,  1066,   336,   337,   338,   339,   470,  1101,
   590,   686,   684,   810,   113,   698,   347,    10,   224,  1071,
   427,   518,   715,  1086,  1087,   357,   608,   974,    -1,    -1,
   178,   179,   180,   181,    -1,    -1,   368,    -1,  1101,    -1,
    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,   630,     8,
     9,    10,    -1,    -1,    -1,    -1,   388,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1132,
  1133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   661,
    -1,    -1,    -1,    -1,    -1,   451,   182,    -1,    -1,    -1,
    -1,    -1,   458,    -1,   190,   427,    -1,   463,   194,   465,
   196,    -1,   434,    -1,    -1,    -1,    -1,   473,   204,    -1,
    -1,   477,    -1,   209,    -1,   211,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,   224,   225,
    -1,    -1,    -1,   715,    -1,    -1,   360,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   726,   727,   728,   729,   730,   731,
   732,   733,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     8,     9,    10,   387,    -1,    -1,    -1,    -1,   392,   393,
   394,   395,   396,   397,   398,   399,   400,   401,   402,   138,
    -1,    24,    25,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,
    -1,    -1,    -1,    46,    47,    48,    -1,    -1,   790,    -1,
    -1,    -1,    -1,    -1,     8,     9,    10,    -1,   584,    -1,
    -1,    -1,    -1,   182,    -1,   557,    -1,    70,    -1,    -1,
    -1,   190,    -1,    -1,   566,   194,    -1,   196,     8,     9,
    10,    -1,   824,   609,    -1,   204,    -1,    -1,    -1,    -1,
   209,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   628,    -1,   223,   224,   225,   633,   111,    -1,
    -1,    -1,    -1,   855,   856,   857,   858,   859,   860,   861,
   862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
   138,   873,   624,    -1,    -1,    -1,    -1,   663,     8,     9,
    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   651,
    -1,   653,    -1,    -1,    -1,    -1,    -1,   659,    -1,    -1,
   662,   427,    -1,    -1,   182,   178,   179,   180,   181,    -1,
    -1,    -1,   190,    -1,   138,    -1,   194,    -1,   196,    -1,
   446,    -1,    -1,    -1,    -1,   937,   204,    -1,    -1,    -1,
    -1,   209,    -1,   211,    -1,    -1,    -1,    -1,   138,    -1,
    -1,    -1,   738,    -1,    -1,   223,   224,   225,    -1,    -1,
    -1,    -1,   714,    -1,    -1,    -1,    -1,    -1,   182,    -1,
    -1,    -1,   974,   725,    -1,    -1,   190,    -1,    -1,    -1,
   194,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   204,    -1,   182,    -1,    -1,   209,    -1,   211,    -1,   643,
   190,    -1,    -1,    -1,   194,    -1,   196,    -1,   138,   223,
   224,   225,   798,    -1,   204,    -1,    -1,    24,    -1,   209,
    27,   211,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    -1,   223,   224,   225,    -1,    -1,    -1,    46,
    47,    48,    -1,    -1,   688,    -1,    -1,    -1,   427,    -1,
   566,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   190,    -1,    -1,    70,   194,    -1,   196,   446,    -1,    -1,
    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,   209,
    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,   840,    -1,
    -1,    -1,    -1,   223,   224,   225,    -1,    -1,  1100,    -1,
    -1,    -1,    -1,    -1,   111,   891,   892,    -1,    -1,    -1,
    -1,    -1,    -1,   899,  1116,    -1,    -1,    -1,    18,    -1,
    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,   923,    -1,  1141,
    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,   793,
    -1,    -1,   796,    -1,    -1,    -1,    -1,    -1,    -1,   427,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    70,   178,   179,   180,   181,   927,    -1,    -1,   446,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   566,    -1,    -1,
    -1,    -1,    -1,    -1,   838,   839,    -1,    -1,    -1,   985,
   844,   845,   846,   847,   848,   849,   850,   851,   852,   853,
   854,   111,    19,   427,    -1,    -1,    -1,    24,    -1,    -1,
   972,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,   446,    19,    -1,    -1,    -1,   427,    24,    46,
    47,    48,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,   896,    -1,    -1,    -1,   446,    -1,    -1,    -1,
    46,    47,    48,    70,    -1,  1051,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,   179,
   180,   181,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   427,   566,    -1,
    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,     0,     1,   446,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
    -1,   995,   566,  1139,    -1,    -1,    -1,    -1,    -1,    45,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   178,   179,   180,   181,    -1,   566,    -1,    -1,    -1,
    -1,    67,    68,    69,    -1,    71,    -1,    -1,    -1,    75,
    76,    77,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,   566,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     0,     1,   178,   179,   180,    -1,   182,   183,   184,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
    -1,    71,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    -1,    -1,   178,   179,
   180,     1,   182,   183,   184,    -1,     6,     7,     8,    -1,
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
   170,   171,   172,   173,   174,   175,    -1,    -1,   178,   179,
   180,   181,   182,   183,   184,     1,    -1,    -1,    -1,    -1,
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
    -1,    -1,   178,   179,   180,   181,   182,   183,   184,     1,
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
   172,   173,   174,   175,    -1,    -1,   178,   179,   180,   181,
   182,   183,   184,     1,    -1,    -1,    -1,    -1,     6,     7,
     8,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,    25,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    42,    43,     1,    -1,    46,    47,
    48,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
    -1,    -1,    70,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
    -1,    46,    47,    48,    92,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   178,   179,   180,   181,   182,   183,    -1,    -1,     1,    -1,
    -1,    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,   178,   179,   180,   181,   182,   183,    42,
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
    -1,    -1,    -1,    -1,    -1,   178,   179,   180,   181,   182,
   183,    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,     7,
     8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    -1,   178,   179,
   180,   181,   182,   183,    42,    43,     1,    -1,    46,    47,
    48,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
    -1,    -1,    70,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
    -1,    46,    47,    48,    -1,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,    -1,    -1,
    -1,    -1,    24,    -1,    -1,    27,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    93,    94,
    95,    96,    97,    98,    46,    47,    48,    -1,    -1,    -1,
    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   178,   179,   180,   181,   182,   183,    -1,    -1,     1,    -1,
    -1,    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,   111,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,   178,   179,   180,   181,   182,   183,    42,
    43,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   178,   179,   180,   181,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,     6,     7,     8,   111,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    42,    43,    -1,    45,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
    71,    -1,    -1,    -1,    -1,   178,   179,   180,   181,   182,
   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,
   111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,   184,     6,     7,     8,    -1,    10,    11,
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
   172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
   182,   183,   184,     6,     7,     8,    -1,    10,    11,    12,
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
   183,   184,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    46,    47,    48,     6,     7,     8,    -1,    10,
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
    -1,    -1,   176,   177,   178,   179,   180,   181,   182,   183,
    -1,    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,   176,   177,   178,   179,   180,
   181,   182,   183,    46,    47,    48,     6,     7,     8,    -1,
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
   183,    -1,    -1,    -1,     6,     7,     8,    -1,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,   176,   177,   178,   179,
   180,   181,   182,   183,    46,    47,    48,     6,     7,     8,
    -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,
    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   176,   177,   178,   179,   180,   181,
   182,   183,    -1,    -1,    -1,     6,     7,     8,    -1,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,   176,   177,   178,
   179,   180,   181,   182,   183,    46,    47,    48,     6,     7,
     8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    70,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
    48,    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
   111,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,
    98,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
    -1,    -1,    -1,    -1,    -1,   176,   177,   178,   179,   180,
   181,   182,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    67,    68,    69,    -1,    71,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,
   178,   179,   180,   181,   182,   183,    -1,    -1,    -1,    -1,
    -1,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,    18,
    -1,    -1,    -1,   180,    -1,    -1,    -1,   184,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
    -1,    -1,    24,    25,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    71,    -1,    46,    47,    48,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
   109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,   111,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,    19,    -1,    -1,
    -1,   180,    24,    -1,    -1,   184,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    45,    -1,    -1,   178,   179,   180,   181,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
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
   172,   173,   174,   175,    19,    -1,    -1,    -1,   180,    -1,
    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    -1,    -1,    -1,    -1,   180,   108,   109,   110,   184,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    22,    -1,    -1,    -1,   180,    -1,
    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
   108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
    -1,    -1,    -1,   108,   109,   110,   184,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    -1,    -1,   178,   179,   180,    -1,   182,   183,   184,
    24,    25,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
    -1,    24,    -1,    46,    47,    48,    29,    30,    31,    32,
    33,    34,    24,    -1,    -1,    -1,    70,    29,    30,    31,
    32,    33,    34,    46,    47,    48,    -1,    70,    -1,    -1,
    -1,    -1,    24,    -1,    46,    47,    48,    29,    30,    31,
    32,    33,    34,    24,    -1,    -1,    -1,    70,    29,    30,
    31,    32,    33,    34,    46,    47,    48,   111,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    46,    47,    48,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    70,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
    -1,    -1,    -1,    -1,   178,   179,   180,   181,    -1,    -1,
   111,    -1,    -1,    -1,    -1,   178,   179,   180,   181,    42,
    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   178,   179,   180,   181,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   178,   179,   180,   181,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   178,   179,   180,   181,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,   179,   180,
   181,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,
   113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
   123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
   133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,    45,    -1,    -1,    -1,   180,    -1,    -1,
    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
   172,   173,   174,   175,    45,    -1,    -1,    -1,   180,    -1,
    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
   171,   172,   173,   174,   175,    67,    68,    69,    -1,   180,
    -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    89,    90,    91,    -1,   180,    -1,
    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    -1,    -1,    -1,    -1,   180,   108,   109,   110,   184,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    -1,    -1,    -1,    -1,   180,    -1,
    -1,    -1,   184
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */


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
{ uentry_clearDecl (); ;
    break;}
case 6:
{ uentry_clearDecl (); ;
    break;}
case 7:
{ uentry_clearDecl (); ;
    break;}
case 8:
{ uentry_clearDecl (); ;
    break;}
case 9:
{ uentry_clearDecl (); ;
    break;}
case 10:
{ uentry_checkDecl (); exprNode_free (yyvsp[0].expr); ;
    break;}
case 11:
{ uentry_clearDecl (); ;
    break;}
case 12:
{ checkConstant (yyvsp[-6].qtyp, yyvsp[-4].ntyp); ;
    break;}
case 13:
{ checkValueConstant (yyvsp[-9].qtyp, yyvsp[-7].ntyp, yyvsp[-3].expr) ; ;
    break;}
case 14:
{ context_enterFunctionDecl (); ;
    break;}
case 15:
{ declareStaticFunction (yyvsp[-2].ntyp); context_quietExitFunction (); 
     context_exitFunctionDecl (); ;
    break;}
case 16:
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 17:
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 19:
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 20:
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 21:
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 22:
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 23:
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
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 25:
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 26:
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 27:
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 28:
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 29:
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 30:
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 31:
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
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 33:
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 34:
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 35:
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 36:
{ setCurrentParams (yyvsp[-1].entrylist); ;
    break;}
case 37:
{ clearCurrentParams (); ;
    break;}
case 38:
{ declareCIter (yyvsp[-8].cname, yyvsp[-6].entrylist); ;
    break;}
case 39:
{ exprNode_checkMacroBody (yyvsp[-1].expr); ;
    break;}
case 40:
{ exprNode_checkIterBody (yyvsp[-1].expr); ;
    break;}
case 41:
{ exprNode_checkIterEnd (yyvsp[-1].expr); ;
    break;}
case 42:
{ exprChecks_checkEmptyMacroBody (); ;
    break;}
case 43:
{ declareFunction (yyvsp[0].ntyp); ;
    break;}
case 44:
{ setProcessingGlobMods (); ;
    break;}
case 45:
{ clearProcessingGlobMods (); ;
    break;}
case 46:
{ setProcessingGlobMods (); ;
    break;}
case 47:
{ clearProcessingGlobMods (); ;
    break;}
case 54:
{ ; ;
    break;}
case 55:
{ ; ;
    break;}
case 56:
{ globListAdd (yyvsp[0].sr, yyvsp[-1].tquallist); ;
    break;}
case 57:
{ yyval.sr = uentry_getSref (yyvsp[0].entry); ;
    break;}
case 58:
{ yyval.sr = globListUnrecognized (yyvsp[0].cname); ;
    break;}
case 59:
{ yyval.typequal = qual_createUndef (); ;
    break;}
case 60:
{ yyval.typequal = qual_createKilled (); ;
    break;}
case 61:
{ yyval.typequal = qual_createOut (); ;
    break;}
case 62:
{ yyval.typequal = qual_createIn (); ;
    break;}
case 63:
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 64:
{ yyval.tquallist = qualList_undefined; ;
    break;}
case 65:
{ yyval.tquallist = qualList_add (yyvsp[0].tquallist, yyvsp[-1].typequal); ;
    break;}
case 66:
{ setProcessingGlobalsList (); ;
    break;}
case 67:
{ unsetProcessingGlobals (); ;
    break;}
case 68:
{ setProcessingGlobalsList (); ;
    break;}
case 69:
{ unsetProcessingGlobals (); ;
    break;}
case 70:
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 73:
{ setProcessingGlobalsList (); ;
    break;}
case 74:
{ unsetProcessingGlobals (); ;
    break;}
case 75:
{ setProcessingGlobalsList (); ;
    break;}
case 76:
{ unsetProcessingGlobals (); ;
    break;}
case 77:
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 82:
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 83:
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 84:
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 85:
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 95:
{ yyval.sck = SP_ISONLY; ;
    break;}
case 96:
{ yyval.sck = SP_ISOBSERVER; ;
    break;}
case 97:
{ yyval.sck = SP_ISEXPOSED; ;
    break;}
case 98:
{ yyval.sck = SP_ISDEPENDENT; ;
    break;}
case 99:
{ yyval.sck = SP_ISOWNED; ;
    break;}
case 100:
{ yyval.sck = SP_ISSHARED; ;
    break;}
case 101:
{ yyval.sck = SP_ISNULL; ;
    break;}
case 102:
{ yyval.sck = SP_ISNOTNULL; ;
    break;}
case 103:
{
     context_setProtectVars (); 
     enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 104:
{ 
     setFunctionSpecialClause (yyvsp[-6].tok, yyvsp[-3].srset, yyvsp[-1].tok); 
     exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 105:
{
      context_setProtectVars (); 
      enterParamsTemp (); 
      sRef_setGlobalScopeSafe (); 
    ;
    break;}
case 106:
{ 
      setFunctionStateSpecialClause (yyvsp[-7].tok, yyvsp[-5].sck, yyvsp[-3].srset, yyvsp[-1].tok); 
      exitParamsTemp ();
      sRef_clearGlobalScopeSafe (); 
      context_releaseVars ();
    ;
    break;}
case 107:
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 108:
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 109:
{ checkDoneParams (); context_enterInnerContext (); ;
    break;}
case 110:
{  
     exprNode_checkFunctionBody (yyvsp[0].expr); yyval.expr = yyvsp[0].expr; 
     context_exitInner (yyvsp[0].expr); 
   ;
    break;}
case 111:
{ doneParams (); context_enterInnerContext (); ;
    break;}
case 112:
{
     context_exitInner (yyvsp[0].expr);
     exprNode_checkFunctionBody (yyvsp[0].expr); 
     yyval.expr = yyvsp[0].expr; /* old style */ 
   ;
    break;}
case 113:
{ 
     context_setFunctionDefined (exprNode_loc (yyvsp[0].expr)); 
     exprNode_checkFunction (context_getHeader (), yyvsp[0].expr); 
     context_exitFunction ();
   ;
    break;}
case 114:
{ yyval.srset = yyvsp[-2].srset; ;
    break;}
case 115:
{ yyval.srset = sRefSet_new (); ;
    break;}
case 116:
{ yyval.srset = yyvsp[-1].srset; ;
    break;}
case 117:
{ yyval.srset = sRefSet_new (); ;
    break;}
case 118:
{ yyval.sr = uentry_getSref (yyvsp[0].entry); checkModifiesId (yyvsp[0].entry); ;
    break;}
case 119:
{ yyval.sr = fixModifiesId (yyvsp[0].cname); ;
    break;}
case 120:
{ yyval.sr = modListArrayFetch (yyvsp[-2].sr, sRef_undefined); ;
    break;}
case 121:
{ yyval.sr = modListArrayFetch (yyvsp[-3].sr, yyvsp[-1].sr); ;
    break;}
case 122:
{ yyval.sr = modListPointer (yyvsp[0].sr); ;
    break;}
case 123:
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 124:
{ yyval.sr = modListFieldAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 125:
{ yyval.sr = modListArrowAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 126:
{ yyval.sr = yyvsp[0].sr; ;
    break;}
case 127:
{ yyval.sr = sRef_makeUnknown (); /* sRef_makeConstant ($1); ? */ ;
    break;}
case 128:
{ yyval.srset = sRefSet_single (yyvsp[0].sr); ;
    break;}
case 129:
{ yyval.srset = sRefSet_insert (yyvsp[-2].srset, yyvsp[0].sr); ;
    break;}
case 130:
{ yyval.sr = checkSpecClausesId (yyvsp[0].entry); ;
    break;}
case 131:
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 132:
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 133:
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-3].sr); ;
    break;}
case 134:
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 135:
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 136:
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 137:
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 138:
{ if (sRef_isValid (yyvsp[0].sr)) { yyval.srset = sRefSet_single (yyvsp[0].sr); } 
      else { yyval.srset = sRefSet_undefined; } 
    ;
    break;}
case 139:
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
{ yyval.expr = exprNode_fromIdentifier (yyvsp[0].entry); ;
    break;}
case 141:
{ yyval.expr = exprNode_fromUIO (yyvsp[0].cname); ;
    break;}
case 142:
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 143:
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 144:
{ yyval.expr = exprNode_fromIdentifier (coerceId (yyvsp[0].cname)); ;
    break;}
case 145:
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 147:
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 148:
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 149:
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 150:
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 151:
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 152:
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 153:
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 154:
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 155:
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 156:
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 158:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 159:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 160:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 161:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 162:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 163:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 164:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 165:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 166:
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 167:
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 168:
{ yyval.cstringlist = cstringList_add (yyvsp[-2].cstringlist, yyvsp[0].cname); ;
    break;}
case 169:
{ yyval.cstringlist = cstringList_single (yyvsp[0].cname); ;
    break;}
case 170:
{ yyval.expr = exprNode_offsetof (yyvsp[-5].qtyp, yyvsp[-2].cstringlist); ;
    break;}
case 171:
{ context_setProtectVars (); ;
    break;}
case 172:
{ context_sizeofReleaseVars (); yyval.expr = yyvsp[0].expr; ;
    break;}
case 173:
{ yyval.expr = exprNode_sizeofType (yyvsp[-1].qtyp); ;
    break;}
case 174:
{ yyval.expr = exprNode_sizeofExpr (yyvsp[0].expr); ;
    break;}
case 175:
{ yyval.expr = exprNode_alignofType (yyvsp[-1].qtyp); ;
    break;}
case 176:
{ yyval.expr = exprNode_alignofExpr (yyvsp[0].expr); ;
    break;}
case 178:
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 180:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 181:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 182:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 184:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 185:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 187:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 188:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 190:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 191:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 192:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 193:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 195:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 196:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 198:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 200:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 202:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 204:
{ exprNode_produceGuards (yyvsp[-1].expr); 
     context_enterAndClause (yyvsp[-1].expr); 
   ;
    break;}
case 205:
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitAndClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 207:
{ 
     exprNode_produceGuards (yyvsp[-1].expr);
     context_enterOrClause (yyvsp[-1].expr); 
   ;
    break;}
case 208:
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitOrClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 210:
{ exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 211:
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 212:
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); context_exitClause (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 214:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 215:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 216:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 217:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 218:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 219:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 220:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 221:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 222:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 223:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 224:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 226:
{ yyval.expr = exprNode_comma (yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 227:
{ yyval.expr = exprNode_undefined; ;
    break;}
case 230:
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 231:
{ doVaDcl (); yyval.expr = exprNode_makeError (); ;
    break;}
case 232:
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 233:
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 234:
{
               setProcessingVars (yyvsp[-3].qtyp); 
     processNamedDecl (yyvsp[-1].ntyp); ;
    break;}
case 235:
{ unsetProcessingVars (); yyval.expr = yyvsp[-2].expr; ;
    break;}
case 236:
{ setProcessingVars (yyvsp[-4].qtyp); processNamedDecl (yyvsp[-2].ntyp); 
        ;
    break;}
case 237:
{ yyval.expr = exprNode_concat (yyvsp[-2].expr, exprNode_makeInitialization (yyvsp[-8].ntyp, yyvsp[-3].expr)); 
     unsetProcessingVars ();
   ;
    break;}
case 238:
{ processNamedDecl (yyvsp[-1].ntyp); yyval.expr = exprNode_makeError (); ;
    break;}
case 239:
{ processNamedDecl (yyvsp[-2].ntyp); ;
    break;}
case 240:
{ yyval.expr = exprNode_makeInitialization (yyvsp[-5].ntyp, yyvsp[0].expr); ;
    break;}
case 241:
{ setProcessingTypedef (yyvsp[0].qtyp); ;
    break;}
case 242:
{ unsetProcessingTypedef (); ;
    break;}
case 243:
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 244:
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 245:
{ g_expectingTypeName = TRUE; ;
    break;}
case 246:
{ g_expectingTypeName = TRUE; context_pushLoc (); ;
    break;}
case 247:
{ ; ;
    break;}
case 248:
{ ; ;
    break;}
case 249:
{ ; ;
    break;}
case 250:
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 251:
{ yyval.expr = exprNode_concat (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 252:
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 253:
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-2].tok, yyvsp[-1].alist); ;
    break;}
case 254:
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-3].tok, yyvsp[-2].alist); ;
    break;}
case 255:
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 256:
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 257:
{ setStorageClass (SCEXTERN); yyval.typequal = qual_createExtern (); ;
    break;}
case 258:
{ yyval.typequal = qual_createInline (); ;
    break;}
case 259:
{ setStorageClass (SCSTATIC); yyval.typequal = qual_createStatic (); ;
    break;}
case 260:
{ yyval.typequal = qual_createAuto (); ;
    break;}
case 261:
{ yyval.typequal = qual_createRegister (); ;
    break;}
case 262:
{ yyval.typequal = qual_createConst (); ;
    break;}
case 263:
{ yyval.typequal = qual_createVolatile (); ;
    break;}
case 264:
{ yyval.typequal = qual_createOut (); ;
    break;}
case 265:
{ yyval.typequal = qual_createIn (); ;
    break;}
case 266:
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 267:
{ yyval.typequal = qual_createSpecial (); ;
    break;}
case 268:
{ yyval.typequal = qual_createOwned (); ;
    break;}
case 269:
{ yyval.typequal = qual_createDependent (); ;
    break;}
case 270:
{ yyval.typequal = qual_createYield (); ;
    break;}
case 271:
{ yyval.typequal = qual_createTemp (); ;
    break;}
case 272:
{ yyval.typequal = qual_createOnly (); ;
    break;}
case 273:
{ yyval.typequal = qual_createKeep (); ;
    break;}
case 274:
{ yyval.typequal = qual_createKept (); ;
    break;}
case 275:
{ yyval.typequal = qual_createShared (); ;
    break;}
case 276:
{ yyval.typequal = qual_createUnique (); ;
    break;}
case 277:
{ yyval.typequal = qual_createExits (); ;
    break;}
case 278:
{ yyval.typequal = qual_createMayExit (); ;
    break;}
case 279:
{ yyval.typequal = qual_createTrueExit (); ;
    break;}
case 280:
{ yyval.typequal = qual_createFalseExit (); ;
    break;}
case 281:
{ yyval.typequal = qual_createNeverExit (); ;
    break;}
case 282:
{ yyval.typequal = qual_createNull (); ;
    break;}
case 283:
{ yyval.typequal = qual_createRelNull (); ;
    break;}
case 284:
{ yyval.typequal = qual_createReturned (); ;
    break;}
case 285:
{ yyval.typequal = qual_createExposed (); ;
    break;}
case 286:
{ yyval.typequal = qual_createObserver (); ;
    break;}
case 287:
{ yyval.typequal = qual_createChecked (); ;
    break;}
case 288:
{ yyval.typequal = qual_createCheckMod (); ;
    break;}
case 289:
{ yyval.typequal = qual_createUnchecked (); ;
    break;}
case 290:
{ yyval.typequal = qual_createCheckedStrict (); ;
    break;}
case 291:
{ yyval.typequal = qual_createTrueNull (); ;
    break;}
case 292:
{ yyval.typequal = qual_createFalseNull (); ;
    break;}
case 293:
{ yyval.typequal = qual_createUnused (); ;
    break;}
case 294:
{ yyval.typequal = qual_createExternal (); ;
    break;}
case 295:
{ yyval.typequal = qual_createSef (); ;
    break;}
case 296:
{ yyval.typequal = qual_createAbstract (); ;
    break;}
case 297:
{ yyval.typequal = qual_createConcrete (); ;
    break;}
case 298:
{ yyval.typequal = qual_createMutable (); ;
    break;}
case 299:
{ yyval.typequal = qual_createImmutable (); ;
    break;}
case 300:
{ yyval.typequal = qual_createNotNull (); ;
    break;}
case 301:
{ yyval.typequal = qual_createRefCounted (); ;
    break;}
case 302:
{ yyval.typequal = qual_createRefs (); ;
    break;}
case 303:
{ yyval.typequal = qual_createKillRef (); ;
    break;}
case 304:
{ yyval.typequal = qual_createRelDef (); ;
    break;}
case 305:
{ yyval.typequal = qual_createNewRef (); ;
    break;}
case 306:
{ yyval.typequal = qual_createTempRef (); ;
    break;}
case 307:
{ yyval.typequal = qual_createNullTerminated (); ;
    break;}
case 308:
{ yyval.typequal = qual_createShort (); ;
    break;}
case 309:
{ yyval.typequal = qual_createLong (); ;
    break;}
case 310:
{ yyval.typequal = qual_createSigned (); ;
    break;}
case 311:
{ yyval.typequal = qual_createUnsigned (); ;
    break;}
case 318:
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 319:
{ yyval.ctyp = ctype_anyintegral; ;
    break;}
case 320:
{ yyval.ctyp = ctype_unsignedintegral; ;
    break;}
case 321:
{ yyval.ctyp = ctype_signedintegral; ;
    break;}
case 325:
{ yyval.ctyp = ctype_fromQual (yyvsp[-1].typequal); ;
    break;}
case 326:
{ yyval.qtyp = qtype_resolve (yyvsp[-1].qtyp); ;
    break;}
case 327:
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 328:
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-3].qtyp, yyvsp[-1].qtyp); ;
    break;}
case 330:
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-2].qtyp, yyvsp[0].qtyp); ;
    break;}
case 331:
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 332:
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 333:
{ yyval.qtyp = qtype_combine (yyvsp[0].qtyp, yyvsp[-1].ctyp); ;
    break;}
case 334:
{ yyval.qtyp = qtype_unknown (); ;
    break;}
case 335:
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 336:
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 337:
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 338:
{ yyval.ctyp = declareStruct (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 339:
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 340:
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 341:
{ yyval.ctyp = declareUnion (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 342:
{ yyval.ctyp = declareStruct (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 343:
{ yyval.ctyp = declareUnion (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 344:
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 345:
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 346:
{ yyval.ctyp = declareUnnamedStruct (yyvsp[-3].flist); ;
    break;}
case 347:
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 348:
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 349:
{ yyval.ctyp = declareUnnamedUnion (yyvsp[-3].flist); ;
    break;}
case 350:
{ yyval.ctyp = ctype_createUnnamedStruct (uentryList_new ()); ;
    break;}
case 351:
{ yyval.ctyp = ctype_createUnnamedUnion (uentryList_new ()); ;
    break;}
case 352:
{ yyval.ctyp = handleStruct (yyvsp[-1].cname); ;
    break;}
case 353:
{ yyval.ctyp = handleUnion (yyvsp[-1].cname); ;
    break;}
case 354:
{ g_expectingTypeName = FALSE; ;
    break;}
case 356:
{ yyval.flist = uentryList_undefined; /* bogus! */ ;
    break;}
case 357:
{ yyval.flist = uentryList_mergeFields (yyvsp[-1].flist, yyvsp[0].flist); ;
    break;}
case 358:
{ yyval.flist = fixUentryList (yyvsp[-2].ntyplist, yyvsp[-4].qtyp); ;
    break;}
case 359:
{ yyval.flist = fixUnnamedDecl (yyvsp[-2].qtyp); ;
    break;}
case 360:
{ yyval.ntyplist = idDeclList_singleton (yyvsp[-1].ntyp); ;
    break;}
case 361:
{ yyval.ntyplist = idDeclList_add (yyvsp[-3].ntyplist, yyvsp[-1].ntyp); ;
    break;}
case 362:
{ yyval.ntyp = yyvsp[0].ntyp; ;
    break;}
case 363:
{ yyval.ntyp = idDecl_undefined; ;
    break;}
case 364:
{ yyval.ntyp = yyvsp[-3].ntyp; ;
    break;}
case 365:
{ yyval.ctyp = declareUnnamedEnum (yyvsp[-2].enumnamelist); ;
    break;}
case 366:
{ context_pushLoc (); ;
    break;}
case 367:
{ context_popLoc (); yyval.ctyp = declareEnum (yyvsp[-5].cname, yyvsp[-2].enumnamelist); ;
    break;}
case 368:
{ yyval.ctyp = handleEnum (yyvsp[-1].cname); ;
    break;}
case 369:
{ yyval.enumnamelist = enumNameList_single (yyvsp[0].cname); ;
    break;}
case 370:
{ yyval.enumnamelist = enumNameList_push (yyvsp[-2].enumnamelist, yyvsp[0].cname); ;
    break;}
case 372:
{ uentry ue = uentry_makeEnumConstant (yyvsp[0].cname, ctype_unknown);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[0].cname;
   ;
    break;}
case 373:
{ uentry ue = uentry_makeEnumInitializedConstant (yyvsp[-3].cname, ctype_unknown, yyvsp[0].expr);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[-3].cname; 
   ;
    break;}
case 375:
{ yyval.ntyp = idDecl_create (cstring_undefined, qtype_create (yyvsp[0].ctyp)); ;
    break;}
case 376:
{ 
     qtype qt = qtype_unknown ();

     qtype_adjustPointers (yyvsp[-1].count, qt);
     yyval.ntyp = idDecl_create (cstring_copy (LastIdentifier ()), qt);
   ;
    break;}
case 377:
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 379:
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 380:
{ yyval.entrylist = handleParamTypeList (yyvsp[0].entrylist); ;
    break;}
case 381:
{ yyval.entrylist = handleParamIdList (yyvsp[0].entrylist); ;
    break;}
case 382:
{ /* ignored for now */; ;
    break;}
case 383:
{ ; ;
    break;}
case 384:
{ ; ;
    break;}
case 385:
{ ; ;
    break;}
case 386:
{ yyval.count = 1; ;
    break;}
case 387:
{ yyval.count = 1; ;
    break;}
case 388:
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 389:
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 391:
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 392:
{ yyval.entrylist = uentryList_single (uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 393:
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 394:
{ yyval.entrylist = uentryList_single (uentry_makeElipsisMarker ()); ;
    break;}
case 396:
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 397:
{ storeLoc (); ;
    break;}
case 398:
{ yyval.entrylist = uentryList_single (yyvsp[0].oentry); ;
    break;}
case 399:
{ storeLoc (); ;
    break;}
case 400:
{ yyval.entrylist = uentryList_add (yyvsp[-3].entrylist, yyvsp[0].oentry); ;
    break;}
case 401:
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
{ yyval.qtyp = qtype_newBase (yyvsp[-1].qtyp, yyvsp[0].ctyp); ;
    break;}
case 405:
{ yyval.ctyp = ctype_adjustPointers (yyvsp[0].count, ctype_unknown); ;
    break;}
case 407:
{ yyval.ctyp = ctype_adjustPointers (yyvsp[-1].count, yyvsp[0].ctyp); ;
    break;}
case 408:
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 410:
{ yyval.ctyp = ctype_expectFunction (yyvsp[-1].ctyp); ;
    break;}
case 411:
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 412:
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 413:
{ yyval.ctyp = ctype_makeArray (yyvsp[-2].ctyp); ;
    break;}
case 414:
{ yyval.ctyp = ctype_makeArray (yyvsp[-3].ctyp); ;
    break;}
case 415:
{ yyval.ctyp = ctype_makeFunction (ctype_unknown, uentryList_makeMissingParams ()); ;
    break;}
case 416:
{ yyval.ctyp = ctype_makeParamsFunction (ctype_unknown, yyvsp[-1].entrylist); ;
    break;}
case 417:
{ yyval.ctyp = ctype_makeFunction (yyvsp[-3].ctyp, uentryList_makeMissingParams ()); ;
    break;}
case 418:
{ yyval.ctyp = ctype_makeParamsFunction (yyvsp[-4].ctyp, yyvsp[-1].entrylist); ;
    break;}
case 428:
{yyval.expr = yyvsp[0].expr; printf ("Doing stmt lclintassertion\n"); ;
    break;}
case 429:
{ printf(" QSETBUFFERSIZE id CCONSTANT HEllo World\n");  uentry_setBufferSize(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 430:
{ printf(" QSETSTRINGLENGTH id CCONSTANT HEllo World\n");  uentry_setStringLength(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 431:
{ yyval.expr = exprNode_labelMarker (yyvsp[0].cname); ;
    break;}
case 432:
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 435:
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 436:
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 437:
{ yyval.expr = exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr); ;
    break;}
case 438:
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 439:
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 440:
{ context_setProtectVars (); ;
    break;}
case 441:
{ context_sizeofReleaseVars (); ;
    break;}
case 442:
{ yyval.expr = exprNode_forPred (yyvsp[-7].expr, yyvsp[-5].expr, yyvsp[-2].expr); 
     context_enterForClause (yyvsp[-5].expr); ;
    break;}
case 443:
{ setProcessingIterVars (yyvsp[-2].entry); ;
    break;}
case 444:
{ yyval.expr = exprNode_iterStart (yyvsp[-5].entry, yyvsp[-1].alist); ;
    break;}
case 445:
{ yyval.expr = exprNode_createId (yyvsp[0].entry); ;
    break;}
case 449:
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 457:
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 458:
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 459:
{ /* don't: context_exitTrueClause ($1, $2); */
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 460:
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 461:
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 472:
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 474:
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 475:
{ yyval.expr = exprNode_labelMarker (yyvsp[-1].cname); printf("labeldStmt: newid TCOLON");;
    break;}
case 476:
{ yyval.expr = exprNode_notReached (yyvsp[0].expr); printf("labeldStmt: QNOTREACHED stmt");;
    break;}
case 477:
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 478:
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, FALSE); ;
    break;}
case 479:
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 480:
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, TRUE); ;
    break;}
case 481:
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 482:
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, FALSE); ;
    break;}
case 483:
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 484:
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, TRUE); ;
    break;}
case 485:
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 486:
{ yyval.expr = yyvsp[0].expr; context_exitInner (yyvsp[0].expr); ;
    break;}
case 487:
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 488:
{ context_enterInnerContext (); ;
    break;}
case 489:
{ context_exitInnerPlain (); ;
    break;}
case 490:
{ context_enterStructInnerContext (); ;
    break;}
case 491:
{ context_exitStructInnerContext (); ;
    break;}
case 492:
{ context_exitInnerSafe (); ;
    break;}
case 493:
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 494:
{ yyval.expr = exprNode_notReached (exprNode_createTok (yyvsp[0].tok)); ;
    break;}
case 495:
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 496:
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 497:
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 498:
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 499:
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 500:
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (exprNode_concat (yyvsp[-3].expr, yyvsp[-2].expr), 
							lltok_getLoc (yyvsp[-1].tok))); 
   ;
    break;}
case 501:
{ yyval.expr = exprNode_makeBlock (yyvsp[0].expr); ;
    break;}
case 502:
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 503:
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 504:
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 505:
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 507:
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 508:
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 509:
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 510:
{ yyval.expr = yyvsp[0].expr; printf("stmt\n"); ;
    break;}
case 511:
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); printf("StmTList stmt\n"); ;
    break;}
case 512:
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 513:
{ yyval.expr = exprNode_statement (yyvsp[-1].expr); ;
    break;}
case 514:
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 515:
{ yyval.expr = exprNode_statement (yyvsp[-1].expr); ;
    break;}
case 516:
{ yyval.expr = exprNode_checkExpr (yyvsp[0].expr); ;
    break;}
case 517:
{ yyval.expr = yyvsp[-1].expr; exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 518:
{ 
     context_exitTrueClause (yyvsp[-1].expr, yyvsp[0].expr);
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 519:
{ context_enterFalseClause (yyvsp[-2].expr); ;
    break;}
case 520:
{
     context_exitClause (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr);
     yyval.expr = exprNode_ifelse (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr); 
   ;
    break;}
case 521:
{ context_enterSwitch (yyvsp[0].expr); ;
    break;}
case 522:
{ yyval.expr = exprNode_switch (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 523:
{ yyval.expr = exprNode_whilePred (yyvsp[-1].expr); context_enterWhileClause (yyvsp[-1].expr); ;
    break;}
case 524:
{ yyval.expr = exprNode_whilePred(yyvsp[-1].expr); ;
    break;}
case 525:
{ context_enterIterClause (); ;
    break;}
case 526:
{ setProcessingIterVars (yyvsp[-3].entry); ;
    break;}
case 527:
{ 
     yyval.expr = exprNode_iter (yyvsp[-9].entry, yyvsp[-4].alist, yyvsp[-2].expr, yyvsp[-1].entry); 

   ;
    break;}
case 528:
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 529:
{ nextIterParam (); ;
    break;}
case 530:
{ yyval.alist = exprNodeList_push (yyvsp[-3].alist, yyvsp[0].expr); ;
    break;}
case 531:
{ yyval.expr = exprNode_iterExpr (yyvsp[0].expr); ;
    break;}
case 532:
{ yyval.expr = exprNode_iterId (yyvsp[0].entry); ;
    break;}
case 533:
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
case 534:
{ yyval.expr = exprNode_iterNewId (yyvsp[0].cname); ;
    break;}
case 536:
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 538:
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 539:
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 540:
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 541:
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 542:
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 543:
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 544:
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 545:
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 547:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 548:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 549:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 550:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 551:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 552:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 553:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 554:
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 555:
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 557:
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 559:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 560:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 561:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 563:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 564:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 566:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 567:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 569:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 570:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 571:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 572:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 574:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 575:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 577:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 579:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 581:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 583:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 585:
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 587:
{ context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 588:
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 589:
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 591:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 592:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 593:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 594:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 595:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 596:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 597:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 598:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 599:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 600:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 601:
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 602:
{ yyval.entry = yyvsp[0].entry; ;
    break;}
case 603:
{ yyval.entry = uentry_undefined; ;
    break;}
case 604:
{ context_enterDoWhileClause (); yyval.tok = yyvsp[0].tok; ;
    break;}
case 605:
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 606:
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr)); ;
    break;}
case 607:
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 608:
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 609:
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr)); ;
    break;}
case 610:
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 611:
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 612:
{ yyval.expr = exprNode_goto (yyvsp[-1].cname); ;
    break;}
case 613:
{ yyval.expr = exprNode_continue (yyvsp[-1].tok, BADTOK); ;
    break;}
case 614:
{ yyval.expr = exprNode_continue (yyvsp[-2].tok, QINNERCONTINUE); ;
    break;}
case 615:
{ yyval.expr = exprNode_break (yyvsp[-1].tok, BADTOK); ;
    break;}
case 616:
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSWITCHBREAK); ;
    break;}
case 617:
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QLOOPBREAK); ;
    break;}
case 618:
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QINNERBREAK); ;
    break;}
case 619:
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSAFEBREAK); ;
    break;}
case 620:
{ yyval.expr = exprNode_nullReturn (yyvsp[-1].tok); ;
    break;}
case 621:
{ yyval.expr = exprNode_return (yyvsp[-1].expr); ;
    break;}
case 623:
{ ; ;
    break;}
case 626:
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 627:
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 628:
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 629:
{ yyval.cname = yyvsp[0].cname; ;
    break;}
case 631:
{ yyval.ctyp = ctype_unknown; ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */


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
  





