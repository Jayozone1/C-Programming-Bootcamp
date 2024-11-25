#include <stdio.h>

int main()
{
    int num1 = 5;
    double num2 = 2;
    double result;
    result = num1/(double)num2; //assuming num2 != 0, //Casting is used on num2 here.
    printf("result = %lf\n", result);

}