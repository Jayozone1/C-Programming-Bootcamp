#include <stdio.h>
#include <stdlib.h>

//Calculate the Area of a rectangle.

float RecArea(float height, float width)
{
    float Area;
    Area = height * width;
    return Area;
}


int main()
{
    float heightRectangle, WidthRectangle;
    printf("Enter the height: ");
    scanf("%d", &heightRectangle);

    printf("Enter the width: ");
    scanf("%d", &WidthRectangle);

    printf("Area of the Rectangle is %.2f\n", RecArea(heightRectangle, WidthRectangle));

    return 0;

}