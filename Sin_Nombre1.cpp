//Gabriel Nayib Castul Lazo
//Geovanna Fernanda de la Cruz Medina
#include <stdio.h>
#define MAX 5

void imprimirarreglo(int arreglo[][MAX], int orden);
void intercambiarRenglones(int arreglo[][MAX], int orden);

int main() {
   
   int matriz[MAX][MAX] = 
   {{0, 15, 28, 49, 60}, 
   {68, 115, 36, 15, 70},
   {10, 20, 30, 40, 50},
   {90, 0, 7, 28, 80},
   {87, 5, 13, 56, 90}};
   
   int N=5;

   printf("\nMatriz original:\n");
   imprimirarreglo(matriz, N);
   printf("\nMatriz con los renglones intercambiados:\n");
   intercambiarRenglones(matriz, N);
   imprimirarreglo(matriz, N);

  
   return 0;
}
void imprimirarreglo(int arreglo[][MAX], int orden){

   int i, j;
   for (i=0; i < 5; i++){
     for (j=0; j < 5; j++){
       printf("%5d", arreglo[i][j]);
     }
     printf("\n");
    }
}
   
void intercambiarRenglones(int arreglo[][MAX], int orden){
   orden = orden - 1;
   for (int i = 0; i < orden/2; i++){
     for (int j = 0; j <= orden; j++){

       int tmp = arreglo[i][j];
       arreglo[i][j] = arreglo[orden - i][j];
       arreglo[orden - i][j] = tmp;
     }
   }
}

