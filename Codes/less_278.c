#include <stdio.h>
#include <stdint.h>
#include <string.h>


//Write a program that:
//1. Reads a string from the user
//2. checke if stting is palidrome.

int main()
{
    
    //declare variables
    char str1[30];
    int i;
    int len;
    int flag = 0;


    printf(" Enter a string: ");
    scanf("%s", str1);
    len = strlen(str1); //get the string length

    for (i = 0; i < len; i++)
    {
        //str1[i] is not equal to str1[len - i - 1]
        if(str1[i] != str1[len - i - 1])
        {
            flag = 1;
            break; //exit from if statement
        }
    }
    if (flag = 0)
    {
         printf("%s is not a palindrome string", str1);

    }
    else
    {
        printf("%s is a palidrome", str1);
    }     

    
    return 0 ;
}
