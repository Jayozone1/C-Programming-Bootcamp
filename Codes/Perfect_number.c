#include <stdio.h>
#include <stdint.h>


//Write a function that receives an integer num
//The function should return 1 if "num" is a perfect number. otherwise return 0;

//A perfect number is a number with a value equals to the sum of all its divisors (not including the nuber itself)

//For example
// 6 --> 1,2,3 = 6 --> Perfect Number
// 12 --> 1,2,3,4,6 = 16 --> Not Perfect Number
// 15 --> 1,3,5,9 -->Not Perfect Number
//  28 --> 1,2,4,7,14 --> Perfect Number

int sumofDivisors(int num);
int isPerfect(int num);


int main()
{
    int result = isPerfect(6);
    return 0;
}


int sumofDivisors(int num)
{
    int i, sum = i;
    for (i = 2; i *i < num; i++)
        if(num % i == 0)
            sum += i + (num / i);
    if (i * i == num)
        sum += i;
    return sum;
}
int isPerfect(int num)
{
    if(num <= 1)
        return 0;
    if (num == sumofDivisors(num))
        return 1;
    return 0;
}