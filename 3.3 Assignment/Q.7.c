
//WAP to reverse a string and check that the string is palindrome or not.....

#include<stdio.h>
void main()
{
	char name[10],d,c;
	int i,j,l=0;
		
	printf("enter name : ");
	scanf("%s",name);
	
	for(i=0;name[i]!='\0';i++)
	{
		l=l+1;
		printf("%c",name[i]);
		d=name[i];
	}
	printf("\nlength is : %d\n",l);
	
		for(i=i-1;i>=0;i--)
	{
		printf("%c",name[i]);
		c=name[i];
	}
	if(d==c)
	{
		printf("\nWord is palidrome");
	}
	else
	{
		printf("\nWord is not palidrome");
	}
}