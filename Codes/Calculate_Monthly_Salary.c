#include <stdio.h>
int main() {    

    float SalperHOUR;
    float noHours;
    float monthSal;
    
    
    printf("Enter the your salary per hour  : $", SalperHOUR);
    scanf("%f", &SalperHOUR);
    
    printf("Enter the total Number of Hours worked monthly : ", noHours);
    scanf("%f", &noHours);
    
    
    
    
    

    // calculate the monthly salary
    monthSal = SalperHOUR *  noHours;
    printf("the amount of Salary received in a Month is  : $%.2f\n", monthSal);
    
    return 0;
}
