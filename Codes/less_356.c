#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define SIZE 20


int main()
{
    int arr[SIZE] = {0,5,4,9,5,8,2,3,1,5,4,9,5,5,2,7,6,5,4,1};
    int countArr[10] = { 0 };
    int i, maxIndex;

    for(i = 0; i < SIZE; i++)
        countArr[arr[i]]++;
    
    maxIndex = 0; //Assuming first element appeared the most...
    for (i = 1; i < 10; i++)
        if(countArr[i] > countArr[maxIndex])
            maxIndex = i;
        
    //Display "maxIndex" (it's the actual value appeared the most...)
    //Display "countArr[maxIndex]" (number of appearances..)

    return 0;

}