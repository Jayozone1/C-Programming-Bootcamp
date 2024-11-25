//Resursion Practice
// Develop a recursive function that receives:
//         - an integer value "total"
//         - a character "val" (representing a lowercase character) 'a' - 'z'
//
//The function should print a sequence of "total" lowercase "vals" and then a sequence of "total" uppercase "vals"
//
// For example:
//       "total = 3, val = 'c' --> cccCCC
//       "total = 2, val = 'b' --> bbBB

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void specialSequenceCasePrint(int total, char val)
{
    if (total >= 1){
        printf("%c", val);
        specialSequenceCasePrint(total - 1, val);
        printf("%c", toupper(val));
        //printf("%c", val - 'a' + 'A');
    }
    
}

int main()
{
    specialSequenceCasePrint(3, 'a');
    return 0;
}
