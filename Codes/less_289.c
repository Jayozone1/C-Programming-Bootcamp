#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
//Write a Recursive Function that:
// Receives a number - "num"
// Returns the SUM of all DIGITS
// E.g "num" = 67 // Sum of Digits: 6 + 7 = 13
//Function call Breakdown
// sumofDigits(213) = 3 + sumOfDigits(21) = 3 + 1 + sumOfDigits(2)
int SumOfDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + SumOfDigits(n / 10);
}
int main()
{
    int n;
    int result;
    printf("Insert your number: ");
    scanf("%d", &n);
    result = SumOfDigits(n);
    printf("Sum of digits for %d = %d \n", n, result);
    return 0;
}
