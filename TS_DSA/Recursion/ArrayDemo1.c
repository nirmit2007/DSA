#include<stdio.h>

int ArraySum(int a[] , int n)
{
    int i,sum=0;

    if(n==0)
    {
        return 0;
    }
    return a[n-1]  + ArraySum(a,n-1);
}

int ArrayMax(int a[] , int n)
{
    int i,max=0;

    if(n==1)
    {
        return a[0];
    }
    max = ArrayMax(a,n-1);

    if(a[n-1] > max)
    {
        return a[n-1];
    }
    return max;
}

int main()
{
    int a[5],i;

    printf("\nEnter 5 elements :  ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    ArraySum(a,5);
    printf("Sum = %d", ArraySum(a, 5));

    ArrayMax(a,5);
    printf("\nMaximum = %d", ArrayMax(a, 5));

    return 0;
}