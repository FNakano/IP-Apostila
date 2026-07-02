#include <stdio.h>

// float a[]={3.14, 1.61, 2.78, 2.3, 1.4142, 0.866}; int n=6;
float a[]={3.14, 1.61, 2.78, 2.3, 1.4142, 0.866, 5, 17, 11}; int n=9;
// float a[]={3.14, 1.61, 2.78}; int n=3;
// float a[]={3.14, 1.61, 2.78, 2.3, 1.4142}; int n=5;
// float a[]={1.61, 2.78, 2.3}; int n=3;
// float a[]={2.78, 2.3}; int n=2;

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
  float vmaior;   // 3 - este tipo de dados estava errado, devia ser float mas eu tinha posto int...
  if (n>0) {
    printf ("\nbusca %d:\n", n);  // 1 - arrumei isto para distinguir de escreve...
                                  // 2 - depurando, parece que devia ter trocado mas não trocou...
    imaior=0;
    vmaior=a[imaior];

    // printf ("vmaior=%f\n 2 - quando estava escrevendo isto lembrei de olhar para o tipo de dados de vmaior, aí achei o erro...
       
    for (i=1;i<n; i++) {
      if (a[i]>vmaior) {
        imaior=i;
        vmaior=a[i];
      }
    }
  }
  return imaior;
}

void troca (float a[], int i, int j) {
  /* existe um padrãozinho aqui... para trocar posição de elementos no array... */
  //int imaior;
  //imaior=busca(a,n);
  float aux;
  aux=a[j];
  a[j]=a[i];
  a[i]=aux;
}

