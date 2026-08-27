#include <stdio.h>

void merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    int temp[100];

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= high)
        temp[k++] = arr[j++];

    for (i = low, k = 0; i <= high; i++, k++)
        arr[i] = temp[k];
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int salary[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    printf("Enter salary of each employee:\n");
    for (i = 0; i < n; i++)
    {
        printf("Employee %d: ", i + 1);
        scanf("%d", &salary[i]);
    }

    printf("\nOriginal Salaries:\n");
    for (i = 0; i < n; i++)
        printf("%d ", salary[i]);

    mergeSort(salary, 0, n - 1);

    printf("\n\nSorted Salaries (Ascending):\n");
    for (i = 0; i < n; i++)
        printf("%d ", salary[i]);

    printf("\n\nLowest Salary  = %d", salary[0]);
    printf("\nHighest Salary = %d\n", salary[n - 1]);

    return 0;
}