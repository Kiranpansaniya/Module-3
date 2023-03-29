
//WAP to take 10 no. Input from user and find out.....
//1. How many Even numbers are there 
//2. How many odd numbers are there 
//3. Sum of even numbers 
//4. Sum of odd numbers WAP to print table up to given numbers

#include<stdio.h>
void main()
{
	int a[10],n;
	int i,sum=0,odd=0,even=0;
	int SUM_ODD=0,SUM_EVEN=0;
	
	printf("\n enter the number of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nNumber-%d : ",i+1);
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
		{
			even++;
			SUM_EVEN +=a[i];
		}
		else
		{
			odd++;
			SUM_ODD +=a[i];
		}
		
	}
		printf("\nsum of even number = %d\nsum of odd number = %d\n",SUM_EVEN,SUM_ODD);
		printf("\ntotal even number is = %d",even);
		printf("\ntotal odd number is = %d",odd);
	
}