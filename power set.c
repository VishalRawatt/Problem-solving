#include<stdio.h>
#include<math.h>
void main()
{
    int temp,i,j,n,a[100] ;
    printf("Enter the value of n:") ;
    scanf("%d",&n) ;
    printf("Enter array elements=") ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<pow(2,n);i++)
    {
        temp=i ;
        printf("{") ;
        for(j=0;j<n;j++)
        {
            if(temp%2==1)
                printf("%d ",a[j]) ;
            temp= temp/2 ;
        }
        printf("}") ;
    }
}

