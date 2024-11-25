#include <stdio.h>
#include <stdint.h>

//Maximum DIGIT in a 2 digit number
//xy   -> 

void MaximumDigit(int num){ 

    if (num > 99 || num < 10)
        printf("The number is not a 2-digis number! \n");
    else{

            if (num % 10 > num/10)
                printf("Maximum digit in %d is: %d\n", num, num%10);
            else
                printf("Maximum digit in %d is: %d \n", num, num/10);
    }
}

int main ()
{
    MaximumDigit(500);
    return 0;
    
}
    
  
    

