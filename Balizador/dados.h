/** @file dados.h */

#ifndef __DADOS_H__
#define __DADOS_H__

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

/** aprendiz da linguagem de programação:
 *  desenvolvedor/mantenedor:
 *  @param 
 *  @return
 *  usuário :
 * */

/** aprendiz da linguagem de programação: O usual é fundir a declaração do struct com o typedef mas preferi separar porque são dois comandos distintos.
 *  desenvolvedor/mantenedor:
 *  usuário :
 * */
struct Pessoa {
  char nome[128];
  char tipoQuestionario;
  double nota;
};

typedef struct Pessoa pessoa;

pessoa *criaArray(int comprimentoDoArray); 
void imprimeArray(pessoa *array, int comprimentoDoArray); 
int leArray (pessoa **p, char *filename);
void destroiArray(pessoa *array); 

#endif
