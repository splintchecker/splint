typedef /*@only@*/ char *ocp;

extern /*@only@*/ char *stringTable;
extern int stringTableSize;

void destroyMod (void) /*@globals killed stringTable@*/
{
  free (stringTable);
}
