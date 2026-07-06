/* teste-imprimir.c */
#include <stdio.h>
#include <stdlib.h>

#define N 5

float m[N];
float l[N];

void imprime (float x[N]) {
  for (int j=0;j<N;j++) {
    printf ("%f\t", x[j]);
  }
  puts("");
}


int main() {
  for (int j=0;j<N;j++) { // inicializa elementos de m
    m[j]= rand()/10000.0;
  }
  for (int j=0;j<N;j++) { // inicializa elementos de l
    l[j]= rand()/10000.0;
  }
  printf ("m:{%p, %p}\n", &(m), m);  // imprime o endereço onde m está
                                     // armazenado e o valor armazenado em m.
  for (int j=0;j<N;j++) {
    printf ("{%p, %f}\t", &(m[j]), m[j]);
  }
  puts("");
}

