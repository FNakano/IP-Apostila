/** @file dados.c */
#include "dados.h"

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

pessoa *criaArray(int comprimentoDoArray) {
  char primeiro[][32]={"Alexandre", "Adriana", "Ana", "Bianca", "Beatriz", "Bruno", "Clara", "Cristina", "Caio", "Daniel", "Maria", "Matheus", "Jasmin", "Julia", "Karina", "Andressa", "Rebeca", "Raquel", "Gabriel", "Tatiana", "Vanessa", "Felipe", "Guilherme", "Gustavo", "Paulo", "Henrique"}; // 26 nomes
  char segundo[][32]={"Sousa", "Silva", "Barbosa", "Arantes", "Bragança", "Camargo", "Rocha", "Ribeiro", "Dias", "Meneses", "Albuquerque", "Matarazzo", "Mendes", "Alcoforado", "Gentili", "Fernandes", "Farah", "Moraes", "Mendonça", "Barros", "Franco", "Lacerda", "Nogueira", "Pimenta", "Apolinario", "Rodrigues", "Peixoto", "Herzog", "Moreira", "Gonçalves", "Santos", "Simões", "Oiveira", "Werneck", "Tanaka" }; //35 nomes
	pessoa *r=malloc(sizeof(pessoa)*comprimentoDoArray);
	for (int i=0;i<comprimentoDoArray;i++) {
		sprintf (r[i].nome, "%s %s %s", primeiro[random() % 26], segundo[random() %35], segundo[random() %35]);
		r[i].tipoQuestionario= 'A' + (random() % 5);
		r[i].nota= ((double) rand()/RAND_MAX) * 10.0;
	}
	return r;
}

void imprimeArray(pessoa *array, int comprimentoDoArray) {
	int i;
	printf("%d\n", comprimentoDoArray);
	for (i=0;i<comprimentoDoArray;i++) {
		printf ("%s, %c, %lf\n", array[i].nome, array[i].tipoQuestionario, array[i].nota);
	}
}

pessoa *leArray (char *filename) {
  FILE *fpIn;
  char linha[256];
  fpIn=fopen (filename, "rt");
  int comprimentoDoArray=0;
  fscanf (fpIn, "%d ", &comprimentoDoArray);
	pessoa *r=malloc(sizeof(pessoa)*comprimentoDoArray);
  for (int i=0;i<comprimentoDoArray; i++) {
    fgets (linha, 255, fpIn);
    strtok (linha, ",\n");
    strcpy (r[i].nome, linha);
    strtok (linha, ",\n");
    r[i].tipoQuestionario= linha[0];
    strtok (linha, ",\n");
    r[i].nota=atof (linha);
  }
  fclose(fpIn);
}

void destroiArray(pessoa *array) {
	free(array);
}

int main () {
  int n=10;
  pessoa *p=criaArray(n);
  imprimeArray(p, n);
  return 0;
}
