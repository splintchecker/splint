# include "bool.h"

typedef struct _abst *abst;

typedef struct _immut
{
  char *name;
  int val;
} *immut;

struct _abst
{
  char *name;
  int   val;
  /*@dependent@*/ abst  parent;
  immut im;
} ;


# include "repexpose.lh"
