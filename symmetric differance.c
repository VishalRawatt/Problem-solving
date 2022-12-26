#include <stdio.h>
int main()
{
    int m,n,i,j,k=0,l=0,a[10],b[10],c[10],d[10],u[10],p=0,q=0;
    printf("enter the size of set  A \n");
    scanf("%d", &m);
    printf("enter the size of set B \n");
    scanf("%d", &n);
    printf("insert the element in set A 1\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("insert the element in set B\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        if(a[i]==b[j])
        {
            break ;
        }
        if(j==n)
           {
            for(l=0;l<k;l++)
        {
            if(c[l]==a[i])
                break ;
        }
        if(l==k)
        {
            c[k]==a[i] ;
            k++ ;
        }
    }
        }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if(b[i]==a[j])
             break ;
        if(j==m)
        {
        for(l=0;l<p;l++)
        {
            if(d[l]==a[i])
                break ;
        }
        if(l==p)
        {
            d[p]==b[i] ;
            p++ ;
        }
    }
        }
    for(i=0;i<k;i++)
    {
        for(j=0;j<q;j++)
        {
            if(u[j]==c[i])
                break ;
            if(j==q)
                for(l=0;l<p;l++)
            {
                if(d[l]==b[i])
                    break ;
            }
        if(l==p)
        {
            d[p]=b[i] ;
            p++ ;
        }
        }
    }
    for(i=0;i<q;i++)
    {
        for(j=0;j<q;j++)
        {
            if(u[j]==c[i])
                break ;
        }
        if(j==q)
        {
            u[q]=c[i] ;
            q++ ;
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            if(u[j]==d[i])
                q++ ;
        }
        if(j==q)
        {
            u[q]=d[i] ;
            q++ ;
        }
    }
    }
    printf("Symmetric difference =") ;
    for(i=0;i<q;i++)
    {
        printf("%d",u[i]) ;
    }
}
