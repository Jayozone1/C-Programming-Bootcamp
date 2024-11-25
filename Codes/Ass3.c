
#include <stdio.h>

//Write a program that reads from the user a "three-digit" integer value. 
//The program should print "ASCENDING" if the three digits of the number are in ascending order (from left to right). 
//If not, the program should print "NOT ASCENDING".

int main() {

    int num;
    
    printf("Input a 3 digit interger number :");
    scanf("%d", &num);

    //printf("The inputed number is %d: \n", num);
    int hundreds = num/100;
    int tens = (num / 10) % 10;
    int units =  num % 10;

    if (hundreds < tens && tens < units)
    {
        printf("ASCENDING");
    }
    else
    {
        printf("NOT ASCENDING");
    }

    return 0;
}