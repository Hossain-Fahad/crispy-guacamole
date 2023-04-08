#include<stdio.h>
int main()
{
int x,y,sum,subst,mult;
float div;
scanf("%d%d",&x,&y);
sum=x+y;
subst=x-y;
mult=x*y;
div=x*1.0/y;

printf("%d+%d=%d\n",x,y,sum);
printf("%d-%d=%d\n",x,y,subst);
printf("%d*%d=%d\n",x,y,mult);
printf("%d/%d=%0.2f",x,y,div);
}