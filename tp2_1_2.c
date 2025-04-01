#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main()
{
    srand(time(NULL));
    int i;
    double vt[N];
    double *punt = vt;
    for(i = 0;i<N; i++)
    {
    
    *(punt + i) = 1 + rand()%100;
    
    printf("%f \n", *(punt + i));

    }
    return 0;
}