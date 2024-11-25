#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
//Write a Recursive Function that:
// Receives a number - "num"
// Returns the TOTAL DIGITS in "num".
//E.g "num" = 67 // Total Digits = 2
//Function call Breakdown
//one Digits --> 1
//totalCount(213) ==>  1 + totalCount(21) ==> 1 + 1 + totalCount(2)


int CountofDigits(int n)
{
    if (n <= 9) // 1 Digit
        return 1;
    return 1 + CountofDigits(n/10);
}


int main()
{
    int n;
    int result;
    printf("Insert your number: ");
    scanf("%d", &n);
    result = CountofDigits(n);
    printf("the count of digits for %d = %d \n", n, result);
    return 0;
}

