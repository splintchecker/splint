
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



#define	YYFINAL		1216
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
  1463,  1465,  1467,  1470,  1472,  1474,  1476,  1479,  1482,  1490,
  1497,  1500,  1501,  1502,  1513,  1514,  1521,  1523,  1525,  1527,
  1529,  1532,  1534,  1536,  1538,  1540,  1542,  1544,  1546,  1550,
  1552,  1555,  1558,  1561,  1563,  1565,  1567,  1569,  1571,  1573,
  1575,  1577,  1579,  1581,  1585,  1587,  1589,  1592,  1595,  1596,
  1601,  1602,  1608,  1609,  1613,  1614,  1619,  1623,  1626,  1630,
  1631,  1632,  1633,  1634,  1635,  1637,  1640,  1643,  1647,  1650,
  1654,  1658,  1663,  1666,  1669,  1673,  1677,  1682,  1684,  1687,
  1689,  1692,  1694,  1697,  1699,  1702,  1704,  1707,  1709,  1714,
  1717,  1718,  1724,  1725,  1732,  1737,  1742,  1743,  1744,  1755,
  1757,  1758,  1763,  1765,  1767,  1769,  1771,  1773,  1777,  1779,
  1784,  1788,  1793,  1800,  1806,  1812,  1815,  1818,  1820,  1823,
  1826,  1829,  1832,  1835,  1838,  1841,  1844,  1846,  1848,  1853,
  1855,  1859,  1863,  1867,  1869,  1873,  1877,  1879,  1883,  1887,
  1889,  1893,  1897,  1901,  1905,  1907,  1911,  1915,  1917,  1921,
  1923,  1927,  1929,  1933,  1935,  1939,  1941,  1945,  1947,  1948,
  1949,  1957,  1959,  1963,  1967,  1971,  1975,  1979,  1983,  1987,
  1991,  1995,  1999,  2003,  2005,  2006,  2008,  2011,  2019,  2022,
  2025,  2033,  2040,  2043,  2047,  2050,  2054,  2057,  2061,  2065,
  2069,  2073,  2076,  2080,  2081,  2083,  2085,  2087,  2089,  2091,
  2093,  2095,  2097
};

static const short yyrhs[] = {    -1,
   191,     0,   192,     0,   191,   192,     0,   260,   429,     0,
   193,     0,   194,     0,   204,     0,   207,     0,   297,     0,
     1,     0,    75,   317,   330,   340,   330,   429,   305,    88,
     0,    75,   317,   330,   340,   330,    23,   305,   310,   309,
   429,    88,     0,     0,    76,   195,   196,   429,    88,     0,
   197,     0,   317,   330,   197,     0,   201,     0,   344,   201,
     0,   431,     0,   305,    24,   330,   340,   305,    25,     0,
   198,    26,    27,     0,   198,    26,   305,   296,    27,   330,
     0,     0,   198,   306,    24,    25,   199,   209,   211,     0,
     0,   198,   306,    24,   341,    25,   200,   209,   211,     0,
   431,     0,   305,    24,   330,   197,   305,    25,     0,   201,
    26,    27,     0,   201,    26,   305,   296,    27,   330,     0,
     0,   201,   306,    24,    25,   202,   227,     0,     0,   201,
   306,    24,   341,    25,   203,   227,     0,     0,     0,    77,
   431,    24,   341,    25,   205,   227,   206,   429,    88,     0,
    89,   370,    92,     0,    90,   357,    92,     0,    91,   358,
    92,     0,    89,    92,     0,   256,     0,     0,   210,   229,
     0,     0,   212,   213,     0,   216,   214,     0,     0,   215,
   178,   218,    88,     0,     0,     0,   217,   177,   218,    88,
     0,     0,   219,   218,     0,   219,     0,   222,   221,   222,
    18,     0,   180,     0,   181,     0,    52,     0,    51,     0,
    53,     0,   223,     0,   225,    24,   222,    25,     0,    24,
   222,   226,   222,    25,     0,   224,     0,   186,     0,   430,
     0,   184,     0,   224,    26,    27,     0,   224,    26,   186,
    27,     0,    34,   224,     0,    24,   224,    25,     0,   224,
    28,   431,     0,   224,    44,   431,     0,   220,     0,    33,
     0,    32,     0,     0,     0,   230,     0,     0,   228,   230,
     0,   237,     0,   231,   237,     0,   240,     0,   231,   240,
     0,   253,     0,   253,   231,     0,   233,     0,   232,    21,
   233,     0,   236,   234,     0,   430,     0,   184,     0,    86,
     0,    87,     0,   116,     0,   117,     0,   130,     0,     0,
   235,   236,     0,     0,    72,   238,   390,   429,    88,   243,
     0,     0,    72,   239,   232,   429,    88,   243,     0,    74,
     0,   244,     0,     0,     0,    72,   241,   390,   429,   243,
     0,     0,    72,   242,   232,   429,   243,     0,    74,     0,
   246,     0,     0,   244,     0,     0,     0,    73,   245,   261,
     0,     0,    73,   247,   262,     0,    78,     0,    79,     0,
    80,     0,    81,     0,    82,     0,    88,     0,    88,     0,
    83,     0,    84,     0,   119,     0,   137,     0,   135,     0,
   133,     0,   132,     0,   121,     0,   138,     0,   150,     0,
     0,   248,   330,   254,   267,   429,   250,   305,     0,     0,
   251,   330,   252,   255,   267,   429,   249,   305,     0,   340,
     0,   317,   330,   340,     0,     0,    19,   258,   386,     0,
     0,   390,   259,   379,     0,   208,   257,     0,   265,   429,
    88,     0,   429,    88,     0,   265,   429,     0,   429,     0,
   430,     0,   184,     0,   263,    26,    27,     0,   263,    26,
   264,    27,     0,    34,   263,     0,    24,   263,    25,     0,
   263,    28,   431,     0,   263,    44,   431,     0,   263,     0,
   186,     0,   263,     0,   265,    21,   263,     0,   430,     0,
   184,     0,   266,    26,    27,     0,   266,    26,   264,    27,
     0,    34,   266,     0,    24,   266,    25,     0,   266,    28,
   431,     0,   266,    44,   431,     0,   266,     0,   267,    21,
   266,     0,   430,     0,   184,     0,   186,     0,    24,   294,
    25,     0,   185,     0,   111,     0,   268,     0,   269,    26,
   294,    27,     0,   269,    24,    25,     0,   269,    24,   270,
    25,     0,    70,    24,   293,    21,   352,    25,     0,   269,
   330,    28,   431,   305,     0,   269,   330,    44,   431,   305,
     0,   269,    47,     0,   269,    48,     0,   293,     0,   270,
    21,   293,     0,   269,     0,    47,   271,     0,    48,   271,
     0,    29,   277,     0,    34,   277,     0,    33,   277,     0,
    32,   277,     0,    31,   277,     0,    30,   277,     0,   274,
     0,   273,     0,   272,    28,   431,     0,   431,     0,    46,
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
     0,   173,   330,     0,   174,   330,     0,   432,   330,     0,
   321,   330,     0,   335,   330,     0,   314,   330,     0,   305,
   317,   305,     0,   319,     0,   319,    85,   318,    88,     0,
   352,     0,   352,    21,   318,     0,   312,   320,     0,   313,
   320,     0,   315,   320,     0,     0,   317,     0,     0,     0,
   330,    67,   431,   305,    19,   322,   383,   331,   384,   323,
    20,     0,     0,     0,   330,    68,   431,   305,    19,   324,
   383,   331,   384,   325,    20,     0,   330,    67,   431,   305,
    19,    20,     0,   330,    68,   431,   305,    19,    20,     0,
     0,     0,   330,    67,   305,    19,   326,   383,   331,   384,
   327,    20,     0,     0,     0,   330,    68,   305,    19,   328,
   383,   331,   384,   329,    20,     0,   330,    67,   305,    19,
    20,     0,   330,    68,   305,    19,    20,     0,   330,    67,
   431,   330,     0,   330,    68,   431,   330,     0,     0,   332,
     0,   207,     0,   331,   332,     0,   317,   330,   333,   305,
    18,     0,   317,   305,    18,     0,   334,   330,     0,   333,
    21,   334,   330,     0,   340,     0,    22,   305,   296,     0,
   340,    22,   305,   296,     0,   330,    69,    19,   337,    20,
   305,     0,     0,   330,    69,   431,    19,   336,   337,    20,
   305,     0,   330,    69,   431,   305,     0,   338,     0,   337,
    21,   338,     0,   337,    21,     0,   431,     0,   431,    23,
   305,   296,     0,   198,     0,   354,     0,   344,   189,     0,
   344,   339,     0,   198,     0,   344,   198,     0,   347,     0,
   330,   345,     0,   108,     0,   109,     0,   342,     0,   343,
   342,     0,    34,     0,    34,   343,     0,    34,   344,     0,
    34,   343,   344,     0,   346,     0,   346,    21,     5,     0,
   431,     0,   346,    21,   431,     0,     5,     0,   348,     0,
   348,    21,     5,     0,     0,   349,   351,     0,     0,   348,
    21,   350,   351,     0,   305,   317,   339,   305,     0,   431,
     0,   316,     0,   316,   353,     0,   344,     0,   355,     0,
   344,   355,     0,     0,   355,     0,   305,    24,   330,   353,
    25,     0,    26,    27,     0,    26,   296,    27,     0,   355,
    26,    27,     0,   355,    26,   296,    27,     0,   305,    24,
    25,     0,   305,    24,   347,    25,     0,   355,   305,    24,
    25,     0,   355,   305,    24,   347,    25,     0,   372,     0,
   373,     0,   376,     0,   379,     0,   392,     0,   395,     0,
   426,     0,   400,     0,   428,     0,    22,   431,     0,   359,
     0,   357,     0,   366,     0,   359,   366,     0,   399,   359,
     0,   425,   371,    11,    24,   294,    25,    18,     0,   425,
   371,    11,    24,   294,    25,     0,   361,   366,     0,     0,
     0,    13,    24,   295,    18,   295,    18,   362,   295,   363,
    25,     0,     0,   187,   381,    24,   365,   403,    25,     0,
   188,     0,   372,     0,   373,     0,   376,     0,   368,   390,
     0,   368,     0,   369,     0,   392,     0,   367,     0,   360,
     0,   364,     0,   428,     0,    24,   366,    25,     0,     1,
     0,   394,   366,     0,   381,    19,     0,   385,    20,     0,
   371,     0,   389,     0,   372,     0,   373,     0,   376,     0,
   380,     0,   393,     0,   395,     0,   400,     0,   427,     0,
    24,   371,    25,     0,   428,     0,     1,     0,   431,    22,
     0,   107,   356,     0,     0,     6,   296,   374,    22,     0,
     0,    98,     6,   296,   375,    22,     0,     0,     7,   377,
    22,     0,     0,    98,     7,   378,    22,     0,    24,   379,
    25,     0,   381,   387,     0,   381,   388,   382,     0,     0,
     0,     0,     0,     0,    20,     0,   107,    20,     0,   391,
    20,     0,   391,   107,    20,     0,   390,    20,     0,   390,
   107,    20,     0,   390,   391,    20,     0,   390,   391,   107,
    20,     0,    19,   386,     0,    19,    20,     0,    19,   389,
    20,     0,    19,   390,    20,     0,    19,   390,   391,    20,
     0,   371,     0,   389,   371,     0,   297,     0,   390,   297,
     0,   356,     0,   391,   356,     0,    18,     0,   294,    18,
     0,    18,     0,   294,    18,     0,   294,     0,     8,    24,
   294,    25,     0,   394,   356,     0,     0,   394,   356,     9,
   396,   356,     0,     0,    10,    24,   294,   397,    25,   356,
     0,    11,    24,   294,    25,     0,    11,    24,   294,    25,
     0,     0,     0,   187,   401,   381,    24,   402,   403,    25,
   379,   424,   382,     0,   405,     0,     0,   403,   404,    21,
   405,     0,   423,     0,   430,     0,   185,     0,   184,     0,
   186,     0,    24,   294,    25,     0,   406,     0,   269,    26,
   294,    27,     0,   269,    24,    25,     0,   269,    24,   270,
    25,     0,    70,    24,   293,    21,   352,    25,     0,   269,
   330,    28,   431,   305,     0,   269,   330,    44,   431,   305,
     0,   269,    47,     0,   269,    48,     0,   407,     0,    47,
   271,     0,    48,   271,     0,    29,   277,     0,    34,   277,
     0,    33,   277,     0,    32,   277,     0,    31,   277,     0,
    30,   277,     0,   274,     0,   408,     0,    24,   352,    25,
   277,     0,   409,     0,   278,    34,   277,     0,   278,    35,
   277,     0,   278,    36,   277,     0,   410,     0,   279,    33,
   278,     0,   279,    32,   278,     0,   411,     0,   280,    49,
   279,     0,   280,    50,   279,     0,   412,     0,   281,    37,
   280,     0,   281,    38,   280,     0,   281,    51,   280,     0,
   281,    52,   280,     0,   413,     0,   282,    53,   281,     0,
   282,    54,   281,     0,   414,     0,   283,    29,   282,     0,
   415,     0,   284,    39,   283,     0,   416,     0,   285,    40,
   284,     0,   417,     0,   286,    55,   285,     0,   418,     0,
   288,    56,   286,     0,   419,     0,     0,     0,   288,    41,
   421,   294,    22,   422,   290,     0,   420,     0,   271,    23,
   293,     0,   271,    57,   293,     0,   271,    58,   293,     0,
   271,    59,   293,     0,   271,    60,   293,     0,   271,    61,
   293,     0,   271,    62,   293,     0,   271,    63,   293,     0,
   271,    64,   293,     0,   271,    65,   293,     0,   271,    66,
   293,     0,   188,     0,     0,    12,     0,   398,   356,     0,
   425,   356,    11,    24,   294,    25,    18,     0,   361,   356,
     0,   398,   371,     0,   425,   371,    11,    24,   294,    25,
    18,     0,   425,   371,    11,    24,   294,    25,     0,   361,
   371,     0,    14,   431,    18,     0,    15,    18,     0,    97,
    15,    18,     0,    16,    18,     0,    93,    16,    18,     0,
    94,    16,    18,     0,    95,    16,    18,     0,    96,    16,
    18,     0,    17,    18,     0,    17,   294,    18,     0,     0,
    18,     0,   183,     0,   184,     0,   187,     0,   188,     0,
   430,     0,   185,     0,   189,     0,   185,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   269,   270,   273,   274,   277,   278,   279,   280,   281,   282,
   283,   286,   288,   292,   292,   297,   303,   307,   308,   312,
   313,   315,   317,   321,   324,   332,   336,   346,   347,   349,
   351,   367,   371,   378,   382,   388,   390,   390,   394,   395,
   396,   397,   400,   403,   404,   410,   411,   415,   419,   424,
   431,   435,   440,   447,   450,   451,   454,   459,   460,   463,
   464,   465,   468,   469,   470,   475,   476,   484,   487,   489,
   490,   495,   496,   497,   499,   515,   519,   520,   525,   526,
   536,   537,   540,   541,   544,   545,   548,   549,   552,   553,
   556,   559,   560,   563,   564,   565,   566,   567,   570,   571,
   574,   574,   577,   577,   580,   584,   585,   588,   588,   591,
   591,   594,   598,   599,   602,   603,   606,   612,   619,   625,
   632,   633,   634,   635,   636,   639,   642,   645,   646,   649,
   650,   651,   652,   653,   654,   655,   656,   659,   665,   672,
   678,   687,   693,   697,   699,   703,   706,   713,   723,   724,
   727,   728,   731,   732,   733,   734,   735,   736,   737,   738,
   742,   743,   747,   748,   751,   753,   755,   756,   757,   758,
   759,   761,   765,   769,   781,   782,   783,   784,   785,   786,
   789,   790,   791,   792,   793,   794,   795,   796,   797,   800,
   801,   804,   805,   806,   807,   808,   809,   810,   811,   812,
   813,   814,   817,   818,   821,   825,   826,   829,   830,   831,
   832,   835,   836,   840,   841,   842,   843,   846,   847,   848,
   851,   852,   853,   856,   857,   858,   859,   860,   863,   864,
   865,   868,   869,   872,   873,   877,   878,   881,   882,   887,
   893,   894,   900,   906,   907,   907,   909,   912,   913,   914,
   915,   916,   917,   918,   919,   920,   921,   922,   923,   926,
   927,   930,   931,   934,   939,   940,   941,   944,   957,   961,
   962,   965,   970,   971,   971,   976,   977,   978,   979,   982,
   985,   988,   991,   992,   995,   996,   999,  1000,  1001,  1005,
  1007,  1016,  1017,  1018,  1019,  1020,  1023,  1024,  1025,  1026,
  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,
  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,
  1057,  1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,
  1067,  1068,  1074,  1075,  1076,  1077,  1080,  1081,  1082,  1083,
  1084,  1085,  1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,
  1096,  1100,  1101,  1105,  1106,  1110,  1111,  1112,  1115,  1116,
  1119,  1121,  1123,  1124,  1126,  1128,  1129,  1131,  1133,  1135,
  1137,  1138,  1140,  1142,  1143,  1145,  1147,  1148,  1151,  1154,
  1155,  1156,  1159,  1161,  1165,  1167,  1171,  1172,  1173,  1177,
  1179,  1179,  1181,  1184,  1186,  1188,  1191,  1196,  1203,  1204,
  1205,  1212,  1216,  1217,  1221,  1222,  1225,  1226,  1229,  1230,
  1233,  1234,  1235,  1236,  1239,  1240,  1243,  1244,  1247,  1248,
  1249,  1252,  1252,  1253,  1254,  1257,  1269,  1285,  1286,  1289,
  1290,  1291,  1294,  1295,  1298,  1300,  1301,  1303,  1304,  1306,
  1308,  1310,  1312,  1318,  1319,  1320,  1321,  1322,  1323,  1324,
  1325,  1326,  1341,  1346,  1349,  1352,  1353,  1357,  1359,  1361,
  1363,  1367,  1368,  1370,  1374,  1376,  1378,  1381,  1382,  1383,
  1384,  1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,  1393,
  1396,  1402,  1405,  1408,  1409,  1412,  1413,  1414,  1415,  1416,
  1417,  1418,  1419,  1420,  1421,  1422,  1425,  1426,  1432,  1433,
  1434,  1435,  1438,  1439,  1440,  1441,  1444,  1445,  1449,  1452,
  1455,  1458,  1461,  1464,  1467,  1468,  1469,  1470,  1472,  1473,
  1475,  1477,  1484,  1488,  1490,  1492,  1494,  1498,  1499,  1502,
  1503,  1506,  1507,  1510,  1511,  1514,  1515,  1516,  1519,  1527,
  1532,  1533,  1537,  1538,  1541,  1546,  1549,  1550,  1551,  1559,
  1560,  1560,  1564,  1565,  1566,  1577,  1584,  1585,  1588,  1589,
  1590,  1591,  1592,  1594,  1595,  1596,  1597,  1600,  1601,  1602,
  1603,  1604,  1605,  1606,  1607,  1608,  1609,  1612,  1613,  1616,
  1617,  1618,  1619,  1622,  1623,  1624,  1627,  1628,  1629,  1632,
  1633,  1634,  1635,  1636,  1639,  1640,  1641,  1644,  1645,  1648,
  1649,  1653,  1654,  1657,  1658,  1661,  1662,  1665,  1666,  1667,
  1668,  1671,  1672,  1673,  1674,  1675,  1676,  1677,  1678,  1679,
  1680,  1681,  1682,  1685,  1686,  1689,  1692,  1694,  1696,  1700,
  1701,  1703,  1705,  1708,  1709,  1710,  1712,  1713,  1714,  1715,
  1716,  1717,  1718,  1721,  1722,  1725,  1728,  1729,  1730,  1731,
  1732,  1735,  1736
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
   356,   356,    -1,   357,   358,   359,   359,   360,   360,   360,
   360,   362,   363,   361,   365,   364,   364,   366,   366,   366,
   366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
   367,   368,   369,   370,   370,   371,   371,   371,   371,   371,
   371,   371,   371,   371,   371,   371,   372,   372,   374,   373,
   375,   373,   377,   376,   378,   376,   379,   379,   380,   381,
   382,   383,   384,   385,   386,   386,   386,   386,   386,   386,
   386,   386,   387,   388,   388,   388,   388,   389,   389,   390,
   390,   391,   391,   392,   392,   393,   393,   393,   394,   395,
   396,   395,   397,   395,   398,   399,   401,   402,   400,   403,
   404,   403,   405,   405,   405,   405,   406,   406,   407,   407,
   407,   407,   407,   407,   407,   407,   407,   408,   408,   408,
   408,   408,   408,   408,   408,   408,   408,   409,   409,   410,
   410,   410,   410,   411,   411,   411,   412,   412,   412,   413,
   413,   413,   413,   413,   414,   414,   414,   415,   415,   416,
   416,   417,   417,   418,   418,   419,   419,   420,   421,   422,
   420,   423,   423,   423,   423,   423,   423,   423,   423,   423,
   423,   423,   423,   424,   424,   425,   426,   426,   426,   427,
   427,   427,   427,   428,   428,   428,   428,   428,   428,   428,
   428,   428,   428,   429,   429,   430,   431,   431,   431,   431,
   431,   432,   432
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
    69,    67,     0,    56,    76,     0,    63,    66,     0,    68,
     0,    99,     0,   100,    93,    91,    92,     0,   157,     0,
     0,     0,     0,     0,   150,     0,     0,   166,   173,   654,
   165,     0,   280,   286,   280,   280,     0,   395,   280,   381,
     0,   384,     0,    13,   116,   116,   151,   474,   559,   185,
   280,     0,     0,    66,     0,    72,    53,    55,    61,    60,
    62,     0,     0,     0,     0,     0,   116,    90,   116,   158,
   155,   162,   161,     0,   159,   160,   164,   149,     0,   169,
     0,     0,     0,     0,     0,   654,   272,   398,   389,   393,
   280,   373,   376,   109,   115,   111,   621,    50,    78,    77,
     0,    73,     0,     0,    70,     0,    74,    75,     0,   102,
   104,   156,   170,   167,     0,   171,   172,   174,   127,   280,
     0,   396,   399,     0,    57,    71,    64,   168,   139,   126,
   280,    65,   141,     0,     0,     0
};

