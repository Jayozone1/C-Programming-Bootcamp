#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define SIZE 8



int main()
{

    int arr[SIZE] = { 7,5,6,9,6,7,10,7 };
    int countArr[6] = {0};
    int i, maxIndex;

    for(i = 0; i < SIZE; i++)
        countArr[arr[i] - 5]++;

    maxIndex = 0;
    for (i = 1; i < 6; i++)
        if (countArr[i] > countArr[maxIndex])
            maxIndex = i;
    
    //Display "maxIndex+5" (it's the actual value appreated the most...)
    //Displayy "countArr[maxIndex]" (number of appearances..)

    return 0;
}

