#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("enter the value of a : ");
	scanf("%i",&a);
	
	printf("enter the value of b : ");
	scanf("%i",&b);
	
	c=a;
	a=b;
	b=c;
	
printf("after swapping :\n a=%d\n b=%d",a,b);	
	
}
