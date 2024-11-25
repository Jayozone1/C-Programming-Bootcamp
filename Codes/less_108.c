#include<stdio.h>

//write a program that checks if 2 numbers(received from the user)are the same.
//If they're the same then print -True otherwise, print -False
int main() 
{

    int a;
    int b;
    
    printf("Enter a first integer: " );
    scanf("%d", &a);

    printf("Enter a second integer: " );
    scanf("%d", &b);
    if (a == b) 
        printf("True");
    
    else
        printf("False");
    

    return 0;
}
