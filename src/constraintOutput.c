/*
** constraintOutput.c
*/

# include "lclintMacros.nf"
# include "basic.h"
# include "portab.h"

#define testingFlag  FLG_BUFFEROVERFLOW
//FLG_BUFF
//FLG_NULLTERMINATED

void ConPrint (char * string, fileloc loc)
{
  if (context_getFlag (testingFlag ) )
    {
      voptgenerror (testingFlag, string, loc);
    }
  
}

void BPRINTF (char * string)
{
 if (context_getFlag (testingFlag ) )
   {
     DPRINTF( (message ("%s", string) ) );
   }
}
