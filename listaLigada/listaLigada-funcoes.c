#include <stdio.h>
#include <string.h>

struct Pessoa {
  char nome[128];
  struct Pessoa *prox;
};

/* NOSSA! ELE COPIA O CONTEÚDO DE p EM UMA NOVA VARIÁVEL, COMO SE FOSSE UM int!!
 * ... MAS O QUE FAZ COM PONTEIROS?? */
int printPessoa (struct Pessoa p) {
  p.nome[3]='x';
  printf ("%s\n", p.nome);
}

int printPessoas (struct Pessoa p) {
  
  do {
    p.nome[3]='x';
    printf ("%s\n", p.nome);
  while (p.prox);
  // não dá para colocar q no lugar de p quando p é struct, só quando p é struct *...
}

int main () {
  struct Pessoa p;
  strcpy (p.nome,"Mauricio");
  p.prox=NULL;
  printPessoa (p);
  printf ("%s\n", p.nome);

  struct Pessoa q;
  strcpy (q.nome,"Victor");
  q.prox=&p;
  
}
