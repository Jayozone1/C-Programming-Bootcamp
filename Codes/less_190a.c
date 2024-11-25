#include <stdio.h>
#include <stdint.h>

//Receives "n" from the User
// Receive/Read "n" values (integers)
//Sum all the ODD Numbers

int main()
{
    int i;
    int n;
    int currentValue;
    int oddSum = 0;

    printf("Enter n (the number of values in a sequence): ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &currentValue);
        if(currentValue % 2 == 1) //It's an ODD Number
            oddSum += currentValue;
    }

    printf("odd Sum = %d\n", oddSum);

    return 0;
}