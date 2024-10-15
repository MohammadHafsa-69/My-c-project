#include <stdio.h>
void main()
{
 int sum=0,num,i;
 printf("enter the value num");
 scanf("%d",&num);
 for(i=1;i<num;i++)
 {
 if(num%i==0)
   sum=sum+i;
  }
 if(sum==num)
 {
  printf(" the number is perfect number");
 }
 else {
 printf("the number is not a perfect number");
 }
 }