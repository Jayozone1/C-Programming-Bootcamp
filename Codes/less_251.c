#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 10


//Write a Program that creates an Array (of integers)
//The user is going to specify the values for the array.
// Check if the array is "Really Sorted", "Sorted", "Not Sorted".

//Example1: [1, 2, 5, 7, 10] ---> Really Sorted
//Example2: [1, 2, 2, 5, 10] ---->  Sorted
//Example3: [1, 2, 5, 3, 10] ----> Not Sorted


//Steps to writing the code
//1. Create the Array
//2. Allow the user input the Array
//3. Compare the input of the Array.

int main()
{
    int i;
    int ingArry[SIZE];
    //int flag = 1; //Assume array is sorted

    for (i = 0; i<SIZE; i++)
    {
        printf("Enter the values of the array: ");
        scanf("%d", &ingArry);
    }
    

    for(i = 0; i < SIZE; i++ )
    {
    if(ingArry[i] < ingArry[i + 1])
        {
            printf("The Array is  really Sorted!!!\n");
        }
    if(ingArry[i] <= ingArry[i + 1])
        {
            printf("The Array is   Sorted!!!\n");
        }
    if(ingArry[i] > ingArry[i + 1])
        {
            printf("The Array is  unsorted!!!\n");
        }

    }

/*
    if (flag == 1)
        printf("The Array is  really Sorted!!!\n");
    else if (flag == 0)
        printf("The Array is unsorted!!!\n");
    else if (flag == 2)
        printf("The Array is Sorted!!!\n");

*/
    

    return 0;
}
