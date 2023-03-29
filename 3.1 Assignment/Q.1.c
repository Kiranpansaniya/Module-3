
//Display This Information using printf 
//1. Your Name 
//2. Your Birth date
//3. Your Age 
//4. Your Address

#include<stdio.h>
void main()
{
	int age;
	char name[20],address[20],mobile_no[20],birth_date[20];
	
		
	printf("Enter name  : ");
	scanf("%s",&name);

	printf("enter mobilr_no : ");
	scanf("%s",&mobile_no);
	
	printf("enter birth_date : ");
	scanf("%s",&birth_date);
	
	
	printf("enter age : ");
	scanf("%d",&age);
	
	
	printf("enter address : ");
	scanf("%s",&address);
	
	
	printf("\nname : %s",name);
	printf("\nmobile no :%s",mobile_no);
	printf("\nbirth_date : %s",birth_date);
	printf("\nyear : %d",age);
	printf("\naddress : %s",address);
	
}