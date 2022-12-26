#include<stdio.h>
void main()
{
  float s, da ,hra, sum,total,net,pf ;
  int allow;
  char grade ;
  printf("enter basic salary") ;
  scanf("%f",&s) ;
  da=s*0.5 ;
  hra = s*0.2 ;
  pf=0.11*s ;
  printf("Enter the grade") ;
  fflush(stdin) ;
  scanf("%c",&grade) ;
  if(grade=='a')
  {
    allow==1700 ;
  }
  else if(grade=='b')
  {
    allow=1500 ;
  }
  else(grade=='c')
  {
    allow==1300 ;
  }
  total=s+da+hra+allow-pf ;
  printf("%f",total) ;
}