static const short yydefgoto[] = {  1214,
    82,    83,    84,    85,   122,   320,   321,    86,   657,   765,
   322,   790,   906,    87,   689,   908,   891,    89,   763,   764,
   868,   869,   969,  1014,  1015,   970,   971,  1083,  1084,  1085,
  1142,  1086,  1087,  1088,  1089,  1181,   795,   796,   880,   912,
   881,  1023,  1024,  1096,  1025,  1026,   882,   972,   973,   914,
   996,   997,  1174,  1175,   974,   915,   998,   884,  1211,  1200,
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

static const short yypact[] = {  2064,
-32768,   361,  5617,-32768,  6626,-32768,   803,  2992,  3372,  3372,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   134,-32768,-32768,
-32768,  2240,-32768,-32768,-32768,   273,-32768,-32768,  5145,-32768,
   170,-32768,-32768,-32768,   189,  6461,  6461,-32768,  6461,   253,
   151,-32768,   654,-32768,-32768,   803,-32768,-32768,-32768,-32768,
-32768,-32768,   361,-32768,-32768,   269,-32768,   253,-32768,-32768,
-32768,  5617,-32768,   319,-32768,  5853,-32768,   330,   337,   351,
-32768,   366,   803,   397,   412,  1980,-32768,  2614,  5853,  5853,
  5853,  5853,  5853,  5853,-32768,  5888,  5888,   439,-32768,   457,
   463,   494,   516,   502,   479,  4592,-32768,   536,   559,-32768,
   579,-32768,   760,  1080,-32768,-32768,-32768,  1076,   538,    94,
   585,   554,   604,   549,   588,   598,   111,-32768,-32768,   406,
-32768,  3415,   567,   601,-32768,-32768,-32768,-32768,   689,  3035,
-32768,  4592,-32768,  3415,-32768,  3415,-32768,-32768,   693,   719,
-32768,   728,-32768,  2803,   579,   761,   436,   666,  3182,-32768,
  3372,-32768,-32768,-32768,  6221,-32768,-32768,-32768,-32768,   778,
   779,-32768,  3372,  3372,  3415,-32768,-32768,   721,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   796,   787,-32768,-32768,-32768,
   253,  4988,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   788,   541,-32768,-32768,   803,   803,    50,-32768,   273,-32768,
-32768,-32768,-32768,   827,-32768,-32768,   860,   798,   541,   170,
-32768,   514,   861,-32768,   803,-32768,   293,  5853,-32768,-32768,
-32768,-32768,-32768,-32768,   865,  5853,  5853,  5853,  2236,   872,
-32768,-32768,-32768,   450,   291,  6090,   232,   870,   880,-32768,
-32768,-32768,-32768,-32768,-32768,   893,  5853,-32768,-32768,  5853,
   913,   919,   924,   939,   942,  5853,-32768,  5404,-32768,  4592,
-32768,-32768,-32768,-32768,   944,-32768,-32768,  4592,-32768,  4592,
-32768,-32768,-32768,  5628,  5853,-32768,-32768,   106,  5853,  5853,
  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,
  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,
  5853,  5853,  5853,  5853,  5853,-32768,-32768,-32768,-32768,  5853,
   599,-32768,-32768,  2425,-32768,-32768,   970,-32768,   974,-32768,
  5853,   529,   967,   977,-32768,-32768,-32768,-32768,  6221,-32768,
-32768,-32768,  1890,   993,-32768,-32768,  5853,    96,  3562,   541,
   982,-32768,   541,-32768,    90,  6626,   921,  1022,  1018,  1034,
  1037,  1034,   803,  1050,   541,-32768,   541,-32768,-32768,-32768,
   926,  1019,  1048,-32768,   541,   514,-32768,   803,  1051,-32768,
  1054,   803,   201,  1060,-32768,   302,  1062,   323,  1062,  1075,
-32768,-32768,-32768,-32768,  5791,  1072,   593,-32768,   707,  5853,
-32768,-32768,  1079,-32768,-32768,-32768,-32768,-32768,-32768,  1082,
  1083,-32768,  3562,-32768,-32768,  1086,  1077,-32768,   356,-32768,
   145,   803,   803,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1076,  1076,   538,
   538,    94,    94,    94,    94,   585,   585,   554,   604,   549,
  5853,  5853,  5853,-32768,  5919,  5980,-32768,-32768,  5377,-32768,
  3225,  3746,-32768,-32768,  1081,   389,-32768,-32768,  1091,  1093,
-32768,  1100,-32768,  4114,-32768,-32768,  3930,  4157,-32768,   982,
-32768,-32768,  1084,-32768,-32768,  1106,  1114,-32768,  1127,  1129,
-32768,   752,-32768,  1130,-32768,-32768,-32768,   269,-32768,   255,
-32768,-32768,  5853,   250,   541,-32768,-32768,  1134,-32768,-32768,
  1159,  6626,-32768,-32768,-32768,-32768,  1140,-32768,  2236,-32768,
-32768,  1141,   578,   707,  5802,  1143,-32768,-32768,-32768,  1161,
-32768,-32768,-32768,  1157,-32768,  5853,-32768,-32768,-32768,-32768,
   588,   770,   598,  5853,-32768,  5853,-32768,-32768,-32768,  4259,
  4592,  5853,-32768,  6011,  5853,-32768,-32768,-32768,-32768,-32768,
  4302,  4404,-32768,  4447,-32768,  1162,-32768,-32768,-32768,-32768,
-32768,  1164,-32768,-32768,  1166,-32768,   803,-32768,   803,  1171,
  5538,-32768,-32768,  1163,-32768,  1167,-32768,   346,-32768,-32768,
   803,   741,  4592,  1173,-32768,-32768,   143,  1168,-32768,  1169,
   122,  1176,  1174,-32768,  5853,  6011,-32768,-32768,-32768,-32768,
  1179,  1180,-32768,-32768,   411,  5853,  5853,  5853,  5853,  5853,
  5853,  5853,  5888,  5888,  1170,   475,   483,   530,  1016,  1113,
   543,  1088,   836,   848,   726,   869,  1172,  1177,  1175,  1151,
   156,  1182,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   566,
   572,-32768,-32768,  1007,-32768,-32768,-32768,  4549,-32768,-32768,
-32768,-32768,  6548,-32768,-32768,  6548,-32768,-32768,-32768,-32768,
  5853,   891,-32768,  5538,-32768,-32768,  5538,  1124,-32768,-32768,
-32768,  1188,-32768,-32768,-32768,  1257,-32768,   273,  1194,-32768,
   641,-32768,   707,-32768,-32768,  1195,-32768,-32768,-32768,  1199,
   803,-32768,   629,  1200,  5853,-32768,-32768,  1208,   645,  1203,
   777,   784,   814,   837,   846,   875,   889,   909,  5853,  5822,
  5853,   915,   922,   137,  5853,  5853,  5853,  5853,  5853,  5853,
  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,
  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,
  5853,  5853,-32768,  5853,-32768,  1210,  1214,-32768,  1056,    77,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1078,-32768,-32768,-32768,-32768,  1221,-32768,-32768,  5538,   477,
-32768,   253,  5223,-32768,  6548,  5223,  6548,-32768,-32768,-32768,
   931,-32768,-32768,-32768,-32768,-32768,-32768,   170,    93,-32768,
-32768,-32768,  1085,-32768,-32768,   149,-32768,-32768,-32768,  5833,
-32768,-32768,   623,-32768,  1216,   982,-32768,-32768,   941,  5853,
  1215,   952,   953,   241,   803,   803,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   992,   995,  1020,
   675,   806,   681,   736,   367,   613,   631,   669,   856,   987,
   503,   342,   114,   588,  5853,   598,  6011,-32768,-32768,  1057,
  1061,  6352,   429,   112,-32768,-32768,   783,-32768,-32768,-32768,
-32768,-32768,  1222,    56,-32768,-32768,  5223,-32768,  5223,-32768,
-32768,  4858,   653,-32768,  1153,  6352,   429,   112,-32768,   501,
-32768,-32768,   803,-32768,  1055,  1027,-32768,  1030,  1033,-32768,
-32768,   950,-32768,-32768,  1068,   218,  4831,-32768,-32768,-32768,
-32768,-32768,   680,-32768,   429,   815,    65,    65,-32768,-32768,
   150,   816,  1165,-32768,   117,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   839,-32768,   541,-32768,-32768,  1218,
-32768,  1225,  1229,-32768,  1230,-32768,-32768,-32768,  1181,-32768,
  4673,   680,-32768,   816,-32768,   426,  1232,-32768,-32768,-32768,
-32768,  1236,  1040,  1046,-32768,   218,   218,   175,-32768,-32768,
-32768,-32768,  1183,   218,-32768,  1109,-32768,   495,  1231,-32768,
  1184,   429,  1186,-32768,-32768,-32768,-32768,   722,   150,   258,
   803,   803,    65,  1187,-32768,   117,   117,-32768,   551,   858,
-32768,   117,-32768,-32768,  5853,    56,  1244,-32768,-32768,-32768,
  1234,-32768,  1243,-32768,  1191,  1191,-32768,-32768,-32768,  1049,
  5853,  1189,   990,   768,   175,   495,-32768,-32768,-32768,-32768,
-32768,   218,    17,   803,   803,   218,  1191,-32768,  1191,-32768,
-32768,-32768,   150,  1238,-32768,-32768,   150,-32768,   794,   551,
   432,   803,   803,   117,  1190,   858,-32768,-32768,-32768,-32768,
  5853,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   218,-32768,   768,  1250,-32768,  1252,-32768,-32768,  1255,-32768,
-32768,-32768,-32768,-32768,  1254,-32768,-32768,   551,-32768,-32768,
  1198,-32768,-32768,  1262,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1290,  1293,-32768
};

static const short yypgoto[] = {-32768,
-32768,  1213,-32768,-32768,-32768,-32768,  -389,  -102,-32768,-32768,
   971,-32768,-32768,-32768,-32768,-32768,   129,-32768,   532,-32768,
   420,-32768,-32768,-32768,-32768,-32768,-32768,  -655,-32768,-32768,
-32768,  -928,-32768,  -907,-32768,-32768,  -705,-32768,-32768,-32768,
  -691,   311,   217,-32768,-32768,   285,   430,-32768,-32768,   399,
-32768,-32768, -1016,  -676,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -581,   155,   324,  -570,   211,-32768,  -587,   504,
   988,-32768,-32768,  -583,-32768,-32768,    18,  -324,  -340,  -312,
  -309,  -367,  -346,  -341,  -506,  -461,-32768,  -582,-32768,  -112,
-32768,-32768,   637,  1237,  -610,  -353,     1,-32768,-32768,-32768,
  -463,-32768,-32768,-32768,     0,  -229,   881,-32768,  -793,  -703,
-32768,-32768,-32768,-32768,-32768,-32768,   326,   740,-32768,   580,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   782,
  -672,  -484,-32768,   226,-32768,-32768,   668,   672,   550,     5,
  -372,  1239,-32768,    15,-32768,-32768,  -576,-32768,-32768,-32768,
   659,  -233,  1006,-32768,  -490,   714,  1345,-32768,  1132,-32768,
   745,-32768,-32768,-32768,-32768,   -97,-32768,-32768,-32768,-32768,
     2,  1311,  1408,-32768,-32768,  1434,-32768,-32768,  -360,-32768,
   771,   286,  -554,  -781,-32768,   845,-32768,-32768,   935,   -83,
  -331,     6,-32768,   146,    69,-32768,-32768,   249,-32768,   371,
-32768,-32768,   656,-32768,   393,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1547,-32768,-32768,  1600,  -247,   182,
   267,-32768
};


#define	YYLAST		6815


static const short yytable[] = {    95,
    92,   597,    95,   309,   105,   292,   624,   511,   694,   184,
   229,   230,   509,   332,   222,   222,   114,   231,   232,   233,
   234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,  1185,   641,   548,   698,   257,   258,   259,
   260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
   270,   271,   272,   273,   540,   541,   729,   549,   463,   458,
   731,   741,   471,   550,   284,   572,   193,  1049,   538,   539,
   900,    95,    92,   902,   905,   606,   105,   883,  1027,     2,
   581,   643,   473,   570,   542,   543,   544,   545,  1028,   301,
   477,   546,   547,   896,   913,    95,   433,  -389,   993,  1176,
  -389,   437,  -389,   438,   988,   314,   315,   317,   729,   776,
   571,   323,   731,   741,   810,   442,   477,   312,    88,   293,
  1190,   439,  1191,   522,  -613,  1027,   325,   346,  -613,   349,
  1106,   622,   405,   406,   356,  1028,   809,   739,  1133,   523,
  1107,   417,   414,   477,   223,   223,   350,   351,   352,   353,
   354,   355,  -103,  -103,   935,   420,   418,  -663,   495,  1134,
  1136,   638,  -389,   696,  -389,  1100,     2,  1101,  -110,  -110,
   936,   107,  -389,   422,   107,   980,  1045,   293,   107,   199,
   199,   199,   740,  1102,   978,   428,   863,   429,  1135,   739,
   994,   803,  1186,   346,   883,  1054,   193,  1056,  1078,   222,
    88,   864,   295,  1184,   222,   687,   222,  1189,  -663,   511,
   895,   420,   987,   897,   989,   493,   444,  1183,   222,   222,
   650,   686,    76,    77,   123,   303,    79,    80,    76,    77,
   123,  1077,    79,    80,   740,   662,   473,    76,  1029,   684,
   193,  1078,  1204,   332,   477,  -280,   194,   495,   193,  -103,
  -103,   420,   193,   107,   193,     2,   108,  1009,   628,   108,
  -280,   700,   293,   124,   685,  -110,  -110,   682,  -389,  -389,
  -389,  1027,  -389,  -389,  1151,   447,   736,   107,  1058,   313,
   301,  1028,   452,   193,    76,  1029,  -281,   477,   286,    76,
  1108,    95,   456,   107,   459,   461,   455,   737,   419,  1001,
   803,   420,   738,   733,   107,   493,  -663,  -663,    95,   199,
  -663,  -663,   420,   470,   323,   100,   616,   346,   118,   732,
   121,  -389,  -389,  -389,   332,  -389,  -389,   199,   736,   698,
   562,   734,   327,   420,   735,   437,   496,   618,   108,   223,
   793,   458,   683,   336,   223,   964,   223,    76,  1081,   737,
   337,   497,  -611,   199,   738,   733,  -611,   346,   223,   223,
   413,   199,   108,   199,   338,   199,   636,   199,   195,   729,
   637,   732,   332,   731,   741,   199,   194,  -601,   326,   339,
   199,  -601,   199,   734,     2,   703,   735,  1079,  1080,   340,
    76,  1081,   966,  1082,   199,   199,   199,   100,   985,   420,
   711,   985,   712,   653,   341,   405,   406,   535,   536,   537,
  1132,   296,   296,   419,   296,   560,   420,   898,  1138,   342,
   194,   420,  -389,  -389,  -389,   818,  -389,  -389,   194,   452,
    76,  1029,   194,  1152,   194,  1098,  1099,   324,   222,    95,
  -440,   495,    95,   435,   579,  1027,   420,   582,  1194,   587,
   739,   590,   360,   596,    95,  1028,    95,   492,   110,   111,
   420,   603,   361,   194,   323,  -389,  -389,  -389,   362,  -389,
  -389,   612,   820,   107,   366,   367,   107,   107,   107,   325,
   332,   961,   193,   620,   981,  -566,   496,   982,   626,  -566,
   107,   456,   985,  -565,   985,   740,   107,  -565,   195,   363,
   953,   954,   332,   962,  1018,  1019,   365,   627,  1153,   963,
  1143,  1157,  1144,  -609,   951,   952,   495,  -609,    76,    77,
   123,   364,    79,    80,     2,  1159,  1160,  -281,  1145,   472,
   955,   956,   957,   958,  1020,  1021,   435,   959,   960,   420,
  -567,   199,   195,   493,  -567,   411,   412,  -657,  1022,   199,
   195,   199,   452,  -587,   195,  1005,   195,  -587,   108,   403,
   404,   460,   462,   464,     2,   624,  1161,   452,  1162,  1153,
  -661,   666,   477,  1114,   456,   108,  -564,   414,   223,   798,
  -564,   326,   420,  1198,  1163,   195,   867,   680,   681,   736,
  -658,  -389,   696,  -389,   323,   199,   411,   412,    76,    77,
   123,  -389,    79,    80,    76,  1029,  -280,  1152,   495,   325,
   737,   407,   408,   626,   199,   738,   733,   415,   456,   193,
   199,   107,   413,  -602,   107,   409,   410,  -602,   708,   709,
   555,   556,   732,   346,   107,   346,   107,  1002,   107,   420,
  1003,  -603,   416,   925,   734,  -603,   107,   735,   423,   107,
   995,   405,   406,   107,  -280,   420,   495,   772,   332,   929,
   293,   494,   194,   982,     2,   779,   298,   781,   300,   405,
   406,   787,   788,    76,    77,   123,   792,    79,    80,  -604,
   612,   799,  -494,  -604,   199,  -596,   496,   293,   798,  -596,
  1092,  -598,   927,   107,   107,  -598,   801,   424,   400,   401,
   402,   497,   403,   404,  -660,   346,   108,   405,   406,   108,
   305,   306,   307,    76,    77,   123,  1033,    79,    80,   594,
  -280,   108,   625,   108,   821,   822,   823,   824,   825,   826,
   430,   326,   199,   199,   609,  1059,  1150,  1100,   614,  1101,
  1065,   431,   182,   211,   211,   199,  -599,   436,   199,   199,
  -599,  1168,   853,   854,  -280,  1102,   495,   403,   404,  1091,
   889,   676,   677,  1072,     2,  1093,   855,   856,   189,   220,
   220,   494,  -659,   384,  1104,   385,   107,  -389,   639,   640,
   420,   710,  1182,  1143,   195,  1144,   440,  -581,   441,   917,
   799,  -581,   626,  -389,  -586,   454,   386,   387,  -586,   194,
   448,  1145,   445,  1125,  1126,   801,  1127,  1203,  1193,  1161,
   469,  1162,   446,    76,    77,   123,  -595,    79,    80,   918,
  -595,   199,   199,   293,  -585,   760,  1103,  1163,  -585,   400,
   401,   402,   199,   199,   466,   199,   274,   275,   276,   277,
   278,   279,   280,   281,   282,   283,  1113,  -584,   107,   982,
   107,  -584,  1165,   948,   949,   950,  -583,   849,   850,   107,
  -583,   326,   107,   107,   199,   293,  -606,   468,  1164,   299,
  -606,   302,   182,   304,   474,   308,   485,   760,  1017,   491,
   310,   983,   407,   408,   500,  -582,   851,   852,   990,  -582,
   318,  1036,   319,  1037,   501,   427,   409,   410,   189,  -579,
   899,   677,  1061,  -579,  1038,  1039,   502,  1040,  1201,  1041,
  1042,   857,   858,    76,    77,   123,   182,    79,    80,  -580,
   504,   195,  1043,  -580,   182,  -576,   505,   692,   182,  -576,
   182,   506,  -577,   594,   388,   594,  -577,  1006,   211,   199,
   991,   992,   189,   211,   794,   211,   507,   614,   108,   508,
   189,  -568,   513,   309,   189,  -568,   189,   211,   211,   182,
   420,  1075,  -571,   636,   220,   434,  -571,  1008,   564,   220,
  1046,   220,   107,    95,   565,    76,    77,   123,  1052,    79,
    80,   567,   107,   220,   220,   189,   503,    76,  1095,   799,
   568,  1068,   332,   569,   582,   580,   456,  -607,   584,  1073,
  1074,  -607,  -591,   601,  1066,  -592,  -591,   452,  1177,  -592,
   520,  1179,  1180,   407,   408,   524,   525,   526,   527,   528,
   529,   530,   531,   532,   533,   534,   586,   409,   410,   830,
  -593,   831,   585,  -389,  -593,   602,    95,  -589,  1115,  1117,
  -572,  -589,  -280,  -570,  -572,   589,   554,  -570,   332,  -389,
  -574,   452,   832,   833,  -574,   799,  -575,   108,   595,  -573,
  -575,   604,   450,  -573,   611,   610,   453,   924,   870,   871,
   872,   615,   420,   512,   873,   874,   875,   876,   877,   878,
   879,   515,   619,   516,   465,   623,   634,   467,   892,   629,
   635,   892,   389,   631,   652,   475,   667,   632,   478,   400,
   401,   402,  1167,   331,   655,    95,   107,   107,  1171,   656,
  1052,   846,   847,   848,   658,   670,   331,   331,   331,   331,
   331,   331,   672,   358,   359,   835,   390,   391,   392,   393,
   394,   395,   396,   397,   398,   399,   673,   675,   760,   870,
   871,   872,   678,   517,   688,  1034,   909,   910,   911,  1139,
  1140,  1141,   575,   690,   693,   107,   701,   695,   182,   836,
   837,   838,   839,   840,   841,   842,   843,   844,   845,  1034,
   705,   107,   704,   774,   107,   777,   770,   211,   783,   789,
   805,   791,   807,   829,   189,   808,   811,  1090,   812,  1209,
   859,  1010,  1011,   816,   817,   862,   865,  1097,  1034,  1034,
  1213,   903,   907,   220,   861,   860,  1111,   916,   892,   921,
   892,   892,   892,   922,   926,   928,   575,   930,   107,   478,
   967,   968,   -52,  1004,   -49,  1007,   583,  1016,  1116,  1048,
  1060,   588,  1070,   591,   180,  1076,  1119,   107,  1120,  1122,
   108,   600,  1105,  1172,  1146,   605,  1128,  1090,  1090,  1090,
  1130,  1170,  1173,   871,  1192,  1090,   108,  1205,  1124,  1069,
  1137,  1147,   707,  1149,  1158,   575,  1178,  1199,  1206,  1207,
  1208,  1034,   107,   107,  1034,  1210,  1212,  1111,  1111,  1215,
   575,   665,  1216,  1111,   285,   476,   887,   107,   873,   874,
   875,   876,   877,   878,   879,   182,   979,  1062,  1148,  1094,
   975,   999,   892,   108,   892,  1195,  1090,   785,   185,   217,
   217,  1064,  1166,  1090,   669,   107,   107,  1090,   909,   910,
   911,   189,   108,   933,   873,   874,   875,   876,   877,   878,
   879,  1169,  1034,   107,   107,  1111,   782,   598,   780,   797,
   919,   311,   498,   331,   227,   443,  1129,   633,   561,  1013,
   583,   814,  1090,   665,   714,     0,     0,  1155,  1156,     0,
     0,     0,   344,     0,   345,   665,     0,     0,     0,     0,
     0,     0,   108,     0,     0,   478,     0,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,     0,   697,     0,   804,     0,     0,   702,
  1187,  1188,     0,     0,     0,   186,   218,   218,   180,     0,
   785,     0,     0,   785,     0,     0,   180,     0,  1196,  1197,
   180,     0,   180,     0,   331,     0,     0,   762,     0,     0,
   432,   187,   219,   219,     0,     0,     0,     0,   185,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   180,     0,     0,     0,   931,   520,     0,     0,     0,
     0,   937,   938,   939,   940,   941,   942,   943,   944,   945,
   946,   947,   331,     0,     0,     0,     0,   331,     0,     0,
     0,     0,   185,     0,     0,     0,     0,     0,     0,     0,
   185,     0,     0,     0,   185,     0,   185,     0,     0,     0,
   834,     0,     0,     0,   217,     0,     0,     0,     0,   217,
     0,   217,     0,     0,     0,   785,     0,     0,     0,     0,
     0,     0,     0,   217,   217,   185,     0,     0,   331,     0,
   331,     0,   645,   647,     0,   186,     0,     0,     0,     0,
     0,     0,     0,     0,   196,   225,   225,     0,     0,     0,
     0,     0,     0,     0,   483,     0,     0,     0,     0,     0,
   904,   187,   486,   487,   488,   489,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   186,
   331,     0,     0,   483,     0,     0,     0,   186,     0,     0,
     0,   186,     0,   186,   483,     0,     0,   198,   226,   226,
     0,   218,   331,     0,     0,   187,   218,     0,   218,     0,
     0,   521,     0,   187,     0,     0,     0,   187,   785,   187,
   218,   218,   186,     0,     0,     0,     0,   219,     0,     0,
     0,   730,   219,     0,   219,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   219,   219,   187,     0,
   180,     0,     0,     0,     0,   976,   977,   566,     0,     0,
     0,     0,     0,   984,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   196,     0,     0,     0,     0,     0,
     0,     0,     0,   730,     0,     0,     0,  1000,     0,     0,
     0,     0,     0,     0,   331,   331,   331,   331,   331,   331,
   827,   828,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   196,     0,
     0,     0,     0,     0,   185,     0,   196,   198,     0,     0,
   196,     0,   196,     0,     0,     0,     0,     0,     0,     0,
   225,     0,     0,   217,     0,   225,     0,   225,     0,     0,
     0,     0,     0,  1047,     0,     0,     0,     0,   331,   225,
   225,   196,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   198,     0,     0,     0,     0,     0,     0,   642,   198,
     0,     0,     0,   198,     0,   198,     0,   180,     0,     0,
     0,     0,   331,   226,     0,     0,     0,     0,   226,     0,
   226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   226,   226,   198,     0,     0,     0,     0,     0,
     0,   186,  1118,   331,   331,   331,   331,   331,   331,   331,
   331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
   218,   331,     0,     0,     0,   489,     0,   187,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   185,     0,     0,     0,     0,   219,     0,     0,     0,
   483,     0,   483,     0,     0,     0,     0,     0,   715,     0,
   201,   761,     0,     0,     0,   126,   127,   128,     0,     0,
   202,   131,   132,   133,   134,   135,   136,   203,  -468,  -468,
     0,     0,     0,   204,  -468,     0,     0,   331,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,  -280,  -280,     0,     0,   145,   146,   147,     0,     0,
     0,   813,     0,     0,     0,     0,     0,     0,     0,     0,
  1202,     0,   819,     0,   730,     0,     0,     0,     0,   148,
     0,     0,     0,     0,     0,     0,     0,     0,   186,     0,
   196,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -468,   150,   151,   152,   153,   154,   155,     0,   225,
     0,     0,     0,     0,   187,     0,   156,   343,     0,     0,
   157,     0,     0,   328,     0,     0,     0,     0,   139,   140,
   141,   142,   143,   144,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   198,     0,   145,   146,   147,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   226,     0,     0,     0,     0,     0,     0,   148,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    -1,     1,     0,     0,   934,     0,     0,
     0,     0,    76,   158,   159,   160,   205,   206,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  -280,     0,     0,
   157,     0,     0,     0,     0,     0,     0,     2,     0,     0,
     0,     0,   331,     0,     0,     0,     0,   196,     3,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   331,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  -389,  -389,  -389,     0,     4,     0,     0,     0,     5,     6,
     7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     8,     9,    10,     0,   489,     0,   331,     0,
   198,     0,    76,   329,   330,   160,     0,     0,     0,     0,
     0,    11,    12,    13,     0,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,  1012,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    -2,
     1,     0,     0,     0,     0,     0,    76,    77,    78,     0,
    79,    80,    81,  -262,     0,     0,     0,     0,     0,   328,
     0,     0,     0,  -280,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
     0,   145,   146,   147,     3,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   148,  -389,  -389,  -389,     0,
     4,     0,     0,     0,     5,     6,     7,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     8,     9,
    10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   157,    11,    12,    13,
     0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,     0,     0,     0,    76,   329,
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
     0,     0,     0,     0,     0,     0,     0,    76,   158,   559,
   160,   161,    80,    81,   125,     0,     0,     0,     0,   126,
   127,   128,     0,   129,   130,   131,   132,   133,   134,   135,
   136,   137,  -520,     0,     0,     0,     0,   138,     0,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,     0,     0,  -280,  -280,     0,     0,   145,
   146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  -280,  -280,  -280,   148,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   150,   151,   152,   153,
   154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
   156,  -280,  -280,  -280,   157,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,     0,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,     0,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,     0,
     0,     0,     0,     0,     0,     0,    76,   158,   159,   160,
   161,    80,  -280,   201,     0,     0,     0,     0,   126,   127,
   128,     0,     0,   202,   131,   132,   133,   134,   135,   136,
   203,  -520,  -524,     0,     0,     0,   204,     0,     0,     0,
     0,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,     0,     0,     0,  -280,  -280,     0,     0,   145,   146,
   147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  -280,
  -280,  -280,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   150,   151,   152,   153,   154,
   155,     0,     0,     0,     0,     0,     0,     0,     0,   156,
  -280,  -280,  -280,   157,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,     0,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
     0,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,     0,     0,
     0,     0,     0,     0,     0,    76,   158,   159,   160,   205,
   206,  -280,   125,     0,     0,     0,     0,   126,   127,   128,
     0,   129,   130,   131,   132,   133,   134,   135,   136,   137,
  -520,     0,     0,     0,     0,   138,     0,     0,     0,     0,
   139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
     0,     0,     0,  -280,  -280,   125,     0,   145,   146,   147,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   137,  -520,     0,     0,     0,     0,   138,     0,
     0,   148,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -280,  -280,     0,     0,
   145,   146,   147,   149,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
     0,     0,   157,     0,   148,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,  -495,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    76,   158,   159,   160,   161,    80,
     0,     0,   201,     0,     0,     0,     0,   126,   127,   128,
     0,     0,   202,   131,   132,   133,   134,   135,   136,   203,
  -520,  -524,     0,     0,     0,   204,     0,     0,     0,     0,
   139,   140,   141,   142,   143,   144,     0,    76,   158,   159,
   160,   161,    80,  -280,  -280,   125,     0,   145,   146,   147,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   137,  -520,   648,     0,     0,     0,   138,     0,
     0,   148,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -280,  -280,     0,     0,
   145,   146,   147,  -464,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
     0,     0,   157,     0,   148,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    76,   158,   159,   160,   205,   206,
     0,     0,   201,     0,     0,     0,     0,   126,   127,   128,
     0,     0,   202,   131,   132,   133,   134,   135,   136,   203,
  -520,  -524,     0,     0,     0,   204,     0,     0,     0,     0,
   139,   140,   141,   142,   143,   144,     0,    76,   158,   159,
   160,   161,    80,  -280,  -280,   125,     0,   145,   146,   147,
   126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
   135,   136,   137,  -520,     0,     0,     0,     0,   138,     0,
     0,   148,     0,   139,   140,   141,   142,   143,   144,     0,
     0,     0,     0,     0,     0,     0,  -280,  -280,     0,     0,
   145,   146,   147,     0,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
     0,     0,   157,     0,   148,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
   153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     0,   156,     0,     0,     0,   157,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    76,   158,   159,   160,   205,   206,
     0,     0,     0,     0,     0,     0,     0,   126,   127,   128,
     0,   129,   130,   131,   132,   133,   134,   135,   136,   203,
  -520,   573,     0,     0,     0,   368,     0,     0,     0,     0,
   139,   140,   141,   142,   143,   144,     0,    76,   158,   159,
   160,   161,    80,  -280,  -280,     0,     3,   145,   146,   147,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   148,     4,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   574,    11,
    12,    13,   157,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,     0,     0,     0,
     0,     0,     0,     0,    76,   158,   559,   160,   161,    80,
    81,   126,   127,   128,     0,   129,   130,   131,   132,   133,
   134,   135,   136,   203,  -520,   649,     0,     0,     0,   368,
     0,     0,     0,     0,   139,   140,   141,   142,   143,   144,
     0,     0,     0,     0,     0,     0,     0,  -280,  -280,     0,
     3,   145,   146,   147,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   148,     4,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   150,   151,
   152,   153,   154,   155,     0,     0,     0,     0,     0,     0,
     0,     0,   156,    11,    12,    13,   157,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,     0,     0,     0,     0,     0,     0,     0,    76,   158,
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
     0,     0,    76,   158,   559,   160,   161,    80,    81,   126,
   127,   128,     0,   129,   130,   131,   132,   133,   134,   135,
   136,   203,  -520,   659,     0,     0,     0,   368,     0,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   145,
   146,   147,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   203,  -520,   663,     0,     0,     0,
   368,     0,     0,   148,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   145,   146,   147,     0,   150,   151,   152,   153,
   154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
   156,     0,     0,     0,   157,     0,   148,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   664,   126,   127,   128,   157,   129,   130,
   131,   132,   133,   134,   135,   136,   203,  -520,   713,     0,
     0,     0,   368,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,    76,   158,   159,   160,
   161,    80,     0,     0,   145,   146,   147,   126,   127,   128,
     0,   129,   130,   131,   132,   133,   134,   135,   136,   203,
  -520,   766,     0,     0,     0,   368,     0,     0,   148,     0,
   139,   140,   141,   142,   143,   144,     0,     0,     0,    76,
   158,   159,   160,   161,    80,     0,     0,   145,   146,   147,
     0,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   156,     0,     0,     0,   157,
     0,   148,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   150,   151,   152,   153,   154,   155,
     0,     0,     0,     0,     0,     0,     0,     0,   156,   126,
   127,   128,   157,   129,   130,   131,   132,   133,   134,   135,
   136,   203,  -520,   767,     0,     0,     0,   368,     0,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,    76,   158,   159,   160,   161,    80,     0,     0,   145,
   146,   147,   126,   127,   128,     0,   129,   130,   131,   132,
   133,   134,   135,   136,   203,  -520,   769,     0,     0,     0,
   368,     0,     0,   148,     0,   139,   140,   141,   142,   143,
   144,     0,     0,     0,    76,   158,   159,   160,   161,    80,
     0,     0,   145,   146,   147,     0,   150,   151,   152,   153,
   154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
   768,     0,     0,     0,   157,     0,   148,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   150,
   151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
     0,     0,     0,   156,   126,   127,   128,   157,   129,   130,
   131,   132,   133,   134,   135,   136,   203,  -520,   888,     0,
     0,     0,   368,     0,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,    76,   158,   159,   160,
   161,    80,     0,     0,   145,   146,   147,   126,   127,   128,
     0,   129,   130,   131,   132,   133,   134,   135,   136,   203,
  -520,     0,     0,     0,     0,   368,     0,     0,   148,     0,
   139,   140,   141,   142,   143,   144,     0,     0,     0,    76,
   158,   159,   160,   161,    80,     0,     0,   145,   146,   147,
     0,   150,   151,   152,   153,   154,   155,     0,     0,     0,
     0,     0,     0,     0,     0,   156,     0,     0,     0,   157,
     0,   148,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   150,   151,   152,   153,   154,   155,
   293,     0,     0,     0,     0,     0,     0,     0,   156,     0,
     0,     0,   157,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    76,   158,   159,   160,   161,    80,     0,     0,  -389,
  -389,  -389,     0,     4,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    76,   158,   159,   160,   161,    80,
    11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,   293,     0,
     0,     0,     0,     0,     0,     0,     0,   120,     0,     0,
     0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     3,   784,  1057,     0,     0,
     0,   328,     0,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     4,     0,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  -654,     0,
     0,     0,     0,     0,     0,     0,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
    13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,   157,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,  -146,     0,     0,     0,
     0,  -146,     0,     0,     0,   120,     0,     0,     0,    81,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
    76,   329,   330,   160,     0,     0,     0,     0,     0,     0,
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
    73,    74,    75,   288,     0,     0,     0,     0,     0,     0,
     0,     0,   120,     0,     0,     0,    81,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  -523,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    11,    12,    13,     0,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,     0,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
    11,    12,    13,    81,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,  -661,     0,
     0,     0,     0,     0,     0,     0,     0,   120,     0,     0,
     0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,  -520,     0,     0,     0,     0,   368,     0,     0,
     0,     0,   139,   140,   141,   142,   143,   144,     0,     0,
     0,     0,     0,  -663,  -663,  -663,     0,     0,     0,   145,
   146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -663,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   148,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,  -663,  -663,  -663,     0,  -663,  -663,
  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,     0,  -663,
  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
  -663,  -663,  -663,  -663,   157,  -663,  -663,  -663,  -663,  -663,
  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,  -663,
  -663,  -663,     0,     0,     0,     0,   784,     0,     0,     0,
     0,   328,     0,     0,     0,  -663,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   146,   147,    76,   329,   330,   160,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  -280,     0,     0,     0,     0,     0,     0,     0,   157,     0,
     2,   328,   518,     0,     0,     0,   139,   140,   141,   142,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   148,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    76,   329,   330,   160,    11,    12,    13,     0,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,   157,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,     0,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,     0,     0,     0,     0,     0,     0,     0,    76,
    77,    78,     0,    79,    80,    81,     0,     0,     0,     0,
    76,   329,   330,   160,   328,     0,     0,   621,     0,   139,
   140,   141,   142,   143,   144,   328,     0,     0,   699,     0,
   139,   140,   141,   142,   143,   144,   145,   146,   147,     0,
     0,     0,     0,     0,     0,   328,   932,   145,   146,   147,
   139,   140,   141,   142,   143,   144,   328,  -262,     0,     0,
   148,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     0,   148,     0,     0,     0,     0,   328,     0,   145,   146,
   147,   139,   140,   141,   142,   143,   144,     0,     0,     0,
     0,   148,     0,     0,     0,     0,     0,     0,   145,   146,
   147,   157,   148,     0,     0,     0,     0,     0,     0,     0,
     0,   357,   157,     0,     0,     0,   139,   140,   141,   142,
   143,   144,   148,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   157,   145,   146,   147,     0,     0,     0,     0,
     0,     0,   644,   157,     0,     0,     0,   139,   140,   141,
   142,   143,   144,     0,     0,     0,     0,   148,     0,     0,
     0,     0,     0,   157,   145,   146,   147,     0,     0,     0,
     0,     0,     0,    76,   329,   330,   160,     0,     0,     0,
     0,     0,     0,     0,    76,   329,   330,   160,   148,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
     0,     0,     0,   646,    76,   329,   330,   160,   139,   140,
   141,   142,   143,   144,     0,    76,   329,   330,   160,     0,
     0,     0,     0,     0,     0,   145,   146,   147,     0,   157,
     0,     0,     0,     0,   716,    76,   329,   330,   160,   717,
   718,   719,   720,   721,   722,     0,     0,     0,     0,   148,
     0,     0,     0,     0,     0,     0,   145,   723,   724,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    76,   329,   330,   160,     0,     0,     0,     0,     0,     0,
   725,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    76,   329,   330,   160,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  -206,  -206,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    76,   329,   330,   160,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    76,   726,   727,   728,    11,    12,    13,
     0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,     0,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,     0,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,     3,     0,     0,     0,     0,
     0,     0,     0,     0,   120,     0,     0,     0,    81,     0,
     0,     0,     0,     0,     0,     0,     0,  -389,  -389,  -389,
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
    70,    71,    72,    73,    74,    75,     3,     0,     0,     0,
     0,     0,     0,     0,     0,   120,     0,     0,     0,    81,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     4,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
    12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,     0,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,  -389,  -389,  -389,
     0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
    81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
    13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,     0,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,     0,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,     8,     9,    10,     0,
     0,     0,     0,     0,     0,   120,     0,     0,     0,    81,
     0,     0,     0,     0,     0,    11,    12,    13,     0,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,     0,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   120,    11,    12,    13,    81,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   120,     0,     0,     0,    81
};

static const short yycheck[] = {     0,
     0,   465,     3,   106,     0,    89,   497,   368,   619,     8,
    11,    12,   366,   126,     9,    10,     2,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    27,   551,   413,   623,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,   405,   406,   654,   414,    19,   303,
   654,   654,   320,   415,    75,   448,     8,    22,   403,   404,
   784,    82,    82,   787,   790,   475,    82,   764,    24,    34,
   451,   553,   322,   447,   407,   408,   409,   410,    34,   100,
     5,   411,   412,   776,   796,   106,   204,    18,   902,  1126,
    21,   209,    23,   211,   896,   116,   117,   118,   706,   674,
    25,   122,   706,   706,   701,   223,     5,   113,     0,    18,
  1147,   215,  1149,    28,    21,    24,   122,   138,    25,   138,
    24,   495,    49,    50,   145,    34,    25,   654,  1077,    44,
    34,    41,    39,     5,     9,    10,   139,   140,   141,   142,
   143,   144,    86,    87,    28,    21,    56,    34,    26,  1077,
  1078,    27,    24,    25,    26,    26,    34,    28,    86,    87,
    44,     0,    34,   182,     3,   889,   980,    18,     7,     8,
     9,    10,   654,    44,   886,   194,    41,   196,    24,   706,
   906,   692,   186,   204,   881,   987,   138,   989,    34,   204,
    82,    56,    24,  1142,   209,   605,   211,  1146,    85,   580,
   775,    21,   895,   778,   897,    25,   225,  1135,   223,   224,
   562,   604,   183,   184,   185,    85,   187,   188,   183,   184,
   185,    24,   187,   188,   706,   577,   476,   183,   184,   603,
   182,    34,  1181,   366,     5,    24,     8,    26,   190,   183,
   184,    21,   194,    82,   196,    34,     0,    27,   502,     3,
    18,   625,    18,     7,    25,   183,   184,    23,   183,   184,
   185,    24,   187,   188,    27,   286,   654,   106,   992,    21,
   291,    34,   292,   225,   183,   184,    24,     5,    26,   183,
   184,   302,   303,   122,   305,   306,   302,   654,    18,   920,
   801,    21,   654,   654,   133,    25,   183,   184,   319,   138,
   187,   188,    21,   319,   325,     0,    25,   328,     3,   654,
     5,   183,   184,   185,   447,   187,   188,   156,   706,   916,
   424,   654,    24,    21,   654,   443,   347,    25,    82,   204,
     5,   585,   600,    24,   209,   862,   211,   183,   184,   706,
    24,   347,    21,   182,   706,   706,    25,   368,   223,   224,
    29,   190,   106,   192,    24,   194,    21,   196,     8,   967,
    25,   706,   495,   967,   967,   204,   138,    21,   122,    24,
   209,    25,   211,   706,    34,   629,   706,   180,   181,   133,
   183,   184,   864,   186,   223,   224,   225,    82,   893,    21,
   644,   896,   646,    25,    18,    49,    50,   400,   401,   402,
  1076,    96,    97,    18,    99,   424,    21,   781,  1084,    18,
   182,    21,   183,   184,   185,    25,   187,   188,   190,   439,
   183,   184,   194,   186,   196,  1027,  1028,   122,   443,   450,
    25,    26,   453,    18,   450,    24,    21,   453,    27,   460,
   967,   462,    24,   464,   465,    34,   467,    18,   108,   109,
    21,   472,    16,   225,   475,   183,   184,   185,    16,   187,
   188,   482,   716,   302,     6,     7,   305,   306,   307,   475,
   603,   859,   424,   494,    18,    21,   497,    21,   499,    25,
   319,   502,   987,    21,   989,   967,   325,    25,   138,    16,
   851,   852,   625,   860,    86,    87,    15,   500,  1100,   861,
    26,  1103,    28,    21,   849,   850,    26,    25,   183,   184,
   185,    16,   187,   188,    34,  1106,  1107,    24,    44,    26,
   853,   854,   855,   856,   116,   117,    18,   857,   858,    21,
    21,   370,   182,    25,    25,    53,    54,    22,   130,   378,
   190,   380,   562,    21,   194,   926,   196,    25,   302,    32,
    33,   305,   306,   307,    34,  1066,    26,   577,    28,  1161,
    22,   582,     5,  1047,   585,   319,    21,    39,   443,   692,
    25,   325,    21,  1164,    44,   225,    25,   598,   599,   967,
    22,    24,    25,    26,   605,   424,    53,    54,   183,   184,
   185,    34,   187,   188,   183,   184,    24,   186,    26,   605,
   967,    37,    38,   624,   443,   967,   967,    40,   629,   561,
   449,   450,    29,    21,   453,    51,    52,    25,   639,   640,
    42,    43,   967,   644,   463,   646,   465,    25,   467,    21,
    28,    21,    55,    25,   967,    25,   475,   967,    92,   478,
   908,    49,    50,   482,    24,    21,    26,   668,   781,    25,
    18,   346,   424,    21,    34,   676,    97,   678,    99,    49,
    50,   682,   683,   183,   184,   185,   687,   187,   188,    21,
   691,   692,    92,    25,   513,    21,   697,    18,   801,    25,
    21,    21,   815,   522,   523,    25,   692,    19,    34,    35,
    36,   697,    32,    33,    22,   716,   450,    49,    50,   453,
    67,    68,    69,   183,   184,   185,   974,   187,   188,   463,
    24,   465,    26,   467,   717,   718,   719,   720,   721,   722,
    22,   475,   561,   562,   478,   993,    25,    26,   482,    28,
   998,    24,     8,     9,    10,   574,    21,    92,   577,   578,
    25,  1115,    37,    38,    24,    44,    26,    32,    33,  1017,
   771,    20,    21,  1007,    34,  1023,    51,    52,     8,     9,
    10,   456,    22,    24,  1032,    26,   605,    28,   522,   523,
    21,    22,    25,    26,   424,    28,    19,    21,    20,   800,
   801,    25,   803,    44,    21,    18,    47,    48,    25,   561,
    24,    44,    92,  1061,  1062,   801,  1064,  1171,    25,    26,
    23,    28,    27,   183,   184,   185,    21,   187,   188,   189,
    25,   650,   651,    18,    21,   654,    21,    44,    25,    34,
    35,    36,   661,   662,    18,   664,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    18,    21,   677,    21,
   679,    25,  1110,   846,   847,   848,    21,    32,    33,   688,
    25,   605,   691,   692,   693,    18,    21,    18,    21,    98,
    25,   100,   138,   102,    24,   104,    22,   706,   972,    18,
   109,   892,    37,    38,    25,    21,    49,    50,   899,    25,
   119,   119,   121,   121,    25,   192,    51,    52,   138,    21,
    20,    21,   996,    25,   132,   133,    24,   135,  1166,   137,
   138,    53,    54,   183,   184,   185,   182,   187,   188,    21,
    18,   561,   150,    25,   190,    21,    18,   612,   194,    25,
   196,    18,    21,   677,   163,   679,    25,   930,   204,   768,
    20,    21,   182,   209,   688,   211,    18,   691,   692,    18,
   190,    21,    19,  1066,   194,    25,   196,   223,   224,   225,
    21,    22,    21,    21,   204,   205,    25,    25,     9,   209,
   981,   211,   801,   984,    11,   183,   184,   185,   984,   187,
   188,    25,   811,   223,   224,   225,   360,   183,   184,  1000,
    24,  1002,  1115,    11,  1000,    24,  1007,    21,    88,  1010,
  1011,    25,    21,    88,  1000,    21,    25,  1017,  1131,    25,
   384,    32,    33,    37,    38,   389,   390,   391,   392,   393,
   394,   395,   396,   397,   398,   399,    19,    51,    52,    24,
    21,    26,    21,    28,    25,    27,  1047,    21,  1049,  1050,
    21,    25,    19,    21,    25,    19,   420,    25,  1171,    44,
    21,  1061,    47,    48,    25,  1066,    21,   801,    19,    21,
    25,    24,   291,    25,    21,    25,   295,   811,    72,    73,
    74,    22,    21,   370,    78,    79,    80,    81,    82,    83,
    84,   378,    18,   380,   313,    24,    11,   316,   773,    21,
    24,   776,    23,    22,    24,   324,    23,    25,   327,    34,
    35,    36,  1113,   126,    24,  1116,   935,   936,  1119,    27,
  1116,    34,    35,    36,    25,    20,   139,   140,   141,   142,
   143,   144,    19,   146,   147,    23,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    20,    19,   967,    72,
    73,    74,    23,   383,    21,   974,    72,    73,    74,    51,
    52,    53,   449,     5,    25,   984,    24,    27,   424,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,   998,
    24,  1000,    22,    20,  1003,    20,    25,   443,    18,    27,
    18,    25,    25,    24,   424,    27,    21,  1016,    25,  1200,
    29,   935,   936,    25,    25,    55,    25,  1026,  1027,  1028,
  1211,    88,    25,   443,    40,    39,  1035,    24,   893,    25,
   895,   896,   897,    25,    25,    18,   513,    25,  1047,   448,
    21,    18,   177,    18,   178,    21,   455,   177,    21,    18,
    88,   460,   188,   462,     8,   178,    22,  1066,    20,    20,
   984,   470,    88,    20,    24,   474,    25,  1076,  1077,  1078,
    25,    18,    20,    73,    27,  1084,  1000,    18,    88,  1003,
    88,    88,   636,    88,    88,   562,    88,    88,    27,    25,
    27,  1100,  1101,  1102,  1103,    88,    25,  1106,  1107,     0,
   577,   578,     0,  1112,    82,   325,   765,  1116,    78,    79,
    80,    81,    82,    83,    84,   561,   887,   997,  1092,  1025,
   881,   913,   987,  1047,   989,  1161,  1135,   681,     8,     9,
    10,   998,  1112,  1142,   585,  1144,  1145,  1146,    72,    73,
    74,   561,  1066,   830,    78,    79,    80,    81,    82,    83,
    84,  1116,  1161,  1162,  1163,  1164,   679,   467,   677,   691,
   801,   113,   347,   366,    10,   224,  1071,   513,   424,   967,
   579,   706,  1181,   650,   651,    -1,    -1,  1101,  1102,    -1,
    -1,    -1,   136,    -1,   138,   662,    -1,    -1,    -1,    -1,
    -1,    -1,  1116,    -1,    -1,   604,    -1,   400,   401,   402,
   403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
   413,   414,   415,    -1,   623,    -1,   693,    -1,    -1,   628,
  1144,  1145,    -1,    -1,    -1,     8,     9,    10,   182,    -1,
   784,    -1,    -1,   787,    -1,    -1,   190,    -1,  1162,  1163,
   194,    -1,   196,    -1,   447,    -1,    -1,   656,    -1,    -1,
   204,     8,     9,    10,    -1,    -1,    -1,    -1,   138,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   225,    -1,    -1,    -1,   829,   830,    -1,    -1,    -1,
    -1,   835,   836,   837,   838,   839,   840,   841,   842,   843,
   844,   845,   495,    -1,    -1,    -1,    -1,   500,    -1,    -1,
    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   190,    -1,    -1,    -1,   194,    -1,   196,    -1,    -1,    -1,
   729,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,   209,
    -1,   211,    -1,    -1,    -1,   889,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   223,   224,   225,    -1,    -1,   551,    -1,
   553,    -1,   555,   556,    -1,   138,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,    -1,    -1,
   789,   138,   336,   337,   338,   339,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,
   603,    -1,    -1,   357,    -1,    -1,    -1,   190,    -1,    -1,
    -1,   194,    -1,   196,   368,    -1,    -1,     8,     9,    10,
    -1,   204,   625,    -1,    -1,   182,   209,    -1,   211,    -1,
    -1,   385,    -1,   190,    -1,    -1,    -1,   194,   992,   196,
   223,   224,   225,    -1,    -1,    -1,    -1,   204,    -1,    -1,
    -1,   654,   209,    -1,   211,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   223,   224,   225,    -1,
   424,    -1,    -1,    -1,    -1,   884,   885,   431,    -1,    -1,
    -1,    -1,    -1,   892,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   706,    -1,    -1,    -1,   916,    -1,    -1,
    -1,    -1,    -1,    -1,   717,   718,   719,   720,   721,   722,
   723,   724,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
    -1,    -1,    -1,    -1,   424,    -1,   190,   138,    -1,    -1,
   194,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   204,    -1,    -1,   443,    -1,   209,    -1,   211,    -1,    -1,
    -1,    -1,    -1,   982,    -1,    -1,    -1,    -1,   781,   223,
   224,   225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,   552,   190,
    -1,    -1,    -1,   194,    -1,   196,    -1,   561,    -1,    -1,
    -1,    -1,   815,   204,    -1,    -1,    -1,    -1,   209,    -1,
   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   223,   224,   225,    -1,    -1,    -1,    -1,    -1,
    -1,   424,  1051,   846,   847,   848,   849,   850,   851,   852,
   853,   854,   855,   856,   857,   858,   859,   860,   861,   862,
   443,   864,    -1,    -1,    -1,   619,    -1,   424,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   561,    -1,    -1,    -1,    -1,   443,    -1,    -1,    -1,
   644,    -1,   646,    -1,    -1,    -1,    -1,    -1,   652,    -1,
     1,   655,    -1,    -1,    -1,     6,     7,     8,    -1,    -1,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    24,    25,    -1,    -1,   930,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    42,    43,    -1,    -1,    46,    47,    48,    -1,    -1,
    -1,   705,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
  1169,    -1,   716,    -1,   967,    -1,    -1,    -1,    -1,    70,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   561,    -1,
   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    92,    93,    94,    95,    96,    97,    98,    -1,   443,
    -1,    -1,    -1,    -1,   561,    -1,   107,    18,    -1,    -1,
   111,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   424,    -1,    46,    47,    48,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   443,    -1,    -1,    -1,    -1,    -1,    -1,    70,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,     0,     1,    -1,    -1,   831,    -1,    -1,
    -1,    -1,   183,   184,   185,   186,   187,   188,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
    -1,    -1,  1115,    -1,    -1,    -1,    -1,   561,    45,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1131,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    67,    68,    69,    -1,    71,    -1,    -1,    -1,    75,    76,
    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    89,    90,    91,    -1,   920,    -1,  1171,    -1,
   561,    -1,   183,   184,   185,   186,    -1,    -1,    -1,    -1,
    -1,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,   965,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
     1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,    -1,
   187,   188,   189,    18,    -1,    -1,    -1,    -1,    -1,    24,
    -1,    -1,    -1,    24,    29,    30,    31,    32,    33,    34,
    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    46,    47,    48,    45,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    70,    67,    68,    69,    -1,
    71,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   111,   108,   109,   110,
    -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,    -1,    -1,    -1,   183,   184,
   185,   186,   183,   184,   185,     1,   187,   188,   189,    -1,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,
   186,   187,   188,   189,     1,    -1,    -1,    -1,    -1,     6,
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
   167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,
   187,   188,   189,     1,    -1,    -1,    -1,    -1,     6,     7,
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
    -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,
   188,   189,     1,    -1,    -1,    -1,    -1,     6,     7,     8,
    -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    42,    43,     1,    -1,    46,    47,    48,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    -1,
    -1,    70,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
    46,    47,    48,    92,    93,    94,    95,    96,    97,    98,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
    -1,    -1,   111,    -1,    70,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,
    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,     7,     8,
    -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
    29,    30,    31,    32,    33,    34,    -1,   183,   184,   185,
   186,   187,   188,    42,    43,     1,    -1,    46,    47,    48,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
    -1,    70,    -1,    29,    30,    31,    32,    33,    34,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
    46,    47,    48,    92,    93,    94,    95,    96,    97,    98,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
    -1,    -1,   111,    -1,    70,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,
    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,     7,     8,
    -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
    29,    30,    31,    32,    33,    34,    -1,   183,   184,   185,
   186,   187,   188,    42,    43,     1,    -1,    46,    47,    48,
     6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    -1,
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
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
    -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
    29,    30,    31,    32,    33,    34,    -1,   183,   184,   185,
   186,   187,   188,    42,    43,    -1,    45,    46,    47,    48,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,
   109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,
   189,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
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
   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,
   185,   186,   187,   188,   189,     6,     7,     8,    -1,    10,
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
    -1,    -1,   183,   184,   185,   186,   187,   188,   189,     6,
     7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
    47,    48,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    46,    47,    48,    -1,    93,    94,    95,    96,
    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   107,    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,     6,     7,     8,   111,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,   183,   184,   185,   186,
   187,   188,    -1,    -1,    46,    47,    48,     6,     7,     8,
    -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,   183,
   184,   185,   186,   187,   188,    -1,    -1,    46,    47,    48,
    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,
    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,     6,
     7,     8,   111,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,   183,   184,   185,   186,   187,   188,    -1,    -1,    46,
    47,    48,     6,     7,     8,    -1,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    24,    -1,    -1,    70,    -1,    29,    30,    31,    32,    33,
    34,    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,
    -1,    -1,    46,    47,    48,    -1,    93,    94,    95,    96,
    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   107,    -1,    -1,    -1,   111,    -1,    70,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   107,     6,     7,     8,   111,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,   183,   184,   185,   186,
   187,   188,    -1,    -1,    46,    47,    48,     6,     7,     8,
    -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    70,    -1,
    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,   183,
   184,   185,   186,   187,   188,    -1,    -1,    46,    47,    48,
    -1,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,
    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   183,   184,   185,   186,   187,   188,    -1,    -1,    67,
    68,    69,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,   188,
   108,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    18,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    45,    19,    20,    -1,    -1,
    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    71,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,   111,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    19,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    -1,   185,    -1,    -1,    -1,   189,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,    -1,    -1,    -1,    -1,    -1,    -1,
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
   173,   174,   175,    19,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   108,   109,   110,    -1,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,
   108,   109,   110,   189,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
    -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    22,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,
    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    46,
    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,   111,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
    -1,    24,    -1,    -1,    -1,   189,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,   183,   184,   185,   186,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
    34,    24,    25,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,   108,   109,   110,    -1,   112,   113,
   114,   115,   116,   117,   118,   119,   120,   121,   111,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
   184,   185,    -1,   187,   188,   189,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,    24,    -1,    -1,    27,    -1,    29,
    30,    31,    32,    33,    34,    24,    -1,    -1,    27,    -1,
    29,    30,    31,    32,    33,    34,    46,    47,    48,    -1,
    -1,    -1,    -1,    -1,    -1,    24,    25,    46,    47,    48,
    29,    30,    31,    32,    33,    34,    24,    25,    -1,    -1,
    70,    29,    30,    31,    32,    33,    34,    46,    47,    48,
    -1,    70,    -1,    -1,    -1,    -1,    24,    -1,    46,    47,
    48,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
    48,   111,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    24,   111,    -1,    -1,    -1,    29,    30,    31,    32,
    33,    34,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   111,    46,    47,    48,    -1,    -1,    -1,    -1,
    -1,    -1,    24,   111,    -1,    -1,    -1,    29,    30,    31,
    32,    33,    34,    -1,    -1,    -1,    -1,    70,    -1,    -1,
    -1,    -1,    -1,   111,    46,    47,    48,    -1,    -1,    -1,
    -1,    -1,    -1,   183,   184,   185,   186,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   183,   184,   185,   186,    70,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    -1,    -1,    24,   183,   184,   185,   186,    29,    30,
    31,    32,    33,    34,    -1,   183,   184,   185,   186,    -1,
    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,   111,
    -1,    -1,    -1,    -1,    24,   183,   184,   185,   186,    29,
    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    70,
    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   183,   184,   185,   186,    -1,    -1,    -1,    -1,    -1,    -1,
    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   183,   184,   185,   186,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   183,   184,   185,   186,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   183,   184,   185,   186,   108,   109,   110,
    -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,    45,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,   189,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
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
   170,   171,   172,   173,   174,   175,    45,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,   189,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
   109,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,    67,    68,    69,
    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,
   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
   110,    -1,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,    89,    90,    91,    -1,
    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,   189,
    -1,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,   112,
   113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
   123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
   133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   185,   108,   109,   110,   189,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   185,    -1,    -1,    -1,   189
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
#line 337 "cgrammar.y"
{ setImplictfcnConstraints ();
     clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-7].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-7].ntyp), yyvsp[-4].entrylist));
     context_popLoc ();

     //     printf("Done nameDeclBase\n");
   ;
    break;}
