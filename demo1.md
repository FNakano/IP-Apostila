# Demo 1

Demonstra que `char *x` é diferente de `char x[]`

```
/* arrayVazio.c - teste com array não inicializado. */
#include <stdio.h>
int main () {
  char x[];
  printf ("%s", x);
  return 0;
}

```

... e veja 

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/ip-2026</b></font>$ gcc arrayVazio.c 
<b>arrayVazio.c:</b> In function ‘<b>main</b>’:
<b>arrayVazio.c:4:8:</b> <font color="#EF2929"><b>error: </b></font>array size missing in ‘<b>x</b>’
    4 |   char <font color="#EF2929"><b>x</b></font>[];
      |        <font color="#EF2929"><b>^</b></font>
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/ip-2026</b></font>$ 

<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/ip-2026</b></font>$ gcc --version
gcc (Ubuntu 11.4.0-1ubuntu1~22.04.3) 11.4.0
Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/ip-2026</b></font>$ 
</pre>

compare com:

```
/* ponteiroVazio.c - teste com ponteiro não inicializado. */
#include <stdio.h>
int main () {
  char *x;
  printf ("%s", x);
  return 0;
}

```

Compilando e executando...

<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/ip-2026</b></font>$ gcc ponteiroVazio.c 
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/ip-2026</b></font>$ ./a.out
��1�I��^H��H���PTE1�1�H�=�<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/ip-2026</b></font>$ gcc --version
gcc (Ubuntu 11.4.0-1ubuntu1~22.04.3) 11.4.0
Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/Documentos/ip-2026</b></font>$ 

</pre>

Como o programa a compilar e executar só difere pela declaração de `x` e a compilação apresenta resultados diferentes então é possível afirmar que as declarações resultam em coisas diferentes e, por isso, `char *x` é diferente de `char x[]`. (por conclusões como esta que, quando me ensinaram a provar teoremas, disseram que "não precisava escrever o óbvio ululante" mas é óbvio ululante para todo mundo??)

Outras referências:
  
![](./Captura%20de%20tela%20de%202026-04-30%2021-21-49.png)

https://eli.thegreenplace.net/2009/10/21/are-pointers-and-arrays-equivalent-in-c

A conversão de array para ponteiro é coloquialmente chamada *array decay* - busquei algumas referências:
  
![](./Captura%20de%20tela%20de%202026-04-30%2021-20-11.png)


https://stackoverflow.com/questions/1461432/what-is-array-to-pointer-conversion-aka-decay

https://www.geeksforgeeks.org/cpp/array-decay-in-c/

https://www.reddit.com/r/cpp_questions/comments/1564oav/question_what_does_an_array_decaying_mean/


