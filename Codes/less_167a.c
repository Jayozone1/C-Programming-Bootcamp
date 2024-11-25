#include<stdio.h>
#include<stdlib.h>

//Print a right angle triangle with a pattern
//1
//12
//123

int main() {
    // Write C code here
    int i;
    int n;
    int j;
    
    printf("Enter the value of n : ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++){
        
        for (j = 1; j <= i; j++)
                printf("%d", j);
           printf("\n");
        
    }
    return 0;
}