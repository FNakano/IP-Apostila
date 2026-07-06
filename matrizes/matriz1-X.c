/* declarando uma matriz e preenchendo elementos */

#include <stdio.h>
#include <stdlib.h>   // aqui o protótipo da função rand() está definido
                      // ié a função é declarada.
                      // a função está definida em libc.so (glibc)

#define M 3   // macro - faz substituição de texto - substitui todas as ocorrências do texto M pelo texto 5
#define N 5

float m[M][N]; // as dimensões diferentes e de valores específicos vão nos ajudar...

float l[M][N]; // as dimensões diferentes e de valores específicos vão nos ajudar...


void imprime (float x[M][N]);   // protótipo - define como uma função é usada antes de definir seu funcionamento/comportamento/corpo
                                // útil em projetos maiores onde, habitualmente, as interfaces (protótipos) são definidas em grupo, 
                                // os comportamentos
                                // são combinados em conversas e o trabalho é distribuído definindo quem codifica o quê.

void sobrescreve ( float *x[M][N], float *y[M][N]) {
  *x=*y;
}


int main() {
  for (int i=0;i<M;i++) {
    for (int j=0;j<N;j++) {
      m[i][j]= rand()/10000.0;
    }
  }
  for (int i=0;i<M;i++) {
    for (int j=0;j<N;j++) {
      l[i][j]= rand()/10000.0;
    }
  }
  imprime (m);
  imprime (l);
//  m=l;
/*
 * <pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/matrizes</b></font>$ gcc matriz1-X.c 
<b>matriz1-X.c:</b> In function ‘<b>main</b>’:
<b>matriz1-X.c:34:4:</b> <font color="#EF2929"><b>error: </b></font>assignment to expression with array type
   34 |   m<font color="#EF2929"><b>=</b></font>l;
      |    <font color="#EF2929"><b>^</b></font>
</pre>
 * */
  sobrescreve (&m, &l);
  imprime (m);
}

void imprime (float x[M][N]) {
  for (int i=0;i<M;i++) {
    for (int j=0;j<N;j++) {
      printf ("%f\t", x[i][j]);
    }
    puts("");
  }
}

/*
 * Existe outro assunto importante: como usar essas matrizes para implementar
 * computacionalmente algoritmos matemáticos como calcular o determinante, 
 * fazer escalonamento (método de Gauss),...
 * ou algoritmos mais sofisticados como programação dinâmica e programação linear.
 * Para isso é interessante pensar em como percorrer a matriz (ex. imprimir os
 * elementos na diagonal de uma matriz quadrada), 
 * como calcular combinações lineares (assunto de MVGA)
 * nesse assunto, para nós, matemática e computação se encontram.
 */

