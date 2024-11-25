#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

//We have to write a recursive- function that will 
//Calculate and return the SUM of all EVEN number in a sequence
//read a sequence of integers from user... up until -1

//Example:
//1, 3, 4, 6, -1 ---> 10

int SumEvenNumbers()
{
    int inputUser;
    printf("Please enter a number: ");
    scanf("%d", &inputUser);

    //Base/Stopping Condition
    if(inputUser == -1)
        return 0;

    //Recursive Calls
    if (inputUser % 2 == 0)
        return inputUser + SumEvenNumbers();
    return SumEvenNumbers();
}
int main()
{
    int totalSum;
    totalSum = SumEvenNumbers();
    printf("Total Sum of Even Numbers in the sequence you entered is %d\n", totalSum);
    return 0;
}

