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

#endif /* VECTORES_H_ */
