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
void listarPCs(struct compu pcs[], int cantidad);
void mostrarMasVieja(struct compu pcs[], int cantidad);
void mostrarMasVeloz(struct compu pcs[], int cantidad);
int main()
{
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};    
    int i;
    struct compu pcs[CANT];
    for (int j = 0; j < CANT; j++)
    {
        i = rand() % 6;
        pcs[j].velocidad = (rand()% 3) + 1; //genera numeros aleatorios de 1 a 3
        pcs[j].anio = (rand() % (2024 - 2015 + 1)) + 2015; //genera numeros entre 2015 y 2024
        pcs[j].cantidad_nucleos = (rand()% 8) + 1; //genera numeros entre 1 y 8
        pcs[j].tipo_cpu = tipos[i];
    }

    listarPCs(pcs ,CANT);
return 0;
}

void listarPCs(struct compu pcs[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        printf("\n");
        printf("/////////////");
        printf("\n");
        printf("Pc numero: %d\n", i + 1);
        printf("Anio: %d\n", pcs[i].anio);
        printf("Tipo de cpu: %s\n", pcs[i].tipo_cpu);
        printf("Velocidad: %d\n", pcs[i].velocidad);
        printf("La cantidad de nucleos: %d\n", pcs[i].cantidad_nucleos);
        printf("//////////////");
    }
    
    
}