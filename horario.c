#include <stdio.h>
#include <stdlib.h>

typedef struct Fecha
{
    int diaSemana; 
    int hora;
    int minuto;
} Fecha;

//NODO
typedef struct Asignatura
{
    char *nombreAsignatura;
    struct Fecha *horarioEntrada;
    struct Fecha *horarioSalida;
    struct Asignatura *next;
} Asignatura;

void print_ll(Asignatura *head);
void agregarAsignatura(Asignatura *head, char * nombreAsignatura, int diaSemanaEntrada, int horaEntrada, int minEntrada, int diaSemanaSalida, int horaSalida, int minSalida);

int main()
{

    Asignatura *miAsignatura = (Asignatura *)malloc(sizeof(Asignatura));
    miAsignatura->nombreAsignatura = "POO";

    //Creamos el horario
    //Entrada
    Fecha *horarioEntradaMiAsignatura = (Fecha *)malloc(sizeof(Fecha));
    horarioEntradaMiAsignatura->diaSemana = 2;
    horarioEntradaMiAsignatura->hora = 10;
    horarioEntradaMiAsignatura->minuto = 30;

    miAsignatura->horarioEntrada=horarioEntradaMiAsignatura;

    //Salida
    Fecha *horarioSalidaMiAsignatura = (Fecha *)malloc(sizeof(Fecha));
    horarioSalidaMiAsignatura->diaSemana = 2;
    horarioSalidaMiAsignatura->hora = 12;
    horarioSalidaMiAsignatura->minuto = 0;

    miAsignatura->horarioSalida=horarioSalidaMiAsignatura;

   

    

    //Segundo dia de POO
    char * segundoNombre = "POO";
    agregarAsignatura(miAsignatura,segundoNombre, 3, 11, 0, 3, 12, 30);
/*
    Asignatura *miAsignaturaDos = (Asignatura *)malloc(sizeof(Asignatura));

    miAsignaturaDos->nombreAsignatura = "POO";
    //Creamos el horario
    //Entrada
    Fecha *horarioEntradaMiAsignaturaDos = (Fecha *)malloc(sizeof(Fecha));
    horarioEntradaMiAsignaturaDos->diaSemana = 3;
    horarioEntradaMiAsignaturaDos->hora = 11;
    horarioEntradaMiAsignaturaDos->minuto = 0;

    miAsignaturaDos->horarioEntrada=horarioEntradaMiAsignaturaDos;

    //Salida
    Fecha *horarioSalidaMiAsignaturaDos = (Fecha *)malloc(sizeof(Fecha));
    horarioSalidaMiAsignaturaDos->diaSemana = 3;
    horarioSalidaMiAsignaturaDos->hora = 12;
    horarioSalidaMiAsignaturaDos->minuto = 30;

    miAsignaturaDos->horarioSalida=horarioSalidaMiAsignaturaDos;

    miAsignatura->next = miAsignaturaDos;
    
*/

    
    //Tercer dia de POO
    //void agregarAsignatura(Asignatura *head, char * nombreAsignatura, int diaSemanaEntrada, int horaEntrada, int minEntrada, int diaSemanaSalida, int horaSalida, int minSalida)
    char * tercerNombre = "POO";
    agregarAsignatura(miAsignatura,tercerNombre ,5, 12, 0, 5, 1, 30);

    /*
    Asignatura *miAsignaturaTres = (Asignatura *)malloc(sizeof(Asignatura));

    miAsignaturaTres->nombreAsignatura = "POO";

    //Creamos el horario
    //Entrada
    Fecha *horarioEntradaMiAsignaturaTres = (Fecha *)malloc(sizeof(Fecha));
    horarioEntradaMiAsignaturaTres->diaSemana = 5;
    horarioEntradaMiAsignaturaTres->hora = 12;
    horarioEntradaMiAsignaturaTres->minuto = 0;

    miAsignaturaTres->horarioEntrada=horarioEntradaMiAsignaturaTres;

    //Salida
    Fecha *horarioSalidaMiAsignaturaTres = (Fecha *)malloc(sizeof(Fecha));
    horarioSalidaMiAsignaturaTres->diaSemana = 5;
    horarioSalidaMiAsignaturaTres->hora = 1;
    horarioSalidaMiAsignaturaTres->minuto = 30;

    miAsignaturaTres->horarioSalida=horarioSalidaMiAsignaturaTres;

    miAsignaturaDos->next = miAsignaturaTres;*/



//se manda solo la cabeza
    print_ll(miAsignatura);

    return 0;
}

void printAsignatura(Asignatura *asignatura){
  printf("%s: \n El dia %d de la semana: \n De %d:%d a %d:%d\n\n", asignatura->nombreAsignatura, asignatura->horarioEntrada->diaSemana, asignatura->horarioEntrada->hora, asignatura->horarioEntrada->minuto, asignatura->horarioSalida->hora, asignatura->horarioSalida->minuto );
}

void print_ll(Asignatura *head)
{
    printAsignatura(head);
    Asignatura *current = head;
    while (current->next != NULL)
    {
        current = current->next;
        printAsignatura(current);
    }
}

void agregarAsignatura(Asignatura *head, char * nombreAsignatura, int diaSemanaEntrada, int horaEntrada, int minEntrada, int diaSemanaSalida, int horaSalida, int minSalida){
  
    Asignatura *nuevaAsignatura = (Asignatura *)malloc(sizeof(Asignatura));
    
    nuevaAsignatura->nombreAsignatura = nombreAsignatura;

  //Creamos el horario
    //Entrada
    Fecha *nuevoHorarioEntrada = (Fecha *)malloc(sizeof(Fecha));
    nuevoHorarioEntrada->diaSemana = diaSemanaEntrada;
    nuevoHorarioEntrada->hora = horaEntrada;
    nuevoHorarioEntrada->minuto = minEntrada;

    nuevaAsignatura->horarioEntrada=nuevoHorarioEntrada;

    //Salida
    Fecha *nuevoHorarioSalida = (Fecha *)malloc(sizeof(Fecha));
    nuevoHorarioSalida->diaSemana =diaSemanaSalida;
    nuevoHorarioSalida->hora = horaSalida;
    nuevoHorarioSalida->minuto = minSalida;

    nuevaAsignatura->horarioSalida=nuevoHorarioSalida;

    Asignatura * current = head;
    while (current->next != NULL)
    {
      current = current->next;
    }
    current->next = nuevaAsignatura;

}