#include <stdio.h>
#include <stdlib.h>

//strcpy (char * strDestination, char * strSrc)

char *strcpy (char *destination, char *source) 
{
    char *tempPtr;
    int i = 0;
    tempPtr = destination;    

    while(source[i] != '\0') //Till we got to the end of the source string
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';

    return tempPtr;
}


int main()
{
    char myNickName [] = "AplhaTech";
    char copyofNickName[30];
    char *tempResult;

    tempResult =  strcpy(copyofNickName, myNickName);
    printf("The new copied string is: %s \n", tempResult);
    printf("The new copied string is: %s \n", copyofNickName);


    return 0;
}

