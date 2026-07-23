(precisa ser ajustado para conter toda a informação a respeito de funções que se deseja transmitir)
# Funções em C
## Passagem de parâmetros em C

O draft da norma que define a linguagem C informa:

> Each parameter has automatic storage duration; its identifier, if any,193) is an lvalue.194) The layout of the storage for parameters is unspecified.

![](./Captura%20de%20tela%20de%202026-07-20%2011-48-44.png)

... para esclarecer o que é *automatic storage duration*:
 
> An object whose identifier is declared with no linkage and without the storage-class specifier static has automatic storage duration, as do some compound literals. The result of attempting to indirectly access an object with automatic storage duration from a thread other than the one with which the object is associated is implementation-defined.

![](./Captura%20de%20tela%20de%202026-07-20%2014-15-25.png)

No que tange aos parâmetros das funções, a norma não fixa a forma como os parâmetros devem ser armazenados na memória - o que causa dúvida. Por outro lado, parece que há consenso entre implementadores que parâmetros devem ser variáveis locais às funções e que devem armazenar uma cópia do que é passado (ié passagem por valor). Por exemplo, na documentação do compilador C de GCC:

> A function parameter variable is a local variable (see Local Variables) used within the function to store the value passed as an argument in a call to the function. Usually we say “function parameter” or “parameter” for short, not mentioning the fact that it’s a variable.

![](./Captura%20de%20tela%20de%202026-07-20%2014-55-28.png)

O que causa (outra) dúvida é a falta da relação entre *automatic storage duration*, *function scope* e *local variable*. Da experiência como programador, é possível afirmar que até agora é mais comum dizer que variáveis locais são locais a um bloco de código. Função é (também) um bloco de código que recebeu um identificador e variáveis que não são alocadas explicitamente (ié com malloc()) nem no escopo do arquivo (ié fora de qualquer função), são alocadas automaticamente com garantia de duração até o término da execução da função (é garantido que dure até o término, PODE durar mais MAS sem garantia).

### Passar arrays como parâmetro

Segundo a documentação de GCC, arrays não são *first class objects*. Por exemplo, eles não podem ser 

![](./Captura%20de%20tela%20de%202026-07-20%2015-19-33.png)



## Outras anotações

Na norma são definidos os escopos de função, arquivo, bloco e protótipo. Por exemplo, não há menção a *variável local*, embora este seja um conceito muito comum em linguagens de programação.

![](./Captura%20de%20tela%20de%202026-07-20%2014-26-22.png)

 É uma questão de terminologia. A documentação do compilador C de GCC tem uma sub-seção dedicada a *variáveis locais* ...
 
![](./Captura%20de%20tela%20de%202026-07-20%2014-35-38.png)

 
 
