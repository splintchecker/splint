#include<string.h>
#include<stdlib.h>


void updateMyEnv2(char * str) /*@requires maxSet(str) >= 1000@*/
{
  char * tmp;
  tmp = getenv("MYENV");
  if (tmp != NULL)
    {
      strncpy (str, tmp, 999);
      str[999] = '/0';
    }
}

void updateMyEnv3(char * str, size_t strSize) /*@requires maxSet(str) >= (strSize -1)@*/
{
  char * tmp;
  tmp = getenv("MYENV");
  if (tmp != NULL)
    {
      strncpy (str, tmp, strSize -1);
      str[strSize -1] = '/0';
    }
}
