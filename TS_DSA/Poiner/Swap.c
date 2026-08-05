#include <stdio.h>

void swap(int *p, int *q) 
{ 
    int temp = *p; 
    *p = *q;
    *q = temp;
}

int main()
 {
    int a = 10, b = 20;
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    swap(&a, &b); 
    
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}
