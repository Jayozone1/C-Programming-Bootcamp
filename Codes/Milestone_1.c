#include<stdio.h>
#include<stdlib.h>

int i;
int quick_sum = 1000000;
float total_amount = 0.01;

int main(){

    for(i = 1; i <= 30; i++)
    {
        printf("  For day %d : amount %.2f \n", i, total_amount);
        total_amount = total_amount * 2;

    }
    printf("The total amount after 30 days is : %d", total_amount);


    return 0;
}