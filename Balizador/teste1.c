#include "dados.h"

int main () {
  int n=15;
  pessoa *p=criaArray(n);
  puts ("Teste1: Criação de 15 pessoas.");
  imprimeArray(p, n);
  return 0;
}
