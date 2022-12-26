#include<stdio.h>
struct node
{
    int data ;
    struct node *link ;
};
void main()
{
    struct node s,*p,**q ;
    int value ;
    s.data=10 ;
    s.link=NULL ;
    p=&s ;
    q=&p ;
    printf("Address of struct node s = %u(&s)\n",&s) ;
    printf("Value stores in struct node pointer *p=%u(p)\n",p) ;
    printf("\n") ;
    printf("Address of struct node pointer *p = %u \n",&p) ;
    printf("Value stores in struct node pointer **q=%u(q)\n",q) ;
    printf("\n") ;
    printf("address of struct node s = %u(&s)",&s) ;
    printf("address of struct node s (via pointer *p) =%u (p)\n",p) ;
    printf("address of struct node s (via pointer **q) =%u (*q)\n",*q) ;
    printf("\n") ;
    printf("value stores in struct node s = %d(s.data)\n",s.data) ;
    printf("value stores in node s(via pointer *p)=%d(p->data)\n",p->data) ;
    printf("value stores in node s(via pointer *p)=%d((*q)->data)\n",(*q)->data) ;
}
