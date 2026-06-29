#include<stdio.h>
#define SIZE 5

int arr[SIZE] = {10,20,30,40,50};
int count = 5;

void removeItem(int location)
{
    for(int i = location - 1 ; i < SIZE - 1 ; i++)
    {
        arr[i] = arr[i+1];
    }
    count--;
}

void display()
{
    for(int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    removeItem(1);
    display();
    removeItem(2);
    display();
}
