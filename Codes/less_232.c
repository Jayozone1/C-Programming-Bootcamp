#include <stdio.h>
#include <stdint.h>

//Challenge #3 Display Array Values in reverse order.



int main()
{
    
    int i;
    //int pullUpsArray[10] = {3,4,3,5,7,8,6,9,9,10}; Method 1
    int pullUpsArray[10];

    for(i = 0; i < 10; i++)
    {
        printf("Enter number of pullups on day %d:", i + 1);
        scanf("%d", &pullUpsArray[i]);

    }

    for(i=9; i >= 0; i--)
    {
        //printf("Numbers of pullups = %d\n", pullUpsArray[i]);
        printf("%d days ago you did %d pullups\n", 10-i-1, pullUpsArray[i]);

    }





    return 0; 
}