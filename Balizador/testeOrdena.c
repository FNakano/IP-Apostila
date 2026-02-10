/* testeOrdena.c */

#include "insertionSort.h"

void main(void){
	pessoa *arrayParaOrdenar;
	int comprimentoDoArray=10;
	arrayParaOrdenar=criaArray(comprimentoDoArray);
	imprimeArray(arrayParaOrdenar, comprimentoDoArray);
	imprimeArray(ordenaPorInsercaoArray(arrayParaOrdenar, comprimentoDoArray), 
	    comprimentoDoArray);
	destroiArray(arrayParaOrdenar);
}
