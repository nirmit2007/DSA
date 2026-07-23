#include<stdio.h>
#define SIZE 5
int front=-1;
int rear=-1;
int cq[SIZE];
void enQ(int data)
{
    if((rear==front-1) || (front==0 && rear==SIZE-1))
    {
        printf("\nQueue is FULL!!!");
    }
    
    else if(front==-1 || rear==-1)
    {
        printf("\nQueue is EMPTY...");
    }
    else{
        if(rear==SIZE-1)
        {
            rear=0;    
        }
        rear++;
        cq[rear] = data;
        if(front==-1)
        {
            front=0;
        }
    }
    
}
void deQ()
{
    
    if(front==-1)
    {
        printf("\nQueue if EMPTY... ");
    }
    else if(front==SIZE-1)
    {
        front=0;
        
    }
    else if(front==rear)
    {
        
        printf("\n%d removed..",cq[front]);
        front =-1;
        rear =-1;
    }
    else{
        printf("\n%d removed..",cq[front]);
        front++;
    
    }   
}
void disp()
{
    if(front==-1)
    {
        printf("\nQueue if EMPTY... ");
    }
    else{
    
        for(int i=front;i<SIZE;i++)
        {
            printf(" %d",cq[i]);
        }
        for(int i=0;i<=rear;i++)
        {
            printf(" %d",cq[i]);
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
    return 0;
}