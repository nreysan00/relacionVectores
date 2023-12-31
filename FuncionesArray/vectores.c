/*
 * vectores.c
 *
 *  Created on: 9 nov 2023
 *      Author: Usuario
 */

#include <stdio.h>

void pedirVector(int tam, int vector[]) {
	int i;

	for(i=0;i<tam;i++) {
		printf("Introduce el elemento %d: ",i+1);
		fflush(stdout);
		scanf("%d",&vector[i]);
	}
}

void mostrarVector(int tam, int vector[]) {
	int i;

	for(i=0;i<tam;i++) {
		printf("%d ", vector[i]);
	}
}

void mostrarVectorCorchete(int tam, int vector[]) {
	int i;
	printf("[");
	for(i=0;i<tam;i++) {
		if (i==tam-1) {
			printf("%d] ", vector[i]);
		} else {
			printf("%d, ", vector[i]);
		}
	}

}

int posicionPrimerElemento(int tam, int vector[], int buscar) {
	int i;
	for(i=0;i<tam;i++) {
		if (vector[i]==buscar) {
			return i;
		}
	}
	return -1;
}

void mostrarMenoresQue(int tam, int vector[], int num) {
	int i;
	for(i=0;i<tam;i++){
		if(vector[i]<num){
			printf("%d ",vector[i]);
		}
	}
}

void elementosIntervalo(int tam, int vector[], int ini, int fin){
	int i;
	for(i=0;i<tam;i++) {
		if(vector[i]>ini && vector[i]<fin){
			printf("%d ",vector[i]);
		}
	}
}

void rotarIzquierda(int tam, int vector[]) {
	int i;
	int primero=vector[0];
	for(i=0;i<tam-1;i++){
		vector[i]=vector[i+1];
	}
	vector[tam-1]=primero;
}

void rotarDerecha(int tam, int vector[]) {
	int i;
	int ultimo=vector[tam-1];
	for(i=tam-2;i>=0;i--){
		vector[i+1]=vector[i];
	}
	vector[0]=ultimo;
}

void mostrarMayores(int tam, int vector[], int num) {
	int i;
		for(i=0;i<tam;i++){
			if(vector[i]>=num){
				printf("%d ",vector[i]);
			}
		}

}

int sonParalelos(int tam, int v1[], int v2[]) {
	int i;
	for(i=1; i<tam; i++){
		if(v1[i-1]*v2[i]==v1[i]*v2[i-1]){
			return 0;
		}

	}
	return 1;
}

int esCapicua(int tam,int vector[]) {
	int i;
	int j=tam-1;
	for(i=0 ;i<tam; i++){
		if(vector[i]!=vector[j]){
			j--;
			return 0;
		}else{
			return 1;
		}

	}return 0;
}

void mostrarVectorReves(int tam, int vector[]) {
	int i=0;
	int aux;
	int j=tam-1;
	do{
		aux=vector[i];
		vector[i]=vector[j];
		vector[j]=aux;
		j--;
		i++;
	}while(i<j);
}
