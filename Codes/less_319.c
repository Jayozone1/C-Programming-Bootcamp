// Exercise 
// Develop a recursive function that receives an integer num.
// The function should observe the digits (from left to right) and return:
//     - 1, if they are very ascending
//     - -1, if they are very descending.
//     - 0, otherwise.
//
// Assumptions:
//     - Initial "num" is of2+ digits. (num >= 10).
//     - All digits in "num" are different (no pair of digits are the same). All different
//
// For example:
//   "124" --> 1
//    "12340" --> 0
//   "9643" --> -1

#include <stdio.h>
#include <stdint.h>

int digitsSorted(int num)
{
    int units = num % 10;
    int tens = (num / 10) % 10;
    int sortedSoFar;


    if(num<100)
        if (tens < units)
            return 1;
        else //unit > tens
            return -1;

    sortedSoFar = digitsSorted(num / 10);

    if (sortedSoFar == 1 && tens < units)
        return 1;
    if (sortedSoFar == -1 && tens > units)
        return -1;
    return 0;
}













