void beyond (int *) /*@modifies $2@*/;
void ellipsis (int *, ...) /*@modifies $2@*/;
void no_params (void) /*@modifies $1@*/;
void missing_params () /*@modifies $1@*/;
void int_overflow (int *) /*@modifies $4294967297@*/;
void long_overflow (int *) /*@modifies $999999999999999999999999999999@*/;
