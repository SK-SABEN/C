#include<stdio.h>
#include<math.h>
main()
{

int a,b,c,d;
printf("enter first no.");
scanf("%d",&a);
printf("enter second no.");
scanf("%d",&b);
printf("enter third no.");
scanf("%d",&c);
d=(b*b-4*(a*c));
float x,y;
x= (-b+sqrt(d))/(2*a);
y=(-b-sqrt(d))/(2*a);
printf("quadratic eqn is %f",x);
printf("\n");
printf("quadratic eqn is %f",y);
}