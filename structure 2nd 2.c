#include<stdio.h>
void main()
{
    struct stu
    {
        char name[20] ;
        int age ;
        int marks ;
    };
    struct stu s1,s2 ;
    printf("Enter the s2 details \n") ;
    scanf("%s %d %d",s2.name,&s2.age,&s2.marks) ;
    printf("NAME =%s \n AGE=%d \n MARKS=%d\n",s2.name,s2.age,s2.marks) ;
    printf(sizeof(struct stu)) ;
}
