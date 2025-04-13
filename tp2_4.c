#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CANT 5
struct compu {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
};
   

int main()
{
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};    
    int i;
    struct compu pc[CANT];
    for (int j = 0; j < CANT; j++)
    {
        i = rand() % 6;
        pc[j].velocidad = (rand()% 3) + 1; //genera numeros aleatorios de 1 a 3
        pc[j].anio = (rand() % (2024 - 2015 + 1)) + 2015; //genera numeros entre 2015 y 2024
        pc[j].cantidad_nucleos = (rand()% 8) + 1; //genera numeros entre 1 y 8
        pc[j].tipo_cpu = tipos[i];
    }
return 0;
}
