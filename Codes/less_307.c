#include <stdio.h>
#include <stdlib.h>

// Pell Number
// 

int pellNumberRecursive(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return (2 * pellNumberRecursive(num - 1)) + pellNumberRecursive(num - 2);
}

int pellNumberNotRecursive(int num)
{
    int i;
    int previous = 0, current = 1;
    int next;
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    for(i = 2; i <= num; i++)
    {
        next = 2*current + previous;
        previous = current;
        current = next;
    }
    return next;
    
}


/*
int pellNumberNotRecursive(int n)
{
    int i;
    int previous = 0;
    int current  = 1;
    int temp;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    for (i = 2; i <= n; i++ )
    {
        temp = previous + current;
        previous = current;
        current = temp;
    }
    return current;

}
*/



int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The value of the Pell Number at index %d is  %d \n", num,  pellNumberRecursive(num));
    return 0;
}