int main () {
  printf ("Ola");
  int i;
  for (i=0;i<sizeof(a)/sizeof(float); i++) {
    printf ("%lf\n", a[i]);
  }
  imprime (a, n);
  printf ("imaior: %d\n", busca (a, n));

  for (int k=n-1;k>=0;k--) { /* decrescente pois posiciona o maior no final */
    int imaior;
    imaior=busca(a,k+1);   // olha o problema de índice aqui!
    printf ("%d <-> %d\n", imaior, k); // 2 - acrescentei este para ver a troca que deveria ter acontecido mas não aconteceu...
    troca (a, imaior, k);
  
    /* imprime cada passo ... */
  
    imprime (a, n);
  }
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

... 10:26 resolveu, pausa para café , volta do café às 10:33

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

/* 10:33 escrever a parte da ordenação...
... encapsular a troca...
10:38
... parou de funcionar... vamos ver...
... colocar na conta dos typos... pus um j ao invés de i, corrigi, funcionou...

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
/* 10:43, escrever a parte da ordenação

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ ./a.out
Ola3.140000
1.610000
2.780000
2.300000
1.414200
0.866000
5.000000
17.000000
11.000000

array:

3.140000
1.610000
2.780000
2.300000
1.414200
0.866000
5.000000
17.000000
11.000000

array:

imaior: 7

array:


array:

3.140000
1.610000
2.780000
2.300000
1.414200
0.866000
5.000000
11.000000
17.000000

array:


array:

3.140000
1.610000
2.780000
2.300000
1.414200
0.866000
11.000000
5.000000
17.000000

array:


array:

11.000000
1.610000
2.780000
2.300000
1.414200
0.866000
3.140000
5.000000
17.000000

array:


array:

0.866000
1.610000
2.780000
2.300000
1.414200
11.000000
3.140000
5.000000
17.000000

array:


array:

0.866000
1.610000
2.780000
1.414200
2.300000
11.000000
3.140000
5.000000
17.000000

array:


array:

0.866000
1.610000
1.414200
2.780000
2.300000
11.000000
3.140000
5.000000
17.000000

array:


array:

0.866000
1.414200
1.610000
2.780000
2.300000
11.000000
3.140000
5.000000
17.000000

array:


array:

1.414200
0.866000
1.610000
2.780000
2.300000
11.000000
3.140000
5.000000
17.000000

array:

0.000000
0.866000
1.610000
2.780000
2.300000
11.000000
3.140000
5.000000
17.000000
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ 

</pre>

primeiro teste às 10:48, pela última iteração, que inclui o elemento 0.00000, deve ser problema com índices...

10:51, parece que foi... só que não...

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ ./a.out
Ola3.140000
1.610000
2.780000
2.300000
1.414200
0.866000
5.000000
17.000000
11.000000

array:

3.140000
1.610000
2.780000
2.300000
1.414200
0.866000
5.000000
17.000000
11.000000

array:

imaior: 7

array:


array:

3.140000
1.610000
2.780000
2.300000
1.414200
0.866000
5.000000
11.000000
17.000000

array:


array:

3.140000
1.610000
2.780000
2.300000
1.414200
0.866000
5.000000
11.000000
17.000000

array:


array:

3.140000
1.610000
2.780000
2.300000
1.414200
0.866000
5.000000
11.000000
17.000000

array:


array:

0.866000
1.610000
2.780000
2.300000
1.414200
3.140000
5.000000
11.000000
17.000000

array:


array:

0.866000
1.610000
2.780000
1.414200
2.300000   <--- o maior deveria ser 2.78!!
3.140000
5.000000
11.000000
17.000000

array:


array:

0.866000
1.610000
1.414200
2.780000
2.300000
3.140000
5.000000
11.000000
17.000000

array:


array:

0.866000
1.610000
1.414200
2.780000
2.300000
3.140000
5.000000
11.000000
17.000000

array:


array:

0.866000
1.610000
1.414200
2.780000
2.300000
3.140000
5.000000
11.000000
17.000000

array:


array:

0.866000
1.610000
1.414200
2.780000
2.300000
3.140000
5.000000
11.000000
17.000000
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ 

</pre>

*/

/*
10:58 ... vamos ver qual o menor problema em que o erro acontece ...
... o de três elementos apresenta o array ordenado.
... o de seis elementos não...
... tirei um elemento do de seis, continua apresentando fora de ordem...
... tirei mais um elemento, ordenou...
... devolvi o elemento (com undo, o que não é tão bom pq pode falhar, mas é o que foi :D ...)
... em princípio não faz muito sentido mas parece que a ordenação falha quando o maior é o penúltimo...

... consegui reproduzir o erro...

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ ./a.out
Ola0.140000
1.610000
2.780000
2.300000

array:

0.140000
1.610000
2.780000
2.300000

array:

imaior: 3

array:


array:

0.140000
1.610000
2.780000
2.300000

array:


array:

0.140000
1.610000
2.780000
2.300000

array:


array:

0.140000
1.610000
2.780000
2.300000

array:


array:

0.140000
1.610000
2.780000
2.300000
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ 

</pre>


*/

/* 11:12 ... ver se consegue diminuir para 3 elementos...
 ... ver se consegue diminuir para 2 elementos...
 ... consegui, o erro continua acontecendo, agora depurar...

... esperava que trocasse mas não troca!

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ ./a.out
Ola2.780000
2.300000

array:

2.780000
2.300000

busca 2:
imaior: 1

busca 2:
1 &lt;-&gt; 1

array:

2.780000
2.300000

busca 1:
0 &lt;-&gt; 0

array:

2.780000
2.300000
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ 
</pre>

11:37... achei (acho), o tipo de dados de vmaior deveria ser float mas eu tinha posto int...

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ ./a.out
Ola2.780000
2.300000

array:

2.780000
2.300000

busca 2:
imaior: 0

busca 2:
0 &lt;-&gt; 1

array:

2.300000
2.780000

busca 1:
0 &lt;-&gt; 0

array:

2.300000
2.780000
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/BO</b></font>$ 

</pre>

*/

/* 11:40 testando os casos com mais elementos... todos imprimem os elementos ordenados.
... localizei o problema a partir de uma suposição falsa (que quando o penúltimo era o maior a ordenação falhava)
isso permitiu criar um problema pequeno em que a ordenação falhava e a encontrar o real problema:
o tipo de dados estava errado, por isso o valor era truncado. Como estava antes, o ordenador falharia
(intermitentemente) quando a parte inteira dos números fosse igual.
*/

