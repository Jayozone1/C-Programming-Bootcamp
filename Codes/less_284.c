#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

//Write a Recursive Function that: 
//1. Receives a natural number (num)
//2. Returns the SUM of -
//" Arithmetical Progression from 1 to num"
//e.g. 1 + 2 + 3 + ..+ num <---->  1 + 2 + 3 + .... + num-1 + num

int sumUpTo(int num)
{
    if (num == 1)
            return 1;
    return num + sumUpTo (num-1);
}
// What the function call executes
// num = 3 --> 3 + sumUpTo(2)
// num = 2 --> 2 + sumUpTo(1)
// num = 1 --> 1

//The breakdown
// num = 3 + 3
// num = 2 + 1
// num = 1

int main()
{

    int num;
    int result;
    printf("Insert  your number: ");
    scanf("%d", &num);
    result = sumUpTo(num);
    printf("Result = %d\n", result);
    return 0;
}
