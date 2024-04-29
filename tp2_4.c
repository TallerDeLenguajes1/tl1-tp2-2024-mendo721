#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

struct
{
    int velocidad; //entre 1 y 3 GHz
    int anio; //entre 2015 y 2023
    int cantidad; //entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
}typedef compu;

char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
void cargarPc(compu *pc, int n);
void mostrarPc(compu *pc, int n);
void mostrarPcViejas(compu *pc, int n);
void mostrarPcVeloc(compu *pc, int n);



int main(){
    srand(time(NULL));
    compu pc[5];
    cargarPc(pc,5);
    mostrarPc(pc,5);
    mostrarPcViejas(pc,5);
    mostrarPcVeloc(pc,5);
}

void cargarPc(compu *pc, int n){
    for (int i = 0; i < n; i++)
    {
        (pc + i)->velocidad = 1 + rand() % 3;
        (pc + i)->anio = 2015 + rand() % 9;
        (pc + i)->cantidad = 1 + rand() % 8;
        (pc + i)->tipo_cpu = tipos[rand() % 6];
    }
}

void mostrarPc(compu *pc, int n){
    printf("\nLas computadora cargadas son:\n");
    for (int i = 0; i < n; i++)
    {
        
        printf("%d\n", (pc + i)->velocidad);
        printf("%d\n", (pc + i)->anio);
        printf("%d\n", (pc + i)->cantidad);
        printf("%s\n", (pc + i)->tipo_cpu);
        printf("\n");
    }
}

void mostrarPcViejas(compu *pc, int n){
    int vieja = 2023;
    int indice;
    for (int i = 0; i < n; i++)
    {
        if ((pc + i)->anio < vieja)
        {
            vieja = (pc + i)->anio;
            indice = i;
        }
    }
    printf("\nLa computadora mas vieja es:\n");
    printf("%d\n", (pc + indice)->velocidad);
    printf("%d\n", (pc + indice)->anio);
    printf("%d\n", (pc + indice)->cantidad);
    printf("%s\n", (pc + indice)->tipo_cpu);
    printf("\n");
}

void mostrarPcVeloc(compu *pc, int n){
    int velocidad = 0;
    int indice;
    for (int i = 0; i < n; i++)
    {
        if ((pc + i)->velocidad > velocidad)
        {
            velocidad = (pc + i)->velocidad;
            indice = i;
        }
    }
    printf("\nLa computadora mas veloz es:\n");
    printf("%d\n", (pc + indice)->velocidad);
    printf("%d\n", (pc + indice)->anio);
    printf("%d\n", (pc + indice)->cantidad);
    printf("%s\n", (pc + indice)->tipo_cpu);
    printf("\n");
}