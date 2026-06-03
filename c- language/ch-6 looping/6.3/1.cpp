#include<stdio.h>

main()
{
	int n,v=0;
	
	printf("enter any number : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
	
	v+=i;
    
	}
	printf("the sum of number are : %d\n",v);
}
