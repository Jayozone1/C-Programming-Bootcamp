#include <stdio.h>
#include <stdlib.h>


// Unions
/*
union Student{
    int ID;
    double average;
};
*/

typedef union Student {
    int ID;
    double average;
}student;


int main()
{
    int i;
    student studentsArray[3];  //Array of Unions
    for(i=0; i<3; i++)
    {
        printf("Enter ID #%d: ", i+1);
        scanf("%d", &studentsArray[i].ID);
    }

    for(i=0; i < 3; i++)
    {
        printf("Student #%d ID = %d\n", i+1, studentsArray[i].ID);
    }
    



   /*
    union Student student1;
    union Student *ptrStudent2;
    student student1;
    student1.ID = 5;
    printf("student1.ID = %d\n", student1.ID);

    ptrStudent2  = &student1; // ptrStudents2 points to student1 variable
    ptrStudent2->ID = 10;

    printf("student1.ID = %d\n", student1.ID);
    


    printf("size of student1 union = %d\n", sizeof(student1));
    printf("size of ptrStudent2 = %d\n", sizeof(ptrStudent2));
   */ 
    return 0;
}

