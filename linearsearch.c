#include<stdio.h>
void main()
{
    int i,j,n,flag=0;
    int arr[]={2,3,2,4,6,7,2,8};
    printf("Array elements are:-\n");
    for(i=0;i<8;i++)
    {
       printf(" %d",arr[i]);
    }
    printf("Enter element to search:");
    scanf("%d",&n);
    for(i=0;i<8;i++)
    {
        if(arr[i]==n)
        {
            printf("Element found at index %d ",i);
            flag=1;
        }
       
    }
    if(flag==0)
        {
            printf("not found");
        }

}