#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include  <math.h>


#define SIZE 10


int strLen(char *str)
{
    int i = 0, length = 0;
    while (str[i] != '\0')
    {
        i++;
        length++;
    }
    return length;
}

int main()
{    
    int stringlength;
    char testStr[SIZE];
    gets(testStr);
    stringlength = strlen(testStr);
    printf("The length of string %s is %d\n", testStr, stringlength);
    return 0;
}















/*
int main()
{
    // Brad Pitt
    char fullName[] = "Brad Pitt";
    char lastName[] = "Pitt";
    int i = 0;
    while(fullName[i] != '\0')
    {
        printf("%c", fullName[i]);
        i++;
    }
    printf("\n");
    while(lastName[i] != '\0')
    {
        printf("%c", lastName[i]);
        i++;
    }

    return 0;
}

*/
