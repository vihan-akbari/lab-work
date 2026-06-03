#include<stdio.h>

main()
{
	int radius;
	float n;
	
	printf("enter radius : ");
	scanf("%i",&radius);
	
	n=radius*radius;
	
	printf("%.2f",3.14159*n);	
}
