#include<stdio.h>
int main()
{

    int m,n,k=0;
    printf("enter no. of element in array 1 and array 2 \n");
    scanf("%d %d",&m,&n);
    int a[m],b[n],c[10];
    printf("enter the array 1 \n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the array 2 \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
        }
    }
    printf("the intersection is \n");
    for(int i=0; i<k;i++)
    {
        printf ("%d",c[i]);
    }
    return 0;
}
