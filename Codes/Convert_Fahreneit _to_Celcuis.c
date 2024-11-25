#include <stdio.h>

int main() {
    double ftemp;
    double ctemp;
    printf("Enter degrees in Fahreneit: ");
    scanf("%lf", &ftemp); 
    ctemp = (ftemp - 32) / 1.8;
    printf("Conversion of %lf Celcius degrees is %lf Fahrenheit Degrees\n", ctemp, ftemp);
    return 0;
}