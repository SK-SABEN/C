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
	c=c*10+r;
	n=n/10;
}
if(d==c)
printf("it is pallindrome number");
else
printf("it is not pallindrome number");
}
