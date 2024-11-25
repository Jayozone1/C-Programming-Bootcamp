#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    int currentDigit = 0;
    int oddSum = 0;
    int n;

   // printf("Enter 'n' (the number of values in a sequence): ");
    //scanf("%d", &n);

    
        printf("Enter num: ");
        scanf("%d", &num);


    while(num > 0)
    {
        currentDigit = num % 10;
        if (currentDigit % 2 != 0)
            oddSum += currentDigit;
        num = num / 10;

    }
   

printf("The sum of the sequence is:  %d", oddSum);

    return 0;
}

