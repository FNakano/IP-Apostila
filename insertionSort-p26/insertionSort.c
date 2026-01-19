#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

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

/* transcrito de CLRS Introduction To Algorithms, 3rd Ed. p.26 */
int *ordenaPorInsercaoArray(int *array, int comprimentoDoArray) {
	for (int j=1;j<comprimentoDoArray;j++) {    // em C, índices começam em zero
		int key=array[j];
		int i=j-1;
		while ((i>=0) && (array[i]>key)) {
			array[i+1]=array[i];
			i--;
		}
		array[i+1]=key;
	}
	return array;
}

void main(void){
	int *arrayParaOrdenar;
	int comprimentoDoArray=10;
	arrayParaOrdenar=criaArray(comprimentoDoArray);
	imprimeArray(arrayParaOrdenar, comprimentoDoArray);
	imprimeArray(ordenaPorInsercaoArray(arrayParaOrdenar, comprimentoDoArray), 
	    comprimentoDoArray);
	destroiArray(arrayParaOrdenar);
}
