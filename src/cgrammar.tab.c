
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
#define	QSETSTRINGLENGTH	433
#define	QMAXSET	434
#define	QMAXREAD	435
#define	QTESTINRANGE	436
#define	IDENTIFIER	437
#define	NEW_IDENTIFIER	438
#define	TYPE_NAME_OR_ID	439
#define	CCONSTANT	440
#define	ITER_NAME	441
#define	ITER_ENDNAME	442
#define	TYPE_NAME	443

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



#define	YYFINAL		1209
#define	YYFLAG		-32768
#define	YYNTBASE	189

#define YYTRANSLATE(x) ((unsigned)(x) <= 443 ? yytranslate[x] : 430)

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
   186,   187,   188
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     3,     5,     8,    11,    13,    15,    17,    19,
    21,    23,    32,    44,    45,    51,    53,    57,    59,    62,
    64,    71,    75,    82,    83,    91,    92,   101,   103,   110,
   114,   121,   122,   129,   130,   138,   139,   140,   151,   155,
   159,   163,   166,   168,   169,   172,   173,   176,   178,   179,
   184,   185,   188,   190,   195,   197,   199,   201,   203,   205,
   207,   212,   218,   220,   222,   224,   226,   228,   230,   231,
   234,   235,   238,   240,   243,   245,   248,   250,   253,   255,
   259,   262,   264,   266,   268,   270,   272,   274,   276,   277,
   280,   281,   288,   289,   296,   298,   300,   301,   302,   308,
   309,   315,   317,   319,   320,   322,   323,   324,   328,   329,
   333,   335,   337,   339,   341,   343,   345,   347,   349,   351,
   353,   355,   357,   359,   361,   363,   365,   367,   368,   376,
   377,   386,   388,   392,   393,   397,   398,   402,   405,   409,
   412,   415,   417,   419,   421,   425,   430,   433,   437,   441,
   445,   447,   449,   451,   455,   457,   459,   463,   468,   471,
   475,   479,   483,   485,   489,   491,   493,   495,   499,   501,
   503,   505,   510,   514,   519,   526,   532,   538,   541,   544,
   546,   550,   552,   555,   558,   561,   564,   567,   570,   573,
   576,   578,   580,   584,   586,   596,   597,   601,   606,   609,
   614,   617,   619,   624,   626,   630,   634,   638,   640,   644,
   648,   650,   654,   658,   660,   664,   668,   672,   676,   678,
   682,   686,   688,   692,   694,   698,   700,   704,   706,   707,
   712,   714,   715,   720,   722,   723,   724,   732,   734,   738,
   742,   746,   750,   754,   758,   762,   766,   770,   774,   778,
   780,   784,   785,   787,   789,   791,   793,   795,   799,   800,
   810,   811,   823,   826,   827,   834,   835,   843,   848,   853,
   854,   855,   858,   860,   865,   866,   871,   873,   877,   882,
   884,   888,   890,   892,   894,   896,   898,   901,   904,   907,
   910,   913,   916,   919,   922,   925,   928,   931,   934,   937,
   940,   943,   946,   949,   952,   955,   958,   961,   964,   967,
   970,   973,   976,   979,   982,   985,   988,   991,   994,   997,
  1000,  1003,  1006,  1009,  1012,  1015,  1018,  1021,  1024,  1027,
  1030,  1033,  1036,  1038,  1040,  1042,  1044,  1047,  1050,  1053,
  1056,  1059,  1062,  1065,  1068,  1071,  1074,  1077,  1080,  1083,
  1086,  1090,  1092,  1097,  1099,  1103,  1106,  1109,  1112,  1113,
  1115,  1116,  1117,  1129,  1130,  1131,  1143,  1150,  1157,  1158,
  1159,  1170,  1171,  1172,  1183,  1189,  1195,  1200,  1205,  1206,
  1208,  1210,  1213,  1219,  1223,  1226,  1231,  1233,  1237,  1242,
  1249,  1250,  1259,  1264,  1266,  1270,  1273,  1275,  1280,  1282,
  1284,  1287,  1290,  1292,  1295,  1297,  1300,  1302,  1304,  1306,
  1309,  1311,  1314,  1317,  1321,  1323,  1327,  1329,  1333,  1335,
  1337,  1341,  1342,  1345,  1346,  1351,  1356,  1358,  1360,  1363,
  1365,  1367,  1370,  1371,  1373,  1379,  1382,  1386,  1390,  1395,
  1399,  1404,  1409,  1415,  1417,  1419,  1421,  1423,  1425,  1427,
  1429,  1431,  1433,  1435,  1440,  1445,  1450,  1453,  1455,  1457,
  1459,  1462,  1465,  1473,  1480,  1483,  1484,  1485,  1496,  1497,
  1504,  1506,  1508,  1510,  1512,  1515,  1517,  1519,  1521,  1523,
  1525,  1527,  1529,  1533,  1535,  1538,  1541,  1544,  1546,  1548,
  1550,  1552,  1554,  1556,  1558,  1560,  1562,  1564,  1568,  1570,
  1572,  1575,  1578,  1579,  1584,  1585,  1591,  1592,  1596,  1597,
  1602,  1606,  1609,  1613,  1614,  1615,  1616,  1617,  1618,  1620,
  1623,  1626,  1630,  1633,  1637,  1641,  1646,  1649,  1652,  1656,
  1660,  1665,  1667,  1670,  1672,  1675,  1677,  1680,  1682,  1685,
  1687,  1690,  1692,  1697,  1700,  1701,  1707,  1708,  1715,  1720,
  1725,  1726,  1727,  1738,  1740,  1741,  1746,  1748,  1750,  1752,
  1754,  1756,  1760,  1762,  1767,  1771,  1776,  1783,  1789,  1795,
  1798,  1801,  1803,  1806,  1809,  1812,  1815,  1818,  1821,  1824,
  1827,  1829,  1831,  1836,  1838,  1842,  1846,  1850,  1852,  1856,
  1860,  1862,  1866,  1870,  1872,  1876,  1880,  1884,  1888,  1890,
  1894,  1898,  1900,  1904,  1906,  1910,  1912,  1916,  1918,  1922,
  1924,  1928,  1930,  1931,  1932,  1940,  1942,  1946,  1950,  1954,
  1958,  1962,  1966,  1970,  1974,  1978,  1982,  1986,  1988,  1989,
  1991,  1994,  2002,  2005,  2008,  2016,  2023,  2026,  2030,  2033,
  2037,  2040,  2044,  2048,  2052,  2056,  2059,  2063,  2064,  2066,
  2068,  2070,  2072,  2074,  2076,  2078,  2080
};

