/*
 ============================================================================
 Name        : Vectores08.c
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

	puts("¿Es capicúa o no?");

	puts("Introduce los elementos del vector");
	pedirVector(tam,vector);

	if(esCapicua(tam,vector)==0){
		puts("El vector no es capicua");
	}else{
		puts("El vector es capicua");
	}

	return EXIT_SUCCESS;
}
