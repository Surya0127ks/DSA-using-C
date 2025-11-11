#include<stdio.h>
void main()
{
    int i,j,temp;
    int arr[]={2,3,2,4,6,7,2,8};
    printf("Array elements are(before sorting):-\n");
    for(i=0;i<8;i++)
    {
       printf(" %d",arr[i]);
    }
    
    for(i=1;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
           if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    printf("Array elements (after sorting):-\n");
    for(i=0;i<8;i++)
    {
       printf(" %d",arr[i]);
    }
}