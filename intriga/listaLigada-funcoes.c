#include <stdio.h>
#include <string.h>

struct Pessoa {
  char nome[128];
  float credito;
  struct Pessoa *prox;
};

/* NOSSA! ELE COPIA O CONTEÚDO DE p EM UMA NOVA VARIÁVEL, COMO SE FOSSE UM int!!
 * ... MAS O QUE FAZ COM PONTEIROS?? */
int mudaCreditoPessoa (struct Pessoa p) {
  printf ("%s\n", p.nome);
  p.credito=20.56;
  return 0;
}

int mudaNomePessoa (struct Pessoa p) {
  printf ("%s\n", p.nome);
  p.nome[3]='x';
  return 0;
}

/* Isto não é a solução usual (e dá erro de compilação)

int printPessoas (struct Pessoa p) {
  
  do {
    printf ("%s, %f\n", p.nome, p.credito);
    &p=p.prox;
  } while (p.prox);
  // não dá para colocar q no lugar de p quando p é struct, só quando p é struct *...
}
*/

int printPessoasP (struct Pessoa *p) {
  
  do {
    printf ("%s, %f\n", p->nome, p->credito);
    p=p->prox;
  } while (p);
  return 0;
}

int main () {
  struct Pessoa p;
  strcpy (p.nome,"Mauricio");
  p.credito=55.78;
  p.prox=NULL;

  struct Pessoa q;
  strcpy (q.nome,"Victor");
  q.credito=40.31;
  q.prox=&p;

  // printPessoas (q);
  printPessoasP(&q);
  mudaCreditoPessoa(p);
  mudaNomePessoa(p);
  printPessoasP(&q);
  
}
