//Geovanna Fernanda De la cruz Medina
//Gabriel Nayib Castul Lazo 

#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <stdbool.h>

#define MAX_CARACTERES 25

int convertir(char * ptrFrase);
int guardar(char * ptrFrase, int n);
void imprimir(char * ptrFrase);

int main(void) {

   char frase[MAX_CARACTERES];
   int longitud = 0;
   int nVocales = 0;
   bool validacion = true;

   do {
      printf("Ingrese una frase no mayor a 24 caracteres: \n");
      gets(frase);

      longitud = strlen(frase);

   } while (!(longitud > 0 && longitud < MAX_CARACTERES));

   nVocales = convertir(frase);
   guardar(frase, nVocales);
   imprimir(frase);

   return 0;
}
//----------------------------------------------------------

int convertir(char * ptrFrase) {
   int i;
   int cantVocales = 0;

   for (i = 0; i <= strlen(ptrFrase); i++) {
      switch ( * (ptrFrase + i)) {
      case 'a':
         if (islower( * (ptrFrase + i))) {
            *(ptrFrase + i) = toupper( * (ptrFrase + i));
         }
         cantVocales = cantVocales + 1;
         break;
      case 'e':
         if (islower( * (ptrFrase + i))) {
            *(ptrFrase + i) = toupper( * (ptrFrase + i));

         }
         cantVocales = cantVocales + 1;
         break;
      case 'i':
         if (islower( * (ptrFrase + i))) {
            *(ptrFrase + i) = toupper( * (ptrFrase + i));

         }
         cantVocales = cantVocales + 1;
         break;
      case 'o':
         if (islower( * (ptrFrase + i))) {
            *(ptrFrase + i) = toupper( * (ptrFrase + i));

         }
         cantVocales = cantVocales + 1;
         break;
      case 'u':
         if (islower( * (ptrFrase + i))) {
            *(ptrFrase + i) = toupper( * (ptrFrase + i));

         }
         cantVocales = cantVocales + 1;
         break;
      default:
         break;
      }

   }

   printf("Numero de vocales encontradas en la frase: %d\n", cantVocales);
   return cantVocales;
}
//----------------------------------------------------------
int guardar(char * ptrFrase, int n) {
   FILE * out_file = fopen("frase.txt", "w+");

   fprintf(out_file, "%s\t%d", ptrFrase, n);
   
   return 0;
}

//-----------------------------------------------------------------

void imprimir(char * ptrFrase) {
   int longitud = strlen(ptrFrase);
   int i;

   printf("Frase modificada: ");
   for (i = 0; i <= longitud; i++) {
      printf("%c", *(ptrFrase + i));
   }
}