case 28:
#line 346 "cgrammar.y"
{ yyval.ntyp = idDecl_create (yyvsp[0].cname, qtype_unknown ()); ;
    break;}
case 29:
#line 348 "cgrammar.y"
{ yyval.ntyp = idDecl_expectFunction (yyvsp[-2].ntyp); ;
    break;}
case 30:
#line 350 "cgrammar.y"
{ yyval.ntyp = idDecl_replaceCtype (yyvsp[-2].ntyp, ctype_makeArray (idDecl_getCtype (yyvsp[-2].ntyp))); ;
    break;}
case 31:
#line 352 "cgrammar.y"
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
#line 368 "cgrammar.y"
{ setCurrentParams (uentryList_missingParams); 
        ;
    break;}
case 33:
#line 371 "cgrammar.y"
{ /* need to support globals and modifies here! */
     ctype ct = ctype_makeFunction (idDecl_getCtype (yyvsp[-5].ntyp), 
				    uentryList_makeMissingParams ());

     yyval.ntyp = idDecl_replaceCtype (yyvsp[-5].ntyp, ct);
     context_popLoc (); 
   ;
    break;}
case 34:
#line 379 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); 
        ;
    break;}
case 35:
#line 382 "cgrammar.y"
{ clearCurrentParams ();
     yyval.ntyp = idDecl_replaceCtype (yyvsp[-6].ntyp, ctype_makeFunction (idDecl_getCtype (yyvsp[-6].ntyp), yyvsp[-3].entrylist));
     context_popLoc (); 
   ;
    break;}
