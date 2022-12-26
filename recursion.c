#include<stdio.h>
int main()
{
    int n,f ;
    printf("Enter the number:") ;
    scanf("%d",&n) ;
    f=fact(n) ;
    printf("%d",f) ;
}
fact(int n)
{
    if(n>0)
    {
        printf("%d ",n) ;
        n=n-5  ;
    }
    else
        {
            printf("%d",n) ;
            n=n+5 ;
        }
    return(fact(n)) ;
}
