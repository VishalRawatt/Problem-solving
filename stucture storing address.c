#include<stdio.h>
void main()
{
    struct stu
    {
        char name[20] ;
        int age ;
    };
    struct stu s1,s2,s3,s4,*s ;
    s=&s3 ;
    printf("Enter the details \n") ;
    scanf("%s %d",&(s->name),&(s->age)) ;
    printf("%s \n %d\n",(s->name),(s->age)) ;
    printf("Address of s3= %u and address of *s = %u\n",&s3,&s) ;
    printf("Value stored in s =%u\n",s) ;
}
