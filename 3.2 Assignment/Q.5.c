
//2. Vowel or Consonant using switch case.......

#include<stdio.h>
void main()
{
	char ch;
	
	
	printf("enter a character : ");
	scanf("%c",&ch);
	
	
	switch(ch)
	{
		case 'a' :
			case 'e' :
				case 'i' :
					case 'o' :
						case 'u':
							
		printf("%c is vovel",ch);
		break;
			
		default:
			
			printf("%c is consonant",ch);
			
	}
}