#include <stdio.h>

int main() 
{

//The Program should print a corresponding messagae with the grade itself.

    int grade;

    do {
            printf("Please enter a grade: ");
            scanf("%d", &grade);
       } while (grade < 0 || grade > 100);

       printf("Thanks! You've inserted %d, which is a legit grade!\n", grade);
       return 0;

}