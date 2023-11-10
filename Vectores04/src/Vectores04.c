/*
 ============================================================================
 Name        : Vectores04.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"
#define MAX 30

int main(void) {
	int tam,vector[MAX];

	do{
		printf("Cuantos elementos quieres (1-%d)",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	}while(tam<=0 || tam>=MAX);

	puts("Rotar valores a la izquierda de un array");

	puts("Introduce el numero de elementos que quieres");
	pedirVector(tam,vector);

	puts("Los elementos del vector son: ");
	mostrarVector(tam,vector);

	printf("\n");
	puts("Los elementos del vector pero rotando la izquierda son:");
	rotarIzquierda(tam,vector);
	mostrarVector(tam,vector);

	return EXIT_SUCCESS;
}
