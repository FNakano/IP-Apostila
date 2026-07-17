#include <stdio.h>
#include <string.h>

/* Definição de um elemento da lista ligada */
struct Pessoa {
  char nome[128];
  struct Pessoa *prox;
};

int main () {
  struct Pessoa p, q, r, s, t;
  strcpy (p.nome, "Paula");
  strcpy (q.nome, "Querencio");
  strcpy (r.nome, "Renata");
  strcpy (s.nome, "Simone");
  strcpy (t.nome, "Thiago");
  p.prox=&q;
  q.prox=&r;
  r.prox=&s;
  s.prox=&t;
  t.prox=NULL;
/* Depois de criar os elementos e ligá-los */
  struct Pessoa *atual;
  atual=&p;
  while (atual!=NULL) {
    printf ("nome: %s\n", (*atual).nome);
    atual=(*atual).prox;
  }
}
