#include <stdio.h>
#include <stdlib.h>


//Unions

//How to define a Union?

/*
union <union_name>  {
    datatype1 field1;
    datatype2 field2;
    .....

};

union info{
    char firstName[20];
    int age;
};
union minmax{
    int min;
    int max;
    double average;
};
*/

struct point_struct
{
    int x;
    int y;
};


union point_union
{
    int x;
    int y;

};



int main()
{

    //Template - for creating a Union Variable
    //union <union_name> <vaiable_name>;
    /*
    union info myVariable1;
    myVariable1.age = 30;
    printf("myVariable1.age = %d\n", myVariable1.age);
    strcpy(myVariable1.firstName, "Hello!");
    printf("myVariable.firstName =  %s\n", myVariable1.firstName);
    printf("myVariable1.age = %d\n", myVariable1.age); 
    */

    struct point_struct point1; 
    union point_union point2;    


    point1. x = 5;
    point1. y = 7;

    printf("Struct Point = (%d, %d)  \n", point1.x, point1.y);
    
    point1.y = 10;

    printf(" After Change --> Struct Point = (%d, %d)  \n", point1.x, point1.y);
    
    point2.x = 3;

    printf("Union Point = (%d, %d)  \n", point2.x, point2.y);

    point2. y = 4;
    printf(" After Change --> Union Point = (%d, %d)  \n", point2.x, point2.y);


    return 0;
}