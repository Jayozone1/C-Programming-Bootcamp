#include <stdio.h>
#include <stdint.h>


int main()
{
   int num;
    int Multi_Table = 1;
    int i;
    int range;
    
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter the range of multiplication: ");
    scanf("%d", &range);
    
    
    for (i = 1; i <= range; i++ )
    {
       Multi_Table = i * num;
       printf("%d * %d = %d\n", num, i, Multi_Table);
       
    }


return 0;
}

