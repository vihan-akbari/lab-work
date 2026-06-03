#include<stdio.h>

main()
{
	float p,r,t,i;
	
	printf("enter principal amount : ");
    scanf("%f",&p);	
    
    printf("enter interest rate : ");
    scanf("%f",&r);	
	
	printf("enter time of loan : ");
    scanf("%f",&t);	
	
	i=(p*r*t)/100;
	
	printf("\n the simple interest is : %.2f\n",i);
	
	
	
	
	
	
}
