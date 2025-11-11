#include<stdio.h>
#define N 5
int queue[N],front=-1,rear=-1;
void insert(int data)
{
    if(rear==N-1)
    {
        printf("Queue is full");
    }
    else if(front==-1&&rear==-1)
    {
        rear=front=0;
        queue[rear]=data;
    }
    else if(front==rear)
    {
        rear=rear=1;
         queue[rear]=data;
    }
    else
    {
       rear++;
        queue[rear]=data;
    }
    
}
void delete()
{
 if(front==-1&&rear==-1)
 {
    printf("Queue is empty");
 }
 else
 {
    printf("deleted item is %d",queue[front]);
    front=front+1;
 }
}
void view()
{
    int i;
  if(front==-1&&rear==-1)
    {
        printf("Queue is empty");
    }
    else
    {
      for(i=front;i<=rear;i++)
      {
       printf("\n%d ",queue[i]);
      }
    }
}
void main()
{
    insert(2);
    insert(3);
    insert(4);
    delete();
    view();

}