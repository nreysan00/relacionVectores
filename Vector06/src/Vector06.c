/*
 ============================================================================
 Name        : Vector06.c
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
	int num;

	do{
		printf("Cuantos elementos quieres (1-%d): ",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	}while(tam<=0 || tam>=MAX);

	puts("Visualizar los valores mayores que un numero dado");

	puts("Introduce los elementos del vector");
	pedirVector(tam,vector);

	puts("Introduce el numero que quieres utilizar para buscar");
	fflush(stdout);
	scanf("%d",&num);

	printf("Los numeros mayores que %d incluido %d son:",num,num);
	mostrarMayores(tam,vector,num);

	return EXIT_SUCCESS;
}
