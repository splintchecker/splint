int f (/*@open@*/ /*@read@*/ FILE *f1, /*@open@*/ /*@write@*/ FILE *f2)
{
  fgetc (f1);
  fgetc (f2); /* error: not readable */
  
  fputc ('a', f1);
  fseek (f1, 0, SEEK_CUR); 
  fputc ('a', f1);

  fgetc (f1); /* error */
}
