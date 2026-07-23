#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enQueue(int data)
{
    if(rear == SIZE -1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = data;
    }
}

void deQueue()
{
    if(front == -1)
    {
        printf("\nQueue is Empty");
    }
    else if(front == rear)
    {
        printf("\n%d removed", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\n%d removed", queue[front]);
        front++;
    }
}

void display()
{ 
    if(front == -1)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nQueue : ");
        for (int i = front; i <= rear; i++)
        {
            printf(" %d", queue[i]);
        }
    }
}

int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);

    display();
    
    enQueue(40);
    enQueue(50);
    enQueue(60);

    display();

    deQueue();
    deQueue();
    display();

    return 0;
}