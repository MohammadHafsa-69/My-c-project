#include <stdio.h>
void main() 
{
    int x,y,a,b,i;
    printf(" enter the values of x,y");
    scanf("%d %d ",&x,&y);
    printf("enter values a and b");
    scanf("%d%d",&a,&b);
    for(i=x; i<=y; i++)
    {
        if(i%a==0&&i%b==0)

            printf("%d\n",i);
    }
}