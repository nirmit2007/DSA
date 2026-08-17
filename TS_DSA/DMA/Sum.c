#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,*k;

    k = (int *)malloc(sizeof(int));

    printf("\nEnter two numbers : ");
    scanf("%d %d",&a,&b);

    *k = a + b;

    printf("Sum : %d",*k);

    return 0;
}