
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



#define	YYFINAL		1182
#define	YYFLAG		-32768
#define	YYNTBASE	186

#define YYTRANSLATE(x) ((unsigned)(x) <= 440 ? yytranslate[x] : 418)

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
    64,    71,    75,    82,    83,    91,    92,   101,   103,   110,
   114,   121,   122,   129,   130,   138,   139,   140,   151,   155,
   159,   163,   166,   168,   169,   172,   174,   176,   177,   183,
   184,   185,   188,   190,   193,   195,   198,   200,   203,   205,
   209,   212,   214,   216,   218,   220,   222,   224,   226,   227,
   230,   231,   238,   239,   246,   248,   250,   251,   252,   258,
   259,   265,   267,   269,   270,   272,   273,   274,   278,   279,
   283,   285,   287,   289,   291,   293,   295,   297,   299,   301,
   303,   305,   307,   309,   311,   313,   315,   317,   318,   326,
   327,   336,   338,   342,   343,   347,   348,   352,   355,   359,
   362,   365,   367,   369,   371,   375,   380,   383,   387,   391,
   395,   397,   399,   401,   405,   407,   409,   413,   418,   421,
   425,   429,   433,   435,   439,   441,   443,   445,   449,   451,
   453,   455,   460,   464,   469,   476,   482,   488,   491,   494,
   496,   500,   502,   505,   508,   511,   514,   517,   520,   523,
   526,   528,   530,   534,   536,   546,   547,   551,   556,   559,
   564,   567,   569,   574,   576,   580,   584,   588,   590,   594,
   598,   600,   604,   608,   610,   614,   618,   622,   626,   628,
   632,   636,   638,   642,   644,   648,   650,   654,   656,   657,
   662,   664,   665,   670,   672,   673,   674,   682,   684,   688,
   692,   696,   700,   704,   708,   712,   716,   720,   724,   728,
   730,   734,   735,   737,   739,   741,   743,   745,   749,   750,
   760,   761,   773,   776,   777,   784,   785,   793,   798,   803,
   804,   805,   808,   810,   815,   816,   821,   823,   827,   832,
   834,   838,   840,   842,   844,   846,   848,   851,   854,   857,
   860,   863,   866,   869,   872,   875,   878,   881,   884,   887,
   890,   893,   896,   899,   902,   905,   908,   911,   914,   917,
   920,   923,   926,   929,   932,   935,   938,   941,   944,   947,
   950,   953,   956,   959,   962,   965,   968,   971,   974,   977,
   980,   983,   986,   988,   990,   992,   994,   997,  1000,  1003,
  1006,  1009,  1012,  1015,  1018,  1021,  1024,  1027,  1030,  1033,
  1036,  1040,  1042,  1047,  1049,  1053,  1056,  1059,  1062,  1063,
  1065,  1066,  1067,  1079,  1080,  1081,  1093,  1100,  1107,  1108,
  1109,  1120,  1121,  1122,  1133,  1139,  1145,  1150,  1155,  1156,
  1158,  1160,  1163,  1169,  1173,  1176,  1181,  1183,  1187,  1192,
  1199,  1200,  1209,  1214,  1216,  1220,  1223,  1225,  1230,  1232,
  1234,  1237,  1240,  1242,  1245,  1247,  1250,  1252,  1254,  1256,
  1259,  1261,  1264,  1267,  1271,  1273,  1277,  1279,  1283,  1285,
  1287,  1291,  1292,  1295,  1296,  1301,  1306,  1308,  1310,  1313,
  1315,  1317,  1320,  1321,  1323,  1329,  1332,  1336,  1340,  1345,
  1349,  1354,  1359,  1365,  1367,  1369,  1371,  1373,  1375,  1377,
  1379,  1381,  1383,  1385,  1390,  1395,  1400,  1403,  1405,  1407,
  1409,  1412,  1415,  1423,  1430,  1433,  1434,  1435,  1446,  1447,
  1454,  1456,  1458,  1460,  1462,  1465,  1467,  1469,  1471,  1473,
  1475,  1477,  1479,  1483,  1485,  1488,  1491,  1494,  1496,  1498,
  1500,  1502,  1504,  1506,  1508,  1510,  1512,  1514,  1518,  1520,
  1522,  1525,  1528,  1529,  1534,  1535,  1541,  1542,  1546,  1547,
  1552,  1556,  1559,  1563,  1564,  1565,  1566,  1567,  1568,  1570,
  1573,  1576,  1580,  1583,  1587,  1591,  1596,  1599,  1602,  1606,
  1610,  1615,  1617,  1620,  1622,  1625,  1627,  1630,  1632,  1635,
  1637,  1640,  1642,  1647,  1650,  1651,  1657,  1658,  1665,  1670,
  1675,  1676,  1677,  1688,  1690,  1691,  1696,  1698,  1700,  1702,
  1704,  1706,  1710,  1712,  1717,  1721,  1726,  1733,  1739,  1745,
  1748,  1751,  1753,  1756,  1759,  1762,  1765,  1768,  1771,  1774,
  1777,  1779,  1781,  1786,  1788,  1792,  1796,  1800,  1802,  1806,
  1810,  1812,  1816,  1820,  1822,  1826,  1830,  1834,  1838,  1840,
  1844,  1848,  1850,  1854,  1856,  1860,  1862,  1866,  1868,  1872,
  1874,  1878,  1880,  1881,  1882,  1890,  1892,  1896,  1900,  1904,
  1908,  1912,  1916,  1920,  1924,  1928,  1932,  1936,  1938,  1939,
  1941,  1944,  1952,  1955,  1958,  1966,  1973,  1976,  1980,  1983,
  1987,  1990,  1994,  1998,  2002,  2006,  2009,  2013,  2014,  2016,
  2018,  2020,  2022,  2024,  2026,  2028,  2030
};

