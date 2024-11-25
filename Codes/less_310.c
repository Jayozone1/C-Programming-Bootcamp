#include <stdio.h>>
#include <stdlib.h>


//Write down a recursive function that gets an integer (int n).
// Return 1 if the sum of all the DIGITS in the received number is ODD.
// Otherwise, Return 0. in the case that the SUM is EVEN.

// Example #1: n = 156
// 1+5+6 --> 12 --> FINAL RETURNED VALUE = 0

// Example #2: n = 36859
// 3+6+8+5+9 --> 31 --> FINAL RETURNED VALUE = 1


int digitsSumEven(int n)
{
    int resultSoFar;
    if (n < 10)
        if (n%2 == 0) //EVEN Number
            return 0;
        else // n %2 != --> ODD Number
            return 1;
    resultSoFar = digitsSumEven(n/10);
    if (n % 10 % 2 == 0) //If it's EVEN
        if (resultSoFar == 1) //If the result is ODD
            return 1;
        else // resultSoFar == 0 (the result is EVEN)
            return 0;
    
    else // n % 10 % 2 == 1 // If it's ODD
        if (resultSoFar == 1) //If the result is odd
            return 0;
        else // the result is EVEN
            return 1;
        
}

int main()
{

    return 0;
}