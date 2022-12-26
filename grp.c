#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data  ;
    struct node *prev , *next
};
void linkedlist(struct node *ptr)
{
    while(ptr->next!=NULL)
    {
        printf("%d",ptr->data) ;
        ptr=ptr->next ;
    }
}
void main()
{
    struct node *start , *end ,*r ;
    int value,x;
    start = (struct node *)malloc(sizeof(struct node)) ;
    end = (struct node *)malloc(sizeof(struct node)) ;
    r = (struct node *)malloc(sizeof(struct node)) ;
    start = end = NULL ;
    printf("Enter the value of first element :") ;
    scanf("%d",&value) ;
    x=1 ;
    while(x=1)
    {
        if(start==NULL)
        {
            r->data = value ;
            r->next = NULL ;
            r->prev = NULL ;
            start= end = r ;
        }
        else
        {
            printf("Enter the data to be inserted") ;
            scanf("%d",&value) ;
            r->data = value ;
            r->prev = start ;
            r->next = end ;
            start->next = r ;
            end->next = start ;
            start->prev = end ;
            end->prev = r ;
        }
        printf("want to enter more data press 1 :") ;
        scanf("%d",&x) ;
    }
    linkedlist(start) ;
}
