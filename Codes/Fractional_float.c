#include <stdio.h>
//#include <math.h>

int main() {    

   float deciNum;
   //float i;
   //float f;
   
   printf("Input a floating point type number: ");
   scanf("%f", &deciNum);
   
   printf("The number you inputted was: %f\n", deciNum);
   
   printf("The integer part is : %d\n", (int)deciNum);
   
   printf("The factorial part is : %.2f\n", deciNum - (int)deciNum);

   // Calculate the modf value returning the integeral and fractional parts.
   //f = modf(deciNum, &i);

   // Display the result of the calculation
   //printf("The Integral part and fractional part of %.2f are %.0f and %.2f\n", deciNum, i, f);

   return 0;
}