static const short yyrhs[] = {    -1,
   187,     0,   188,     0,   187,   188,     0,   244,   414,     0,
   189,     0,   190,     0,   200,     0,   203,     0,   281,     0,
     1,     0,    75,   301,   314,   324,   314,   414,   289,    88,
     0,    75,   301,   314,   324,   314,    23,   289,   294,   293,
   414,    88,     0,     0,    76,   191,   192,   414,    88,     0,
   193,     0,   301,   314,   193,     0,   197,     0,   328,   197,
     0,   416,     0,   289,    24,   314,   324,   289,    25,     0,
   194,    26,    27,     0,   194,    26,   289,   280,    27,   314,
     0,     0,   194,   290,    24,    25,   195,   205,   207,     0,
     0,   194,   290,    24,   325,    25,   196,   205,   207,     0,
   416,     0,   289,    24,   314,   193,   289,    25,     0,   197,
    26,    27,     0,   197,    26,   289,   280,    27,   314,     0,
     0,   197,   290,    24,    25,   198,   211,     0,     0,   197,
   290,    24,   325,    25,   199,   211,     0,     0,     0,    77,
   416,    24,   325,    25,   201,   211,   202,   414,    88,     0,
    89,   355,    92,     0,    90,   342,    92,     0,    91,   343,
    92,     0,    89,    92,     0,   240,     0,     0,   206,   213,
     0,   208,     0,   209,     0,     0,   210,   176,   415,   182,
    88,     0,     0,     0,   212,   214,     0,   221,     0,   215,
   221,     0,   224,     0,   215,   224,     0,   237,     0,   237,
   215,     0,   217,     0,   216,    21,   217,     0,   220,   218,
     0,   415,     0,   180,     0,    86,     0,    87,     0,   116,
     0,   117,     0,   130,     0,     0,   219,   220,     0,     0,
    72,   222,   375,   414,    88,   227,     0,     0,    72,   223,
   216,   414,    88,   227,     0,    74,     0,   228,     0,     0,
     0,    72,   225,   375,   414,   227,     0,     0,    72,   226,
   216,   414,   227,     0,    74,     0,   230,     0,     0,   228,
     0,     0,     0,    73,   229,   245,     0,     0,    73,   231,
   246,     0,    78,     0,    79,     0,    80,     0,    81,     0,
    82,     0,    88,     0,    88,     0,    83,     0,    84,     0,
   119,     0,   137,     0,   135,     0,   133,     0,   132,     0,
   121,     0,   138,     0,   150,     0,     0,   232,   314,   238,
   251,   414,   234,   289,     0,     0,   235,   314,   236,   239,
   251,   414,   233,   289,     0,   324,     0,   301,   314,   324,
     0,     0,    19,   242,   371,     0,     0,   375,   243,   364,
     0,   204,   241,     0,   249,   414,    88,     0,   414,    88,
     0,   249,   414,     0,   414,     0,   415,     0,   180,     0,
   247,    26,    27,     0,   247,    26,   248,    27,     0,    34,
   247,     0,    24,   247,    25,     0,   247,    28,   416,     0,
   247,    44,   416,     0,   247,     0,   182,     0,   247,     0,
   249,    21,   247,     0,   415,     0,   180,     0,   250,    26,
    27,     0,   250,    26,   248,    27,     0,    34,   250,     0,
    24,   250,    25,     0,   250,    28,   416,     0,   250,    44,
   416,     0,   250,     0,   251,    21,   250,     0,   415,     0,
   180,     0,   182,     0,    24,   278,    25,     0,   181,     0,
   111,     0,   252,     0,   253,    26,   278,    27,     0,   253,
    24,    25,     0,   253,    24,   254,    25,     0,    70,    24,
   277,    21,   336,    25,     0,   253,   314,    28,   416,   289,
     0,   253,   314,    44,   416,   289,     0,   253,    47,     0,
   253,    48,     0,   277,     0,   254,    21,   277,     0,   253,
     0,    47,   255,     0,    48,   255,     0,    29,   261,     0,
    34,   261,     0,    33,   261,     0,    32,   261,     0,    31,
   261,     0,    30,   261,     0,   258,     0,   257,     0,   256,
    28,   416,     0,   416,     0,    46,   289,    24,   336,   314,
    21,   256,    25,   289,     0,     0,   289,   259,   260,     0,
    42,    24,   336,    25,     0,    42,   255,     0,    43,    24,
   336,    25,     0,    43,   255,     0,   255,     0,    24,   336,
    25,   261,     0,   261,     0,   262,    34,   261,     0,   262,
    35,   261,     0,   262,    36,   261,     0,   262,     0,   263,
    33,   262,     0,   263,    32,   262,     0,   263,     0,   264,
    49,   263,     0,   264,    50,   263,     0,   264,     0,   265,
    37,   264,     0,   265,    38,   264,     0,   265,    51,   264,
     0,   265,    52,   264,     0,   265,     0,   266,    53,   265,
     0,   266,    54,   265,     0,   266,     0,   267,    29,   266,
     0,   267,     0,   268,    39,   267,     0,   268,     0,   269,
    40,   268,     0,   269,     0,     0,   270,    55,   271,   269,
     0,   270,     0,     0,   272,    56,   273,   270,     0,   272,
     0,     0,     0,   272,    41,   275,   278,    22,   276,   274,
     0,   274,     0,   255,    23,   277,     0,   255,    57,   277,
     0,   255,    58,   277,     0,   255,    59,   277,     0,   255,
    60,   277,     0,   255,    61,   277,     0,   255,    62,   277,
     0,   255,    63,   277,     0,   255,    64,   277,     0,   255,
    65,   277,     0,   255,    66,   277,     0,   277,     0,   278,
    21,   277,     0,     0,   278,     0,   274,     0,   282,     0,
    71,     0,   287,     0,   301,   289,    18,     0,     0,   301,
   314,   324,   314,   283,   289,   293,    18,   289,     0,     0,
   301,   314,   324,   314,    23,   284,   289,   294,   293,    18,
   289,     0,   324,   314,     0,     0,   324,   314,    23,   286,
   289,   294,     0,     0,    45,   301,   288,   314,   291,   289,
    18,     0,    45,   301,   289,    18,     0,    45,   291,   289,
    18,     0,     0,     0,   292,   289,     0,   285,     0,   291,
    21,   314,   285,     0,     0,   293,    21,   314,   285,     0,
   277,     0,    19,   295,    20,     0,    19,   295,    21,    20,
     0,   294,     0,   295,    21,   294,     0,   112,     0,   110,
     0,   113,     0,   114,     0,   115,     0,   108,   289,     0,
   109,   289,     0,   116,   289,     0,   117,   289,     0,   130,
   289,     0,   131,   289,     0,   132,   289,     0,   133,   289,
     0,   118,   289,     0,   120,   289,     0,   119,   289,     0,
   128,   289,     0,   129,   289,     0,   121,   289,     0,   123,
   289,     0,   139,   289,     0,   140,   289,     0,   142,   289,
     0,   143,   289,     0,   141,   289,     0,   136,   289,     0,
   151,   289,     0,   134,   289,     0,   135,   289,     0,   137,
   289,     0,   124,   289,     0,   127,   289,     0,   125,   289,
     0,   126,   289,     0,   156,   289,     0,   157,   289,     0,
   148,   289,     0,   158,   289,     0,   149,   289,     0,   152,
   289,     0,   153,   289,     0,   154,   289,     0,   155,   289,
     0,   150,   289,     0,   159,   289,     0,   160,   289,     0,
   163,   289,     0,   164,   289,     0,   161,   289,     0,   162,
   289,     0,   175,   289,     0,   147,     0,   144,     0,   145,
     0,   146,     0,   165,   314,     0,   167,   314,     0,   166,
   314,     0,   168,   314,     0,   169,   314,     0,   170,   314,
     0,   171,   314,     0,   172,   314,     0,   173,   314,     0,
   174,   314,     0,   417,   314,     0,   305,   314,     0,   319,
   314,     0,   298,   314,     0,   289,   301,   289,     0,   303,
     0,   303,    85,   302,    88,     0,   336,     0,   336,    21,
   302,     0,   296,   304,     0,   297,   304,     0,   299,   304,
     0,     0,   301,     0,     0,     0,   314,    67,   416,   289,
    19,   306,   368,   315,   369,   307,    20,     0,     0,     0,
   314,    68,   416,   289,    19,   308,   368,   315,   369,   309,
    20,     0,   314,    67,   416,   289,    19,    20,     0,   314,
    68,   416,   289,    19,    20,     0,     0,     0,   314,    67,
   289,    19,   310,   368,   315,   369,   311,    20,     0,     0,
     0,   314,    68,   289,    19,   312,   368,   315,   369,   313,
    20,     0,   314,    67,   289,    19,    20,     0,   314,    68,
   289,    19,    20,     0,   314,    67,   416,   314,     0,   314,
    68,   416,   314,     0,     0,   316,     0,   203,     0,   315,
   316,     0,   301,   314,   317,   289,    18,     0,   301,   289,
    18,     0,   318,   314,     0,   317,    21,   318,   314,     0,
   324,     0,    22,   289,   280,     0,   324,    22,   289,   280,
     0,   314,    69,    19,   321,    20,   289,     0,     0,   314,
    69,   416,    19,   320,   321,    20,   289,     0,   314,    69,
   416,   289,     0,   322,     0,   321,    21,   322,     0,   321,
    21,     0,   416,     0,   416,    23,   289,   280,     0,   194,
     0,   338,     0,   328,   185,     0,   328,   323,     0,   194,
     0,   328,   194,     0,   331,     0,   314,   329,     0,   108,
     0,   109,     0,   326,     0,   327,   326,     0,    34,     0,
    34,   327,     0,    34,   328,     0,    34,   327,   328,     0,
   330,     0,   330,    21,     5,     0,   416,     0,   330,    21,
   416,     0,     5,     0,   332,     0,   332,    21,     5,     0,
     0,   333,   335,     0,     0,   332,    21,   334,   335,     0,
   289,   301,   323,   289,     0,   416,     0,   300,     0,   300,
   337,     0,   328,     0,   339,     0,   328,   339,     0,     0,
   339,     0,   289,    24,   314,   337,    25,     0,    26,    27,
     0,    26,   280,    27,     0,   339,    26,    27,     0,   339,
    26,   280,    27,     0,   289,    24,    25,     0,   289,    24,
   331,    25,     0,   339,   289,    24,    25,     0,   339,   289,
    24,   331,    25,     0,   357,     0,   358,     0,   361,     0,
   364,     0,   377,     0,   380,     0,   411,     0,   385,     0,
   413,     0,   341,     0,   176,   415,   182,    88,     0,   177,
   415,   182,    88,     0,   178,   415,   182,    88,     0,    22,
   416,     0,   344,     0,   342,     0,   351,     0,   344,   351,
     0,   384,   344,     0,   410,   356,    11,    24,   278,    25,
    18,     0,   410,   356,    11,    24,   278,    25,     0,   346,
   351,     0,     0,     0,    13,    24,   279,    18,   279,    18,
   347,   279,   348,    25,     0,     0,   183,   366,    24,   350,
   388,    25,     0,   184,     0,   357,     0,   358,     0,   361,
     0,   353,   375,     0,   353,     0,   354,     0,   377,     0,
   352,     0,   345,     0,   349,     0,   413,     0,    24,   351,
    25,     0,     1,     0,   379,   351,     0,   366,    19,     0,
   370,    20,     0,   356,     0,   374,     0,   357,     0,   358,
     0,   361,     0,   365,     0,   378,     0,   380,     0,   385,
     0,   412,     0,    24,   356,    25,     0,   413,     0,     1,
     0,   416,    22,     0,   107,   340,     0,     0,     6,   280,
   359,    22,     0,     0,    98,     6,   280,   360,    22,     0,
     0,     7,   362,    22,     0,     0,    98,     7,   363,    22,
     0,    24,   364,    25,     0,   366,   372,     0,   366,   373,
   367,     0,     0,     0,     0,     0,     0,    20,     0,   107,
    20,     0,   376,    20,     0,   376,   107,    20,     0,   375,
    20,     0,   375,   107,    20,     0,   375,   376,    20,     0,
   375,   376,   107,    20,     0,    19,   371,     0,    19,    20,
     0,    19,   374,    20,     0,    19,   375,    20,     0,    19,
   375,   376,    20,     0,   356,     0,   374,   356,     0,   281,
     0,   375,   281,     0,   340,     0,   376,   340,     0,    18,
     0,   278,    18,     0,    18,     0,   278,    18,     0,   278,
     0,     8,    24,   278,    25,     0,   379,   340,     0,     0,
   379,   340,     9,   381,   340,     0,     0,    10,    24,   278,
   382,    25,   340,     0,    11,    24,   278,    25,     0,    11,
    24,   278,    25,     0,     0,     0,   183,   386,   366,    24,
   387,   388,    25,   364,   409,   367,     0,   390,     0,     0,
   388,   389,    21,   390,     0,   408,     0,   415,     0,   181,
     0,   180,     0,   182,     0,    24,   278,    25,     0,   391,
     0,   253,    26,   278,    27,     0,   253,    24,    25,     0,
   253,    24,   254,    25,     0,    70,    24,   277,    21,   336,
    25,     0,   253,   314,    28,   416,   289,     0,   253,   314,
    44,   416,   289,     0,   253,    47,     0,   253,    48,     0,
   392,     0,    47,   255,     0,    48,   255,     0,    29,   261,
     0,    34,   261,     0,    33,   261,     0,    32,   261,     0,
    31,   261,     0,    30,   261,     0,   258,     0,   393,     0,
    24,   336,    25,   261,     0,   394,     0,   262,    34,   261,
     0,   262,    35,   261,     0,   262,    36,   261,     0,   395,
     0,   263,    33,   262,     0,   263,    32,   262,     0,   396,
     0,   264,    49,   263,     0,   264,    50,   263,     0,   397,
     0,   265,    37,   264,     0,   265,    38,   264,     0,   265,
    51,   264,     0,   265,    52,   264,     0,   398,     0,   266,
    53,   265,     0,   266,    54,   265,     0,   399,     0,   267,
    29,   266,     0,   400,     0,   268,    39,   267,     0,   401,
     0,   269,    40,   268,     0,   402,     0,   270,    55,   269,
     0,   403,     0,   272,    56,   270,     0,   404,     0,     0,
     0,   272,    41,   406,   278,    22,   407,   274,     0,   405,
     0,   255,    23,   277,     0,   255,    57,   277,     0,   255,
    58,   277,     0,   255,    59,   277,     0,   255,    60,   277,
     0,   255,    61,   277,     0,   255,    62,   277,     0,   255,
    63,   277,     0,   255,    64,   277,     0,   255,    65,   277,
     0,   255,    66,   277,     0,   184,     0,     0,    12,     0,
   383,   340,     0,   410,   340,    11,    24,   278,    25,    18,
     0,   346,   340,     0,   383,   356,     0,   410,   356,    11,
    24,   278,    25,    18,     0,   410,   356,    11,    24,   278,
    25,     0,   346,   356,     0,    14,   416,    18,     0,    15,
    18,     0,    97,    15,    18,     0,    16,    18,     0,    93,
    16,    18,     0,    94,    16,    18,     0,    95,    16,    18,
     0,    96,    16,    18,     0,    17,    18,     0,    17,   278,
    18,     0,     0,    18,     0,   179,     0,   180,     0,   183,
     0,   184,     0,   415,     0,   181,     0,   185,     0,   181,
     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   241,   242,   245,   246,   249,   250,   251,   252,   253,   254,
   255,   258,   260,   264,   264,   269,   275,   279,   280,   284,
   285,   287,   289,   293,   296,   304,   307,   314,   315,   317,
   319,   335,   339,   346,   350,   356,   358,   358,   362,   363,
   364,   365,   368,   371,   372,   376,   379,   382,   382,   383,
   389,   390,   393,   394,   397,   398,   401,   402,   405,   406,
   409,   412,   413,   416,   417,   418,   419,   420,   423,   424,
   427,   427,   430,   430,   433,   437,   438,   441,   441,   444,
   444,   447,   451,   452,   455,   456,   459,   465,   472,   478,
   485,   486,   487,   488,   489,   492,   495,   498,   499,   502,
   503,   504,   505,   506,   507,   508,   509,   512,   518,   525,
   531,   540,   546,   550,   552,   556,   559,   566,   576,   577,
   580,   581,   584,   585,   586,   587,   588,   589,   590,   591,
   595,   596,   600,   601,   604,   606,   608,   609,   610,   611,
   612,   614,   618,   622,   634,   635,   636,   637,   638,   639,
   642,   643,   644,   645,   646,   647,   648,   649,   650,   653,
   654,   657,   658,   659,   660,   661,   662,   663,   664,   665,
   666,   667,   670,   671,   674,   678,   679,   682,   683,   684,
   685,   688,   689,   693,   694,   695,   696,   699,   700,   701,
   704,   705,   706,   709,   710,   711,   712,   713,   716,   717,
   718,   721,   722,   725,   726,   730,   731,   734,   735,   740,
   746,   747,   753,   759,   760,   760,   762,   765,   766,   767,
   768,   769,   770,   771,   772,   773,   774,   775,   776,   779,
   780,   783,   784,   787,   792,   793,   794,   797,   810,   814,
   815,   818,   823,   824,   824,   829,   830,   831,   832,   835,
   838,   841,   844,   845,   848,   849,   852,   853,   854,   858,
   860,   869,   870,   871,   872,   873,   876,   877,   878,   879,
   880,   881,   882,   883,   884,   885,   886,   887,   888,   889,
   890,   891,   892,   893,   894,   895,   896,   897,   898,   899,
   900,   901,   902,   903,   904,   905,   906,   907,   908,   909,
   910,   911,   912,   913,   914,   915,   916,   917,   918,   919,
   920,   921,   927,   928,   929,   930,   933,   934,   935,   936,
   937,   938,   939,   940,   941,   942,   943,   944,   945,   946,
   949,   953,   954,   958,   959,   963,   964,   965,   968,   969,
   972,   974,   976,   977,   979,   981,   982,   984,   986,   988,
   990,   991,   993,   995,   996,   998,  1000,  1001,  1004,  1007,
  1008,  1009,  1012,  1014,  1018,  1020,  1024,  1025,  1026,  1030,
  1032,  1032,  1034,  1037,  1039,  1041,  1044,  1049,  1056,  1057,
  1058,  1065,  1069,  1070,  1074,  1075,  1078,  1079,  1082,  1083,
  1086,  1087,  1088,  1089,  1092,  1093,  1096,  1097,  1100,  1101,
  1102,  1105,  1105,  1106,  1107,  1110,  1122,  1138,  1139,  1142,
  1143,  1144,  1147,  1148,  1151,  1153,  1154,  1156,  1157,  1159,
  1161,  1163,  1165,  1171,  1172,  1173,  1174,  1175,  1176,  1177,
  1178,  1179,  1181,  1185,  1187,  1189,  1195,  1200,  1203,  1206,
  1207,  1211,  1213,  1215,  1217,  1221,  1222,  1224,  1228,  1230,
  1232,  1235,  1236,  1237,  1238,  1239,  1240,  1241,  1242,  1243,
  1244,  1245,  1246,  1247,  1250,  1256,  1259,  1262,  1263,  1266,
  1267,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,
  1279,  1280,  1286,  1287,  1288,  1289,  1292,  1293,  1294,  1295,
  1298,  1299,  1303,  1306,  1309,  1312,  1315,  1318,  1321,  1322,
  1323,  1324,  1326,  1327,  1329,  1331,  1338,  1342,  1344,  1346,
  1348,  1352,  1353,  1356,  1357,  1360,  1361,  1364,  1365,  1368,
  1369,  1370,  1373,  1381,  1386,  1387,  1391,  1392,  1395,  1400,
  1403,  1404,  1405,  1413,  1414,  1414,  1418,  1419,  1420,  1431,
  1438,  1439,  1442,  1443,  1444,  1445,  1446,  1448,  1449,  1450,
  1451,  1454,  1455,  1456,  1457,  1458,  1459,  1460,  1461,  1462,
  1463,  1466,  1467,  1470,  1471,  1472,  1473,  1476,  1477,  1478,
  1481,  1482,  1483,  1486,  1487,  1488,  1489,  1490,  1493,  1494,
  1495,  1498,  1499,  1502,  1503,  1507,  1508,  1511,  1512,  1515,
  1516,  1519,  1520,  1521,  1522,  1525,  1526,  1527,  1528,  1529,
  1530,  1531,  1532,  1533,  1534,  1535,  1536,  1539,  1540,  1543,
  1546,  1548,  1550,  1554,  1555,  1557,  1559,  1562,  1563,  1564,
  1566,  1567,  1568,  1569,  1570,  1571,  1572,  1575,  1576,  1579,
  1582,  1583,  1584,  1585,  1586,  1589,  1590
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
"macroDef","fcnDefHdr","optGlobMods","@8","optGlobBufConstraints","optGlobBufConstraintsRest",
"optGlobBufConstraintsAux","@9","optPlainGlobMods","@10","optGlobModsRest","optPlainGlobModsRest",
"specialClauses","globIdList","globIdListExpr","globId","globQual","optGlobQuals",
"optGlobModsAux","@11","@12","optPlainGlobModsAux","@13","@14","optMods","fcnMods",
"@15","fcnPlainMods","@16","specialTag","endStateTag","endSpecialTag","stateSpecialClause",
"specialClauseType","specialClause","@17","@18","fcnDefHdrAux","fcnBody","@19",
"@20","fcnDef","locModifies","locPlainModifies","modListExpr","mExpr","modList",
"specClauseListExpr","specClauseList","primaryExpr","postfixExpr","argumentExprList",
"unaryExpr","fieldDesignator","offsetofExpr","sizeofExpr","@21","sizeofExprAux",
"castExpr","timesExpr","plusExpr","shiftExpr","relationalExpr","equalityExpr",
"bitandExpr","xorExpr","bitorExpr","andExpr","@22","orExpr","@23","conditionalExpr",
"@24","@25","assignExpr","expr","optExpr","constantExpr","initializer","instanceDecl",
"@26","@27","namedInitializer","@28","typeDecl","@29","IsType","PushType","namedInitializerList",
"namedInitializerListAux","optDeclarators","init","initList","storageSpecifier",
"typeQualifier","typeModifier","typeSpecifier","completeType","completeTypeSpecifier",
"altType","completeTypeSpecifierAux","optCompleteType","suSpc","@30","@31","@32",
"@33","@34","@35","@36","@37","NotType","structDeclList","structDecl","structNamedDeclList",
"structNamedDecl","enumSpc","@38","enumeratorList","enumerator","optNamedDecl",
"namedDecl","genericParamList","innerMods","innerModsList","pointers","paramIdList",
"idList","paramTypeList","paramList","@39","@40","paramDecl","typeExpression",
"abstractDecl","optAbstractDeclBase","abstractDeclBase","stmt","lclintassertion",
"iterBody","endBody","iterDefStmtList","iterDefIterationStmt","forPred","@41",
"@42","partialIterStmt","@43","iterDefStmt","iterSelectionStmt","openScope",
"closeScope","macroBody","stmtErr","labeledStmt","caseStmt","@44","@45","defaultStmt",
"@46","@47","compoundStmt","compoundStmtErr","CreateInnerScope","DeleteInnerScope",
"CreateStructInnerScope","DeleteStructInnerScope","DeleteInnerScopeSafe","compoundStmtRest",
"compoundStmtAux","compoundStmtAuxErr","stmtListErr","initializerList","stmtList",
"expressionStmt","expressionStmtErr","ifPred","selectionStmt","@48","@49","whilePred",
"iterWhilePred","iterStmt","@50","@51","iterArgList","@52","iterArgExpr","primaryIterExpr",
"postfixIterExpr","unaryIterExpr","castIterExpr","timesIterExpr","plusIterExpr",
"shiftIterExpr","relationalIterExpr","equalityIterExpr","bitandIterExpr","xorIterExpr",
"bitorIterExpr","andIterExpr","orIterExpr","conditionalIterExpr","@53","@54",
"assignIterExpr","endIter","doHeader","iterationStmt","iterationStmtErr","jumpStmt",
"optSemi","id","newId","typeName", NULL
};
#endif

