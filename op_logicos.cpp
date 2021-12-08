// Ejemplifica la prescedencia de operadores logicos

#include <stdio.h>

int main(){
	
	int a = 5, b = 6, c = 5, d = 1;
	int x;
	
	//Evalua la expresion sin parentesis
	x = a < b || a < c && c < d;
	printf("\nSin parentesis la expresion es evaluada como: %d", x);
	
	//Evalua la expresion con parentesis
	x = (a < b || a < c) && c < d;
	printf("\nCon parentesis la expresion es evaluada como: %d", x);
	
	return 0;
	
}
