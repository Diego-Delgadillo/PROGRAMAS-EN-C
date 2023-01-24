/* Problema 3 Hacer un programa que calcule 
longitudes de circunferencia*/

#include<stdio.h>

int main(){
	float radio;
	float longitud;
	float pi = 3.1416;
	
	printf("Ingrese el radio de la circunferencia:");
	scanf("%f",&radio);
	
	longitud = (2*pi)*radio;
	
	printf("La longitud de la circunferencia es: %.2f",longitud);
	
	return 0;
}