static const short yyr1[] = {     0,
   186,   186,   187,   187,   188,   188,   188,   188,   188,   188,
   188,   189,   189,   191,   190,   192,   192,   193,   193,   194,
   194,   194,   194,   195,   194,   196,   194,   197,   197,   197,
   197,   198,   197,   199,   197,   201,   202,   200,   203,   203,
   203,   203,   204,   206,   205,   207,   208,   210,   209,   209,
   212,   211,   213,   213,   214,   214,   215,   215,   216,   216,
   217,   218,   218,   219,   219,   219,   219,   219,   220,   220,
   222,   221,   223,   221,   221,   221,   221,   225,   224,   226,
   224,   224,   224,   224,   227,   227,   229,   228,   231,   230,
   232,   232,   232,   232,   232,   233,   234,   235,   235,   236,
   236,   236,   236,   236,   236,   236,   236,   238,   237,   239,
   237,   240,   240,   242,   241,   243,   241,   244,   245,   245,
   246,   246,   247,   247,   247,   247,   247,   247,   247,   247,
   248,   248,   249,   249,   250,   250,   250,   250,   250,   250,
   250,   250,   251,   251,   252,   252,   252,   252,   252,   252,
   253,   253,   253,   253,   253,   253,   253,   253,   253,   254,
   254,   255,   255,   255,   255,   255,   255,   255,   255,   255,
   255,   255,   256,   256,   257,   259,   258,   260,   260,   260,
   260,   261,   261,   262,   262,   262,   262,   263,   263,   263,
   264,   264,   264,   265,   265,   265,   265,   265,   266,   266,
   266,   267,   267,   268,   268,   269,   269,   270,   271,   270,
   272,   273,   272,   274,   275,   276,   274,   277,   277,   277,
   277,   277,   277,   277,   277,   277,   277,   277,   277,   278,
   278,   279,   279,   280,   281,   281,   281,   282,   283,   282,
   284,   282,   285,   286,   285,   288,   287,   287,   287,   289,
   290,   291,   292,   292,   293,   293,   294,   294,   294,   295,
   295,   296,   296,   296,   296,   296,   297,   297,   297,   297,
   297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
   297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
   297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
   297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
   297,   297,   298,   298,   298,   298,   299,   299,   299,   299,
   299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
   300,   301,   301,   302,   302,   303,   303,   303,   304,   304,
   306,   307,   305,   308,   309,   305,   305,   305,   310,   311,
   305,   312,   313,   305,   305,   305,   305,   305,   314,   315,
   315,   315,   316,   316,   317,   317,   318,   318,   318,   319,
   320,   319,   319,   321,   321,   321,   322,   322,   323,   323,
   323,   323,   324,   324,   325,   325,   326,   326,   327,   327,
   328,   328,   328,   328,   329,   329,   330,   330,   331,   331,
   331,   333,   332,   334,   332,   335,   335,   336,   336,   337,
   337,   337,   338,   338,   339,   339,   339,   339,   339,   339,
   339,   339,   339,   340,   340,   340,   340,   340,   340,   340,
   340,   340,   340,   341,   341,   341,    -1,   342,   343,   344,
   344,   345,   345,   345,   345,   347,   348,   346,   350,   349,
   349,   351,   351,   351,   351,   351,   351,   351,   351,   351,
   351,   351,   351,   351,   352,   353,   354,   355,   355,   356,
   356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
   357,   357,   359,   358,   360,   358,   362,   361,   363,   361,
   364,   364,   365,   366,   367,   368,   369,   370,   371,   371,
   371,   371,   371,   371,   371,   371,   372,   373,   373,   373,
   373,   374,   374,   375,   375,   376,   376,   377,   377,   378,
   378,   378,   379,   380,   381,   380,   382,   380,   383,   384,
   386,   387,   385,   388,   389,   388,   390,   390,   390,   390,
   391,   391,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   393,   393,   393,   393,   393,   393,   393,   393,   393,
   393,   394,   394,   395,   395,   395,   395,   396,   396,   396,
   397,   397,   397,   398,   398,   398,   398,   398,   399,   399,
   399,   400,   400,   401,   401,   402,   402,   403,   403,   404,
   404,   405,   406,   407,   405,   408,   408,   408,   408,   408,
   408,   408,   408,   408,   408,   408,   408,   409,   409,   410,
   411,   411,   411,   412,   412,   412,   412,   413,   413,   413,
   413,   413,   413,   413,   413,   413,   413,   414,   414,   415,
   416,   416,   416,   416,   416,   417,   417
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     2,     1,     1,     1,     1,     1,
     1,     8,    11,     0,     5,     1,     3,     1,     2,     1,
     6,     3,     6,     0,     7,     0,     8,     1,     6,     3,
     6,     0,     6,     0,     7,     0,     0,    10,     3,     3,
     3,     2,     1,     0,     2,     1,     1,     0,     5,     0,
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
    11,   391,   359,   236,   359,    14,     0,     0,     0,     0,
   250,   250,   263,   262,   264,   265,   266,   250,   250,   250,
   250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
   250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
   250,   250,   250,   314,   315,   316,   313,   250,   250,   250,
   250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
   250,   250,   250,   250,   359,   359,   359,   359,   359,   359,
   359,   359,   359,   359,   250,   630,   631,   635,   632,   633,
   636,     0,     3,     6,     7,   383,     8,     9,   359,    43,
   628,    10,   235,   237,     0,   339,   339,   359,   339,   359,
   332,   359,     0,   359,   112,   250,   634,    20,   359,   387,
   388,   389,   392,   393,   253,   250,   250,   246,   359,   637,
   359,   359,   635,     0,   480,   250,   487,     0,     0,     0,
   610,     0,     0,     0,     0,   250,   520,     0,   250,   250,
   250,   250,   250,   250,   250,   250,   250,     0,    42,     0,
     0,     0,     0,     0,     0,   250,   150,   146,   149,   147,
   531,   151,   162,   182,   172,   171,   184,   188,   191,   194,
   199,   202,   204,   206,   208,   211,   214,   218,   230,   522,
   176,     0,     0,   512,   470,   471,   472,   473,     0,     0,
   474,   250,   475,     0,   476,     0,   477,   479,   145,     0,
   464,     0,   518,     0,   494,   451,     0,     0,     0,   460,
     0,   461,   440,   459,   456,   457,   452,   453,   454,     0,
     0,   458,     0,     0,     0,   462,   439,     0,   267,   268,
   269,   270,   275,   277,   276,   280,   281,   292,   294,   295,
   293,   278,   279,   271,   272,   273,   274,   289,   290,   287,
   291,   282,   283,   286,   284,   285,   298,   300,   305,   288,
   301,   302,   303,   304,   296,   297,   299,   306,   307,   310,
   311,   308,   309,   317,   319,   318,   320,   321,   322,   323,
   324,   325,   326,   312,     4,   250,     0,   114,   118,   514,
   359,   359,   629,     5,   359,   340,   336,   337,   330,   338,
     0,   250,   250,   328,   250,   250,     0,   329,   384,   327,
   390,   394,   359,     0,   252,   359,     0,   243,   250,   628,
    16,    18,     0,   359,   250,    28,   402,   250,   146,   149,
   182,   234,   483,   145,     0,   250,   250,   250,   250,     0,
   619,   621,   626,     0,     0,   359,   408,     0,     0,   165,
   170,   169,   168,   167,   166,     0,   250,   163,   164,   250,
     0,     0,     0,     0,     0,   250,   489,   250,     0,     0,
     0,   482,   433,   250,   424,   425,   426,   427,     0,   428,
   429,   250,   431,   250,   430,   432,   494,   250,   250,   158,
   159,     0,   250,   250,   250,   250,   250,   250,   250,   250,
   250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
   250,   250,   250,   250,   250,   250,   250,   250,   250,   209,
   215,   212,   521,   250,     0,   617,    39,     0,   495,   513,
   524,   614,     0,   481,   250,     0,     0,     0,   519,    40,
   441,   445,   455,   466,   467,   465,     0,     0,    41,    22,
   250,   402,   359,   250,   494,   515,   250,   238,   113,   359,
     0,   334,     0,   359,     0,   359,     0,   250,   250,   249,
   250,   248,   244,   359,     0,   250,     0,   359,   250,    19,
   399,     0,     0,   385,   400,   250,     0,     0,   488,     0,
   527,     0,   233,     0,   618,   627,   148,   250,   250,     0,
   410,   409,   411,   250,   478,   250,     0,   622,   623,   624,
   625,   620,   485,     0,     0,     0,     0,     0,   613,   359,
   492,   611,     0,     0,   153,     0,   160,     0,     0,     0,
   219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
   229,   185,   186,   187,   190,   189,   192,   193,   195,   196,
   197,   198,   200,   201,   203,   205,   207,   250,   250,   250,
   231,   250,   250,   177,   508,   149,   512,     0,   359,   493,
   525,     0,     0,   463,   449,     0,     0,    24,     0,   499,
   250,   516,   115,   359,   250,   359,   494,   117,   250,   239,
   333,   250,   349,     0,   357,   352,     0,   358,     0,   374,
   377,   371,   373,   254,   250,   250,   628,    15,    30,   250,
   402,   250,    17,   386,   395,   397,    36,   404,   359,   403,
   407,   484,   523,     0,   529,   250,   331,   416,     0,   402,
   412,   250,     0,   183,   359,   250,     0,   490,   491,     0,
     0,     0,   507,     0,   532,   250,   154,   152,   250,   250,
   210,     0,   213,   250,   179,   250,   181,   509,   510,   250,
   250,   250,   530,   250,   250,   359,    44,    26,   500,   503,
   250,   250,   501,   250,   517,     0,   241,   250,   335,   355,
   496,   341,   356,   496,   344,   250,   376,   250,     0,     0,
   250,   250,   250,     0,    32,     0,   250,     0,    51,   401,
   250,   413,   250,     0,   417,   420,   250,     0,   418,     0,
   402,     0,     0,   486,   434,   435,   436,   250,   250,   161,
   156,   157,   216,     0,     0,   511,   526,     0,   250,   250,
   250,   250,   250,   250,   250,   250,   250,     0,   146,   149,
   147,   162,   182,   171,   188,   191,   194,   199,   202,   204,
   206,   208,   211,     0,   535,   534,   543,   552,   562,   564,
   568,   571,   574,   579,   582,   584,   586,   588,   590,   592,
   596,   537,   145,     0,    23,    50,    77,    44,   504,   505,
   250,   502,    21,   250,   255,   359,   347,   496,   359,   348,
   496,   370,   375,   250,     0,   247,   250,   257,   245,   250,
     0,   359,    51,    34,     0,   396,   398,    37,    84,   405,
   379,     0,   250,   413,   380,   414,   528,   446,     0,   421,
   419,   422,     0,     0,   155,     0,   535,   250,   178,   180,
   616,     0,     0,   165,   170,   169,   168,   167,   166,   163,
   164,   250,   250,   250,   158,   159,     0,   250,   250,   250,
   250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
   250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
   250,   250,   250,   250,   209,   593,   212,   450,     0,   444,
    25,    46,    47,     0,    71,    87,    75,    91,    92,    93,
    94,    95,    98,    99,    45,    77,    53,    76,   359,   359,
    57,    50,   506,   250,     0,   361,   359,   359,   360,   359,
   359,   359,   378,   250,   260,     0,   255,    12,    31,    33,
    51,    29,   628,    78,    89,    82,    52,    84,    55,    83,
   402,   406,   381,   382,   250,   415,   423,     0,   174,     0,
   494,   217,   615,   148,   250,     0,   153,     0,     0,     0,
     0,   597,   598,   599,   600,   601,   602,   603,   604,   605,
   606,   607,   185,   186,   187,   190,   189,   192,   193,   195,
   196,   197,   198,   200,   201,   203,   205,   207,   589,   250,
   591,   250,   443,     0,   359,    69,   628,    54,   108,     0,
    58,    27,   255,   250,   359,     0,   250,   362,   350,   359,
   353,   359,   372,   258,   250,   628,    35,     0,   359,    69,
   628,    56,   250,   447,   250,     0,   612,   609,   183,   250,
   154,   152,   250,   250,     0,   536,     0,   359,    64,    65,
    66,    67,    68,   628,    59,    69,     0,     0,     0,   124,
    88,   133,   628,     0,   123,     0,   100,   105,   104,   103,
   102,   101,   106,   107,   110,     0,   240,   250,   364,   250,
   250,   359,   367,     0,   342,     0,   345,   259,   261,     0,
    38,   628,   628,    90,   628,   122,   250,     0,   175,   173,
   608,   495,     0,   156,   157,   594,     0,     0,    69,     0,
    70,    63,    61,    62,     0,   127,     0,     0,     0,     0,
     0,   120,     0,     0,   136,   143,   628,   135,     0,   250,
   256,   250,   250,     0,   365,   250,   351,     0,   354,     0,
    13,    86,    86,   121,   448,   533,   155,   250,    49,    86,
    60,    86,   128,   125,   132,   131,     0,   129,   130,   134,
   119,     0,   139,     0,     0,     0,     0,     0,   628,   242,
   368,   359,   363,   250,   343,   346,    79,    85,    81,   595,
    72,    74,   126,   140,   137,     0,   141,   142,   144,    97,
   250,     0,   366,   369,   138,   109,    96,   250,   111,     0,
     0,     0
};

static const short yydefgoto[] = {  1180,
    82,    83,    84,    85,   122,   320,   321,    86,   667,   778,
   322,   803,   921,    87,   699,   923,   906,    89,   776,   777,
   881,   882,   883,   884,   808,   809,   895,   927,   896,  1034,
  1035,  1093,  1036,  1037,   897,   985,   986,   929,  1009,  1010,
  1157,  1158,   987,   930,  1011,   899,  1178,  1171,   900,  1055,
   901,  1046,  1109,    90,   289,   453,   455,    91,  1041,  1074,
  1042,  1137,  1043,  1106,  1107,   162,   163,   526,   164,   938,
   165,   166,   425,   564,   167,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   558,   177,   560,   178,   559,   828,
   179,   207,   494,   333,   290,    93,   678,   784,   115,   606,
    94,   316,   181,   287,   116,   117,   905,   799,   916,    96,
    97,    98,    99,   347,   291,   461,   101,   297,   102,   788,
  1118,   791,  1120,   681,  1064,   684,  1066,   103,   908,   909,
  1061,  1062,   104,   689,   599,   600,   813,   119,   483,   112,
   113,   106,   614,   615,   484,   485,   486,   701,   620,   348,
   819,   815,   503,   372,   373,   208,   228,   209,   210,   374,
   935,  1078,   212,   664,   213,   214,   215,   216,   183,   430,
   375,   376,   488,   637,   377,   335,   514,   378,   188,   379,
   570,   786,   999,   221,   583,   521,   429,   190,   584,   585,
   380,   191,   192,   381,   661,   624,   382,   224,   383,   387,
   719,   755,   879,   756,   757,   758,   759,   760,   761,   762,
   763,   764,   765,   766,   767,   768,   769,   770,   771,   980,
  1128,   772,  1082,   384,   385,   197,   386,   294,   334,   200,
   109
};

static const short yypact[] = {  2013,
-32768,   127,  5648,-32768,  6547,-32768,   701,  2968,  3340,  3340,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   664,-32768,-32768,
-32768,  2189,-32768,-32768,-32768,   325,-32768,-32768,  5268,-32768,
    73,-32768,-32768,-32768,    90,  6386,  6386,-32768,  6386,   121,
    66,-32768,   364,-32768,-32768,   701,-32768,-32768,-32768,-32768,
-32768,-32768,   127,-32768,-32768,   151,-32768,   121,-32768,-32768,
-32768,  5648,-32768,   183,-32768,  5857,-32768,   229,   235,   266,
-32768,   286,   701,   299,   305,  1655,-32768,  2555,  5857,  5857,
  5857,  5857,  5857,  5857,-32768,  5868,  5868,   340,-32768,   373,
   385,   397,   410,   428,   369,  4714,-32768,   430,   438,-32768,
   451,-32768,   937,   976,-32768,-32768,-32768,   474,   694,   525,
   542,   707,   468,   461,   489,   488,    96,-32768,-32768,   195,
-32768,  3483,   462,   477,-32768,-32768,-32768,-32768,   572,  3111,
-32768,  4714,-32768,  3483,-32768,  3483,-32768,-32768,   582,   591,
-32768,   603,-32768,  2740,   451,   616,   201,   559,  3154,-32768,
  3340,-32768,-32768,-32768,  6146,-32768,-32768,-32768,-32768,   670,
   639,-32768,  3340,  3340,  3483,-32768,-32768,   599,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   673,   682,-32768,-32768,-32768,
   121,  5111,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   696,   623,-32768,-32768,   701,   701,   483,-32768,   325,-32768,
-32768,-32768,-32768,   698,-32768,-32768,   703,   713,   623,    73,
-32768,   395,   695,-32768,   701,-32768,   418,  5857,-32768,-32768,
-32768,-32768,-32768,-32768,   711,  5857,  5857,  5857,  1870,   721,
-32768,-32768,-32768,   213,   733,  6015,   251,   730,   741,-32768,
-32768,-32768,-32768,-32768,-32768,   745,  5857,-32768,-32768,  5857,
   757,   770,   772,   800,   802,  5857,-32768,  3393,   644,   644,
   644,-32768,-32768,  4714,-32768,-32768,-32768,-32768,   817,-32768,
-32768,  4714,-32768,  4714,-32768,-32768,-32768,  1748,  5857,-32768,
-32768,   103,  5857,  5857,  5857,  5857,  5857,  5857,  5857,  5857,
  5857,  5857,  5857,  5857,  5857,  5857,  5857,  5857,  5857,  5857,
  5857,  5857,  5857,  5857,  5857,  5857,  5857,  5857,  5857,-32768,
-32768,-32768,-32768,  5857,   766,-32768,-32768,  2370,-32768,-32768,
   829,-32768,   862,-32768,  5857,   843,   853,   865,-32768,-32768,
-32768,-32768,  6146,-32768,-32768,-32768,  2925,   883,-32768,-32768,
  5857,   267,  3585,   623,   875,-32768,   623,-32768,   460,  6547,
   848,   895,   919,   922,   925,   922,   701,   951,   623,-32768,
   623,-32768,-32768,-32768,   889,   956,   969,-32768,   623,   395,
-32768,   701,   973,-32768,   979,   701,   160,   984,-32768,   244,
   993,   245,   993,  1001,-32768,-32768,-32768,-32768,  5507,   998,
   535,-32768,   656,  5857,-32768,-32768,  1010,-32768,-32768,-32768,
-32768,-32768,-32768,  1029,  1030,   877,   880,   881,-32768,  3585,
-32768,-32768,  1045,  1040,-32768,   268,-32768,   155,   701,   701,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   474,   474,   694,   694,   525,   525,
   525,   525,   542,   542,   707,   468,   461,  5857,  5857,  5857,
-32768,  5888,  5913,-32768,-32768,  5496,-32768,  3297,  3765,-32768,
-32768,  1041,   279,-32768,-32768,  1042,  1055,-32768,  1044,-32768,
  4125,-32768,-32768,  3945,  4168,-32768,   875,-32768,-32768,  1049,
-32768,-32768,  1053,  1067,-32768,  1068,  1070,-32768,   830,-32768,
  1064,-32768,-32768,-32768,   151,-32768,   214,-32768,-32768,  5857,
   309,   623,-32768,-32768,  1069,-32768,-32768,  1087,  6547,-32768,
-32768,-32768,-32768,  1071,-32768,  1870,-32768,-32768,  1066,   311,
   656,  5675,  1075,-32768,-32768,-32768,  1078,-32768,-32768,  1013,
  1014,  1020,-32768,  1085,-32768,  5857,-32768,-32768,-32768,-32768,
   489,   854,   488,  5857,-32768,  5857,-32768,-32768,-32768,  4307,
  4714,  5857,-32768,  5940,  5857,-32768,-32768,-32768,-32768,-32768,
  4350,  4489,-32768,  4532,-32768,  1086,-32768,-32768,-32768,-32768,
-32768,  1094,-32768,-32768,  1097,-32768,   701,-32768,   701,  1101,
  4980,-32768,-32768,  1088,-32768,  1112,-32768,   551,-32768,-32768,
   701,   645,  4714,  1108,-32768,-32768,   114,  1113,-32768,  1115,
   110,  1122,  1119,-32768,-32768,-32768,-32768,  5857,  5940,-32768,
-32768,-32768,-32768,  1120,  1121,-32768,-32768,   323,  5857,  5857,
  5857,  5857,  5857,  5857,  5857,  5868,  5868,  1123,   345,   353,
   366,   963,  1135,   449,   710,   914,   907,   726,   942,  1124,
  1117,  1111,  1099,   101,  1127,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   515,   545,-32768,   983,  1130,-32768,-32768,-32768,
  4671,-32768,-32768,-32768,-32768,  6473,-32768,-32768,  6473,-32768,
-32768,-32768,-32768,  5857,   988,-32768,  4980,-32768,-32768,  4980,
  1072,-32768,-32768,-32768,  1132,-32768,-32768,-32768,  1192,-32768,
   325,  1137,-32768,   613,-32768,   656,-32768,-32768,  1138,-32768,
-32768,-32768,  1141,   701,-32768,   547,  1142,  5857,-32768,-32768,
  1144,   562,  1143,   590,   627,   640,   731,   760,   774,   794,
   816,  5857,  5812,  5857,   828,   876,   118,  5857,  5857,  5857,
  5857,  5857,  5857,  5857,  5857,  5857,  5857,  5857,  5857,  5857,
  5857,  5857,  5857,  5857,  5857,  5857,  5857,  5857,  5857,  5857,
  5857,  5857,  5857,  5857,  5857,-32768,  5857,-32768,  1148,  1147,
-32768,-32768,-32768,   994,    38,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   814,-32768,-32768,-32768,-32768,
  1051,   983,-32768,  4980,   226,-32768,   121,  5342,-32768,  6473,
  5342,  6473,-32768,-32768,-32768,  1027,-32768,-32768,-32768,-32768,
-32768,-32768,    73,    72,-32768,-32768,-32768,   931,-32768,-32768,
   679,-32768,-32768,-32768,  5837,-32768,-32768,   304,-32768,  1154,
   875,-32768,-32768,   890,  5857,  1152,   896,   897,   165,   701,
   701,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   898,   909,   912,   660,   991,   506,   589,   233,
   762,   796,   879,   888,  1046,   387,   181,   403,   489,  5857,
   488,  5940,-32768,   644,  6277,   256,    70,-32768,-32768,   758,
-32768,-32768,-32768,-32768,-32768,  1157,   686,-32768,-32768,  5342,
-32768,  5342,-32768,-32768,  1937,   381,-32768,  1091,  6277,   256,
    70,-32768,    46,-32768,-32768,   701,-32768,   996,   934,-32768,
   941,   943,-32768,-32768,  1028,-32768,   999,  4953,-32768,-32768,
-32768,-32768,-32768,   516,-32768,   256,   874,    59,    59,-32768,
-32768,   100,   567,  1102,-32768,    77,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   625,-32768,   623,-32768,-32768,
  1161,-32768,  1162,  1163,-32768,  1165,-32768,-32768,-32768,  1118,
-32768,  4795,   516,-32768,   567,-32768,   651,  1164,-32768,-32768,
-32768,-32768,  1180,   946,   961,-32768,  1128,  1129,   256,  1139,
-32768,-32768,-32768,-32768,   411,   100,   129,   701,   701,    59,
  1149,-32768,    77,    77,-32768,   143,   654,-32768,    77,-32768,
-32768,  5857,   686,  1168,-32768,-32768,-32768,  1167,-32768,  1187,
-32768,  1146,  1146,-32768,-32768,-32768,   967,  5857,-32768,  1146,
-32768,  1146,-32768,-32768,-32768,   100,  1188,-32768,-32768,   100,
-32768,   479,   143,   592,   701,   701,    77,  1150,   654,-32768,
-32768,-32768,-32768,  5857,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1193,-32768,-32768,   143,-32768,
-32768,  1151,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1225,
  1228,-32768
};