case 36:
#line 389 "cgrammar.y"
{ setCurrentParams (yyvsp[-1].entrylist); ;
    break;}
case 37:
#line 390 "cgrammar.y"
{ clearCurrentParams (); ;
    break;}
case 38:
#line 391 "cgrammar.y"
{ declareCIter (yyvsp[-8].cname, yyvsp[-6].entrylist); ;
    break;}
case 39:
#line 394 "cgrammar.y"
{ exprNode_checkMacroBody (yyvsp[-1].expr); ;
    break;}
case 40:
#line 395 "cgrammar.y"
{ exprNode_checkIterBody (yyvsp[-1].expr); ;
    break;}
case 41:
#line 396 "cgrammar.y"
{ exprNode_checkIterEnd (yyvsp[-1].expr); ;
    break;}
case 42:
#line 397 "cgrammar.y"
{ exprChecks_checkEmptyMacroBody (); ;
    break;}
case 43:
#line 400 "cgrammar.y"
{ declareFunction (yyvsp[0].ntyp); ;
    break;}
case 44:
#line 403 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 45:
#line 404 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 46:
#line 410 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 47:
#line 411 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 49:
#line 419 "cgrammar.y"
{
  DPRINTF ( ("doing optGlobEnsuresConstraintsAux\n") );
context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 

;
    break;}
