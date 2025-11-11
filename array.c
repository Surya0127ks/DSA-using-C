#include<stdio.h>
void main()
{
    int arr[10],i;

    printf("This is array program\n");
    printf("Enter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array element are :");
    for(i=0;i<10;i++)
    {
        printf(" %d ",arr[i]);
    }

}