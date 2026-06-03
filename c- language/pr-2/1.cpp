#include <stdio.h>

main()
{
	int n;
	 
	
	printf("enter your result : ");
	scanf("%i",&n);
    
	
const char* i=(n>=90)?"A":
	      (n>=80)?"a":
		  (n>=70)?"B":
		  (n>=60)?"b":
		  (n>=50)?"c":
		  (n>=40)?"c":
		  (n>=30)?"F":"F";	
		  
		  printf("your grade is : ");
		  
		  
		  (i =="A")?printf("A1.\n") :
		  (i=="a")?printf("A2.\n") :
		  (i=="B")?printf("B1.\n") :
		  (i=="b")?printf("B2.\n") :
		  (i=="C")?printf("C1.\n") :
		  (i=="c")?printf("C2.\n") :printf("F.\n");
		  
		  switch(*i)
		  {
		      case 'A':
			  case'a':
			  printf("excellent work!");
			  
			  break;
			  
			  case 'B':
			  case'b':
			  printf("well done.");
			  
			  break;
			 
			 case 'c':
			  case'C':
			  printf("good job.");
			  
			  break;
			  
			  case'F':
			  printf("sorry,you failed.");
			  break;
			   	
		  }
		  
		  if(i!="F")
		  {printf("congratulations! you are eligible for the next level.\n");
			  }	
			  else{
			  	printf("please try again next time\n");
			  }
}
