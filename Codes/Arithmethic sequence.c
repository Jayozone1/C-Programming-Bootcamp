#include <stdio.h>
//Code to calculate Arthimetic sequence
// formula: an = a1 + (n-1) *

int main() {    

    int firstNum;
    int totalNum;
    int difference;
    int nthTerm;
    
    printf("Enter the first element  : ", firstNum);
    scanf("%d", &firstNum);
    
    printf("Enter the total Number of elements : ", totalNum);
    scanf("%d", &totalNum);
    
    printf("Enter the difference between terms :  ", difference);
    scanf("%d", &difference);
    
    
    
    

    // calculate the sum
    nthTerm = firstNum + (totalNum - 1) * difference;      
    
    printf("the nth term is : %d", nthTerm);
    return 0;
}
