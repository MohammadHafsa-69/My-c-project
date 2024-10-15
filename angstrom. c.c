#include <stdio.h>
#include <math.h>
void main() 
{
    int n,r,i,v,sum, c = 0 ;
    printf("enter the value:");
    scanf("%d",&n);
    i=n;
    v=t;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    printf("no of digits %d\n",c);
    for (sum = 0; i>0; i=i/10) {
        r = i%10 ;
        sum=sum+pow(r,c);
    }
    printf("%d\n",sum);
    if(sum==v) {
        printf("the number is angstrom");
    }
    else
        printf(" the number is not angstrom");
}