case 50:
#line 425 "cgrammar.y"
{
  setEnsuresConstraints (yyvsp[-1].conL);
  exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
  DPRINTF (("done optGlobBufConstraintsAux\n"));;
    break;}
case 52:
#line 435 "cgrammar.y"
{
  DPRINTF ( ("doing optGlobBufConstraintsAux\n") );
context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 

;
    break;}
case 53:
#line 441 "cgrammar.y"
{
  setFunctionConstraints (yyvsp[-1].conL);
  exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
  DPRINTF (("done optGlobBufConstraintsAux\n"));;
    break;}
case 55:
#line 450 "cgrammar.y"
{ yyval.conL = constraintList_add (yyvsp[0].conL, yyvsp[-1].con); ;
    break;}
case 56:
#line 451 "cgrammar.y"
{constraintList c; c = constraintList_new(); c = constraintList_add (c, yyvsp[0].con); yyval.conL = c;
    break;}
case 57:
#line 454 "cgrammar.y"
{
 yyval.con = makeConstraintParse3 (yyvsp[-3].conE, yyvsp[-2].tok, yyvsp[-1].conE);
 DPRINTF(("Done BufConstraint1\n")); ;
    break;}
case 64:
#line 469 "cgrammar.y"
{yyval.conE = constraintExpr_parseMakeUnaryOp (yyvsp[-3].tok, yyvsp[-1].conE);  DPRINTF( ("Got BufConstraintExpr UNary Op ") ); ;
    break;}
