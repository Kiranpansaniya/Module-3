	
//Write a program to find out the max number from given array using function......

#include<stdio.h>
int maxmimnum();
void main()
{
	maxmimnum();
}
int maxmimnum()
{
	int num[5],max=0,i;
	

	for(i=0;i<5;i++)
	{
		printf("enter number of num[%d] : ",i);
		scanf("%d",&num[i]);
		
		if(num[i]>max)
		{
			max=num[i];
		}
	}
		printf("maximum num is : %d",max);
		return max;
}