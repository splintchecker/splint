int f (void)
{
  char *s;

  s = malloc (sizeof (char));

  if (s == NULL)
    {
      return 0;
    }


  return 1;
}
     
