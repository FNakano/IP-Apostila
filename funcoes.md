# Funções

Numa primeira frase fácil: "função é um bloco de código com um nome."

O bloco de código (sequência de comandos entre as chaves mais externas) é chamado corpo da função.
O nome e a lista de argumentos (que fica entre os parêntesis) tem a mesma forma do protótipo da função. ié se essa linha é seguida de um bloco de código então ela faz parte de uma declaração de função. Se essa linha termina com `;` ponto-e-virgula então é um protótipo de função. Em linguagens como Java, usa-se assinatura da função.

## Primeiro contato - para começar a programar

### main()

A execução do programa inicia pela função de nome `main`. Os comandos no corpo da função são executados em sequência, a menos da execução de instruções de desvio de fluxo de execução como `if... else`, `while...` e outros.

### chamando funções de biblioteca padrão

No programa `OlaMundo`, na definição da função `main()`, a linha `printf (...)` é uma chamada à função printf. Durante a execução de `main()` quando se chega a essa linha a função `printf(...)` é executada (ou chamada). Em linguagens como Fortran, existia o comando de execução (chamada) de uma função (CALL), por isso chamada de função. 

#### protótipos

Em C, a chamada de uma função não pode ser usada antes da função ter seu protótipo definido pois sem o protótipo o compilador (gerador de código) C não tem informação suficiente para traduzir a chamada nos comandos em linguagem de máquina. O protótipo de `printf(...)` (e de `scanf(...)`, `puts(...)`) está no arquivo `stdio.h`. O corpo da função, já compilado, está em `libc.so`.


### Segundo contato - definindo e chamando funções

Vamos começar citando a norma (n3220.pdf) na seção 6.5.3.3 (p.75):

> An argument may be an expression of any complete object type. In preparing for the call to a
function, the arguments are evaluated, and each parameter is assigned the value of the corresponding
argument.91)
> 
> 90)Most often, this is the result of converting an identifier that is a function designator.
>
> 91)A function can change the values of its parameters, but these changes cannot affect the values of the arguments. On the
other hand, it is possible to pass a pointer to an object, and the function can then change the value of the object pointed to.

para facilitar a leitura da norma, vamos colocar um programa simples que define uma função e esta função soma dois números:

```c
#include <stdio.h>

double soma (double a, double b) {
  return a+b;
}

int main () {
  double c, d, e;
  c=10.5;
  d=1000.1;
  e=soma(c, d);
  printf ("%lf\n", e);
}
```

A norma usa de maneira distinta *argumento* e *parâmetro*. Pela nota 91) nota-se que no escopo da função, `a` e `b` são parâmetros e no escopo externo, `c` e `d` são argumentos. 

![](./Captura%20de%20tela%20de%202026-05-08%2014-43-25.png)

O texto da nota 91) diz que no corpo da função os parâmetros podem ser modificados mas essas modificações não podem modificar os argumentos. Geralmente compiladores são implementados e implementam essa funcionalidade criando variáveis que correspondem aos parâmetros e copiando o valor do argumento para o respectivo parâmetro (nota: a norma vai até certo ponto, o restante da implementação é escolha do implementador). Coloquialmente, programadores dizem que *os parâmetros são passados por valor*. A contraposição - passagem por referência - diz respeito ao restante da nota, tem a ver com o operador `&` usado em `scanf(...)` e ficará mais clara no terceiro contato.

![](./Captura%20de%20tela%20de%202026-05-08%2014-46-53.png)


`&` - o operador de referência - retorna o endereço da variável sobre a qual é aplicado. Maiores explicações em [memoria.md](./memoria.md) obs.: nesse ponto é suficiente entender o começo de memoria.md.

Referências:
  
- https://stackoverflow.com/questions/72902821/function-parameters-behaving-strangely-in-c
- https://www.cs.auckland.ac.nz/references/unix/digital/AQTLTBTE/DOCU_056.HTM
- https://www.gnu.org/software/c-intro-and-ref/
- https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html

## Terceiro contato - quando inclui structs e alocação dinâmica de memória nos programas 

O que pode funcionar mas não se recomenda fazer
- misturar elementos alocados dinamicamente com elementos alocados estaticamente;
  - porque diferentes compiladores podem implementar de maneira diferente;
  - porque `free()` em variáveis alocadas estaticamente pode causar erro de execução; 
  - solução comum: com structs, use alocação dinâmica.
  
### Exemplo de coisa que pode funcionar SQN

Veja este trecho da documentação do gcc:
  
![](./Captura%20de%20tela%20de%202026-05-08%2015-00-35.png)

... isto quer dizer que se passarmos um `struct` como parâmetro, ele será copiado para dentro da função. MAS, se o `struct` tiver ponteiros, aquilo para que apontam será copiado ou não? Se for copiado então tem-se *deep copy* se não for copiado tem-se *shallow copy*. Está implícito que GCC usa *shallow copy* . A norma não especifica esse detalhe.

![](./Captura%20de%20tela%20de%202026-05-08%2015-11-20.png)

Até onde busquei, C usa *shallow copy*. Na minha experiência como programador, não conheço linguagem de programação que nessa condição use *deep copy*.

Só que... isto permite, ao programador ingênuo, criar funções para inserir/remover elementos de uma lista ligada sem usar "ponteiro para ponteiro". MAS essas funções, "estranhamente" não funcionam para o primeiro elemento da lista, ou quando usadas para apagar a lista toda, logo em seguida ocorre *segmentation fault* ou falham na inserção do segundo elemento. (Vou apresentar o código na próxima versão)


"Brigas" (flame wars) acontecem entre programadores (https://www.eevblog.com/forum/microcontrollers/passing-structure-into-function-in-c/msg3994382/#msg3994382):

![](./Captura%20de%20tela%20de%202026-05-08%2015-27-02.png)

Acontece que em compiladores de algumas décadas atrás, *Here you are returning a struct that was allocated in the stack, this will lead to undefined behaviour and a crash if you are lucky.* era mais provável que "This is safe, and has always been safe. Returning a pointer to it however, is not." Nas entrelinhas desta documentação do GCC entende-se que a estrutura, mesmo alocada estaticamente dentro de uma função, persiste fora da função!!

![](./Captura%20de%20tela%20de%202026-05-08%2015-00-35.png)

... isso oferece uma alternativa para criar elementos da lista ligada sem usar alocação dinâmica MAS vai contra a idéia de escopo de variáveis - não verifiquei se outros compiladores têm outro comportamento. Minha opinião: "melhor não usar, se usar, use com cuidado".





Referências:


- https://www.geeksforgeeks.org/c/how-to-pass-or-return-a-structure-to-or-from-a-function-in-c/
- https://www.programiz.com/c-programming/c-structure-function
- https://www.eevblog.com/forum/microcontrollers/passing-structure-into-function-in-c/
- https://www.gnu.org/software/c-intro-and-ref/manual/html_node/Structs-as-Parameters.html

#### Passar lista por cópia

(shallow copy)

## Quarto contato - ponteiros para funções

