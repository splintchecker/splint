//#include "/home/drl7x/re/LCLintDev/lib/ansi.h"

static char f [12];
extern void /*@alt char * @*/
  mstrcpy (/*@unique@*/ /*@out@*/ /*returned*/ char *s1, char *s2) 
     /*@modifies *s1@*/ /*@LRequires MaxSet(s1) >= MaxRead(s2); @*/;


void copyf (char * c) /*@LRequires MaxSet(c) >= MaxRead(f); @*/
{
  mstrcpy (c, f);
}
