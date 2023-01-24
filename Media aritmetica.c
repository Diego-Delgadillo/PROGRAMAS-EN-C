// Problema 6: hacer un programa que calcule la media aritmetica  de 3 numeros

#include<stdio.h>

int main(){
	int n1,n2,n3;
	float media;
	
	printf("Ingrese 3 numeros: ");
	scanf("%i %i %i",&n1,&n2,&n3);
	
	media = (n1+n2+n3)/3;
	printf("La media aritmetica es: %.2f",media);
	
	
	
}
