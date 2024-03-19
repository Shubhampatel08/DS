// lab no:5

#include<stdio.h>
#include<conio.h>

struct emp{
	char emp_name[20];
	int emp_id;
	char emp_designation[50];
	float emp_salary;
}; 

int main()
{
	struct emp e;
	struct emp *empptr = &emp;
	
	printf("Enter Details:\n");
	
	printf("Enter Employee Name:\n");
	scanf("%d",e.emp_name);
	
	printf("Enter Employee ID:\n");
	scanf("%d",e.emp_id);
	
	printf("Enter Employee Designation:\n");
	scanf("%d",e.emp_designation);
	
	printf("Enter Employee Salary:\n");
	scanf("%d",e.emp_salary);
	
	printf("Enter Employee Name::%s",ptr->emp_name);
	printf("Enter Employee Name::%d",ptr->emp_id);
	printf("Enter Employee Name::%s",ptr->emp_designation);
	printf("Enter Employee Name::%.2f",ptr->emp_salary);
	return 0;
	
}
