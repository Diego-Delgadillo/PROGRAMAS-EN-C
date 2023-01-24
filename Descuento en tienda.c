/*Una tienda ofrece un descuento del 15% sobre el total de la compra 
y un cliente desea saber cuanto pagara finalmente por su compra */

#include<stdio.h>

int main(){
	
	float compra,compraFinal,descuento = 0;
	
	printf("Digite la cantidad de compra: ");
	scanf("%f",&compra);
	
	descuento = compra*0.15;
	compraFinal = compra-descuento;
	
	printf("Su pago final con descuento es: $%.2f",compraFinal);
	
	return 0;
}
