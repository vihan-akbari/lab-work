#include<stdio.h>

main()
{
	int i,j,num=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",num);
			num++;
		}
		printf("\n");
	}
}
