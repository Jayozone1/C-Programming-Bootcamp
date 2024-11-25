#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Write a program that reads a filename and a certain character from the user
//The program should calculate and print the total appearances fof the character in the file.


int main()
{

    char desiredCharacter;
    char filename[20] = { 0 };
    int countAppearances = 0;
    FILE* fp;

    printf("Enter a desired character:");
    scanf(" %c", desiredCharcter);


    printf("Enter a filename you want to test:");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp != NULL)
    {
        while(!feof(fp))
            if(fgetc(fp) == desiredCharacter)
                countAppearances++;
    }

    printf("Total appearances of charcater %c: %d\n", desiredCharacter, countAppearances);

    
    return 0;
}