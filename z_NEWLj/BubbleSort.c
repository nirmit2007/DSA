#include<stdio.h>

int main()
{
    int a[5],i,j,temp,n=5;

    for(i=0;i<5;i++)
    {
        printf("\nEnter a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("\n-----Sorted Array-----");

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("\na[%d] : %d",i,a[i]);
    }
}