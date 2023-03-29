
//Write a program to make Simple calculator (to make addition, subtraction,multiplication, division and modulo)....

#include<stdio.h>
void main()
{
	
 int a,b,ans;
 
 printf("enter value of a : ");
 scanf("%d",&a);
 
 printf("enter value of b : ");
 scanf("%d",&b);
 
 printf("value of a : %d\n",a);
 printf("value of b : %d",b);
  
 ans=a+b;
 printf("\nSUM IS : %d",ans);
 
 ans=a*b; 
 printf("\nMOD IS : %d",ans);
 
 ans=a/b;
 printf("\nDIV IS : %d",ans);
  
 ans=a-b;
 printf("\nSUB IS : %d",ans);
 
}
