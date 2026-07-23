#include<stdio.h>

int main()
{
    int i,j,min,temp,a[5];

    for(i=0;i<5;i++)
    {
        printf("\nEnter a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        min = i;
        for(j=i+1;j<5;j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("\nSorted Array : ");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
}