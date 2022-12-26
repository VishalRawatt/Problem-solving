#include<stdio.h>
void main()
{
   int a[]={10,20,30,40,50} ;
   int i,*p ;
   p=a ;
   for(i=0;i<5;i++)
   {
       printf("%d ",a[i]) ;
   }
   printf("\n Square using pointers") ;
   square(&a) ;
   printf("\n") ;
   for(i=0;i<5;i++)
   {
       printf("%d  ",a[i]) ;
   }
   return 0 ;
}
void square(int *p)
{
    int i ;
    for(i=0;i<5;i++)
    {
        *p = *p * *p ;
    }
}
