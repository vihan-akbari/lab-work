#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("enter any number : ");
	scanf("%i",&a);
	
		printf("enter any number : ");
	scanf("%i",&b);
	
		printf("enter any number : ");
	scanf("%i",&c);
	
		printf("enter any number : ");
	scanf("%i",&d);
	
	if( a>b && a>c && a>d)
	{
		printf("this munber is maximum : %i ",a);
 }
	 else if (b>a && b>c && b>d)
	 {
	 	printf("this number is maximum : %i ",b);
	 }
	else if (c>a && c>b && c>d)
	{
		printf("this number is maximum : %i ",c);
 }
	else
	{
		printf("this number is maximum : %i  ",d);
	}
	
	
	
	
	
}
