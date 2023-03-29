
//WAP to convert years into days and days into years.....

#include<stdio.h>
void main()
{
	
	float days,year,ans;
	
	printf("enter number of year : ");
	scanf("%f",&year);
	
	
	ans=year*365;
	
	printf("days : %f",ans);
	
	printf("\n");
	
	printf("\nenter number of days : ");
	scanf("%f",&days);
	
	ans=days/365;

	printf("year : %f",ans);
	
}