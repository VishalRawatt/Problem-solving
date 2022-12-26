#include<stdio.h>
void main()
{
    int n=0,f=0;
    printf("enter the number=") ;
    scanf("%d",&n) ;
    f=fact(n) ;
    printf("Factorial=",f) ;
}
int fact(int n)
{
    if(n==0||n==1)
    {
        return(1);
    }
    else
        return(n*fact(n-1)) ;
}
