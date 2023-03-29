
//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice...... 

#include<stdio.h>
void main()
{
	int a[5],i,j,temp=0;
	
	for(i=0;i<5;i++)
	{
		printf("enter the array of element a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}	
	printf("\nAscanding order no :");
	
	for(i=0;i<5;i++)
	{
		
		printf("%d \n",a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}	
	printf("\nDscanding order no :");
	
	for(i=0;i<5;i++)
	{
		
		printf("%d ",a[i]);
	}
}