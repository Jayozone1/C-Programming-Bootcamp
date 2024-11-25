#include <stdio.h>
#include <stdint.h>


//Write an Efficient Program that recieves a "NUM" from the user, The Program should calculate and print the sum of
// all the numbers from "1" up to "num" and that can be divided by 3 or 5.
int main()
{
    int num;
    int i;
    int sum = 0;

    /*Trival Solution: */
    printf("Trival Solution \n");
    printf("Enter the range of numbers :");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
     {   
        if(i % 3 == 0 || i % 5 == 0) {

            printf("The sum of numbers divisible by 3 or 5  %d", sum);
            printf("\n");
            sum = sum +  i;

        }
     }  

     /* Optimized Solution*/
     
     for (i = 1; i<= num ; i = i + 3)
        sum = sum + i;
     
     for (i = 1; i<= num ; i = i + 5)
        sum = sum + i;
     {
        if (i % 3 != 0)
            sum = sum + i;
            
            printf("%d can be  divisible by 3 or 5 is ", i);
            printf("\n");
            
        

     }
     
        
        printf("Sum %d", sum);


return 0;
}