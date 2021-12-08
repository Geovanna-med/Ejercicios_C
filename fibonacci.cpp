// Gabriel Nayib Castul Lazo
// Geovanna Fernanda De la cruz Medina

#include <stdio.h>
#define MAX 15

void calcularSerie(int serie[], int n);
void imprimirSerie(int serie[], int n);

int main(void)
{
   
   int N;
   int fibonacci[MAX];

   do
   {
      printf("Ingresa el numero de elementos de la secuencia: \n");
      scanf("%d", &N);
   } while (N < 1 || N > 15);

   calcularSerie(fibonacci, N);
   
   imprimirSerie(fibonacci, N);

   return 0;
}

void imprimirSerie(int serie[], int n)
{
   int i;

   for (i = 0; i < n; i++)
   {
      printf("%d\t", serie[i]);
   }
}

void calcularSerie(int serie[], int n)
{
   int i;
   int numero;
   
   serie[0] = 0;
   serie[1] = 1;

   for (i = 2; i < n; i++)
   {
      numero = serie[i - 1] + serie[i - 2];
      serie[i] = numero;
   }
}

