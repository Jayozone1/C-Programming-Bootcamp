#include <stdio.h>

//Write a program that reads from the user 3 values of an "integer" type. 
//The program should print "EQUAL" if all the values are equal. Otherwise, the program should print "NOT EQUAL".
int main() 
{

    int num1;
    int num2;
    int num3;
    
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Enter the third integer: ");
    scanf("%d", &num3);

    if (num1 == num2 && num1 == num3)
    {
        printf("EQUAL");
    }
    else
    {
        printf("NOT EQUAL");
    }
    return 0;
}