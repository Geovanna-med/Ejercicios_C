/* Obtiene la hipotenusa y los angulos agudos de un triangulor rectangulo
a partir de las longitudes de los catetos */

#include <stdio.h>
#include <math.h>

int main(){
	
	const float pi=3.141592;
	float catOpuesto, catAdyacente, hipotenusa, angulo;
	
	printf("Introduce el valor del cateto opuesto: ");
	scanf("%f", &catOpuesto); 
	printf("Introduce el valor del cateto adyacente: ");
	scanf("%f", &catAdyacente);
	
	if ((catOpuesto <= 0) || (catAdyacente <= 0)){
		printf("El valor de los catetos debe ser mayor que 0");		
	} else {
		hipotenusa = sqrt(catOpuesto*catOpuesto+catAdyacente*catAdyacente);
		angulo = 180;
		printf("El valor de la hipotenusa es= %f \n", hipotenusa);
		printf("Los valores de los angulos son: \n");
		printf("%f grados\n", angulo);
		printf("%f grados\n", 90-angulo);
	} 
	
	return 0;
}
