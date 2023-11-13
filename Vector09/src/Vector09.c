/*
 ============================================================================
 Name        : Vector09.c
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
		printf("Cuantos elementos quieres (1-%d): ",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	}while(tam<=0 || tam>=MAX);

	puts("Muestra el vector introducido del revés");

	puts("Introduce los elementos que quieras: ");
	pedirVector(tam,vector);

	puts("El vector al revés es: ");
	mostrarVectorReves(tam,vector);
	mostrarVector(tam,vector);
	return EXIT_SUCCESS;
}
