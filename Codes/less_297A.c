#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
//We have to write a recursive- function that will 
//Calculate and return the total number of occurences  of EVEN number in a sequence
//read a sequence of integers from user... up until -1

//Example:
//1, 3, 4, 6, -1 --->

int totalOccurencesEvenNumbers()
{
    int inputUser;
    printf("Please enter a number: ");
    scanf("%d", &inputUser);

    //Base/Stopping Condition
    if(inputUser == -1)
        return 0;

    //Recursive Calls
    if (inputUser % 2 == 0)
        return 1 + totalOccurencesEvenNumbers();
    return totalOccurencesEvenNumbers();
}
int main()
{
    int totalOccurences;
    totalOccurences = totalOccurencesEvenNumbers();
    printf("Total occurences of Even Numbers in te sequence you entered is %d\n", totalOccurences);
    return 0;
}