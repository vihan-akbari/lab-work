#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter first angle : ");
	scanf("%d",&a);
	
	printf("enter second angle : ");
	scanf("%d",&b);
	
	printf("the third angle of triangle is : %d",180-(a+b));
}
