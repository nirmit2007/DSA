#include <stdio.h>
#define SIZE 3

struct student
{
    char name[20];
    int maths;
    int science;
    int english;
    float percentage;
    char grade;
}s[SIZE];

void getData(){
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter name and marks of the three subjects : ");
        scanf("%s%d%d%d", s[i].name, &s[i].maths, &s[i].science, &s[i].english);
    }
}

void calcPercentageGrade(){
    for (int i = 0; i < SIZE; i++)
    {
        s[i].percentage = (s[i].maths + s[i].science + s[i].english) / 3.0;

        if(s[i].percentage >= 35){
            s[i].grade = 'P';
        }
        else{
            s[i].grade = 'F';
        }
    }
}

void display(){

    printf("\nName\tMaths\tSci\tEng\tPerc\tGrade\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s\t%d\t%d\t%d\t%f\t%c\n", s[i].name, s[i].maths, s[i].science, s[i].english, s[i].percentage, s[i].grade);
    }
}


int main() 
{
    getData();
    calcPercentageGrade();
    display();
    
    return 0;
}