static const short yyrhs[] = {    -1,
   190,     0,   191,     0,   190,   191,     0,   256,   426,     0,
   192,     0,   193,     0,   203,     0,   206,     0,   293,     0,
     1,     0,    75,   313,   326,   336,   326,   426,   301,    88,
     0,    75,   313,   326,   336,   326,    23,   301,   306,   305,
   426,    88,     0,     0,    76,   194,   195,   426,    88,     0,
   196,     0,   313,   326,   196,     0,   200,     0,   340,   200,
     0,   428,     0,   301,    24,   326,   336,   301,    25,     0,
   197,    26,    27,     0,   197,    26,   301,   292,    27,   326,
     0,     0,   197,   302,    24,    25,   198,   208,   210,     0,
     0,   197,   302,    24,   337,    25,   199,   208,   210,     0,
   428,     0,   301,    24,   326,   196,   301,    25,     0,   200,
    26,    27,     0,   200,    26,   301,   292,    27,   326,     0,
     0,   200,   302,    24,    25,   201,   223,     0,     0,   200,
   302,    24,   337,    25,   202,   223,     0,     0,     0,    77,
   428,    24,   337,    25,   204,   223,   205,   426,    88,     0,
    89,   367,    92,     0,    90,   354,    92,     0,    91,   355,
    92,     0,    89,    92,     0,   252,     0,     0,   209,   225,
     0,     0,   211,   212,     0,   213,     0,     0,   214,   177,
   215,    88,     0,     0,   216,   215,     0,   216,     0,   219,
   218,   219,    18,     0,   179,     0,   180,     0,    52,     0,
    51,     0,    53,     0,   220,     0,   221,    24,   219,    25,
     0,    24,   219,   222,   219,    25,     0,   427,     0,   183,
     0,   185,     0,   217,     0,    33,     0,    32,     0,     0,
     0,   226,     0,     0,   224,   226,     0,   233,     0,   227,
   233,     0,   236,     0,   227,   236,     0,   249,     0,   249,
   227,     0,   229,     0,   228,    21,   229,     0,   232,   230,
     0,   427,     0,   183,     0,    86,     0,    87,     0,   116,
     0,   117,     0,   130,     0,     0,   231,   232,     0,     0,
    72,   234,   387,   426,    88,   239,     0,     0,    72,   235,
   228,   426,    88,   239,     0,    74,     0,   240,     0,     0,
     0,    72,   237,   387,   426,   239,     0,     0,    72,   238,
   228,   426,   239,     0,    74,     0,   242,     0,     0,   240,
     0,     0,     0,    73,   241,   257,     0,     0,    73,   243,
   258,     0,    78,     0,    79,     0,    80,     0,    81,     0,
    82,     0,    88,     0,    88,     0,    83,     0,    84,     0,
   119,     0,   137,     0,   135,     0,   133,     0,   132,     0,
   121,     0,   138,     0,   150,     0,     0,   244,   326,   250,
   263,   426,   246,   301,     0,     0,   247,   326,   248,   251,
   263,   426,   245,   301,     0,   336,     0,   313,   326,   336,
     0,     0,    19,   254,   383,     0,     0,   387,   255,   376,
     0,   207,   253,     0,   261,   426,    88,     0,   426,    88,
     0,   261,   426,     0,   426,     0,   427,     0,   183,     0,
   259,    26,    27,     0,   259,    26,   260,    27,     0,    34,
   259,     0,    24,   259,    25,     0,   259,    28,   428,     0,
   259,    44,   428,     0,   259,     0,   185,     0,   259,     0,
   261,    21,   259,     0,   427,     0,   183,     0,   262,    26,
    27,     0,   262,    26,   260,    27,     0,    34,   262,     0,
    24,   262,    25,     0,   262,    28,   428,     0,   262,    44,
   428,     0,   262,     0,   263,    21,   262,     0,   427,     0,
   183,     0,   185,     0,    24,   290,    25,     0,   184,     0,
   111,     0,   264,     0,   265,    26,   290,    27,     0,   265,
    24,    25,     0,   265,    24,   266,    25,     0,    70,    24,
   289,    21,   348,    25,     0,   265,   326,    28,   428,   301,
     0,   265,   326,    44,   428,   301,     0,   265,    47,     0,
   265,    48,     0,   289,     0,   266,    21,   289,     0,   265,
     0,    47,   267,     0,    48,   267,     0,    29,   273,     0,
    34,   273,     0,    33,   273,     0,    32,   273,     0,    31,
   273,     0,    30,   273,     0,   270,     0,   269,     0,   268,
    28,   428,     0,   428,     0,    46,   301,    24,   348,   326,
    21,   268,    25,   301,     0,     0,   301,   271,   272,     0,
    42,    24,   348,    25,     0,    42,   267,     0,    43,    24,
   348,    25,     0,    43,   267,     0,   267,     0,    24,   348,
    25,   273,     0,   273,     0,   274,    34,   273,     0,   274,
    35,   273,     0,   274,    36,   273,     0,   274,     0,   275,
    33,   274,     0,   275,    32,   274,     0,   275,     0,   276,
    49,   275,     0,   276,    50,   275,     0,   276,     0,   277,
    37,   276,     0,   277,    38,   276,     0,   277,    51,   276,
     0,   277,    52,   276,     0,   277,     0,   278,    53,   277,
     0,   278,    54,   277,     0,   278,     0,   279,    29,   278,
     0,   279,     0,   280,    39,   279,     0,   280,     0,   281,
    40,   280,     0,   281,     0,     0,   282,    55,   283,   281,
     0,   282,     0,     0,   284,    56,   285,   282,     0,   284,
     0,     0,     0,   284,    41,   287,   290,    22,   288,   286,
     0,   286,     0,   267,    23,   289,     0,   267,    57,   289,
     0,   267,    58,   289,     0,   267,    59,   289,     0,   267,
    60,   289,     0,   267,    61,   289,     0,   267,    62,   289,
     0,   267,    63,   289,     0,   267,    64,   289,     0,   267,
    65,   289,     0,   267,    66,   289,     0,   289,     0,   290,
    21,   289,     0,     0,   290,     0,   286,     0,   294,     0,
    71,     0,   299,     0,   313,   301,    18,     0,     0,   313,
   326,   336,   326,   295,   301,   305,    18,   301,     0,     0,
   313,   326,   336,   326,    23,   296,   301,   306,   305,    18,
   301,     0,   336,   326,     0,     0,   336,   326,    23,   298,
   301,   306,     0,     0,    45,   313,   300,   326,   303,   301,
    18,     0,    45,   313,   301,    18,     0,    45,   303,   301,
    18,     0,     0,     0,   304,   301,     0,   297,     0,   303,
    21,   326,   297,     0,     0,   305,    21,   326,   297,     0,
   289,     0,    19,   307,    20,     0,    19,   307,    21,    20,
     0,   306,     0,   307,    21,   306,     0,   112,     0,   110,
     0,   113,     0,   114,     0,   115,     0,   108,   301,     0,
   109,   301,     0,   116,   301,     0,   117,   301,     0,   130,
   301,     0,   131,   301,     0,   132,   301,     0,   133,   301,
     0,   118,   301,     0,   120,   301,     0,   119,   301,     0,
   128,   301,     0,   129,   301,     0,   121,   301,     0,   123,
   301,     0,   139,   301,     0,   140,   301,     0,   142,   301,
     0,   143,   301,     0,   141,   301,     0,   136,   301,     0,
   151,   301,     0,   134,   301,     0,   135,   301,     0,   137,
   301,     0,   124,   301,     0,   127,   301,     0,   125,   301,
     0,   126,   301,     0,   156,   301,     0,   157,   301,     0,
   148,   301,     0,   158,   301,     0,   149,   301,     0,   152,
   301,     0,   153,   301,     0,   154,   301,     0,   155,   301,
     0,   150,   301,     0,   159,   301,     0,   160,   301,     0,
   163,   301,     0,   164,   301,     0,   161,   301,     0,   162,
   301,     0,   175,   301,     0,   147,     0,   144,     0,   145,
     0,   146,     0,   165,   326,     0,   167,   326,     0,   166,
   326,     0,   168,   326,     0,   169,   326,     0,   170,   326,
     0,   171,   326,     0,   172,   326,     0,   173,   326,     0,
   174,   326,     0,   429,   326,     0,   317,   326,     0,   331,
   326,     0,   310,   326,     0,   301,   313,   301,     0,   315,
     0,   315,    85,   314,    88,     0,   348,     0,   348,    21,
   314,     0,   308,   316,     0,   309,   316,     0,   311,   316,
     0,     0,   313,     0,     0,     0,   326,    67,   428,   301,
    19,   318,   380,   327,   381,   319,    20,     0,     0,     0,
   326,    68,   428,   301,    19,   320,   380,   327,   381,   321,
    20,     0,   326,    67,   428,   301,    19,    20,     0,   326,
    68,   428,   301,    19,    20,     0,     0,     0,   326,    67,
   301,    19,   322,   380,   327,   381,   323,    20,     0,     0,
     0,   326,    68,   301,    19,   324,   380,   327,   381,   325,
    20,     0,   326,    67,   301,    19,    20,     0,   326,    68,
   301,    19,    20,     0,   326,    67,   428,   326,     0,   326,
    68,   428,   326,     0,     0,   328,     0,   206,     0,   327,
   328,     0,   313,   326,   329,   301,    18,     0,   313,   301,
    18,     0,   330,   326,     0,   329,    21,   330,   326,     0,
   336,     0,    22,   301,   292,     0,   336,    22,   301,   292,
     0,   326,    69,    19,   333,    20,   301,     0,     0,   326,
    69,   428,    19,   332,   333,    20,   301,     0,   326,    69,
   428,   301,     0,   334,     0,   333,    21,   334,     0,   333,
    21,     0,   428,     0,   428,    23,   301,   292,     0,   197,
     0,   350,     0,   340,   188,     0,   340,   335,     0,   197,
     0,   340,   197,     0,   343,     0,   326,   341,     0,   108,
     0,   109,     0,   338,     0,   339,   338,     0,    34,     0,
    34,   339,     0,    34,   340,     0,    34,   339,   340,     0,
   342,     0,   342,    21,     5,     0,   428,     0,   342,    21,
   428,     0,     5,     0,   344,     0,   344,    21,     5,     0,
     0,   345,   347,     0,     0,   344,    21,   346,   347,     0,
   301,   313,   335,   301,     0,   428,     0,   312,     0,   312,
   349,     0,   340,     0,   351,     0,   340,   351,     0,     0,
   351,     0,   301,    24,   326,   349,    25,     0,    26,    27,
     0,    26,   292,    27,     0,   351,    26,    27,     0,   351,
    26,   292,    27,     0,   301,    24,    25,     0,   301,    24,
   343,    25,     0,   351,   301,    24,    25,     0,   351,   301,
    24,   343,    25,     0,   369,     0,   370,     0,   373,     0,
   376,     0,   389,     0,   392,     0,   423,     0,   397,     0,
   425,     0,   353,     0,   176,   427,   185,    88,     0,   178,
   427,   185,    88,     0,   181,   427,   185,    88,     0,    22,
   428,     0,   356,     0,   354,     0,   363,     0,   356,   363,
     0,   396,   356,     0,   422,   368,    11,    24,   290,    25,
    18,     0,   422,   368,    11,    24,   290,    25,     0,   358,
   363,     0,     0,     0,    13,    24,   291,    18,   291,    18,
   359,   291,   360,    25,     0,     0,   186,   378,    24,   362,
   400,    25,     0,   187,     0,   369,     0,   370,     0,   373,
     0,   365,   387,     0,   365,     0,   366,     0,   389,     0,
   364,     0,   357,     0,   361,     0,   425,     0,    24,   363,
    25,     0,     1,     0,   391,   363,     0,   378,    19,     0,
   382,    20,     0,   368,     0,   386,     0,   369,     0,   370,
     0,   373,     0,   377,     0,   390,     0,   392,     0,   397,
     0,   424,     0,    24,   368,    25,     0,   425,     0,     1,
     0,   428,    22,     0,   107,   352,     0,     0,     6,   292,
   371,    22,     0,     0,    98,     6,   292,   372,    22,     0,
     0,     7,   374,    22,     0,     0,    98,     7,   375,    22,
     0,    24,   376,    25,     0,   378,   384,     0,   378,   385,
   379,     0,     0,     0,     0,     0,     0,    20,     0,   107,
    20,     0,   388,    20,     0,   388,   107,    20,     0,   387,
    20,     0,   387,   107,    20,     0,   387,   388,    20,     0,
   387,   388,   107,    20,     0,    19,   383,     0,    19,    20,
     0,    19,   386,    20,     0,    19,   387,    20,     0,    19,
   387,   388,    20,     0,   368,     0,   386,   368,     0,   293,
     0,   387,   293,     0,   352,     0,   388,   352,     0,    18,
     0,   290,    18,     0,    18,     0,   290,    18,     0,   290,
     0,     8,    24,   290,    25,     0,   391,   352,     0,     0,
   391,   352,     9,   393,   352,     0,     0,    10,    24,   290,
   394,    25,   352,     0,    11,    24,   290,    25,     0,    11,
    24,   290,    25,     0,     0,     0,   186,   398,   378,    24,
   399,   400,    25,   376,   421,   379,     0,   402,     0,     0,
   400,   401,    21,   402,     0,   420,     0,   427,     0,   184,
     0,   183,     0,   185,     0,    24,   290,    25,     0,   403,
     0,   265,    26,   290,    27,     0,   265,    24,    25,     0,
   265,    24,   266,    25,     0,    70,    24,   289,    21,   348,
    25,     0,   265,   326,    28,   428,   301,     0,   265,   326,
    44,   428,   301,     0,   265,    47,     0,   265,    48,     0,
   404,     0,    47,   267,     0,    48,   267,     0,    29,   273,
     0,    34,   273,     0,    33,   273,     0,    32,   273,     0,
    31,   273,     0,    30,   273,     0,   270,     0,   405,     0,
    24,   348,    25,   273,     0,   406,     0,   274,    34,   273,
     0,   274,    35,   273,     0,   274,    36,   273,     0,   407,
     0,   275,    33,   274,     0,   275,    32,   274,     0,   408,
     0,   276,    49,   275,     0,   276,    50,   275,     0,   409,
     0,   277,    37,   276,     0,   277,    38,   276,     0,   277,
    51,   276,     0,   277,    52,   276,     0,   410,     0,   278,
    53,   277,     0,   278,    54,   277,     0,   411,     0,   279,
    29,   278,     0,   412,     0,   280,    39,   279,     0,   413,
     0,   281,    40,   280,     0,   414,     0,   282,    55,   281,
     0,   415,     0,   284,    56,   282,     0,   416,     0,     0,
     0,   284,    41,   418,   290,    22,   419,   286,     0,   417,
     0,   267,    23,   289,     0,   267,    57,   289,     0,   267,
    58,   289,     0,   267,    59,   289,     0,   267,    60,   289,
     0,   267,    61,   289,     0,   267,    62,   289,     0,   267,
    63,   289,     0,   267,    64,   289,     0,   267,    65,   289,
     0,   267,    66,   289,     0,   187,     0,     0,    12,     0,
   395,   352,     0,   422,   352,    11,    24,   290,    25,    18,
     0,   358,   352,     0,   395,   368,     0,   422,   368,    11,
    24,   290,    25,    18,     0,   422,   368,    11,    24,   290,
    25,     0,   358,   368,     0,    14,   428,    18,     0,    15,
    18,     0,    97,    15,    18,     0,    16,    18,     0,    93,
    16,    18,     0,    94,    16,    18,     0,    95,    16,    18,
     0,    96,    16,    18,     0,    17,    18,     0,    17,   290,
    18,     0,     0,    18,     0,   182,     0,   183,     0,   186,
     0,   187,     0,   427,     0,   184,     0,   188,     0,   184,
     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   260,   261,   264,   265,   268,   269,   270,   271,   272,   273,
   274,   277,   279,   283,   283,   288,   294,   298,   299,   303,
   304,   306,   308,   312,   315,   323,   326,   335,   336,   338,
   340,   356,   360,   367,   371,   377,   379,   379,   383,   384,
   385,   386,   389,   392,   393,   399,   400,   404,   407,   412,
   419,   422,   423,   426,   431,   432,   435,   436,   437,   440,
   441,   442,   447,   450,   451,   462,   466,   467,   472,   473,
   483,   484,   487,   488,   491,   492,   495,   496,   499,   500,
   503,   506,   507,   510,   511,   512,   513,   514,   517,   518,
   521,   521,   524,   524,   527,   531,   532,   535,   535,   538,
   538,   541,   545,   546,   549,   550,   553,   559,   566,   572,
   579,   580,   581,   582,   583,   586,   589,   592,   593,   596,
   597,   598,   599,   600,   601,   602,   603,   606,   612,   619,
   625,   634,   640,   644,   646,   650,   653,   660,   670,   671,
   674,   675,   678,   679,   680,   681,   682,   683,   684,   685,
   689,   690,   694,   695,   698,   700,   702,   703,   704,   705,
   706,   708,   712,   716,   728,   729,   730,   731,   732,   733,
   736,   737,   738,   739,   740,   741,   742,   743,   744,   747,
   748,   751,   752,   753,   754,   755,   756,   757,   758,   759,
   760,   761,   764,   765,   768,   772,   773,   776,   777,   778,
   779,   782,   783,   787,   788,   789,   790,   793,   794,   795,
   798,   799,   800,   803,   804,   805,   806,   807,   810,   811,
   812,   815,   816,   819,   820,   824,   825,   828,   829,   834,
   840,   841,   847,   853,   854,   854,   856,   859,   860,   861,
   862,   863,   864,   865,   866,   867,   868,   869,   870,   873,
   874,   877,   878,   881,   886,   887,   888,   891,   904,   908,
   909,   912,   917,   918,   918,   923,   924,   925,   926,   929,
   932,   935,   938,   939,   942,   943,   946,   947,   948,   952,
   954,   963,   964,   965,   966,   967,   970,   971,   972,   973,
   974,   975,   976,   977,   978,   979,   980,   981,   982,   983,
   984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
   994,   995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,
  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,
  1014,  1015,  1021,  1022,  1023,  1024,  1027,  1028,  1029,  1030,
  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,
  1043,  1047,  1048,  1052,  1053,  1057,  1058,  1059,  1062,  1063,
  1066,  1068,  1070,  1071,  1073,  1075,  1076,  1078,  1080,  1082,
  1084,  1085,  1087,  1089,  1090,  1092,  1094,  1095,  1098,  1101,
  1102,  1103,  1106,  1108,  1112,  1114,  1118,  1119,  1120,  1124,
  1126,  1126,  1128,  1131,  1133,  1135,  1138,  1143,  1150,  1151,
  1152,  1159,  1163,  1164,  1168,  1169,  1172,  1173,  1176,  1177,
  1180,  1181,  1182,  1183,  1186,  1187,  1190,  1191,  1194,  1195,
  1196,  1199,  1199,  1200,  1201,  1204,  1216,  1232,  1233,  1236,
  1237,  1238,  1241,  1242,  1245,  1247,  1248,  1250,  1251,  1253,
  1255,  1257,  1259,  1265,  1266,  1267,  1268,  1269,  1270,  1271,
  1272,  1273,  1275,  1279,  1281,  1283,  1289,  1294,  1297,  1300,
  1301,  1305,  1307,  1309,  1311,  1315,  1316,  1318,  1322,  1324,
  1326,  1329,  1330,  1331,  1332,  1333,  1334,  1335,  1336,  1337,
  1338,  1339,  1340,  1341,  1344,  1350,  1353,  1356,  1357,  1360,
  1361,  1362,  1363,  1364,  1365,  1366,  1367,  1368,  1369,  1370,
  1373,  1374,  1380,  1381,  1382,  1383,  1386,  1387,  1388,  1389,
  1392,  1393,  1397,  1400,  1403,  1406,  1409,  1412,  1415,  1416,
  1417,  1418,  1420,  1421,  1423,  1425,  1432,  1436,  1438,  1440,
  1442,  1446,  1447,  1450,  1451,  1454,  1455,  1458,  1459,  1462,
  1463,  1464,  1467,  1475,  1480,  1481,  1485,  1486,  1489,  1494,
  1497,  1498,  1499,  1507,  1508,  1508,  1512,  1513,  1514,  1525,
  1532,  1533,  1536,  1537,  1538,  1539,  1540,  1542,  1543,  1544,
  1545,  1548,  1549,  1550,  1551,  1552,  1553,  1554,  1555,  1556,
  1557,  1560,  1561,  1564,  1565,  1566,  1567,  1570,  1571,  1572,
  1575,  1576,  1577,  1580,  1581,  1582,  1583,  1584,  1587,  1588,
  1589,  1592,  1593,  1596,  1597,  1601,  1602,  1605,  1606,  1609,
  1610,  1613,  1614,  1615,  1616,  1619,  1620,  1621,  1622,  1623,
  1624,  1625,  1626,  1627,  1628,  1629,  1630,  1633,  1634,  1637,
  1640,  1642,  1644,  1648,  1649,  1651,  1653,  1656,  1657,  1658,
  1660,  1661,  1662,  1663,  1664,  1665,  1666,  1669,  1670,  1673,
  1676,  1677,  1678,  1679,  1680,  1683,  1684
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
"QSETBUFFERSIZE","QBUFFERCONSTRAINT","QSETSTRINGLENGTH","QMAXSET","QMAXREAD",
"QTESTINRANGE","IDENTIFIER","NEW_IDENTIFIER","TYPE_NAME_OR_ID","CCONSTANT","ITER_NAME",
"ITER_ENDNAME","TYPE_NAME","file","externalDefs","externalDef","constantDecl",
"fcnDecl","@1","plainFcn","plainNamedDecl","namedDeclBase","@2","@3","plainNamedDeclBase",
"@4","@5","iterDecl","@6","@7","macroDef","fcnDefHdr","optGlobMods","@8","optGlobBufConstraints",
"@9","optGlobBufConstraintsRest","optGlobBufConstraintsAux","@10","BufConstraintList",
"BufConstraint","bufferModifier","relationalOp","BufConstraintExpr","BufConstraintTerm",
"BufUnaryOp","BufBinaryOp","optPlainGlobMods","@12","optGlobModsRest","optPlainGlobModsRest",
"specialClauses","globIdList","globIdListExpr","globId","globQual","optGlobQuals",
"optGlobModsAux","@13","@14","optPlainGlobModsAux","@15","@16","optMods","fcnMods",
"@17","fcnPlainMods","@18","specialTag","endStateTag","endSpecialTag","stateSpecialClause",
"specialClauseType","specialClause","@19","@20","fcnDefHdrAux","fcnBody","@21",
"@22","fcnDef","locModifies","locPlainModifies","modListExpr","mExpr","modList",
"specClauseListExpr","specClauseList","primaryExpr","postfixExpr","argumentExprList",
"unaryExpr","fieldDesignator","offsetofExpr","sizeofExpr","@23","sizeofExprAux",
"castExpr","timesExpr","plusExpr","shiftExpr","relationalExpr","equalityExpr",
"bitandExpr","xorExpr","bitorExpr","andExpr","@24","orExpr","@25","conditionalExpr",
"@26","@27","assignExpr","expr","optExpr","constantExpr","initializer","instanceDecl",
"@28","@29","namedInitializer","@30","typeDecl","@31","IsType","PushType","namedInitializerList",
"namedInitializerListAux","optDeclarators","init","initList","storageSpecifier",
"typeQualifier","typeModifier","typeSpecifier","completeType","completeTypeSpecifier",
"altType","completeTypeSpecifierAux","optCompleteType","suSpc","@32","@33","@34",
"@35","@36","@37","@38","@39","NotType","structDeclList","structDecl","structNamedDeclList",
"structNamedDecl","enumSpc","@40","enumeratorList","enumerator","optNamedDecl",
"namedDecl","genericParamList","innerMods","innerModsList","pointers","paramIdList",
"idList","paramTypeList","paramList","@41","@42","paramDecl","typeExpression",
"abstractDecl","optAbstractDeclBase","abstractDeclBase","stmt","lclintassertion",
"iterBody","endBody","iterDefStmtList","iterDefIterationStmt","forPred","@43",
"@44","partialIterStmt","@45","iterDefStmt","iterSelectionStmt","openScope",
"closeScope","macroBody","stmtErr","labeledStmt","caseStmt","@46","@47","defaultStmt",
"@48","@49","compoundStmt","compoundStmtErr","CreateInnerScope","DeleteInnerScope",
"CreateStructInnerScope","DeleteStructInnerScope","DeleteInnerScopeSafe","compoundStmtRest",
"compoundStmtAux","compoundStmtAuxErr","stmtListErr","initializerList","stmtList",
"expressionStmt","expressionStmtErr","ifPred","selectionStmt","@50","@51","whilePred",
"iterWhilePred","iterStmt","@52","@53","iterArgList","@54","iterArgExpr","primaryIterExpr",
"postfixIterExpr","unaryIterExpr","castIterExpr","timesIterExpr","plusIterExpr",
"shiftIterExpr","relationalIterExpr","equalityIterExpr","bitandIterExpr","xorIterExpr",
"bitorIterExpr","andIterExpr","orIterExpr","conditionalIterExpr","@55","@56",
"assignIterExpr","endIter","doHeader","iterationStmt","iterationStmtErr","jumpStmt",
"optSemi","id","newId","typeName", NULL
};
#endif

