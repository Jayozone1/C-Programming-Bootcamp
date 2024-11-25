#include <stdio.h>
//Code to calculate Arthimetic sequence
// formula: an = a1 + (n-1) * d

int main() {    

    float firstNum;
    int totalNum;
    float difference;
    float nthTerm;
    float sumSeq;
    
    printf("Enter the first element  : ", firstNum);
    scanf("%f", &firstNum);
    
    printf("Enter the total Number of elements : ", totalNum);
    scanf("%d", &totalNum);
    
    printf("Enter the difference between terms :  ", difference);
    scanf("%f", &difference);
    
    
    
    

    // calculate the sum
    nthTerm = firstNum + (totalNum - 1) * difference; 
    sumSeq = (firstNum + nthTerm) * totalNum/2;    
    
    printf("the nth term is : %f\n", nthTerm);
    printf("the sum of the sequence  is : %f\n", sumSeq);
    return 0;
}
