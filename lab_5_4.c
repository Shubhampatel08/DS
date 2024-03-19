#include<stdio.h>
struct Employee_Detail {
    int Employee_id;
    char Name[50];
    char Designation[50];
    float Salary;
};
int main() {
    struct Employee_Detail emp;
    struct Employee_Detail *empPtr = &emp;
    printf("Enter Employee ID: ");
    scanf("%d", &(empPtr->Employee_id));
    printf("Enter Name: ");
    scanf("%s", empPtr->Name);
    printf("Enter Designation: ");
    scanf("%s", empPtr->Designation);
    printf("Enter Salary: ");
    scanf("%f", &(empPtr->Salary));
    printf("\nEmployee Details:\n");
    printf("Employee ID: %d\n", empPtr->Employee_id);
    printf("Name: %s\n", empPtr->Name);
    printf("Designation: %s\n", empPtr->Designation);
    printf("Salary: %.2f\n", empPtr->Salary);
    return 0;
}