static const short yypgoto[] = {-32768,
-32768,  1153,-32768,-32768,-32768,-32768,  -400,  -102,-32768,-32768,
   904,-32768,-32768,-32768,-32768,-32768,   123,-32768,   453,-32768,
   341,-32768,-32768,-32768,  -698,-32768,-32768,-32768,  -700,   232,
   157,-32768,-32768,   208,   354,-32768,-32768,   321,-32768,-32768,
  -674,  -701,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -824,   107,   241,  -905,   145,-32768,  -590,   413,   981,-32768,
-32768,  -587,-32768,-32768,   219,  -338,  -312,  -234,  -308,  -314,
  -401,  -352,  -431,  -544,-32768,  -565,-32768,  -111,-32768,-32768,
  1096,  1098,  -613,  -365,     2,-32768,-32768,-32768,  -463,-32768,
-32768,-32768,     0,  -256,   786,-32768,  -805,  -708,-32768,-32768,
-32768,-32768,-32768,-32768,    68,   671,-32768,   612,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   446,  -744,  -738,
-32768,   149,-32768,-32768,   578,   594,   465,     5,  -408,  1170,
-32768,     8,-32768,-32768,  -616,-32768,-32768,-32768,   585,  -238,
   948,-32768,  -493,   -43,-32768,  1280,-32768,  1073,-32768,  1095,
-32768,-32768,-32768,-32768,   -68,-32768,-32768,-32768,-32768,   102,
  1131,  1140,-32768,-32768,  1323,-32768,-32768,  -359,-32768,  1036,
   216,  -594,  -809,-32768,   773,-32768,-32768,   868,   -82,  -395,
    37,-32768,   211,   105,-32768,-32768,   175,-32768,   200,-32768,
-32768,   581,-32768,   319,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1435,-32768,-32768,  1544,  -201,   271,    78,
-32768
};


#define	YYLAST		6732


