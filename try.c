#include<stdio.h>
#include<conio.h>
struct node {
    int data ;
    struct node *next ;
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
    struct node *start,*r,*temp ;
    int value,x,y;
    start = (struct node*)malloc(sizeof(struct node)) ;
    r = (struct node *)malloc(sizeof(struct node)) ;
    printf("This code is for deletion of an element\n") ;
    printf("To insert element in linked list press 1\n") ;
    scanf("%d",&x) ;
    start = NULL ;
    while(x=1)
    {
        printf("Enter value to be inserted:") ;
        scanf("%d",&value) ;
        if(start==NULL)
            {
                r->data = value ;
                r->next = NULL ;
                start = r ;
            }
            else
            {
                printf("To enter more data press 2 \n") ;
                scanf("%d",&y) ;
                while(y=2)
                    {
                        printf("Enter the value to be inserted:") ;
                        scanf("%d",&value) ;
                        r->data = value ;
                        start->next= r ;
                        r=r->next ;
                    }
            }
            printf("Want to enter more data press 2 \n") ;
            scanf("%d",&y) ;
        }
        linkedlist(start) ;
}
