extern void checkUntainted (char **s) /*@requires untainted *s@*/;
extern void checkTainted (char **s) /*@requires tainted *s@*/;

void test (char *def) /*@requires untainted def@*/ 
{
  checkUntainted (&def); 
  checkTainted (&def); /* error */
}

void test2 (char **def) /*@requires untainted *def@*/ 
{
  checkUntainted (def); 
  checkTainted (def); /* error */
}