static const short yyr1[] = {     0,
   189,   189,   190,   190,   191,   191,   191,   191,   191,   191,
   191,   192,   192,   194,   193,   195,   195,   196,   196,   197,
   197,   197,   197,   198,   197,   199,   197,   200,   200,   200,
   200,   201,   200,   202,   200,   204,   205,   203,   206,   206,
   206,   206,   207,   209,   208,   211,   210,   212,   214,   213,
   213,   215,   215,   216,   217,   217,   218,   218,   218,   219,
   219,   219,   220,   220,   220,   221,   222,   222,    -1,    -1,
   224,   223,   225,   225,   226,   226,   227,   227,   228,   228,
   229,   230,   230,   231,   231,   231,   231,   231,   232,   232,
   234,   233,   235,   233,   233,   233,   233,   237,   236,   238,
   236,   236,   236,   236,   239,   239,   241,   240,   243,   242,
   244,   244,   244,   244,   244,   245,   246,   247,   247,   248,
   248,   248,   248,   248,   248,   248,   248,   250,   249,   251,
   249,   252,   252,   254,   253,   255,   253,   256,   257,   257,
   258,   258,   259,   259,   259,   259,   259,   259,   259,   259,
   260,   260,   261,   261,   262,   262,   262,   262,   262,   262,
   262,   262,   263,   263,   264,   264,   264,   264,   264,   264,
   265,   265,   265,   265,   265,   265,   265,   265,   265,   266,
   266,   267,   267,   267,   267,   267,   267,   267,   267,   267,
   267,   267,   268,   268,   269,   271,   270,   272,   272,   272,
   272,   273,   273,   274,   274,   274,   274,   275,   275,   275,
   276,   276,   276,   277,   277,   277,   277,   277,   278,   278,
   278,   279,   279,   280,   280,   281,   281,   282,   283,   282,
   284,   285,   284,   286,   287,   288,   286,   289,   289,   289,
   289,   289,   289,   289,   289,   289,   289,   289,   289,   290,
   290,   291,   291,   292,   293,   293,   293,   294,   295,   294,
   296,   294,   297,   298,   297,   300,   299,   299,   299,   301,
   302,   303,   304,   304,   305,   305,   306,   306,   306,   307,
   307,   308,   308,   308,   308,   308,   309,   309,   309,   309,
   309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
   309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
   309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
   309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
   309,   309,   310,   310,   310,   310,   311,   311,   311,   311,
   311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
   312,   313,   313,   314,   314,   315,   315,   315,   316,   316,
   318,   319,   317,   320,   321,   317,   317,   317,   322,   323,
   317,   324,   325,   317,   317,   317,   317,   317,   326,   327,
   327,   327,   328,   328,   329,   329,   330,   330,   330,   331,
   332,   331,   331,   333,   333,   333,   334,   334,   335,   335,
   335,   335,   336,   336,   337,   337,   338,   338,   339,   339,
   340,   340,   340,   340,   341,   341,   342,   342,   343,   343,
   343,   345,   344,   346,   344,   347,   347,   348,   348,   349,
   349,   349,   350,   350,   351,   351,   351,   351,   351,   351,
   351,   351,   351,   352,   352,   352,   352,   352,   352,   352,
   352,   352,   352,   353,   353,   353,    -1,   354,   355,   356,
   356,   357,   357,   357,   357,   359,   360,   358,   362,   361,
   361,   363,   363,   363,   363,   363,   363,   363,   363,   363,
   363,   363,   363,   363,   364,   365,   366,   367,   367,   368,
   368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
   369,   369,   371,   370,   372,   370,   374,   373,   375,   373,
   376,   376,   377,   378,   379,   380,   381,   382,   383,   383,
   383,   383,   383,   383,   383,   383,   384,   385,   385,   385,
   385,   386,   386,   387,   387,   388,   388,   389,   389,   390,
   390,   390,   391,   392,   393,   392,   394,   392,   395,   396,
   398,   399,   397,   400,   401,   400,   402,   402,   402,   402,
   403,   403,   404,   404,   404,   404,   404,   404,   404,   404,
   404,   405,   405,   405,   405,   405,   405,   405,   405,   405,
   405,   406,   406,   407,   407,   407,   407,   408,   408,   408,
   409,   409,   409,   410,   410,   410,   410,   410,   411,   411,
   411,   412,   412,   413,   413,   414,   414,   415,   415,   416,
   416,   417,   418,   419,   417,   420,   420,   420,   420,   420,
   420,   420,   420,   420,   420,   420,   420,   421,   421,   422,
   423,   423,   423,   424,   424,   424,   424,   425,   425,   425,
   425,   425,   425,   425,   425,   425,   425,   426,   426,   427,
   428,   428,   428,   428,   428,   429,   429
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     2,     1,     1,     1,     1,     1,
     1,     8,    11,     0,     5,     1,     3,     1,     2,     1,
     6,     3,     6,     0,     7,     0,     8,     1,     6,     3,
     6,     0,     6,     0,     7,     0,     0,    10,     3,     3,
     3,     2,     1,     0,     2,     0,     2,     1,     0,     4,
     0,     2,     1,     4,     1,     1,     1,     1,     1,     1,
     4,     5,     1,     1,     1,     1,     1,     1,     0,     2,
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
    11,   411,   379,   256,   379,    14,     0,     0,     0,     0,
   270,   270,   283,   282,   284,   285,   286,   270,   270,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   334,   335,   336,   333,   270,   270,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   270,   379,   379,   379,   379,   379,   379,
   379,   379,   379,   379,   270,   650,   651,   655,   652,   653,
   656,     0,     3,     6,     7,   403,     8,     9,   379,    43,
   648,    10,   255,   257,     0,   359,   359,   379,   359,   379,
   352,   379,     0,   379,   132,   270,   654,    20,   379,   407,
   408,   409,   412,   413,   273,   270,   270,   266,   379,   657,
   379,   379,   655,     0,   500,   270,   507,     0,     0,     0,
   630,     0,     0,     0,     0,   270,   540,     0,   270,   270,
   270,   270,   270,   270,   270,   270,   270,     0,    42,     0,
     0,     0,     0,     0,     0,   270,   170,   166,   169,   167,
   551,   171,   182,   202,   192,   191,   204,   208,   211,   214,
   219,   222,   224,   226,   228,   231,   234,   238,   250,   542,
   196,     0,     0,   532,   490,   491,   492,   493,     0,     0,
   494,   270,   495,     0,   496,     0,   497,   499,   165,     0,
   484,     0,   538,     0,   514,   471,     0,     0,     0,   480,
     0,   481,   460,   479,   476,   477,   472,   473,   474,     0,
     0,   478,     0,     0,     0,   482,   459,     0,   287,   288,
   289,   290,   295,   297,   296,   300,   301,   312,   314,   315,
   313,   298,   299,   291,   292,   293,   294,   309,   310,   307,
   311,   302,   303,   306,   304,   305,   318,   320,   325,   308,
   321,   322,   323,   324,   316,   317,   319,   326,   327,   330,
   331,   328,   329,   337,   339,   338,   340,   341,   342,   343,
   344,   345,   346,   332,     4,   270,     0,   134,   138,   534,
   379,   379,   649,     5,   379,   360,   356,   357,   350,   358,
     0,   270,   270,   348,   270,   270,     0,   349,   404,   347,
   410,   414,   379,     0,   272,   379,     0,   263,   270,   648,
    16,    18,     0,   379,   270,    28,   422,   270,   166,   169,
   202,   254,   503,   165,     0,   270,   270,   270,   270,     0,
   639,   641,   646,     0,     0,   379,   428,     0,     0,   185,
   190,   189,   188,   187,   186,     0,   270,   183,   184,   270,
     0,     0,     0,     0,     0,   270,   509,   270,     0,     0,
     0,   502,   453,   270,   444,   445,   446,   447,     0,   448,
   449,   270,   451,   270,   450,   452,   514,   270,   270,   178,
   179,     0,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   229,
   235,   232,   541,   270,     0,   637,    39,     0,   515,   533,
   544,   634,     0,   501,   270,     0,     0,     0,   539,    40,
   461,   465,   475,   486,   487,   485,     0,     0,    41,    22,
   270,   422,   379,   270,   514,   535,   270,   258,   133,   379,
     0,   354,     0,   379,     0,   379,     0,   270,   270,   269,
   270,   268,   264,   379,     0,   270,     0,   379,   270,    19,
   419,     0,     0,   405,   420,   270,     0,     0,   508,     0,
   547,     0,   253,     0,   638,   647,   168,   270,   270,     0,
   430,   429,   431,   270,   498,   270,     0,   642,   643,   644,
   645,   640,   505,     0,     0,     0,     0,     0,   633,   379,
   512,   631,     0,     0,   173,     0,   180,     0,     0,     0,
   239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
   249,   205,   206,   207,   210,   209,   212,   213,   215,   216,
   217,   218,   220,   221,   223,   225,   227,   270,   270,   270,
   251,   270,   270,   197,   528,   169,   532,     0,   379,   513,
   545,     0,     0,   483,   469,     0,     0,    24,     0,   519,
   270,   536,   135,   379,   270,   379,   514,   137,   270,   259,
   353,   270,   369,     0,   377,   372,     0,   378,     0,   394,
   397,   391,   393,   274,   270,   270,   648,    15,    30,   270,
   422,   270,    17,   406,   415,   417,    36,   424,   379,   423,
   427,   504,   543,     0,   549,   270,   351,   436,     0,   422,
   432,   270,     0,   203,   379,   270,     0,   510,   511,     0,
     0,     0,   527,     0,   552,   270,   174,   172,   270,   270,
   230,     0,   233,   270,   199,   270,   201,   529,   530,   270,
   270,   270,   550,   270,   270,   379,    44,    26,   520,   523,
   270,   270,   521,   270,   537,     0,   261,   270,   355,   375,
   516,   361,   376,   516,   364,   270,   396,   270,     0,     0,
   270,   270,   270,     0,    32,     0,   270,     0,    71,   421,
   270,   433,   270,     0,   437,   440,   270,     0,   438,     0,
   422,     0,     0,   506,   454,   455,   456,   270,   270,   181,
   176,   177,   236,     0,     0,   531,   546,     0,   270,   270,
   270,   270,   270,   270,   270,   270,   270,     0,   166,   169,
   167,   182,   202,   191,   208,   211,   214,   219,   222,   224,
   226,   228,   231,     0,   555,   554,   563,   572,   582,   584,
   588,   591,   594,   599,   602,   604,   606,   608,   610,   612,
   616,   557,   165,     0,    23,    46,    97,    44,   524,   525,
   270,   522,    21,   270,   275,   379,   367,   516,   379,   368,
   516,   390,   395,   270,     0,   267,   270,   277,   265,   270,
     0,   379,    71,    34,     0,   416,   418,    37,   104,   425,
   399,     0,   270,   433,   400,   434,   548,   466,     0,   441,
   439,   442,     0,     0,   175,     0,   555,   270,   198,   200,
   636,     0,     0,   185,   190,   189,   188,   187,   186,   183,
   184,   270,   270,   270,   178,   179,     0,   270,   270,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   270,   229,   613,   232,   470,     0,   464,
    25,    51,    91,   107,    95,   111,   112,   113,   114,   115,
   118,   119,    45,    97,    73,    96,   379,   379,    77,    46,
   526,   270,     0,   381,   379,   379,   380,   379,   379,   379,
   398,   270,   280,     0,   275,    12,    31,    33,    71,    29,
   648,    98,   109,   102,    72,   104,    75,   103,   422,   426,
   401,   402,   270,   435,   443,     0,   194,     0,   514,   237,
   635,   168,   270,     0,   173,     0,     0,     0,     0,   617,
   618,   619,   620,   621,   622,   623,   624,   625,   626,   627,
   205,   206,   207,   210,   209,   212,   213,   215,   216,   217,
   218,   220,   221,   223,   225,   227,   609,   270,   611,   270,
   463,    47,    48,     0,   379,    89,   648,    74,   128,     0,
    78,    27,   275,   270,   379,     0,   270,   382,   370,   379,
   373,   379,   392,   278,   270,   648,    35,     0,   379,    89,
   648,    76,   270,   467,   270,     0,   632,   629,   203,   270,
   174,   172,   270,   270,     0,   556,     0,   379,    84,    85,
    86,    87,    88,   648,    79,    89,     0,     0,     0,   144,
   108,   153,   648,     0,   143,     0,   120,   125,   124,   123,
   122,   121,   126,   127,   130,     0,   260,   270,   384,   270,
   270,   379,   387,     0,   362,     0,   365,   279,   281,     0,
    38,   648,   648,   110,   648,   142,   270,     0,   195,   193,
   628,   515,     0,   176,   177,   614,     0,    55,    56,    64,
    65,     0,    53,    66,     0,    60,     0,    63,     0,    89,
     0,    90,    83,    81,    82,     0,   147,     0,     0,     0,
     0,     0,   140,     0,     0,   156,   163,   648,   155,     0,
   270,   276,   270,   270,     0,   385,   270,   371,     0,   374,
     0,    13,   106,   106,   141,   468,   553,   175,   270,     0,
    50,    52,    58,    57,    59,     0,     0,   106,    80,   106,
   148,   145,   152,   151,     0,   149,   150,   154,   139,     0,
   159,     0,     0,     0,     0,     0,   648,   262,   388,   379,
   383,   270,   363,   366,    99,   105,   101,   615,    68,    67,
     0,     0,     0,    92,    94,   146,   160,   157,     0,   161,
   162,   164,   117,   270,     0,   386,   389,     0,    54,    61,
   158,   129,   116,   270,    62,   131,     0,     0,     0
};

static const short yydefgoto[] = {  1207,
    82,    83,    84,    85,   122,   320,   321,    86,   667,   778,
   322,   803,   919,    87,   699,   921,   904,    89,   776,   777,
   881,   882,   982,   983,   984,  1092,  1093,  1094,  1146,  1095,
  1096,  1097,  1181,   808,   809,   893,   925,   894,  1034,  1035,
  1104,  1036,  1037,   895,   985,   986,   927,  1009,  1010,  1175,
  1176,   987,   928,  1011,   897,  1204,  1194,   898,  1055,   899,
  1046,  1120,    90,   289,   453,   455,    91,  1041,  1074,  1042,
  1155,  1043,  1117,  1118,   162,   163,   526,   164,   936,   165,
   166,   425,   564,   167,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   558,   177,   560,   178,   559,   828,   179,
   207,   494,   333,   290,    93,   678,   784,   115,   606,    94,
   316,   181,   287,   116,   117,   903,   799,   914,    96,    97,
    98,    99,   347,   291,   461,   101,   297,   102,   788,  1129,
   791,  1131,   681,  1064,   684,  1066,   103,   906,   907,  1061,
  1062,   104,   689,   599,   600,   813,   119,   483,   112,   113,
   106,   614,   615,   484,   485,   486,   701,   620,   348,   819,
   815,   503,   372,   373,   208,   228,   209,   210,   374,   933,
  1078,   212,   664,   213,   214,   215,   216,   183,   430,   375,
   376,   488,   637,   377,   335,   514,   378,   188,   379,   570,
   786,   999,   221,   583,   521,   429,   190,   584,   585,   380,
   191,   192,   381,   661,   624,   382,   224,   383,   387,   719,
   755,   879,   756,   757,   758,   759,   760,   761,   762,   763,
   764,   765,   766,   767,   768,   769,   770,   771,   978,  1139,
   772,  1082,   384,   385,   197,   386,   294,   334,   200,   109
};

static const short yypact[] = {  2181,
-32768,    89,  5902,-32768,  6571,-32768,   817,  3148,  3526,  3526,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   446,-32768,-32768,
-32768,  2357,-32768,-32768,-32768,   207,-32768,-32768,  5594,-32768,
   110,-32768,-32768,-32768,   184,  6407,  6407,-32768,  6407,   131,
   160,-32768,   604,-32768,-32768,   817,-32768,-32768,-32768,-32768,
-32768,-32768,    89,-32768,-32768,   198,-32768,   131,-32768,-32768,
-32768,  5902,-32768,   230,-32768,  2353,-32768,   256,   307,   369,
-32768,   403,   817,   272,   417,  1001,-32768,  2729,  2353,  2353,
  2353,  2353,  2353,  2353,-32768,  3628,  3628,   425,-32768,   445,
   473,   503,   514,   523,   337,  5041,-32768,   566,   581,-32768,
   660,-32768,   755,  1187,-32768,-32768,-32768,   728,   331,   455,
   556,   500,   671,   584,   665,   686,   100,-32768,-32768,   260,
-32768,  3672,   657,   684,-32768,-32768,-32768,-32768,   766,  3294,
-32768,  5041,-32768,  3672,-32768,  3672,-32768,-32768,   778,   785,
-32768,   791,-32768,  2917,   660,   812,   332,   750,  3337,-32768,
  3526,-32768,-32768,-32768,  6167,-32768,-32768,-32768,-32768,   847,
   843,-32768,  3526,  3526,  3672,-32768,-32768,   792,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   873,   868,-32768,-32768,-32768,
   131,  5437,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   891,   802,-32768,-32768,   817,   817,   224,-32768,   207,-32768,
-32768,-32768,-32768,   913,-32768,-32768,   934,   919,   802,   110,
-32768,   288,   936,-32768,   817,-32768,    85,  2353,-32768,-32768,
-32768,-32768,-32768,-32768,   939,  2353,  2353,  2353,  1330,   945,
-32768,-32768,-32768,   367,   380,  6036,   396,   946,   948,-32768,
-32768,-32768,-32768,-32768,-32768,   963,  2353,-32768,-32768,  2353,
   952,   975,   977,   978,   980,  2353,-32768,  1749,   823,   823,
   823,-32768,-32768,  5041,-32768,-32768,-32768,-32768,   988,-32768,
-32768,  5041,-32768,  5041,-32768,-32768,-32768,  1940,  2353,-32768,
-32768,   125,  2353,  2353,  2353,  2353,  2353,  2353,  2353,  2353,
  2353,  2353,  2353,  2353,  2353,  2353,  2353,  2353,  2353,  2353,
  2353,  2353,  2353,  2353,  2353,  2353,  2353,  2353,  2353,-32768,
-32768,-32768,-32768,  2353,   482,-32768,-32768,  2541,-32768,-32768,
  1005,-32768,  1006,-32768,  2353,   562,   991,  1002,-32768,-32768,
-32768,-32768,  6167,-32768,-32768,-32768,  3105,  1017,-32768,-32768,
  2353,   291,  3774,   802,  1003,-32768,   802,-32768,   277,  6571,
   949,  1015,  1019,  1023,  1024,  1023,   817,  1025,   802,-32768,
   802,-32768,-32768,-32768,   951,  1013,  1022,-32768,   802,   288,
-32768,   817,  1027,-32768,  1029,   817,   348,  1031,-32768,   350,
  1033,   412,  1033,  1038,-32768,-32768,-32768,-32768,  1872,  1035,
   458,-32768,   695,  2353,-32768,-32768,  1036,-32768,-32768,-32768,
-32768,-32768,-32768,  1040,  1039,   860,   878,   882,-32768,  3774,
-32768,-32768,  1058,  1046,-32768,   442,-32768,   140,   817,   817,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   728,   728,   331,   331,   455,   455,
   455,   455,   556,   556,   500,   671,   584,  2353,  2353,  2353,
-32768,  4408,  4633,-32768,-32768,  5825,-32768,  3483,  3957,-32768,
-32768,  1048,   489,-32768,-32768,  1050,  1049,-32768,  1055,-32768,
  4323,-32768,-32768,  4140,  4366,-32768,  1003,-32768,-32768,  1052,
-32768,-32768,  1071,  1073,-32768,  1076,  1079,-32768,   542,-32768,
  1083,-32768,-32768,-32768,   198,-32768,   199,-32768,-32768,  2353,
   374,   802,-32768,-32768,  1089,-32768,-32768,  1106,  6571,-32768,
-32768,-32768,-32768,  1088,-32768,  1330,-32768,-32768,  1090,   793,
   695,  1990,  1091,-32768,-32768,-32768,  1097,-32768,-32768,  1034,
  1042,  1044,-32768,  1102,-32768,  2353,-32768,-32768,-32768,-32768,
   665,   550,   686,  2353,-32768,  2353,-32768,-32768,-32768,  4548,
  5041,  2353,-32768,  4858,  2353,-32768,-32768,-32768,-32768,-32768,
  4591,  4773,-32768,  4816,-32768,  1098,-32768,-32768,-32768,-32768,
-32768,  1113,-32768,-32768,  1114,-32768,   817,-32768,   817,  1118,
  1797,-32768,-32768,  1111,-32768,  1116,-32768,   153,-32768,-32768,
   817,   540,  5041,  1121,-32768,-32768,   249,  1120,-32768,  1122,
   122,  1126,  1123,-32768,-32768,-32768,-32768,  2353,  4858,-32768,
-32768,-32768,-32768,  1125,  1127,-32768,-32768,   491,  2353,  2353,
  2353,  2353,  2353,  2353,  2353,  3628,  3628,  1129,   574,   579,
   594,   809,  1741,   601,   930,   602,   597,   638,   609,  1128,
  1119,  1130,  1101,   150,  1140,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   627,   632,-32768,-32768,  1021,-32768,-32768,-32768,
  4998,-32768,-32768,-32768,-32768,  6494,-32768,-32768,  6494,-32768,
-32768,-32768,-32768,  2353,   710,-32768,  1797,-32768,-32768,  1797,
  1080,-32768,-32768,-32768,  1144,-32768,-32768,-32768,  1331,-32768,
   207,  1147,-32768,   457,-32768,   695,-32768,-32768,  1148,-32768,
-32768,-32768,  1149,   817,-32768,   643,  1152,  2353,-32768,-32768,
  1160,   658,  1155,   674,   687,   711,   723,   725,   769,   772,
   784,  2353,  2016,  2353,   799,   800,   136,  2353,  2353,  2353,
  2353,  2353,  2353,  2353,  2353,  2353,  2353,  2353,  2353,  2353,
  2353,  2353,  2353,  2353,  2353,  2353,  2353,  2353,  2353,  2353,
  2353,  2353,  2353,  2353,  2353,-32768,  2353,-32768,  1161,  1163,
-32768,  1010,   359,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   907,-32768,-32768,-32768,-32768,  1117,-32768,
-32768,  1797,   395,-32768,   131,  5671,-32768,  6494,  5671,  6494,
-32768,-32768,-32768,   829,-32768,-32768,-32768,-32768,-32768,-32768,
   110,   361,-32768,-32768,-32768,   918,-32768,-32768,   483,-32768,
-32768,-32768,  2059,-32768,-32768,   512,-32768,  1170,  1003,-32768,
-32768,   805,  2353,  1168,   820,   822,   311,   817,   817,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   837,   844,   858,   225,   883,   839,   926,   134,   345,   393,
   471,   530,   666,    86,   544,   121,   665,  2353,   686,  4858,
-32768,-32768,-32768,  1026,  6298,    27,   102,-32768,-32768,   654,
-32768,-32768,-32768,-32768,-32768,  1172,   242,-32768,-32768,  5671,
-32768,  5671,-32768,-32768,  1577,   603,-32768,  1104,  6298,    27,
   102,-32768,   694,-32768,-32768,   817,-32768,  1018,   864,-32768,
   865,   872,-32768,-32768,   915,-32768,   560,  5280,-32768,-32768,
-32768,-32768,-32768,   753,-32768,    27,   762,   147,   147,-32768,
-32768,   266,   759,  1105,-32768,   175,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   810,-32768,   802,-32768,-32768,
  1181,-32768,  1184,  1188,-32768,  1189,-32768,-32768,-32768,  1124,
-32768,  5122,   753,-32768,   759,-32768,   551,  1186,-32768,-32768,
-32768,-32768,  1190,   881,   890,-32768,   560,-32768,-32768,-32768,
-32768,  1133,   560,-32768,   958,-32768,  1192,-32768,  1134,    27,
  1135,-32768,-32768,-32768,-32768,   188,   266,   169,   817,   817,
   147,  1137,-32768,   175,   175,-32768,   352,   830,-32768,   175,
-32768,-32768,  2353,   242,  1195,-32768,-32768,-32768,  1197,-32768,
  1206,-32768,  1154,  1154,-32768,-32768,-32768,   929,  2353,   924,
-32768,-32768,-32768,-32768,-32768,   560,   560,  1154,-32768,  1154,
-32768,-32768,-32768,   266,  1201,-32768,-32768,   266,-32768,   469,
   352,   431,   817,   817,   175,  1141,   830,-32768,-32768,-32768,
-32768,  2353,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   560,  1212,  1207,-32768,-32768,-32768,-32768,-32768,  1208,-32768,
-32768,   352,-32768,-32768,  1145,-32768,-32768,  1209,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1236,  1239,-32768
};

