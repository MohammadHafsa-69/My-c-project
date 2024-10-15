#include<stdio.h>
main()
{
float c,f;

printf("enter the value f:");
scanf("%f",&f);
c=((f-32)*5/9);
printf("temperature in celsius is %f",c);
printf("enter value c:");
scanf("%f",&c);
f=((c+32) *9/5) ;
}