#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


//We have to write a recursive - function that will
//receive an integer value "num"
// read a sequence of numbers from the users up until "-1"
// return the total number smaller than "num" value


//num = 5
//6, 8, 10, 3, 1, 7, -1

// return 2


int totalSmaller(int num)
{
    int inputUser;
    printf("Please enter a number: ");
    scanf("%d", &inputUser);
    if (inputUser == -1)
        return 0;
    if (inputUser < num)
        return 1 + totalSmaller(num);
    return totalSmaller(num);
}

int main()
{
    int num = 4;
    int totalSmallerNumbers = totalSmaller(4);
    printf("the total number less than %d  is = %d \n", num, totalSmallerNumbers);
    return 0;
}

