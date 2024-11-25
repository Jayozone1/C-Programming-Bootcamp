#include <stdio.h>
#include <stdlib.h>



#define SIZE 7

void main()
{
    int arr[SIZE];
    int i, maxIndex;

    for (i=0; i < SIZE; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    maxIndex = 0;
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }
    printf("Index of Max Digit is : %d\n", maxIndex);
}