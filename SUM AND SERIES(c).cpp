#include<stdio.h>
#include<math.h>
int main()
{
int a,i,n,x;
float b,c=0.00;
printf("enter a no.of terms ");
scanf("%d",&n);
printf("enter x ");
scanf("%d",&x);
for (i=1;i<=n;i++)
{
	c=c+b;
	b=(pow(x,i))/i;
	printf("%f\n",b);
}
printf("sum of series is %f",c);
}