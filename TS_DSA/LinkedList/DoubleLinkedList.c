#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;

void addNode(int data)
{

}

int main()
{
    addNode(10);
    
    return 0;
}