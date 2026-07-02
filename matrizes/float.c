/* em matemática, um número ou um array com um elemento, ou uma matriz com um elemento são a mesma coisa mas em programas são coisas diferentes */

#include <stdio.h>
#include <stdlib.h>

int main () {
  float f=1.1;
  float a[1]={11.1};
  float b[1][1]={11.1};
//  printf ("%p, %f, %f \n", &f, f, *f);  // esse erro é pego como erro de sintaxe mas pode ser um erro conceitual... pensar que é possível acessar o conteúdo de um float
  printf ("%p, %f \n", &f, f);  // esse erro é pego como erro de sintaxe mas pode ser um erro conceitual...
  printf ("%p, %p, %f, %f \n", &a, a, *a, a[0]);
//  printf ("%p, %p, %f, %f \n", &b, b, *b, b[0]);
  /*
float.c: In function ‘main’:
float.c:13:21: warning: format ‘%f’ expects argument of type ‘double’, but argument 4 has type ‘float *’ [-Wformat=]
   13 |   printf ("%p, %p, %f, %f \n", &b, b, *b, b[0]);
      |                    ~^                  ~
      |                     |                  |
      |                     double             float *
float.c:13:25: warning: format ‘%f’ expects argument of type ‘double’, but argument 5 has type ‘float *’ [-Wformat=]
   13 |   printf ("%p, %p, %f, %f \n", &b, b, *b, b[0]);
      |                        ~^                 ~~~~
      |                         |                  |
      |                         double             float *

   */
  printf ("%p, %p, %p, %p, %f, %f \n", &b, b, *b, b[0], **b, *b[0]);
}

/* 'float.c': float comparado com array comparado com matriz com alocação estática
 * 'matriz0.c': array (uma dimensão) alocação estática comparado a alocação dinâmica
 * 'matriz1.c': matriz (duas dimensões) alocação estática, com preenchimento
 * 'matriz1-reverso.c': matriz (duas dimensões alocação estática), análise para entender estrutura interna
 * 'matriz2.c': matriz (duas dimensões) alocação estática e alocação dinâmica
 * 'matriz2-reverso.c': matriz (duas dimensões) alocação estática e alocação dinâmica, análise para entender estrutura interna, ponteiro de ponteiro.
 */
