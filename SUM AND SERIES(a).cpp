#include<stdio.h>
#include<math.h>
int main()
{
int a,c=0,i,b,n;
printf("enter a no.of terms ");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
	b=pow(2,i)-1;
	c=c+b;
	printf("%d\n",b);
}
printf("sum of series is %d",c);
}
