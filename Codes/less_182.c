#include <stdio.h>
//Write a program that receives a "num" from the user, print the "num" even number (starting from 2)
int main() {
    // Write C code here  
    int num;
    //int prime_num;
    int i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    /*
    //This code will print out the even number from the range of 1 to where the inputted number stops
    for (i = 1; i <= num; i++ )
    {
        if(i % 2 == 0)
        {
           printf(" %d ", i);
        }
    }
    
    */
   /*
   for (i = 1; i <= num; i++)
    {
        printf("%d ", i*2);
    } 
   */
  while( num > 0);
  {
        printf("%d ", i);
        i = i * 2;
        num = num - 1;
  }
    
    
    return 0;
}