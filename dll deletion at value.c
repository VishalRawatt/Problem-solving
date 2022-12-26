#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *prev;
  int data;
  struct node *next;
};
void linkedlist(struct node * ptr)
{
    while(ptr->next!= NULL)
    {
        printf("%d",ptr->next) ;
        ptr=ptr->next ;
    }
}
int main()
{
 struct node *start,*r,*temp ,*ptr;
 start=NULL;
 int x=1,y,value ,val;

 printf("inserting nodes in the double linked list:\n");

 while(x==1)
 {
    printf("for insertion at the beginning ?press 2");
    scanf("%d",&y);
    while (y=2)
        {
        printf("insertion in dll in the beginning\n");
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
    printf("Deletion at index") ;
    printf("Enter the value to be deleted") ;
    scanf("%d",&val) ;
    while(temp->next!=NULL)
    {
        ptr = temp ;
        ptr->prev->next = temp->next ;
        temp->next->prev = r->prev ;
        free(ptr) ;
    }
    r=temp->next ;
    temp->next=NULL ;
    free(r) ;
    linkedlist(start) ;
    return 0;


}
