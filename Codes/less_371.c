#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*--------------------------------*/
/*--------- * Files * ------------*/
/*--------------------------------*/

int main()
{
    // Step #1 - Creating a Pointer that points to a FILE type
    FILE* fp;

    // Step #2 - opening/access to a file
    // fp = fopen(<file_name>, <type_of_operation>);
    // Types of operation:
    //       - "w" - Writing.
    //       - "r" - Reading.
    //       - "a" - Appending.
    fp = fopen("mySecondFile.txt", "r");
}