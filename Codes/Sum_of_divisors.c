
// Write a Function that receives an integer num
// The Function should calculate and return its SUM OF DIVISORS.

// A "divisor" of "num" is considered to be a number that <<< "num" % "divisor" = 0 >>>

//For example:
// 6 ---> 1,2,3,6
// 12 --> 1,2,3,4,6,12
// 15 ---> 1, 3, 5, 15


//Trivial Solution
int SumofDivisor(int num)
{
    int i;
    int sum = 1 + num;

    if (num == 1)
        return num;
    for(i = 2; i <= num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    return sum;
    
}

//Optimized Solution.
int SumofDivisor_Opti(int num)
{
    int i;
    int sum = 1;
    if (num == 1)
        return num;
    for(i = 2; i <= num/2; i++)//We are counting up to the Half of the number, because a divisor without a remainder most times can go beyond Half the number.
    {
        if (num % i == 0)
            sum = sum + i;
    }
    return sum + num;
    
}

//Another Optimized Solution
int optimizedSumOfDivisors(int num)
{
    int i;
    int sum = 1;
    if (num == 1)
        return 1;
    for (i = 2; i * i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i + num/i;
    }
    if (i * i == num)
        sum = sum + i;
    return sum + num; 
}


int main()
{

    return 0;
}