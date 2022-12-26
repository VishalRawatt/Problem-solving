#include<stdio.h>
void main()
{
    int a[10] ;
    int i,j,sum=0,avg,n,max=0 ;
    printf("Enter the number of students =") ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        printf("Enter number of student %d =",i+1) ;
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i] ;
    }
    avg=sum/n ;
    printf("Average of %d students = %d\n",n,avg) ;
    printf("This code was written by Vishal Rawat roll no.=2100321530190") ;
}
