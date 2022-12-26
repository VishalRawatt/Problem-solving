#include<stdio.h>
void main()
{
    int m, l,h, i,n,j,A[100][100];
    printf("enter value of n ");
    scanf("%d",&n);
    m=n;g
    l=0;
    h=2*n-1;
    while (n>0)
    {
        for(i=l;i<h;i++)
        {
            for(j=l;j<h;j++)
            {
                if(i==l || i==h-1 || j==l || j==h-1)
                {
                A[i][j]=n;
                }
            }
        }
        l++;
        h--;
        n--;
    }
    l=0;
h=2*m-1;

for(i=l;i<h;i++)
{
    for(j=l;j<h;j++)
    {
        printf("%d",A[i][j]);
    }
    printf("\n");
}

}
