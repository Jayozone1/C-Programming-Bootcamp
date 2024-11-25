#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Derivatives
// ( c * x ^ n) = n * c * x  ^ (n-1)


// c = 4,  x = 2, n = 3
// 3 * 4 * 2 ^ (2) = 3 * 4 * 4 =  48

float  derivative(float c, float x, float n)
{
    float powerValue = pow(x, n-1);
    return  n * c *  powerValue;
}


int main()
{


    return 0;
}