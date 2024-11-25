#include <stdio.h>
#include <stdlib.h>

//Write down a recursive function that gets an integer.(int n)
//Return 1 if the sum of all the DIGITS in the received number is EVEN
// otherwise Return 1.


//Example #1: n = 1,5,6
// 1 + 5 + 6 = 12 //FINAL RETURNED VALUE IS 1

//Example #2: n = 3689
//3 + 6 + 8 + 5 + 9 ---> 31 FINAL RETURNED VALUE IS 0



int digitsSumEven(int n)
{
    int resultSoFar;
    if (n < 10)
        if (n % 2 == 0) 
            return 1;
        else // n % 2 != 0
            return 0;
    resultSoFar = digitsSumEven(n/10);
    if (n % 10 % 2 == 0)// If it's EVEN
        if (resultSoFar == 1) //If the result is EVEN
            return 1;
        else // resultSoFar == 0 (The result is ODD)
            return 0 ;
    else //n % 10 % 2 = 1 //if it's ODD
        if(resultSoFar == 1) //If the result is ODD
            return 0;
        else//The result is EVEN
            return 1;
    
    
    /*
    int i;
    int userInput;
    printf("Enter an Input: ");
    scanf("%d", &userInput);

    for(i = 0; i < n; i++)

    
    
    */
    
}
int main()
{




    return 0;
}