/*@-booltype Kzam@*/
typedef int Kzam;

enum { TRUE, FALSE } ;

int main() {
  Kzam b = TRUE;
  Kzam b1 = b;

  b = TRUE;
  b = b1;
  b = 12; /* Assignment of int to Kzam: b = 12 */

  b = TRUE && FALSE;
  b = b && FALSE;
  b = FALSE && b;

  if ((b && FALSE) == 0)
    return(0);
  return(0);
}
