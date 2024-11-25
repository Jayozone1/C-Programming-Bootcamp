#include <stdio.h>

int main()
{
    int num;
    int powr;
    int i;


    int result = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the power: ");
    scanf("%d", &powr);

        for (i = 1; i <= powr; i++)
        {
            result = result * num;
        }

printf("%d in the power of %d = %d\n", num, powr, result);











    return 0;
}
