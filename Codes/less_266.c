#include <stdio.h>
#include <stdint.h>
#include <math.h>

void printArr(int *ptr, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d", ptr[i]);
    }
    printf("\n");
}

//Reset all the elements of an array to zero
void resetElementtoZero(int *ptr, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        ptr[i] = 0;
    }
}


int main()
{
    int arr[3] = {1, 3, 10};
    printf("Before resetting : \n");
    printArr(arr, 3);
    resetElementtoZero(arr, 3);
    printf("After resetting : \n");
    printArr(arr, 3);    
}
