# Arrays segundo a norma e testes

Comecemos com o que está escrito na norma:
  
![](./Captura%20de%20tela%20de%202026-07-06%2013-01-52.png)

No parágrafo 4 afirma-se que `int x[3][5]` é uma declaração de um array de tamanho 3 X 5 e segue dando informação adicional e aponta para *6.3.2.1 lvalues, arrays and function designators*:

![](./Captura%20de%20tela%20de%202026-07-06%2013-02-55.png)

Segundo 6.3.2.1, parágrafo 1, um array não é um *modifiable lvalue*. O restante do parágrafo dá a entender que algo no array é equiparável a uma constante.

Vamos escrever um programa em que definimos dois arrays de mesmo tamanho e tentamos sobrescrever um com o outro:
  
```c
/* teste-sobrescrever.c */
#include <stdio.h>
#include <stdlib.h>

#define N 5

float m[N];
float l[N];

void imprime (float x[N]) {
  for (int j=0;j<N;j++) {
    printf ("%f\t", x[j]);
  }
  puts("");
}


int main() {
  for (int j=0;j<N;j++) { // inicializa elementos de m
    m[j]= rand()/10000.0;
  }
  for (int j=0;j<N;j++) { // inicializa elementos de l
    l[j]= rand()/10000.0;
  }
  imprime (m);
  imprime (l);
  m=l;   // se m e l fossem ponteiros, esta linha é suficiente para fazer m
         // apontar para o mesmo conteúdo de l.
  imprime (m);
}

```

Acontece que a compilação desse programa resulta no erro de compilação:
  
<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/arrays</b></font>$ gcc teste-sobrescrever.c 
<b>teste-sobrescrever.c:</b> In function ‘<b>main</b>’:
<b>teste-sobrescrever.c:26:4:</b> <font color="#EF2929"><b>error: </b></font>assignment to expression with array type
   26 |   m<font color="#EF2929"><b>=</b></font>l;   // se m e l fossem ponteiros, esta linha é suficiente para fazer m
      |    <font color="#EF2929"><b>^</b></font>
</pre>

Observando que os elementos de `m` e de `l` foram modificados e impressos (porque comentando a linha `m=l` o código compila e executa, inicializando os arrays e os imprimindo na tela). O que não é modificável é `m`. Como consequência, seu valor não pode ser trocado.

Quanto vale `m`? Voltando à documentação, esse lvalue é uma referência. Isto permite considerá-lo um endereço de memória.

O valor de `m` é uma referência para o primeiro dos N elementos armazenados. Um ponteiro para `float` pode receber `m`, algo como `float *pf=m;`.

Também é possível imprimir na tela os endereços e conteúdos. Notando que se passarmos `m` como parâmetro vamos convertê-lo para ponteiro (ié *array to pointer decay*), ou imprimimos considerando que `m` é variável global ou escrevemos o código na função `main()`:

```c
/* teste-imprimir.c */
#include <stdio.h>
#include <stdlib.h>

#define N 5

float m[N];
float l[N];

void imprime (float x[N]) {
  for (int j=0;j<N;j++) {
    printf ("%f\t", x[j]);
  }
  puts("");
}


int main() {
  for (int j=0;j<N;j++) { // inicializa elementos de m
    m[j]= rand()/10000.0;
  }
  for (int j=0;j<N;j++) { // inicializa elementos de l
    l[j]= rand()/10000.0;
  }
  printf ("m:{%p, %p}\n", &(m), m);  // imprime o endereço onde m está
                                     // armazenado e o valor armazenado em m.
  for (int j=0;j<N;j++) {
    printf ("{%p, %f}\t", &(m[j]), m[j]);
  }
  puts("");
}


```
Executando o programa:  

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/arrays</b></font>$ gcc teste-imprimir.c 
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/arrays</b></font>$ ./a.out
m:{0x58bc4129d020, 0x58bc4129d020}
{0x58bc4129d020, 180428.937500}	{0x58bc4129d024, 84693.085938}	{0x58bc4129d028, 168169.281250}	{0x58bc4129d02c, 171463.687500}	{0x58bc4129d030, 195774.781250}	
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/arrays</b></font>$ 

</pre>

Estranhamente, `&m` e `m` são iguais. Suponho que isto é uma escolha do desenvolvedor do compilador. Como `m` não é modificável, para um array declarado dessa forma, `&m` deve ser uma expressão pouco usada, mas escolheu-se gerar esse comando no executável ao invés de gerar um erro de compilação.

Note que `m` e `&(m[0])` são iguais, confirmando que a referência é para o primeiro (zero-ésimo) elemento do array.

Note que a diferença dos endereços de elementos consecutivos é de 4 bytes - o tamanho de um `float`.

É importante lembrar que strings são arrays de `char` e tem essa mesma característica.

Arrays declarados dessa forma não podem ter seus tamanhos modificados. Seus elementos precisam ter os valores modificados um a um. Estas características limitam o uso desses arrays.

