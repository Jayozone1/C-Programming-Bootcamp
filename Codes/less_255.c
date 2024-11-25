#include <stdio.h>
#include <stdint.h>
#include <math.h>

//Count a total values that are "not unique" in a specific array

int main()
{
    int i, j;
    int foundDuplicate = 0;
    int nonUniqueCount = 0;
    int values[10];
    //Input Array....

    for(i=0; i<10; i++)
    {
        printf("Enter value #%d:", i+1);
        scanf("%d", &values[i]);
    }

    for(i=0; i<10; i++)
    {
        foundDuplicate = 0;
        for(j=0; j<i; j++)
        {
            if(values[i] == values[j])
            {
                foundDuplicate = 1;
                break;
            }
                
        } 
        if(foundDuplicate == 1)
            break;
        else
            for(j=i+ 1; j < 10; j++)  //Working with the Right side 
            {
                if(values[i] == values[j])
                {
                    printf("non-unique value: %d\n", values[i]);
                    nonUniqueCount++;
                    break;
                }
            }
    }
    printf("Total Non-Unique Values: %d\n", nonUniqueCount);

    return 0;
}