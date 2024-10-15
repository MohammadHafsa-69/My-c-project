#include<stdio.h>
 void main()
{
int num,sum=0,rem,i;

printf("enter  a number:");
scanf("%d",&num);
i=num;
while(num>0)
{
rem=num%10;
sum=sum*10+rem;
num/=10;
}
if(i==sum)
{
printf("it is a palindrome %d",i);
}
else
{
printf("it is not a palindrome %d",i);
}

}