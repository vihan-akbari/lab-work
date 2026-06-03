#include<stdio.h>

main()
{
	int i,n;
	
	printf("enter the first year : ");
	scanf("%d",&i);
	
	printf("enter second year : " );
	scanf("%d",&n);
	
	while(i<=n)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			printf(" the leap year is : %d\n",i);
		
	    }
		
		i++;	
    } 
	
	
}
