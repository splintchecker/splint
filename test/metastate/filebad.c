extern /*@open@*/ int badOpen (/*@closed@*/ FILE *p_f);

extern int badEnsures (FILE *p_f, int p_x)
     /*@ensures open p_x;@*/
     /*@requires closed p_x;@*/ ;
