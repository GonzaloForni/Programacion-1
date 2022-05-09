/*=====================================================================================================================================================================
 Name        : Parcial.c
 Author      : Gonzalo Forni
 Div     	   : 1-F
 Description :
 1. Realizar una función que  reciba como parámetro el importe de un producto y un porcentaje de descuento.
 La función retornará el  importe con el descuento aplicado. Probar en el main.
 2. ¿Qué relaciones existen entre los conceptos de función, pasaje por valor, pasaje por referencia y tipos de variables?. Desarrolle.
 3. Crear una función que permita invertir el orden de una cadena de caracteres, La función recibirá dos cadenas, una con el texto a invertir, y otra para el texto invertido.
 Probar desde el main.
=======================================================================================================================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM 31

float CalcularDescuento(float importe,  int porcentajeDescuento);
void InvertirOrden(char cadena[], char cadenaInvertida[]);

int main(void) {
	//Punto 1:
	float importeIngresado= 100;
	int porcentajeDescuentoIngresado= 10;
	float importeFinal;

	//Punto 3:
	char cadena[TAM];
	char cadenaInvertida[TAM];

	importeFinal= CalcularDescuento(importeIngresado, porcentajeDescuentoIngresado);
	InvertirOrden(cadena, cadenaInvertida);

	printf("El importe con el descuento aplicado es: %.2f", importeFinal);

	return EXIT_SUCCESS;
}

float CalcularDescuento(float importe,  int porcentajeDescuento) {
	float resultado;

	resultado= importe - ((importe*porcentajeDescuento)/100);

	return resultado;
}

void InvertirOrden(char cadena[], char cadenaInvertida[]) {
	int i;
	int j;
	char auxiliar;
	for (i=TAM-1 ; i<TAM ; i--) {
		for (j=0 ; j<TAM ; j++) {
			auxiliar= cadena[i];
			strcpy(cadenaInvertida[j], auxiliar);
		}
	}

	printf("%s", cadenaInvertida);

}

/*Punto 2:
A la hora de desarrollar una funcion tenemos distintas formas de asignarle distintos tipos de variables (parametrizar). 
Se le puede asignarle el valor de una determinada variable, lo cual seria pasaje por valor, o puede hacerse un pasaje por referencia, en el cual 
asignaremos como parametro una direccion de memoria de una determinada variable.



