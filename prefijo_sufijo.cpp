/* Demuestra los modos de prefijo y posfijo de operadores unarios */

#include <stdio.h>

int main(){
	
	int a, b;
	
	a = b = 5; // asigna 5 a "a" y "b"
	
	// imprime los valores de a y b decrementandolos cada vez.
	// usa el modo de prefijo para b y el modo de posfijo para a
	printf("\n%d   %d", a--, --b);
	printf("\n%d   %d", a--, --b);
	printf("\n%d   %d", a--, --b);
	printf("\n%d   %d", a--, --b);
	printf("\n%d   %d", a--, --b);
	
	return 0;
}
