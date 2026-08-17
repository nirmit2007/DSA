#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int *k;

    k = (int *)malloc(sizeof(int));

    printf("Enter Num : ");
    scanf("%d",k);

    printf("%d",*k);

    return 0;
}