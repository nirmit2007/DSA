#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int data)
{
    if (top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        stack[++top] = data;
        printf("%d pushed into stack\n", data);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d popped from stack\n", stack[top--]);
    }
}

void peep(int pos)
{
    if (top - pos + 1 < 0)
    {
        printf("Invalid Position\n");
    }
    else
    {
        printf("Element at position %d from top is %d\n", pos, stack[top - pos + 1]);
    }
}

void change(int pos , int value)
{
    int index = top - pos + 1;
    if(index < 0)
    {
        printf("\nInvalid Position");
    }else
    {
        printf("%d element found at %d %d pos",pos,stack[index],value);
        stack[index] = value;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack Elements:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    printf("\n");
}

int main()
{
    int choice, data, pos ,value;

    while (1)
    {
        printf("\n-----Choose Option-----");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peep");
        printf("\n4. Change");
        printf("\n5. Display");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to push: ");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            pop();
            break;

        case 3:
            printf("Enter position from top to peep: ");
            scanf("%d", &pos);
            peep(pos);
            break;

        case 4:
            printf("\nEnter the pos : ");
            scanf("%d",&pos);
            printf("\nEnter the value : ");
            scanf("%d",&value);
            change(pos,value);
            break;

        case 5:
            display();
            break;

        case 6:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}