static const short yytable[] = {    95,
   513,    92,    95,   309,   105,   604,   292,   631,   515,   114,
   229,   230,   704,   708,   332,   653,   556,   231,   232,   233,
   234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   579,   911,   222,   222,   257,   258,   259,
   260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
   270,   271,   272,   273,   462,   477,   557,   100,   545,   546,
   118,   499,   121,   742,   284,   898,   744,   108,   613,     2,
   108,    95,  1038,    92,   124,   577,   105,   293,   915,   789,
   293,   917,  1039,  1038,   823,   588,   547,   548,   754,   301,
  1103,  1001,   555,  1039,   920,    95,   553,   554,   928,   184,
  1104,  1006,   193,   295,   481,   314,   315,   317,   475,   753,
   312,   323,    88,   -73,   -73,  1097,   651,  1098,   742,   325,
   529,   744,   443,   629,   822,   437,   421,   346,  -250,   499,
   441,   876,   442,  1099,   356,   950,   530,     2,   431,   100,
   303,   422,  1038,   754,   446,  1134,   877,   -80,   -80,   108,
     2,   951,  1039,   296,   296,  1000,   296,  1002,  1144,   998,
  1145,   313,   998,   660,   753,   424,   549,   550,   551,   552,
   424,   648,   194,   108,   497,   424,  1146,  1056,   672,   324,
  1065,  1022,  1067,   910,   898,   993,   912,  1142,  1143,   326,
   991,  -585,   696,   346,    88,  -585,   327,   195,   816,   417,
   340,   697,   423,  1095,  1096,   424,   -73,   -73,   439,   223,
   223,   424,  1007,   477,    76,    77,   123,   515,    79,    80,
   496,   293,   752,   424,   110,   111,   692,    76,  1040,   349,
   222,  1169,   193,   994,   694,   222,   995,   222,    76,  1040,
   -80,   -80,   336,  -575,   332,    76,  1105,  -575,   337,   222,
   222,   998,   750,   998,   424,   424,   710,   635,   623,   625,
   107,   481,  1136,   107,  -250,  1140,   499,   107,   199,   199,
   199,   409,   410,   426,     2,   451,   193,   752,   646,   338,
   301,   578,   647,   456,   193,   432,  1069,   433,   193,   424,
   193,    95,   460,   663,   463,   465,   459,    76,  1040,   339,
  1135,   751,   194,   481,   708,   481,   341,   750,    95,  1136,
   816,  1014,   342,   474,   323,   745,   448,   346,  1015,   193,
   519,  1016,   981,   695,  -359,   706,  -359,   195,   522,   332,
   523,  1029,  1030,   424,  -359,   569,   500,   831,  -251,   749,
   286,   746,   107,   462,   501,   748,   194,   350,   351,   352,
   353,   354,   355,   360,   194,  -540,   751,   346,   194,  -540,
   194,  1031,  1032,  -539,   366,   367,   107,  -539,   441,   108,
   745,   195,   464,   466,   468,  1033,  -541,   332,   361,   195,
  -541,   742,   107,   195,   744,   195,   108,   713,   293,   194,
   362,   995,   326,   107,   749,   693,   746,  -583,   199,   582,
   748,  -583,   363,   498,   223,   724,   754,   725,  -251,   223,
   476,   223,   481,  -587,   195,   364,   199,  -587,   913,   747,
   305,   306,   307,   223,   223,  1133,  1097,   753,  1098,   415,
   416,   418,   365,   979,   456,  -359,  -359,  -359,  1159,  -359,
  -359,  -631,   199,    95,  1099,  1161,    95,  1162,   586,  -635,
   199,   589,   199,   594,   199,   597,   199,   603,    95,  -561,
    95,   977,  -632,  -561,   199,   610,   582,  -359,   323,   199,
  -359,   199,  -359,   222,   747,   619,   325,  -359,  -359,  -359,
   833,  -359,  -359,   199,   199,   199,   417,   627,   332,   418,
   500,   467,   633,  1164,  1144,   460,  1145,   404,   405,   406,
   274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
   332,   978,  1146,   966,   967,   582,  -572,   498,   419,   567,
  -572,   108,   193,   293,   108,  -538,  1089,   407,   408,  -538,
   582,   675,   420,   299,   601,   302,   108,   304,   108,   308,
   752,   968,   969,   427,   310,   806,   326,   976,  -250,   616,
   499,   974,   975,   621,   318,   424,   319,   424,  -468,   880,
   456,   940,   107,   409,   410,   107,   107,   107,   411,   412,
   750,  1018,   424,   631,   293,   456,   944,  1100,   676,   107,
   428,   460,   413,   414,  1111,   107,  -359,  -359,  -359,   811,
  -359,  -359,   194,  -634,   690,   691,   649,   650,   392,  -573,
  -555,   323,   434,  -573,  -555,  1038,   675,   727,  1165,   325,
   407,   408,   542,   543,   544,  1039,   435,   195,   675,   751,
   633,   970,   971,   972,   973,   460,  -250,  -633,   499,   516,
   517,   518,  1110,   745,   199,   995,     2,  -560,   721,   722,
   440,  -560,   199,   346,   199,   346,     2,   223,   445,   817,
  -559,    76,    77,   123,  -559,    79,    80,   749,  -250,   746,
   499,   293,   193,   748,  1147,  -410,   499,   785,     2,  -250,
  -570,   632,   332,   481,  -570,   792,   702,   794,   444,   326,
   449,   800,   801,   404,   405,   406,   805,  -637,   199,   450,
   619,   812,  -359,   706,  -359,   452,   500,  1060,   298,   814,
   300,   811,  -359,   458,   501,   470,   942,   199,   478,     2,
   472,  1008,   634,   199,   107,   407,   408,   107,   346,    76,
    77,   123,   489,    79,    80,   473,   454,   107,   495,   107,
   457,   107,   194,   859,   860,   861,  1151,   747,  -637,   107,
   423,  -558,   107,   424,   504,  -558,   107,   497,   469,   415,
   416,   471,   866,   867,   601,   505,   601,   195,   506,   479,
    76,  1040,   482,  1135,   508,   807,   868,   869,   621,   108,
  -557,  1083,  -576,   904,  -557,  1044,  -576,   509,  1174,   510,
   199,    76,    77,   123,  -556,    79,    80,   933,  -556,   107,
   107,    76,    77,   123,  1070,    79,    80,   562,   563,  1076,
   409,   410,   932,   812,  -553,   633,  -577,   511,  -553,   512,
  -577,   814,    76,    76,    77,   123,  1088,    79,    80,    76,
    77,   123,  1090,    79,    80,   520,  -554,   571,   199,   199,
  -554,  1101,  -637,  -637,   409,   410,  -637,  -637,  -550,   686,
   687,   199,  -550,   907,   199,   199,   907,  -359,  -359,  -359,
   439,  -359,  -359,   424,    76,    77,   123,   497,    79,    80,
  1122,  1123,   572,  1124,   424,   723,  1047,   574,  1048,    76,
    77,   123,   107,    79,    80,   885,   886,   887,   575,  1049,
  1050,   108,  1051,   576,  1052,  1053,  -551,   482,   587,  -578,
  -551,   939,  1028,  -578,   590,  1148,   996,  1054,  -580,   595,
  -542,   598,  -580,  1003,  -542,   592,  -545,   646,  -565,   607,
  -545,  1021,  -565,   612,   411,   412,  1072,   409,   410,  -566,
   199,   199,  -567,  -566,   773,   591,  -567,   593,   413,   414,
  -250,   199,   199,   596,   199,   862,   863,  1172,   834,   835,
   836,   837,   838,   839,  -563,   864,   865,   107,  -563,   107,
   388,  -546,   389,  -544,  -359,  -546,  -548,  -544,   107,   602,
  -548,   107,   107,   199,   309,   907,   608,   907,   907,   907,
  -359,  -549,   609,   390,   391,  -549,   843,  -547,   844,   773,
  -359,  -547,   611,  1057,   870,   871,    95,   617,   393,   618,
   332,  1063,   924,   925,   926,   622,  -359,   914,   687,   845,
   846,  -569,   812,   424,  1079,  -569,  1160,   589,   626,   460,
  1077,   630,  1084,  1085,   404,   405,   406,  1023,  1024,   456,
   636,   590,   394,   395,   396,   397,   398,   399,   400,   401,
   402,   403,   332,   189,   220,   220,  1004,  1005,   424,  1086,
   638,   199,    76,  1092,   639,   644,   482,    95,   640,  1112,
  1114,   641,   642,   645,   662,   665,  -581,   907,   668,   907,
  -581,   677,   680,   456,   108,   707,   812,   963,   964,   965,
   712,   666,   411,   412,   107,   682,   688,   683,   685,   698,
   108,   700,   705,  1080,   107,   703,   413,   414,   711,   714,
   715,   716,   182,   211,   211,   180,   331,   717,   718,  1150,
   783,   775,    95,   787,   802,  1154,   790,  1063,   796,   331,
   331,   331,   331,   331,   331,   818,   358,   359,   888,   889,
   890,   891,   892,   893,   894,   108,   804,   820,   185,   217,
   217,   821,   824,   825,   829,   830,   842,   186,   218,   218,
   874,   878,   872,   875,   108,   873,   922,   848,   -48,   918,
   931,   943,   936,  1019,   983,   937,   941,   945,   982,   984,
  1176,  1017,  1020,   189,  1059,  1138,  1139,  1179,  1071,  1081,
  1087,  1113,  1117,  1116,  1119,  1153,  1155,   847,  1125,  1102,
   108,   849,   850,   851,   852,   853,   854,   855,   856,   857,
   858,   885,   886,   887,  1127,  1121,  1156,   888,   889,   890,
   891,   892,   893,   894,  1163,  1129,  1130,   189,   886,  1175,
   107,   107,  1167,  1168,  1181,   189,  1132,  1182,   480,   189,
   902,   189,   182,   344,   285,   345,  1141,  1170,  1177,   220,
   438,  1073,   992,  1091,   220,  1131,   220,   919,  1012,   988,
  1166,  1075,   773,  1149,  1027,   948,   605,  1045,   220,   220,
   189,  1152,   679,   924,   925,   926,   795,   107,   185,   888,
   889,   890,   891,   892,   893,   894,   182,   186,   934,   180,
   793,  1045,   311,   107,   182,   810,   107,   180,   182,   227,
   182,   180,   643,   180,   502,   568,   447,  1126,   211,   827,
  1026,   436,     0,   211,     0,   211,     0,  1094,  1045,  1045,
     0,     0,   185,     0,     0,     0,  1108,   211,   211,   182,
   185,   186,   180,     0,   185,     0,   185,     0,   107,   186,
   187,   219,   219,   186,   217,   186,     0,     0,     0,   217,
     0,   217,     0,   218,   989,   990,   331,   107,   218,     0,
   218,     0,   997,   217,   217,   185,     0,     0,     0,     0,
     0,     0,   218,   218,   186,     0,     0,  1045,   107,   107,
  1045,     0,     0,  1108,  1108,     0,  1013,     0,     0,  1108,
     0,     0,     0,   107,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  1045,   107,   107,  1108,     0,     0,
     0,     0,   524,     0,     0,   487,     0,     0,     0,     0,
     0,   331,     0,   490,   491,   492,   493,     0,     0,     0,
  1058,     0,   196,   225,   225,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   487,   507,     0,     0,     0,     0,
   187,     0,     0,   189,     0,   487,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   331,
     0,     0,   220,   527,   331,     0,   528,     0,   531,   532,
   533,   534,   535,   536,   537,   538,   539,   540,   541,     0,
     0,     0,     0,     0,   187,     0,     0,  1115,     0,     0,
     0,     0,   187,     0,     0,     0,   187,     0,   187,   561,
     0,     0,   182,     0,     0,   180,   219,     0,     0,     0,
     0,   219,   573,   219,     0,     0,     0,     0,   331,     0,
   331,   211,   655,   657,     0,   219,   219,   187,     0,     0,
     0,   198,   226,   226,     0,     0,     0,     0,   185,     0,
     0,     0,     0,     0,     0,     0,     0,   186,     0,     0,
     0,     0,   196,     0,     0,     0,     0,   217,     0,     0,
     0,     0,     0,     0,     0,     0,   218,     0,     0,     0,
   331,     0,     0,     0,     0,     0,     0,  1173,     0,     0,
     0,     0,     0,   189,     0,     0,     0,     0,     0,     0,
     0,     0,   331,     0,     0,     0,   196,     0,     0,     0,
     0,     0,     0,     0,   196,     0,     0,     0,   196,     0,
   196,     0,     0,     0,     0,     0,     0,     0,   225,     0,
     0,     0,     0,   225,   743,   225,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   652,   225,   225,   196,
     0,     0,   182,     0,     0,   180,     0,     0,     0,     0,
     0,     0,   343,     0,     0,     0,     0,     0,   328,     0,
     0,   198,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   185,   743,
   145,   146,   147,     0,     0,     0,     0,   186,     0,     0,
   331,   331,   331,   331,   331,   331,   840,   841,     0,     0,
     0,     0,     0,   493,   148,   198,     0,     0,     0,     0,
     0,     0,     0,   198,     0,     0,     0,   198,     0,   198,
     0,   720,     0,     0,     0,     0,     0,   226,     0,     0,
   187,   487,   226,   487,   226,     0,     0,     0,     0,   728,
     0,     0,   774,     0,     0,   157,   226,   226,   198,   219,
     0,   328,   525,     0,   331,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,   798,     0,     0,     0,
     0,     0,     0,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   331,     0,
     0,     0,     0,     0,     0,   826,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,   832,     0,     0,     0,
     0,     0,     0,    76,   329,   330,   160,     0,     0,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,     0,   331,   157,     0,
     0,     0,   196,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   225,     0,     0,     0,     0,     0,  -232,     0,     0,
   187,     0,   798,   328,     0,   798,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,   331,    76,   329,   330,   160,
     0,     0,     0,     0,     0,     0,     0,   946,   527,   148,
     0,   949,     0,   952,   953,   954,   955,   956,   957,   958,
   959,   960,   961,   962,     0,   797,  1068,     0,     0,     0,
   328,     0,   743,     0,     0,   139,   140,   141,   142,   143,
   144,   198,     0,     0,     0,     0,     0,     0,     0,     0,
   157,     0,   145,   146,   147,     0,     0,     0,     0,     0,
   226,     0,     0,     0,     0,     0,     0,     0,     0,   798,
     0,     0,   196,     0,     0,     0,   148,     0,     0,     0,
     0,     0,    -1,     1,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   493,     0,     0,     0,  -250,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     2,   157,    76,   329,
   330,   160,     0,     0,     0,     0,     0,     3,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1025,     0,  -359,
  -359,  -359,     0,     4,     0,     0,     0,     5,     6,     7,
     0,     0,   331,     0,     0,     0,     0,     0,     0,     0,
   798,     8,     9,    10,     0,     0,     0,     0,   331,     0,
     0,   198,     0,     0,     0,    76,   329,   330,   160,     0,
    11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,   331,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    -2,     1,
     0,    76,    77,    78,     0,    79,    80,    81,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  -250,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     3,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  -359,  -359,  -359,     0,     4,
     0,     0,     0,     5,     6,     7,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    11,    12,    13,     0,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,     0,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,     0,     0,     0,    76,    77,    78,
   125,    79,    80,    81,     0,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   137,  -494,   565,
     0,     0,     0,   138,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,  -250,  -250,     0,     3,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  -359,  -359,  -359,   148,
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
    71,    72,    73,    74,    75,     0,     0,     0,    76,   158,
   566,   160,   161,    80,    81,   125,     0,     0,     0,     0,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   137,  -494,     0,     0,     0,     0,   138,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -250,  -250,     0,     0,
   145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -250,  -250,  -250,   148,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,  -250,  -250,  -250,   157,  -250,  -250,  -250,  -250,
  -250,  -250,  -250,  -250,  -250,  -250,     0,  -250,  -250,  -250,
  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
  -250,  -250,     0,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
     0,     0,     0,    76,   158,   159,   160,   161,    80,  -250,
   201,     0,     0,     0,     0,   126,   127,   128,     0,     0,
   202,   131,   132,   133,   134,   135,   136,   203,  -494,  -498,
     0,     0,     0,   204,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,  -250,  -250,     0,     0,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  -250,  -250,  -250,   148,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   156,  -250,  -250,  -250,
   157,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
  -250,     0,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
  -250,  -250,  -250,  -250,  -250,  -250,  -250,     0,  -250,  -250,
  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
  -250,  -250,  -250,  -250,  -250,     0,     0,     0,    76,   158,
   159,   160,   205,   206,  -250,   201,     0,     0,     0,     0,
   126,   127,   128,     0,     0,   202,   131,   132,   133,   134,
   135,   136,   203,  -442,  -442,     0,     0,     0,   204,  -442,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -250,  -250,   125,     0,
   145,   146,   147,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -494,     0,     0,     0,
     0,   138,     0,     0,   148,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -250,
  -250,     0,     0,   145,   146,   147,  -442,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    76,   158,   159,   160,   205,   206,     0,
     0,   125,     0,     0,     0,     0,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   137,  -494,
     0,     0,     0,     0,   138,     0,     0,     0,     0,   139,
   140,   141,   142,   143,   144,     0,    76,   158,   159,   160,
   161,    80,  -250,  -250,   201,     0,   145,   146,   147,   126,
   127,   128,     0,     0,   202,   131,   132,   133,   134,   135,
   136,   203,  -494,  -498,     0,     0,     0,   204,     0,     0,
   148,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,     0,     0,  -250,  -250,     0,     0,   145,
   146,   147,  -469,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
     0,   157,     0,   148,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  -438,   150,   151,   152,   153,
   154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
   156,     0,     0,     0,   157,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
   158,   159,   160,   161,    80,     0,     0,   125,     0,     0,
     0,     0,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   137,  -494,   658,     0,     0,     0,
   138,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,    76,   158,   159,   160,   205,   206,  -250,  -250,
   201,     0,   145,   146,   147,   126,   127,   128,     0,     0,
   202,   131,   132,   133,   134,   135,   136,   203,  -494,  -498,
     0,     0,     0,   204,     0,     0,   148,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,  -250,  -250,     0,     0,   145,   146,   147,     0,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   156,     0,     0,     0,   157,     0,   148,
     0,  -494,     0,     0,     0,     0,   368,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,   145,   146,
   147,     0,     0,     0,     0,     0,   156,     0,     0,     0,
   157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    76,   158,   159,   160,   161,
    80,     0,     0,   125,     0,     0,     0,     0,   126,   127,
   128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
   137,  -494,     0,   157,     0,     0,   138,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,     0,    76,   158,
   159,   160,   205,   206,  -250,  -250,     0,     0,   145,   146,
   147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    76,   329,   330,   160,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   156,
   126,   127,   128,   157,   129,   130,   131,   132,   133,   134,
   135,   136,   203,  -494,   580,     0,     0,     0,   368,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -250,  -250,     0,     3,
   145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   148,     4,     0,     0,     0,     0,
     0,    76,   158,   159,   160,   161,    80,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   581,    11,    12,    13,   157,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
   369,   370,   371,    76,   158,   566,   160,   161,    80,    81,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   203,  -494,   659,     0,     0,     0,   368,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -250,  -250,     0,     3,
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
   369,   370,   371,    76,   158,   566,   160,   161,    80,    81,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   203,  -494,   670,     0,     0,     0,   368,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -250,  -250,     0,     3,
   145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   148,     4,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   671,    11,    12,    13,   157,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
   369,   370,   371,    76,   158,   566,   160,   161,    80,    81,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   203,  -494,   669,     0,     0,     0,   368,     0,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   145,   146,   147,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -494,   673,     0,     0,
     0,   368,     0,     0,   148,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   146,   147,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   674,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   369,   370,   371,    76,   158,   159,   160,   161,    80,     0,
     0,     0,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   203,  -494,   726,     0,     0,     0,
   368,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,     0,   369,   370,   371,    76,   158,   159,   160,
   161,    80,   145,   146,   147,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -494,   779,
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
     0,     0,   369,   370,   371,    76,   158,   159,   160,   161,
    80,     0,     0,     0,   126,   127,   128,     0,   129,   130,
   131,   132,   133,   134,   135,   136,   203,  -494,   780,     0,
     0,     0,   368,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,   369,   370,   371,    76,   158,
   159,   160,   161,    80,   145,   146,   147,   126,   127,   128,
     0,   129,   130,   131,   132,   133,   134,   135,   136,   203,
  -494,   782,     0,     0,     0,   368,     0,     0,   148,     0,
   139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   145,   146,   147,
     0,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   781,     0,     0,     0,   157,
     0,   148,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
     0,     0,   157,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   369,   370,   371,    76,   158,   159,
   160,   161,    80,     0,     0,     0,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   203,  -494,
   903,     0,     0,     0,   368,     0,     0,     0,     0,   139,
   140,   141,   142,   143,   144,     0,     0,   369,   370,   371,
    76,   158,   159,   160,   161,    80,   145,   146,   147,   126,
   127,   128,     0,   129,   130,   131,   132,   133,   134,   135,
   136,   203,  -494,     0,     0,     0,     0,   368,     0,     0,
   148,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   145,
   146,   147,     0,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
     0,   157,     0,   148,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   150,   151,   152,   153,
   154,   155,   293,     0,     0,     0,     0,     0,     0,     0,
   156,     0,     0,     0,   157,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
     0,     0,     0,     0,     0,     0,   369,   370,   371,    76,
   158,   159,   160,   161,    80,     0,     0,     0,     0,     0,
     0,  -359,  -359,  -359,     0,     4,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
   370,   371,    76,   158,   159,   160,   161,    80,     0,     0,
     0,     0,    11,    12,    13,     0,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
   293,     0,     0,     0,     0,   120,     0,     0,     0,    81,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     3,   797,     0,
     0,     0,     0,   328,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     4,     0,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  -628,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
   157,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,     0,  -116,
     0,     0,     0,   120,  -116,     0,     0,    81,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     3,     0,     0,    76,   329,
   330,   160,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
    13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,   288,     0,     0,     0,
     0,   120,     0,     0,     0,    81,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -497,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    11,    12,    13,     0,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,     0,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,     0,     0,     0,     0,     0,   120,    11,
    12,    13,    81,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,  -635,     0,     0,
     0,     0,   120,     0,     0,     0,    81,     0,     0,     0,
   328,     0,     0,   628,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   145,   146,   147,     0,     0,     0,     0,     0,
     0,     0,  -637,  -637,  -637,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   148,     0,     0,     0,
  -637,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  -637,  -637,  -637,     0,  -637,  -637,  -637,
  -637,  -637,  -637,  -637,  -637,  -637,  -637,   157,  -637,  -637,
  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
  -637,  -637,  -637,     0,  -637,  -637,  -637,  -637,  -637,  -637,
  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
  -637,  -250,     0,     0,     0,     0,     0,     0,     0,     0,
  -637,     2,     0,     0,     0,    76,   329,   330,   160,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   328,     0,
     0,   709,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   148,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    11,    12,    13,     0,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,   157,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,     0,     0,     0,    76,    77,    78,     0,
    79,    80,    81,     0,     0,   328,   947,     0,     0,     0,
   139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
     0,     0,     0,    76,   329,   330,   160,   145,   146,   147,
   328,  -232,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   328,   148,   145,   146,   147,   139,   140,   141,   142,   143,
   144,   357,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,   145,   146,   147,     0,   148,     0,     0,     0,
     0,   654,     0,   145,   146,   147,   139,   140,   141,   142,
   143,   144,   157,     0,     0,     0,   148,     0,     0,     0,
     0,     0,     0,   145,   146,   147,   656,   148,     0,     0,
     0,   139,   140,   141,   142,   143,   144,   157,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   148,   145,   146,
   147,     0,     0,   729,     0,     0,     0,   157,   730,   731,
   732,   733,   734,   735,     0,     0,     0,     0,   157,     0,
     0,     0,   148,     0,     0,   145,   736,   737,     0,     0,
    76,   329,   330,   160,     0,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   738,
     0,     0,     0,     0,     0,    76,   329,   330,   160,     0,
     0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    76,   329,   330,   160,     0,
     0,     0,     0,     0,     0,     0,    76,   329,   330,   160,
   157,     0,     0,     0,     0,     0,  -176,  -176,     0,     0,
     0,     0,     0,     0,     0,     0,    76,   329,   330,   160,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    76,   329,   330,   160,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    76,   739,
   740,   741,    11,    12,    13,     0,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     3,     0,     0,     0,     0,   120,     0,     0,     0,    81,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  -359,  -359,  -359,     0,     4,     0,     0,     0,
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
    75,     3,     0,     0,     0,     0,   120,     0,     0,     0,
    81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
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
    74,    75,  -359,  -359,  -359,     0,     0,   120,     0,     0,
     0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    11,    12,    13,     0,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,     8,     9,    10,     0,     0,   120,     0,     0,     0,
    81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,     0,     0,
     0,     0,     0,   120,    11,    12,    13,    81,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,     0,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,     0,     0,     0,     0,     0,   120,     0,     0,
     0,    81
};

