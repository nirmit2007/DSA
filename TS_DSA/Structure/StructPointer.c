#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    int marks;
};

int main()
{
    struct student s[3];
    struct student *p;

    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter student %d details:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    p = &s[0];

    printf("\n--- First Student ---\n");
    printf("Name  : %s\n", p->name);
    printf("Roll  : %d\n", p->roll);
    printf("Marks : %d\n", p->marks);

    p = &s[1];

    printf("\n--- Second Student ---\n");
    printf("Name  : %s\n", p->name);
    printf("Roll  : %d\n", p->roll);
    printf("Marks : %d\n", p->marks);

    p = &s[2];

    printf("\n--- Third Student ---\n");
    printf("Name  : %s\n", p->name);
    printf("Roll  : %d\n", p->roll);
    printf("Marks : %d\n", p->marks);

    return 0;
}