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

int main()
{  
    //int num = 5;
    //float num2 = 9.7;
    int num;
    FILE* fp;
    
    fp = fopen("myFirstFile3.txt", "r");

    if (fp != NULL) // file was successfully opened
    {
        //fprintf(fp, "%d %f", num, num2);
        fprintf(stdout, "%d", num); // printf("%d", num);
        fscanf(stdin, "%d", &num); //scanf("%d", &num);
        printf("num from file = %d\n", num);
        fclose(fp);
    }   
    return 0;
}