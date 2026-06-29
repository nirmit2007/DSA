#include <stdio.h>
#define SIZE 10

int arr[SIZE];
int count = 0;

void insertItem(int location, int data)
{
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == data)
        {
            printf("Duplicate value not allowed , %d is already in Array \n",data);
            return;
        }
    }

    for (int i = count; i >= location; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[location - 1] = data;
    count++;
}

void removeItem(int location)
{ 
    for (int i = location - 1; i < count - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    count--;
}

void display()
{
    printf("Array: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    insertItem(1, 10);
    insertItem(2, 20);
    insertItem(3, 30);
    insertItem(4, 20);
    insertItem(4, 40);

    display();
    
    removeItem(2);
    
    display();

    return 0;
}