#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,r1,c1,r2,c2,c[10][10] ;
    printf("Enter the no. of rows in matrix 1=") ;
    scanf("%d",&r1) ;
    printf("Enter the no. of columns in matrix 1=") ;
    scanf("%d",&c1) ;
    printf("Enter array elements of matrix 1=") ;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]) ;
        }
    }
    printf("Enter the no. of rows in matrix 2=") ;
    scanf("%d",&r2) ;
    printf("Enter the no. of columns in matrix 2=") ;
    scanf("%d",&c2) ;
    printf("Enter array elements of matrix 2=") ;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]) ;
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j] = a[i][j]*b[j][i] ;
            printf(" %d ",c[i][j]) ;
        }
        printf("\n") ;
    }
    }

