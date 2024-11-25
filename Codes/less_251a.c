#include <stdio.h>
#include <stdint.h>

#define SIZE 5

//Write a program that creates an Array (of integers)
//The User is going to specify the values for the array
// Check if the array is "Really Sorted", "Sorted", "Not Sorted"

//Example1 : [1, 2, 5, 7, 10] ---> Really Sorted  // For Any Pair: Left Element < Right Element
//Example2:  [1, 2, 2, 5, 10] ---> Sorted //For any Pair: Left Element <= Right Element
//Example3: [1,2,5,3,10]  --> Not Sorted

int main()
{
    int i;
    int arr [SIZE];
    int flag = 2; //"2" ---> Really Sorted, "1" --> Sorted, "0" ---> Not Sorted.

    // Reading the Values of the elements from the User 
    for(i = 0; i < SIZE; i++)
    {
        printf("Please enter element number %d: ", i+ 1);
        scanf("%d", &arr[i]);
    }


    for(i = 1; i < SIZE; i++)
    {
        if(arr[i-1] > arr[i])  //Element on the Left is greated than the element on the right
        {
            flag = 0; // "Not Sorted"
            break;
        }

        if(arr[i-1] == arr[i])
        {
            flag = 1; // "Sorted"("Not Really Sorted")

        }


        
    }

    if(flag == 2)
        printf("The array is Really Sorted!\n");
    else if(flag == 1)
        printf("The array is Sorted!\n");
    else if(flag == 0)
        printf("The array is not Sorted!\n");



    return 0;
}