#include <stdio.h>
#include <stdint.h>

//Function Name ----> islower
//Receives a character
//If this character is a Upper Case  Letter ('A', 'B', 'C'....., 'Z')
//          Return a Lower Case Representation('a', 'b', 'c', .....'z')
//otherwise return -1


char toLower(char letter)
{
        if (letter >= 'A' && letter <= 'Z')
            return  letter - 'A' + 'a';
        else return -1;
}

char toUpper(char letter)
{
        if (letter >= 'a' && letter <= 'z')
            return  letter -'a' + 'A';
        else return -1;
}





int main()
{


    return 0;
}