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

long ontonine(long length)
{
    int i;
    long num = 0;
    
    if (length <= 9){
        for(i = 0; i < length; i++)
        {
            num = num*10 + (i+1);
        }

    }
    else {
        for(i = 0; i < length; i++)
        {
            num = num*10 + 9;
        }
    
    return num;

    }
    
    
    return num;

}



int nineNumber(int  length)
{
    int i;
    int num = 0;
    
    for(i = 0; i < length; i++)
    {
        num = num*10 + 9;
    }
    
    return num;
}

int main()
{

    int lengthSeq;
    long result;
    printf("Hey there!  Please enter a length for the nth Sequence: ");
    scanf("%d", &lengthSeq);

    result =  ontonine(lengthSeq);//nineNumber(lengthSeq);

    printf("Result = %ld\n", result);

    return 0;
}