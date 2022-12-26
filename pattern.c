#include<stdio.h>
void main()
{
    int i,j ;
    for(i=1;i<6;i++)
        if(i<4)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ") ;
        }
        for(j=1;j<=7-(2*i);j++)
        {
            printf("*") ;
        }
        printf("\n") ;
    }
    else
    {
        for(j=1;j<6-i;j++)
        {
            printf(" ") ;
        }
        for(j=1;j<=(2*i)-5;j++)
        {
            printf("*") ;
        }
        printf("\n") ;
    }
}
