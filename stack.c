#include<stdio.h>
#define N 20
int stack[N],top=-1;

void push(int data)
{
if(top==N-1)
{
  printf("Stack is full");
}
else
{  top=top+1;
   stack[top]=data;
}
}
void pop()
{  if(top==-1)
        printf("Stack is empty");
    else
    {
        printf("deleted item is : %d",stack[top]);
        top=top-1;
    }
}
void view()
{   int i;
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        for(i=0;i<=top;i++)
        {
            printf("\n%d ",stack[i]);
        }
    }
}
void main()
{
  push(5);
  push(12);
  push(13);
  push(15);
  view(); 
  pop();
}