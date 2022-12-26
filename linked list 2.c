#include<stdio.h>

 struct node
   {
     int data;
     struct stu *link;

    };
int main()
{
    struct node *s,*temp,*r;
    s = NULL;
    int x,value;
    printf("Linked list") ;
    x=1 ;
    while(x==1)
    {
      printf("value to be inserted\n");
      scanf("%d",&value);

      if(s==NULL)
      {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = value;
        temp->link=NULL;
        s = temp;
       }
       else
       {
         temp = s;
         while(temp->link!=NULL)
             temp = temp->link;

          r = (struct node *)malloc(sizeof(struct node));
          r->data=value;
          temp->link = r;
          r->link=NULL;
       }
       printf("want more friends nodes? enter 1\n");
       scanf("%d",&x);
      }

   temp = s;
   while(temp!=NULL)
      {
        printf("%d -> ",temp->data);
        temp = temp->link;
       }


    return 0;
  }
