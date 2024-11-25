#include <stdio.h>
#include <stdint.h>
#define SIZE 4
#define N 3

//Write a program that should rotate left a given array by N positions
//Example : Before - 5, 4, 7, 3
//After - 7, 3, 5, 4
/*
int main()
{
    int i, temp1, temp2;
    int valuesArr[SIZE] = { 5,4,7,3 };

    temp1 = valuesArr[0];
    temp2 = valuesArr[0];
    for (i = 2; i < SIZE; i++)
    {
        valuesArr[i-N] = valuesArr[i];
    }
    valuesArr[SIZE - 2] = temp1;
    valuesArr[SIZE - 1] = temp2;


   //Print the array...
    return 0;
}
*/
//Vlad's Solution
int main()
{
    int i, k, temp;
    int valuesArr[SIZE] = { 5,4,7,3};

    for(k = 0; k < N; k++)
    {
        temp = valuesArr[0];
        for( i = 1; i < SIZE; i++)
        {
            valuesArr[i - 1] = valuesArr[i];
        }
        valuesArr[SIZE - 1] = temp;
    } 

    //Print the array....  
    for(i = 0; i < SIZE; i++)
    {
        printf("the value of new array is %d \n", valuesArr[i]);
    } 
    printf("\n");
    
    return 0;
}
