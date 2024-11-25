#include <stdio.h>
#include <stdint.h>

#define SIZE 4
#define N 1
int main()
{
    int i, k, temp;
    int valuesArr[SIZE] = { 5, 4, 7, 3};

    for(k = 0; k < N;  k++)
    {
        temp = valuesArr[SIZE - 1];
        for(i  = SIZE-1; i > 0; i--)
        {
            valuesArr[i] = valuesArr[i- 1]; 
        }
        valuesArr[0] = temp;

    }

   //Print the array.....
   for( i = 0; i < SIZE; i++)
    {
        printf("The array of the new Values are %d\n", valuesArr[i]);
    }
    printf("\n");


    return 0;
}