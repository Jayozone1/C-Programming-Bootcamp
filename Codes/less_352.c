#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define SIZE 8


int main()
{  
    int arr[SIZE] = { 0, 2, 0, 1, 0, 0, 2, 0};
    int countArr[3] = { 0 };
    int i;
    /*
    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == 0)
            countArr[0]++;
        else if (arr[i] == 1)
            countArr[1]++;
        else if (arr[i] == 2)
            countArr[2]++;
    } 
    */
   for (i = 0; i < SIZE; i++)
    {
        countArr[arr[i]]++;
    }
 
    return 0;
}