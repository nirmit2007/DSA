/*Linear Search : Linear Search is a searching technique in which each element is checked one by one until the required element is found or the list ends.(No require for sort) */

#include<stdio.h>

int main()
{
    int a[100],i,found=0,key,n;

    printf("\nEnter Number of Elements : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("\nEnter The Number You Want to Search : ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key == a[i])
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("\n%d is found at index %d",key,i+1);
    }else
    {
        printf("\n%d is not found at any index",key);
    }
}