#include <stdio.h>

int main() {
    // Write C code here
    //Prnt date in Hexadecimal
    //Write a program that should receive from the user 3 values
    //year, month,day
    //The program should print the date in Hexadecimal format
    int year;
    int month;
    int day;
    
    printf("Enter the day: ");
    scanf("%d", &day);
    
    printf("Enter the month: ");
    scanf("%d", &month);
    
    printf("Enter the year: ");
    scanf("%d", &year);
    
        printf("The date is  %d: %d: %d\n", day, month, year);
        
        printf("The date in hexadecimal format is   0x%x: 0x%x: 0x%x", day, month, year);
    
    

    return 0;
}