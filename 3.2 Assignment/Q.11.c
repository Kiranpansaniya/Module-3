
//Write a program to find out the max from given number.....

#include<stdio.h>
void main()
{
	int i,n,num,max=0;
	
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\nenter num : ");
		scanf("%d",&num);
			 
		if(num>max)
		{
			max=num;
		}
	}
	printf("max number is : %d",max);
}