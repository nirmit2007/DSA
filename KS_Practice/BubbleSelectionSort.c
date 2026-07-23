/* Problem Statement

Write a C program that performs both Bubble Sort and Selection Sort on the same array and compares their results.

Requirements
Accept the number of elements (n) from the user.
Input n integer elements into an array.
Copy the original array into two separate arrays:
bubbleArr
selectionArr
Sort:
bubbleArr using Bubble Sort.
selectionArr using Selection Sort.
Display:
Original Array
Bubble Sorted Array
Selection Sorted Array
Count and display:
Number of comparisons made by Bubble Sort.
Number of swaps made by Bubble Sort.
Number of comparisons made by Selection Sort.
Number of swaps made by Selection Sort.
Finally, print whether both algorithms produced the same sorted array. */

#include<stdio.h>

int main()
{
    int i, j, n, bcompare, scompare, bswap, sswap, temp, min, same;

    bcompare = 0;
    scompare = 0;
    bswap = 0;
    sswap = 0;
    same = 1;

    printf("\nEnter the number of elements : ");
    scanf("%d", &n);

    int a[n], b[n], s[n];

    // Input and Copy
    for(i = 0; i < n; i++)
    {
        printf("\nEnter a[%d] : ", i);
        scanf("%d", &a[i]);

        b[i] = a[i];
        s[i] = a[i];
    }

    // Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            bcompare++;

            if(b[j] > b[j + 1])
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;

                bswap++;
            }
        }
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            scompare++;

            if(s[j] < s[min])
            {
                min = j;
            }
        }

        if(min != i)
        {
            temp = s[i];
            s[i] = s[min];
            s[min] = temp;

            sswap++;
        }
    }

    // Original Array
    printf("\nOriginal Array : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Bubble Sorted Array
    printf("\nBubble Sorted Array : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    // Selection Sorted Array
    printf("\nSelection Sorted Array : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", s[i]);
    }

    // Bubble Sort Count
    printf("\n\nBubble Sort Comparisons : %d", bcompare);
    printf("\nBubble Sort Swaps       : %d", bswap);

    // Selection Sort Count
    printf("\n\nSelection Sort Comparisons : %d", scompare);
    printf("\nSelection Sort Swaps       : %d", sswap);

    // Compare Both Arrays
    for(i = 0; i < n; i++)
    {
        if(b[i] != s[i])
        {
            same = 0;
            break;
        }
    }

    if(same)
    {
        printf("\n\nBoth algorithms produced the SAME sorted array.");
    }
    else
    {
        printf("\n\nBoth algorithms produced DIFFERENT sorted array.");
    }

    return 0;
}