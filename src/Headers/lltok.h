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

/* DRL added 10/23/2000 for boolean stuff */
extern bool lltok_isEq_Op (lltok tok);

extern bool lltok_isMult (lltok tok);

extern bool lltok_isInc_Op (lltok tok);

extern bool lltok_isAnd_Op (lltok tok);

extern bool lltok_isOr_Op (lltok tok);

extern bool lltok_isNot_Op (lltok tok);

/*drl7x added this function 11/20/00 */

bool lltok_isLt_Op (lltok tok);

bool lltok_isGt_Op (lltok tok);
  
bool lltok_isGe_Op (lltok tok);

bool lltok_isLe_Op (lltok tok);

/* end drl7x added */


/*drl7x added 11 30 2000*/
bool  lltok_isPlus_Op (lltok tok);

bool  lltok_isMinus_Op (lltok tok);

/*end drl added */

/*drl
  added 1/14/2001
*/
bool lltok_isDec_Op  (lltok tok);

# else
# error "Multiple include"
# endif

