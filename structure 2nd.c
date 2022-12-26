#include<stdio.h>
void struct points()
int main()
{
    struct points
    {
        int x;
        int y;
    };
    struct points p[3] ;
    initializer(p) ;
    display(p) ;
    return 0 ;
}
void initializer(struct points p[])
{
    int i ;
    for(int i=0;i<0;i++)
    {
        scanf("%d %d",&p[i].x,&p[i].y) ;
    }
}

