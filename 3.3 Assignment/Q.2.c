
//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven).......

#include<stdio.h>
void main()
{
	float a,b,c;
	char ch;

	
	printf("enter value of a : ");
	scanf("%f",&a);
	
	printf("enter value of b : ");
	scanf("%f",&b);
	
	printf("enter character : ");
	scanf(" %c",&ch);
	
	
	switch(ch)
	{
		case '+':
		
			c=a+b;
			
			printf("Addition = %f",c);
			break;
			
			case '-':
		
			c=a-b;
			
			printf("Subtraction = %f",c);
			break;
			
			case '/':
		
			c=a/b;
			
			printf("Division  = %f",c);
			break;
			
			case '*':
		
			c=a*b;
			
			printf("Multiplication = %f",c);
			break;
			
			case '%':
		
			c='a%b';
			
			printf("Modulo = %f",c);
			break;
			
			
			default:
			break;	
	
	}
}