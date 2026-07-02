/* matriz declarada estaticamente versus matriz declarada dinamicamente. */

#include <stdio.h>
#include <stdlib.h>  // malloc e free

#define N 5

int main () {
  float s[]={1.1, 2.2, 3.3, 4.4, 5.5};
//  float *s2={1.1, 2.2, 3.3, 4.4, 5.5};  // erro de tipos incompatíveis
  float *d;
  d=(float *) malloc (N*sizeof (float));
  d[0]=1.11;  // para distinguir d de s
  for (int i=1;i<N;i++) {
    d[i]=d[i-1]+1.1; // olhe para esse jeito de inicializar - é uma sequência matemática!!
  }
  puts ("s, d");
  for (int i=0;i<N;i++) {
    printf ("%f, %f\n", s[i], d[i]);
  }

/* até aqui, previsível...*/
/* a partir de agora... */

  printf ("%p, %p, %f, %f - acho que a resposta para o uso de s quando s é alocado estaticamente é \"forçado por convenção\" para não dar erro de sintaxe...\n", &s, s, *s, s[0]);
  printf ("%p, %p, %f, %f\n", &d, d, *d, d[0]);

/* ... e agora... */

//  printf ("%p, %p %f\n", &s[0], s[0], *s[0]);
//  printf ("%p, %p %f\n", &d[0], d[0], *d[0]);

/* ... e agora... */

  printf ("%p, %f\n", &s[0], s[0]);
  printf ("%p, %f\n", &d[0], d[0]);

/* ... e agora... */

  printf ("%p, %f\n", &s[1], s[1]);
  printf ("%p, %f\n", &d[1], d[1]);

  free (d);
}