static const short yycheck[] = {     0,
   366,     0,     3,   106,     0,   469,    89,   501,   368,     2,
    11,    12,   626,   630,   126,   560,   418,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,   452,   789,     9,    10,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,   303,   322,   419,     0,   407,   408,
     3,    26,     5,   664,    75,   777,   664,     0,   479,    34,
     3,    82,    24,    82,     7,   451,    82,    18,   797,   684,
    18,   800,    34,    24,   711,   455,   409,   410,   664,   100,
    24,   911,   417,    34,   803,   106,   415,   416,   809,     8,
    34,   917,     8,    24,     5,   116,   117,   118,   320,   664,
   113,   122,     0,    86,    87,    26,   558,    28,   719,   122,
    28,   719,   215,   499,    25,   204,    41,   138,    18,    26,
   209,    41,   211,    44,   145,    28,    44,    34,   192,    82,
    85,    56,    24,   719,   223,    27,    56,    86,    87,    82,
    34,    44,    34,    96,    97,   910,    99,   912,    26,   908,
    28,    21,   911,   569,   719,    21,   411,   412,   413,   414,
    21,    27,     8,   106,    25,    21,    44,   993,   584,   122,
  1000,    27,  1002,   788,   896,   904,   791,  1103,  1104,   122,
   901,    21,   611,   204,    82,    25,    24,     8,   702,    29,
   133,   612,    18,  1038,  1039,    21,   179,   180,    18,     9,
    10,    21,   921,   480,   179,   180,   181,   587,   183,   184,
    18,    18,   664,    21,   108,   109,    23,   179,   180,   138,
   204,  1147,   138,    18,   610,   209,    21,   211,   179,   180,
   179,   180,    24,    21,   366,   179,   180,    25,    24,   223,
   224,  1000,   664,  1002,    21,    21,   632,   506,    25,    25,
     0,     5,  1097,     3,    24,  1100,    26,     7,     8,     9,
    10,    49,    50,   182,    34,   286,   182,   719,    21,    24,
   291,    25,    25,   292,   190,   194,  1005,   196,   194,    21,
   196,   302,   303,    25,   305,   306,   302,   179,   180,    24,
   182,   664,   138,     5,   931,     5,    18,   719,   319,  1144,
   814,   935,    18,   319,   325,   664,   225,   328,    25,   225,
   374,    28,   877,    25,    24,    25,    26,   138,   382,   451,
   384,    86,    87,    21,    34,   428,   347,    25,    24,   664,
    26,   664,    82,   592,   347,   664,   182,   139,   140,   141,
   142,   143,   144,    24,   190,    21,   719,   368,   194,    25,
   196,   116,   117,    21,     6,     7,   106,    25,   447,   302,
   719,   182,   305,   306,   307,   130,    21,   499,    16,   190,
    25,   982,   122,   194,   982,   196,   319,   636,    18,   225,
    16,    21,   325,   133,   719,   607,   719,    21,   138,   453,
   719,    25,    16,   346,   204,   654,   982,   656,    24,   209,
    26,   211,     5,    21,   225,    16,   156,    25,   794,   664,
    67,    68,    69,   223,   224,    25,    26,   982,    28,    53,
    54,    39,    15,   875,   443,   179,   180,   181,  1123,   183,
   184,    22,   182,   454,    44,  1130,   457,  1132,   454,    22,
   190,   457,   192,   464,   194,   466,   196,   468,   469,    21,
   471,   873,    22,    25,   204,   476,   520,    18,   479,   209,
    21,   211,    23,   447,   719,   486,   479,   179,   180,   181,
   729,   183,   184,   223,   224,   225,    29,   498,   610,    39,
   501,    19,   503,    25,    26,   506,    28,    34,    35,    36,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
   632,   874,    44,   862,   863,   569,    21,   460,    40,   428,
    25,   454,   428,    18,   457,    21,    21,    32,    33,    25,
   584,   585,    55,    98,   467,   100,   469,   102,   471,   104,
   982,   864,   865,    92,   109,     5,   479,   872,    24,   482,
    26,   870,   871,   486,   119,    21,   121,    21,    92,    25,
   569,    25,   302,    49,    50,   305,   306,   307,    37,    38,
   982,   941,    21,  1077,    18,   584,    25,    21,   589,   319,
    19,   592,    51,    52,  1058,   325,   179,   180,   181,   702,
   183,   184,   428,    22,   605,   606,   529,   530,   163,    21,
    21,   612,    22,    25,    25,    24,   660,   661,    27,   612,
    32,    33,   404,   405,   406,    34,    24,   428,   672,   982,
   631,   866,   867,   868,   869,   636,    24,    22,    26,   369,
   370,   371,    18,   982,   374,    21,    34,    21,   649,   650,
    92,    25,   382,   654,   384,   656,    34,   447,    20,   703,
    21,   179,   180,   181,    25,   183,   184,   982,    24,   982,
    26,    18,   568,   982,    21,    25,    26,   678,    34,    24,
    21,    26,   794,     5,    25,   686,   619,   688,    19,   612,
    92,   692,   693,    34,    35,    36,   697,    34,   428,    27,
   701,   702,    24,    25,    26,    24,   707,    22,    97,   702,
    99,   814,    34,    18,   707,    18,   828,   447,    24,    34,
    18,   923,   504,   453,   454,    32,    33,   457,   729,   179,
   180,   181,    22,   183,   184,    23,   291,   467,    18,   469,
   295,   471,   568,    34,    35,    36,  1112,   982,    85,   479,
    18,    21,   482,    21,    25,    25,   486,    25,   313,    53,
    54,   316,    37,    38,   687,    25,   689,   568,    24,   324,
   179,   180,   327,   182,    18,   698,    51,    52,   701,   702,
    21,  1020,    21,   784,    25,   987,    25,    18,  1154,    18,
   520,   179,   180,   181,    21,   183,   184,   185,    25,   529,
   530,   179,   180,   181,  1006,   183,   184,    42,    43,  1011,
    49,    50,   813,   814,    21,   816,    21,    18,    25,    18,
    25,   814,   179,   179,   180,   181,  1028,   183,   184,   179,
   180,   181,  1034,   183,   184,    19,    21,     9,   568,   569,
    25,  1043,   179,   180,    49,    50,   183,   184,    21,    20,
    21,   581,    25,   786,   584,   585,   789,   179,   180,   181,
    18,   183,   184,    21,   179,   180,   181,    25,   183,   184,
  1072,  1073,    11,  1075,    21,    22,   119,    25,   121,   179,
   180,   181,   612,   183,   184,    72,    73,    74,    24,   132,
   133,   814,   135,    11,   137,   138,    21,   452,    24,    21,
    25,   824,   985,    25,   459,  1107,   907,   150,    21,   464,
    21,   466,    25,   914,    25,    21,    21,    21,    21,   474,
    25,    25,    25,   478,    37,    38,  1009,    49,    50,    21,
   660,   661,    21,    25,   664,    88,    25,    19,    51,    52,
    19,   671,   672,    19,   674,    32,    33,  1149,   730,   731,
   732,   733,   734,   735,    21,    49,    50,   687,    25,   689,
    24,    21,    26,    21,    28,    25,    21,    25,   698,    19,
    25,   701,   702,   703,  1077,   908,    88,   910,   911,   912,
    44,    21,    27,    47,    48,    25,    24,    21,    26,   719,
    28,    25,    24,   994,    53,    54,   997,    25,    23,    21,
  1112,   997,    72,    73,    74,    22,    44,    20,    21,    47,
    48,    21,  1013,    21,  1015,    25,  1128,  1013,    18,  1020,
  1013,    24,  1023,  1024,    34,    35,    36,   950,   951,  1028,
    21,   586,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,  1154,     8,     9,    10,    20,    21,    21,    22,
    22,   781,   179,   180,    25,    11,   611,  1058,   182,  1060,
  1061,   182,   182,    24,    24,    24,    21,  1000,    25,  1002,
    25,    23,    20,  1072,   997,   630,  1077,   859,   860,   861,
   635,    27,    37,    38,   814,    19,    23,    20,    19,    21,
  1013,     5,    27,  1016,   824,    25,    51,    52,    24,    22,
    88,    88,     8,     9,    10,     8,   126,    88,    24,  1110,
    25,   666,  1113,    20,    27,  1116,    20,  1113,    18,   139,
   140,   141,   142,   143,   144,    18,   146,   147,    78,    79,
    80,    81,    82,    83,    84,  1058,    25,    25,     8,     9,
    10,    27,    21,    25,    25,    25,    24,     8,     9,    10,
    40,    25,    29,    55,  1077,    39,    25,    23,   176,    88,
    24,    18,    25,   945,    18,    25,    25,    25,    21,   176,
  1171,    18,    21,   138,    18,  1098,  1099,  1178,    88,   184,
   182,    21,    20,    22,    20,    18,    20,   742,    25,    88,
  1113,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    72,    73,    74,    25,    88,    20,    78,    79,    80,
    81,    82,    83,    84,    27,    88,    88,   182,    73,    27,
   950,   951,  1145,  1146,     0,   190,    88,     0,   325,   194,
   778,   196,   138,   136,    82,   138,    88,    88,    88,   204,
   205,  1010,   902,  1036,   209,  1089,   211,   802,   928,   896,
  1144,  1011,   982,  1109,   984,   843,   471,   987,   223,   224,
   225,  1113,   592,    72,    73,    74,   689,   997,   138,    78,
    79,    80,    81,    82,    83,    84,   182,   138,   814,   182,
   687,  1011,   113,  1013,   190,   701,  1016,   190,   194,    10,
   196,   194,   520,   196,   347,   428,   224,  1082,   204,   719,
   982,   204,    -1,   209,    -1,   211,    -1,  1037,  1038,  1039,
    -1,    -1,   182,    -1,    -1,    -1,  1046,   223,   224,   225,
   190,   182,   225,    -1,   194,    -1,   196,    -1,  1058,   190,
     8,     9,    10,   194,   204,   196,    -1,    -1,    -1,   209,
    -1,   211,    -1,   204,   899,   900,   366,  1077,   209,    -1,
   211,    -1,   907,   223,   224,   225,    -1,    -1,    -1,    -1,
    -1,    -1,   223,   224,   225,    -1,    -1,  1097,  1098,  1099,
  1100,    -1,    -1,  1103,  1104,    -1,   931,    -1,    -1,  1109,
    -1,    -1,    -1,  1113,   404,   405,   406,   407,   408,   409,
   410,   411,   412,   413,   414,   415,   416,   417,   418,   419,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,  1144,  1145,  1146,  1147,    -1,    -1,
    -1,    -1,   387,    -1,    -1,   328,    -1,    -1,    -1,    -1,
    -1,   451,    -1,   336,   337,   338,   339,    -1,    -1,    -1,
   995,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   357,   360,    -1,    -1,    -1,    -1,
   138,    -1,    -1,   428,    -1,   368,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,
    -1,    -1,   447,   388,   504,    -1,   389,    -1,   393,   394,
   395,   396,   397,   398,   399,   400,   401,   402,   403,    -1,
    -1,    -1,    -1,    -1,   182,    -1,    -1,  1062,    -1,    -1,
    -1,    -1,   190,    -1,    -1,    -1,   194,    -1,   196,   424,
    -1,    -1,   428,    -1,    -1,   428,   204,    -1,    -1,    -1,
    -1,   209,   435,   211,    -1,    -1,    -1,    -1,   558,    -1,
   560,   447,   562,   563,    -1,   223,   224,   225,    -1,    -1,
    -1,     8,     9,    10,    -1,    -1,    -1,    -1,   428,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,
    -1,    -1,   138,    -1,    -1,    -1,    -1,   447,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,
   610,    -1,    -1,    -1,    -1,    -1,    -1,  1152,    -1,    -1,
    -1,    -1,    -1,   568,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   632,    -1,    -1,    -1,   182,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,   194,    -1,
   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,
    -1,    -1,    -1,   209,   664,   211,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   559,   223,   224,   225,
    -1,    -1,   568,    -1,    -1,   568,    -1,    -1,    -1,    -1,
    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
    -1,   138,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   568,   719,
    46,    47,    48,    -1,    -1,    -1,    -1,   568,    -1,    -1,
   730,   731,   732,   733,   734,   735,   736,   737,    -1,    -1,
    -1,    -1,    -1,   626,    70,   182,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   190,    -1,    -1,    -1,   194,    -1,   196,
    -1,   646,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,
   428,   654,   209,   656,   211,    -1,    -1,    -1,    -1,   662,
    -1,    -1,   665,    -1,    -1,   111,   223,   224,   225,   447,
    -1,    24,    25,    -1,   794,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,   691,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   828,    -1,
    -1,    -1,    -1,    -1,    -1,   718,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   729,    -1,    -1,    -1,
    -1,    -1,    -1,   179,   180,   181,   182,    -1,    -1,   859,
   860,   861,   862,   863,   864,   865,   866,   867,   868,   869,
   870,   871,   872,   873,   874,   875,    -1,   877,   111,    -1,
    -1,    -1,   428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   447,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
   568,    -1,   797,    24,    -1,   800,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   945,   179,   180,   181,   182,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   842,   843,    70,
    -1,   844,    -1,   848,   849,   850,   851,   852,   853,   854,
   855,   856,   857,   858,    -1,    19,    20,    -1,    -1,    -1,
    24,    -1,   982,    -1,    -1,    29,    30,    31,    32,    33,
    34,   428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   111,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
   447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   904,
    -1,    -1,   568,    -1,    -1,    -1,    70,    -1,    -1,    -1,
    -1,    -1,     0,     1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   935,    -1,    -1,    -1,    24,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    34,   111,   179,   180,
   181,   182,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   980,    -1,    67,
    68,    69,    -1,    71,    -1,    -1,    -1,    75,    76,    77,
    -1,    -1,  1112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1005,    89,    90,    91,    -1,    -1,    -1,    -1,  1128,    -1,
    -1,   568,    -1,    -1,    -1,   179,   180,   181,   182,    -1,
   108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,  1154,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,     0,     1,
    -1,   179,   180,   181,    -1,   183,   184,   185,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    71,
    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
    -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
   172,   173,   174,   175,    -1,    -1,    -1,   179,   180,   181,
     1,   183,   184,   185,    -1,     6,     7,     8,    -1,    10,
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
   171,   172,   173,   174,   175,    -1,    -1,    -1,   179,   180,
   181,   182,   183,   184,   185,     1,    -1,    -1,    -1,    -1,
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
    -1,    -1,    -1,   179,   180,   181,   182,   183,   184,   185,
     1,    -1,    -1,    -1,    -1,     6,     7,     8,    -1,    -1,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
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
   171,   172,   173,   174,   175,    -1,    -1,    -1,   179,   180,
   181,   182,   183,   184,   185,     1,    -1,    -1,    -1,    -1,
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
    -1,    -1,    -1,   179,   180,   181,   182,   183,   184,    -1,
    -1,     1,    -1,    -1,    -1,    -1,     6,     7,     8,    -1,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
    30,    31,    32,    33,    34,    -1,   179,   180,   181,   182,
   183,   184,    42,    43,     1,    -1,    46,    47,    48,     6,
     7,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,
    70,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
    47,    48,    92,    93,    94,    95,    96,    97,    98,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
    -1,   111,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
   180,   181,   182,   183,   184,    -1,    -1,     1,    -1,    -1,
    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,   179,   180,   181,   182,   183,   184,    42,    43,
     1,    -1,    46,    47,    48,     6,     7,     8,    -1,    -1,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    42,    43,    -1,    -1,    46,    47,    48,    -1,    93,
    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    70,
    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    93,    94,    95,    96,    97,    98,    46,    47,
    48,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,   183,
   184,    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,     7,
     8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    -1,   111,    -1,    -1,    24,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    -1,   179,   180,
   181,   182,   183,   184,    42,    43,    -1,    -1,    46,    47,
    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   179,   180,   181,   182,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
     6,     7,     8,   111,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    45,
    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
    -1,   179,   180,   181,   182,   183,   184,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
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
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
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
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
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
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,   176,   177,   178,   179,   180,   181,   182,
   183,   184,    46,    47,    48,     6,     7,     8,    -1,    10,
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
   184,    -1,    -1,    -1,     6,     7,     8,    -1,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,   176,   177,   178,   179,   180,
   181,   182,   183,   184,    46,    47,    48,     6,     7,     8,
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
   182,   183,   184,    -1,    -1,    -1,     6,     7,     8,    -1,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,   176,   177,   178,
   179,   180,   181,   182,   183,   184,    46,    47,    48,     6,
     7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,
    70,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
    47,    48,    -1,    93,    94,    95,    96,    97,    98,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
    -1,   111,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
    97,    98,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,   178,   179,
   180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
    -1,    67,    68,    69,    -1,    71,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
   177,   178,   179,   180,   181,   182,   183,   184,    -1,    -1,
    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    18,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    19,    -1,
    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    71,    -1,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
   111,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    -1,    19,
    -1,    -1,    -1,   181,    24,    -1,    -1,   185,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,   179,   180,
   181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    19,    -1,    -1,    -1,
    -1,   181,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,
   113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
   123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
   133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   108,
   109,   110,   185,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,    22,    -1,    -1,
    -1,    -1,   181,    -1,    -1,    -1,   185,    -1,    -1,    -1,
    24,    -1,    -1,    27,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,   111,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   185,    34,    -1,    -1,    -1,   179,   180,   181,   182,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
    -1,    27,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,
   113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
   123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
   133,   134,   135,   136,   137,   111,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,    -1,    -1,    -1,   179,   180,   181,    -1,
   183,   184,   185,    -1,    -1,    24,    25,    -1,    -1,    -1,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   179,   180,   181,   182,    46,    47,    48,
    24,    25,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    24,    70,    46,    47,    48,    29,    30,    31,    32,    33,
    34,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    46,    47,    48,    -1,    70,    -1,    -1,    -1,
    -1,    24,    -1,    46,    47,    48,    29,    30,    31,    32,
    33,    34,   111,    -1,    -1,    -1,    70,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,    24,    70,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,   111,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    46,    47,
    48,    -1,    -1,    24,    -1,    -1,    -1,   111,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    70,    -1,    -1,    46,    47,    48,    -1,    -1,
   179,   180,   181,   182,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
    -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,    -1,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,
   111,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   179,   180,   181,   182,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,
   181,   182,   108,   109,   110,    -1,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    45,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    67,    68,    69,    -1,    71,    -1,    -1,    -1,
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
   175,    45,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,
   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
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
   174,   175,    67,    68,    69,    -1,    -1,   181,    -1,    -1,
    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    89,    90,    91,    -1,    -1,   181,    -1,    -1,    -1,
   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
    -1,    -1,    -1,   181,   108,   109,   110,   185,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,
    -1,   185
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
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ct);
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
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-7].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-7].ntyp), yyvsp[-4].entrylist));
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
case 48:
#line 382 "cgrammar.y"
{ printf("doingoptGlobBufConstraintsAux \n");  ;
    break;}
case 51:
#line 389 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 52:
#line 390 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 59:
#line 405 "cgrammar.y"
{ ; ;
    break;}
case 60:
#line 406 "cgrammar.y"
{ ; ;
    break;}
case 61:
#line 409 "cgrammar.y"
{ globListAdd (yyvsp[0].sr, yyvsp[-1].tquallist); ;
    break;}
case 62:
#line 412 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); ;
    break;}
case 63:
#line 413 "cgrammar.y"
{ yyval.sr = globListUnrecognized (yyvsp[0].cname); ;
    break;}
case 64:
#line 416 "cgrammar.y"
{ yyval.typequal = qual_createUndef (); ;
    break;}
case 65:
#line 417 "cgrammar.y"
{ yyval.typequal = qual_createKilled (); ;
    break;}
case 66:
#line 418 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 67:
#line 419 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 68:
#line 420 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 69:
#line 423 "cgrammar.y"
{ yyval.tquallist = qualList_undefined; ;
    break;}
case 70:
#line 424 "cgrammar.y"
{ yyval.tquallist = qualList_add (yyvsp[0].tquallist, yyvsp[-1].typequal); ;
    break;}
