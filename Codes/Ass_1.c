#include <stdio.h>

//Write a program that reads from the user 2 values of an "integer" type. 
//The program should print "EQUAL" if both the values are equal. Otherwise, the program should print "NOT EQUAL".

int main() {
    int num1;
    int num2;
    
    printf("Enter the first interger: ");
    scanf("%d", &num1);

    printf("Enter the second interger: ");
    scanf("%d", &num2);

    if (num1 == num2 )
    {
        printf("EQUAL");
    }
    else
    {
        printf("NOT EQUAL");
    }


    return 0;
}