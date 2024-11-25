#include <stdio.h>
#include <stdlib.h>
//Recursive Function - that will get some natural number ("num")
//Read a Sequence of "num" numbers from the User.
// Return the Maximum Value in the Sequence.
//  num = 3
// 1, 3, 2

int findMin(int num)
{   
    int minSoFar;
    int userInput;

    printf("Enter an input: ");
    scanf("%d", &userInput);

    //Base Condition
    if (num > 1)
    {
        minSoFar = findMin(num - 1);
        if (userInput < minSoFar)
            return userInput;
        else 
            return minSoFar;
    }
    return userInput;

}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The minimum value of the sequence is  %d \n",  findMin(num));
    return 0;
}