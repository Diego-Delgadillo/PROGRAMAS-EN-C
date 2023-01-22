// Tipos de datos en C

#include<stdio.h>

int main(){
	char a = 'e';// Tama�o: 1 byte  -> Rango: 0,255
	short b = -15; // Tama�o: 2 bytes  -> Rango: -128,-127
	int c = 1024; // Tama�o: 2 bytes  -> Rango: -32766,32767
	unsigned int d = 128;// Tama�o: 2 bytes  -> Rango: 0,65553
	long e = 123456; //Tama�o: 4 bytes  -> Rango: -2147483648,2147483687
	float f = 15.668; //Tama�o: 4 bytes  -> Rango: 3.4*10.3.4*10
	double g = 12312.123123;// Tama�o: 8 bytes  -> Rango: 1.7*10,1.7*10
		
	printf("Variable tipo char: %c\n", a);

	return 0;
}
