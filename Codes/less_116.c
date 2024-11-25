#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Write a program that receives a number representing a month(1-12)
// and prints the month name
int main() 
{

    int num = 0;
    
    printf("Enter a number with range 1 - 12: " );
    scanf("%d", &num);

    if ( num == 1) 
        printf("The number %d represents January", num);
    
    else if ( num == 2) 
        printf("The number %d represents February", num);
    
    else if ( num == 3) 
        printf("The number %d represents March", num);

    else if ( num == 4) 
        printf("The number %d represents April", num);

    else if ( num == 5) 
        printf("The number %d represents May", num);

    else if ( num == 6) 
        printf("The number %d represents June", num);

    else if ( num == 7) 
        printf("The number %d represents July", num);

    else if ( num == 8) 
        printf("The number %d represents August", num);

    else if ( num == 9) 
        printf("The number %d represents September", num);
    
    else if ( num == 10) 
        printf("The number %d represents October", num);
    
    else if ( num == 11) 
        printf("The number %d represents November", num);

    else if ( num == 12) 
        printf("The number %d represents December", num);

    else if ( num < 1  || num > 12) 
        printf("The number %d is out of range kindly input a number within range", num);

    else
        printf("Wrong Input");

    return 0;
}