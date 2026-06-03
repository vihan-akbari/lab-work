#include<stdio.h>

main()
{
	char num ='a';
	
	printf("the alphabets are : ");
	
	do{
		printf("%c",num);
		num=num+4;
		if(num<='z')
		{
			printf(",");
		}
			}while(num<='z');
}
