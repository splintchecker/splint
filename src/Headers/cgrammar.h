/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
**
*/
/*
** cgrammar.h
*/

/*@-declundef@*/ /* In case cgrammar.y isn't processed... */
extern bool g_expectingTypeName ;
extern /*@dependent@*/ /*@observer@*/ uentry coerceId (cstring p_cn);
extern /*@observer@*/ uentry coerceIterId (cstring p_cn);
extern /*@observer@*/ cstring LastIdentifier (void);
/*@=declundef@*/

/* #ifndef NCGRAM2
** # include "cgrammar_tokens.h"
** #endif
*/



