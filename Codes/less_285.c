#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// Write a Recursive Function that:
// Receives a natural number(num)
// Returns the Factorial of num
// Factorial(num) = num * (num - 1) * ...* 2 * 1 num!
// e.g Factorial of 5 = 5 * 4 * 3 *2 *1

int Factorial(int num)
{
    if (num <= 1 )
            return 1;
    return num * Factorial(num - 1);
}
//Explaining the functions
// Factorial (3) ---> return  3 * factorial (2)
// Factorial (2) ---> return  2 * factorial (1)
// Factorial (1) ---> return 1

//Breakdown
// Factorial (3) --> return  3 * 2 = 6
// Factorial (2) --> return 2 * 1
// Factorial (1) --> return 1
int main()
{
    int num;
    int result;
    printf("Insert  your number: ");
    scanf("%d", &num);
    result = Factorial(num);
    printf("Result = %d\n", result);
    return 0;
}