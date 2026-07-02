#include <stdio.h>
#include <stdlib.h>

int main () {
  float f=1.1;
  float *pf;  // na declaração asterisco implica que a variável criada é um ponteiro
//  printf ("%p, %f, %f \n", &f, f, *f);  // esse erro é pego como erro de sintaxe mas pode ser um erro conceitual... pensar que é possível acessar o conteúdo de um float
  printf ("%p, %f \n", &f, f);  // esse erro é pego como erro de sintaxe mas pode ser um erro conceitual...
  pf=(float *) malloc (sizeof (float));
  *pf=1.11;
  printf ("%p, %p, %f \n", &pf, pf, *pf); // numa expressão o asterisco como operador unário faz acessar o conteúdo referenciado
  /* pensando em uma variável, v, 
   * podemos falar (ié em Português) em 'endereço de v', 'v' e 'conteúdo de v'.
   * se a variável for de tipo escalar e não for ponteiro (ié int, float, char, ...), 
   * as expressões (em Português) 'v' e 'conteúdo de v' referem-se à mesma coisa.
   * se a variável for de tipo ponteiro, 
   * as expressões 'v' e 'conteúdo de v' referem-se a coisas diferentes.
   * em ambos, a expressão 'endereço de v' refere-se a ainda outra coisa.
   */
   /* vamos complicar e colocar um array com um elemento... */
  float a[1]={11.1};
  printf ("%p, %p, %f, %f \n", &a, a, *a, a[0]);
  free(pf);
}
