#include <stdio.h>

//A program to calculate the time taken to travel from  a certain city A to city B
int main() {    

    int distance ;
    int Speed ;
    
    
printf("Enter the distance from city A to city B(in Kilometers)  : ", distance);
scanf("%d", &distance);
printf("Enter the speed(in Kilometers per hours)   : ", Speed);
scanf("%d", &Speed);
    int Hours = distance / Speed;
    float Speedinminutes =  Speed / 60.0;
    float timeRemaining = (distance % Speed) / Speedinminutes;
    
    // calculate the monthly salary
    //Time = distance /Speed ;
printf("the Time spent from City A to City B is %d hours %.0f Minutes \n", Hours, timeRemaining);
    
    return 0;
}
