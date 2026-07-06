/* Estava explorando matrizes alocadas estaticamente. Fiquei surpreso com 
 * o funcionamento do operador &. Esta é a tentativa de isolar o que vi... */

#include <stdio.h>
#include <stdlib.h>

#define N 5

float m[N];
float l[N];
float k[];

void imprime (float x[N]);

/*
void sobrescreve ( float *x[M][N], float *y[M][N]) {
  *x=*y;
}
*/

int main() {
  for (int j=0;j<N;j++) {
    m[j]= rand()/10000.0;
  }
  for (int j=0;j<N;j++) {
    l[j]= rand()/10000.0;
  }
  imprime (m);
  imprime (l);
  k=m;
//  m=l;
//  sobrescreve (&m, &l);
  imprime (m);
}

void imprime (float x[N]) {
  for (int j=0;j<N;j++) {
    printf ("%f\t", x[j]);
  }
  puts("");
}

