
//WAP to print Fibonacci series up to given numbers...... 

#include<stdio.h>
void main()
{
	int i,n,t1=0,t2=1,t3;
	
	
	printf("enter the number of terms : ");
	scanf("%d",&n);
	
	//printf("fibonacci series :%d %d",t1,t2);
	
	for(i=1;i<=n;i++)
	{
		printf("%d",t1);
		t3=t1+t2;
		t1=t2;
		t2=t3;
		
	}
}