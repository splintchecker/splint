#include "../../lib/ansi.h"

void func () {
  char *c;
  c = strchr("dfdfedfd", 'e');
  *c = 'd';
}

void fixline (char * line)
{
  char *p;
 
  if ( (p = strchr(line, '\n')) ) 
  {
    *p = '\0';
  }
  
}
