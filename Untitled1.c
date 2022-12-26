#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *link ;
};
void main()
{
    int z=1,y,value,x ;
    struct node *front ,*rear, *r,*temp ;
    printf("Enque operation in deque via circular linked list \n") ;
    while(x==1)
    {
        printf("enter value to be enqueued\n") ;
        scanf("%d",&value) ;

        printf("want to enque at rear end ? press 2") ;
        printf("want to enque at front end ? press 2") ;
        scanf("%d",&y) ;
    }
    while(y==2)
    {
        if(front == NULL)
        {
            r=(struct node *)malloc(sizeof(struct node)) ;
            r->data = value ;
            r->link = NULL ;
            front = r ;
            rear = r ;
        }
        else
        {
            if(rear->link == NULL)
            {
                r=(struct node *)malloc(sizeof(struct node)) ;
                r->data = value ;
                r->link = rear->link ;
                rear->link = r ;
                rear->link= front ;
            }
            else
            {
                r=(struct node *)malloc(sizeof(struct node)) ;
                r->data = value ;
                rear->link = r ;
                r->link = front ;
                front = r ;
            }
        }
    }
}

