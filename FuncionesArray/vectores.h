/*
 * vectores.h
 *
 *  Created on: 9 nov 2023
 *      Author: Usuario
 */

#ifndef VECTORES_H_
#define VECTORES_H_
	/**
	 * Procedimiento que pide un vector por teclado
	 * Pide tantos elementos como indique el parámetro tam
	 */
	void pedirVector(int tam, int vector[]);

	/**
	 * Procedimineto que muestra un vector por pantalla. Hay que pasarle
	 * el argumento tam para indicar cuantos elementos del vector deben
	 * mostrarse.
	 */
	void mostrarVector(int tam, int vector[]);

	void mostarVectorCorchete(int tam, int vector[]);

	/**
	 * Función que devuelve la casilla de la primera ocurrencia en el vector
	 * del número indicado por buscar. Devuelve -1 si el elemento no ha sido
	 * encontrado
	 */
	int posicionPrimerElemento(int tam, int vector[], int buscar);

	/**
	 * Mostrar elementos menores que el número dado por pantalla
	 */
	void mostrarMenoresQue(int tam, int vector[], int num);

	/*
	 * Funcion que muestra el intervalo de números de un vector
	 * (intervalo pedido por teclado)
	 */
	void elementosIntervalo(int tam, int vector[], int ini, int fin);

	/*
	 * Función que muestra los elementos del vector pero rotados hacia
	 * la izquierda
	 */
	void rotarIzquierda(int tam, int vector[]);

	/*
	 * Función que muestra los elementos del vector pero rotados hacia
	 * la derecha
	 */
	void rotarDerecha(int tam, int vector[]);

	/*
	 * Función que busca un número mayor que A, y a partir de él inclusive,
	 * visualiza todos los valores hasta él ultimo del array
	 */
	void mostrarMayores(int tam, int vector[], int num);

	/*
	 * Función que compara dos vectores e indica si son paralelos o no
	 */
	int sonParalelos(int tam, int v1[], int v2[]);

	/*
	 * Función que indica si el vector es un número capicúa o no
	 */
	int esCapicua(int tam,int vector[]);

	/*
	 *
	 */
	void mostrarVectorReves(int tam, int vector[]);
#endif /* VECTORES_H_ */
