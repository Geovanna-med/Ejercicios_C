#include <stdio.h>

int main(){
	
	int numerador=25, denominador=50, r;
	int mcd, num, den;
	
	//u = numerados
	//v = denominador 
	//r = resta
	num = numerador;
	den = denominador;
	
	do
	{
		r = num % den;
		num = den;
		den = r;
		
		printf("%d\n", den);
	} while (r != 0);
	
	mcd = num;
	
	printf("El valor del mcd es %d\n", mcd);
	printf("num = %d\n", numerador);
	printf("den = %d\n", denominador);
	
	numerador = numerador/mcd;
    denominador = denominador/mcd;
	
	printf("la fraccion simplificada es %d/%d", numerador, denominador);
	return 0;
}


