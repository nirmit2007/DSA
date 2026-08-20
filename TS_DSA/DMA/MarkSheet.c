#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char *name;
    int *maths;
    int *sci;
    int *eng;
    float *perc;
    char *grade;
};

int main()
{
    struct Student *s;

    s = (struct Student *)malloc(sizeof(struct Student));

    s->name = (char *)malloc(20 * sizeof(char));
    s->maths = (int *)malloc(sizeof(int));
    s->sci = (int *)malloc(sizeof(int));
    s->eng = (int *)malloc(sizeof(int));
    s->perc = (float *)malloc(sizeof(float));
    s->grade = (char *)malloc(sizeof(char));

    printf("Enter name : ");
    scanf("%s", s->name);

    printf("Enter Maths : ");
    scanf("%d", s->maths);

    printf("Enter Science : ");
    scanf("%d", s->sci);

    printf("Enter English : ");
    scanf("%d", s->eng);

    *s->perc = (*s->maths + *s->sci + *s->eng) / 3.0;

    if (*s->perc > 35)
    {
        *s->grade = 'P';
    }else
    {
        *s->grade = 'F';
    }

    printf("\nName  : %s", s->name);
    printf("\nMaths : %d", *s->maths);
    printf("\nSci   : %d", *s->sci);
    printf("\nEng   : %d", *s->eng);
    printf("\nPerc  : %.2f", *s->perc);
    printf("\nGrade : %c", *s->grade);

    return 0;
}