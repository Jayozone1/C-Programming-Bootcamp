#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define SIZE 5
//Write a program that should calculate and print the Largest sum of two adjacent Elements(Neighbours) in the Array

// Example #1: 1,4,3,7,1 ---> 10
// Example #2: 5,7,1,5,2 ---> 12


int main()
{
    int i;
    int arr[SIZE] = {1,4,3,7,1};
    int maxSum = arr[0] + arr[1];
    int maxSumIndex1 = 0; // Index of the first number of maxSum
    int maxSumIndex2 = 1; //Index of the second number of maxSum

    for(i = 1; i < SIZE-1; i++)
    {
        if (maxSum < arr[i] + arr[i+1]) //If "maximum so far" is less than the sum of current neighbors
               {
                maxSum = arr[i] + arr[i + 1];
                maxSumIndex1 = i;
                maxSumIndex2 = i + 1;
               } 
    }
    printf("Maximum Sum of 2 Neighbors = %d\n", maxSum);
    printf("The two numbers that are part of the Maximum sum are %d, %d\n", arr[maxSumIndex1], arr[maxSumIndex2]);

    return 0;
}