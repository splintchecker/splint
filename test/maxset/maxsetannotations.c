#include "../../lib/ansi.h"

void anstrcpy( /*@unique@*/ char * a, char *b) /*@LRequires MaxSet(a) >= MaxRead (b); @*/ {
strcpy (a,b);
}

