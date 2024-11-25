#include <stdio.h>
#include <stdint.h>

//Write a Function that gets some "num", ("of an interger type, and a digit")
//The function should:
//      1. Print the total amount of Digits, in Num which are less than "digit"
//      2. Return average of those digits that are less than "digits"


//Example #1: num "13725" , "digit" = 3, ==> print (2), Return(1.5)

float  lowerThanDigit(int num, int digit)
{
        int counter  = 0;
        int totalSum = 0;

        if (num < 0) 
            num = num * (-1);

        
        //Digits ---[1,2,3,4,5,6,7,8,9]
        
        while (num != 0)
        {

            if  (num % 10 < digit)
            {
                counter++;
                totalSum  += num % 10;
            }

            num = num / 10;
        }
        printf("Total Amount of Digits in %d = %d\n", num, counter);
        return (float) totalSum / counter;
           

        }






int main()
{

    return 0;
}