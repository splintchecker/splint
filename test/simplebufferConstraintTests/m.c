extern /*@null@*/ /*@out@*/ /*@only@*/ void *mymalloc (size_t size) /*@*/
     /*@LEnsures MaxSet(result) == (size - 1) @*/ ;
  
void t()
{
char *f;

f = mymalloc (3);
f[2] = '2';
free (f);
}
