#include<stdio.h>
struct node{
    int data ;
    struct node *link ;
};
int main()
{
    struct node *start,*temp,*r ;
    start = NULL ;
    int x=1,value ;
    printf("Inserting at the end of the linked list\n") ;
    while(x==1)
    {
        printf("Enter the value to be inserted\n") ;
        scanf("%d",&value) ;
        r=(struct node *)malloc(sizeof(struct node)) ;
        r->data = value ;
        if(start==NULL)
        {
            r->link = start ;
            start = r ;
        }
        else
        {
            r->link = start ;
            start = r ;
        }
        printf("Want to enter more values in linked list enter 1 \n") ;
        scanf("%d",&x) ;
    }
    temp=start ;
    int count = 0 ;
    while(temp!=NULL)
    {
        printf("%d ->",temp->data) ;
        temp= temp->link ;
        count++ ;
    }
    printf("\n") ;
    printf("%d are the number in nodes in the linked list \n",count) ;
    return 0 ;
}
