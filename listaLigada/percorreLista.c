#include <stdio.h>
#include <string.h>

/* Definição de um elemento da lista ligada */
struct Pessoa {
  char nome[128];
  struct Pessoa *prox;
};

int percorre (struct Pessoa *l) {
  /* struct Pessoa *atual;
   * é boa prática preservar o ponteiro para a lista mas neste caso o uso é
   * único na função (como está quando escrevi) e desejo mostrar que usar como 
   * argumento implica em copiar o valor contido no parâmetro. Ié não modifica
   * o conteúdo da variável lista do escopo de main()
   * this é o identificador usado em Java e em C++ para referir-se a 
   * "este objeto". Em Python é self
   */
  while (l!=NULL) {
    printf ("this: %p, nome: %s, prox=%p\n", l, l->nome, l->prox);
    l=l->prox;
  }
  printf ("l == %p\n", l);
  return 0;
}

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
  struct Pessoa *lista;
  lista=&p;  // este é o ponteiro que é referência para a lista
  printf ("lista == %p\n", lista);
  percorre (lista);
  printf ("lista == %p\n", lista);
}
