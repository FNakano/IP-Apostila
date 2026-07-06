/* teste-sobrescrever.c */
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
  imprime (m);
  imprime (l);
  m=l;   // se m e l fossem ponteiros, esta linha é suficiente para fazer m
         // apontar para o mesmo conteúdo de l.
  imprime (m);
}

