#include<stdio.h>

void santa(int count)
{
    if(count == 0)
    {
        return;
    }
    printf("hi ");
    banta(count);
    santa(count-1);
}

void banta(int count)
{
    if(count == 0)
    {
        return;
    }
    printf("hello ");
    banta(count-1);
}

int main()
{
    santa(5);
    banta(1);
    return 0;
}