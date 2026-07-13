#include<stdio.h>
#define SIZE 5

int queue[SIZE];

int front = -1;
int rear = -1;

void enQueue(int data)
{
    rear++;
    queue[rear] = data;

    if(front == -1)
    {
        front = 0;
    }
}

void deQueue()
{
    printf("\n%d removed",queue[front]);
    front++;
}

void display()
{ 
    printf("\nQueue : ");
    for (int i = front; i <= rear; i++)
    {
        printf(" %d", queue[i]);
    }
}

int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);

    display();

    deQueue();

    display();

    return 0;
}