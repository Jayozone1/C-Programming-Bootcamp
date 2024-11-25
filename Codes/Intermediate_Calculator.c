#include <stdio.h>
#include <stdlib.h>

/*MAZING INTERMEDIATE CALCULATOR */

int main() {
    // Write C code here
    int num1;
    int num2;
    char mathOperation;
    
    
    printf("Enter what math operation you would like to use: ('+', '-', .....)\n");
    scanf("%c", &mathOperation);
    
    printf("Enter Number1: ");
    scanf("%d", &num1);
    
    printf("Enter Number2: ");
    scanf("%d", &num2);
    
    switch(mathOperation)
    {
        case '+':
            printf("%d %c %d = %d\n", num1, mathOperation, num2,num1+num2);
            break;
        case '-':
            printf("%d %c %d = %d\n", num1, mathOperation, num2,num1-num2);
            break;
        case '*':
            printf("%d %c %d = %d\n", num1, mathOperation, num2,num1*num2);
            break;
        case '/':
            if (num2 == 0)
                printf("You cannot divide by 0! \n");
            else
                printf("%d %c %d = %d\n", num1, mathOperation, num2,num1/num2);
                break;
        case '%':
            if (num2 == 0)
                printf("You cannot divide by 0! \n");
            else
                printf("%d %c %d = %d\n", num1, mathOperation, num2,num1%num2);
                break;
        default:
            printf("Wrong Mathematical Operation...Try Again\n");
            break;
        
    }

    return 0;
}