static const short yypgoto[] = {-32768,
-32768,  1159,-32768,-32768,-32768,-32768,  -394,  -100,-32768,-32768,
   917,-32768,-32768,-32768,-32768,-32768,    88,-32768,   477,-32768,
   356,-32768,-32768,-32768,-32768,   164,-32768,-32768,-32768,  -858,
-32768,-32768,-32768,  -695,-32768,-32768,-32768,  -707,   248,   159,
-32768,-32768,   232,   366,-32768,-32768,   335,-32768,-32768,  -982,
  -700,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -888,
   101,   258, -1011,   151,-32768,  -618,   427,  1020,-32768,-32768,
  -590,-32768,-32768,    35,  -363,  -342,  -319,  -343,  -402,  -401,
  -338,  -478,  -462,-32768,  -588,-32768,  -117,-32768,-32768,  1261,
  1341,  -613,  -362,     1,-32768,-32768,-32768,  -467,-32768,-32768,
-32768,     0,  -238,   801,-32768,  -806,  -701,-32768,-32768,-32768,
-32768,-32768,-32768,    66,   682,-32768,   824,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1016,  -703,  -774,-32768,
   152,-32768,-32768,   586,   591,   465,     5,  -373,  1167,-32768,
     8,-32768,-32768,  -614,-32768,-32768,-32768,   582,  -295,   935,
-32768,  -487,   559,-32768,  1274,-32768,  1062,-32768,   650,-32768,
-32768,-32768,-32768,   -99,-32768,-32768,-32768,-32768,   117,  1099,
  1282,-32768,-32768,  1361,-32768,-32768,  -321,-32768,   744,   205,
  -606,  -790,-32768,   768,-32768,-32768,   866,   -82,  -344,   163,
-32768,   180,    57,-32768,-32768,    62,-32768,    83,-32768,-32768,
   577,-32768,   317,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1409,-32768,-32768,  1512,  -205,   227,   453,-32768
};


#define	YYLAST		6759


static const short yytable[] = {    95,
    92,   604,    95,   513,   105,   309,   292,   462,   332,   114,
   229,   230,   704,   631,   555,   708,   556,   231,   232,   233,
   234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   545,   546,   742,   515,   257,   258,   259,
   260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
   270,   271,   272,   273,   193,   100,   547,   548,   118,   194,
   121,   553,   554,   744,   284,   754,   896,   789,   579,   651,
   557,    95,    92,   477,   613,   909,   105,    88,   577,   481,
   195,   549,   550,   551,   552,   913,   823,   653,   915,   301,
   742,   926,  1160,  1161,   437,    95,  -603,   918,  1006,   441,
  -603,   442,  1029,  1030,   475,   314,   315,   317,  1001,   293,
   312,   323,     2,   446,   184,  1038,   481,   293,   744,   325,
   754,   998,   443,   588,   998,  1039,   629,   346,   415,   416,
   421,  -607,  1031,  1032,   356,  -607,   822,   100,  -270,  1106,
  1107,  1177,   529,  1192,  -595,   422,  1033,   806,  -595,   418,
   424,   296,   296,   948,   296,  1184,   648,  1185,   530,    88,
  1038,   222,   222,   350,   351,   352,   353,   354,   355,   949,
  1039,   908,   409,   410,   910,   752,  1056,   324,   223,   223,
   876,   991,  1038,   896,   193,  1152,   110,   111,  1114,   194,
   993,   753,  1039,   346,  1000,   877,  1002,   295,  1115,  1065,
   635,  1067,  1151,  1108,   816,  1109,   293,   697,   313,  1154,
   195,   692,  1158,  1007,   660,   998,   107,   998,  1140,   107,
  -271,  1110,   286,   107,   199,   199,   199,   696,   193,   672,
   752,   477,   467,   194,   303,  -590,   193,   694,   332,  -590,
   193,   194,   193,   327,   349,   194,   753,   194,   404,   405,
   406,   749,   750,  1060,   195,   515,  -379,  -379,  -379,   710,
  -379,  -379,   195,  1154,   499,     2,   195,   423,   195,   336,
   424,   193,     2,    76,  1040,   451,   194,  1182,  1183,   341,
   301,  1108,   456,  1109,  -379,   481,   462,  -379,   426,  -379,
   745,    95,   460,  1069,   463,   465,   459,   195,   107,  1110,
   432,  -271,   433,   476,   708,   578,   749,   750,    95,  1014,
   748,   746,  1198,   474,   323,   751,   816,   346,    76,  1040,
   337,   424,   107,   332,    76,    77,   123,  1022,    79,    80,
   713,   448,   366,   367,   747,   569,   500,   441,   107,   439,
    76,  1040,   424,  1153,   501,   745,    76,  1116,   724,   107,
   725,   742,   407,   408,   199,  -596,   222,   346,   424,  -596,
   424,   222,   497,   222,   623,   748,   746,  1162,   481,  1163,
   751,   332,   199,   223,   496,   222,   222,   424,   223,   744,
   223,   754,   338,   409,   410,  1164,   977,   423,   695,   747,
   424,   693,   223,   223,   497,    76,    77,   123,   199,    79,
    80,   498,   994,  -597,   979,   995,   199,  -597,   199,  -270,
   199,   499,   199,    76,    77,   123,   339,    79,    80,     2,
   199,   911,   424,   833,   342,   199,   625,   199,   542,   543,
   544,   409,   410,   456,   -93,   -93,  -100,  -100,   360,   199,
   199,   199,   108,    95,  1038,   108,    95,  1188,   586,   124,
   361,   589,   646,   594,  1039,   597,   647,   603,    95,   974,
    95,   975,  -379,  -379,  -379,   610,  -379,  -379,   323,  -657,
  -270,  -270,   499,   499,   193,   619,   325,   481,   362,   194,
     2,  -598,   332,  1187,  1162,  -598,  1163,   627,   964,   965,
   500,   752,   633,   409,   410,   460,  -379,   706,  -379,   424,
   195,   424,  1164,   663,   332,   831,  -379,   753,   363,   409,
   410,   966,   967,   562,   563,   498,   972,   973,   107,   364,
  -657,   107,   107,   107,   108,   976,  1015,   365,   634,  1016,
   -93,   -93,  -100,  -100,   567,   107,   968,   969,   970,   971,
  -600,   107,   415,   416,  -600,  -379,  -379,  -379,   108,  -379,
  -379,   686,   687,  -270,  -605,   499,   411,   412,  -605,   456,
   424,   723,   417,     2,   326,  -430,   499,   749,   750,   439,
   413,   414,   424,  1087,   456,   340,   497,  -651,   676,   631,
  1122,   460,   411,   412,  -560,   516,   517,   518,  -560,  -559,
   199,   811,  -655,  -559,   690,   691,   413,   414,   199,   222,
   199,   323,    76,  1040,  -561,  1153,   745,  1018,  -561,   325,
   293,  -581,   418,   995,   193,  -581,   223,  -657,  -657,   194,
   633,  -657,  -657,   862,   863,   460,   748,   746,    76,    77,
   123,   751,    79,    80,   931,   864,   865,  -558,   721,   722,
   195,  -558,   424,   346,   199,   346,   880,   182,   211,   211,
   747,   870,   871,   424,  -379,  -379,  -379,   938,  -379,  -379,
   305,   306,   307,   199,   866,   867,   332,   785,   424,   199,
   107,  -652,   942,   107,   702,   792,  -601,   794,   868,   869,
  -601,   800,   801,   107,  -575,   107,   805,   107,  -575,   417,
   619,   812,   411,   412,   419,   107,   500,  -580,   107,   814,
   940,  -580,   107,   811,   501,  1008,   413,   414,  -270,   499,
   632,    76,    77,   123,  1083,    79,    80,     2,   346,   912,
   687,  -579,    76,    77,   123,  -579,    79,    80,  1088,  1089,
   420,    76,  1090,  -578,  1091,  -577,   199,  -578,   427,  -577,
   431,   189,   220,   220,   108,   107,   107,   464,   466,   468,
  1169,   404,   405,   406,   834,   835,   836,   837,   838,   839,
   293,   108,  1047,  1100,  1048,  -488,   293,   326,   388,  1111,
   389,  1044,  -379,   902,   428,  1049,  1050,   182,  1051,  -576,
  1052,  1053,  -573,  -576,   199,   199,  -573,   481,  -379,  -654,
  1070,   390,   391,  1054,  -574,  1076,   434,   199,  -574,  1197,
   199,   199,   930,   812,   435,   633,  -379,   706,  -379,  -570,
  -571,   814,  1099,  -570,  -571,  -562,  -379,  1121,  1101,  -562,
   995,   182,   843,  -653,   844,     2,  -379,  1112,   107,   182,
  -565,   440,   646,   182,  -565,   182,  1021,   293,  1004,  1005,
  1165,   905,  -379,   211,   905,   845,   846,  -585,   211,  -592,
   211,  -585,   445,  -592,  -586,   444,  1133,  1134,  -586,  1135,
   407,   408,   211,   211,   182,    76,    77,   123,  -587,    79,
    80,   189,  -587,   449,  -583,  -566,   199,   199,  -583,  -566,
   773,   452,  -564,   961,   962,   963,  -564,   199,   199,   450,
   199,  -568,  1028,  -589,   996,  -568,   108,  -589,   458,   108,
  -569,  1003,  1166,   107,  -569,   107,   404,   405,   406,   601,
   298,   108,   300,   108,   107,   189,  1072,   107,   107,   199,
   470,   326,   519,   189,   616,   424,  1086,   189,   621,   189,
   522,   473,   523,    76,  1103,   773,  -593,   220,   438,  -567,
  -593,   472,   220,  -567,   220,  1179,  1180,   407,   408,   478,
   489,  1195,   495,   859,   860,   861,   220,   220,   189,   508,
   504,   905,   505,   905,   905,   905,   309,  1019,   883,   884,
   885,   649,   650,    76,    77,   123,   506,    79,    80,   922,
   923,   924,   509,  1057,   510,   511,    95,   512,    76,    77,
   123,  1063,    79,    80,    76,   332,   520,   199,  1143,  1144,
  1145,   582,   812,   571,  1079,   574,   572,   589,   343,   460,
  1077,  1178,  1084,  1085,   328,   575,   587,   576,   456,   139,
   140,   141,   142,   143,   144,   592,   591,   593,   608,   609,
   107,  -270,   596,   602,   640,   611,   145,   146,   147,   618,
   107,   617,   622,   424,   332,   626,   636,    95,   630,  1123,
  1125,   638,   641,   639,   326,   905,   642,   905,   644,   645,
   148,   662,   456,   665,   677,   666,   812,   182,   582,   668,
   274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
   680,   682,   883,   884,   885,   683,   211,   685,   886,   887,
   888,   889,   890,   891,   892,   688,   185,   217,   217,   698,
   700,   157,   703,   299,   711,   302,   705,   304,   714,   308,
  1168,   715,   783,    95,   310,   718,  1172,   582,  1063,   716,
   524,   717,   787,   790,   318,   796,   319,   802,   818,   601,
   804,   601,   582,   675,   820,   331,   824,   825,   821,   829,
   807,   830,   842,   621,   108,   875,   872,   873,   331,   331,
   331,   331,   331,   331,   878,   358,   359,   916,   920,   874,
   929,   189,   934,   935,   107,   107,   939,   941,   392,   943,
   981,   980,    76,   329,   330,   160,   -49,  1017,  1020,  1059,
   220,  1071,  1113,  1202,   886,   887,   888,   889,   890,   891,
   892,  1124,  1027,  1206,  1081,  1127,   773,  1128,  1130,   393,
  1136,  1132,  1171,  1045,  1138,  1147,  1173,   182,   675,   727,
  1141,  1148,  1150,   107,  1159,  1174,   884,  1186,  1193,  1199,
   675,  1200,  1203,  1205,  1201,  1208,   185,  1045,  1209,   107,
   285,   480,   107,   394,   395,   396,   397,   398,   399,   400,
   401,   402,   403,  1098,   900,   992,  1142,  1073,  1149,   988,
  1012,   817,  1189,  1105,  1045,  1045,   108,  1102,  1075,   946,
  1167,   605,  1119,   679,   795,  1170,   937,   793,   932,   311,
   185,   502,   810,   227,   107,   447,  1137,   643,   185,   186,
   218,   218,   185,   568,   185,   827,  1026,     0,     0,     0,
     0,     0,   217,   107,     0,     0,   454,   217,     0,   217,
   457,   189,     0,  1098,     0,     0,     0,     0,     0,  1098,
     0,   217,   217,   185,     0,     0,     0,     0,   469,     0,
     0,   471,     0,     0,  1045,   107,   107,  1045,     0,   479,
  1119,  1119,   482,     0,     0,     0,  1119,  -252,   180,     0,
   107,     0,     0,   328,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,   187,   219,
   219,     0,  1098,  1098,     0,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,   331,     0,     0,  1045,   107,
   107,  1119,     0,     0,     0,     0,     0,     0,     0,   148,
  1023,  1024,   922,   923,   924,     0,     0,  1098,   886,   887,
   888,   889,   890,   891,   892,     0,   196,   225,   225,   186,
     0,     0,     0,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,     0,
   157,     0,     0,     0,     0,     0,     0,     0,     0,   108,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   186,     0,   108,     0,   482,  1080,     0,
   331,   186,     0,     0,   590,   186,   344,   186,   345,   595,
     0,   598,     0,     0,     0,   218,     0,     0,     0,   607,
   218,     0,   218,   612,     0,     0,     0,     0,   187,     0,
     0,     0,     0,     0,   218,   218,   186,     0,     0,     0,
   108,    76,   329,   330,   160,     0,     0,     0,   331,   198,
   226,   226,   180,   331,     0,     0,   185,     0,     0,   108,
   180,     0,     0,     0,   180,     0,   180,     0,     0,     0,
     0,     0,   187,     0,   436,   217,   196,     0,     0,     0,
   187,     0,     0,     0,   187,     0,   187,     0,     0,     0,
     0,  1156,  1157,     0,   219,   180,     0,     0,     0,   219,
     0,   219,     0,     0,     0,     0,   108,   331,     0,   331,
     0,   655,   657,   219,   219,   187,     0,     0,     0,     0,
   196,     0,     0,     0,     0,   797,  1068,     0,   196,     0,
   328,   590,   196,     0,   196,   139,   140,   141,   142,   143,
   144,     0,   225,     0,     0,  1190,  1191,   225,     0,   225,
   507,     0,   145,   146,   147,     0,   482,     0,     0,   331,
     0,   225,   225,   196,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   707,   148,     0,   527,   198,
   712,   331,     0,   531,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,     0,     0,   185,     0,   487,     0,
     0,     0,     0,     0,     0,     0,   490,   491,   492,   493,
     0,   775,     0,   743,   561,     0,     0,   157,     0,     0,
     0,     0,     0,   198,     0,     0,     0,   487,     0,     0,
     0,   198,     0,     0,     0,   198,     0,   198,   487,   186,
     0,     0,     0,     0,     0,   226,     0,     0,     0,     0,
   226,     0,   226,     0,     0,     0,     0,     0,   218,   528,
     0,     0,     0,     0,   226,   226,   198,     0,   743,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   331,
   331,   331,   331,   331,   331,   840,   841,   847,    76,   329,
   330,   160,     0,   848,     0,     0,     0,  -514,   180,     0,
     0,     0,   368,     0,     0,   573,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,   187,     0,
     0,     0,     0,     0,   145,   146,   147,   849,   850,   851,
   852,   853,   854,   855,   856,   857,   858,   219,     0,     0,
     0,     0,     0,   331,     0,   797,     0,   917,   148,     0,
   328,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,   196,     0,     0,     0,
     0,     0,   145,   146,   147,     0,     0,   331,     0,   186,
     0,     0,     0,     0,     0,   225,     0,     0,     0,   157,
     0,     0,     0,     0,     0,     0,   148,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   328,   331,     0,   628,   652,
   139,   140,   141,   142,   143,   144,   720,   157,   180,     0,
     0,     0,   989,   990,     0,     0,     0,   145,   146,   147,
   997,     0,     0,     0,     0,     0,     0,     0,   187,     0,
    76,   329,   330,   160,     0,     0,     0,     0,     0,   198,
     0,   148,     0,     0,  1013,     0,     0,     0,     0,     0,
     0,   798,     0,     0,     0,     0,     0,     0,   226,     0,
     0,     0,   331,   328,   525,     0,   493,     0,   139,   140,
   141,   142,   143,   144,     0,     0,   196,     0,    76,   329,
   330,   160,   157,     0,     0,   145,   146,   147,     0,     0,
     0,     0,     0,     0,   487,     0,   487,     0,     0,   743,
     0,     0,   728,     0,     0,   774,     0,     0,     0,   148,
  1058,     0,     0,   328,     0,     0,   709,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   145,   146,   147,     0,   328,
   945,     0,     0,     0,   139,   140,   141,   142,   143,   144,
   157,     0,     0,    76,   329,   330,   160,   798,   826,   148,
   798,   145,   146,   147,     0,     0,     0,     0,     0,   832,
     0,     0,     0,     0,     0,     0,     0,  1126,     0,   198,
     0,     0,   328,  -252,     0,   148,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
   157,     0,   944,   527,   145,   146,   147,     0,   950,   951,
   952,   953,   954,   955,   956,   957,   958,   959,   960,     0,
     0,    76,   329,   330,   160,     0,   157,     0,   148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   331,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   331,     0,
     0,     0,   798,     0,     0,     0,     0,     0,     0,   157,
     0,    76,   329,   330,   160,     0,     0,     0,     0,     0,
    -1,     1,     0,     0,   947,  1196,     0,     0,     0,     0,
     0,   331,     0,     0,     0,     0,     0,    76,   329,   330,
   160,     0,     0,     0,  -270,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    76,   329,   330,   160,     0,     0,     0,  -379,  -379,  -379,
     0,     4,     0,     0,     0,     5,     6,     7,     0,     0,
     0,     0,     0,     0,     0,   798,     0,     0,     0,     8,
     9,    10,     0,   493,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
    13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,  1025,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    -2,     1,     0,     0,
     0,     0,    76,    77,    78,     0,    79,    80,    81,     0,
     0,     0,     0,     0,     0,     0,   328,     0,     0,     0,
  -270,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     2,     0,     0,     0,     0,     0,     0,     0,   145,   146,
   147,     3,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   148,  -379,  -379,  -379,     0,     4,     0,     0,
     0,     5,     6,     7,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     8,     9,    10,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   157,    11,    12,    13,     0,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,     0,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,     0,     0,    76,   329,   330,   160,    76,    77,
    78,   125,    79,    80,    81,     0,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   137,  -514,
   565,     0,     0,     0,   138,     0,     0,     0,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,  -270,  -270,     0,     3,   145,   146,   147,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  -379,  -379,  -379,
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
     0,     0,    76,   158,   566,   160,   161,    80,    81,   125,
     0,     0,     0,     0,   126,   127,   128,     0,   129,   130,
   131,   132,   133,   134,   135,   136,   137,  -514,     0,     0,
     0,     0,   138,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
  -270,  -270,     0,     0,   145,   146,   147,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  -270,  -270,  -270,   148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   156,  -270,  -270,  -270,   157,
  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
     0,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
  -270,  -270,  -270,  -270,  -270,  -270,     0,  -270,  -270,  -270,
  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
  -270,  -270,  -270,  -270,     0,     0,     0,     0,     0,     0,
    76,   158,   159,   160,   161,    80,  -270,   201,     0,     0,
     0,     0,   126,   127,   128,     0,     0,   202,   131,   132,
   133,   134,   135,   136,   203,  -514,  -518,     0,     0,     0,
   204,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,  -270,  -270,
     0,     0,   145,   146,   147,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  -270,  -270,  -270,   148,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   156,  -270,  -270,  -270,   157,  -270,  -270,
  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,     0,  -270,
  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
  -270,  -270,  -270,  -270,     0,  -270,  -270,  -270,  -270,  -270,
  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
  -270,  -270,     0,     0,     0,     0,     0,     0,    76,   158,
   159,   160,   205,   206,  -270,   201,     0,     0,     0,     0,
   126,   127,   128,     0,     0,   202,   131,   132,   133,   134,
   135,   136,   203,  -462,  -462,     0,     0,     0,   204,  -462,
     0,     0,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -270,  -270,   125,     0,
   145,   146,   147,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   137,  -514,     0,     0,     0,
     0,   138,     0,     0,   148,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,  -270,
  -270,     0,     0,   145,   146,   147,  -462,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    76,   158,   159,   160,
   205,   206,     0,     0,   125,     0,     0,     0,     0,   126,
   127,   128,     0,   129,   130,   131,   132,   133,   134,   135,
   136,   137,  -514,     0,     0,     0,     0,   138,     0,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,    76,
   158,   159,   160,   161,    80,  -270,  -270,   201,     0,   145,
   146,   147,   126,   127,   128,     0,     0,   202,   131,   132,
   133,   134,   135,   136,   203,  -514,  -518,     0,     0,     0,
   204,     0,     0,   148,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,  -270,  -270,
     0,     0,   145,   146,   147,  -489,   150,   151,   152,   153,
   154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
   156,     0,     0,     0,   157,     0,   148,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  -458,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   156,     0,     0,     0,   157,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    76,   158,   159,   160,   161,
    80,     0,     0,   125,     0,     0,     0,     0,   126,   127,
   128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
   137,  -514,   658,     0,     0,     0,   138,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,     0,    76,   158,
   159,   160,   205,   206,  -270,  -270,   201,     0,   145,   146,
   147,   126,   127,   128,     0,     0,   202,   131,   132,   133,
   134,   135,   136,   203,  -514,  -518,     0,     0,     0,   204,
     0,     0,   148,     0,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     0,     0,     0,     0,  -270,  -270,     0,
     0,   145,   146,   147,     0,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     0,     0,     0,   157,     0,   148,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   150,   151,
   152,   153,   154,   155,     0,     0,     0,     0,     0,     0,
     0,     0,   156,     0,     0,     0,   157,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   357,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,    76,   158,   159,   160,   161,    80,
     0,     0,   125,   145,   146,   147,     0,   126,   127,   128,
     0,   129,   130,   131,   132,   133,   134,   135,   136,   137,
  -514,     0,     0,     0,     0,   138,     0,   148,     0,     0,
   139,   140,   141,   142,   143,   144,     0,    76,   158,   159,
   160,   205,   206,  -270,  -270,     0,     0,   145,   146,   147,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
     0,   148,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   156,   126,
   127,   128,   157,   129,   130,   131,   132,   133,   134,   135,
   136,   203,  -514,   580,     0,     0,     0,   368,     0,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,    76,
   329,   330,   160,     0,     0,  -270,  -270,     0,     3,   145,
   146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   148,     4,     0,     0,     0,     0,     0,
     0,     0,     0,    76,   158,   159,   160,   161,    80,     0,
     0,     0,     0,     0,     0,     0,   150,   151,   152,   153,
   154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
   581,    11,    12,    13,   157,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   369,
     0,   370,     0,     0,   371,    76,   158,   566,   160,   161,
    80,    81,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   203,  -514,   659,     0,     0,     0,
   368,     0,     0,     0,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,  -270,  -270,
     0,     3,   145,   146,   147,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   148,     4,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   156,    11,    12,    13,   157,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,     0,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,   369,     0,   370,     0,     0,   371,    76,   158,
   566,   160,   161,    80,    81,   126,   127,   128,     0,   129,
   130,   131,   132,   133,   134,   135,   136,   203,  -514,   670,
     0,     0,     0,   368,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,  -270,  -270,     0,     3,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   150,   151,   152,   153,   154,   155,     0,     0,
     0,     0,     0,     0,     0,     0,   671,    11,    12,    13,
   157,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,   369,     0,   370,     0,     0,
   371,    76,   158,   566,   160,   161,    80,    81,   126,   127,
   128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
   203,  -514,   669,     0,     0,     0,   368,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   145,   146,
   147,   126,   127,   128,     0,   129,   130,   131,   132,   133,
   134,   135,   136,   203,  -514,   673,     0,     0,     0,   368,
     0,     0,   148,     0,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   145,   146,   147,     0,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     0,   654,     0,   157,     0,   148,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   146,   147,     0,     0,   150,   151,
   152,   153,   154,   155,     0,     0,     0,     0,     0,     0,
     0,     0,   674,     0,     0,     0,   157,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
   370,     0,     0,   371,    76,   158,   159,   160,   161,    80,
     0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   369,     0,   370,     0,     0,   371,    76,   158,   159,
   160,   161,    80,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -514,   726,     0,     0,
     0,   368,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,    76,
   329,   330,   160,   145,   146,   147,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   203,  -514,
   779,     0,     0,     0,   368,     0,     0,   148,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   145,   146,   147,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,   656,     0,   157,     0,
   148,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   145,   146,
   147,     0,     0,   150,   151,   152,   153,   154,   155,     0,
     0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
     0,   157,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   369,     0,   370,     0,     0,   371,    76,
   158,   159,   160,   161,    80,     0,     0,     0,     0,     0,
     0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   369,     0,   370,     0,
     0,   371,    76,   158,   159,   160,   161,    80,   126,   127,
   128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
   203,  -514,   780,     0,     0,     0,   368,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,    76,   329,   330,   160,   145,   146,
   147,   126,   127,   128,     0,   129,   130,   131,   132,   133,
   134,   135,   136,   203,  -514,   782,     0,     0,     0,   368,
     0,     0,   148,     0,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   145,   146,   147,     0,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   781,
     0,   729,     0,   157,     0,   148,   730,   731,   732,   733,
   734,   735,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   736,   737,     0,     0,   150,   151,
   152,   153,   154,   155,     0,     0,     0,     0,     0,     0,
     0,     0,   156,     0,     0,     0,   157,   738,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
   370,     0,     0,   371,    76,   158,   159,   160,   161,    80,
     0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   369,     0,   370,     0,     0,   371,    76,   158,   159,
   160,   161,    80,   126,   127,   128,     0,   129,   130,   131,
   132,   133,   134,   135,   136,   203,  -514,   901,     0,     0,
     0,   368,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,    76,
   739,   740,   741,   145,   146,   147,   126,   127,   128,     0,
   129,   130,   131,   132,   133,   134,   135,   136,   203,  -514,
     0,     0,     0,     0,   368,     0,     0,   148,     0,   139,
   140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   145,   146,   147,     0,
   150,   151,   152,   153,   154,   155,     0,     0,     0,     0,
     0,     0,     0,     0,   156,     0,     0,     0,   157,     0,
   148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   150,   151,   152,   153,   154,   155,   293,
     0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
     0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
     0,     0,     0,   369,     0,   370,     0,     0,   371,    76,
   158,   159,   160,   161,    80,     0,     0,     0,  -379,  -379,
  -379,     0,     4,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   369,     0,   370,     0,
     0,   371,    76,   158,   159,   160,   161,    80,     0,    11,
    12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,   293,     0,     0,
     0,     0,     0,     0,     0,   120,     0,     0,     0,    81,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  -648,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
     0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,  -136,     0,     0,     0,     0,
  -136,     0,     0,   120,     0,     0,     0,    81,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
    74,    75,   288,     0,     0,     0,     0,     0,     0,     0,
   120,     0,     0,     0,    81,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  -517,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    11,    12,    13,     0,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
     0,     0,     0,     0,     0,     0,     0,   120,    11,    12,
    13,    81,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,  -655,     0,     0,     0,
     0,     0,     0,     0,   120,     0,     0,     0,    81,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -657,  -657,  -657,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  -657,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  -270,     0,     0,     0,     0,
     0,     0,  -657,  -657,  -657,     2,  -657,  -657,  -657,  -657,
  -657,  -657,  -657,  -657,  -657,  -657,     0,  -657,  -657,  -657,
  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
  -657,  -657,     0,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
    12,    13,  -657,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,  -196,  -196,     0,
     0,     0,     0,    76,    77,    78,     0,    79,    80,    81,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
    75,     3,     0,     0,     0,     0,     0,     0,     0,   120,
     0,     0,     0,    81,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  -379,  -379,  -379,     0,     4,     0,     0,
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
    74,    75,     3,     0,     0,     0,     0,     0,     0,     0,
   120,     0,     0,     0,    81,     0,     0,     0,     0,     0,
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
    73,    74,    75,  -379,  -379,  -379,     0,     0,     0,     0,
     0,   120,     0,     0,     0,    81,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    11,    12,    13,     0,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,     0,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,     8,     9,    10,     0,     0,     0,     0,     0,
   120,     0,     0,     0,    81,     0,     0,     0,     0,     0,
     0,    11,    12,    13,     0,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
     0,     0,     0,     0,     0,     0,     0,   120,    11,    12,
    13,    81,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
     0,     0,     0,     0,   120,     0,     0,     0,    81
};

