//ADA Integradora || Geovanna Fernanda De la cruz Medina

#include <stdio.h>
#include <stdlib.h>
#define SALIR 5


int menu();
float calcularArea(int tipoFigura);
float triangulo(float base, float altura);
float cuadrado(float lado);
float rectangulo(float largo, float ancho);
float circulo(float radio);
void imprimirArea(float area);

int main(){
	
	int opcion;
	float superficie;
	
	do{
		opcion=menu();
		if(opcion != SALIR){
			superficie = calcularArea(opcion);
			imprimirArea(superficie);
		}
		printf("\nPRESIONE <ENTER> PARA CONTINUAR...");
		fflush(stdin);
		getchar();
	}while(opcion != SALIR);
	
	return 0;
}
//---Menu-----------------------------------------------------------------------------------------------------------------------------
int menu(){
	system("cls");
	int seleccion;
	
	printf(" ________________________________________\n");
	printf("|        AREA FIGURAS GEOMETRICAS        |\n");
	printf("|________________________________________|\n");
	printf("|              1. TRIANGULO              |\n");
	printf("|              2. CUADRADO               |\n");
	printf("|              3. RECTANGULO             |\n");
	printf("|              4. CIRCULO                |\n");
	printf("|              5. FIN                    |\n");
	printf("|________________________________________|\n");
	
	printf("TECLEE OPCION: ");
	scanf("%d", &seleccion);
	
	return seleccion;
}
//----Pedir datos--------------------------------------------------------------------------------------------------------------------------------
float calcularArea(int tipoFigura){
	
	float x, y, area;
	
	switch (tipoFigura){
		case 1:
			printf("\nCALCULA E IMPRIME EL AREA DE UN TRIANGULO\n");
			printf("PROPORCIONE LA BASE: ");
			scanf("%f", &x);
			printf("PROPORCIONE LA ALTURA: ");
			scanf("%f", &y);
			area = triangulo(x,y); 
			break;
		case 2:
		    printf("\nCALCULA E IMPRIME EL AREA DE UN CUADRADO\n");	
		    printf("PROPORCIONE EL LADO: ");
			scanf("%f", &x);
			area = cuadrado(x); 
			break;
		case 3:
			printf("\nCALCULA E IMPRIME EL AREA DE UN RECTANGULO\n");
			printf("PROPORCIONE EL LARGO : \n");
			scanf("%f", &x);
			printf("PROPORCIONE EL ANCHO: \n");
			scanf("%f", &y);
			area = rectangulo(x,y); 
			break;
		case 4:
		    printf("\nCALCULA E IMPRIME EL AREA DE UN CIRCULO\n");
			printf("PROPORCIONE EL RADIO: \n");
			scanf("%f", &x);
			area = circulo(x); 
			break;
		default:
			return 0;
	}
	
	return area;
	
}
//----Area del triangulo--------------------------------------------------------------------------------------------------------------------------------
float triangulo(float base, float altura){
	
	float total;
	
	total = (base * altura)/2;
	
	return total;
}
//----Area del cuadrado-------------------------------------------------------------------------------------------------------------------------------
float cuadrado(float lado){
	
	float total;
	
	total = lado * lado;
	
	return total;
	
}
//----Area del rectangulo-------------------------------------------------------------------------------------------------------------------------------
float rectangulo(float largo, float ancho){
	
	float total;
	
	total = largo * ancho;
	
	return total;
}
//----Area del circulo-------------------------------------------------------------------------------------------------------------------------------
float circulo(float radio){
	
	float total;
	
	total =  3.14159 * (radio * radio);
	
	return total;
} 
//----imprimir el area------------------------------------------------------------------------------------------------------------------------------
void imprimirArea(float area){
	
	printf("EL AREA ES:  %.4f\n\n", area);
	return;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

