int f (int x)
{
  int p;

  switch (x)
    {
    case 1:
      p = 2; break;
    case 2:
      p = 3; break;
    default:
      return 0;
    }

  return p;
}