static const short yycheck[] = {     0,
     0,   469,     3,   366,     0,   106,    89,   303,   126,     2,
    11,    12,   626,   501,   417,   630,   418,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,   407,   408,   664,   368,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,     8,     0,   409,   410,     3,     8,
     5,   415,   416,   664,    75,   664,   777,   684,   452,   558,
   419,    82,    82,   322,   479,   789,    82,     0,   451,     5,
     8,   411,   412,   413,   414,   797,   711,   560,   800,   100,
   719,   809,  1114,  1115,   204,   106,    21,   803,   915,   209,
    25,   211,    86,    87,   320,   116,   117,   118,   909,    18,
   113,   122,    34,   223,     8,    24,     5,    18,   719,   122,
   719,   906,   215,   455,   909,    34,   499,   138,    53,    54,
    41,    21,   116,   117,   145,    25,    25,    82,    18,  1038,
  1039,  1134,    28,  1165,    21,    56,   130,     5,    25,    39,
    21,    96,    97,    28,    99,  1148,    27,  1150,    44,    82,
    24,     9,    10,   139,   140,   141,   142,   143,   144,    44,
    34,   788,    49,    50,   791,   664,   993,   122,     9,    10,
    41,   899,    24,   894,   138,    27,   108,   109,    24,   138,
   902,   664,    34,   204,   908,    56,   910,    24,    34,  1000,
   506,  1002,    25,    26,   702,    28,    18,   612,    21,  1108,
   138,    23,  1111,   919,   569,  1000,     0,  1002,  1087,     3,
    24,    44,    26,     7,     8,     9,    10,   611,   182,   584,
   719,   480,    19,   182,    85,    21,   190,   610,   366,    25,
   194,   190,   196,    24,   138,   194,   719,   196,    34,    35,
    36,   664,   664,    22,   182,   587,   182,   183,   184,   632,
   186,   187,   190,  1162,    26,    34,   194,    18,   196,    24,
    21,   225,    34,   182,   183,   286,   225,  1146,  1147,    18,
   291,    26,   292,    28,    18,     5,   592,    21,   182,    23,
   664,   302,   303,  1005,   305,   306,   302,   225,    82,    44,
   194,    24,   196,    26,   929,    25,   719,   719,   319,   933,
   664,   664,  1181,   319,   325,   664,   814,   328,   182,   183,
    24,    21,   106,   451,   182,   183,   184,    27,   186,   187,
   636,   225,     6,     7,   664,   428,   347,   447,   122,    18,
   182,   183,    21,   185,   347,   719,   182,   183,   654,   133,
   656,   980,    32,    33,   138,    21,   204,   368,    21,    25,
    21,   209,    25,   211,    25,   719,   719,    26,     5,    28,
   719,   499,   156,   204,    18,   223,   224,    21,   209,   980,
   211,   980,    24,    49,    50,    44,   875,    18,    25,   719,
    21,   607,   223,   224,    25,   182,   183,   184,   182,   186,
   187,   346,    18,    21,   877,    21,   190,    25,   192,    24,
   194,    26,   196,   182,   183,   184,    24,   186,   187,    34,
   204,   794,    21,   729,    18,   209,    25,   211,   404,   405,
   406,    49,    50,   443,    86,    87,    86,    87,    24,   223,
   224,   225,     0,   454,    24,     3,   457,    27,   454,     7,
    16,   457,    21,   464,    34,   466,    25,   468,   469,   872,
   471,   873,   182,   183,   184,   476,   186,   187,   479,    34,
    24,    24,    26,    26,   428,   486,   479,     5,    16,   428,
    34,    21,   610,    25,    26,    25,    28,   498,   862,   863,
   501,   980,   503,    49,    50,   506,    24,    25,    26,    21,
   428,    21,    44,    25,   632,    25,    34,   980,    16,    49,
    50,   864,   865,    42,    43,   460,   870,   871,   302,    16,
    85,   305,   306,   307,    82,   874,    25,    15,   504,    28,
   182,   183,   182,   183,   428,   319,   866,   867,   868,   869,
    21,   325,    53,    54,    25,   182,   183,   184,   106,   186,
   187,    20,    21,    24,    21,    26,    37,    38,    25,   569,
    21,    22,    29,    34,   122,    25,    26,   980,   980,    18,
    51,    52,    21,    24,   584,   133,    25,    22,   589,  1077,
  1058,   592,    37,    38,    21,   369,   370,   371,    25,    21,
   374,   702,    22,    25,   605,   606,    51,    52,   382,   447,
   384,   612,   182,   183,    21,   185,   980,   939,    25,   612,
    18,    21,    39,    21,   568,    25,   447,   182,   183,   568,
   631,   186,   187,    32,    33,   636,   980,   980,   182,   183,
   184,   980,   186,   187,   188,    49,    50,    21,   649,   650,
   568,    25,    21,   654,   428,   656,    25,     8,     9,    10,
   980,    53,    54,    21,   182,   183,   184,    25,   186,   187,
    67,    68,    69,   447,    37,    38,   794,   678,    21,   453,
   454,    22,    25,   457,   619,   686,    21,   688,    51,    52,
    25,   692,   693,   467,    21,   469,   697,   471,    25,    29,
   701,   702,    37,    38,    40,   479,   707,    21,   482,   702,
   828,    25,   486,   814,   707,   921,    51,    52,    24,    26,
    26,   182,   183,   184,  1020,   186,   187,    34,   729,    20,
    21,    21,   182,   183,   184,    25,   186,   187,   179,   180,
    55,   182,   183,    21,   185,    21,   520,    25,    92,    25,
   192,     8,     9,    10,   302,   529,   530,   305,   306,   307,
  1123,    34,    35,    36,   730,   731,   732,   733,   734,   735,
    18,   319,   119,    21,   121,    92,    18,   325,    24,    21,
    26,   987,    28,   784,    19,   132,   133,   138,   135,    21,
   137,   138,    21,    25,   568,   569,    25,     5,    44,    22,
  1006,    47,    48,   150,    21,  1011,    22,   581,    25,  1172,
   584,   585,   813,   814,    24,   816,    24,    25,    26,    21,
    21,   814,  1028,    25,    25,    21,    34,    18,  1034,    25,
    21,   182,    24,    22,    26,    34,    28,  1043,   612,   190,
    21,    92,    21,   194,    25,   196,    25,    18,    20,    21,
    21,   786,    44,   204,   789,    47,    48,    21,   209,    21,
   211,    25,    20,    25,    21,    19,  1072,  1073,    25,  1075,
    32,    33,   223,   224,   225,   182,   183,   184,    21,   186,
   187,   138,    25,    92,    21,    21,   660,   661,    25,    25,
   664,    24,    21,   859,   860,   861,    25,   671,   672,    27,
   674,    21,   985,    21,   905,    25,   454,    25,    18,   457,
    21,   912,  1118,   687,    25,   689,    34,    35,    36,   467,
    97,   469,    99,   471,   698,   182,  1009,   701,   702,   703,
    18,   479,   374,   190,   482,    21,    22,   194,   486,   196,
   382,    23,   384,   182,   183,   719,    21,   204,   205,    21,
    25,    18,   209,    25,   211,    32,    33,    32,    33,    24,
    22,  1167,    18,    34,    35,    36,   223,   224,   225,    18,
    25,   906,    25,   908,   909,   910,  1077,   943,    72,    73,
    74,   529,   530,   182,   183,   184,    24,   186,   187,    72,
    73,    74,    18,   994,    18,    18,   997,    18,   182,   183,
   184,   997,   186,   187,   182,  1123,    19,   781,    51,    52,
    53,   453,  1013,     9,  1015,    25,    11,  1013,    18,  1020,
  1013,  1139,  1023,  1024,    24,    24,    24,    11,  1028,    29,
    30,    31,    32,    33,    34,    21,    88,    19,    88,    27,
   814,    19,    19,    19,   185,    24,    46,    47,    48,    21,
   824,    25,    22,    21,  1172,    18,    21,  1058,    24,  1060,
  1061,    22,   185,    25,   612,  1000,   185,  1002,    11,    24,
    70,    24,  1072,    24,    23,    27,  1077,   428,   520,    25,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    20,    19,    72,    73,    74,    20,   447,    19,    78,    79,
    80,    81,    82,    83,    84,    23,     8,     9,    10,    21,
     5,   111,    25,    98,    24,   100,    27,   102,    22,   104,
  1121,    88,    25,  1124,   109,    24,  1127,   569,  1124,    88,
   387,    88,    20,    20,   119,    18,   121,    27,    18,   687,
    25,   689,   584,   585,    25,   126,    21,    25,    27,    25,
   698,    25,    24,   701,   702,    55,    29,    39,   139,   140,
   141,   142,   143,   144,    25,   146,   147,    88,    25,    40,
    24,   428,    25,    25,   948,   949,    25,    18,   163,    25,
    18,    21,   182,   183,   184,   185,   177,    18,    21,    18,
   447,    88,    88,  1194,    78,    79,    80,    81,    82,    83,
    84,    21,   177,  1204,   187,    22,   980,    20,    20,    23,
    25,    88,    18,   987,    25,    24,    20,   568,   660,   661,
    88,    88,    88,   997,    88,    20,    73,    27,    88,    18,
   672,    25,    88,    25,    27,     0,   138,  1011,     0,  1013,
    82,   325,  1016,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,  1027,   778,   900,  1093,  1010,  1100,   894,
   926,   703,  1162,  1037,  1038,  1039,   814,  1036,  1011,   843,
  1120,   471,  1046,   592,   689,  1124,   824,   687,   814,   113,
   182,   347,   701,    10,  1058,   224,  1082,   520,   190,     8,
     9,    10,   194,   428,   196,   719,   980,    -1,    -1,    -1,
    -1,    -1,   204,  1077,    -1,    -1,   291,   209,    -1,   211,
   295,   568,    -1,  1087,    -1,    -1,    -1,    -1,    -1,  1093,
    -1,   223,   224,   225,    -1,    -1,    -1,    -1,   313,    -1,
    -1,   316,    -1,    -1,  1108,  1109,  1110,  1111,    -1,   324,
  1114,  1115,   327,    -1,    -1,    -1,  1120,    18,     8,    -1,
  1124,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,     8,     9,
    10,    -1,  1146,  1147,    -1,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   366,    -1,    -1,  1162,  1163,
  1164,  1165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
   948,   949,    72,    73,    74,    -1,    -1,  1181,    78,    79,
    80,    81,    82,    83,    84,    -1,     8,     9,    10,   138,
    -1,    -1,    -1,   404,   405,   406,   407,   408,   409,   410,
   411,   412,   413,   414,   415,   416,   417,   418,   419,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   997,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   182,    -1,  1013,    -1,   452,  1016,    -1,
   451,   190,    -1,    -1,   459,   194,   136,   196,   138,   464,
    -1,   466,    -1,    -1,    -1,   204,    -1,    -1,    -1,   474,
   209,    -1,   211,   478,    -1,    -1,    -1,    -1,   138,    -1,
    -1,    -1,    -1,    -1,   223,   224,   225,    -1,    -1,    -1,
  1058,   182,   183,   184,   185,    -1,    -1,    -1,   499,     8,
     9,    10,   182,   504,    -1,    -1,   428,    -1,    -1,  1077,
   190,    -1,    -1,    -1,   194,    -1,   196,    -1,    -1,    -1,
    -1,    -1,   182,    -1,   204,   447,   138,    -1,    -1,    -1,
   190,    -1,    -1,    -1,   194,    -1,   196,    -1,    -1,    -1,
    -1,  1109,  1110,    -1,   204,   225,    -1,    -1,    -1,   209,
    -1,   211,    -1,    -1,    -1,    -1,  1124,   558,    -1,   560,
    -1,   562,   563,   223,   224,   225,    -1,    -1,    -1,    -1,
   182,    -1,    -1,    -1,    -1,    19,    20,    -1,   190,    -1,
    24,   586,   194,    -1,   196,    29,    30,    31,    32,    33,
    34,    -1,   204,    -1,    -1,  1163,  1164,   209,    -1,   211,
   360,    -1,    46,    47,    48,    -1,   611,    -1,    -1,   610,
    -1,   223,   224,   225,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   630,    70,    -1,   388,   138,
   635,   632,    -1,   393,   394,   395,   396,   397,   398,   399,
   400,   401,   402,   403,    -1,    -1,   568,    -1,   328,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   336,   337,   338,   339,
    -1,   666,    -1,   664,   424,    -1,    -1,   111,    -1,    -1,
    -1,    -1,    -1,   182,    -1,    -1,    -1,   357,    -1,    -1,
    -1,   190,    -1,    -1,    -1,   194,    -1,   196,   368,   428,
    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
   209,    -1,   211,    -1,    -1,    -1,    -1,    -1,   447,   389,
    -1,    -1,    -1,    -1,   223,   224,   225,    -1,   719,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   730,
   731,   732,   733,   734,   735,   736,   737,   742,   182,   183,
   184,   185,    -1,    23,    -1,    -1,    -1,    19,   428,    -1,
    -1,    -1,    24,    -1,    -1,   435,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    -1,   428,    -1,
    -1,    -1,    -1,    -1,    46,    47,    48,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,   447,    -1,    -1,
    -1,    -1,    -1,   794,    -1,    19,    -1,   802,    70,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,
    -1,    -1,    46,    47,    48,    -1,    -1,   828,    -1,   568,
    -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,   111,
    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   859,   860,
   861,   862,   863,   864,   865,   866,   867,   868,   869,   870,
   871,   872,   873,   874,   875,    24,   877,    -1,    27,   559,
    29,    30,    31,    32,    33,    34,   646,   111,   568,    -1,
    -1,    -1,   897,   898,    -1,    -1,    -1,    46,    47,    48,
   905,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   568,    -1,
   182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,   428,
    -1,    70,    -1,    -1,   929,    -1,    -1,    -1,    -1,    -1,
    -1,   691,    -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,
    -1,    -1,   943,    24,    25,    -1,   626,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,   568,    -1,   182,   183,
   184,   185,   111,    -1,    -1,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,   654,    -1,   656,    -1,    -1,   980,
    -1,    -1,   662,    -1,    -1,   665,    -1,    -1,    -1,    70,
   995,    -1,    -1,    24,    -1,    -1,    27,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,    24,
    25,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
   111,    -1,    -1,   182,   183,   184,   185,   797,   718,    70,
   800,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,   729,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1062,    -1,   568,
    -1,    -1,    24,    25,    -1,    70,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   111,    -1,   842,   843,    46,    47,    48,    -1,   848,   849,
   850,   851,   852,   853,   854,   855,   856,   857,   858,    -1,
    -1,   182,   183,   184,   185,    -1,   111,    -1,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,  1123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1139,    -1,
    -1,    -1,   902,    -1,    -1,    -1,    -1,    -1,    -1,   111,
    -1,   182,   183,   184,   185,    -1,    -1,    -1,    -1,    -1,
     0,     1,    -1,    -1,   844,  1170,    -1,    -1,    -1,    -1,
    -1,  1172,    -1,    -1,    -1,    -1,    -1,   182,   183,   184,
   185,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   182,   183,   184,   185,    -1,    -1,    -1,    67,    68,    69,
    -1,    71,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,  1005,    -1,    -1,    -1,    89,
    90,    91,    -1,   933,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,   978,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,     0,     1,    -1,    -1,
    -1,    -1,   182,   183,   184,    -1,   186,   187,   188,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
    24,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
    48,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    70,    67,    68,    69,    -1,    71,    -1,    -1,
    -1,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    89,    90,    91,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   111,   108,   109,   110,    -1,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,    -1,    -1,   182,   183,   184,   185,   182,   183,
   184,     1,   186,   187,   188,    -1,     6,     7,     8,    -1,
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
    -1,    -1,   182,   183,   184,   185,   186,   187,   188,     1,
    -1,    -1,    -1,    -1,     6,     7,     8,    -1,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
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
   182,   183,   184,   185,   186,   187,   188,     1,    -1,    -1,
    -1,    -1,     6,     7,     8,    -1,    -1,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
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
   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,   182,   183,
   184,   185,   186,   187,   188,     1,    -1,    -1,    -1,    -1,
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
    -1,    -1,    -1,    -1,    -1,    -1,   182,   183,   184,   185,
   186,   187,    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,
     7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,   182,
   183,   184,   185,   186,   187,    42,    43,     1,    -1,    46,
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
    -1,    -1,    -1,    -1,    -1,   182,   183,   184,   185,   186,
   187,    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,     7,
     8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    -1,   182,   183,
   184,   185,   186,   187,    42,    43,     1,    -1,    46,    47,
    48,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
    -1,    -1,    70,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
    -1,    46,    47,    48,    -1,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,   182,   183,   184,   185,   186,   187,
    -1,    -1,     1,    46,    47,    48,    -1,     6,     7,     8,
    -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    -1,    -1,    -1,    -1,    24,    -1,    70,    -1,    -1,
    29,    30,    31,    32,    33,    34,    -1,   182,   183,   184,
   185,   186,   187,    42,    43,    -1,    -1,    46,    47,    48,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,     6,
     7,     8,   111,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,   182,
   183,   184,   185,    -1,    -1,    42,    43,    -1,    45,    46,
    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   182,   183,   184,   185,   186,   187,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
    -1,   178,    -1,    -1,   181,   182,   183,   184,   185,   186,
   187,   188,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
    -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,
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
   174,   175,   176,    -1,   178,    -1,    -1,   181,   182,   183,
   184,   185,   186,   187,   188,     6,     7,     8,    -1,    10,
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
   171,   172,   173,   174,   175,   176,    -1,   178,    -1,    -1,
   181,   182,   183,   184,   185,   186,   187,   188,     6,     7,
     8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
    48,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
    -1,    -1,    70,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    46,    47,    48,    -1,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
    -1,    24,    -1,   111,    -1,    70,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    93,    94,
    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,    -1,    -1,    -1,   111,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
   178,    -1,    -1,   181,   182,   183,   184,   185,   186,   187,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   176,    -1,   178,    -1,    -1,   181,   182,   183,   184,
   185,   186,   187,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,
   183,   184,   185,    46,    47,    48,     6,     7,     8,    -1,
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
    -1,    -1,    -1,   176,    -1,   178,    -1,    -1,   181,   182,
   183,   184,   185,   186,   187,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,   178,    -1,
    -1,   181,   182,   183,   184,   185,   186,   187,     6,     7,
     8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   182,   183,   184,   185,    46,    47,
    48,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
    -1,    -1,    70,    -1,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    46,    47,    48,    -1,    93,    94,    95,    96,    97,
    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
    -1,    24,    -1,   111,    -1,    70,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    93,    94,
    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   107,    -1,    -1,    -1,   111,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
   178,    -1,    -1,   181,   182,   183,   184,   185,   186,   187,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   176,    -1,   178,    -1,    -1,   181,   182,   183,   184,
   185,   186,   187,     6,     7,     8,    -1,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,
   183,   184,   185,    46,    47,    48,     6,     7,     8,    -1,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    -1,    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,    18,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
    -1,    -1,    -1,   176,    -1,   178,    -1,    -1,   181,   182,
   183,   184,   185,   186,   187,    -1,    -1,    -1,    67,    68,
    69,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,   178,    -1,
    -1,   181,   182,   183,   184,   185,   186,   187,    -1,   108,
   109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,    18,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,   188,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,   110,
    -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,    19,    -1,    -1,    -1,    -1,
    24,    -1,    -1,   184,    -1,    -1,    -1,   188,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
   174,   175,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   184,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   108,   109,
   110,   188,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    22,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,   188,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
    -1,    -1,   108,   109,   110,    34,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
   109,   110,   188,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,    42,    43,    -1,
    -1,    -1,    -1,   182,   183,   184,    -1,   186,   187,   188,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
   175,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,
    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,
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
   174,   175,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   184,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,
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
   173,   174,   175,    67,    68,    69,    -1,    -1,    -1,    -1,
    -1,   184,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
   184,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,
    -1,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   108,   109,
   110,   188,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,   188
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
#line 268 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 6:
#line 269 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 7:
#line 270 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 8:
#line 271 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 9:
#line 272 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 10:
#line 273 "cgrammar.y"
{ uentry_checkDecl (); exprNode_free (yyvsp[0].expr); ;
    break;}
case 11:
#line 274 "cgrammar.y"
{ uentry_clearDecl (); ;
    break;}
case 12:
#line 278 "cgrammar.y"
{ checkConstant (yyvsp[-6].qtyp, yyvsp[-4].ntyp); ;
    break;}
case 13:
#line 280 "cgrammar.y"
{ checkValueConstant (yyvsp[-9].qtyp, yyvsp[-7].ntyp, yyvsp[-3].expr) ; ;
    break;}
case 14:
#line 283 "cgrammar.y"
{ context_enterFunctionDecl (); ;
    break;}
case 15:
#line 284 "cgrammar.y"
{ declareStaticFunction (yyvsp[-2].ntyp); context_quietExitFunction (); 
     context_exitFunctionDecl (); ;
    break;}
case 16:
#line 289 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 17:
#line 295 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 19:
#line 300 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 20:
#line 303 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 21:
#line 305 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 22:
#line 307 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 23:
#line 309 "cgrammar.y"
{ 
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ctype_makeFixedArray (idDecl_getCtype (yyvsp[-5].ntyp), exprNode_getLongValue (yyvsp[-2].expr)));
   ;
    break;}
