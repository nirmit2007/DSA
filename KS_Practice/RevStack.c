/* Reverse First K Elements of a Queue
Input:
Queue = [10, 20, 30, 40, 50]
K = 3

Output:
[30, 20, 10, 40, 50] */

#include <stdio.h>

int main()
{
    int queue[] = {10, 20, 30, 40, 50};
    int n = sizeof(queue) / sizeof(queue[0]);
    int i, k;

    printf("\nEnter K (reverse upto which position) : ");
    scanf("%d", &k);

    int stack[5];
    int top = -1;

    for (i = 0; i < k; i++)
    {
        stack[++top] = queue[i];
    }
    for (i = 0; i < k; i++)
    {
        queue[i] = stack[top--];
    }
    printf("Queue: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", queue[i]);
    }

    return 0;
}