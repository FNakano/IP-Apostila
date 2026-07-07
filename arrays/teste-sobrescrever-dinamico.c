/* teste-sobrescrever-dinamico.c */
#include <stdio.h>
#include <stdlib.h>

#define N 5

// float m[N];
// float l[N];

float *m;
float *l;

void imprime (float x[N]) {
  for (int j=0;j<N;j++) {
    printf ("%f\t", x[j]);
  }
  puts("");
}


int main() {

  m=(float *) malloc (N*sizeof (float));
  l=(float *) malloc (N*sizeof (float));
  
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
  free (m);
  // free (l); // da maneira como está escrito o programa, deveria ter liberado
               // a memória alocada para l antes, agora já não dá mais...
               // ... não é possível, neste programa, recuperar a referência 
               // perdida.
}
