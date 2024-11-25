#include <stdio.h>
#include <stdint.h>

int main()
{
    int my2DArray[2][3] = {{1,5,9},{2,6,10}};
    int i, j;
    for(i = 0; i < 2; i++) //Go over all the rows one by one
     {
        for(j = 0; j < 3; j++)//Go over all the columns
        {
            printf("%d ", my2DArray[i][j]);
        }
        printf("\n");


     }
        

    return 0;
}

