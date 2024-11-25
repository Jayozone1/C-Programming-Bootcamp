#include <stdio.h>
#include <stdlib.h>

//Recursive Function - that will get some natural number ("num")
//Read a Sequence of "num" numbers from the User.
// Return the Maximum Value in the Sequence.

//  num = 3
// 1, 3, 2



int findMax(int num)
{   
    int maxSoFar;
    int userInput;

    printf("Enter an input: ");
    scanf("%d", &userInput);

    //Base Condition
    if (num > 1)
    {
        maxSoFar = findMax(num - 1);
        if (userInput > maxSoFar)
            return userInput;
        else 
            return maxSoFar;
    }
    return userInput;

}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The maximum value of the sequence is  %d \n",  findMax(num));
    return 0;
}