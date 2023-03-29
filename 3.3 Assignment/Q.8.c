
//Write a program of structure employee that provides the following 
//information -print and display empno, empname, address and age.....

#include<stdio.h>
struct Employee
{
	int Emp_no,Emp_age;
	char Emp_name[10],Emp_add[20];
}
main()
{
	struct Employee e1;
	
		printf("enter Emp_no :");
		scanf("%d",&e1.Emp_no);
		
			printf("enter Emp_age :");
			scanf("%d",&e1.Emp_age);
			
				printf("enter Emp_name :");
				scanf("%s",&e1.Emp_name);
				
					printf("enter Emp_add :");
					scanf("%s",&e1.Emp_add);
	
	
			printf("\n%d",e1.Emp_no);
			printf("\n%d",e1.Emp_age);
			printf("\n%s",e1.Emp_name);
			printf("\n%s",e1.Emp_add);
					
}
