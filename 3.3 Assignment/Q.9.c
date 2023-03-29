
//Write a program of structure for five employee that provides the following 
//information -print and display empno, empname, address and age....

#include<stdio.h>
struct Employee
{
	int Emp_no,Emp_age;
	char Emp_name[10],Emp_add[20];
}
main()
{
	struct Employee e[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\nEmployee %d\n",i+1);
		printf("enter Emp_no :");
		scanf("%d",&e[i].Emp_no);
		
			printf("enter Emp_age :");
			scanf("%d",&e[i].Emp_age);
			
				printf("enter Emp_name :");
				scanf("%s",&e[i].Emp_name);
				
					printf("enter Emp_add :");
					scanf("%s",&e[i].Emp_add);
	}
	for(i=0;i<5;i++)
	{
			printf("\n%d",e[i].Emp_no);
			printf("\n%d",e[i].Emp_age);
			printf("\n%s",e[i].Emp_name);
			printf("\n%s\n",e[i].Emp_add);
					
	}
}