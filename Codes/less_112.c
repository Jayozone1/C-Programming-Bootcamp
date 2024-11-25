#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Write a program that receives an integer value and prints its absolute value.
int main() 
{

    int num;
    printf("Enter an integer: " );
    scanf("%d", &num);

    printf("the absolute value of the number is %d", abs(num));
    

    return 0;
}