case 24:
#line 313 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 25:
#line 316 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 26:
#line 324 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 27:
#line 327 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-7].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-7].ntyp), yyvsp[-4].entrylist));
     context_popLoc ();

     //     printf("Done nameDeclBase\n");
   ;
    break;}
case 28:
#line 335 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 29:
#line 337 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 30:
#line 339 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 31:
#line 341 "cgrammar.y"
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
#line 357 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 33:
#line 360 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 34:
#line 368 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 35:
#line 371 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 36:
#line 378 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); ;
    break;}
case 37:
#line 379 "cgrammar.y"
{ clearCurrentParams (); ;
    break;}
case 38:
#line 380 "cgrammar.y"
{ declareCIter (yyvsp[-8].cname, yyvsp[-6].entrylist); ;
    break;}
case 39:
#line 383 "cgrammar.y"
{ exprNode_checkMacroBody (yyvsp[-1].expr); ;
    break;}
case 40:
#line 384 "cgrammar.y"
{ exprNode_checkIterBody (yyvsp[-1].expr); ;
    break;}
case 41:
#line 385 "cgrammar.y"
{ exprNode_checkIterEnd (yyvsp[-1].expr); ;
    break;}
case 42:
#line 386 "cgrammar.y"
{ exprChecks_checkEmptyMacroBody (); ;
    break;}
case 43:
#line 389 "cgrammar.y"
{ declareFunction (yyvsp[0].ntyp); ;
    break;}
case 44:
#line 392 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 45:
#line 393 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 46:
#line 399 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 47:
#line 400 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 49:
#line 407 "cgrammar.y"
{
  DPRINTF ( ("doing optGlobBufConstraintsAux\n") );
context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 

;
    break;}
case 50:
#line 413 "cgrammar.y"
{
  setFunctionConstraints (yyvsp[-1].sr);
  exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
  printf ("done optGlobBufConstraintsAux\n");;
    break;}
case 52:
#line 422 "cgrammar.y"
{ yyval.sr = constraintList_add (yyvsp[0].sr, yyvsp[-1].sr); ;
    break;}
case 53:
#line 423 "cgrammar.y"
{constraintList c; c = constraintList_new(); c = constraintList_add (c, yyvsp[0].sr); yyval.sr = c;
    break;}
case 54:
#line 426 "cgrammar.y"
{
 yyval.sr = makeConstraintParse3 (yyvsp[-3].sr, yyvsp[-2].tok, yyvsp[-1].sr);
 printf("Done BufConstraint1\n"); ;
    break;}
case 61:
#line 441 "cgrammar.y"
{yyval.sr = constraintExpr_parseMakeUnaryOp (yyvsp[-3].tok, yyvsp[-1].sr);  DPRINTF( ("Got BufConstraintExpr UNary Op ") ); ;
    break;}
case 62:
#line 442 "cgrammar.y"
{
   DPRINTF( ("Got BufConstraintExpr BINary Op ") );
   yyval.sr = constraintExpr_parseMakeBinaryOp (yyvsp[-3].sr, yyvsp[-2].tok, yyvsp[-1].sr); ;
    break;}
case 63:
#line 447 "cgrammar.y"
{ yyval.sr = constraintExpr_makeTermsRef (
					     uentry_getSref (yyvsp[0].entry));
                                   checkModifiesId (yyvsp[0].entry); ;
    break;}
case 64:
#line 450 "cgrammar.y"
{ yyval.sr = constraintExpr_makeTermsRef(fixModifiesId (yyvsp[0].cname) ); ;
    break;}
case 65:
#line 451 "cgrammar.y"
{  char *t; int c;
  t =  cstring_toCharsSafe (exprNode_unparse(yyvsp[0].expr));
  c = atoi( t );
  yyval.sr = constraintExpr_makeIntLiteral (c);
;
    break;}
