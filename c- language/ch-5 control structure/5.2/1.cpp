#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("enter first number  : ");
	scanf("%i",&a);
	
	printf("enter second number  : ");
	scanf("%i",&b);
	
	printf("enter third number  : ");
	scanf("%i",&c);
	
	if( a<=b && a<=c)
	{
		printf("this number is minimum :%i",a);
	}
	else if ( b<=a && a<=c)
	{
		printf("this number is minimum :%i",b);
}
	else{
	
		   printf("this number is minimum :%i",c);  
	   }
}
