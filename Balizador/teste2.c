#include "dados.h"

int main () {
  int n=0;
  pessoa *p;
  puts ("Teste2: leitura do arquivo pessoas.csv");
  n=leArray(&p, "pessoas.csv");
  imprimeArray(p, n);
  return 0;
}
