#include<stdio.h>
#include<stdlib.h>

//Print a right angle triangle with a pattern
//1
//22
//333

int main() {
    // Write C code here
    int i;
    int n;
    int j;
    
    printf("Enter the value of n : ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        
        
        for (j = 1; j <= i; j++)
                printf("%d", i);
           printf("\n");
        
       /*
        j = i;
        while (j > 0)
        {
            printf("%d ", i);
            j--;
        }
        printf("\n");
        */
    }
    return 0;
}