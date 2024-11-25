#include <stdio.h>

int main() {
    // Write C code here
    
    int num;
    int powr;
    int tempPow;
    
    int result = 1;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("Enter the power: ");
    scanf("%d", &powr);
    tempPow = powr;
    
    while (powr > 0)
    {
        result = result * num;
        powr--;
    }
    
    printf("%d in the power of %d = %d \n", num, tempPow, result);

    return 0;
}