case 69:
#line 472 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 70:
#line 473 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 71:
#line 483 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 72:
#line 484 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 79:
#line 499 "cgrammar.y"
{ ; ;
    break;}
case 80:
#line 500 "cgrammar.y"
{ ; ;
    break;}
case 81:
#line 503 "cgrammar.y"
{ globListAdd (yyvsp[0].sr, yyvsp[-1].tquallist); ;
    break;}
case 82:
#line 506 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); ;
    break;}
case 83:
#line 507 "cgrammar.y"
{ yyval.sr = globListUnrecognized (yyvsp[0].cname); ;
    break;}
case 84:
#line 510 "cgrammar.y"
{ yyval.typequal = qual_createUndef (); ;
    break;}
case 85:
#line 511 "cgrammar.y"
{ yyval.typequal = qual_createKilled (); ;
    break;}
case 86:
#line 512 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 87:
#line 513 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 88:
#line 514 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 89:
#line 517 "cgrammar.y"
{ yyval.tquallist = qualList_undefined; ;
    break;}
case 90:
#line 518 "cgrammar.y"
{ yyval.tquallist = qualList_add (yyvsp[0].tquallist, yyvsp[-1].typequal); ;
    break;}
case 91:
#line 521 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 92:
#line 523 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 93:
#line 524 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 94:
#line 526 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 95:
#line 528 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 98:
#line 535 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 99:
#line 537 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 100:
#line 538 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 101:
#line 540 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 102:
#line 542 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 107:
#line 554 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 108:
#line 559 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 109:
#line 567 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 110:
#line 572 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 120:
#line 596 "cgrammar.y"
{ yyval.sck = SP_ISONLY; ;
    break;}
case 121:
#line 597 "cgrammar.y"
{ yyval.sck = SP_ISOBSERVER; ;
    break;}
case 122:
#line 598 "cgrammar.y"
{ yyval.sck = SP_ISEXPOSED; ;
    break;}
case 123:
#line 599 "cgrammar.y"
{ yyval.sck = SP_ISDEPENDENT; ;
    break;}
case 124:
#line 600 "cgrammar.y"
{ yyval.sck = SP_ISOWNED; ;
    break;}
case 125:
#line 601 "cgrammar.y"
{ yyval.sck = SP_ISSHARED; ;
    break;}
case 126:
#line 602 "cgrammar.y"
{ yyval.sck = SP_ISNULL; ;
    break;}
case 127:
#line 603 "cgrammar.y"
{ yyval.sck = SP_ISNOTNULL; ;
    break;}
case 128:
#line 607 "cgrammar.y"
{
     context_setProtectVars (); 
     enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 129:
#line 613 "cgrammar.y"
{ 
     setFunctionSpecialClause (yyvsp[-6].tok, yyvsp[-3].srset, yyvsp[-1].tok); 
     exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 130:
#line 620 "cgrammar.y"
{
      context_setProtectVars (); 
      enterParamsTemp (); 
      sRef_setGlobalScopeSafe (); 
    ;
    break;}
case 131:
#line 626 "cgrammar.y"
{ 
      setFunctionStateSpecialClause (yyvsp[-7].tok, yyvsp[-5].sck, yyvsp[-3].srset, yyvsp[-1].tok); 
      exitParamsTemp ();
      sRef_clearGlobalScopeSafe (); 
      context_releaseVars ();
    ;
    break;}
case 132:
#line 635 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 133:
#line 641 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 134:
#line 644 "cgrammar.y"
{ checkDoneParams (); context_enterInnerContext (); ;
    break;}
case 135:
#line 646 "cgrammar.y"
{  
     exprNode_checkFunctionBody (yyvsp[0].expr); yyval.expr = yyvsp[0].expr; 
     context_exitInner (yyvsp[0].expr); 
   ;
    break;}
case 136:
#line 651 "cgrammar.y"
{ doneParams (); context_enterInnerContext (); ;
    break;}
case 137:
#line 653 "cgrammar.y"
{
     context_exitInner (yyvsp[0].expr);
     exprNode_checkFunctionBody (yyvsp[0].expr); 
     yyval.expr = yyvsp[0].expr; /* old style */ 
   ;
    break;}
case 138:
#line 661 "cgrammar.y"
{ 
     context_setFunctionDefined (exprNode_loc (yyvsp[0].expr)); 
     exprNode_checkFunction (context_getHeader (), yyvsp[0].expr);
     /* DRL 8 8 2000 */
     
     context_exitFunction ();
   ;
    break;}
case 139:
#line 670 "cgrammar.y"
{ yyval.srset = yyvsp[-2].srset; ;
    break;}
case 140:
#line 671 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 141:
#line 674 "cgrammar.y"
{ yyval.srset = yyvsp[-1].srset; ;
    break;}
case 142:
#line 675 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 143:
#line 678 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); checkModifiesId (yyvsp[0].entry); ;
    break;}
case 144:
#line 679 "cgrammar.y"
{ yyval.sr = fixModifiesId (yyvsp[0].cname); ;
    break;}
case 145:
#line 680 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-2].sr, sRef_undefined); ;
    break;}
case 146:
#line 681 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-3].sr, yyvsp[-1].sr); ;
    break;}
case 147:
#line 682 "cgrammar.y"
{ yyval.sr = modListPointer (yyvsp[0].sr); ;
    break;}
case 148:
#line 683 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 149:
#line 684 "cgrammar.y"
{ yyval.sr = modListFieldAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 150:
#line 685 "cgrammar.y"
{ yyval.sr = modListArrowAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 151:
#line 689 "cgrammar.y"
{ yyval.sr = yyvsp[0].sr; ;
    break;}
case 152:
#line 690 "cgrammar.y"
{ yyval.sr = sRef_makeUnknown (); /* sRef_makeConstant ($1); ? */ ;
    break;}
case 153:
#line 694 "cgrammar.y"
{ yyval.srset = sRefSet_single (yyvsp[0].sr); ;
    break;}
case 154:
#line 695 "cgrammar.y"
{ yyval.srset = sRefSet_insert (yyvsp[-2].srset, yyvsp[0].sr); ;
    break;}
case 155:
#line 699 "cgrammar.y"
{ yyval.sr = checkSpecClausesId (yyvsp[0].entry); ;
    break;}
case 156:
#line 701 "cgrammar.y"
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 157:
#line 702 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 158:
#line 703 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-3].sr); ;
    break;}
case 159:
#line 704 "cgrammar.y"
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 160:
#line 705 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 161:
#line 706 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 162:
#line 708 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 163:
#line 713 "cgrammar.y"
{ if (sRef_isValid (yyvsp[0].sr)) { yyval.srset = sRefSet_single (yyvsp[0].sr); } 
      else { yyval.srset = sRefSet_undefined; } 
    ;
    break;}
case 164:
#line 717 "cgrammar.y"
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
case 165:
#line 728 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (yyvsp[0].entry); ;
    break;}
case 166:
#line 729 "cgrammar.y"
{ yyval.expr = exprNode_fromUIO (yyvsp[0].cname); ;
    break;}
case 167:
#line 730 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 168:
#line 731 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 169:
#line 732 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (coerceId (yyvsp[0].cname)); ;
    break;}
case 170:
#line 733 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 172:
#line 737 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 173:
#line 738 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 174:
#line 739 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 175:
#line 740 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 176:
#line 741 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 177:
#line 742 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 178:
#line 743 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 179:
#line 744 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 180:
#line 747 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 181:
#line 748 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 183:
#line 752 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 184:
#line 753 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 185:
#line 754 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 186:
#line 755 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 187:
#line 756 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 188:
#line 757 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 189:
#line 758 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 190:
#line 759 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 191:
#line 760 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 192:
#line 761 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 193:
#line 764 "cgrammar.y"
{ yyval.cstringlist = cstringList_add (yyvsp[-2].cstringlist, yyvsp[0].cname); ;
    break;}
case 194:
#line 765 "cgrammar.y"
{ yyval.cstringlist = cstringList_single (yyvsp[0].cname); ;
    break;}
case 195:
#line 769 "cgrammar.y"
{ yyval.expr = exprNode_offsetof (yyvsp[-5].qtyp, yyvsp[-2].cstringlist); ;
    break;}
case 196:
#line 772 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 197:
#line 773 "cgrammar.y"
{ context_sizeofReleaseVars (); yyval.expr = yyvsp[0].expr; ;
    break;}
case 198:
#line 776 "cgrammar.y"
{ yyval.expr = exprNode_sizeofType (yyvsp[-1].qtyp); ;
    break;}
case 199:
#line 777 "cgrammar.y"
{ yyval.expr = exprNode_sizeofExpr (yyvsp[0].expr); ;
    break;}
case 200:
#line 778 "cgrammar.y"
{ yyval.expr = exprNode_alignofType (yyvsp[-1].qtyp); ;
    break;}
case 201:
#line 779 "cgrammar.y"
{ yyval.expr = exprNode_alignofExpr (yyvsp[0].expr); ;
    break;}
case 203:
#line 784 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 205:
#line 788 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 206:
#line 789 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 207:
#line 790 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 209:
#line 794 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 210:
#line 795 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 212:
#line 799 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 213:
#line 800 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 215:
#line 804 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 216:
#line 805 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 217:
#line 806 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 218:
#line 807 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 220:
#line 811 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 221:
#line 812 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 223:
#line 816 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 225:
#line 820 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 227:
#line 825 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 229:
#line 830 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); 
     context_enterAndClause (yyvsp[-1].expr); 
   ;
    break;}
case 230:
#line 834 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitAndClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 232:
#line 842 "cgrammar.y"
{ 
     exprNode_produceGuards (yyvsp[-1].expr);
     context_enterOrClause (yyvsp[-1].expr); 
   ;
    break;}
case 233:
#line 847 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitOrClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 235:
#line 854 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 236:
#line 855 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 237:
#line 856 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); context_exitClause (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 239:
#line 860 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 240:
#line 861 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 241:
#line 862 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 242:
#line 863 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 243:
#line 864 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 244:
#line 865 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 245:
#line 866 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 246:
#line 867 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 247:
#line 868 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 248:
#line 869 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 249:
#line 870 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 251:
#line 874 "cgrammar.y"
{ yyval.expr = exprNode_comma (yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 252:
#line 877 "cgrammar.y"
{ yyval.expr = exprNode_undefined; ;
    break;}
case 255:
#line 886 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 256:
#line 887 "cgrammar.y"
{ doVaDcl (); yyval.expr = exprNode_makeError (); ;
    break;}
case 257:
#line 888 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 258:
#line 891 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 259:
#line 905 "cgrammar.y"
{
               setProcessingVars (yyvsp[-3].qtyp); 
     processNamedDecl (yyvsp[-1].ntyp); ;
    break;}
case 260:
#line 908 "cgrammar.y"
{ unsetProcessingVars (); yyval.expr = yyvsp[-2].expr; ;
    break;}
case 261:
#line 910 "cgrammar.y"
{ setProcessingVars (yyvsp[-4].qtyp); processNamedDecl (yyvsp[-2].ntyp); 
        ;
    break;}
case 262:
#line 913 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-2].expr, exprNode_makeInitialization (yyvsp[-8].ntyp, yyvsp[-3].expr)); 
     unsetProcessingVars ();
   ;
    break;}
case 263:
#line 917 "cgrammar.y"
{ processNamedDecl (yyvsp[-1].ntyp); yyval.expr = exprNode_makeError (); ;
    break;}
case 264:
#line 918 "cgrammar.y"
{ processNamedDecl (yyvsp[-2].ntyp); ;
    break;}
case 265:
#line 919 "cgrammar.y"
{ yyval.expr = exprNode_makeInitialization (yyvsp[-5].ntyp, yyvsp[0].expr); ;
    break;}
case 266:
#line 923 "cgrammar.y"
{ setProcessingTypedef (yyvsp[0].qtyp); ;
    break;}
case 267:
#line 924 "cgrammar.y"
{ unsetProcessingTypedef (); ;
    break;}
case 268:
#line 925 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 269:
#line 926 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 270:
#line 929 "cgrammar.y"
{ g_expectingTypeName = TRUE; ;
    break;}
case 271:
#line 932 "cgrammar.y"
{ g_expectingTypeName = TRUE; context_pushLoc (); ;
    break;}
case 272:
#line 935 "cgrammar.y"
{ ; ;
    break;}
case 273:
#line 938 "cgrammar.y"
{ ; ;
    break;}
case 274:
#line 939 "cgrammar.y"
{ ; ;
    break;}
case 275:
#line 942 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 276:
#line 943 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 277:
#line 946 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 278:
#line 947 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-2].tok, yyvsp[-1].alist); ;
    break;}
case 279:
#line 948 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-3].tok, yyvsp[-2].alist); ;
    break;}
case 280:
#line 953 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 281:
#line 955 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 282:
#line 963 "cgrammar.y"
{ setStorageClass (SCEXTERN); yyval.typequal = qual_createExtern (); ;
    break;}
case 283:
#line 964 "cgrammar.y"
{ yyval.typequal = qual_createInline (); ;
    break;}
case 284:
#line 965 "cgrammar.y"
{ setStorageClass (SCSTATIC); yyval.typequal = qual_createStatic (); ;
    break;}
case 285:
#line 966 "cgrammar.y"
{ yyval.typequal = qual_createAuto (); ;
    break;}
case 286:
#line 967 "cgrammar.y"
{ yyval.typequal = qual_createRegister (); ;
    break;}
case 287:
#line 970 "cgrammar.y"
{ yyval.typequal = qual_createConst (); ;
    break;}
case 288:
#line 971 "cgrammar.y"
{ yyval.typequal = qual_createVolatile (); ;
    break;}
case 289:
#line 972 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 290:
#line 973 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 291:
#line 974 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 292:
#line 975 "cgrammar.y"
{ yyval.typequal = qual_createSpecial (); ;
    break;}
case 293:
#line 976 "cgrammar.y"
{ yyval.typequal = qual_createOwned (); ;
    break;}
case 294:
#line 977 "cgrammar.y"
{ yyval.typequal = qual_createDependent (); ;
    break;}
case 295:
#line 978 "cgrammar.y"
{ yyval.typequal = qual_createYield (); ;
    break;}
case 296:
#line 979 "cgrammar.y"
{ yyval.typequal = qual_createTemp (); ;
    break;}
case 297:
#line 980 "cgrammar.y"
{ yyval.typequal = qual_createOnly (); ;
    break;}
case 298:
#line 981 "cgrammar.y"
{ yyval.typequal = qual_createKeep (); ;
    break;}
case 299:
#line 982 "cgrammar.y"
{ yyval.typequal = qual_createKept (); ;
    break;}
case 300:
#line 983 "cgrammar.y"
{ yyval.typequal = qual_createShared (); ;
    break;}
case 301:
#line 984 "cgrammar.y"
{ yyval.typequal = qual_createUnique (); ;
    break;}
case 302:
#line 985 "cgrammar.y"
{ yyval.typequal = qual_createExits (); ;
    break;}
case 303:
#line 986 "cgrammar.y"
{ yyval.typequal = qual_createMayExit (); ;
    break;}
case 304:
#line 987 "cgrammar.y"
{ yyval.typequal = qual_createTrueExit (); ;
    break;}
case 305:
#line 988 "cgrammar.y"
{ yyval.typequal = qual_createFalseExit (); ;
    break;}
case 306:
#line 989 "cgrammar.y"
{ yyval.typequal = qual_createNeverExit (); ;
    break;}
case 307:
#line 990 "cgrammar.y"
{ yyval.typequal = qual_createNull (); ;
    break;}
case 308:
#line 991 "cgrammar.y"
{ yyval.typequal = qual_createRelNull (); ;
    break;}
case 309:
#line 992 "cgrammar.y"
{ yyval.typequal = qual_createReturned (); ;
    break;}
case 310:
#line 993 "cgrammar.y"
{ yyval.typequal = qual_createExposed (); ;
    break;}
case 311:
#line 994 "cgrammar.y"
{ yyval.typequal = qual_createObserver (); ;
    break;}
case 312:
#line 995 "cgrammar.y"
{ yyval.typequal = qual_createChecked (); ;
    break;}
case 313:
#line 996 "cgrammar.y"
{ yyval.typequal = qual_createCheckMod (); ;
    break;}
case 314:
#line 997 "cgrammar.y"
{ yyval.typequal = qual_createUnchecked (); ;
    break;}
case 315:
#line 998 "cgrammar.y"
{ yyval.typequal = qual_createCheckedStrict (); ;
    break;}
case 316:
#line 999 "cgrammar.y"
{ yyval.typequal = qual_createTrueNull (); ;
    break;}
case 317:
#line 1000 "cgrammar.y"
{ yyval.typequal = qual_createFalseNull (); ;
    break;}
case 318:
#line 1001 "cgrammar.y"
{ yyval.typequal = qual_createUnused (); ;
    break;}
case 319:
#line 1002 "cgrammar.y"
{ yyval.typequal = qual_createExternal (); ;
    break;}
case 320:
#line 1003 "cgrammar.y"
{ yyval.typequal = qual_createSef (); ;
    break;}
case 321:
#line 1004 "cgrammar.y"
{ yyval.typequal = qual_createAbstract (); ;
    break;}
case 322:
#line 1005 "cgrammar.y"
{ yyval.typequal = qual_createConcrete (); ;
    break;}
case 323:
#line 1006 "cgrammar.y"
{ yyval.typequal = qual_createMutable (); ;
    break;}
case 324:
#line 1007 "cgrammar.y"
{ yyval.typequal = qual_createImmutable (); ;
    break;}
case 325:
#line 1008 "cgrammar.y"
{ yyval.typequal = qual_createNotNull (); ;
    break;}
case 326:
#line 1009 "cgrammar.y"
{ yyval.typequal = qual_createRefCounted (); ;
    break;}
case 327:
#line 1010 "cgrammar.y"
{ yyval.typequal = qual_createRefs (); ;
    break;}
case 328:
#line 1011 "cgrammar.y"
{ yyval.typequal = qual_createKillRef (); ;
    break;}
case 329:
#line 1012 "cgrammar.y"
{ yyval.typequal = qual_createRelDef (); ;
    break;}
case 330:
#line 1013 "cgrammar.y"
{ yyval.typequal = qual_createNewRef (); ;
    break;}
case 331:
#line 1014 "cgrammar.y"
{ yyval.typequal = qual_createTempRef (); ;
    break;}
case 332:
#line 1015 "cgrammar.y"
{ yyval.typequal = qual_createNullTerminated (); ;
    break;}
