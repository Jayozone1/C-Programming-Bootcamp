#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Write a program that reads a filename from the user.
//The program should create a "frequency Appearances" array
//for lowercase letters ('a' - 'z') and
//print the number of times each lowercase letter appears in the file.

int main()
{
    char filename[20] = { 0 };
    char currentCharacter;
    int i;
    int frequencyArray[26] = { 0 };
    FILE* fp;

    printf("Enter a filename you want to test:");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp != NULL)
    {
        while (!feof(fp))
        {
            currentCharacter - fgetc(fp);
            if(currentCharacter >= 'a' && currentCharacter <= 'z') //currentCharacter holds a lowercase letter
                frequencyArray[currentCharacter - 'a']++;

        }
    }

    printf("Total Appearances of Lowercase Letters in file  '%s' :\n", filename);
    for (i = 0; i < 26; i++)
    {
        printf("Letter '%c' appears %d times\n", i+'a', frequencyArray[i]);
    }



    return 0;
}