#include <stdio.h>

int main() {
    // Write C code here
    
    int num_st;
    
    int count = 0;
    printf("Enter the number of astericks you want: ");
    scanf("%d", &num_st);
    
    while (count < num_st)
    {
        printf("*");
        count = count + 1;
    }

    return 0;
}