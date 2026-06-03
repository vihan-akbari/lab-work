#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("enter the first number : ");
	scanf("%i",&a);
	
		printf("enter the second number : ");
	scanf("%i",&b);
	
		printf("enter the third number : ");
	scanf("%i",&c);
	
	c=(a<b)?((a<c)?a:c):((b<c)?b:c);
	printf("\nthe minimum value is : %d\n",c);	
}
