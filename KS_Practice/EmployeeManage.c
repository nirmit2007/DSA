/* Employee Record Search System

Create a program that:

Take input for N employees.
Store:
	Employee ID
	Employee Name
	Salary

Ask the user for an Employee ID to search.

Use Linear Search only to find the employee.
	If found, display all details.
	If not found, display "Employee Not Found".

Count and display:
Total comparisons made during the search. */

#include<stdio.h>

void main()
{
    int id[100], salary[100];
    char name[100][30];
    int i, n, key, found = 0, comp = 0;

    printf("Enter Number of Employees : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i+1);

        printf("Enter Employee ID : ");
        scanf("%d", &id[i]);

        printf("Enter Name : ");
        scanf("%s", name[i]);

        printf("Enter Salary : ");
        scanf("%d", &salary[i]);
    }

    printf("\nEnter Employee ID to Search : ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        comp++;

        if(id[i] == key)
        {
            found = 1;

            printf("\nEmployee Found\n");
            printf("ID : %d\n", id[i]);
            printf("Name : %s\n", name[i]);
            printf("Salary : %d\n", salary[i]);

            break;
        }
    }

    if(found == 0)
    {
        printf("\nEmployee Not Found");
    }else
    {
    printf("\nTotal Comparisons Made : %d", comp);
    }
}