case 65:
#line 470 "cgrammar.y"
{
   DPRINTF( ("Got BufConstraintExpr BINary Op ") );
   yyval.conE = constraintExpr_parseMakeBinaryOp (yyvsp[-3].conE, yyvsp[-2].tok, yyvsp[-1].conE); ;
    break;}
case 66:
#line 475 "cgrammar.y"
{ yyval.conE =  constraintExpr_makeTermsRef(yyvsp[0].sr);;
    break;}
case 67:
#line 476 "cgrammar.y"
{  char *t; int c;
  t =  cstring_toCharsSafe (exprNode_unparse(yyvsp[0].expr));
  c = atoi( t );
  yyval.conE = constraintExpr_makeIntLiteral (c);
;
    break;}
case 68:
#line 484 "cgrammar.y"
{
   yyval.sr =
     checkbufferConstraintClausesId (yyvsp[0].entry);;
    break;}
case 69:
#line 487 "cgrammar.y"
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 70:
#line 489 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 71:
#line 490 "cgrammar.y"
{
     char *t; int c;
  t =  cstring_toCharsSafe (exprNode_unparse(yyvsp[-1].expr));
  c = atoi( t );
   yyval.sr = sRef_makeArrayFetchKnown(yyvsp[-3].sr, c); ;
    break;}
case 72:
#line 495 "cgrammar.y"
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 73:
#line 496 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 74:
#line 497 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 75:
#line 499 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 79:
#line 525 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 80:
#line 526 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 81:
#line 536 "cgrammar.y"
{ setProcessingGlobMods (); ;
    break;}
case 82:
#line 537 "cgrammar.y"
{ clearProcessingGlobMods (); ;
    break;}
case 89:
#line 552 "cgrammar.y"
{ ; ;
    break;}
case 90:
#line 553 "cgrammar.y"
{ ; ;
    break;}
case 91:
#line 556 "cgrammar.y"
{ globListAdd (yyvsp[0].sr, yyvsp[-1].tquallist); ;
    break;}
case 92:
#line 559 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); ;
    break;}
case 93:
#line 560 "cgrammar.y"
{ yyval.sr = globListUnrecognized (yyvsp[0].cname); ;
    break;}
case 94:
#line 563 "cgrammar.y"
{ yyval.typequal = qual_createUndef (); ;
    break;}
case 95:
#line 564 "cgrammar.y"
{ yyval.typequal = qual_createKilled (); ;
    break;}
case 96:
#line 565 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 97:
#line 566 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 98:
#line 567 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 99:
#line 570 "cgrammar.y"
{ yyval.tquallist = qualList_undefined; ;
    break;}
case 100:
#line 571 "cgrammar.y"
{ yyval.tquallist = qualList_add (yyvsp[0].tquallist, yyvsp[-1].typequal); ;
    break;}
case 101:
#line 574 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 102:
#line 576 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 103:
#line 577 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 104:
#line 579 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 105:
#line 581 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 108:
#line 588 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 109:
#line 590 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 110:
#line 591 "cgrammar.y"
{ setProcessingGlobalsList (); ;
    break;}
case 111:
#line 593 "cgrammar.y"
{ unsetProcessingGlobals (); ;
    break;}
case 112:
#line 595 "cgrammar.y"
{ setFunctionNoGlobals ();
     setFunctionModifies (sRefSet_single (sRef_makeNothing ())); 
   ;
    break;}
case 117:
#line 607 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 118:
#line 612 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 119:
#line 620 "cgrammar.y"
{
     context_setProtectVars (); enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 120:
#line 625 "cgrammar.y"
{ 
     setFunctionModifies (yyvsp[0].srset); exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 130:
#line 649 "cgrammar.y"
{ yyval.sck = SP_ISONLY; ;
    break;}
case 131:
#line 650 "cgrammar.y"
{ yyval.sck = SP_ISOBSERVER; ;
    break;}
case 132:
#line 651 "cgrammar.y"
{ yyval.sck = SP_ISEXPOSED; ;
    break;}
case 133:
#line 652 "cgrammar.y"
{ yyval.sck = SP_ISDEPENDENT; ;
    break;}
case 134:
#line 653 "cgrammar.y"
{ yyval.sck = SP_ISOWNED; ;
    break;}
case 135:
#line 654 "cgrammar.y"
{ yyval.sck = SP_ISSHARED; ;
    break;}
case 136:
#line 655 "cgrammar.y"
{ yyval.sck = SP_ISNULL; ;
    break;}
case 137:
#line 656 "cgrammar.y"
{ yyval.sck = SP_ISNOTNULL; ;
    break;}
case 138:
#line 660 "cgrammar.y"
{
     context_setProtectVars (); 
     enterParamsTemp (); 
     sRef_setGlobalScopeSafe (); 
   ;
    break;}
case 139:
#line 666 "cgrammar.y"
{ 
     setFunctionSpecialClause (yyvsp[-6].tok, yyvsp[-3].srset, yyvsp[-1].tok); 
     exitParamsTemp ();
     sRef_clearGlobalScopeSafe (); 
     context_releaseVars ();
   ;
    break;}
case 140:
#line 673 "cgrammar.y"
{
      context_setProtectVars (); 
      enterParamsTemp (); 
      sRef_setGlobalScopeSafe (); 
    ;
    break;}
case 141:
#line 679 "cgrammar.y"
{ 
      setFunctionStateSpecialClause (yyvsp[-7].tok, yyvsp[-5].sck, yyvsp[-3].srset, yyvsp[-1].tok); 
      exitParamsTemp ();
      sRef_clearGlobalScopeSafe (); 
      context_releaseVars ();
    ;
    break;}
case 142:
#line 688 "cgrammar.y"
{ 
     qtype qint = qtype_create (ctype_int);
     yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, qint);
     qtype_free (qint);
   ;
    break;}
case 143:
#line 694 "cgrammar.y"
{ yyval.ntyp = idDecl_fixBase (yyvsp[0].ntyp, yyvsp[-2].qtyp); ;
    break;}
case 144:
#line 697 "cgrammar.y"
{ checkDoneParams (); context_enterInnerContext (); ;
    break;}
case 145:
#line 699 "cgrammar.y"
{  
     exprNode_checkFunctionBody (yyvsp[0].expr); yyval.expr = yyvsp[0].expr; 
     context_exitInner (yyvsp[0].expr); 
   ;
    break;}
case 146:
#line 704 "cgrammar.y"
{ doneParams (); context_enterInnerContext (); ;
    break;}
case 147:
#line 706 "cgrammar.y"
{
     context_exitInner (yyvsp[0].expr);
     exprNode_checkFunctionBody (yyvsp[0].expr); 
     yyval.expr = yyvsp[0].expr; /* old style */ 
   ;
    break;}
case 148:
#line 714 "cgrammar.y"
{ 
     context_setFunctionDefined (exprNode_loc (yyvsp[0].expr)); 
     /* exprNode_checkFunction (context_getHeader (), $2); */
     /* DRL 8 8 2000 */
     
     context_exitFunction ();
   ;
    break;}
case 149:
#line 723 "cgrammar.y"
{ yyval.srset = yyvsp[-2].srset; ;
    break;}
case 150:
#line 724 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 151:
#line 727 "cgrammar.y"
{ yyval.srset = yyvsp[-1].srset; ;
    break;}
case 152:
#line 728 "cgrammar.y"
{ yyval.srset = sRefSet_new (); ;
    break;}
case 153:
#line 731 "cgrammar.y"
{ yyval.sr = uentry_getSref (yyvsp[0].entry); checkModifiesId (yyvsp[0].entry); ;
    break;}
case 154:
#line 732 "cgrammar.y"
{ yyval.sr = fixModifiesId (yyvsp[0].cname); ;
    break;}
case 155:
#line 733 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-2].sr, sRef_undefined); ;
    break;}
case 156:
#line 734 "cgrammar.y"
{ yyval.sr = modListArrayFetch (yyvsp[-3].sr, yyvsp[-1].sr); ;
    break;}
case 157:
#line 735 "cgrammar.y"
{ yyval.sr = modListPointer (yyvsp[0].sr); ;
    break;}
