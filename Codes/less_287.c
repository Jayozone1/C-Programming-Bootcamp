#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
//Write a Recursive Fibonacci Function that
// 1. Receives a "n" (INDEX)
// 2. Returns tha VALUE at INDEX "n"
//Explaining a Fibonacci Series
// F0 = 0
// F1 = 1
// F2 = F1 + F0 = 1
// F3 = F2 + F1 = 2
// Fn = Fn-1 + Fn -2 

int Fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    int n;
    int result;
    printf("Insert your number: ");
    scanf("%d", &n);
    result = Fibonacci(n);
    printf("Result = %d \n", result);
    return 0;
}