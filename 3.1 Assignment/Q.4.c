
//WAP to find simple interest......

#include<stdio.h>
void main()
{
	int p,r,t,si;
	
	printf("enter value of p : ");
	scanf("%d",&p);
	
	printf("enter value of r : ");
	scanf("%d",&r);
	
	printf("enter value of t : ");
	scanf("%d",&t);
	
	si=p*r*t/100;
	
	printf("simple intrest : %d",si);
	
}