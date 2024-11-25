#include <stdio.h>
#include <math.h>
int main() {    
    int x;
    int x2;
    int x4;
    int x6;
    int x8;
    
    printf("Enter the integer x: ");
    scanf("%d", &x);

    // calculate the sum
   // x2  = x*x;
    x2  = pow(x,2);
    //x4  = x*x*x*x;
    x4  = pow(x,4);
    //x6  = x*x*x*x*x*x;
    x6  = pow(x,6);
    //x8  = x*x*x*x*x*x*x*x;
    x8  = pow(x,8);
    
    printf("the value of x is %d\n", x);
    printf("the value of x2 is %d\n", x2);
    printf("the value of x4 is %d\n", x4);
    printf("the value of x6 is %d\n", x6);
    printf("the value of x8 is %d", x8);
    return 0;
}