case 71:
#line 427 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 72:
#line 429 "cgrammar.y"
{ unsetProcessingGlobals (); ;
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
#line 434 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 78:
#line 441 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 79:
#line 443 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 80:
#line 444 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 81:
#line 446 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 82:
#line 448 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 87:
#line 460 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 88:
#line 465 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 89:
#line 473 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 90:
#line 478 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 100:
#line 502 "cgrammar.y"
{ yyval.sck = SP_ISONLY; ;
    break;}
case 101:
#line 503 "cgrammar.y"
{ yyval.sck = SP_ISOBSERVER; ;
    break;}
case 102:
#line 504 "cgrammar.y"
{ yyval.sck = SP_ISEXPOSED; ;
    break;}
case 103:
#line 505 "cgrammar.y"
{ yyval.sck = SP_ISDEPENDENT; ;
    break;}
case 104:
#line 506 "cgrammar.y"
{ yyval.sck = SP_ISOWNED; ;
    break;}
case 105:
#line 507 "cgrammar.y"
{ yyval.sck = SP_ISSHARED; ;
    break;}
case 106:
#line 508 "cgrammar.y"
{ yyval.sck = SP_ISNULL; ;
    break;}
case 107:
#line 509 "cgrammar.y"
{ yyval.sck = SP_ISNOTNULL; ;
    break;}
case 108:
#line 513 "cgrammar.y"
{
     context_setProtectVars (); 
     enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 109:
#line 519 "cgrammar.y"
{ 
     setFunctionSpecialClause (yyvsp[-6].tok, yyvsp[-3].srset, yyvsp[-1].tok); 
     exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 110:
#line 526 "cgrammar.y"
{
      context_setProtectVars (); 
      enterParamsTemp (); 
      sRef_setGlobalScopeSafe (); 
    ;
    break;}
case 111:
#line 532 "cgrammar.y"
{ 
      setFunctionStateSpecialClause (yyvsp[-7].tok, yyvsp[-5].sck, yyvsp[-3].srset, yyvsp[-1].tok); 
      exitParamsTemp ();
      sRef_clearGlobalScopeSafe (); 
      context_releaseVars ();
    ;
    break;}
case 112:
#line 541 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 113:
#line 547 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 114:
#line 550 "cgrammar.y"
{ checkDoneParams (); context_enterInnerContext (); ;
    break;}
case 115:
#line 552 "cgrammar.y"
{  
     exprNode_checkFunctionBody (yyvsp[0].expr); yyval.expr = yyvsp[0].expr; 
     context_exitInner (yyvsp[0].expr); 
   ;
    break;}
case 116:
#line 557 "cgrammar.y"
{ doneParams (); context_enterInnerContext (); ;
    break;}
case 117:
#line 559 "cgrammar.y"
{
     context_exitInner (yyvsp[0].expr);
     exprNode_checkFunctionBody (yyvsp[0].expr); 
     yyval.expr = yyvsp[0].expr; /* old style */ 
   ;
    break;}
case 118:
#line 567 "cgrammar.y"
{ 
     context_setFunctionDefined (exprNode_loc (yyvsp[0].expr)); 
     exprNode_checkFunction (context_getHeader (), yyvsp[0].expr);
     /* DRL 8 8 2000 */
     
     context_exitFunction ();
   ;
    break;}
case 119:
#line 576 "cgrammar.y"
{ yyval.srset = yyvsp[-2].srset; ;
    break;}
case 120:
#line 577 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 121:
#line 580 "cgrammar.y"
{ yyval.srset = yyvsp[-1].srset; ;
    break;}
case 122:
#line 581 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 123:
#line 584 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); checkModifiesId (yyvsp[0].entry); ;
    break;}
case 124:
#line 585 "cgrammar.y"
{ yyval.sr = fixModifiesId (yyvsp[0].cname); ;
    break;}
case 125:
#line 586 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-2].sr, sRef_undefined); ;
    break;}
case 126:
#line 587 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-3].sr, yyvsp[-1].sr); ;
    break;}
case 127:
#line 588 "cgrammar.y"
{ yyval.sr = modListPointer (yyvsp[0].sr); ;
    break;}
case 128:
#line 589 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 129:
#line 590 "cgrammar.y"
{ yyval.sr = modListFieldAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 130:
#line 591 "cgrammar.y"
{ yyval.sr = modListArrowAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 131:
#line 595 "cgrammar.y"
{ yyval.sr = yyvsp[0].sr; ;
    break;}
case 132:
#line 596 "cgrammar.y"
{ yyval.sr = sRef_makeUnknown (); /* sRef_makeConstant ($1); ? */ ;
    break;}
case 133:
#line 600 "cgrammar.y"
{ yyval.srset = sRefSet_single (yyvsp[0].sr); ;
    break;}
case 134:
#line 601 "cgrammar.y"
{ yyval.srset = sRefSet_insert (yyvsp[-2].srset, yyvsp[0].sr); ;
    break;}
case 135:
#line 605 "cgrammar.y"
{ yyval.sr = checkSpecClausesId (yyvsp[0].entry); ;
    break;}
case 136:
#line 607 "cgrammar.y"
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 137:
#line 608 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 138:
#line 609 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-3].sr); ;
    break;}
case 139:
#line 610 "cgrammar.y"
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 140:
#line 611 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 141:
#line 612 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 142:
#line 614 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 143:
#line 619 "cgrammar.y"
{ if (sRef_isValid (yyvsp[0].sr)) { yyval.srset = sRefSet_single (yyvsp[0].sr); } 
      else { yyval.srset = sRefSet_undefined; } 
    ;
    break;}
case 144:
#line 623 "cgrammar.y"
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
case 145:
#line 634 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (yyvsp[0].entry); ;
    break;}
case 146:
#line 635 "cgrammar.y"
{ yyval.expr = exprNode_fromUIO (yyvsp[0].cname); ;
    break;}
case 147:
#line 636 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 148:
#line 637 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 149:
#line 638 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (coerceId (yyvsp[0].cname)); ;
    break;}
case 150:
#line 639 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 152:
#line 643 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 153:
#line 644 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 154:
#line 645 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 155:
#line 646 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 156:
#line 647 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 157:
#line 648 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 158:
#line 649 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 159:
#line 650 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 160:
#line 653 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 161:
#line 654 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 163:
#line 658 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 164:
#line 659 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 165:
#line 660 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 166:
#line 661 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 167:
#line 662 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 168:
#line 663 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 169:
#line 664 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 170:
#line 665 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 171:
#line 666 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 172:
#line 667 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 173:
#line 670 "cgrammar.y"
{ yyval.cstringlist = cstringList_add (yyvsp[-2].cstringlist, yyvsp[0].cname); ;
    break;}
case 174:
#line 671 "cgrammar.y"
{ yyval.cstringlist = cstringList_single (yyvsp[0].cname); ;
    break;}
case 175:
#line 675 "cgrammar.y"
{ yyval.expr = exprNode_offsetof (yyvsp[-5].qtyp, yyvsp[-2].cstringlist); ;
    break;}
case 176:
#line 678 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 177:
#line 679 "cgrammar.y"
{ context_sizeofReleaseVars (); yyval.expr = yyvsp[0].expr; ;
    break;}
case 178:
#line 682 "cgrammar.y"
{ yyval.expr = exprNode_sizeofType (yyvsp[-1].qtyp); ;
    break;}
case 179:
#line 683 "cgrammar.y"
{ yyval.expr = exprNode_sizeofExpr (yyvsp[0].expr); ;
    break;}
case 180:
#line 684 "cgrammar.y"
{ yyval.expr = exprNode_alignofType (yyvsp[-1].qtyp); ;
    break;}
case 181:
#line 685 "cgrammar.y"
{ yyval.expr = exprNode_alignofExpr (yyvsp[0].expr); ;
    break;}
case 183:
#line 690 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 185:
#line 694 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 186:
#line 695 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 187:
#line 696 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 189:
#line 700 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 190:
#line 701 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 192:
#line 705 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 193:
#line 706 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 195:
#line 710 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 196:
#line 711 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 197:
#line 712 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 198:
#line 713 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 200:
#line 717 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 201:
#line 718 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 203:
#line 722 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 205:
#line 726 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 207:
#line 731 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 209:
#line 736 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); 
     context_enterAndClause (yyvsp[-1].expr); 
   ;
    break;}
case 210:
#line 740 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitAndClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 212:
#line 748 "cgrammar.y"
{ 
     exprNode_produceGuards (yyvsp[-1].expr);
     context_enterOrClause (yyvsp[-1].expr); 
   ;
    break;}
case 213:
#line 753 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitOrClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 215:
#line 760 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 216:
#line 761 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 217:
#line 762 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); context_exitClause (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 219:
#line 766 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 220:
#line 767 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 221:
#line 768 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 222:
#line 769 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 223:
#line 770 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 224:
#line 771 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 225:
#line 772 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 226:
#line 773 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 227:
#line 774 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 228:
#line 775 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 229:
#line 776 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 231:
#line 780 "cgrammar.y"
{ yyval.expr = exprNode_comma (yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 232:
#line 783 "cgrammar.y"
{ yyval.expr = exprNode_undefined; ;
    break;}
case 235:
#line 792 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 236:
#line 793 "cgrammar.y"
{ doVaDcl (); yyval.expr = exprNode_makeError (); ;
    break;}
case 237:
#line 794 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 238:
#line 797 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 239:
#line 811 "cgrammar.y"
{
               setProcessingVars (yyvsp[-3].qtyp); 
     processNamedDecl (yyvsp[-1].ntyp); ;
    break;}
case 240:
#line 814 "cgrammar.y"
{ unsetProcessingVars (); yyval.expr = yyvsp[-2].expr; ;
    break;}
case 241:
#line 816 "cgrammar.y"
{ setProcessingVars (yyvsp[-4].qtyp); processNamedDecl (yyvsp[-2].ntyp); 
        ;
    break;}
case 242:
#line 819 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-2].expr, exprNode_makeInitialization (yyvsp[-8].ntyp, yyvsp[-3].expr)); 
     unsetProcessingVars ();
   ;
    break;}
case 243:
#line 823 "cgrammar.y"
{ processNamedDecl (yyvsp[-1].ntyp); yyval.expr = exprNode_makeError (); ;
    break;}
case 244:
#line 824 "cgrammar.y"
{ processNamedDecl (yyvsp[-2].ntyp); ;
    break;}
case 245:
#line 825 "cgrammar.y"
{ yyval.expr = exprNode_makeInitialization (yyvsp[-5].ntyp, yyvsp[0].expr); ;
    break;}
case 246:
#line 829 "cgrammar.y"
{ setProcessingTypedef (yyvsp[0].qtyp); ;
    break;}
case 247:
#line 830 "cgrammar.y"
{ unsetProcessingTypedef (); ;
    break;}
case 248:
#line 831 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 249:
#line 832 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 250:
#line 835 "cgrammar.y"
{ g_expectingTypeName = TRUE; ;
    break;}
case 251:
#line 838 "cgrammar.y"
{ g_expectingTypeName = TRUE; context_pushLoc (); ;
    break;}
case 252:
#line 841 "cgrammar.y"
{ ; ;
    break;}
case 253:
#line 844 "cgrammar.y"
{ ; ;
    break;}
case 254:
#line 845 "cgrammar.y"
{ ; ;
    break;}
case 255:
#line 848 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 256:
#line 849 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 257:
#line 852 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 258:
#line 853 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-2].tok, yyvsp[-1].alist); ;
    break;}
case 259:
#line 854 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-3].tok, yyvsp[-2].alist); ;
    break;}
case 260:
#line 859 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 261:
#line 861 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 262:
#line 869 "cgrammar.y"
{ setStorageClass (SCEXTERN); yyval.typequal = qual_createExtern (); ;
    break;}
case 263:
#line 870 "cgrammar.y"
{ yyval.typequal = qual_createInline (); ;
    break;}
case 264:
#line 871 "cgrammar.y"
{ setStorageClass (SCSTATIC); yyval.typequal = qual_createStatic (); ;
    break;}
case 265:
#line 872 "cgrammar.y"
{ yyval.typequal = qual_createAuto (); ;
    break;}
case 266:
#line 873 "cgrammar.y"
{ yyval.typequal = qual_createRegister (); ;
    break;}
case 267:
#line 876 "cgrammar.y"
{ yyval.typequal = qual_createConst (); ;
    break;}
case 268:
#line 877 "cgrammar.y"
{ yyval.typequal = qual_createVolatile (); ;
    break;}
case 269:
#line 878 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 270:
#line 879 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 271:
#line 880 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 272:
#line 881 "cgrammar.y"
{ yyval.typequal = qual_createSpecial (); ;
    break;}
case 273:
#line 882 "cgrammar.y"
{ yyval.typequal = qual_createOwned (); ;
    break;}
case 274:
#line 883 "cgrammar.y"
{ yyval.typequal = qual_createDependent (); ;
    break;}
case 275:
#line 884 "cgrammar.y"
{ yyval.typequal = qual_createYield (); ;
    break;}
case 276:
#line 885 "cgrammar.y"
{ yyval.typequal = qual_createTemp (); ;
    break;}
case 277:
#line 886 "cgrammar.y"
{ yyval.typequal = qual_createOnly (); ;
    break;}
case 278:
#line 887 "cgrammar.y"
{ yyval.typequal = qual_createKeep (); ;
    break;}
case 279:
#line 888 "cgrammar.y"
{ yyval.typequal = qual_createKept (); ;
    break;}
case 280:
#line 889 "cgrammar.y"
{ yyval.typequal = qual_createShared (); ;
    break;}
case 281:
#line 890 "cgrammar.y"
{ yyval.typequal = qual_createUnique (); ;
    break;}
case 282:
#line 891 "cgrammar.y"
{ yyval.typequal = qual_createExits (); ;
    break;}
case 283:
#line 892 "cgrammar.y"
{ yyval.typequal = qual_createMayExit (); ;
    break;}
case 284:
#line 893 "cgrammar.y"
{ yyval.typequal = qual_createTrueExit (); ;
    break;}
case 285:
#line 894 "cgrammar.y"
{ yyval.typequal = qual_createFalseExit (); ;
    break;}
case 286:
#line 895 "cgrammar.y"
{ yyval.typequal = qual_createNeverExit (); ;
    break;}
case 287:
#line 896 "cgrammar.y"
{ yyval.typequal = qual_createNull (); ;
    break;}
case 288:
#line 897 "cgrammar.y"
{ yyval.typequal = qual_createRelNull (); ;
    break;}
case 289:
#line 898 "cgrammar.y"
{ yyval.typequal = qual_createReturned (); ;
    break;}
case 290:
#line 899 "cgrammar.y"
{ yyval.typequal = qual_createExposed (); ;
    break;}
case 291:
#line 900 "cgrammar.y"
{ yyval.typequal = qual_createObserver (); ;
    break;}
case 292:
#line 901 "cgrammar.y"
{ yyval.typequal = qual_createChecked (); ;
    break;}
case 293:
#line 902 "cgrammar.y"
{ yyval.typequal = qual_createCheckMod (); ;
    break;}
case 294:
#line 903 "cgrammar.y"
{ yyval.typequal = qual_createUnchecked (); ;
    break;}
case 295:
#line 904 "cgrammar.y"
{ yyval.typequal = qual_createCheckedStrict (); ;
    break;}
case 296:
#line 905 "cgrammar.y"
{ yyval.typequal = qual_createTrueNull (); ;
    break;}
case 297:
#line 906 "cgrammar.y"
{ yyval.typequal = qual_createFalseNull (); ;
    break;}
case 298:
#line 907 "cgrammar.y"
{ yyval.typequal = qual_createUnused (); ;
    break;}
case 299:
#line 908 "cgrammar.y"
{ yyval.typequal = qual_createExternal (); ;
    break;}
case 300:
#line 909 "cgrammar.y"
{ yyval.typequal = qual_createSef (); ;
    break;}
case 301:
#line 910 "cgrammar.y"
{ yyval.typequal = qual_createAbstract (); ;
    break;}
case 302:
#line 911 "cgrammar.y"
{ yyval.typequal = qual_createConcrete (); ;
    break;}
case 303:
#line 912 "cgrammar.y"
{ yyval.typequal = qual_createMutable (); ;
    break;}
case 304:
#line 913 "cgrammar.y"
{ yyval.typequal = qual_createImmutable (); ;
    break;}
case 305:
#line 914 "cgrammar.y"
{ yyval.typequal = qual_createNotNull (); ;
    break;}
case 306:
#line 915 "cgrammar.y"
{ yyval.typequal = qual_createRefCounted (); ;
    break;}
case 307:
#line 916 "cgrammar.y"
{ yyval.typequal = qual_createRefs (); ;
    break;}
case 308:
#line 917 "cgrammar.y"
{ yyval.typequal = qual_createKillRef (); ;
    break;}
case 309:
#line 918 "cgrammar.y"
{ yyval.typequal = qual_createRelDef (); ;
    break;}
case 310:
#line 919 "cgrammar.y"
{ yyval.typequal = qual_createNewRef (); ;
    break;}
case 311:
#line 920 "cgrammar.y"
{ yyval.typequal = qual_createTempRef (); ;
    break;}
case 312:
#line 921 "cgrammar.y"
{ yyval.typequal = qual_createNullTerminated (); ;
    break;}
case 313:
#line 927 "cgrammar.y"
{ yyval.typequal = qual_createShort (); ;
    break;}
case 314:
#line 928 "cgrammar.y"
{ yyval.typequal = qual_createLong (); ;
    break;}
case 315:
#line 929 "cgrammar.y"
{ yyval.typequal = qual_createSigned (); ;
    break;}
case 316:
#line 930 "cgrammar.y"
{ yyval.typequal = qual_createUnsigned (); ;
    break;}
case 323:
#line 939 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 324:
#line 940 "cgrammar.y"
{ yyval.ctyp = ctype_anyintegral; ;
    break;}
case 325:
#line 941 "cgrammar.y"
{ yyval.ctyp = ctype_unsignedintegral; ;
    break;}
case 326:
#line 942 "cgrammar.y"
{ yyval.ctyp = ctype_signedintegral; ;
    break;}
case 330:
#line 946 "cgrammar.y"
{ yyval.ctyp = ctype_fromQual (yyvsp[-1].typequal); ;
    break;}
case 331:
#line 950 "cgrammar.y"
{ yyval.qtyp = qtype_resolve (yyvsp[-1].qtyp); ;
    break;}
