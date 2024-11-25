#include <stdio.h>
#include <stdint.h>


//Write a program that initializes an array of digits(Your phone number)
//The Program should find the Max digit and print it tot the screen

int main()
{
    int digits[11];
    int i;
    int highest_digit;

    for(i = 0; i < 11; i++)
    {
             printf("Enter the grade no %d: \n", i);
             scanf("%d", &digits[i]);
    }
    highest_digit = digits[0]; //A Must Stop

    for(i = 1; i < 11; i++)
    {
            if (digits[i] > highest_digit)
                highest_digit = digits[i];
    }
    printf("Your highest grade is: %d \n", highest_digit);


    return 0;
}