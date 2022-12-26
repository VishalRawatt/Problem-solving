#include<stdio.h>
#include<math.h>
void main ()
{
    int n,i=1,f=1,x,a=1,sum=0 ;
    printf("enter the number of terms:" ) ;
    scanf("%d",&n) ;
    printf("Enter the value of x:") ;
    scanf("%d",&x) ;
    for(i=1;i<n;i++)
    {
        a=a*x ;
        f=i*f ;
        sum=sum+a/f ;
    }
    printf("%d",sum) ;
}
