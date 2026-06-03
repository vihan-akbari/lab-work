#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter the value of a : ");
	scanf("%i",&a);
	
	printf("enter the value of b : ");
	scanf("%i",&b);
	
	
	a=a*b;
	b=a/b;
	a=a/b;
	
printf("after swapping :\n a=%d\n b=%d",a,b);	

	
}
