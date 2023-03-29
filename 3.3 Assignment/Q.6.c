
//WAP Find out length of string without using inbuilt function....

#include<stdio.h>
main()
{
	char name[10];
	int i,l=0;
	
	
	printf("enter the name : ");
	scanf("%s",name);
	
	for(i=0;name[i]!='\0';i++)
	{
		l=l+1;
		
	}
	
	printf("length of string = %d",l);
	
}