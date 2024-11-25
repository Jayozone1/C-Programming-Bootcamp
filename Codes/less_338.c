#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


//Struct Mathematical Operations

typedef struct point{
    int x;
    int y;
} Point;

Point addition(Point p1, Point p2) // "+"
{
    Point result;
    result.x = p1.x + p2.y;
    result.y = p1.y + p2.y;
    return result;
}

void increment(Point* p) // "++"
{
    (*p).x++;
    (*p).y++;
}


int main
{
    /*
     int num = 5;
    num++;
    */
   
    Point point1  = { 1,2 }, point2 = { 4,1 };
    point++;
    increment(&point1);
    point1 = point2 + 3;
    // Point point3 = addition(point1, point2 );
   
}



