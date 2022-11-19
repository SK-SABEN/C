#include<stdio.h>
int main()
{
int n,r,c=0,d;
printf("enter a no.");
scanf("%d",&n);
d=n;
while (n>0)
{
	r=n%10;
	c=c+(r*r*r);
	n=n/10;
}
if(d==c)
printf("it is armstrong number");
else
printf("it is not armstrong number");
}
