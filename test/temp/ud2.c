void g (void)
{
  char *x;

  f1(&x); 
  printf("%s\n", x); 
}

void h (void)
{
  int z;
  f3 (&z); /* okay! */
}
