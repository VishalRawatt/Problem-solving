#include<stdio.h>
void main ()
{
    int n,i=1,f=1,sum=0,a=0;
    printf("enter a number:" ) ;
    scanf("%d",&n) ;
    for(i=1;i<=n;i++)
    {
        f=i*f ;
        a=f/n ;
        sum= sum+a ;
    }
    printf("%d",a) ;
}
