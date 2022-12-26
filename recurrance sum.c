 #include<stdio.h>
int sum(int n);
int main()
{
int n,p;
printf("Enter a number") ;
scanf("%d",&n);
p=sum(n) ;
printf("%d",p) ;
return(0) ;
}
int sum(int n)
{
    int r ;
    if(n==1)
    return 1 ;
    else
    r=n+sum(n-1) ;
}
