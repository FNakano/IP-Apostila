# Balizador do processo de ensino/aprendizagem

## Diário

- Criado em 2026-01-18 como um Hello World (usar o controle de versões para acompanhar o desenvolvimento).
- Fiz esta anotação depois do commit de 2026-01-19. No dia copiei o código do insertion sort que uso em IAA para este repositório.
- 2026-01-19T19:24 Escrevi dados.c, dados.h e testei criaArray e imprimeArray.
- 2026-01-22 É mais fácil de depurar quando tem menos arquivos, então, codificar um teste no próprio dados.c e, depois, mover para um arquivo apropriado pode facilitar para algumas pessoas.
- Como criar o arquivo pessoas.csv - executando o primeiro teste e redirecionando a saída para o arquivo pessoas.csv:
<pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/Balizador</b></font>$ ./a.out &gt; pessoas.csv
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/Balizador</b></font>$ cat pessoas.csv 
10
Matheus Matarazzo Dias, A, 9.116474
Rebeca Simões Albuquerque, E, 5.539700
Alexandre Mendes Barbosa, E, 9.522297
Maria Albuquerque Lacerda, C, 6.069689
Bianca Moreira Simões, E, 1.566791
Bianca Mendes Camargo, C, 2.182569
Karina Ribeiro Barros, D, 6.375523
Gabriel Dias Barbosa, B, 7.713577
Bianca Mendonça Gonçalves, E, 2.833147
Alexandre Alcoforado Moraes, A, 9.493271
<font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IP-Apostila/Balizador</b></font>$ </pre>
- 2026-02-10 Propostas de bricadeiras (ié análise exploratória): 
  - Acrescentar nomes e verificar que são usados
  - Generalizar a função de ordenação para que aceite qualquer estrutura
     - Implementar/Medir o impacto de ordenar um array de estruturas versus ordenar um array de ponteiros para estruturas.

## Como instalar

Copie todos os arquivos para um diretório em seu computador.

## Como compilar

Para compilar os testes, use `make teste1`, `make teste2` e `make testeOrdena`.

Veja no Makefile (péssima resposta essa...)

## Como executar o teste

Para compilar os testes e executá-los, use `make executaTeste1`, `make executaTeste2`, `make executaTesteOrdena`.

(Veja no Makefile)

## Como usar

Os arquivos com prefixo *teste* contém apenas a função `main` que chama (testa) algumas funções codificadas em `dados.c` e em `insertionSort.c`.

Para compilar os testes, use `make teste1`, `make teste2` e `make testeOrdena`.

Para compilar os testes e executá-los, use `make executaTeste1`, `make executaTeste2`, `make executaTesteOrdena`.

## Como está organizado

`dados.c` contém o código-fonte das funções que alocam, de-alocam, leem e escrevem na tela ou em um arquivo o conteúdo da estrutura de dados que representa uma pessoa. A estrutura de dados é definida em `dados.h`.

```c
struct Pessoa {
  char nome[128];
  char tipoQuestionario;
  double nota;
};

```

A estrutura de dados foi idealizada para conter informação sobre respondentes de questionários. Há alguns tipos de questionários e é atribuída uma nota para as respostas do respondente ao questionário.

`insertionSort.c` contém uma adaptação do algoritmo Insertion-Sort apresentado em **Cormen, Leisserson, Rivest, Stein** - Introduction to Algorithms - 3a. Ed. p.26

