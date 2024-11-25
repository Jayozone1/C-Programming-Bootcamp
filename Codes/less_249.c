#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define SIZE 4

//Palindrome
//Write a program that checks and prints if a given array is a Palindrome or not.
// [1,3,2,3,1] --> PALINDROME
// [1,2,3,3,2,1] --> PALINDROME
// [1,4,6,2] ---> NOT A PALINDROME


int main()
{
    int i;
    int flag = 1; //We assume that the array is a palindrome
    int arr[SIZE] = {1,4,6,2};

    for (i = 0; i < SIZE/2; i++)
    {
        if(arr[i] != arr[SIZE-1-i])// The element from the left does not equal to the element on the right side.
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The Array is a Palindrome!!!\n");
    else if (flag == 0)
        printf("The Array is not a Palindrome!!!\n");

    return 0;
}