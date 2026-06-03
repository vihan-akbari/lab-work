#include<stdio.h>

main()
{
	int n,i1=0,i2=1,r=0;
	
	printf("enter any digit : ");
	scanf("%i",&n);
	
	
	
	for(int m=1;m<=n;++m){
	
	if(m==1)	
	{
		printf("%d",i1);
		continue;
	}
	if(m==2)
	{
		printf("%d",i2);
		continue;
	}
	r=i1+i2;
	i1=i2;
	i2=r;
	
	printf(",%d",r);
    }

    printf("\n");
}
