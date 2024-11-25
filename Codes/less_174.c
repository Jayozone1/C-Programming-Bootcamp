#include <stdio.h>
//Print 1 to num and vice-versa.

int num;
int i = 1;
int main() {
    // Write C code here
    printf("Enter the desired num: ");
    scanf("%d", &num);
    /*
    for (i = 1; i<= num; i++)
    
        printf("%d", i);
    
    */
    while (i <= num)
        {
            printf("%d", i);
            i++;
        }
    
        printf("\n");
    
    for (i = num; i > 0; i--)
        printf("%d", i);
    
    return 0;
}
