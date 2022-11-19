#include<stdio.h>
main()
{
	int n,a;
	printf("CLICK 1 TO GET REVERSE NO.");
	printf("\n");
	printf("CLICK 2 TO COUNT NO. OF DIGITS");
	printf("\n");
	printf("CLICK 3 TO GET SUM OF DIGITS");
	printf("\n");
	printf("CLICK 4 TO FIND GIVEN NO. EVEN OR NOT");
	printf("\n");
	printf("CLICK A NUMBER FROM 1 TO 4: ");
	scanf("%d",&n);
	printf("\n");
	int c=0,r;
	
	switch(n)	{
case 1:
	printf("ENTER SOME NUMBERS ");
	scanf("%d",&a);
	printf("\n");
			while(a>0)
		{
			r=a%10;
			c=c*10+r;
			a=a/10;
		}
		printf("REVERSE OF THE NUMBER IS %d",c);
	
			break;
		case 2:
	printf("ENTER SOME NUMBERS ");
	scanf("%d",&a);
	printf("\n");
			while(a>0)
		{
			r=a%10;
			c=c+1;
			a=a/10;	
		}
		printf("TOTAL NUMBER OF DIGIT IS %d",c);
			
			break;
		case 3:
	printf("ENTER SOME NUMBERS ");
	scanf("%d",&a);
	printf("\n"); 
			while(a>0)
		{
			r=a%10;
			c=c+r;
			a=a/10;	
		}
		printf("SUM OF THE DIGITS IS %d",c);
			break;
		case 4:
	printf("ENTER SOME NUMBERS ");
	scanf("%d",&a);
	printf("\n");
			if (a%2==0)
			printf("IT IS EVEN NUMBER");
			else 
			printf("IT IS ODD NUMBER");
			break ;
		default:
			printf("PLEASE CLICK A NUMBER FROM 1 TO 4");
			break;
}	
}
