extern void fdep (/*@dependent@*/ char *s);

char *salloc ()
{
  char x[10];

  fdep (x);
}
