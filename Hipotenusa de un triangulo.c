/*Sacar la hipotenusa de un triangulo rectangulo 
pidiendo al usuario	el valor de los 2 catetos
*/

#include<stdio.h>
#include<math.h>// Esta libreria es para sacar las raices

int main(){
	float hipotenusa,cateto1,cateto2;
	
	printf("Digite los 2 catetos: ");
	scanf("%f %f",&cateto1,&cateto2);
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));// La funcion pow es para elevar algo a un exponente

	printf("La hipotenusa del triangulo es: %.2f",hipotenusa);

	return 0;
}


