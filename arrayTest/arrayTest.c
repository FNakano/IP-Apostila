#include <stdio.h>
#include <string.h>

char nome[128];

typedef char NOME[128];

/* quando um array é passado como argumento (parâmetro) ele "decai para ponteiro"
 * 22.1.4.1 Array parameters are pointers
Declaring a function parameter variable as an array really gives it a pointer type. C does
this because an expression with array type, if used as an argument in a function call, is
converted automatically to a pointer (to the zeroth element of the array). If you declare the
corresponding parameter as an “array”, it will work correctly with the pointer value that
really gets passed.
This relates to the fact that C does not check array bounds in access to elements of the
array (see Section 16.1 [Accessing Array Elements], page 88). 
* https://www.catania.linux.it/pdf/content/gnu_c_language.pdf
* */
int printNome (char n[128]) {
  printf ("%d, %s\n", sizeof n, n);
}

int printNOME (NOME n) {
  printf ("%d, %s\n", sizeof n, n);
}

int main () {
  NOME outro;
  strcpy (nome,"Marco Aurélio");
  printf ("%lu, %s\n", sizeof nome, nome);
  printNome (nome);
  strcpy (outro,"Gil Vicente");
  printNOME (outro);
  printNome (outro);
}
