#include<stdio.h>
int main()
{
char a;
int c;
printf("enter a character ");
scanf("%c",& a);
printf("ascii value is %d",a);
printf("\n");

if (a>=32 && a<=37  || a>=58 && a<=64 || a>=123 && a<=126  )
printf("It is special character");
else if (a>=48 && a<=57 )		
printf("it is digit ");
else if (a>=65 && a<=90 )	
printf("it is uppercase letter");
else if(a>=97 && a<=122)
printf("it is lowecase letter");
}
