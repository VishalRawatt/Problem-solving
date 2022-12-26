#include<stdio.h>
void main()
{
    int n,f;
    printf("enter  number \n") ;
    scanf("%d",&n) ;
    f=fun(n) ;
    printf("sum of numbers is %d",f) ;
}
void fun(int a)
{
    int sum=0 ;
    a=a%10 ;
    sum=sum + a ;
    a=a/10 ;
    return fun(a) ;
}
