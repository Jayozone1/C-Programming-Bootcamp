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

int main()
{
    FILE* fp;

    puts("Hey man\n");
    puts("This is Dee from BetaTech");

    fp = fopen("myFirstFile4.txt", "w");

    if(fp != NULL) //file was succesfully opened
    {
        
        fputs("Hey man", fp);
        fputs("This is Dee from BetaTech", fp);
        fclose(fp);
    }
   
    return 0;
}

