void anon_first (int *) /*@modifies *$1@*/;
void anon_second (int, int *) /*@modifies *$2@*/;
void anon_named (int *p) /*@modifies *$1@*/;
void anon_variadic (int *, ...) /*@modifies *$1@*/;
void anon_array (int *) /*@modifies $1[0]@*/;

struct record { int value; };
void anon_field (struct record *) /*@modifies $1->value@*/;

void anon_first (int *p)
{
  *p = 1;
}

void allowed (int *p, struct record *r) /*@modifies *p, r->value@*/
{
  anon_first (p);
  anon_second (0, p);
  anon_named (p);
  anon_variadic (p, p);
  anon_array (p);
  anon_field (r);
}

void disallowed (int *p) /*@modifies nothing@*/
{
  anon_second (0, p);
}
