#include<stdio.h>
void main()
{
    int i=0,j=0,a[100],b[100],n,m,k=0,c[100];
    printf("Enter the size of first set\n")  ;
    scanf("%d",&n) ;
    printf("Enter the first set\n")  ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    printf("Enter the size of second set\n")  ;
    scanf("%d",&m) ;
    printf("Enter the second set\n")  ;
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]) ;
    }
    printf("Third set is\n") ;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           c[k]=a[i]*b[j] ;
           printf("%d\n",c[k]) ;
           k++ ;
        }
    }
}
