#include <stdio.h>
#include <stdint.h>


int main()
{
    int arr[] = {0, 1, 20, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,  max;

    max = arr[0]; //Assumption
    for(i = 1; i < 11; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Max digit in your phone number is %d \n", max);

    return 0;
}

