#include <stdio.h>
#include <stdint.h>

#define SIZE 4


//Print the sum of two elements that is the most close to Zero

int main()
{
    int i, j;
    int values [SIZE] = {-1, 2, 3, -6};
    int minSum = 0;
    int currentSum;


    for(i = 0; i < SIZE; i++)
    {
        for(j = i + 1; j < SIZE; j++)
        {
            currentSum = values[i] + values[j];
            if (abs(currentSum) < abs(minSum))
                currentSum = minSum;
        }
    }


    return 0;
}