/*
** Boolean type checking
*/

typedef int bool;

bool f (int i, bool b) {
  if (i) { /* error with -boolint -predboolint */
    return i; /* error with -boolint */
  } else {
    return b; /* okay */
  }
}

