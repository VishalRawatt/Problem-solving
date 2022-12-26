#include<stdio.h>
#include<math.h>
int main(void)
{
    int n= 3 ;
    char source='A' ,dest ='B' ,temp='C' ;
    //toh(n,'A','B','C') ;
    tofh(n,source,temp,dest) ;
    return 0 ;
}
void toh(int n,char a,char b,char c)
{
    if(n>0)
    {
        toh(n-1,a,c,b) ;
        printf("move disk from %c to %c\n",a,b) ;
        toh(n-1,c,b,a) ;
    }
}
void tofh(int ndisk, char source, char temp, char dest)
{
    if(ndisk==1)
    {
        printf("move disk %d from %c to %c\n",ndisk,source,dest) ;
    }
    else
    {
        tofh(ndisk-1,source,dest,temp) ;
        printf("move disk %d from %c to %c\n",ndisk,source,dest) ;
        tofh(ndisk-1,temp,source,dest) ;
    }
}
