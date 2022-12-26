#include<stdio.h>
int main(){
int num1,num2,temp,k=0,len=0;
printf("enter the number of elements in set1 and set2 ");
scanf("%d %d",&num1,&num2);
int arr1[num1];
int arr2[num2];
int arr3[num1+num2];
for(int i=0;i<num1;i++){
printf("enter element number %d ",i+1);
scanf("%d",&arr1[i]);
}
for(int i=0;i<num2;i++){
printf("enter element number %d ",i+1);
scanf("%d",&arr2[i]);
}
for(int i=0;i<num1;i++){
arr3[k]=arr1[i];
k++;
}
for(int i=0;i<num2;i++){
arr3[k]=arr2[i];
k++;
}
for(int i=0;i<num1+num2;i++){
for(int j=i+1;j<num1+num2;j++){
if(arr3[i]>arr3[j]){
temp=arr3[i];
arr3[i]=arr3[j];
arr3[j]=temp;
}
}
}
k=0;
for(int i=0;i<(num1+num2)-1;i++){
if(arr3[i]!=arr3[i+1]){
arr3[k++]=arr3[i];
len++;
}
}
arr3[k++]=arr3[(num1+num2)-1],len++;
for(int i=0;i<len;i++){
printf("%d ",arr3[i]);
}
return 0;
}
