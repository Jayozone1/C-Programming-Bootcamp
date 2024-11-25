#include <stdio.h>
#include <stdint.h>
#include <math.h>

//Write a Program that receives an integer representing seconds.
//The program should convert the given seconds into
//1. Total Hours
//2. Total Minutes
//3. Remaining Seconds
//And print the result in the following format HH: MM: SS
int main()
{
    int num;
    int hours;
    int minutes;
    int seconds;

    printf("Enter the value of seconds : " );
    scanf("%d", &num);

   
    hours  = num / 3600;
    printf("The value of Hours is %d\n", hours);

    minutes = (num - 3600)/ 60;
    printf("The value of minutes is %d\n", minutes);

    seconds = (num - 3600) % 60;
    printf("The value of  seconds is %d\n", seconds);


    if (hours < 10)
        printf("0");
    printf("%d : ", hours);
    if (minutes < 10)
        printf("0");
    printf("%d : ", minutes);
    if (seconds < 10)
        printf("0");
    printf("%d\n", seconds);

    //printf("The time in HH:MM:SS is %d:%d:%d", hours, minutes, seconds);


    return 0;
}