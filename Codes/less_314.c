// Recursion Practice
// Develop a recursive function that receives:
//         - an integer value "total".
//          - an integer value "num1".
//          - an integer value  "num2".
//
// The function should print a sequence of "total" num1's and then a sequence of "total" of num2's.
//
// For example:
//     "total = 3, num1 = 2, num = 4" --> 222444
//     "total = 2, num1 = 3, num = 5" --> 3355

#include <stdio.h>
#include <stdlib.h>

void specialSequencePrint(int total, int num1, int num2)
{
    if (total >= 1) {
        printf("%d", num1);
        specialSequencePrint(total - 1, num1, num2);
        printf("%d", num2);
    }
}


int main()
{
    specialSequencePrint(3, 2, 4);
    return 0;
}

