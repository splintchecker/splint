typedef struct
{
  /*@only@*/ /*@open@*/ FILE *file; 
} *source;
# if 0
source source_open (char *name)
{
  source s = malloc (sizeof (*s));
  assert (s != NULL);
  (*s).file = fopen (name, "r");
  assert (s->file != NULL);
  return s;
}

void source_putc (source s, char c)
{
  (void) fputc (c, s->file);
}
#endif

void source_badClose (source s)
{
  // free (s->file);
  (void) fclose (s->file);
}
