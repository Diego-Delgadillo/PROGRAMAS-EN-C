// convertir de grados celsius a farenheit

#include<stdio.h>;

int main(){
	int C,grados = 0; // Declaramos ambos grados en 0 
	
	printf("Ingrese los datos Celsius: ");
	scanf("%i", &C);
	
	grados = (C*1.8)+32;
	printf("\n Los grados farenheit son: %i",grados);
	
	return 0;
}