case 333:
#line 1021 "cgrammar.y"
{ yyval.typequal = qual_createShort (); ;
    break;}
case 334:
#line 1022 "cgrammar.y"
{ yyval.typequal = qual_createLong (); ;
    break;}
case 335:
#line 1023 "cgrammar.y"
{ yyval.typequal = qual_createSigned (); ;
    break;}
case 336:
#line 1024 "cgrammar.y"
{ yyval.typequal = qual_createUnsigned (); ;
    break;}
case 343:
#line 1033 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 344:
#line 1034 "cgrammar.y"
{ yyval.ctyp = ctype_anyintegral; ;
    break;}
case 345:
#line 1035 "cgrammar.y"
{ yyval.ctyp = ctype_unsignedintegral; ;
    break;}
case 346:
#line 1036 "cgrammar.y"
{ yyval.ctyp = ctype_signedintegral; ;
    break;}
case 350:
#line 1040 "cgrammar.y"
{ yyval.ctyp = ctype_fromQual (yyvsp[-1].typequal); ;
    break;}
case 351:
#line 1044 "cgrammar.y"
{ yyval.qtyp = qtype_resolve (yyvsp[-1].qtyp); ;
    break;}
case 352:
#line 1047 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 353:
#line 1049 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-3].qtyp, yyvsp[-1].qtyp); ;
    break;}
case 355:
#line 1054 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-2].qtyp, yyvsp[0].qtyp); ;
    break;}
case 356:
#line 1057 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 357:
#line 1058 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 358:
#line 1059 "cgrammar.y"
{ yyval.qtyp = qtype_combine (yyvsp[0].qtyp, yyvsp[-1].ctyp); ;
    break;}
case 359:
#line 1062 "cgrammar.y"
{ yyval.qtyp = qtype_unknown (); ;
    break;}
case 360:
#line 1063 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 361:
#line 1066 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 362:
#line 1068 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 363:
#line 1070 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 364:
#line 1071 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 365:
#line 1073 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 366:
#line 1075 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 367:
#line 1077 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 368:
#line 1079 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 369:
#line 1080 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 370:
#line 1082 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 371:
#line 1084 "cgrammar.y"
{ yyval.ctyp = declareUnnamedStruct (yyvsp[-3].flist); ;
    break;}
case 372:
#line 1085 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 373:
#line 1087 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 374:
#line 1089 "cgrammar.y"
{ yyval.ctyp = declareUnnamedUnion (yyvsp[-3].flist); ;
    break;}
case 375:
#line 1091 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedStruct (uentryList_new ()); ;
    break;}
case 376:
#line 1093 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedUnion (uentryList_new ()); ;
    break;}
case 377:
#line 1094 "cgrammar.y"
{ yyval.ctyp = handleStruct (yyvsp[-1].cname); ;
    break;}
case 378:
#line 1095 "cgrammar.y"
{ yyval.ctyp = handleUnion (yyvsp[-1].cname); ;
    break;}
case 379:
#line 1098 "cgrammar.y"
{ g_expectingTypeName = FALSE; ;
    break;}
case 381:
#line 1102 "cgrammar.y"
{ yyval.flist = uentryList_undefined; /* bogus! */ ;
    break;}
case 382:
#line 1103 "cgrammar.y"
{ yyval.flist = uentryList_mergeFields (yyvsp[-1].flist, yyvsp[0].flist); ;
    break;}
case 383:
#line 1107 "cgrammar.y"
{ yyval.flist = fixUentryList (yyvsp[-2].ntyplist, yyvsp[-4].qtyp); ;
    break;}
case 384:
#line 1109 "cgrammar.y"
{ yyval.flist = fixUnnamedDecl (yyvsp[-2].qtyp); ;
    break;}
case 385:
#line 1113 "cgrammar.y"
{ yyval.ntyplist = idDeclList_singleton (yyvsp[-1].ntyp); ;
    break;}
case 386:
#line 1115 "cgrammar.y"
{ yyval.ntyplist = idDeclList_add (yyvsp[-3].ntyplist, yyvsp[-1].ntyp); ;
    break;}
case 387:
#line 1118 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; ;
    break;}
case 388:
#line 1119 "cgrammar.y"
{ yyval.ntyp = idDecl_undefined; ;
    break;}
case 389:
#line 1120 "cgrammar.y"
{ yyval.ntyp = yyvsp[-3].ntyp; ;
    break;}
case 390:
#line 1125 "cgrammar.y"
{ yyval.ctyp = declareUnnamedEnum (yyvsp[-2].enumnamelist); ;
    break;}
case 391:
#line 1126 "cgrammar.y"
{ context_pushLoc (); ;
    break;}
case 392:
#line 1127 "cgrammar.y"
{ context_popLoc (); yyval.ctyp = declareEnum (yyvsp[-5].cname, yyvsp[-2].enumnamelist); ;
    break;}
case 393:
#line 1128 "cgrammar.y"
{ yyval.ctyp = handleEnum (yyvsp[-1].cname); ;
    break;}
case 394:
#line 1132 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_single (yyvsp[0].cname); ;
    break;}
case 395:
#line 1134 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_push (yyvsp[-2].enumnamelist, yyvsp[0].cname); ;
    break;}
case 397:
#line 1139 "cgrammar.y"
{ uentry ue = uentry_makeEnumConstant (yyvsp[0].cname, ctype_unknown);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[0].cname;
   ;
    break;}
case 398:
#line 1144 "cgrammar.y"
{ uentry ue = uentry_makeEnumInitializedConstant (yyvsp[-3].cname, ctype_unknown, yyvsp[0].expr);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[-3].cname; 
   ;
    break;}
case 400:
#line 1151 "cgrammar.y"
{ yyval.ntyp = idDecl_create (cstring_undefined, qtype_create (yyvsp[0].ctyp)); ;
    break;}
case 401:
#line 1153 "cgrammar.y"
{ 
     qtype qt = qtype_unknown ();

     qtype_adjustPointers (yyvsp[-1].count, qt);
     yyval.ntyp = idDecl_create (cstring_copy (LastIdentifier ()), qt);
   ;
    break;}
case 402:
#line 1160 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 404:
#line 1165 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 405:
#line 1168 "cgrammar.y"
{ yyval.entrylist = handleParamTypeList (yyvsp[0].entrylist); ;
    break;}
case 406:
#line 1169 "cgrammar.y"
{ yyval.entrylist = handleParamIdList (yyvsp[0].entrylist); ;
    break;}
case 407:
#line 1172 "cgrammar.y"
{ /* ignored for now */; ;
    break;}
case 408:
#line 1173 "cgrammar.y"
{ ; ;
    break;}
case 409:
#line 1176 "cgrammar.y"
{ ; ;
    break;}
case 410:
#line 1177 "cgrammar.y"
{ ; ;
    break;}
case 411:
#line 1180 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 412:
#line 1181 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 413:
#line 1182 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 414:
#line 1183 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 416:
#line 1187 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 417:
#line 1190 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 418:
#line 1191 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 419:
#line 1194 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeElipsisMarker ()); ;
    break;}
case 421:
#line 1196 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 422:
#line 1199 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 423:
#line 1199 "cgrammar.y"
{ yyval.entrylist = uentryList_single (yyvsp[0].oentry); ;
    break;}
case 424:
#line 1200 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 425:
#line 1201 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-3].entrylist, yyvsp[0].oentry); ;
    break;}
case 426:
#line 1205 "cgrammar.y"
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
case 427:
#line 1217 "cgrammar.y"
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
case 429:
#line 1233 "cgrammar.y"
{ yyval.qtyp = qtype_newBase (yyvsp[-1].qtyp, yyvsp[0].ctyp); ;
    break;}
case 430:
#line 1236 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[0].count, ctype_unknown); ;
    break;}
case 432:
#line 1238 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[-1].count, yyvsp[0].ctyp); ;
    break;}
case 433:
#line 1241 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 435:
#line 1246 "cgrammar.y"
{ yyval.ctyp = ctype_expectFunction (yyvsp[-1].ctyp); ;
    break;}
case 436:
#line 1247 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 437:
#line 1249 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (ctype_unknown, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 438:
#line 1250 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (yyvsp[-2].ctyp); ;
    break;}
case 439:
#line 1252 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (yyvsp[-3].ctyp, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 440:
#line 1254 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (ctype_unknown, uentryList_makeMissingParams ()); ;
    break;}
case 441:
#line 1256 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (ctype_unknown, yyvsp[-1].entrylist); ;
    break;}
case 442:
#line 1258 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (yyvsp[-3].ctyp, uentryList_makeMissingParams ()); ;
    break;}
case 443:
#line 1260 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (yyvsp[-4].ctyp, yyvsp[-1].entrylist); ;
    break;}
case 453:
#line 1275 "cgrammar.y"
{yyval.expr = yyvsp[0].expr; printf ("Doing stmt lclintassertion\n"); ;
    break;}
case 454:
#line 1279 "cgrammar.y"
{ printf(" QSETBUFFERSIZE id CCONSTANT HEllo World\n");  uentry_setBufferSize(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 455:
#line 1281 "cgrammar.y"
{ printf(" QSETSTRINGLENGTH id CCONSTANT HEllo World\n");  uentry_setStringLength(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 456:
#line 1283 "cgrammar.y"
{printf(" QTESTINRANGE\n");  uentry_testInRange(yyvsp[-2].entry, yyvsp[-1].expr); yyval.expr = exprNode_createTok (yyvsp[0].tok);
  ;
    break;}
case 457:
#line 1289 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[0].cname); ;
    break;}
case 458:
#line 1294 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 461:
#line 1302 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 462:
#line 1306 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 463:
#line 1308 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr); ;
    break;}
case 464:
#line 1310 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 465:
#line 1312 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 466:
#line 1316 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 467:
#line 1316 "cgrammar.y"
{ context_sizeofReleaseVars (); ;
    break;}
case 468:
#line 1318 "cgrammar.y"
{ yyval.expr = exprNode_forPred (yyvsp[-7].expr, yyvsp[-5].expr, yyvsp[-2].expr); 
     context_enterForClause (yyvsp[-5].expr); ;
    break;}
case 469:
#line 1323 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-2].entry); ;
    break;}
case 470:
#line 1325 "cgrammar.y"
{ yyval.expr = exprNode_iterStart (yyvsp[-5].entry, yyvsp[-1].alist); ;
    break;}
case 471:
#line 1326 "cgrammar.y"
{ yyval.expr = exprNode_createId (yyvsp[0].entry); ;
    break;}
case 475:
#line 1332 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 483:
#line 1340 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 484:
#line 1341 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 485:
#line 1345 "cgrammar.y"
{ /* don't: context_exitTrueClause ($1, $2); */
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 486:
#line 1350 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 487:
#line 1353 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 498:
#line 1368 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 500:
#line 1370 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 501:
#line 1373 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[-1].cname); ;
    break;}
case 502:
#line 1374 "cgrammar.y"
{ yyval.expr = exprNode_notReached (yyvsp[0].expr); ;
    break;}
case 503:
#line 1380 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 504:
#line 1381 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, FALSE); ;
    break;}
case 505:
#line 1382 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 506:
#line 1383 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, TRUE); ;
    break;}
case 507:
#line 1386 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 508:
#line 1387 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, FALSE); ;
    break;}
case 509:
#line 1388 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 510:
#line 1389 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, TRUE); ;
    break;}
case 511:
#line 1392 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 512:
#line 1394 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; context_exitInner (yyvsp[0].expr); ;
    break;}
case 513:
#line 1397 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 514:
#line 1400 "cgrammar.y"
{ context_enterInnerContext (); ;
    break;}
case 515:
#line 1403 "cgrammar.y"
{ context_exitInnerPlain (); ;
    break;}
case 516:
#line 1406 "cgrammar.y"
{ context_enterStructInnerContext (); ;
    break;}
case 517:
#line 1409 "cgrammar.y"
{ context_exitStructInnerContext (); ;
    break;}
case 518:
#line 1412 "cgrammar.y"
{ context_exitInnerSafe (); ;
    break;}
case 519:
#line 1415 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 520:
#line 1416 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_createTok (yyvsp[0].tok)); ;
    break;}
case 521:
#line 1417 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 522:
#line 1419 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 523:
#line 1420 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 524:
#line 1422 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 525:
#line 1424 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 526:
#line 1426 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (exprNode_concat (yyvsp[-3].expr, yyvsp[-2].expr), 
							lltok_getLoc (yyvsp[-1].tok))); 
   ;
    break;}
case 527:
#line 1433 "cgrammar.y"
{ yyval.expr = exprNode_makeBlock (yyvsp[0].expr); ;
    break;}
case 528:
#line 1437 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 529:
#line 1439 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 530:
#line 1441 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 531:
#line 1443 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 533:
#line 1447 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 534:
#line 1450 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 535:
#line 1451 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 536:
#line 1454 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 537:
#line 1455 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 538:
#line 1458 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 539:
#line 1459 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 540:
#line 1462 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 541:
#line 1463 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 542:
#line 1464 "cgrammar.y"
{ yyval.expr = exprNode_checkExpr (yyvsp[0].expr); ;
    break;}
case 543:
#line 1468 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 544:
#line 1476 "cgrammar.y"
{ 
     context_exitTrueClause (yyvsp[-1].expr, yyvsp[0].expr);
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 545:
#line 1480 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-2].expr); ;
    break;}
case 546:
#line 1481 "cgrammar.y"
{
     context_exitClause (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr);
     yyval.expr = exprNode_ifelse (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr); 
   ;
    break;}
case 547:
#line 1485 "cgrammar.y"
{ context_enterSwitch (yyvsp[0].expr); ;
    break;}
case 548:
#line 1486 "cgrammar.y"
{ yyval.expr = exprNode_switch (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 549:
#line 1490 "cgrammar.y"
{ yyval.expr = exprNode_whilePred (yyvsp[-1].expr); context_enterWhileClause (yyvsp[-1].expr); ;
    break;}
case 550:
#line 1494 "cgrammar.y"
{ yyval.expr = exprNode_whilePred(yyvsp[-1].expr); ;
    break;}
case 551:
#line 1497 "cgrammar.y"
{ context_enterIterClause (); ;
    break;}
case 552:
#line 1498 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-3].entry); ;
    break;}
case 553:
#line 1501 "cgrammar.y"
{ 
     yyval.expr = exprNode_iter (yyvsp[-9].entry, yyvsp[-4].alist, yyvsp[-2].expr, yyvsp[-1].entry); 

   ;
    break;}
case 554:
#line 1507 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 555:
#line 1508 "cgrammar.y"
{ nextIterParam (); ;
    break;}
case 556:
#line 1509 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-3].alist, yyvsp[0].expr); ;
    break;}
case 557:
#line 1512 "cgrammar.y"
{ yyval.expr = exprNode_iterExpr (yyvsp[0].expr); ;
    break;}
case 558:
#line 1513 "cgrammar.y"
{ yyval.expr = exprNode_iterId (yyvsp[0].entry); ;
    break;}
case 559:
#line 1514 "cgrammar.y"
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
case 560:
#line 1525 "cgrammar.y"
{ yyval.expr = exprNode_iterNewId (yyvsp[0].cname); ;
    break;}
case 562:
#line 1533 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 564:
#line 1537 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 565:
#line 1538 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 566:
#line 1539 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 567:
#line 1541 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 568:
#line 1542 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 569:
#line 1543 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 570:
#line 1544 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 571:
#line 1545 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 573:
#line 1549 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 574:
#line 1550 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 575:
#line 1551 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 576:
#line 1552 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 577:
#line 1553 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 578:
#line 1554 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 579:
#line 1555 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 580:
#line 1556 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 581:
#line 1557 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 583:
#line 1561 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 585:
#line 1565 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 586:
#line 1566 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 587:
#line 1567 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 589:
#line 1571 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 590:
#line 1572 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 592:
#line 1576 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 593:
#line 1577 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 595:
#line 1581 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 596:
#line 1582 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 597:
#line 1583 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 598:
#line 1584 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 600:
#line 1588 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 601:
#line 1589 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 603:
#line 1593 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 605:
#line 1597 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 607:
#line 1602 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 609:
#line 1606 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 611:
#line 1610 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 613:
#line 1614 "cgrammar.y"
{ context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 614:
#line 1615 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 615:
#line 1616 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 617:
#line 1620 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 618:
#line 1621 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 619:
#line 1622 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 620:
#line 1623 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 621:
#line 1624 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 622:
#line 1625 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 623:
#line 1626 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 624:
#line 1627 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 625:
#line 1628 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 626:
#line 1629 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 627:
#line 1630 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 628:
#line 1633 "cgrammar.y"
{ yyval.entry = yyvsp[0].entry; ;
    break;}
case 629:
#line 1634 "cgrammar.y"
{ yyval.entry = uentry_undefined; ;
    break;}
case 630:
#line 1637 "cgrammar.y"
{ context_enterDoWhileClause (); yyval.tok = yyvsp[0].tok; ;
    break;}
case 631:
#line 1641 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 632:
#line 1643 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr), yyvsp[0].tok); ;
    break;}
case 633:
#line 1645 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 634:
#line 1648 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 635:
#line 1650 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr), yyvsp[0].tok); ;
    break;}
case 636:
#line 1652 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 637:
#line 1653 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 638:
#line 1656 "cgrammar.y"
{ yyval.expr = exprNode_goto (yyvsp[-1].cname); ;
    break;}
case 639:
#line 1657 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-1].tok, BADTOK); ;
    break;}
case 640:
#line 1659 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-2].tok, QINNERCONTINUE); ;
    break;}
case 641:
#line 1660 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, BADTOK); ;
    break;}
case 642:
#line 1661 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSWITCHBREAK); ;
    break;}
case 643:
#line 1662 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QLOOPBREAK); ;
    break;}
case 644:
#line 1663 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QINNERBREAK); ;
    break;}
case 645:
#line 1664 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSAFEBREAK); ;
    break;}
case 646:
#line 1665 "cgrammar.y"
{ yyval.expr = exprNode_nullReturn (yyvsp[-1].tok); ;
    break;}
case 647:
#line 1666 "cgrammar.y"
{ yyval.expr = exprNode_return (yyvsp[-1].expr); ;
    break;}
case 649:
#line 1670 "cgrammar.y"
{ ; ;
    break;}
case 652:
#line 1677 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 653:
#line 1678 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 654:
#line 1679 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 655:
#line 1680 "cgrammar.y"
{ yyval.cname = yyvsp[0].cname; ;
    break;}
case 657:
#line 1684 "cgrammar.y"
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
#line 1686 "cgrammar.y"


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
  





