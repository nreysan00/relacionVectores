/*
 ============================================================================
 Name        : Vector07.c
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
	int tam,v1[MAX],v2[MAX];

	do{
		printf("Cuantos elementos tiene el vector (1-%d)",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	}while(tam<=0 || tam>=MAX);

	puts("¿Los vectores son paralelos?");

	puts("Introduce los elementos del vector");
	pedirVector(tam,v1);

	puts("Introduce los elementos del vector");
	pedirVector(tam,v2);

	if(sonParalelos(tam,v1,v2)==0){
		printf("Los vectores son paralelos");
	}else
		printf("Los vectores no son paralelos");


	return EXIT_SUCCESS;
}
