#include<stdio.h>

main()
{
	int n;
	
	printf("enter any number : ");
	scanf("%d",&n);
	
	for(int i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,i*n);
	}
}
