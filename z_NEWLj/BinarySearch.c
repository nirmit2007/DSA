#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }else if (arr[mid] < key)
        {
            start = mid + 1;
        }else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[100], n, key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    pos = binarySearch(arr, n, key);

    if (pos != -1)
        printf("Element found at index %d", pos);
    else
        printf("Element not found");

    return 0;
}