case 158:
#line 736 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 159:
#line 737 "cgrammar.y"
{ yyval.sr = modListFieldAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 160:
#line 738 "cgrammar.y"
{ yyval.sr = modListArrowAccess (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 161:
#line 742 "cgrammar.y"
{ yyval.sr = yyvsp[0].sr; ;
    break;}
case 162:
#line 743 "cgrammar.y"
{ yyval.sr = sRef_makeUnknown (); /* sRef_makeConstant ($1); ? */ ;
    break;}
case 163:
#line 747 "cgrammar.y"
{ yyval.srset = sRefSet_single (yyvsp[0].sr); ;
    break;}
case 164:
#line 748 "cgrammar.y"
{ yyval.srset = sRefSet_insert (yyvsp[-2].srset, yyvsp[0].sr); ;
    break;}
case 165:
#line 752 "cgrammar.y"
{ yyval.sr = checkSpecClausesId (yyvsp[0].entry); ;
    break;}
case 166:
#line 754 "cgrammar.y"
{ yyval.sr = fixSpecClausesId (yyvsp[0].cname); ;
    break;}
case 167:
#line 755 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-2].sr); ;
    break;}
case 168:
#line 756 "cgrammar.y"
{ yyval.sr = sRef_makeAnyArrayFetch (yyvsp[-3].sr); ;
    break;}
case 169:
#line 757 "cgrammar.y"
{ yyval.sr = sRef_constructPointer (yyvsp[0].sr); ;
    break;}
case 170:
#line 758 "cgrammar.y"
{ yyval.sr = yyvsp[-1].sr; ;
    break;}
case 171:
#line 759 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
					    yyval.sr = sRef_buildField (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 172:
#line 761 "cgrammar.y"
{ cstring_markOwned (yyvsp[0].cname);
                                            yyval.sr = sRef_makeArrow (yyvsp[-2].sr, yyvsp[0].cname); ;
    break;}
case 173:
#line 766 "cgrammar.y"
{ if (sRef_isValid (yyvsp[0].sr)) { yyval.srset = sRefSet_single (yyvsp[0].sr); } 
      else { yyval.srset = sRefSet_undefined; } 
    ;
    break;}
case 174:
#line 770 "cgrammar.y"
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
#line 781 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (yyvsp[0].entry); ;
    break;}
case 176:
#line 782 "cgrammar.y"
{ yyval.expr = exprNode_fromUIO (yyvsp[0].cname); ;
    break;}
case 177:
#line 783 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 178:
#line 784 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 179:
#line 785 "cgrammar.y"
{ yyval.expr = exprNode_fromIdentifier (coerceId (yyvsp[0].cname)); ;
    break;}
case 180:
#line 786 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 182:
#line 790 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 183:
#line 791 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 184:
#line 792 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 185:
#line 793 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 186:
#line 794 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 187:
#line 795 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 188:
#line 796 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 189:
#line 797 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 190:
#line 800 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 191:
#line 801 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 193:
#line 805 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 194:
#line 806 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 195:
#line 807 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 196:
#line 808 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 197:
#line 809 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 198:
#line 810 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 199:
#line 811 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 200:
#line 812 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 201:
#line 813 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 202:
#line 814 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 203:
#line 817 "cgrammar.y"
{ yyval.cstringlist = cstringList_add (yyvsp[-2].cstringlist, yyvsp[0].cname); ;
    break;}
case 204:
#line 818 "cgrammar.y"
{ yyval.cstringlist = cstringList_single (yyvsp[0].cname); ;
    break;}
case 205:
#line 822 "cgrammar.y"
{ yyval.expr = exprNode_offsetof (yyvsp[-5].qtyp, yyvsp[-2].cstringlist); ;
    break;}
case 206:
#line 825 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 207:
#line 826 "cgrammar.y"
{ context_sizeofReleaseVars (); yyval.expr = yyvsp[0].expr; ;
    break;}
case 208:
#line 829 "cgrammar.y"
{ yyval.expr = exprNode_sizeofType (yyvsp[-1].qtyp); ;
    break;}
case 209:
#line 830 "cgrammar.y"
{ yyval.expr = exprNode_sizeofExpr (yyvsp[0].expr); ;
    break;}
case 210:
#line 831 "cgrammar.y"
{ yyval.expr = exprNode_alignofType (yyvsp[-1].qtyp); ;
    break;}
case 211:
#line 832 "cgrammar.y"
{ yyval.expr = exprNode_alignofExpr (yyvsp[0].expr); ;
    break;}
case 213:
#line 837 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 215:
#line 841 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 216:
#line 842 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 217:
#line 843 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 219:
#line 847 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 220:
#line 848 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 222:
#line 852 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 223:
#line 853 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 225:
#line 857 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 226:
#line 858 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 227:
#line 859 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 228:
#line 860 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 230:
#line 864 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 231:
#line 865 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 233:
#line 869 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 235:
#line 873 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 237:
#line 878 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 239:
#line 883 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); 
     context_enterAndClause (yyvsp[-1].expr); 
   ;
    break;}
case 240:
#line 887 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitAndClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 242:
#line 895 "cgrammar.y"
{ 
     exprNode_produceGuards (yyvsp[-1].expr);
     context_enterOrClause (yyvsp[-1].expr); 
   ;
    break;}
case 243:
#line 900 "cgrammar.y"
{ 
     yyval.expr = exprNode_op (yyvsp[-3].expr, yyvsp[0].expr, yyvsp[-2].tok); 
     context_exitOrClause (yyval.expr, yyvsp[0].expr);
   ;
    break;}
case 245:
#line 907 "cgrammar.y"
{ exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 246:
#line 908 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 247:
#line 909 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); context_exitClause (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 249:
#line 913 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 250:
#line 914 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 251:
#line 915 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 252:
#line 916 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 253:
#line 917 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 254:
#line 918 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 255:
#line 919 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 256:
#line 920 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 257:
#line 921 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 258:
#line 922 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 259:
#line 923 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 261:
#line 927 "cgrammar.y"
{ yyval.expr = exprNode_comma (yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 262:
#line 930 "cgrammar.y"
{ yyval.expr = exprNode_undefined; ;
    break;}
case 265:
#line 939 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 266:
#line 940 "cgrammar.y"
{ doVaDcl (); yyval.expr = exprNode_makeError (); ;
    break;}
case 267:
#line 941 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 268:
#line 944 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 269:
#line 958 "cgrammar.y"
{
               setProcessingVars (yyvsp[-3].qtyp); 
     processNamedDecl (yyvsp[-1].ntyp); ;
    break;}
case 270:
#line 961 "cgrammar.y"
{ unsetProcessingVars (); yyval.expr = yyvsp[-2].expr; ;
    break;}
case 271:
#line 963 "cgrammar.y"
{ setProcessingVars (yyvsp[-4].qtyp); processNamedDecl (yyvsp[-2].ntyp); 
        ;
    break;}
case 272:
#line 966 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-2].expr, exprNode_makeInitialization (yyvsp[-8].ntyp, yyvsp[-3].expr)); 
     unsetProcessingVars ();
   ;
    break;}
case 273:
#line 970 "cgrammar.y"
{ processNamedDecl (yyvsp[-1].ntyp); yyval.expr = exprNode_makeError (); ;
    break;}
case 274:
#line 971 "cgrammar.y"
{ processNamedDecl (yyvsp[-2].ntyp); ;
    break;}
case 275:
#line 972 "cgrammar.y"
{ yyval.expr = exprNode_makeInitialization (yyvsp[-5].ntyp, yyvsp[0].expr); ;
    break;}
case 276:
#line 976 "cgrammar.y"
{ setProcessingTypedef (yyvsp[0].qtyp); ;
    break;}
case 277:
#line 977 "cgrammar.y"
{ unsetProcessingTypedef (); ;
    break;}
case 278:
#line 978 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 279:
#line 979 "cgrammar.y"
{ /* in the ANSI grammar, semantics unclear */ ;
    break;}
case 280:
#line 982 "cgrammar.y"
{ g_expectingTypeName = TRUE; ;
    break;}
case 281:
#line 985 "cgrammar.y"
{ g_expectingTypeName = TRUE; context_pushLoc (); ;
    break;}
case 282:
#line 988 "cgrammar.y"
{ ; ;
    break;}
case 283:
#line 991 "cgrammar.y"
{ ; ;
    break;}
case 284:
#line 992 "cgrammar.y"
{ ; ;
    break;}
case 285:
#line 995 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 286:
#line 996 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 287:
#line 999 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 288:
#line 1000 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-2].tok, yyvsp[-1].alist); ;
    break;}
case 289:
#line 1001 "cgrammar.y"
{ yyval.expr = exprNode_makeInitBlock (yyvsp[-3].tok, yyvsp[-2].alist); ;
    break;}
case 290:
#line 1006 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 291:
#line 1008 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-2].alist, yyvsp[0].expr); ;
    break;}
case 292:
#line 1016 "cgrammar.y"
{ setStorageClass (SCEXTERN); yyval.typequal = qual_createExtern (); ;
    break;}
case 293:
#line 1017 "cgrammar.y"
{ yyval.typequal = qual_createInline (); ;
    break;}
case 294:
#line 1018 "cgrammar.y"
{ setStorageClass (SCSTATIC); yyval.typequal = qual_createStatic (); ;
    break;}
case 295:
#line 1019 "cgrammar.y"
{ yyval.typequal = qual_createAuto (); ;
    break;}
case 296:
#line 1020 "cgrammar.y"
{ yyval.typequal = qual_createRegister (); ;
    break;}
case 297:
#line 1023 "cgrammar.y"
{ yyval.typequal = qual_createConst (); ;
    break;}
case 298:
#line 1024 "cgrammar.y"
{ yyval.typequal = qual_createVolatile (); ;
    break;}
case 299:
#line 1025 "cgrammar.y"
{ yyval.typequal = qual_createOut (); ;
    break;}
case 300:
#line 1026 "cgrammar.y"
{ yyval.typequal = qual_createIn (); ;
    break;}
case 301:
#line 1027 "cgrammar.y"
{ yyval.typequal = qual_createPartial (); ;
    break;}
case 302:
#line 1028 "cgrammar.y"
{ yyval.typequal = qual_createSpecial (); ;
    break;}
case 303:
#line 1029 "cgrammar.y"
{ yyval.typequal = qual_createOwned (); ;
    break;}
case 304:
#line 1030 "cgrammar.y"
{ yyval.typequal = qual_createDependent (); ;
    break;}
case 305:
#line 1031 "cgrammar.y"
{ yyval.typequal = qual_createYield (); ;
    break;}
case 306:
#line 1032 "cgrammar.y"
{ yyval.typequal = qual_createTemp (); ;
    break;}
case 307:
#line 1033 "cgrammar.y"
{ yyval.typequal = qual_createOnly (); ;
    break;}
case 308:
#line 1034 "cgrammar.y"
{ yyval.typequal = qual_createKeep (); ;
    break;}
case 309:
#line 1035 "cgrammar.y"
{ yyval.typequal = qual_createKept (); ;
    break;}
case 310:
#line 1036 "cgrammar.y"
{ yyval.typequal = qual_createShared (); ;
    break;}
case 311:
#line 1037 "cgrammar.y"
{ yyval.typequal = qual_createUnique (); ;
    break;}
case 312:
#line 1038 "cgrammar.y"
{ yyval.typequal = qual_createExits (); ;
    break;}
case 313:
#line 1039 "cgrammar.y"
{ yyval.typequal = qual_createMayExit (); ;
    break;}
case 314:
#line 1040 "cgrammar.y"
{ yyval.typequal = qual_createTrueExit (); ;
    break;}
case 315:
#line 1041 "cgrammar.y"
{ yyval.typequal = qual_createFalseExit (); ;
    break;}
case 316:
#line 1042 "cgrammar.y"
{ yyval.typequal = qual_createNeverExit (); ;
    break;}
case 317:
#line 1043 "cgrammar.y"
{ yyval.typequal = qual_createNull (); ;
    break;}
case 318:
#line 1044 "cgrammar.y"
{ yyval.typequal = qual_createRelNull (); ;
    break;}
case 319:
#line 1045 "cgrammar.y"
{ yyval.typequal = qual_createReturned (); ;
    break;}
case 320:
#line 1046 "cgrammar.y"
{ yyval.typequal = qual_createExposed (); ;
    break;}
case 321:
#line 1047 "cgrammar.y"
{ yyval.typequal = qual_createObserver (); ;
    break;}
case 322:
#line 1048 "cgrammar.y"
{ yyval.typequal = qual_createChecked (); ;
    break;}
case 323:
#line 1049 "cgrammar.y"
{ yyval.typequal = qual_createCheckMod (); ;
    break;}
case 324:
#line 1050 "cgrammar.y"
{ yyval.typequal = qual_createUnchecked (); ;
    break;}
case 325:
#line 1051 "cgrammar.y"
{ yyval.typequal = qual_createCheckedStrict (); ;
    break;}
case 326:
#line 1052 "cgrammar.y"
{ yyval.typequal = qual_createTrueNull (); ;
    break;}
case 327:
#line 1053 "cgrammar.y"
{ yyval.typequal = qual_createFalseNull (); ;
    break;}
case 328:
#line 1054 "cgrammar.y"
{ yyval.typequal = qual_createUnused (); ;
    break;}
case 329:
#line 1055 "cgrammar.y"
{ yyval.typequal = qual_createExternal (); ;
    break;}
case 330:
#line 1056 "cgrammar.y"
{ yyval.typequal = qual_createSef (); ;
    break;}
case 331:
#line 1057 "cgrammar.y"
{ yyval.typequal = qual_createAbstract (); ;
    break;}
case 332:
#line 1058 "cgrammar.y"
{ yyval.typequal = qual_createConcrete (); ;
    break;}
case 333:
#line 1059 "cgrammar.y"
{ yyval.typequal = qual_createMutable (); ;
    break;}
case 334:
#line 1060 "cgrammar.y"
{ yyval.typequal = qual_createImmutable (); ;
    break;}
case 335:
#line 1061 "cgrammar.y"
{ yyval.typequal = qual_createNotNull (); ;
    break;}
case 336:
#line 1062 "cgrammar.y"
{ yyval.typequal = qual_createRefCounted (); ;
    break;}
case 337:
#line 1063 "cgrammar.y"
{ yyval.typequal = qual_createRefs (); ;
    break;}
case 338:
#line 1064 "cgrammar.y"
{ yyval.typequal = qual_createKillRef (); ;
    break;}
case 339:
#line 1065 "cgrammar.y"
{ yyval.typequal = qual_createRelDef (); ;
    break;}
case 340:
#line 1066 "cgrammar.y"
{ yyval.typequal = qual_createNewRef (); ;
    break;}
case 341:
#line 1067 "cgrammar.y"
{ yyval.typequal = qual_createTempRef (); ;
    break;}
case 342:
#line 1068 "cgrammar.y"
{ yyval.typequal = qual_createNullTerminated (); ;
    break;}
case 343:
#line 1074 "cgrammar.y"
{ yyval.typequal = qual_createShort (); ;
    break;}
case 344:
#line 1075 "cgrammar.y"
{ yyval.typequal = qual_createLong (); ;
    break;}
case 345:
#line 1076 "cgrammar.y"
{ yyval.typequal = qual_createSigned (); ;
    break;}
case 346:
#line 1077 "cgrammar.y"
{ yyval.typequal = qual_createUnsigned (); ;
    break;}
case 353:
#line 1086 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 354:
#line 1087 "cgrammar.y"
{ yyval.ctyp = ctype_anyintegral; ;
    break;}
case 355:
#line 1088 "cgrammar.y"
{ yyval.ctyp = ctype_unsignedintegral; ;
    break;}
case 356:
#line 1089 "cgrammar.y"
{ yyval.ctyp = ctype_signedintegral; ;
    break;}
case 360:
#line 1093 "cgrammar.y"
{ yyval.ctyp = ctype_fromQual (yyvsp[-1].typequal); ;
    break;}
case 361:
#line 1097 "cgrammar.y"
{ yyval.qtyp = qtype_resolve (yyvsp[-1].qtyp); ;
    break;}
case 362:
#line 1100 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 363:
#line 1102 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-3].qtyp, yyvsp[-1].qtyp); ;
    break;}
case 365:
#line 1107 "cgrammar.y"
{ yyval.qtyp = qtype_mergeAlt (yyvsp[-2].qtyp, yyvsp[0].qtyp); ;
    break;}
case 366:
#line 1110 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 367:
#line 1111 "cgrammar.y"
{ yyval.qtyp = qtype_addQual (yyvsp[0].qtyp, yyvsp[-1].typequal); ;
    break;}
case 368:
#line 1112 "cgrammar.y"
{ yyval.qtyp = qtype_combine (yyvsp[0].qtyp, yyvsp[-1].ctyp); ;
    break;}
case 369:
#line 1115 "cgrammar.y"
{ yyval.qtyp = qtype_unknown (); ;
    break;}
case 370:
#line 1116 "cgrammar.y"
{ yyval.qtyp = yyvsp[0].qtyp; ;
    break;}
case 371:
#line 1119 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 372:
#line 1121 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 373:
#line 1123 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 374:
#line 1124 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 375:
#line 1126 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 376:
#line 1128 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-8].cname, yyvsp[-3].flist); ;
    break;}
case 377:
#line 1130 "cgrammar.y"
{ yyval.ctyp = declareStruct (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 378:
#line 1132 "cgrammar.y"
{ yyval.ctyp = declareUnion (yyvsp[-3].cname, uentryList_new ()); ;
    break;}
case 379:
#line 1133 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 380:
#line 1135 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 381:
#line 1137 "cgrammar.y"
{ yyval.ctyp = declareUnnamedStruct (yyvsp[-3].flist); ;
    break;}
case 382:
#line 1138 "cgrammar.y"
{ sRef_setGlobalScopeSafe (); ;
    break;}
case 383:
#line 1140 "cgrammar.y"
{ sRef_clearGlobalScopeSafe (); ;
    break;}
case 384:
#line 1142 "cgrammar.y"
{ yyval.ctyp = declareUnnamedUnion (yyvsp[-3].flist); ;
    break;}
case 385:
#line 1144 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedStruct (uentryList_new ()); ;
    break;}
case 386:
#line 1146 "cgrammar.y"
{ yyval.ctyp = ctype_createUnnamedUnion (uentryList_new ()); ;
    break;}
case 387:
#line 1147 "cgrammar.y"
{ yyval.ctyp = handleStruct (yyvsp[-1].cname); ;
    break;}
case 388:
#line 1148 "cgrammar.y"
{ yyval.ctyp = handleUnion (yyvsp[-1].cname); ;
    break;}
case 389:
#line 1151 "cgrammar.y"
{ g_expectingTypeName = FALSE; ;
    break;}
case 391:
#line 1155 "cgrammar.y"
{ yyval.flist = uentryList_undefined; /* bogus! */ ;
    break;}
case 392:
#line 1156 "cgrammar.y"
{ yyval.flist = uentryList_mergeFields (yyvsp[-1].flist, yyvsp[0].flist); ;
    break;}
case 393:
#line 1160 "cgrammar.y"
{ yyval.flist = fixUentryList (yyvsp[-2].ntyplist, yyvsp[-4].qtyp); ;
    break;}
case 394:
#line 1162 "cgrammar.y"
{ yyval.flist = fixUnnamedDecl (yyvsp[-2].qtyp); ;
    break;}
case 395:
#line 1166 "cgrammar.y"
{ yyval.ntyplist = idDeclList_singleton (yyvsp[-1].ntyp); ;
    break;}
case 396:
#line 1168 "cgrammar.y"
{ yyval.ntyplist = idDeclList_add (yyvsp[-3].ntyplist, yyvsp[-1].ntyp); ;
    break;}
case 397:
#line 1171 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; ;
    break;}
case 398:
#line 1172 "cgrammar.y"
{ yyval.ntyp = idDecl_undefined; ;
    break;}
case 399:
#line 1173 "cgrammar.y"
{ yyval.ntyp = yyvsp[-3].ntyp; ;
    break;}
case 400:
#line 1178 "cgrammar.y"
{ yyval.ctyp = declareUnnamedEnum (yyvsp[-2].enumnamelist); ;
    break;}
case 401:
#line 1179 "cgrammar.y"
{ context_pushLoc (); ;
    break;}
case 402:
#line 1180 "cgrammar.y"
{ context_popLoc (); yyval.ctyp = declareEnum (yyvsp[-5].cname, yyvsp[-2].enumnamelist); ;
    break;}
case 403:
#line 1181 "cgrammar.y"
{ yyval.ctyp = handleEnum (yyvsp[-1].cname); ;
    break;}
case 404:
#line 1185 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_single (yyvsp[0].cname); ;
    break;}
case 405:
#line 1187 "cgrammar.y"
{ yyval.enumnamelist = enumNameList_push (yyvsp[-2].enumnamelist, yyvsp[0].cname); ;
    break;}
case 407:
#line 1192 "cgrammar.y"
{ uentry ue = uentry_makeEnumConstant (yyvsp[0].cname, ctype_unknown);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[0].cname;
   ;
    break;}
case 408:
#line 1197 "cgrammar.y"
{ uentry ue = uentry_makeEnumInitializedConstant (yyvsp[-3].cname, ctype_unknown, yyvsp[0].expr);
     usymtab_supGlobalEntry (ue);
     yyval.cname = yyvsp[-3].cname; 
   ;
    break;}
case 410:
#line 1204 "cgrammar.y"
{ yyval.ntyp = idDecl_create (cstring_undefined, qtype_create (yyvsp[0].ctyp)); ;
    break;}
case 411:
#line 1206 "cgrammar.y"
{ 
     qtype qt = qtype_unknown ();

     qtype_adjustPointers (yyvsp[-1].count, qt);
     yyval.ntyp = idDecl_create (cstring_copy (LastIdentifier ()), qt);
   ;
    break;}
case 412:
#line 1213 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 414:
#line 1218 "cgrammar.y"
{ yyval.ntyp = yyvsp[0].ntyp; qtype_adjustPointers (yyvsp[-1].count, idDecl_getTyp (yyval.ntyp)); ;
    break;}
case 415:
#line 1221 "cgrammar.y"
{ yyval.entrylist = handleParamTypeList (yyvsp[0].entrylist); ;
    break;}
case 416:
#line 1222 "cgrammar.y"
{ yyval.entrylist = handleParamIdList (yyvsp[0].entrylist); ;
    break;}
case 417:
#line 1225 "cgrammar.y"
{ /* ignored for now */; ;
    break;}
case 418:
#line 1226 "cgrammar.y"
{ ; ;
    break;}
case 419:
#line 1229 "cgrammar.y"
{ ; ;
    break;}
case 420:
#line 1230 "cgrammar.y"
{ ; ;
    break;}
case 421:
#line 1233 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 422:
#line 1234 "cgrammar.y"
{ yyval.count = 1; ;
    break;}
