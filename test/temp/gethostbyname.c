# include <netdb.h>

/*@-incondefs@*/ /* Suppress warning about inconsistent definition. */
extern /*@dependent@*/ struct hostent *gethostbyname (const char *) ;
/*@=incondefs@*/

void f (const char *name)
{
  struct hostent *hname = gethostbyname (name);

  return;
}
