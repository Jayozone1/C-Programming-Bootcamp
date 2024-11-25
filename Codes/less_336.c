#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


//Structs Operators and Relations

//Usage of "Relational Operators" (<,>,<=,>=,!=, ==)

typedef struct point {
    int x; 
    int y;
}Point;


typedef struct point {
    char name[10]; 
    float age;
    int id;
}Employee;

int main()
{
    Point p1 = { 3,5}, p2 = { 2,6};

    //Error #1 - Whatr fields is used to decide the result?
    if (p1.x > p2.x)
    {
        // Code...
        // Code ....
        //Printing that "Point1 is greater!..."

    }
    

    //Error #2 - what fields are we interested? All of them? or Just a few?
    if (p1 == p2) 
    {
        // Code 
        // Code
        // Printing that "Point 1 is equal to point 2.."
    }
}


int main() 
{
    Employee emp1 = { "Jake", 24.5, 123};
    Employee emp2 =  { "John", 30, 342};

    //Error #1 - What fields is used to decide the result?
    if (emp1 > emp2) 
    {
            // Code...
            //Code ...
            // Printing that "Employee1 is greater!..."
    }

    //...
    if (emp1 == emp2)
    {
        // Code...
        // Code...
        //printing that "Both employeee instance are equal."
    }
 

}