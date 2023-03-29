
//WAP to print number in reverse order.....

#include<stdio.h>
void main()
{
	int i,r,no,rno;
	
	
	printf("enter the number : ");
	scanf("%d",&no);
	
	for(i=no;no!=0;no=no/10)
	{
		r=no%10;
		rno=rno*10+r;
		
	}
	printf("reverse number %d",rno);
	
}







