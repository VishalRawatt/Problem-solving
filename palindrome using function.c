#include<stdio.h>
void main()
{
    int s1[10],s2[10],i=0,s=0 ;
    printf("Enter first string")  ;
    scanf("%s",&s1) ;
    printf("Enter second string") ;
    scanf("%s",&s2) ;
    while(i<'\0')

}
int palin(char *p)
{
    char *q ;
    q=p ;
    while(*q!='\0')
    {
        q++ ;
    }
    q-- ;
    while(*p==*q && p<q)
    {
        p++ ;
        q-- ;
    }
    if(p>=q)
    {
        return(1) ;
    }
    else
        return(0) ;
}
