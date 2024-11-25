#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Write a program that receives a day, month and a year.
//The program should find and print the next day on the calender.
//Date format should be in 01-02-1997
int main() 
{

    int day;
    int month;
    int year;

    //int nextday;
    printf("Enter the day: " );
    scanf("%d", &day);

    printf("Enter the month: " );
    scanf("%d", &month);

    printf("Enter the year: " );
    scanf("%d", &year);

    
    printf("the date you entered is %d - %d - %d\n", day, month, year);

    int  nextday = day+=1;

    printf("The value of the next day is %d\n", nextday);

    printf("the date for the next day is %d - %d - %d", nextday, month, year);
    

    return 0;
}