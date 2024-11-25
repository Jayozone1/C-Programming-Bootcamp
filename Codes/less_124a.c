#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Solution by Vlad Budnitski
//Find the Next Day!


int main()
{
    int day;
    int month;
    int year;
    int leapYear = 0;

    printf("Enter the day: ");
    scanf("%d", &day);

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);


    //Find if a given year is Leap or Not Leap
    if (month == 2)  //If it's February
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
            leapYear = 1;
    
    day+=1; //day = day + 1;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (day<= 31)
            break; // That's Ok 
    case 4:
    case 6:
    case 9:
    case 11:
        if (day<= 30)
            break; // That's Ok
    case 2: //February
        if (leapYear == 1 && day<= 29)
            break;
        else if  (day<= 28);
            break;
    
    default:
        day = 1;
        month += 1; //Month = Month + 1;
        if (month > 12)
        {
            month = 1;
            year+= 1;// Year =  Year + 1;
        }
    }
    
    printf("The Next Awesome Day is : %d/ %d/ %d\n", day, month, year);



    return 0;
}

/*Summary of Step taken by Vlad to solve this exercise.
1. Declare variables for day, month, year and leapyear.
2. Prompt the user to enter the day, Month and leapyear and store them at each addresses.
3. Find out if the year is a leap year or not.
4. Increment day by 1.
5. Using a Switch case, Identify days that each month has.
6. Caterorize into days with 31 days.
7. Categorize into days with 30 days
8. Treat february according to a leapyear or not.
9. write a default statement for each month ending, making the day = 1 and increamenting the month by 1
10. Check if the month is greater than 12, set the month to 1 and increment the year by 1.
11. Print out the date for the next day.


*/ 
