#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Write a program that receives a coordinate point in XY system.
//The program should print in which quadrant the point is at.
int main() 
{

    int x;
    int y;

    printf("Enter a coordinate point on the x-axis: " );
    scanf("%d", &x);

    printf("Enter a coordinate point on the y-axis: " );
    scanf("%d", &y);

    if ( x > 0 && y > 0) 
        printf("The point  (%d,%d) is in the 1st Quadrant", x, y);
    
    else if ( x < 0 && y > 0) 
        printf("The point (%d,%d) is in the 2nd Quadrant" , x, y);

    else if ( x < 0 && y < 0) 
        printf("The point (%d,%d) is in the 3rd Quadrant" , x, y);
    
    else if ( x > 0 && y < 0) 
        printf("The point (%d,%d) is in the 4th Quadrant" , x, y);

    
    else
        printf("The point (%d,%d) is at Origin" , x, y);;
   

    return 0;
}