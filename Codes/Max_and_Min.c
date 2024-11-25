#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code here
    float num1;
    float num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the Second number: ");
    scanf("%f", &num2);
    
    if (num1 > num2)
    {
        printf("Maximnum  value is %f \n", num1);
        printf("Minimnum  value is %f \n ", num2);
    }
    else
    {
        printf("Maximnum  value is %f \n", num2);
        printf("Minimnum  value is %f \n", num1);
    }

    return 0;
}