case 423:
#line 1235 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 424:
#line 1236 "cgrammar.y"
{ yyval.count = 1 + yyvsp[0].count; ;
    break;}
case 426:
#line 1240 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 427:
#line 1243 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 428:
#line 1244 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeVariableLoc (yyvsp[0].cname, ctype_int)); ;
    break;}
case 429:
#line 1247 "cgrammar.y"
{ yyval.entrylist = uentryList_single (uentry_makeElipsisMarker ()); ;
    break;}
case 431:
#line 1249 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-2].entrylist, uentry_makeElipsisMarker ()); ;
    break;}
case 432:
#line 1252 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 433:
#line 1252 "cgrammar.y"
{ yyval.entrylist = uentryList_single (yyvsp[0].oentry); ;
    break;}
case 434:
#line 1253 "cgrammar.y"
{ storeLoc (); ;
    break;}
case 435:
#line 1254 "cgrammar.y"
{ yyval.entrylist = uentryList_add (yyvsp[-3].entrylist, yyvsp[0].oentry); ;
    break;}
case 436:
#line 1258 "cgrammar.y"
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
#line 1270 "cgrammar.y"
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
#line 1286 "cgrammar.y"
{ yyval.qtyp = qtype_newBase (yyvsp[-1].qtyp, yyvsp[0].ctyp); ;
    break;}
case 440:
#line 1289 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[0].count, ctype_unknown); ;
    break;}
case 442:
#line 1291 "cgrammar.y"
{ yyval.ctyp = ctype_adjustPointers (yyvsp[-1].count, yyvsp[0].ctyp); ;
    break;}
case 443:
#line 1294 "cgrammar.y"
{ yyval.ctyp = ctype_unknown; ;
    break;}
case 445:
#line 1299 "cgrammar.y"
{ yyval.ctyp = ctype_expectFunction (yyvsp[-1].ctyp); ;
    break;}
case 446:
#line 1300 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (ctype_unknown); ;
    break;}
case 447:
#line 1302 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (ctype_unknown, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 448:
#line 1303 "cgrammar.y"
{ yyval.ctyp = ctype_makeArray (yyvsp[-2].ctyp); ;
    break;}
case 449:
#line 1305 "cgrammar.y"
{ yyval.ctyp = ctype_makeFixedArray (yyvsp[-3].ctyp, exprNode_getLongValue (yyvsp[-1].expr)); ;
    break;}
case 450:
#line 1307 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (ctype_unknown, uentryList_makeMissingParams ()); ;
    break;}
case 451:
#line 1309 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (ctype_unknown, yyvsp[-1].entrylist); ;
    break;}
case 452:
#line 1311 "cgrammar.y"
{ yyval.ctyp = ctype_makeFunction (yyvsp[-3].ctyp, uentryList_makeMissingParams ()); ;
    break;}
case 453:
#line 1313 "cgrammar.y"
{ yyval.ctyp = ctype_makeParamsFunction (yyvsp[-4].ctyp, yyvsp[-1].entrylist); ;
    break;}
case 463:
#line 1341 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[0].cname); ;
    break;}
case 464:
#line 1346 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 467:
#line 1354 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 468:
#line 1358 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 469:
#line 1360 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr); ;
    break;}
case 470:
#line 1362 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 471:
#line 1364 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 472:
#line 1368 "cgrammar.y"
{ context_setProtectVars (); ;
    break;}
case 473:
#line 1368 "cgrammar.y"
{ context_sizeofReleaseVars (); ;
    break;}
case 474:
#line 1370 "cgrammar.y"
{ yyval.expr = exprNode_forPred (yyvsp[-7].expr, yyvsp[-5].expr, yyvsp[-2].expr); 
     context_enterForClause (yyvsp[-5].expr); ;
    break;}
case 475:
#line 1375 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-2].entry); ;
    break;}
case 476:
#line 1377 "cgrammar.y"
{ yyval.expr = exprNode_iterStart (yyvsp[-5].entry, yyvsp[-1].alist); ;
    break;}
case 477:
#line 1378 "cgrammar.y"
{ yyval.expr = exprNode_createId (yyvsp[0].entry); ;
    break;}
case 481:
#line 1384 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 489:
#line 1392 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 490:
#line 1393 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 491:
#line 1397 "cgrammar.y"
{ /* don't: context_exitTrueClause ($1, $2); */
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 492:
#line 1402 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 493:
#line 1405 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 504:
#line 1420 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 506:
#line 1422 "cgrammar.y"
{ yyval.expr = exprNode_makeError (); ;
    break;}
case 507:
#line 1425 "cgrammar.y"
{ yyval.expr = exprNode_labelMarker (yyvsp[-1].cname); ;
    break;}
case 508:
#line 1426 "cgrammar.y"
{ yyval.expr = exprNode_notReached (yyvsp[0].expr); ;
    break;}
case 509:
#line 1432 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 510:
#line 1433 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, FALSE); ;
    break;}
case 511:
#line 1434 "cgrammar.y"
{ context_enterCaseClause (yyvsp[0].expr); ;
    break;}
case 512:
#line 1435 "cgrammar.y"
{ yyval.expr = exprNode_caseMarker (yyvsp[-2].expr, TRUE); ;
    break;}
case 513:
#line 1438 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 514:
#line 1439 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, FALSE); ;
    break;}
case 515:
#line 1440 "cgrammar.y"
{ context_enterCaseClause (exprNode_undefined); ;
    break;}
case 516:
#line 1441 "cgrammar.y"
{ yyval.expr = exprNode_defaultMarker (yyvsp[-2].tok, TRUE); ;
    break;}
case 517:
#line 1444 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 518:
#line 1446 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; context_exitInner (yyvsp[0].expr); ;
    break;}
case 519:
#line 1449 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 520:
#line 1452 "cgrammar.y"
{ context_enterInnerContext (); ;
    break;}
case 521:
#line 1455 "cgrammar.y"
{ context_exitInnerPlain (); ;
    break;}
case 522:
#line 1458 "cgrammar.y"
{ context_enterStructInnerContext (); ;
    break;}
case 523:
#line 1461 "cgrammar.y"
{ context_exitStructInnerContext (); ;
    break;}
case 524:
#line 1464 "cgrammar.y"
{ context_exitInnerSafe (); ;
    break;}
case 525:
#line 1467 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 526:
#line 1468 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_createTok (yyvsp[0].tok)); ;
    break;}
case 527:
#line 1469 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 528:
#line 1471 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 529:
#line 1472 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 530:
#line 1474 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (yyvsp[-2].expr, lltok_getLoc (yyvsp[0].tok))); ;
    break;}
case 531:
#line 1476 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 532:
#line 1478 "cgrammar.y"
{ yyval.expr = exprNode_notReached (exprNode_updateLocation (exprNode_concat (yyvsp[-3].expr, yyvsp[-2].expr), 
							lltok_getLoc (yyvsp[-1].tok))); 
   ;
    break;}
case 533:
#line 1485 "cgrammar.y"
{ yyval.expr = exprNode_makeBlock (yyvsp[0].expr); ;
    break;}
case 534:
#line 1489 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 535:
#line 1491 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 536:
#line 1493 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (yyvsp[-1].expr, lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 537:
#line 1495 "cgrammar.y"
{ yyval.expr = exprNode_updateLocation (exprNode_concat (yyvsp[-2].expr, yyvsp[-1].expr), lltok_getLoc (yyvsp[0].tok)); ;
    break;}
case 539:
#line 1499 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 540:
#line 1502 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 541:
#line 1503 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 542:
#line 1506 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 543:
#line 1507 "cgrammar.y"
{ yyval.expr = exprNode_concat (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 544:
#line 1510 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 545:
#line 1511 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 546:
#line 1514 "cgrammar.y"
{ yyval.expr = exprNode_createTok (yyvsp[0].tok); ;
    break;}
case 547:
#line 1515 "cgrammar.y"
{ yyval.expr = exprNode_statement (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 548:
#line 1516 "cgrammar.y"
{ yyval.expr = exprNode_checkExpr (yyvsp[0].expr); ;
    break;}
case 549:
#line 1520 "cgrammar.y"
{ yyval.expr = yyvsp[-1].expr; exprNode_produceGuards (yyvsp[-1].expr); context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 550:
#line 1528 "cgrammar.y"
{ 
     context_exitTrueClause (yyvsp[-1].expr, yyvsp[0].expr);
     yyval.expr = exprNode_if (yyvsp[-1].expr, yyvsp[0].expr); 
   ;
    break;}
case 551:
#line 1532 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-2].expr); ;
    break;}
case 552:
#line 1533 "cgrammar.y"
{
     context_exitClause (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr);
     yyval.expr = exprNode_ifelse (yyvsp[-4].expr, yyvsp[-3].expr, yyvsp[0].expr); 
   ;
    break;}
case 553:
#line 1537 "cgrammar.y"
{ context_enterSwitch (yyvsp[0].expr); ;
    break;}
case 554:
#line 1538 "cgrammar.y"
{ yyval.expr = exprNode_switch (yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 555:
#line 1542 "cgrammar.y"
{ yyval.expr = exprNode_whilePred (yyvsp[-1].expr); context_enterWhileClause (yyvsp[-1].expr); ;
    break;}
case 556:
#line 1546 "cgrammar.y"
{ yyval.expr = exprNode_whilePred(yyvsp[-1].expr); ;
    break;}
case 557:
#line 1549 "cgrammar.y"
{ context_enterIterClause (); ;
    break;}
case 558:
#line 1550 "cgrammar.y"
{ setProcessingIterVars (yyvsp[-3].entry); ;
    break;}
case 559:
#line 1553 "cgrammar.y"
{ 
     yyval.expr = exprNode_iter (yyvsp[-9].entry, yyvsp[-4].alist, yyvsp[-2].expr, yyvsp[-1].entry); 

   ;
    break;}
case 560:
#line 1559 "cgrammar.y"
{ yyval.alist = exprNodeList_singleton (yyvsp[0].expr); ;
    break;}
case 561:
#line 1560 "cgrammar.y"
{ nextIterParam (); ;
    break;}
case 562:
#line 1561 "cgrammar.y"
{ yyval.alist = exprNodeList_push (yyvsp[-3].alist, yyvsp[0].expr); ;
    break;}
case 563:
#line 1564 "cgrammar.y"
{ yyval.expr = exprNode_iterExpr (yyvsp[0].expr); ;
    break;}
case 564:
#line 1565 "cgrammar.y"
{ yyval.expr = exprNode_iterId (yyvsp[0].entry); ;
    break;}
case 565:
#line 1566 "cgrammar.y"
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
#line 1577 "cgrammar.y"
{ yyval.expr = exprNode_iterNewId (yyvsp[0].cname); ;
    break;}
case 568:
#line 1585 "cgrammar.y"
{ yyval.expr = exprNode_addParens (yyvsp[-2].tok, yyvsp[-1].expr); ;
    break;}
case 570:
#line 1589 "cgrammar.y"
{ yyval.expr = exprNode_arrayFetch (yyvsp[-3].expr, yyvsp[-1].expr); ;
    break;}
case 571:
#line 1590 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-2].expr, exprNodeList_new ()); ;
    break;}
case 572:
#line 1591 "cgrammar.y"
{ yyval.expr = exprNode_functionCall (yyvsp[-3].expr, yyvsp[-1].alist); ;
    break;}
case 573:
#line 1593 "cgrammar.y"
{ yyval.expr = exprNode_vaArg (yyvsp[-5].tok, yyvsp[-3].expr, yyvsp[-1].qtyp); ;
    break;}
case 574:
#line 1594 "cgrammar.y"
{ yyval.expr = exprNode_fieldAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 575:
#line 1595 "cgrammar.y"
{ yyval.expr = exprNode_arrowAccess (yyvsp[-4].expr, yyvsp[-1].cname); ;
    break;}
case 576:
#line 1596 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 577:
#line 1597 "cgrammar.y"
{ yyval.expr = exprNode_postOp (yyvsp[-1].expr, yyvsp[0].tok); ;
    break;}
case 579:
#line 1601 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 580:
#line 1602 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 581:
#line 1603 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 582:
#line 1604 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 583:
#line 1605 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 584:
#line 1606 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 585:
#line 1607 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 586:
#line 1608 "cgrammar.y"
{ yyval.expr = exprNode_preOp (yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 587:
#line 1609 "cgrammar.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 589:
#line 1613 "cgrammar.y"
{ yyval.expr = exprNode_cast (yyvsp[-3].tok, yyvsp[0].expr, yyvsp[-2].qtyp); ;
    break;}
case 591:
#line 1617 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 592:
#line 1618 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 593:
#line 1619 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 595:
#line 1623 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 596:
#line 1624 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 598:
#line 1628 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 599:
#line 1629 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 601:
#line 1633 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 602:
#line 1634 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 603:
#line 1635 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 604:
#line 1636 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 606:
#line 1640 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 607:
#line 1641 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 609:
#line 1645 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 611:
#line 1649 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 613:
#line 1654 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 615:
#line 1658 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 617:
#line 1662 "cgrammar.y"
{ yyval.expr = exprNode_op (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 619:
#line 1666 "cgrammar.y"
{ context_enterTrueClause (yyvsp[-1].expr); ;
    break;}
case 620:
#line 1667 "cgrammar.y"
{ context_enterFalseClause (yyvsp[-4].expr); ;
    break;}
case 621:
#line 1668 "cgrammar.y"
{ yyval.expr = exprNode_cond (yyvsp[-6].expr, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 623:
#line 1672 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 624:
#line 1673 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 625:
#line 1674 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 626:
#line 1675 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 627:
#line 1676 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 628:
#line 1677 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 629:
#line 1678 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 630:
#line 1679 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 631:
#line 1680 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 632:
#line 1681 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 633:
#line 1682 "cgrammar.y"
{ yyval.expr = exprNode_assign (yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].tok); ;
    break;}
case 634:
#line 1685 "cgrammar.y"
{ yyval.entry = yyvsp[0].entry; ;
    break;}
case 635:
#line 1686 "cgrammar.y"
{ yyval.entry = uentry_undefined; ;
    break;}
case 636:
#line 1689 "cgrammar.y"
{ context_enterDoWhileClause (); yyval.tok = yyvsp[0].tok; ;
    break;}
case 637:
#line 1693 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 638:
#line 1695 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr), yyvsp[0].tok); ;
    break;}
case 639:
#line 1697 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 640:
#line 1700 "cgrammar.y"
{ yyval.expr = exprNode_while (yyvsp[-1].expr, yyvsp[0].expr); context_exitWhileClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 641:
#line 1702 "cgrammar.y"
{ yyval.expr = exprNode_statement (exprNode_doWhile (yyvsp[-5].expr, yyvsp[-2].expr), yyvsp[0].tok); ;
    break;}
case 642:
#line 1704 "cgrammar.y"
{ yyval.expr = exprNode_doWhile (yyvsp[-4].expr, yyvsp[-1].expr); ;
    break;}
case 643:
#line 1705 "cgrammar.y"
{ yyval.expr = exprNode_for (yyvsp[-1].expr, yyvsp[0].expr); context_exitForClause (yyvsp[-1].expr, yyvsp[0].expr); ;
    break;}
case 644:
#line 1708 "cgrammar.y"
{ yyval.expr = exprNode_goto (yyvsp[-1].cname); ;
    break;}
case 645:
#line 1709 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-1].tok, BADTOK); ;
    break;}
case 646:
#line 1711 "cgrammar.y"
{ yyval.expr = exprNode_continue (yyvsp[-2].tok, QINNERCONTINUE); ;
    break;}
case 647:
#line 1712 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, BADTOK); ;
    break;}
case 648:
#line 1713 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSWITCHBREAK); ;
    break;}
case 649:
#line 1714 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QLOOPBREAK); ;
    break;}
case 650:
#line 1715 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QINNERBREAK); ;
    break;}
case 651:
#line 1716 "cgrammar.y"
{ yyval.expr = exprNode_break (yyvsp[-1].tok, QSAFEBREAK); ;
    break;}
case 652:
#line 1717 "cgrammar.y"
{ yyval.expr = exprNode_nullReturn (yyvsp[-1].tok); ;
    break;}
case 653:
#line 1718 "cgrammar.y"
{ yyval.expr = exprNode_return (yyvsp[-1].expr); ;
    break;}
case 655:
#line 1722 "cgrammar.y"
{ ; ;
    break;}
case 658:
#line 1729 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 659:
#line 1730 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 660:
#line 1731 "cgrammar.y"
{ yyval.cname = uentry_getName (yyvsp[0].entry); ;
    break;}
case 661:
#line 1732 "cgrammar.y"
{ yyval.cname = yyvsp[0].cname; ;
    break;}
case 663:
#line 1736 "cgrammar.y"
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
#line 1738 "cgrammar.y"


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
  





