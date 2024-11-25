#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// We have to write a recursive function that will calculate the number of appreances of a given CHARACTER in a sequence
// read a sequence of character from the user.. up until $
// return the total number  of occurences the given character appreared in the sequence

// Example
// CHARACTER = "C"
// Sequence = "a", "b", "c", "a", "c", "$" ----> 2

int totalCharacter(char alphabet)
{
    char inputUser;
    printf("Please enter a character: ");
    scanf(" %c", &inputUser);
    if (inputUser == '$')
        return 0;
    if (inputUser == alphabet)
        return 1 + totalCharacter(alphabet);
    return totalCharacter(alphabet);
    return 0;
}

int main()
{
    char alphabet = 'c';
    int result  = totalCharacter('c'); 
    printf("The number of times %c occured in the sequence is %d", alphabet, totalCharacter('c'));
    return 0;
}