case 332:
#line 953 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 333:
#line 955 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-3].qtyp, yyvsp[-1].qtyp); ;
    break;}
case 335:
#line 960 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-2].qtyp, yyvsp[0].qtyp); ;
    break;}
case 336:
#line 963 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 337:
#line 964 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 338:
#line 965 "cgrammar.y"
{ yyval.qtyp = qtype_combine (yyvsp[0].qtyp, yyvsp[-1].ctyp); ;
    break;}
case 339:
#line 968 "cgrammar.y"
{ yyval.qtyp = qtype_unknown (); ;
    break;}
case 340:
#line 969 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 341:
#line 972 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 342:
#line 974 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 343:
#line 976 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 344:
#line 977 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 345:
#line 979 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 346:
#line 981 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 347:
#line 983 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 348:
#line 985 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 349:
#line 986 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 350:
#line 988 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 351:
#line 990 "cgrammar.y"
{ yyval.ctyp = declareUnnamedStruct (yyvsp[-3].flist); ;
    break;}
case 352:
#line 991 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 353:
#line 993 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 354:
#line 995 "cgrammar.y"
{ yyval.ctyp = declareUnnamedUnion (yyvsp[-3].flist); ;
    break;}
case 355:
#line 997 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedStruct (uentryList_new ()); ;
    break;}
case 356:
#line 999 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedUnion (uentryList_new ()); ;
    break;}
case 357:
#line 1000 "cgrammar.y"
{ yyval.ctyp = handleStruct (yyvsp[-1].cname); ;
    break;}
case 358:
#line 1001 "cgrammar.y"
{ yyval.ctyp = handleUnion (yyvsp[-1].cname); ;
    break;}
case 359:
#line 1004 "cgrammar.y"
{ g_expectingTypeName = FALSE; ;
    break;}
case 361:
#line 1008 "cgrammar.y"
{ yyval.flist = uentryList_undefined; /* bogus! */ ;
    break;}
case 362:
#line 1009 "cgrammar.y"
{ yyval.flist = uentryList_mergeFields (yyvsp[-1].flist, yyvsp[0].flist); ;
    break;}
case 363:
#line 1013 "cgrammar.y"
{ yyval.flist = fixUentryList (yyvsp[-2].ntyplist, yyvsp[-4].qtyp); ;
    break;}
case 364:
#line 1015 "cgrammar.y"
{ yyval.flist = fixUnnamedDecl (yyvsp[-2].qtyp); ;
    break;}
case 365:
#line 1019 "cgrammar.y"
{ yyval.ntyplist = idDeclList_singleton (yyvsp[-1].ntyp); ;
    break;}
case 366:
#line 1021 "cgrammar.y"
{ yyval.ntyplist = idDeclList_add (yyvsp[-3].ntyplist, yyvsp[-1].ntyp); ;
    break;}
case 367:
#line 1024 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; ;
    break;}
case 368:
#line 1025 "cgrammar.y"
{ yyval.ntyp = idDecl_undefined; ;
    break;}
case 369:
#line 1026 "cgrammar.y"
{ yyval.ntyp = yyvsp[-3].ntyp; ;
    break;}
case 370:
#line 1031 "cgrammar.y"
{ yyval.ctyp = declareUnnamedEnum (yyvsp[-2].enumnamelist); ;
    break;}
case 371:
#line 1032 "cgrammar.y"
{ context_pushLoc (); ;
    break;}
case 372:
#line 1033 "cgrammar.y"
{ context_popLoc (); yyval.ctyp = declareEnum (yyvsp[-5].cname, yyvsp[-2].enumnamelist); ;
    break;}
case 373:
#line 1034 "cgrammar.y"
{ yyval.ctyp = handleEnum (yyvsp[-1].cname); ;
    break;}
case 374:
#line 1038 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_single (yyvsp[0].cname); ;
    break;}
case 375:
#line 1040 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_push (yyvsp[-2].enumnamelist, yyvsp[0].cname); ;
    break;}
case 377:
#line 1045 "cgrammar.y"
{ uentry ue = uentry_makeEnumConstant (yyvsp[0].cname, ctype_unknown);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[0].cname;
   ;
    break;}
case 378:
#line 1050 "cgrammar.y"
{ uentry ue = uentry_makeEnumInitializedConstant (yyvsp[-3].cname, ctype_unknown, yyvsp[0].expr);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[-3].cname; 
   ;
    break;}
case 380:
#line 1057 "cgrammar.y"
{ yyval.ntyp = idDecl_create (cstring_undefined, qtype_create (yyvsp[0].ctyp)); ;
    break;}
case 381:
#line 1059 "cgrammar.y"
{ 
     qtype qt = qtype_unknown ();

     qtype_adjustPointers (yyvsp[-1].count, qt);
     yyval.ntyp = idDecl_create (cstring_copy (LastIdentifier ()), qt);
   ;
    break;}
case 382:
#line 1066 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 384:
#line 1071 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 385:
#line 1074 "cgrammar.y"
{ yyval.entrylist = handleParamTypeList (yyvsp[0].entrylist); ;
    break;}
case 386:
#line 1075 "cgrammar.y"
{ yyval.entrylist = handleParamIdList (yyvsp[0].entrylist); ;
    break;}
case 387:
#line 1078 "cgrammar.y"
{ /* ignored for now */; ;
    break;}
case 388:
#line 1079 "cgrammar.y"
{ ; ;
    break;}
case 389:
#line 1082 "cgrammar.y"
{ ; ;
    break;}
case 390:
#line 1083 "cgrammar.y"
{ ; ;
    break;}
case 391:
#line 1086 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 392:
#line 1087 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 393:
#line 1088 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 394:
#line 1089 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 396:
#line 1093 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 397:
#line 1096 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 398:
#line 1097 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 399:
#line 1100 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeElipsisMarker ()); ;
    break;}
case 401:
#line 1102 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 402:
#line 1105 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 403:
#line 1105 "cgrammar.y"
{ yyval.entrylist = uentryList_single (yyvsp[0].oentry); ;
    break;}
case 404:
#line 1106 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 405:
#line 1107 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-3].entrylist, yyvsp[0].oentry); ;
    break;}
case 406:
#line 1111 "cgrammar.y"
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
case 407:
#line 1123 "cgrammar.y"
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
case 409:
#line 1139 "cgrammar.y"
{ yyval.qtyp = qtype_newBase (yyvsp[-1].qtyp, yyvsp[0].ctyp); ;
    break;}
case 410:
#line 1142 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[0].count, ctype_unknown); ;
    break;}
case 412:
#line 1144 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[-1].count, yyvsp[0].ctyp); ;
    break;}
case 413:
#line 1147 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 415:
#line 1152 "cgrammar.y"
{ yyval.ctyp = ctype_expectFunction (yyvsp[-1].ctyp); ;
    break;}
case 416:
#line 1153 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 417:
#line 1155 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (ctype_unknown, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 418:
#line 1156 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (yyvsp[-2].ctyp); ;
    break;}
case 419:
#line 1158 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (yyvsp[-3].ctyp, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 420:
#line 1160 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (ctype_unknown, uentryList_makeMissingParams ()); ;
    break;}
case 421:
#line 1162 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (ctype_unknown, yyvsp[-1].entrylist); ;
    break;}
case 422:
#line 1164 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (yyvsp[-3].ctyp, uentryList_makeMissingParams ()); ;
    break;}
case 423:
#line 1166 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (yyvsp[-4].ctyp, yyvsp[-1].entrylist); ;
    break;}
case 433:
#line 1181 "cgrammar.y"
{yyval.expr = yyvsp[0].expr; printf ("Doing stmt lclintassertion\n"); ;
    break;}
case 434:
#line 1185 "cgrammar.y"
{ printf(" QSETBUFFERSIZE id CCONSTANT HEllo World\n");  uentry_setBufferSize(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 435:
#line 1187 "cgrammar.y"
{ printf(" QSETSTRINGLENGTH id CCONSTANT HEllo World\n");  uentry_setStringLength(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 436:
#line 1189 "cgrammar.y"
{printf(" QTESTINRANGE\n");  uentry_testInRange(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 437:
#line 1195 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[0].cname); ;
    break;}
case 438:
#line 1200 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 441:
#line 1208 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 442:
#line 1212 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 443:
#line 1214 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr); ;
    break;}
case 444:
#line 1216 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 445:
#line 1218 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 446:
#line 1222 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 447:
#line 1222 "cgrammar.y"
{ context_sizeofReleaseVars (); ;
    break;}
case 448:
#line 1224 "cgrammar.y"
{ yyval.expr = exprNode_forPred (yyvsp[-7].expr, yyvsp[-5].expr, yyvsp[-2].expr); 
     context_enterForClause (yyvsp[-5].expr); ;
    break;}
case 449:
#line 1229 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-2].entry); ;
    break;}
case 450:
#line 1231 "cgrammar.y"
{ yyval.expr = exprNode_iterStart (yyvsp[-5].entry, yyvsp[-1].alist); ;
    break;}
case 451:
#line 1232 "cgrammar.y"
{ yyval.expr = exprNode_createId (yyvsp[0].entry); ;
    break;}
case 455:
#line 1238 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 463:
#line 1246 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 464:
#line 1247 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 465:
#line 1251 "cgrammar.y"
{ /* don't: context_exitTrueClause ($1, $2); */
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 466:
#line 1256 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 467:
#line 1259 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 478:
#line 1274 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 480:
#line 1276 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 481:
#line 1279 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[-1].cname); ;
    break;}
case 482:
#line 1280 "cgrammar.y"
{ yyval.expr = exprNode_notReached (yyvsp[0].expr); ;
    break;}
case 483:
#line 1286 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 484:
#line 1287 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, FALSE); ;
    break;}
case 485:
#line 1288 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 486:
#line 1289 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, TRUE); ;
    break;}
case 487:
#line 1292 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 488:
#line 1293 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, FALSE); ;
    break;}
case 489:
#line 1294 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 490:
#line 1295 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, TRUE); ;
    break;}
case 491:
#line 1298 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 492:
#line 1300 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; context_exitInner (yyvsp[0].expr); ;
    break;}
case 493:
#line 1303 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 494:
#line 1306 "cgrammar.y"
{ context_enterInnerContext (); ;
    break;}
case 495:
#line 1309 "cgrammar.y"
{ context_exitInnerPlain (); ;
    break;}
case 496:
#line 1312 "cgrammar.y"
{ context_enterStructInnerContext (); ;
    break;}
case 497:
#line 1315 "cgrammar.y"
{ context_exitStructInnerContext (); ;
    break;}
case 498:
#line 1318 "cgrammar.y"
{ context_exitInnerSafe (); ;
    break;}
case 499:
#line 1321 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 500:
#line 1322 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_createTok (yyvsp[0].tok)); ;
    break;}
case 501:
#line 1323 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 502:
#line 1325 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 503:
#line 1326 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 504:
#line 1328 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 505:
#line 1330 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 506:
#line 1332 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (exprNode_concat (yyvsp[-3].expr, yyvsp[-2].expr), 
							lltok_getLoc (yyvsp[-1].tok))); 
   ;
    break;}
case 507:
#line 1339 "cgrammar.y"
{ yyval.expr = exprNode_makeBlock (yyvsp[0].expr); ;
    break;}
case 508:
#line 1343 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 509:
#line 1345 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 510:
#line 1347 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 511:
#line 1349 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 513:
#line 1353 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 514:
#line 1356 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 515:
#line 1357 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 516:
#line 1360 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 517:
#line 1361 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 518:
#line 1364 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 519:
#line 1365 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 520:
#line 1368 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 521:
#line 1369 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 522:
#line 1370 "cgrammar.y"
{ yyval.expr = exprNode_checkExpr (yyvsp[0].expr); ;
    break;}
case 523:
#line 1374 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 524:
#line 1382 "cgrammar.y"
{ 
     context_exitTrueClause (yyvsp[-1].expr, yyvsp[0].expr);
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 525:
#line 1386 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-2].expr); ;
    break;}
case 526:
#line 1387 "cgrammar.y"
{
     context_exitClause (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr);
     yyval.expr = exprNode_ifelse (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr); 
   ;
    break;}
case 527:
#line 1391 "cgrammar.y"
{ context_enterSwitch (yyvsp[0].expr); ;
    break;}
case 528:
#line 1392 "cgrammar.y"
{ yyval.expr = exprNode_switch (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 529:
#line 1396 "cgrammar.y"
{ yyval.expr = exprNode_whilePred (yyvsp[-1].expr); context_enterWhileClause (yyvsp[-1].expr); ;
    break;}
case 530:
#line 1400 "cgrammar.y"
{ yyval.expr = exprNode_whilePred(yyvsp[-1].expr); ;
    break;}
case 531:
#line 1403 "cgrammar.y"
{ context_enterIterClause (); ;
    break;}
case 532:
#line 1404 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-3].entry); ;
    break;}
case 533:
#line 1407 "cgrammar.y"
{ 
     yyval.expr = exprNode_iter (yyvsp[-9].entry, yyvsp[-4].alist, yyvsp[-2].expr, yyvsp[-1].entry); 

   ;
    break;}
case 534:
#line 1413 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 535:
#line 1414 "cgrammar.y"
{ nextIterParam (); ;
    break;}
case 536:
#line 1415 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-3].alist, yyvsp[0].expr); ;
    break;}
case 537:
#line 1418 "cgrammar.y"
{ yyval.expr = exprNode_iterExpr (yyvsp[0].expr); ;
    break;}
case 538:
#line 1419 "cgrammar.y"
{ yyval.expr = exprNode_iterId (yyvsp[0].entry); ;
    break;}
case 539:
#line 1420 "cgrammar.y"
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
case 540:
#line 1431 "cgrammar.y"
{ yyval.expr = exprNode_iterNewId (yyvsp[0].cname); ;
    break;}
case 542:
#line 1439 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 544:
#line 1443 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 545:
#line 1444 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 546:
#line 1445 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 547:
#line 1447 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 548:
#line 1448 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 549:
#line 1449 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 550:
#line 1450 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 551:
#line 1451 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 553:
#line 1455 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 554:
#line 1456 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 555:
#line 1457 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 556:
#line 1458 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 557:
#line 1459 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 558:
#line 1460 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 559:
#line 1461 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 560:
#line 1462 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 561:
#line 1463 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 563:
#line 1467 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 565:
#line 1471 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 566:
#line 1472 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 567:
#line 1473 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 569:
#line 1477 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 570:
#line 1478 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 572:
#line 1482 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 573:
#line 1483 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 575:
#line 1487 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 576:
#line 1488 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 577:
#line 1489 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 578:
#line 1490 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 580:
#line 1494 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 581:
#line 1495 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 583:
#line 1499 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 585:
#line 1503 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 587:
#line 1508 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 589:
#line 1512 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 591:
#line 1516 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 593:
#line 1520 "cgrammar.y"
{ context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 594:
#line 1521 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 595:
#line 1522 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 597:
#line 1526 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 598:
#line 1527 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 599:
#line 1528 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 600:
#line 1529 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 601:
#line 1530 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 602:
#line 1531 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 603:
#line 1532 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 604:
#line 1533 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 605:
#line 1534 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 606:
#line 1535 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 607:
#line 1536 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 608:
#line 1539 "cgrammar.y"
{ yyval.entry = yyvsp[0].entry; ;
    break;}
case 609:
#line 1540 "cgrammar.y"
{ yyval.entry = uentry_undefined; ;
    break;}
case 610:
#line 1543 "cgrammar.y"
{ context_enterDoWhileClause (); yyval.tok = yyvsp[0].tok; ;
    break;}
case 611:
#line 1547 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 612:
#line 1549 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr), yyvsp[0].tok); ;
    break;}
case 613:
#line 1551 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 614:
#line 1554 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 615:
#line 1556 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr), yyvsp[0].tok); ;
    break;}
case 616:
#line 1558 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 617:
#line 1559 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 618:
#line 1562 "cgrammar.y"
{ yyval.expr = exprNode_goto (yyvsp[-1].cname); ;
    break;}
case 619:
#line 1563 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-1].tok, BADTOK); ;
    break;}
case 620:
#line 1565 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-2].tok, QINNERCONTINUE); ;
    break;}
case 621:
#line 1566 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, BADTOK); ;
    break;}
case 622:
#line 1567 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSWITCHBREAK); ;
    break;}
case 623:
#line 1568 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QLOOPBREAK); ;
    break;}
case 624:
#line 1569 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QINNERBREAK); ;
    break;}
case 625:
#line 1570 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSAFEBREAK); ;
    break;}
case 626:
#line 1571 "cgrammar.y"
{ yyval.expr = exprNode_nullReturn (yyvsp[-1].tok); ;
    break;}
case 627:
#line 1572 "cgrammar.y"
{ yyval.expr = exprNode_return (yyvsp[-1].expr); ;
    break;}
case 629:
#line 1576 "cgrammar.y"
{ ; ;
    break;}
case 632:
#line 1583 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 633:
#line 1584 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 634:
#line 1585 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 635:
#line 1586 "cgrammar.y"
{ yyval.cname = yyvsp[0].cname; ;
    break;}
case 637:
#line 1590 "cgrammar.y"
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
#line 1592 "cgrammar.y"


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
  





