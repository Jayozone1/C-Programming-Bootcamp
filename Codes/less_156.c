#include <stdio.h>


int main(){

    int num_grades;
    float grades;
    float totalMarks = 0;

    printf("Enter the number of grades: ");
    scanf("%d", &num_grades);


    for (int i = 1; i <= num_grades; i++ )
    {
        printf("Enter grade %d: ", i);
        scanf("%f", &grades);
        totalMarks += grades;
    }

    float averageGrade = totalMarks / num_grades;

    printf("Average grade: %.2f\n", averageGrade);

    return 0;
}