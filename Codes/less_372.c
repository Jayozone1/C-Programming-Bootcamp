#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*--------------------------------*/
/*--------- * Files * ------------*/
/*--------------------------------*/

// fgetc(<pointer_to__file>)

int main()
{
    FILE* fp;
    char myChar1;
    char myChar2;


    fp = fopen("myFirstFile.txt", "r");

    if (fp != NULL) // file was successfully opened
    {
        printf("The file is Opened for Reading! \n");
        myChar1 = fgetc(fp);
        printf("the first character that was read is: %c \n", myChar1);
        myChar2 = fgetc(fp);
        printf("the second character that was read is: %c \n", myChar1);

        fgetc(stdin); // getchar();


        fclose(fp);
    }

    return 0;
}