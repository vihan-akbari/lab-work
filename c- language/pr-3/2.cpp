#include<stdio.h>

main()
{
	int num,i=0;
	
	printf("enter any number : ");
	scanf("%i",&num);
	
	if(num==0)
	{
		i=1;
	}
	else
	{
		while(num!=0)
		{
			num=num/10;
			i++;
		}
	}
	
	printf("the total number of digits are : %i",i);	
}
