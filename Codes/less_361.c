#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define SIZE 26


int main()
{

    char arr[SIZE] = { 'k', 'i', 'b', 'r', 'c', 'k', 'z', 'm'};
    int countArr[26] = { 0 };
    int i, maxIndex;

    for (i = 0; i < SIZE; i++)
        countArr[arr[i] - 'a']++; //countArr[arr[i]-97]++;
    
    maxIndex = 0;
    for (i = 1; i < 26; i++)
        if (countArr[i] > countArr[maxIndex])
            maxIndex = i;

    //Display "maxIndex+'a" (it's the letter appeared the most..)
    //Display "countArr[maxIndex]" (number of appearances..)

    return 0;
}