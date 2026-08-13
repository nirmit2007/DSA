#include <stdio.h>

#define SIZE 5

struct student
{
    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
    char grade;
};

int main()
{
    struct student s[SIZE];
    struct student *p;

    p = &s[0];

    for(int i = 0; i < SIZE; i++)
    {
        printf("\nEnter name and marks of student: ");
        scanf("%s%d%d%d", p->name, &p->maths, &p->eng, &p->sci);

        p->perc = (p->maths + p->sci + p->eng) / 3.0;

        if(p->perc >= 35)
            p->grade = 'P';
        else
            p->grade = 'F';

        p++;
    }

    p = &s[0];

    printf("\n--- Student Details ---\n");

    for(int i = 0; i < SIZE; i++)
    {
        printf("\nName       : %s", p->name);
        printf("\nMaths      : %d", p->maths);
        printf("\nScience    : %d", p->sci);
        printf("\nEnglish    : %d", p->eng);
        printf("\nPercentage : %.2f", p->perc);
        printf("\nGrade      : %c\n", p->grade);

        p++;
    }

    return 0;
}