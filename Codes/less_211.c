#include <stdio.h>
#include <stdint.h>

//'a', 'b', 'c', 'd' 'F', 'G', 'I', '*'

//'0' --- 48
//'9' ---- 57

//TASK:
//Function that recieves 3 characters
//If all the characters are of a digit-type ('0' ---> '9')
// an interger which is a decimal representation of this 3 digit-number
//otherwise return 0

//EXAMPLE
//      '1', '5', '9'
//              RETURN 159
// '2', '0', '6'
//          RETURN 206
/*
char is3digit(char digit){
    
    if(char >= 0 && char <= 9)
    {

    }

}
*/

int characterTodigit(char character1, char character2, char character3)
{
    int hundreds, tens, units;
    int Final;
    if (character1 >= 0 && character1 <= 9)
        hundreds == character1 - '0';
    else
        return 0;
    
    if(character2 >= 0 && character2 <= 9 )
        tens == character2 - '0';
    else
        return 0;
    
    if(character3 >= 0 && character3 <= 9 )
        units == character3 - '0';
    else
        return 0;

    return hundreds*100 + tens*10 + units;
    

}




int main()
{

    return 0;
}