# ifndef LLGRAMMAR_H
# define LLGRAMMAR_H

# include "llgrammar_gen.h"

/*@-redecl@*/
extern void ylerror (char *p_s) /*@modifies *g_msgstream@*/ ;
/*@=redecl@*/

# else
# error "Multiple includes"
# endif
