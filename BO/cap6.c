#include <stdio.h>

// float a[]={3.14, 1.61, 2.78, 2.3, 1.4142, 0.866}; int n=6;
// float a[]={3.14, 1.61, 2.78, 2.3, 1.4142, 0.866, 5, 17, 11}; int n=9;
float a[]={3.14, 1.61, 2.78}; int n=3;

void imprime (float a[], int n) {
  int i;
  puts ("\narray:\n");
  for (i=0;i<n; i++) {
    printf ("%lf\n", a[i]);
  }
}

int main () {
  printf ("Ola");
  int i;
  for (i=0;i<sizeof(a)/sizeof(float); i++) {
    printf ("%lf\n", a[i]);
  }
  imprime (a, n);
  return 0;
}

/* 9:38
<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ gcc cap3.c
<b>cap3.c:</b> In function ‘<b>main</b>’:
<b>cap3.c:10:43:</b> <font color="#EF2929"><b>error: </b></font>expected ‘<b>;</b>’ before ‘<b>)</b>’ token
   10 |   for (i=0;i&lt;sizeof(a)/sizeof(double), i++<font color="#EF2929"><b>)</b></font> {
      |                                           <font color="#EF2929"><b>^</b></font>
      |                                           <font color="#4E9A06">;</font>
</pre>
*/

/* 9:40
<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ ./a.out
Ola3.140000
1.610000
2.780000
2.300000
</pre>

Escrevendo na tela menos elementos que o esperado - erro: usei sizeof double ao invés de sizeof float. Vi isso quando testei o segundo array
*/

/* 9:42 */

/* 9:44
Criei a função para imprimir elementos na tela, por copy paste do trecho de main. Não apaguei pois pretendo comparar o que for impresso.
*/
/* 9:46

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ gcc cap5.c
<b>cap5.c:</b> In function ‘<b>imprime</b>’:
<b>cap5.c:9:20:</b> <font color="#AD7FA8"><b>warning: </b></font>‘<b>sizeof</b>’ on array function parameter ‘<b>a</b>’ will return size of ‘<b>float *</b>’ [<font color="#AD7FA8"><b>-Wsizeof-array-argument</b></font>]
    9 |   for (i=0;i&lt;sizeof<font color="#AD7FA8"><b>(</b></font>a)/sizeof(float); i++) {
      |                    <font color="#AD7FA8"><b>^</b></font>
<b>cap5.c:7:21:</b> <font color="#34E2E2"><b>note: </b></font>declared here
    7 | void imprime (<font color="#34E2E2"><b>float a[]</b></font>) {
      |               <font color="#34E2E2"><b>~~~~~~^~~</b></font>
</pre>

É só um warning então o compilador gerou o executável, vou executar...

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ ./a.out
Ola3.140000
1.610000
2.780000
2.300000
1.414200
0.866000
3.140000
1.610000
</pre>

problema: não imprime todos os elementos... olha o que está no warning... ele indica que houve uma conversão (implícita) de tipo e que isso poderia ter consequências na função
... se pesquisar um pouco na internet vai ver que existe um termo: array to pointer decay, que explica o que ocorreu...
... a solução é manter o comprimento do array em uma variável e passá-la como parâmetro.
*/

/* 9:55
... além de resolver o array to pointer decay, 
... ficou ruim de ver final e começo do array impresso - dar um jeito...

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ gcc cap6.c
<b>cap6.c:</b> In function ‘<b>main</b>’:
<b>cap6.c:21:3:</b> <font color="#EF2929"><b>error: </b></font>too few arguments to function ‘<b>imprime</b>’
   21 |   <font color="#EF2929"><b>imprime</b></font> (a);
      |   <font color="#EF2929"><b>^~~~~~~</b></font>
<b>cap6.c:7:6:</b> <font color="#34E2E2"><b>note: </b></font>declared here
    7 | void <font color="#34E2E2"><b>imprime</b></font> (float a[], int n) {
      |      <font color="#34E2E2"><b>^~~~~~~</b></font>
</pre>

esqueci de arrumar a chamada da função...

*/

/* 9:58
Feito e testado para os três arrays, mostrando resultado para um :
<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ ./a.out
Ola3.140000
1.610000
2.780000
2.300000
1.414200
0.866000

array:

3.140000
1.610000
2.780000
2.300000
1.414200
0.866000
</pre>
*/

