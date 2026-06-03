#include<stdio.h>

main()
{
	int c,sc;
	
	printf("press 1 for english \n");
	
	printf("press 2 for hindi \n");
	
	printf("press 3 for gujrati\n ");
	
	printf("enter your choice : %d",c);
	scanf("%d",&c);
	
	switch (c)
	{
		case 1:
			
			printf("\npress 1 for internet recharge \n");
			
            printf("\npress 2 for top-up recharge \n");
			
			printf("\npress 3 for special recharge \n");	
			
			printf("\nenter your choice : %i \n",sc);
			
			scanf("%d",&sc);
			
			switch(sc)
			case 1:
				printf("apne safaltapurvak internet recharge kar liya he.\n ");
			break;
			case 2:
				printf("you have succesfully done a top-up recharge.\n");
			break;
			case 3:
			    printf("apne safaltapurvak speacial recharge kar liya he.\n");
			break;
			
			default:
			    printf("invalide choice !\n");
			    
	}
	
	
	
	switch(sc){
	
	
	     case 2:
		printf("\n internet recharge ke liye 1 dabaiye\n");
		
		printf("top-up recharge ke liye 2 dabaiye\n");
		
		printf("special recharge ke liye 3 dabaiye\n");
		
		printf("enter your choice : %d");
		
		scanf("%d",&sc);

	    switch(sc){
		
		
		
	    
		
	    
	    	case 1:
	    		printf("\napne safaltapurnak internet recharge kar liya he.\n");
	    
			
				case 2:
	    		printf("\napne safaltapurvak top-up recharge kar liya he.\n");
	    	
			
				case 3:
	    		printf("\napne safaltapurvak speacial recharge kar liya he.\n");
		
			default:
			    printf("\namanay vikalp!\n");
				
				break;	
		
		
		}
	}
		
	
		switch(sc){
		
		
		case 3:
		printf("\ninternet recharge mate 1 dabavo\n");
		
		printf("\ntop-up recharge mate 2 dabavo\n");
		
		printf("\nspeacial recharge mate 3 dabavo\n");
		
		printf("enter your choice : ");
		
		scanf("%d",&sc);
	    
		 
	    switch(sc){
		
	    
	    	case 1:
	    		printf("\ntame safaltapurvak internet rechage karyu che.\n");
	    	break;
			
				case 2:
	    		printf("\ntame safaltapurvak top-up rechage karyu che.\n");
	    	break;
			
				case 3:
	    		printf("\ntame safaltapurvak special rechage karyu che.\n");
	    	break;
			
			default:
			    printf("\namayan vikalp!\n");
				
				break;	
		
		}
}
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
