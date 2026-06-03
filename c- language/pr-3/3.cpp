#include<stdio.h>

main()
{
	int n,f,l,s;
	
	printf("enter any digit : ");
	scanf("%i",&n);
	
	l=n%10;
	
	f=n;
	while(f>=10)
	{
	f=f/10;
	}
		s=f+l;
	printf("the answer is : %i",s);
}
