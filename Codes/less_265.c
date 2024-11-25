#include <stdio.h>
#include <stdint.h>
#include <math.h>
//Write a function that gets an array, size of array
//Find the sum of all elemens in the array.
//The function should return the sum
int sumofArray(int *pArr, int SIZE);

int main()
{

    int arr[3] = {1, 3, 10};
    int result = 0;
    result = sumofArray(arr, 3);
    printf("The result of sum = %d", result);
    return 0;
}


int sumofArray(int *pArr, int SIZE)
{
    int i;
    int sum = 0;
    for(i = 0; i < SIZE; i++)
    {
        sum = sum + pArr[i]; //sum =+ pArr[i];
    }
    return sum;
}