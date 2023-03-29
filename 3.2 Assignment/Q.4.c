
//1. Monday to Sunday using switch case 


#include<stdio.h>
void main()
{
	int days;
	
	printf("enter days : ");
	scanf("%d",&days);
	
	switch(days)
	{
		case 1:
			
			printf("Sunday");
			break;
			
			case 2:
				
				printf("Monday");
				break;
				
				case 3:
					
					printf("Tuesday");
					break;
					
					case 4:
						
						printf("wednesday");
						break;
						
						default:
						
						printf("enter valid number");
	}
}