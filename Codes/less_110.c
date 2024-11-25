#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//Write a program that checks if a given number is "double-digit" or "triple-digit" or neither.
int main() 
{

    int num;
    printf("Enter a number: " );
    scanf("%d", &num);

    if (num >= 10 && num <= 99) 
        printf("This is a double-digit number");
    else if  (num >= 100 && num <= 999)
        printf("This is a triple-digit number");
    else
        printf("Number is neither double/triple-digit");
    

    return 0;
}