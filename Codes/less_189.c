#include <stdio.h>
#include <stdlib.h>

//Find if a sequence is "Very Ascending" or "Not very Ascending"

//1,5,6
//3, 5, 8, 1, 10

int main()
{
    int sequenceSize;

    int previousValue = 0,  currentValue = 0;

    int veryAscendingFlag = 1;

    do 
    {
        printf("Insert size (total size of the sequence) : ");
        scanf("%d", &sequenceSize);
    }while(sequenceSize<=0);
    

    if(sequenceSize <= 0)
        printf("Wait a minute....Try again please! \n");
    else
    {

        do
        {
            /* code */
            printf("Insert Value: ");
            scanf("%d", &currentValue);

            if (currentValue < 0)
                printf("Number isn't positive!\n");

            else
            {
                if (currentValue <= previousValue)
                {
                    veryAscendingFlag = 0;
                }
                    
                
                previousValue = currentValue;
                sequenceSize--;
            }

        } while (sequenceSize > 0);

        if (veryAscendingFlag == 1)
            printf("This Sequencde is Very Ascending! \n");
        else
            printf("This Sequence is NOT Very Ascending! \n");
        

    }

return 0;

}

