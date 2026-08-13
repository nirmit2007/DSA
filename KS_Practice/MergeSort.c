#include <stdio.h>

void merge(int a[], int low, int mid, int high)
{
    int i=low, j=mid+1, k=low;
    int b[50];

    while(i<=mid && j<=high)
    {
        if(a[i] < a[j])
        {
            b[k++] = a[i++];
        }else
        {
            b[k++] = a[j++];
        }
    }

    while(i<=mid)
    {
        b[k++] = a[i++];
    }
    while(j<=high)
    {
        b[k++] = a[j++];
    }
    for(i=low; i<=high; i++)
    {
        a[i] = b[i];
    }
}

void mergeSort(int a[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);

        merge(a, low, mid, high);
    }
}

int main()
{
    int a[] = {5,2,8,1,3};
    int n = 5;

    mergeSort(a, 0, n-1);

    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}