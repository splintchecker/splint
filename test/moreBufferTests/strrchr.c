
extern /*@null@*/ /*@exposed@*/ char *
strrchr (/*@returned@*/ char *s, int /*@alt char@*/ c)     /*@*/  /*@LEnsures MaxSet(result) >= 0 /\ MaxSet(result) <= MaxSet(s) /\ MaxRead (result) <= MaxRead(s) /\ MaxRead(result) >= 0 @*/ ;

void
bar (char * t)
{

  char *ot = t;
  
  char *tt;
  tt = strrchr (t, '\n');
}


