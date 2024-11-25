#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Write a program that checks if a given year is a leap year.
// this code takes the year in figures e.g 2023

int main()
{
    int year;


    printf("Enter a year: ");
    scanf("%d", &year);


    if (year % 400 == 0)
        printf(" %d year is a leap year\n", year);
    else if (year % 100 == 0)
        printf("%d year is NOT a leap year\n" , year);
    else if (year % 4 == 0)
        printf("%d year is a leap year\n", year);
    else 
        printf("%d year is NOT a leap year\n", year);

    return 0;
}