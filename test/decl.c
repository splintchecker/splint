int test(int);

int main()
{
  int (*y)(int) = &test;
  int (**x)(int) = &y;
  x(10);  /* called object is not a function */
}
