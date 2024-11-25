#include <stdio.h>
#include  <stdint.h>
// Write a program that reads:
//1. "Temperature" from user for 7days,
//2. Calculates and prints:
// - Average Temperature
// - Hottest Day of the week
// - Coldest Day of the week

int main()
{
    int Temp[7];
    int i;
    int Avg_Temp;
    int Hottest_Day;
    int coldest_Day;


    for(i = 0; i < 7; i++)
    {
             printf("Enter the Temperature for each day %d: \n", i+1);
             scanf("%d", &Temp[i]);
    } 

    Hottest_Day = Temp[0]; //Assumption

    for(i = 1; i < 7; i++)
    {
            if (Temp[i] > Hottest_Day )
                Hottest_Day  = Temp[i];
    }
    printf("Your hottest day of thwe week  is: %d \n", Hottest_Day);

    coldest_Day = Temp[0];
    for(i = 1; i < 7; i++)
    {
            if (Temp[i] < coldest_Day )
                coldest_Day  = Temp[i];
    }
    printf("Your coldest day of the week  is: %d \n", coldest_Day);

    return 0;
}