#include <stdio.h>

struct Ordem1 {
  char c1;
  char c2;
  float *f;
};

struct Ordem2 {
  char c1;
  float *f;
  char c2;
};

int main () {
  printf ("Memória que ocupa um char: %ld\n", sizeof (char));
  printf ("Memória que ocupa uma instância de {Ordem1:%ld,Ordem2:%ld}\n", sizeof (struct Ordem1), sizeof (struct Ordem2));
  return 0;
}
