#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start=NULL;
struct node* createnode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);
}
void insertnode()
{
    struct node *temp,*t;
   temp=createnode();
   printf("Enter data:");
   scanf("%d",&temp->info);
   temp->link=NULL;
   if(start==NULL)
   start=temp;
else
{
  t=start;
  while(t->link!=NULL)
t=t->link;
t->link=temp; 
}
}
void view()
{
 struct node *tr;
 if(start==NULL)
 printf("List is emplty");
else
tr=start;
{
    while(tr!=NULL)
    {
        printf("  %d ",tr->info);
        tr=tr->link;
        
    }
}
}
void main()
{
    int n,i;
   printf("Enter how many nodes you want to create:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    insertnode();
   }
    
   printf("Your list is");
    view();

}