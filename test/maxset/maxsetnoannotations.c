#include "../../lib/ansi.h"

void noancopy(/*@unique@*/ char * a, char *b)   {
strcpy (a,b);
}
