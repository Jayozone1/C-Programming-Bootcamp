#include <stdio.h>
#include <stdlib.h>


#define SIZE 5

//Work with Neighbours!

//Write a PROGRAM that creates an array of Intergers.
//The program should check and print if the array has at least on element with "good neighbors",
//     An element with good neighbours has a value that equals to the multiplication of both its neighbors (right, left).


//Example #1 - (1, 3, 2, 6, 3)  ---> Array has "Good Neighbours"
//Example #2 - (4, 4, 7, 4, 9)  ---> Array doesn't have "Good Neighbours"


int main()
{
    int myArr[SIZE];
    int i;
    int hasGoodNeighbors = 0; //Assumption Array doesn't have Good neighbors.

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%d", &myArr[i]);
    }

    for(i=1; i<SIZE-1; i++)
    {
        if (myArr[i] == myArr[i-1] * myArr[i + 1])
        {
            printf("This Array Has Good Neighbors!!!\n");
            hasGoodNeighbors = 1; //Array has good neighbors
            break;
        }
    }

    if (hasGoodNeighbors == 0)
        printf("This Array doesn't have any good neighbours\n");

    return 0;
}