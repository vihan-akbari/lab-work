#include <stdio.h>

main()
{
	int i=1,n;
	
	printf("enter any number : ");
	scanf("%d",&n);
	
	do
	{
		printf("%i\t",i++);
	}while(i<=n);
}
