/* Compound literals in function parameters, added to C99 */
struct simple {
  int a;
  int b;
};

extern void fct(struct simple ab);

int main (/*@unused@*/ int argc, /*@unused@*/ char **argv) {

  fct((struct simple){1, 2});
  return 1;
}
