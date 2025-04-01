#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main()
{
    srand(time(NULL));
    int i,j;
    float mt[N][M];
    float *punt = &mt[0][0];
    for(i = 0;i<N; i++)
    {
    for(j = 0;j<M; j++)
    {
    *(punt + (i * M +j))= 1 + rand()%100;
    printf(" %lf", *(punt + (i * M +j)));
    }
    printf("\n");
    }
return 0;
}