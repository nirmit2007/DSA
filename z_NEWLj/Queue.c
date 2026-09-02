#include <stdio.h>
#define SIZE 5

int queue[SIZE], f = -1, r = -1;

void Qinsert(int value)
{
    if (r == SIZE - 1)
    {
        printf("Queue Overflow");
    }
    else
    {
        if(f == -1)
        {
            f = 0;
        }
        r++;
        queue[r] = value;
        printf("%d value inserted...", queue[r]);
    }
}

void Qdelete()
{
    if(f == -1)
        printf("Queue is empty\n");
    else
    {
        printf("%d deleted\n", queue[f]);
        f++;
    }
}

void Qdisplay()
{
    if (f == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue Elements:\n");
        for (int i = f; i <= r; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
    printf("\n");
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n----- Choose Option -----");
        printf("\n1.Insert");
        printf("\n2.Delete");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Elemment to insert : ");
            scanf("%d", &value);
            Qinsert(value);
            break;

        case 2:
            Qdelete();
            break;

        case 3:
            Qdisplay();
            break;

        case 4:
            printf("\nExiting...");
            break;

        default:
            printf("\nInvalid Choice");
        }
    }
    return 0;
}