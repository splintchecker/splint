
/*@constant int bSIZE@*/

void uknSize1()
{
  char b[bSIZE];
  char c[bSIZE];

  c[9] = 'l';
  b[sizeof b - 1] = 'd';

}

void unkSize2()
{
  char b[bSIZE];

  b[sizeof b - 1] = 'd';

}
