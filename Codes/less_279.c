#include <stdio.h>
#include <stdlib.h>


//strlen
// Function that receives a string
// Finds out  and return the length of the string

int strlen(char *str);

int main()
{

    return 0;
}

int strlen(char *str)
{
    int i;
    while (str[i] != '\0' )
    {
        i++;
    }
    return i;
}
