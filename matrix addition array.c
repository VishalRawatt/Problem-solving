#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],i,j,r1,c1,r2,c2,sum=0,c[100][100] ;
    printf("enter number of row and column of first matrix\n") ;
    scanf("%d%d",&r1,&c1) ;
    printf("enter the first matrix\n") ;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]) ;
        }
        printf("\n") ;
    }
    printf("enter number of row and column of second matrix\n") ;
    scanf("%d%d",&r2,&c2) ;
    printf("enter the second matrix\n") ;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d ",&b[i][j]) ;
        }
        printf("\n") ;
    }
    printf("first matrix =\n") ;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]) ;
        }
        printf("\n") ;
    }
    printf("second matrix=\n") ;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]) ;
        }
        printf("\n") ;
    }
    if(r1==r2 && c1==c2 )
    {
        printf("sum of matrix is =\n") ;
        for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
               c[i][j] = a[i][j] + b[i][j] ;
               printf("%d ",c[i][j]) ;
        }
        printf("\n") ;
    }
    }
}
