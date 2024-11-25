// Exercise
// Develop a recursive function that recieves an integer num and a digit.
// The function should return:
//       - 1, if the count of the "digit" occurences in num is even.
//       - 0, otherwise (if the number of "digit" ocurences in num is odd).
//
// For example:
//        num = 124, digit = 2 --> 0 (1 occurence - odd)
//        num  =  12342, digit = 2 --> 1 (2 occurences - even)
//        num = 10200240, digit = 0 --> 1 (4 occurences - even)

#include <stdio.h>
#include <stdlib.h>

int digitsEvenAppearances(int num, int digit) 
{
    int totalAppearancesSoFar;
    if(num < 10) //if "num" is 1 digit
        if(num != digit)
            return 1; // 0 appearances ==> even appearances
        else // num == digit
            return 0; // digit appears once in num ==> odd appearances
    totalAppearancesSoFar = digitsEvenAppearances(num / 10, digit);
    if(totalAppearancesSoFar == 1) //So far we had even appearances of digit in num/10
        if(num % 10 == digit)
            return 0;
        else //nothing changed because digit != num % 10
            return 1;
    else // totalAppearnacesSoFar == 0
        if (num % 10 == digit)
            return 1;
        else 
            return 0;

}

/*
//Minimized and Optimized Solution
int digitsEvenAppearances(int num, int digit)
{
    if (num < 10) // if "num" is 1 digit
        if (num != digit)
            return 1; // 0 appreances ==> even appearances
        else // num == digit
            return 0; // digit appears once in num ==> odd appearances
    if (num % 10 != digit)
        return digitsEvenAppearances(num / 10, digit); //Keeping the status so far the same..
    else // num % 1 digit
        return !digitsEvenAppearances(num /10, digit); // changing the status (0->1 | 1->0)

}



 */




