#include <stdio.h>
#include <stdint.h>

#define SIZE 4

//Write a program that should rotate left a given array by 1 position
int main()
{
    int i, temp;
    int valuesArr[SIZE] = { 5,4,7,3 };

    temp = valuesArr[0];
    for (i = 1; i < SIZE; i++)
    {
        valuesArr[i-1] = valuesArr[i];
    }
    valuesArr[SIZE - 1] = temp;

   //Print the array...
   for(i = 0; i < SIZE; i++)
    {
        printf("the value of new array is %d \n", valuesArr[i]);
    } 
    printf("\n");


    return 0;
}