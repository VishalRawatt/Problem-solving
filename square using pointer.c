#include<stdio.h>
void main()
{
   int a[]={10,20,30,40,50} ;
   int i,*ptr ;
   ptr=&a[0] ;
   for(i=0;i<5;i++)
   {
       printf("*ptr = %d \n",(*ptr)++) ;
       printf("*ptr++ = %d \n",(*ptr)++) ;
   }
}
