#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Write a program that checks if a given year is a leap year.
// this code takes in the number of
int main() 
{

    int days;
    printf("Enter the number of days in the year: " );
    scanf("%d", &days);

    if ( days % 6 == 0 )
        printf("The year with  %d days is a leap year", days);
    else
        printf("This is not the number of days in a leap year");

    return 0;
}
