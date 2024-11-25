#include <stdio.h>
#include <stdint.h>
#include <string.h>

//struct having arrays as element

typedef struct employee {
    char name[10];
    float age;
    int id;
}Employee;

int main()
{
    Employee emp1;
    Employee emp2 = {" Jake ", 24.5, 123};

    //Using the  "=" to copy  "value-by-value"( the members of one struct variable another of the same type)
    //note: copying static arrays in assigments between two structs variables is a little bit different
    //  than "simpy" copying an array (element by element).
    emp1 = emp2;


    //printf("Employees #1 name is %s\n", emp1.name);
    //printf("Employees #2 name is %s\n", emp2.name);

    //Making sure that these are a full copies ( and not just referring to the same place....)
    strcpy(emp1.name, " John");
    emp1.id = 456;

    printf("Employees #1 name is %s\n", emp1.name);
    printf("Employees #2 name is %s\n", emp2.name);
    printf("Employee #1 id is %d\n", emp1.id);
    printf("Employee #2 id is %d\n", emp2.id);


    return 0;
}

