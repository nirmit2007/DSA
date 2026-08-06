#include<stdio.h>

void insertionSort(int a[] , int n)
{
    int i,j,key;

    for(i=0;i<n;i++)
    {
        key = a[i];
        j = i - 1;

        while(j >=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main()
{
    int a[] = {12,7,4,9,1};
    int n = sizeof(a)/sizeof(a[0]);

    printf("Before Swapping...");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    insertionSort(a,n);

    printf("After Swapping...");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0; 
}