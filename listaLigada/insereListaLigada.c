#include <stdio.h>
#include <stdlib.h>
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

char nomesInicializar[][128]={"Thiago", "Simone", "Renata", "Querencio", 
                              "Paula"}; // precisa inicializar de alguma
                                         // maneira...

int inserePrimeiro (struct Pessoa **pl, char *novoNome) {
  struct Pessoa *novo;
  printf (" memória a alocar: %lu\n", sizeof (struct Pessoa));
  novo = malloc (sizeof (struct Pessoa));  // precisa dos parêntesis porque
                                           // struct Pessoa são duas palavras...
  strcpy (novo->nome, novoNome);
  novo->prox=*pl;
  *pl=novo;
  return 0;
}

int main () {
  struct Pessoa *lista;
  lista=NULL; // PRECISA INICIALIZAR A LISTA VAZIA!!
  printf ("tamanho do array de nomes = %lu\n", sizeof nomesInicializar);
  // sizeof sobre um array de strings não fez o que eu gostaria que fizesse ...
  for (int i=0;i<5;i++) {
    inserePrimeiro (&lista, nomesInicializar[i]);
  }
  percorre (lista);
}
