#include <stdio.h>

int main() {
    // Write C code here
    float num1 = 10.3;
    float num2 = 12.2;
    float temp;
    
    printf("%.2f\n", num1);
    printf("%.2f\n", num2);
    
    temp = num1;
    printf("%.2f\n", temp);
    num1 = num2; 
    printf("%.2f\n", num1);
    num2 = temp;
    printf("%.2f\n", num2);
    printf("%.2f, %.2f\n", num1, num2);
    
    
    
    //printf("Hello world");

    return 0;
}