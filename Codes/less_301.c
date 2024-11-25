#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

//Write a Recursive Function that will receive some number say "n"
//This function will print all the number from 1 up to "n".

//Example:
// INPUT: 4
//1 2 3 4

void printOneToN(int n)
{
    if (n >= 1)
    {
        printf("%d ", n);
        printOneToN(n-1);

    }
}

void printNToOne(int n)
{
    if (n >= 1)
    {
        
        printNToOne(n-1); 
        printf("%d ", n);       

    }
}

void finalNto1AndViceVersa(int n)
{
    if (n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d", n);
        finalNto1AndViceVersa(n-1);
        printf("%d", n);
        //printf("%d", n-1);
        //finalNto1AndViceVersa(n-1);
       
    }

}


int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    /*
    
    
    printf("All the values from 1 to n are: \n");
    printOneToN(num);
    printf("\n");
    printf("All the values from n to 1  are: \n");
    printNToOne(num);
    */
    printf("All the values from n to 1  are: \n");
    finalNto1AndViceVersa(num);
   
    return 0;
}