#include <stdio.h>
#include <stdlib.h>


// Receives some "num"  7452
// EvenDigitsSum =  4 + 2 = 6
// OddDigitsSum = 7 + 5 = 12
//print  (EvenDigitsSum - OddDigitsSum)

int main()
{
    int currentDigit;
    int num;
    int evenSum = 0, oddSum = 0;

    printf("Enter num: ");
    scanf("%d", &num);

    while(num > 0)
    {
        currentDigit = num % 10;
        if(currentDigit % 2 == 0) //currentDigit is EVEN
            evenSum += currentDigit;
        else //currentDigit is ODD;
            oddSum += currentDigit;
        num = num / 10;
    }

    printf("Even Digit Sum - Odd Digit Sum = %d\n", evenSum - oddSum);


    return 0;
}