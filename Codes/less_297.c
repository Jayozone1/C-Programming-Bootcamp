#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
//We have to write a recursive- function that will 
//Calculate and return the total number of occurences  of EVEN number in a sequence
//read a sequence of integers from user... up until -1
//Example:
//1, 3, 4, 6, -1 --->

int totalEven(int num )
{
    int inputUser;
    printf("Enter a number: ");
    scanf("%d", &inputUser);
    if (inputUser == -1)
        return 0;
    if (inputUser % 2 == 0)
        return 1 + totalEven(num);
    return totalEven(num);
}

int main()
{
    int num = 2;
    int totalEvenNumbers = totalEven(2);
    printf("the total occurences of Even number in the sequence is = %d \n",  totalEvenNumbers);
    return 0;
}