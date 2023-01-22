// Directivas del preprocesador y variables

#include<stdio.h> // esto es para incluir una libreria 
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define PI 3.1416 // esta es una macro y sirve para asignar el valor a una variable 

int x = 5;  // variable global por que no esta en ninguna funcion 



int main(){
	int x = 10; // esta es una variable local puesto que esta dentro de una funcion

	float suma = 0;
	
	suma = PI+x;
	
	// el porcentaje y la letra es para especificar el tipo de dato que se imprime y
	//el (. y el numero) es para indicar cuantos deciamles va a poner
	printf("La suma es: %.3f",suma); 
	
	
	return 0;
}











