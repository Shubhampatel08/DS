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
	
	printf("Enter Details:\n");
	
	printf("\nEnter Employee Name:");
	scanf("%d",e.emp_name);
	
	printf("\nEnter Employee ID:");
	scanf("%d",e.emp_id);
	
	printf("\nEnter Employee Designation:");
	scanf("%d",e.emp_designation);
	
	printf("\nEnter Employee Salary:");
	scanf("%d",e.emp_salary);
	
	printf("Enter Employee Name::%s",e.emp_name);
	printf("Enter Employee Name::%d",e.emp_id);
	printf("Enter Employee Name::%s",e.emp_designation);
	printf("Enter Employee Name::%.2f",e.emp_salary);
	return 0;
	
}
