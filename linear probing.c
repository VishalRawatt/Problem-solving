#include<stdio.h>
void main()
{
    int i,n,temp=0,a[10],b[10],c=11 ;
    printf("Enter the number of elements in array") ;
    scanf("%d",&n) ;
    printf("Enter array elements") ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i]%c ;
        if(b[i])
    }
}
