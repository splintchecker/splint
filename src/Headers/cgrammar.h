/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** cgrammar.h
*/

extern bool g_expectingTypeName ;
extern /*@dependent@*/ /*@observer@*/ uentry coerceId (cstring p_cn);
extern /*@observer@*/ uentry coerceIterId (cstring p_cn);
extern /*@observer@*/ cstring LastIdentifier (void);

/* #ifndef NCGRAM2
** # include "cgrammar_tokens.h"
** #endif
*/



