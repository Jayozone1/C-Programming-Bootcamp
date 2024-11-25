// Recursion Practice
// Develop a recursive function that receives:
//       - an integer value "total".
//       - a character value "char1".
//       - a character value  "char2".
//
// The function should print a sequence of "total" char1's and then a 2 *sequence of "total" of char2's.
//
// For example:
//      "total = 3, char1 = 'a', char2 = 'c' " --> aaacccccc
//      "total =  2, char1 = 'b', char2 = 'd'" --> bbdddd

#include <stdio.h>
#include <stdlib.h>

void specialSequencecharPrint(int total, char char1, char char2)
{
    if (total >= 1) {
        printf("%c", char1);
        specialSequencecharPrint(total - 1, char1, char2);
        printf("%c", char2);
        printf("%c", char2);
    }
}

int main()
{
    specialSequencecharPrint(3, 'a', 'b');
    return 0;
}



