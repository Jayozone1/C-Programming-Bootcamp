#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Write a Program that receives 3 integers.
//The program should print "Divisible" if in each pair
//between the three numbers there is at least one number that can be divided by the other -without a remainder.

int main() 
{

    int num1;
    int num2;
    int num3;


    printf("Enter the first integer: " );
    scanf("%d", &num1);

    printf("Enter the second integer: " );
    scanf("%d", &num2);

    printf("Enter the third integer: " );
    scanf("%d", &num3);

    if (num1==0 || num2==0 || num3==0 )
        printf("Cannot Divide by 0! Check your input once again\n");

    else if ((num2%num1 == 0 || num1%num2 == 0) && (num3%num1 == 0 || num1%num3 == 0) &&(num3%num2 == 0 || num2%num3 == 0))
        printf("Divisible Numbers");
    else 
        printf("Not Divisible Numbers");
    
    return 0;
}