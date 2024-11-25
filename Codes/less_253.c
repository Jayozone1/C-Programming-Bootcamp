#include <stdio.h>
#include <stdint.h>
#include <math.h>



//#Part1 - Print all Unique Elements in an Array!
//#Part2 - Count the number of Unique Elements in an Array


int main()
{
    int i, j;
    int foundDuplicate = 0;
    int uniqueCount = 0;
    int values[10];
    //Input Array....

    for(i=0; i<10; i++)
    {
        printf("Enter value #%d:", i+1);
        scanf("%d", &values[i]);
    }

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(i == j)
                continue;
            if(values[i] == values[j])
                //break;
                foundDuplicate = 1;
        }
        if(foundDuplicate != 1) // We didn't find any duplicate value
        {
            printf("Unique Value: %d\n", values[i]);
            uniqueCount++;
        }
        foundDuplicate = 0;
    }
    printf("Total Unique Nums: %d\n", uniqueCount);

    return 0;
}