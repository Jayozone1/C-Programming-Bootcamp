#include <stdio.h>
#include <stdint.h>

#define SIZE 11

int main()
{
    int i, j;
    int mat[SIZE][SIZE];

    for(i = 0; i < SIZE; i++)
        for(j = 0; j < SIZE; j++)
            mat[i][j] = i*j;

    for (i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
            printf("%4d ", mat[i][j]);
        printf("\n");

    }


    return 0;
}