#include <stdio.h>
#include <stdint.h>

//isEven (name of the Function)
//This Function will recieve an integer
// Return "1" if this given number is "Even"
//otherwise, this function should return 0;


int isEven(int num)
{
    
    if (num % 2 == 0)
        return 1;
    else 
        return 0;
}

//isOdd
//This function will receive an integer
//Return "1" if this given number is "Odd"
//Otherwise this function should return "0"

int isOdd(int num)
{

    if (num % 2 == 1 /*num % 2 != 0*/)
        return 1;
    return 0;
}

int isodd2(int num)
{
   if (isEven(num) == 1)
        return 0;
    return 1; 
}

int main(){
    

    isEven(3);
    return 0;
}