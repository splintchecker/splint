/*
** Copyright (c) Massachusetts Institute of Technology 1994-1998.
**          All Rights Reserved.
**          Unpublished rights reserved under the copyright laws of
**          the United States.
**
** THIS MATERIAL IS PROVIDED AS IS, WITH ABSOLUTELY NO WARRANTY EXPRESSED
** OR IMPLIED.  ANY USE IS AT YOUR OWN RISK.
**
** This code is distributed freely and may be used freely under the 
** following conditions:
**
**     1. This notice may not be removed or altered.
**
**     2. Works derived from this code are not distributed for
**        commercial gain without explicit permission from MIT 
**        (for permission contact lclint-request@sds.lcs.mit.edu).
*/
/*
** sgrammar.h
*/

extern bool g_expectingTypeName ;
extern /*@dependent@*/ /*@observer@*/ uentry coerceId(ctype p_c);
extern /*@observer@*/ uentry coerceIterId(ctype p_c);
extern /*@observer@*/ cstring LastIdentifier(void);

/* #ifndef NCGRAM2
** # include "cgrammar_tokens.h"
** #endif
*/








