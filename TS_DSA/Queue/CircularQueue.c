#include<stdio.h>

#define SIZE 5

int front = -1;
int rear = -1;
int cq[SIZE];

void enQ(int data)
{
    if((rear + 1) % SIZE == front)
    {
        printf("\nQueue is FULL...");
    }
    else if(front == -1)
    {
        front = rear = 0;
        cq[rear] = data;
    }
    else
    {
        rear = (rear + 1) % SIZE;
        cq[rear] = data;
    }
}

void deQ()
{
    if(front == -1)
    {
        printf("\nQueue is EMPTY...");
    }
    else if(front == rear)
    {
        printf("\n%d Removed.", cq[front]);
        front = rear = -1;
    }
    else
    {
        printf("\n%d Removed.", cq[front]);
        front = (front + 1) % SIZE;
    }
}

void disp()
{
    if(front == -1)
    {
        printf("\nQueue is EMPTY...");
    }
    else
    {
        int i = front;

        printf("\nQueue : ");

        while(1)
        {
            printf("%d ", cq[i]);

            if(i == rear)
                break;

            i = (i + 1) % SIZE;
        }
    }
}

int main()
{
    enQ(10);
    enQ(20);
    enQ(30);
    enQ(40);
    enQ(50);

    disp();

    deQ();
    deQ();

    disp();

    enQ(60);
    enQ(70);

    disp();

    return 0;
}