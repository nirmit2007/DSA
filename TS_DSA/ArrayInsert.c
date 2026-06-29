#include<stdio.h>
#define SIZE 7

int a[SIZE],count=0;

void insert(int location,int data)
{  
      for(int i=SIZE-1 ; i>=location-1 ; i--)
      {
        a[i] = a[i-1];
      }
      a[location-1] = data;
}

void display()
{
    for(int i=0;i<SIZE;i++)
    {
        printf("%d\t",a[i]);
    }
}

int main()
{
    insert(1,10);
    insert(2,20);
    insert(1,30);
    insert(1,40);
    insert(3,50);
    insert(3,60);

    display();
}