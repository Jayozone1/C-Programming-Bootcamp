#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

struct date {
    int day;
    int month;
    int year;
};

int main()
{/*
    struct point p1;
    printf("Enter x cordinate: ");
    scanf("%d", &p1.x);
    printf("Enter y cordinate: ");
    scanf("%d", &p1.y);
    printf("The Point is (%d, %d) \n", p1.x, p1.y);
    return 0;
   */
    struct date graduateDate;
    printf("Enter day: ");
    scanf("%d", &graduateDate.day);
    printf("Enter Month: ");
    scanf("%d", &graduateDate.month);
    printf("Enter year: ");
    scanf("%d", &graduateDate.year);
    printf("The Graduation Date is %d/%d/%d \n", graduateDate.month, graduateDate.day, graduateDate.year);
    return 0;    
}

