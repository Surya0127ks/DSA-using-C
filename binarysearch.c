#include<stdio.h>
void main()
{
    int i,lb=0,up=7,mid=0,n,flag=0;
    int arr[]={1,2,3,4,5,6,7,8};
    printf("Array elements are(:-\n");
    for(i=0;i<8;i++)
    {
       printf(" %d",arr[i]);
    }
    printf("Enter element to search:");
    scanf("%d",&n);
 
     while(lb<=up)
     {
        mid=lb+up;
        if(arr[mid]==n)
        {
            printf("Element found successfully at index %d",mid);
            flag=1;
            break;
        }
        else if(arr[mid]>n)
        {
            up=mid-1;
        }
        else 
          lb=mid+1;
     }
     if(flag==0)
     {
      printf("Element not found");
     }
  }