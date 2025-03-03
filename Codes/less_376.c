#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*--------------------------------*/
/*--------- * Files * ------------*/
/*--------------------------------*/

// fgetc(<pointer_to__file>)
// fputc(<character>, <pointer_to_a file>)
// fprintf(<pointer_to_a_file>, <placeholders>, <parameters>)
// fscanf(<pointer_to_a_file>, <placeholders>, <parameters)
// fputs(<string>, <pointer_to_a_file>)
// fgets(<string>, <int/length_limit>, <pointer_to_a_file>)

int main()
{
    char myString[10];
    int count = 0;
    FILE* fp;
    fp = fopen("myFirstFile5.txt", "r");

    if (fp != NULL) // file was successfully opened
    {
        while (fgets(myString, 10, fp))
            printf("string #%d read: %s\n", ++count, myString);

        fclose(fp);
    }
    return 0;
}