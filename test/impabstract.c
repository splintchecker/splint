typedef int mint;
typedef /*@concrete@*/ int cint;

int f (mint m, cint c)
{
  if (c > 3)
    {
      return c;
    }

  if (m < 2)
    {
      return m;
    }

  return 3;
}
