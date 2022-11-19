#include<stdio.h>
main()
{
	int h,c=0,a,d,i;
	printf("enter hour worked ");
	scanf("%d",&h);
	if (h>8)
	{
	for (i=h;i>8;i--)
	{
	c=c+1;
	}
	a=c*120+8*100; 
	printf("total salary = %d",a);
	}
	else
	{
	a=h*100;
	printf("total salary = %d",a);
	}
}
