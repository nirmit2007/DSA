#include <stdio.h>

int a = 10, b = 20, sum = 0; 
int *p = &a, *q = &b;

int main() 
{
    sum = (*p) + (*q);
    printf("Sum = %d", sum);
    
    return 0;
}
