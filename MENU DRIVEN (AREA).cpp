#include<stdio.h>
main()
{
	int n;
	printf("TO CALCULATE AREA");
	printf("\n");
	printf("CLICK 1 FOR CIRCLE");
	printf("\n");
	printf("CLICK 2 FOR RECTANGLE");
	printf("\n");
	printf("CLICK 3 FOR TRIANGLE");
	printf("\n");
	printf("CLICK 4 FOR SQUARE");
	printf("\n");
	printf("CLICK A NUMBER FROM 1 TO 4: ");
	scanf("%d",&n);
	printf("\n");
	int r,l,b,h,w,c;
	float a;
	switch(n)
	{
		case 1:
			printf("ENTER RADIUS OF CIRCLE ");
			scanf("%d",&r);
			a = 3.142857*r*r;
			printf("\n");
			printf("AREA OF CIRCLE IS %f",a);
			break;
		case 2:
			printf("ENTER LENGTH OF RECTANGLE ");
			scanf("%d",&c);
			printf("ENTER WIDTH OF RECTANGLE ");
			scanf("%d",&w);
			a =c*w;
			printf("\n");
			printf("AREA OF RECTANGLE IS %f",a);
			break;
		case 3: 
			printf("ENTER BASE ");
			scanf("%d",&b);
			printf("ENTER HEIGHT ");
			scanf("%d",&h);
			a=0.5*b*h;
			printf("\n");
			printf("AREA OF TRIANGLE IS %f",a);
			break;
		case 4:
			printf("ENTER LENGTH OF SQUARE ");
			scanf("%d",&l);
			a=l*l;
			printf("\n");
			printf("AREA OF SQUARE IS %f",a);
			break ;
		default:
			printf("PLEASE CLICK A NUMBER FROM 1 TO 4");
			break;
}	
}

