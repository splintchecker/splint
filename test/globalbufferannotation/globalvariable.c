//#include "/home/drl7x/re/LCLintDev/lib/ansi.h"

static char f [12];
extern void /*@alt char * @*/
  mstrcpy (/*@unique@*/ /*@out@*/ /*returned*/ char *s1, char *s2) 
     /*@modifies *s1@*/ /*@bufferConstraint MaxSet(s1) >= MaxRead(s2); @*/;


void copyf (char * c) /*@bufferConstraint MaxSet(c) >= MaxRead(f); @*/
{
  mstrcpy (c, f);
}
