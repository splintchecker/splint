extern unknown (int *x);
extern inparam (/*@in@*/ int *x);

void f (/*@out@*/ int *x)
{
  if (3 > 4)
    {
      unknown (x);
    }
  else
    {
      inparam (x);
    }
}
