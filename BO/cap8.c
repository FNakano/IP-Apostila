#include <stdio.h>

float a[]={3.14, 1.61, 2.78, 2.3, 1.4142, 0.866}; int n=6;
// float a[]={3.14, 1.61, 2.78, 2.3, 1.4142, 0.866, 5, 17, 11}; int n=9;
// float a[]={3.14, 1.61, 2.78}; int n=3;

void imprime (float a[], int n) {
  int i;
  puts ("\narray:\n");
  for (i=0;i<n; i++) {
    printf ("%lf\n", a[i]);
  }
}

int busca (float a[], int n) {
  int i;
  int imaior=-1; /* depois de escrever a função percebi que os valores negativos dos índices não são usados então posso indicar erros através desses valores */
  int vmaior;
  if (n>0) {
    puts ("\narray:\n");
    imaior=0;
    vmaior=a[imaior];
    
    for (i=1;i<n; i++) {
      if (a[i]>vmaior) {
        imaior=i;
        vmaior=a[i];
      }
    }
  }
  return imaior;
}

int main () {
  printf ("Ola");
  int i;
  for (i=0;i<sizeof(a)/sizeof(float); i++) {
    printf ("%lf\n", a[i]);
  }
  imprime (a, n);
  printf ("imaior: %d\n", busca (a, n));
  
  /* existe um padrãozinho aqui... para trocar posição de elementos no array... */
  int imaior;
  imaior=busca(a,n);
  float aux;
  aux=a[n-1];
  a[n-1]=a[imaior];
  a[imaior]=aux;
  
  /* imprime e vê se funciona... */
  
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
... se pesquisar um pouco na internet vai ver que existe um termo: array to pointer decay, que explica o que ocorreu... gemini me ajudou com o nome...
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
/* 10:04 - código com a função busca(). terminei de escrever a primeira versão, agora testar

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ ./a.out
Ola3.140000
1.610000
2.780000

array:

3.140000
1.610000
2.780000

array:

imaior: 0
</pre>

Compilou de primeira mas errou o resultado ... vamos ver o que houve... não errou... eu que tô maluco... testar outros arrays...
... vi que os testes estão ruins pois em dois deles o maior é o de índice zero ... poderia mudar algum dos testes ou manter, lembrando dessa ressalva... nenhuma das alternativas é boa. A melhor seria ter escolhido os testes com mais cuidado no início...

Fim: 10:10
*/
/* 10:11 Trocar o último com o maior...
<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ gcc cap8.c
<b>cap8.c:</b> In function ‘<b>main</b>’:
<b>cap8.c:46:4:</b> <font color="#EF2929"><b>error: </b></font>array subscript is not an integer
   46 |   a<font color="#EF2929"><b>[</b></font>aux]=a[n-1];
      |    <font color="#EF2929"><b>^</b></font>
<b>cap8.c:47:11:</b> <font color="#EF2929"><b>error: </b></font>array subscript is not an integer
   47 |   a[n-1]=a<font color="#EF2929"><b>[</b></font>aux];
      |           <font color="#EF2929"><b>^</b></font>
</pre>

primeiro teste às 10:16 tem um errinho...

... ok, o tipo de aux deve ser int mesmo...

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

array:

imaior: 0

array:


array:

0.866000
1.610000
2.780000
2.300000
1.414200
0.866000
</pre>

... não funcionou... tô maluco, o tipo de aux é float, a cópia do valor que o elemento contém é que precisa ser arrumada...

... baile digno de nota...

  // existe um padrãozinho aqui... para trocar posição de elementos no array... 
  float aux;
  aux=a[busca(a,n)];
  a[aux]=a[n-1];
  a[n-1]=a[aux];

... 10:26 resolveu, pausa para café 

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

array:

imaior: 0

array:


array:

0.866000
1.610000
2.780000
2.300000
1.414200
3.140000
</pre>

*/

