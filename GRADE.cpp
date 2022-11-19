#include<stdio.h>
main()
{
int a,b,c,d;
printf("enter first sub marks ");
scanf("%d",&a);
printf("enter second sub marks ");
scanf("%d",&b);
printf("enter third sub marks ");
scanf("%d",&c);
printf("enter fourth sub marks ");
scanf("%d",&d);
if (a<35 || b<35 || c<35)
{
printf ("you are failed");
}
else
{
	printf("you are passed");
printf("\n");
float p;
p= (a+b+c+d)/4;
if (p>=90)
printf("your grade is A");
else if (p>=75)
printf("your grade is B");
else if (p>=60)
printf("your grade is C");
else if(p>=35)
printf("your grade is D");
else 
printf("your grade is F");
}
}
