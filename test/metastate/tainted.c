/*@untainted@*/ char *f (/*@tainted@*/ char *s, /*@untainted@*/ char *us)
{
  char *x = f (us, s); /* Error: tainted as untainted */
  return f (x, us);
}

void test (/*@tainted@*/ char *s)
{
  (void) system (s);
}
