#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define SIZE 53


int main()
{

    char arr[SIZE] = { 'K' , 'O', 'c', 'R', 'C', '', 'K', 'r'};
    int countArr[52] = { 0 };
    int i,  maxIndex;

    for (i = 0; i < SIZE; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
            countArr[arr[i] - 'a']++;
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
            countArr[arr[i] - 'A' + 26]++;
    }

    maxIndex = 0;
    for (i = 1; i < 52; i++)
        if (countArr[i] > countArr[maxIndex])
            maxIndex = i;
    
    if (maxIndex < 26)
        //Display "maxIndex+'a'"(it's the letter appeared the ..)
        //Display "countArr[maxIndex]" (number of appearance...)
    else 
        //Display "maxIndex-26+ 'A'" (it's the letter apeared the ...)
        //Display "countArr[maxIndex]" (number of appearance)

        return 0;

}