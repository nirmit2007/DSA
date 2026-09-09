#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;

void addNodebegin(int num)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));

    temp->data = num;
    temp->next = head;
    head = temp;
}

void addNode(int num)
{
    if(head == NULL)
    {
        head = (struct node*)malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }else
    {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data = num;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display()
{
    struct node *p;
    printf("\nLinkedList : ");

    p = head;

    while(p != NULL)
    {
        printf(" %d ",p->data);
        p = p->next;
    }
}

int main()
{
    addNode(10);
    addNode(20);
    addNode(30);
    display();
    addNode(40);
    display();
    addNodebegin(5);
    display();
    return 0;
}