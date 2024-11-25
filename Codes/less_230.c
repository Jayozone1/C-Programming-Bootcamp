#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

//1. Average Temperature
//2. Hottest Temperature
//3. Coldest Temperature


int main()
{
    float temperature [SIZE];
    int i;
    float sum = 0.0;
    float average_temp;
    int hottest_day = 0, coldest_day = 0;

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter the temp at day %d: ", i+ 1);
        scanf("%f", &temperature[i]);
    }

    for(i = 0; i < SIZE; i++)
    {
        sum =  sum + temperature[i];
        if (temperature[hottest_day] < temperature[i]) 
        {
            hottest_day = i;
            continue;
        }  
        if (temperature[coldest_day] > temperature[i]) 
        {
            coldest_day = i;
        }  
    }

    average_temp = sum/SIZE;

    printf("The average temp = %f \n", average_temp);
    printf("The hottest day of the week was at day %d \n", hottest_day+1);
    printf("The temp on the hottest day was %f \n", temperature[hottest_day]);
    printf("The coldest day of the week was at day %d \n", coldest_day+1);
    printf("The temp on the coldest day was %f \n", temperature[coldest_day]);
    


    return 0;
}