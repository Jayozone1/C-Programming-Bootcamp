#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

//Solution by Vlad.

// We have to write a recursive function that will calculate the number of appreances of a given CHARACTER in a sequence
// read a sequence of character from the user.. up until $
// return the total number  of occurences the given character appreared in the sequence

// Example
// CHARACTER = "C"
// Sequence = "a", "b", "c", "a", "c", "$" ----> 2

int totalCharacters(char Character)
{
    char inputUser;
    printf("Please enter a character: ");
    scanf(" %c", &inputUser);
    getchar();
    
    // 1.Stopping Condition /Base Condition
    if (inputUser == "$")
        return 0;
    
    // 2.Recursive calls
    if (inputUser == Character)
        return 1 + totalCharacters(Character);
    return totalCharacters(Character);

}
int main()
{
    char Character = 'c';
    int result  = totalCharacters('c'); 
    printf("The number of times %c occured in the sequence is %d", Character, totalCharacters('c'));
    return 0;
}