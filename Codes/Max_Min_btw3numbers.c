#include <stdio.h>

int main() {
    // Write C code here
    float a;
    float b;
    float c;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the Second number: ");
    scanf("%f", &b);
    printf("Enter the Third number: ");
    scanf("%f", &c);
    
    float max = a;
    float min = b;
    
    if (a < b)
    {
        max = b;
        min = a;
    }
    if (max < c)
    {
        max = c;
    }
    if (min > c)
    {
        min = c;
    }
    printf("Maximum value is %f \n", max);
    printf("Minimum value is %f \n", min);
        
    

    return 0;
}