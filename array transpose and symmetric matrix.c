#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],i,j,r,c ;
    printf("enter number of rows and columns of matrix\n") ;
    scanf("%d%d",&r,&c) ;
    printf("enter the matrix\n") ;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]) ;
        }
        printf("\n") ;
    }
    printf("transpose of matrix is\n") ;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[j][i]) ;
        }
        printf("\n") ;
    }
    printf("This code is written by Vishal Rawat roll no. 2100321530190") ;
}
