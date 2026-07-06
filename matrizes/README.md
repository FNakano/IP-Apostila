# Explorar como matrizes bidimensionais são armazenadas na memória.

A proposta neste exercício é usar o que se sabe sobre memória e os operadores & e * a fim de explorar matrizes bidimensionais alocadas estaticamente. A alternativa, usando `malloc` e `free` também é apresentada ao final.

O programa inicial para este exercício é [matriz1.c](./matriz1.c). Nesse programa declara-se uma matriz `m` de duas dimensões e tamanho MxN. O conteúdo não é definido na declaração da variável, ele é definido na função `main()`. A cada elemento é atribuído um valor correspondente a `rand()/10000.0`. Após essa inicialização (ié primeira atribuição de valor a uma variável), a matriz é passada para a função `imprime(...)` que imprime o conteúdo da matriz na tela. Este programa mostra, então, a declaração, escrita de elementos, leitura de elementos e passagem como parâmetro aplicados a uma matriz bidimensional alocada estaticamente.

Resultado da execução de `matriz1.c`

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/matrizes</b></font>$ gcc matriz1.c
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/matrizes</b></font>$ ./a.out
180428.937500	84693.085938	168169.281250	171463.687500	195774.781250	
42423.832031	71988.539062	164976.046875	59651.664062	118964.140625	
102520.234375	135049.000000	78336.867188	110252.007812	204489.781250	
</pre>


As variáveis do programa são armazenadas na memória, contém um valor e ocupam um (ou mais) posições de memória (endereços). Por exemplo, uma variável como `float f;` ocupa 4 bytes e (seu primeiro byte) está no endereço `&f` - execute e analise [](./float.c) caso queira explorar melhor o assunto.

Da mesma forma, `m` contém um valor e ocupa um endereço e `m[2][2]` também. É possível imprimir valor e endereço dessas variáveis, o que é feito (também) em `matriz1-EC.c`.

Resultado da execução de `matriz1-EC.c`

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/matrizes</b></font>$ gcc matriz1-EC.c 
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/matrizes</b></font>$ ./a.out
180428.937500	84693.085938	168169.281250	171463.687500	195774.781250	
42423.832031	71988.539062	164976.046875	59651.664062	118964.140625	
102520.234375	135049.000000	78336.867188	110252.007812	204489.781250	
{0x652d7099a040, 0x652d7099a040}
{0x652d7099a040, 180428.937500}	{0x652d7099a044, 84693.085938}	{0x652d7099a048, 168169.281250}	{0x652d7099a04c, 171463.687500}	{0x652d7099a050, 195774.781250}	
{0x652d7099a054, 42423.832031}	{0x652d7099a058, 71988.539062}	{0x652d7099a05c, 164976.046875}	{0x652d7099a060, 59651.664062}	{0x652d7099a064, 118964.140625}	
{0x652d7099a068, 102520.234375}	{0x652d7099a06c, 135049.000000}	{0x652d7099a070, 78336.867188}	{0x652d7099a074, 110252.007812}	{0x652d7099a078, 204489.781250}	
{0x652d7099a040, 0x652d7099a040}
{0x652d7099a040, 0x652d7099a040}	
{0x652d7099a054, 0x652d7099a054}	
{0x652d7099a068, 0x652d7099a068}	
</pre>
