#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define N 5
#define M 7

int main(){
    int i,j;
    int mt[N][M];
    int *punt;
    punt = mt;

    srand(time(NULL));
    
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *punt=1+rand()%100;
            printf(" %d" , mt[i][j]);
            punt++;
        }
    printf("\n");
    }
}