//Prueba de divisibilidad de 2 numeros

#include <stdio.h>

int main(){
	
	int x, y;
	
	printf("Introduzca un numero entero: ");
	scanf("%d", &x);
	printf("Introduzca un numero entero: ");
	scanf("%d", &y);
	
	if(x%y == 0){
		printf("%d es divisible entre %d\n", x, y);
	} else {
		printf("%d no es divisible entre %d\n", x, y);
	}
	
	return 0;
}
