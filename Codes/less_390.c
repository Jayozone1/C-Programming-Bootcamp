#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Write a program that reeads a filename from the user.
//The program should create a "frequencyAppearances" array
// for lowercase letters ('a'-'z') and
// print the (first) character that appeared most of the times

int main()
{

    char filename[20] = { 0 };
    char currentCharacter;
    int i;
    int maxIndex = 0;
    int frequencyArray[26] = { 0 };
    FILE* fp;

    printf("Enter a filename you want to test:");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp != NULL)
    {
        while (!feof(fp))
        {

                currentCharacter = fgetc(fp);
                if (currentCharacter >= 'a' && currentCharacter <= 'z') //currentCharacter holds a lowercase alphabet
                    frequencyArray[currentCharacter - 'a']++;
        }
    }

    for (i = 1; i < 26; i++)
    {
        if (frequencyArray[maxIndex] < frequencyArray[i])
            maxIndex = i;
    }
    printf("The maximum appearances of a lowercase is of character: %c\n", maxIndex + 'a');
    printf("The number of its appearances is : %d\n", frequencyArray[maxIndex]);

    return 0;

}