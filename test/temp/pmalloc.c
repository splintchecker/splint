#include <stdlib.h>

void
foo()
{
  char *p;
  
  if ((p = malloc(100)) == NULL)
    printf("out of memory\n");
  else
    free (p);
}
