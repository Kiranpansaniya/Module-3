
//WAP to print factorial of given number......

#include<stdio.h>
void main()
{
	int i,fact=1,n;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	
	printf("factorial of given number :%d",fact);
}
