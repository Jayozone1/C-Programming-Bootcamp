#include <stdio.h>
#include <stdlib.h>


// current date - 1st of October 2001
// next date - 2nd of October 2001 

typedef struct date {
    int day;
    int month;
    int year;
}Date;

void printDate (Date dt)
{
    printf("Year = %d, Month = %d, Day = %d\n", dt.year, dt.month, dt.day);
}

Date inputDate()
{
    Date dt;
    printf("Enter day(1-31) : ");
    scanf("%d", &dt.day);

    printf("Enter month(1-12) : ");
    scanf("%d", &dt.month);

    printf("Enter year(yy) : ");
    scanf("%d", &dt.year);
    return dt;
}


void printNextDay(Date dt)
{
    dt.day = dt.day + 1; //dt.day++;
    if(dt.day > 31)
    {
        dt.day = 1;
        dt.month++;
        if (dt.month > 12)
        {
            dt.month = 1;
            dt.year++;
        }
    }
    printf("The next day is: \n");
    printDate(dt);

}


int main()
{
    Date todayDate = {31, 12, 2009}; //day - 31, Month - 12, year - 2009
    printf("Current Date : \n");
    printDate(todayDate);
    printNextDay(todayDate);
    return 0;
}