
extern void /*@alt char * @*/
  mystrncpy (/*@unique@*/ /*@out@*/ /*@returned@*/ char *s1, char *s2,
size_t n) 
  /*@modifies *s1@*/      /*@bufferConstraint MaxSet(s1) >= ( n - 1
); MaxRead (s2) >= ( n - 1 ); @*/ /*@ensuresConstraint MaxRead (s1) ==
MaxRead (s2); MaxRead (s1) <= n; @*/; 

 void f(char *z) /*@bufferConstraint MaxRead(z) >= 2; @*/
{
char x[3];
char y[3];

mystrncpy (x, z, 3);
mystrncpy (y, z, 3);

x[(sizeof x)] = 'i';
y[((sizeof y) - 1)] = '0';

}
