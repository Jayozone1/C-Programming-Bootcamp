#include <stdio.h>

int main() {
    //Write  a Program that should receive a chracter from the user.
    //The program should print if the character is
    //-Lowercase Letter
    //-Upppercase Letter
    //-Digit
    //-Other.
    
    char myChar1;
    
    printf("Enter a character: ");
    scanf("%c", &myChar1);
    
    if (myChar1 >= 'a' && myChar1 <= 'z')
        printf(" Character is a Lowercase Letter");
    else if ( myChar1 >= 'A' && myChar1 <= 'Z')
        printf(" characrter is a Uppercase Letter");
    else if ( myChar1 >= '0' && myChar1 <= '9')
        printf(" character is a Uppercase Letter");
    else 
        printf("Character is other digit.");
    
    return 0;
}