//insertion at the beginning of the double linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *prev;
  int data;
  struct node *next;
};

int main()
{
 struct node *start,*r,*temp;
 start=NULL;
 int x=1,y,value;

 printf("inserting nodes in the double linked list:\n");

 while(x==1)
 {
    printf("for insertion at the beginning ?press 2");
    scanf("%d",&y);
    while (y=2)
        {
        printf("insertion in dll in the beginning\n");
        printf("enter the value to be inserted:");
        scanf("%d",&value);

        if(start==NULL)
            {
            r=(struct node *)malloc(sizeof(struct node));
            r->data=value;
            r->prev=NULL;
            r->next=NULL;
            start=r;
            }
        else
            {
            r=(struct node *)malloc(sizeof(struct node));
            r->data=value;
            r->prev=NULL;
            r->next=start;
            start->prev=r;
            start=r;
            }
        printf("do you want to enter any other node at the beginning press 2:\n");
        scanf("%d",&y);
        }
    printf("do you want to add more nodes press 1\n:");
    scanf("%d",&x);
    }
    printf("\n");
    temp = start;
    int count=0;
    while(temp!=NULL)
    {
        printf("%d <-->",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n");
    printf("number of nodes in dll =%d\n",count);
    return 0;


}
