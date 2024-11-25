/*
***Exercise - Rational Numbers!***
*Design and develop a rational number struct, called Rational.
* A rational number consists of two parts :
*1. numerator.
*2. denominator
*For example : 1/3, 2/5, 7/3, ...
*Provide increment, decrement, addition, subtraction, multiplication, 
*division, smaller, bigger, equal and not equal functions to make
*relational/ mathematical operations on variables of the rational type.
*
*Write a "main function" to check out the correctness of your functions.
*Print the results before and after any operation that you do.
*
*Enjoy!
*/

// Assumin both "numerator" and "denominator " are > 0

typedef struct rational {
    int numerator;
    int denominator;
}Rational;


