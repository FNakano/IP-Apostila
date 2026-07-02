/* declarando dinamicamente uma matriz como array de vetores e preenchendo elementos */

#include <stdio.h>
#include <stdlib.h>   // aqui o protótipo da função rand() está definido
                      // ié a função é declarada.
                      // a função está definida em libc.so (glibc)

#define M 5
#define N 11

float **m; // as dimensões diferentes e de valores específicos vão nos ajudar...

void imprime (float **x);   // protótipo - define como uma função é usada antes de definir seu funcionamento/comportamento/corpo
                                // útil em projetos maiores onde, habitualmente, as interfaces (protótipos) são definidas em grupo, 
                                // os comportamentos
                                // são combinados em conversas e o trabalho é distribuído definindo quem codifica o quê.

int main() {
  m= (float **) malloc (M*sizeof (float *));  // array de ponteiros para linhas
  for (int i=0;i<M;i++) {
    m[i]= (float *) malloc (N*sizeof (float));  // array de float (uma linha
  }
  for (int i=0;i<M;i++) {
    for (int j=0;j<N;j++) {
      m[i][j]= rand()/10000.0;
    }
  }
  imprime (m);
  for (int i=0;i<M;i++) {
    free(m[i]);  // boa prática: liberar memória (como o programa está terminando, isto seria feito automaticamente
  }
  free(m);
}

void imprime (float **x) {
  for (int i=0;i<M;i++) {
    for (int j=0;j<N;j++) {
      printf ("%f\t", m[i][j]);
    }
    puts("");
  }
}

