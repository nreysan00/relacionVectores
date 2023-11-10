/*
 ============================================================================
 Name        : Vectores03.c
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
	int ini,fin;

	puts("Ver elementos en un intervalo");

	do{
		printf("Cuantos elementos quieres (1- %d )",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	}while(tam<=0 || tam>MAX);

	puts("Introduce el inicio del intervalo: ");
	fflush(stdout);
	scanf("%d",&ini);

	puts("Introduce el final del intervalo: ");
	fflush(stdout);
	scanf("%d",&fin);

	puts("Introduce los numeros del vector: ");
	pedirVector(tam,vector);

	puts("Estos son los números comprendidos en el intervalo: ");
	elementosIntervalo(tam,vector,ini,fin);


	return EXIT_SUCCESS;
}
