
//WAP to find factorial using recursion.......

#include<stdio.h>
int factnum(int);

void main()
{
	int n,ans;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	ans=factnum(n);
	printf("factorial num = %d",ans);
}
int factnum(int k)
{
	int fact=1,D;
	
	if(k==0)
	{
		return 1;
	}
	else
	{
		D=k*factnum(k-1);
		
		return D;
	}
}