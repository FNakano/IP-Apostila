/* insertionSort.c - separei em arquivos depois de testar */

#include "insertionSort.h"

/* Do código anterior, que ordenava array de int
int *criaArray(int comprimentoDoArray) {
	int *r=malloc(sizeof(int)*comprimentoDoArray);
	for (int i=0;i<comprimentoDoArray;i++) {
		r[i]=random() % 100;
	}
	return r;
}

int *imprimeArray(int *array, int comprimentoDoArray) {
	int i;
	putchar('{');
	for (i=0;i<comprimentoDoArray-1;i++) {
		printf ("%d, ", array[i]);
	}
	printf ("%d }\n", array[i]);
}

void destroiArray(int *array) {
	free(array);
}
*/

/* adaptado de CLRS Introduction To Algorithms, 3rd Ed. p.26 */
pessoa *ordenaPorInsercaoArray(pessoa *array, int comprimentoDoArray) {
	for (int j=1;j<comprimentoDoArray;j++) {    // em C, índices começam em zero
    pessoa p;
    memcpy (&p, &(array[j]), sizeof (pessoa));  // pode indexar o array e usar o operador de referência...
		double key=p.nota;
		int i=j-1;
		while ((i>=0) && (array[i].nota>key)) {
			memcpy (array+i+1,array+i, sizeof (pessoa)); // ... ou usar aritmética de ponteiros
			i--;
		}
		memcpy (array+i+1,&p, sizeof(pessoa));
	}
	return array;
}

/*
void main(void){
	pessoa *arrayParaOrdenar;
	int comprimentoDoArray=10;
	arrayParaOrdenar=criaArray(comprimentoDoArray);
	imprimeArray(arrayParaOrdenar, comprimentoDoArray);
	imprimeArray(ordenaPorInsercaoArray(arrayParaOrdenar, comprimentoDoArray), 
	    comprimentoDoArray);
	destroiArray(arrayParaOrdenar);
}
*/
