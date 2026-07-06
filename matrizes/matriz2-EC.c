/* declarando uma matriz e preenchendo elementos */

#include <stdio.h>
#include <stdlib.h>   // aqui o protótipo da função rand() está definido
                      // ié a função é declarada.
                      // a função está definida em libc.so (glibc)

#define M 3   // macro - faz substituição de texto - substitui todas as ocorrências do texto M pelo texto 5
#define N 5

float **m; // as dimensões diferentes e de valores específicos vão nos ajudar...

void imprime (float **x);   // protótipo - define como uma função é usada antes de definir seu funcionamento/comportamento/corpo
                                // útil em projetos maiores onde, habitualmente, as interfaces (protótipos) são definidas em grupo, 
                                // os comportamentos
                                // são combinados em conversas e o trabalho é distribuído definindo quem codifica o quê.

void imprimeEC(float **x);
void imprimeL(float **x);

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
  imprimeEC (m);
  imprimeL (m);
}

void imprime (float **x) {
  for (int i=0;i<M;i++) {
    for (int j=0;j<N;j++) {
      printf ("%f\t", m[i][j]);
    }
    puts("");
  }
}

void imprimeEC(float **x) {

  printf ("{%p, %p}\n", &m, m);
  for (int i=0;i<M;i++) {
    for (int j=0;j<N;j++) {
      printf ("{%p, %f}\t", &(m[i][j]), m[i][j]);
    }
    puts("");
  }
}

void imprimeL(float **x) {

  printf ("{%p, %p}\n", &m, m);
  for (int i=0;i<M;i++) {
    printf ("{%p, %p}\t", &(m[i]), m[i]);
    puts("");
  }
}
