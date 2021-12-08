/* Escribir un programa que solicite al usuario la longitud y anchura de 
una habitacion y a continuacion visualice su superficie con cuatro
decimales */

#include <stdio.h>

int main(){
	
	float longitud;
	float ancho;
	float superficie;
	
	printf("Ingrese la longitud de la habitacion\n");
	scanf("%f", &longitud);
	
	printf("\nIngrese el ancho de la habitacion\n");
	scanf("%f", &ancho);
	
	superficie = longitud * ancho;
	
    printf("La superficie de la habitacion es de: %.4f", superficie);
    
    return 0;
}
