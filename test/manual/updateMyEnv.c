#include<string.h>
#include<stdlib.h>








void updateMyEnv(char * str)
{
  char * tmp;
  tmp = getenv("MYENV");
  if (tmp != NULL)
    strcpy (str, tmp);

}

