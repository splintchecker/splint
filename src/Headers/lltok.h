/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2000.
** See ../LICENSE for license information.
**
*/
/*
** lltok.h
*/

# ifndef LLTOK_H
# define LLTOK_H

typedef struct _lltok
{
  int tok;
  fileloc loc;
} lltok;

extern lltok lltok_create  (int p_tok, /*@only@*/ fileloc p_loc) /*@modifies nothing@*/ ;
extern /*@observer@*/ cstring lltok_unparse (lltok p_tok) /*@*/ ;

extern void lltok_release (/*@special@*/ lltok p_t) /*@releases p_t.loc@*/ ;

extern /*@dependent@*/ /*@exposed@*/ fileloc lltok_getLoc (lltok p_t) /*@*/ ;
extern int lltok_getTok (lltok p_t) /*@*/ ;

# define lltok_getTok(t)  ((t).tok)
# define lltok_getLoc(t)  ((t).loc)

extern bool lltok_isSemi (lltok p_tok);

# else
# error "Multiple include"
# endif
