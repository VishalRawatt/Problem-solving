#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *prev;
  int data;
  struct node *next;
};
void doublelinkedlist(struct node * start)
{

}
void doublelinkedlistatindex(struct node * start , data , index )
{

}
int main()
{
    int x=1,value,y,newvalue,index;
 struct node *start,*r,*temp;
 start=NULL;

 printf("inserting at end in the double linked list:\n");

 while(x==1)
 {
    printf("for insertion at the end ?press 2\n");
    scanf("%d",&y);
    while (y==2)
        {
        printf("enter the value to be inserted : ");
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
                temp = start ;
                while(temp->next!=NULL)
                {
                    temp=temp->next ;
                }
            r=(struct node *)malloc(sizeof(struct node));
            r->data=value;
            r->prev=temp;
            temp->next=r ;
            r->next=NULL ;
            }
        printf("Want more nodes to be inserted at last ? press 1\n");
        scanf("%d",&y);
        }
    printf("do you want to add more nodes press 1\n:");
    scanf("%d",&x);
    }
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

    printf("Enter the value to be inserted  at the middle element\n") ;
    scanf("%d",&newvalue) ;
    printf("Enter the value of index \n") ;
    scanf("%d",&index) ;
    start= doublelinkedlistatindex(start,newvalue,index)

    return 0;


}

