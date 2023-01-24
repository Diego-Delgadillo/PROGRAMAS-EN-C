/* Dadas las horaas trabajadas de una persona y el valor por hora
calcular su salario e imprimirlo*/

#include<stdio.h>

int main(){
	
	float precioHoras,horas,salario;// Declaramos las variables
	
	printf("Ingrese el precio por hora: ");// Ingresa el precio por hora
	scanf("%f",&precioHoras);// almacena el precio por hora
	
	printf("\nIngrese las horas trabajadas: ");// ingresa las horas trabajadas
	scanf("%f",&horas);// almacena horas trabajadas
	
	salario = (precioHoras*horas);
	
	printf("\nSu salario es de: $%.2f",salario);
	
	return 0;
}




