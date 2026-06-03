#include<stdio.h>

main()
{
	int a;
	
	printf("enter any number : ");
	scanf("%i",&a);
	
	if(a==0)
	{
	   printf("the number is neutral : %i ",a);
	}
	else
	{
		if(0>a)
		{
			printf("the number is negative : %i",a);
		}
		else{
			   printf("the number is positive : %i",a);
		    }
	}
}
