#include <stdio.h>

int main() {    

   int num;
   int sum;
   int reversedNum; //Another method
   
   
   printf("Input a three digit number: ");
   scanf("%d", &num);
   
    printf("The inputed number is %d:\n", num);
    int hundreds = num/ 100 ;//Extracting the hundreds.
    int tens = (num % 100) / 10; // Extracting the Tens
    int unit = (num % 100) % 10; // Extracting the units
    //int unit = num % 10; //Another way to get units
    //int tens = (num / 10) % 10//Another way to get tens
    
    printf("the digit at the hundreds position is %d\n", hundreds);
    printf("the digit at the tens position is  %d \n", tens);
    printf("the digit at the unit position is  %d \n", unit);

    reversedNum = unit;
    reversedNum = reversedNum *10 + tens;
    reversedNum = reversedNum * 10  + hundreds;
    
    //sum = hundreds + tens + unit;
    printf("The reverse of the 3 digits  %d is %d%d%d", num, unit,tens,hundreds);
    //printf("The reverse of the 3 digits  %d is %d", num, reversedNum);
    
    
    return 0;
}