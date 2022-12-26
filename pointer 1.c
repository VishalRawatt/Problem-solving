#include<stdio.h>
int* square() ;
void main()
{
    int *p;
    p=square() ;
    for(int i=0;i,5;i++)
    {
        printf("%d \t",*p) ;
        p++ ;
    }
}
int* square()
{
    int i ;
    static int a[5] = {10,20,30,40,50} ;
    for(i=0;i<5;i++)
        a[i]= a[i] * a[i] ;
    return &a[0] ;
}
