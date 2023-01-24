// pedir 2 numeros al usuario y suamrlos, restarlos, multiplicarlos y dividirlos

#include<stdio.h>

int main(){
	int n1,n2,suma=0,resta=0,mult=0,div=0;	
	
	//Esta es una forma mas breve de pedir y alamcenar dos numeros
	printf("Digite dos numeros: ");
	scanf("%i %i",&n1,&n2); // Encuentra los dos espacios para alamacenar (%i) y los guarda con (&n1)
	
	//Operaciones
	suma = n1+n2;
	resta = n1-n2;
	mult = n1*n2;
	div = n1/n2;
	
	printf("\n La suma es: %i",suma);
	printf("\n La resta es: %i",resta);
	printf("\n La multiplicacion es: %i",mult);
	printf("\n La divison es: %i",div);

	
	
	
	
	/* ESTA ES LA FORMA TRADICIONAL DE PEDIR 2 NUMEROS
	printf("Digite el primer numero: ");
	scanf("%i"&n1);
	printf("Digite el segundo numero: ");
	scanf("%i"&n2);
	*/
	
	
	return 0;	
}

