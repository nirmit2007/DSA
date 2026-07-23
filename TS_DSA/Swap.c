#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;
    int comparison;

    printf("Original Array : ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for(i = 0; i < n - 1; i++)
    {
        printf("\n=============================\n");
        printf("PHASE %d\n", i + 1);
        printf("=============================\n");

        comparison = 1;

        for(j = 0; j < n - i - 1; j++)
        {
            printf("\nComparison %d\n", comparison++);
            printf("Comparing %d and %d\n", arr[j], arr[j + 1]);

            if(arr[j] > arr[j + 1])
            {
                printf("Swap Required\n");

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            else
            {
                printf("No Swap\n");
            }

            printf("Array : ");
            for(int k = 0; k < n; k++)
                printf("%d ", arr[k]);
            printf("\n");
        }

        printf("\nComparisons in Phase %d = %d\n", i + 1, n - i - 1);
    }

    printf("\n=============================\n");
    printf("Sorted Array : ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}