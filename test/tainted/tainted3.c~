extern void checkUntainted (char *s) /*@requires untainted s@*/;
extern void checkTainted (char *s) /*@requires tainted s@*/;

void test (/*@tainted@*/ char *def)
{
  checkTainted (def);
  checkUntainted (def); /* error */
}
