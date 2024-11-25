#include <stdio.h>
#include <stdint.h>

//Calculates Factorial

int factorial(int num)
{
    int fact = 1;
    int i;
    if (num < 0 )
        {
            printf("-1");
            return -1;
        }
        
    else if (num == 0)
    { 
        printf("0");
        return 0;
    }
       
    else
    {

        for (i = 1; i <= num; i++)
        {
            fact = fact * i; //Calculates Factorial

        }
        //printf("%d\n", fact);
        return fact; 
    }

    return 0;
}

int main ()
{
    int myNum;
    printf("Please insert a number: ");
    scanf("%d", &myNum);
    printf("Factorial(%d) = %d: \n", myNum, factorial(myNum));
    return 0;
}