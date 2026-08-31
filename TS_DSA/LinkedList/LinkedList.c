#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void addNode(int num)
{
    if(head == NULL)
    {
        head = (struct node*)malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
    }
}
int main()
{
    addNode(10);
    printf("%d",head->data);
    return 0;
}