//Uso de instrucciones if y operadores relacionales

#include <stdio.h>

int main (){
	
	int num1; //primer numero que lee el usuario
	int num2; //segundo nombre que lee el usuario
	
	printf("Introduzca 2 enteros, y le indicare\n");
	printf("las relaciones que satisfacen. ");
	printf("\nIntroduzca el primer entero: ");
	scanf("%d", &num1);
	printf("\nIntroduzca el segundo entero: ");
	scanf("%d", &num2);
	
	if (num1 == num2){
		printf("%d es igual que %d\n", num1, num2);
	}
	
	if (num1 != num2){
		printf("%d no es igual que %d\n", num1, num2);
	}
	
	if (num1 < num2){
		printf("%d es menor que %d\n", num1, num2);
	}
	
	if (num1 > num2){
		printf("%d es mayor que %d\n", num1, num2);
	}
	
	if (num1 <= num2){
		printf("%d es menor o igual que %d\n", num1, num2);
	}
	
	if (num1 >= num2){
		printf("%d es mayor o igual que %d\n", num1, num2);
	}
	
	return 0;
}
