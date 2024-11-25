#include <stdio.h>
#include <stdint.h>

int main()
{

    int grade1 = 80,  grade2 =100;

    printf("Grade1 VALUE = %d\n", grade1);
    printf("Grade1 ADDRESS = %p\n", &grade1);

    printf("Grade2 VALUE = %d\n", grade2);
    printf("Grade2 ADDRESS = %d\n", &grade2);


    return 0;

}