/*Desarrollar un programa que escriba la calificacion cualitativa correspondiente
a una nota, de acuerdo con el siguiente criterio:
 
     0 a < 5.0     Reprobado
     5 a < 6.5     Aprobado
     6.5 a < 8.5   Notable
     8.5 a < 10    Sobresaliente
     10            Matricula de honor */
     
#include <stdio.h>

int main (){
	
	float nota;
	
	printf("Introduce la calificacion cuantitativa: \n")
	scanf("%f", &nota);
	
	if ((nota < 0.0) || (nota > 10)){
		printf("")
	}
}
