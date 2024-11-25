#include <stdio.h>
#include <stdint.h>

//Function receives some Number - "length"
//999...9
//Return --> 
//     If length <--- 9
//      123456,------,length
//Examples
//    -If length is 3 ---> 999
//    -If length is 5 ----> 99999

int nineNumber(int  length)
{
    int i;
    int num = 1;
    
    
    for(i = 10; i < length; i++)
        {
            num = num*10 + 9;
        }
    
    

    return num;
}

int main()
{

    int lengthSeq;
    int result;
    printf("Hey there!  Please enter a length for the nth Sequence: ");
    scanf("%d", &lengthSeq);

    result =  nineNumber(lengthSeq);

    printf("Result = %d\n", result);

    return 0;
}